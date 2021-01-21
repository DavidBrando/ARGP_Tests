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


AAndrianCharacter::AAndrianCharacter() {

	SpawnProjectile = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnProjectile"));
	SpawnProjectile->SetupAttachment(Cast<USceneComponent>(GetMesh()));
}

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

		//Spawning projectile
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		GetWorld()->SpawnActor<AProjectileClass>(bulletType, SpawnInfo, SpawnParams);

	}


}

void AAndrianCharacter::SpecialAbility2()
{
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

void AAndrianCharacter::ResetTimerForAbility1()
{
	ChangeMoviementCharacter(false, true);
	isCastingAbility1 = false;
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
