// Fill out your copyright notice in the Description page of Project Settings.


#include "AreaClass.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AAreaClass::AAreaClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("root"));
	RootComponent = root;

	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	//capsule->SetCollisionProfileName(TEXT(""));
	capsule->SetupAttachment(root);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	Mesh->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);

	VFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFX"));
	VFX->SetupAttachment(root);
}

// Called when the game starts or when spawned
void AAreaClass::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AAreaClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAreaClass::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

