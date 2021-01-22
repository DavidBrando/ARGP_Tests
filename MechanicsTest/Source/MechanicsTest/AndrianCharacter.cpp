// Fill out your copyright notice in the Description page of Project Settings.


#include "AndrianCharacter.h"
#include "ProjectileClass.h"
#include "HealthSystemComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "AreaClass.h"


AAndrianCharacter::AAndrianCharacter() {

	SpawnProjectile = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnProjectile"));
	SpawnProjectile->SetupAttachment(Cast<USceneComponent>(GetMesh()));

	SpawnArea = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnArea"));
	SpawnArea->SetupAttachment(Cast<USceneComponent>(GetMesh()));

	//Cool VFX effects for when you get the buff
	VFX_Buff = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Buff Effects"));
	VFX_Buff->SetupAttachment(RootComponent);
	VFX_Buff->Deactivate();
}

void AAndrianCharacter::BeginPlay()
{
	Super::BeginPlay();
	VFX_Buff->Deactivate();
}

//Evoke a Fire ball to do damage
void AAndrianCharacter::SpecialAbility1()
{
	if (isCastingAbility1 == false) {

		isCastingAbility1 = true;
		//Getting vectors for math caltulations
		const FVector ForwardCamVector = FollowCamera->GetForwardVector();
		const float Distance = 1000.0f;

		//Preparing location info from impacting
		FHitResult OutHit;
		FVector start = FollowCamera->GetComponentLocation();
		FVector end = (ForwardCamVector * Distance) + start;
		FCollisionQueryParams ColisionParams;

		//Tracing raycasting
		bool isHitting = GetWorld()->LineTraceSingleByChannel(OutHit, start, end, ECC_Visibility, ColisionParams);

		//Calling the method that will give us the transform for spawn the projectile
		FTransform SpawnInfo = CalculateTransform(OutHit.ImpactPoint, OutHit.TraceEnd, isHitting);

		//Playing animation
		if (AnimMontage) {

			Abality1Coldown = PlayAnimMontage(AnimMontage);

		}

		//Changing movement controller for setup with evoking a fireball
		ChangeMoviementCharacter(true, false);

		//Reset ability coldown
		GetWorldTimerManager().SetTimer(TimerHandleAbility1, this, &AAndrianCharacter::ResetTimerForAbility1, Abality1Coldown, false);



		if (bulletType) {

			//Spawning info
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;

			AProjectileClass* projectile = GetWorld()->SpawnActor<AProjectileClass>(bulletType, SpawnInfo, SpawnParams);
			projectile->SetDamage(Ability1_Damage);
		}


	}


}

//Spawn area buff
void AAndrianCharacter::SpecialAbility2()
{
	if (isCastingAbility2 == false) {

		isCastingAbility2 = true;

		//Reset ability coldown
		GetWorldTimerManager().SetTimer(TimerHandleAbility2, this, &AAndrianCharacter::ResetTimerForAbility2, Abality2Coldown, false);

		if (AreaBuff) {

			//Spawning info
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			
			GetWorld()->SpawnActor<AAreaClass>(AreaBuff, SpawnArea->GetComponentLocation(), FRotator(0.0f), SpawnParams);
		}

	}
}

void AAndrianCharacter::SpecialAbility3()
{
}

void AAndrianCharacter::SpecialAbility4()
{
}

void AAndrianCharacter::SpecialAbility5()
{
}

void AAndrianCharacter::SpecialAbility6()
{
}

void AAndrianCharacter::BuffControl(int buffType, float factorizedBuff)
{
	switch (buffType)
	{

		//Damage buff
		case 0:
		{
			//Applying the results of increase of the buff, could be decrease too
			float value = DefaultAbility1_Damage * factorizedBuff;

			if (value > 0.0f) {
				VFX_Buff->Activate();
			}

			else {
				VFX_Buff->Deactivate();
			}

			Ability1_Damage += value;

		}

		//Defense buff
		case 1:
		{
			//needs to be implemented, preapred for future escalations
			VFX_Buff->Deactivate();

	
		}
		//Health buff
		case 2:
		{
			//do nothing
			VFX_Buff->Deactivate();

		}

		//Could perform a reset of the buffs
		default:
		{
			//do nothing
			VFX_Buff->Deactivate();

		
		}
	}
}


//Reset functions for coldowns

void AAndrianCharacter::ResetTimerForAbility1()
{
	ChangeMoviementCharacter(false, true);
	isCastingAbility1 = false;
	GetWorldTimerManager().ClearTimer(TimerHandleAbility1);
}

void AAndrianCharacter::ResetTimerForAbility2()
{
	isCastingAbility2 = false;
	GetWorldTimerManager().ClearTimer(TimerHandleAbility2);
}

//Method to desig how character will move when he is shooting or not
void AAndrianCharacter::ChangeMoviementCharacter(bool bUsingControllerRotationYaw, bool bUsingOrientRotationToMovement)
{
	bUseControllerRotationYaw = bUsingControllerRotationYaw;
	GetCharacterMovement()->bOrientRotationToMovement = bUsingOrientRotationToMovement;

}


// Calculates the coordenates for spawn a projectile
FTransform AAndrianCharacter::CalculateTransform(FVector A, FVector B, bool bImpact)
{
	FVector SelectedVector = UKismetMathLibrary::SelectVector(A, B, bImpact);
	const FVector SpawnPosition = SpawnProjectile->GetComponentLocation();
	const FVector SocketTransform = SpawnProjectile->GetSocketLocation(FName("None"));

	FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(SpawnPosition, SelectedVector);

	FTransform SpawnTransform(Rotation, SocketTransform, FVector(1.0f));

	return SpawnTransform;
}
