// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileArea.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AreaClass.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"


AProjectileArea::AProjectileArea() {

	projectileMovement->Velocity = FVector(0.0f);
	capsule->SetCollisionProfileName(TEXT("NoCollision"));

}

void AProjectileArea::BeginPlay()
{
	Super::BeginPlay();
	capsule->OnComponentBeginOverlap.AddDynamic(this, &AProjectileArea::OnOverlapBegin);
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, this->GetOwner()->GetName());
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, isApplyTickDamage ? TEXT("true") : TEXT("false"));

}

void AProjectileArea::LaunchOrb(FVector CamForwardVector)
{
	capsule->SetCollisionProfileName(TEXT("BulletType"));
	projectileMovement->Velocity = CamForwardVector * 5000.0f;
	projectileMovement->ProjectileGravityScale = 0.5f;

}

void AProjectileArea::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != GetOwner()) {

		if (explosion) {
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosion, OtherActor->GetActorLocation(), FRotator(0.0f));
		}

		//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, OtherActor->GetName());

			//Sending damage using TakeDamage event
		TSubclassOf<UDamageType> const ValidDamageTypeClass;
		FDamageEvent DamageEvent(ValidDamageTypeClass);

		OtherActor->TakeDamage(damage, DamageEvent, nullptr, this);

		//Spawning info
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();

		if (AreaSpawn != nullptr) {
			AAreaClass* area = GetWorld()->SpawnActor<AAreaClass>(AreaSpawn, this->GetActorLocation(), FRotator(0.0f), SpawnParams);
			area->SetApplyingTick(isApplyTickDamage);
		}

		Destroy();

	}


}




