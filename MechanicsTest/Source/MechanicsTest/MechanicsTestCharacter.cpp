// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MechanicsTestCharacter.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "HealthSystemComponent.h"

//////////////////////////////////////////////////////////////////////////
// AMechanicsTestCharacter
// Base Character for test purposes

AMechanicsTestCharacter::AMechanicsTestCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	PlayerHealthSystem = CreateDefaultSubobject<UHealthSystemComponent>(TEXT("InfoPlayer"));
	this->AddOwnedComponent(PlayerHealthSystem);


}


void AMechanicsTestCharacter::BeginPlay()
{
	Super::BeginPlay();
	//GetWorldTimerManager().SetTimer(test, this, &AMechanicsTestCharacter::ResetTimer, 2.0f, false);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, GetController()->GetName());
	//PlayerHealthSystem->SettingLife(100.0f);

}

void AMechanicsTestCharacter::SpecialAbility1()
{
	// do nothing

}

void AMechanicsTestCharacter::SpecialAbility2()
{
	// do nothing
}

void AMechanicsTestCharacter::SpecialAbility3()
{
	// do nothing

}

void AMechanicsTestCharacter::SpecialAbility4()
{
	// do nothing

}

void AMechanicsTestCharacter::SpecialAbility5()
{
	// do nothing

}

void AMechanicsTestCharacter::SpecialAbility6()
{
	// do nothing

}

void AMechanicsTestCharacter::BuffControl(int buffType, float factorizedBuff)
{
	//do nothing
}



void AMechanicsTestCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMechanicsTestCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMechanicsTestCharacter::StartJumping()
{
	Jump();
}

void AMechanicsTestCharacter::EndJumping()
{
	StopJumping();
}

void AMechanicsTestCharacter::PlayerAddControllerYawInput(float value)
{
	AddControllerYawInput(value);
}


void AMechanicsTestCharacter::PlayerAddControllerPitchInput(float value)
{
	AddControllerPitchInput(value);
}



void AMechanicsTestCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMechanicsTestCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
