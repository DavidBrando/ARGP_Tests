// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileClass.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"

#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"

// Sets default values
AProjectileClass::AProjectileClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Declaring root component
	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = root;

	//Creating capsule for collision purperses

	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Colider"));
	capsule->SetCollisionProfileName(TEXT("BulletType"));
	capsule->SetupAttachment(root);

	//Prepering to lunch the magic!!
	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovement->InitialSpeed = 750.0f;
	projectileMovement->MaxSpeed = 750.0f;
	projectileMovement->ProjectileGravityScale = 0.0f;

	//Cool VFX effects
	bullet = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Bullet"));
	bullet->SetupAttachment(root);

	//Defualt damage value
	damage = 25.0f;
}

// Called when the game starts or when spawned
void AProjectileClass::BeginPlay()
{
	Super::BeginPlay();
	capsule->OnComponentBeginOverlap.AddDynamic(this, &AProjectileClass::OnOverlapBegin);

}

// Called every frame
void AProjectileClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


//Function for applying damage to an enemy
void AProjectileClass::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != GetOwner()) {

		if (explosion) {
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosion, SweepResult.Location, FRotator(0.0f));
		}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, OtherActor->GetName());

		Destroy();
	}
}

