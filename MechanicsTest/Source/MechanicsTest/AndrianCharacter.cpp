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
#include "Components/SkeletalMeshComponent.h"
#include "ProjectileArea.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"

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
		bool isHitting = GetWorld()->LineTraceSingleByChannel(OutHit, start, end, ECC_Camera, ColisionParams);

		//Calling the method that will give us the transform for spawn the projectile
		FTransform SpawnInfo = CalculateTransform(OutHit.ImpactPoint, OutHit.TraceEnd, isHitting);

		//Playing animation
		if (AnimMontageFireBall) {

			Abality1Coldown = PlayAnimMontage(AnimMontageFireBall);

		}

		//Changing movement controller for setup with evoking a fireball
		ChangeMoviementCharacter(true, false);





		if (bulletType) {

			//Spawning info
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;

			AProjectileClass* projectile = GetWorld()->SpawnActor<AProjectileClass>(bulletType, SpawnInfo, SpawnParams);
			projectile->SetDamage(Ability1_Damage);


			//applying homing projectiles if ability 4 is on use
			if (isCastingAbility4 == true) {
				
				//First was on mesh, but seems the mesh was going to floor position, so I use arrow component to be the target.
				projectile->MakeProjectileHoming(Objective->GetArrowComponent());
			}
			
		}

		//Reset ability coldown
		GetWorldTimerManager().SetTimer(TimerHandleAbility1, this, &AAndrianCharacter::ResetTimerForAbility1, Abality1Coldown, false);
		
	}


}

//Spawn area buff
void AAndrianCharacter::SpecialAbility2()
{
	if (isCastingAbility2 == false) {

		isCastingAbility2 = true;



		if (AreaBuff) {

			//Spawning info
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			
			GetWorld()->SpawnActor<AAreaClass>(AreaBuff, SpawnArea->GetComponentLocation(), FRotator(0.0f), SpawnParams);
		}

		//Reset ability coldown
		GetWorldTimerManager().SetTimer(TimerHandleAbility2, this, &AAndrianCharacter::ResetTimerForAbility2, Abality2Coldown, false);
	}
}

//Create acid orb to launch it
void AAndrianCharacter::SpecialAbility3()
{
	if (isCastingAbility3 == false) {

		isCastingAbility3 = true;

		if (orbType != nullptr) {

			//Spawning info
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;

			AreaProjectile = GetWorld()->SpawnActor<AProjectileArea>(orbType, SpawnProjectile->GetComponentLocation(), FRotator(0.0f), SpawnParams);
			AreaProjectile->SetTickDamage(tickDamage);


			if (AnimMontageOrb) {
				Abality3Coldown = PlayAnimMontage(AnimMontageOrb);
			}

			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, AreaProjectile->GetActorLocation().ToString());


			//start on false
			tickDamage = !tickDamage;

			//Reset ability coldown
			GetWorldTimerManager().SetTimer(TimerHandleAbility3, this, &AAndrianCharacter::ResetTimerForAbility3, Abality3Coldown, false);
		}

	}
}


void AAndrianCharacter::AttachOrbToHand()
{
	//Attach new orb to the hand
	FAttachmentTransformRules rules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	AreaProjectile->AttachToComponent(Cast<USceneComponent>(GetMesh()), rules, "ProjectileSpawn");
}

void AAndrianCharacter::LaunchOrb()
{
	//Detach orb projectile
	FDetachmentTransformRules rules(EDetachmentRule::KeepWorld, false);
	AreaProjectile->DetachFromActor(rules);
	AreaProjectile->LaunchOrb(FollowCamera->GetForwardVector());
}


//Activating homing projectiles
void AAndrianCharacter::SpecialAbility4()
{
	if (isCastingAbility4 == false) {

		//Getting vectors for math caltulations
		const FVector ForwardCamVector = FollowCamera->GetForwardVector();
		const float Distance = 3000.0f;

		//Preparing location info from impacting
		FHitResult OutHit;
		FVector start = FollowCamera->GetComponentLocation();
		FVector end = (ForwardCamVector * Distance) + start;
		FCollisionQueryParams ColisionParams;

		//Tracing raycasting for localize a enemy for prepare homing misiles
		bool isHitting = GetWorld()->LineTraceSingleByChannel(OutHit, start, end, ECC_Camera, ColisionParams);

		DrawDebugLine(GetWorld(), start, end, FColor::Green, 1.0f);

		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, isHitting ? TEXT("true") : TEXT("false"));

		//if we hit something, checking if it is a enemy
		if (isHitting == true) {

			Objective = Cast<AMechanicsTestCharacter>(OutHit.Actor);

			//if cast was done correctly
			if (Objective && Objective->GetIsEnemy() == true) {

				GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, Objective->GetName());

				isCastingAbility4 = true;
				VFX_Buff->Activate();

				//Reset ability coldown
				GetWorldTimerManager().SetTimer(TimerHandleAbility4, this, &AAndrianCharacter::ResetTimerForAbility4, Abality4Coldown, false);
			}

		}

	}
}

//TP ability
void AAndrianCharacter::SpecialAbility5()
{
	if (isCastingAbility5 == false) {

		isCastingAbility5 = true;
		//Getting vectors for math caltulations
		const FVector ForwardCamVector = FollowCamera->GetForwardVector();
		const float Distance = 1200.0f;
		FVector destination;

		//Preparing location info from impacting
		FHitResult OutHit;
		FVector start = FollowCamera->GetComponentLocation();
		FVector end = (ForwardCamVector * Distance) + start;
		FCollisionQueryParams ColisionParams;

		//Tracing raycasting
		bool isHitting = GetWorld()->LineTraceSingleByChannel(OutHit, start, end, ECC_Visibility, ColisionParams);

		if (isHitting) {

			destination = OutHit.ImpactPoint;
		}

		else {
			destination = end;
		}

		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, destination.ToString());


		TeleportTo(destination, this->GetActorRotation());

		//Reset ability coldown
		GetWorldTimerManager().SetTimer(TimerHandleAbility5, this, &AAndrianCharacter::ResetTimerForAbility5, Abality5Coldown, false);
	}
}

//Invisible ability
void AAndrianCharacter::SpecialAbility6()
{
	if (isCastingAbility6 == false) {

		isCastingAbility6 = true;

		//assigning material for create the ilusion of invisibility
		if (invisibleMaterial) {

			GetMesh()->SetMaterial(0, Cast<UMaterialInterface>(invisibleMaterial));

		}

		//Reset ability coldown
		GetWorldTimerManager().SetTimer(TimerHandleAbility6, this, &AAndrianCharacter::ResetTimerForAbility6, Abality6Coldown, false);
	}
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

void AAndrianCharacter::ResetTimerForAbility3()
{
	isCastingAbility3 = false;
	GetWorldTimerManager().ClearTimer(TimerHandleAbility3);
}

void AAndrianCharacter::ResetTimerForAbility4()
{
	isCastingAbility4 = false;
	VFX_Buff->Deactivate();
	GetWorldTimerManager().ClearTimer(TimerHandleAbility4);
}

void AAndrianCharacter::ResetTimerForAbility5()
{
	isCastingAbility5 = false;
	GetWorldTimerManager().ClearTimer(TimerHandleAbility5);
}

void AAndrianCharacter::ResetTimerForAbility6()
{
	//putting back default material
	if (DefaultMaterial) {
		GetMesh()->SetMaterial(0, Cast<UMaterialInterface>(DefaultMaterial));
	}

	isCastingAbility6 = false;
	GetWorldTimerManager().ClearTimer(TimerHandleAbility6);
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
