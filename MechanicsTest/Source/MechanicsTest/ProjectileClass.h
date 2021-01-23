// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileClass.generated.h"

class USphereComponent;
class UParticleSystemComponent;
class USceneComponent;
class UProjectileMovementComponent;
class UParticleSystem;
class UCapsuleComponent;


UCLASS()
class MECHANICSTEST_API AProjectileClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//For colision purposes
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ProjectilComp, meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* capsule;

	//root component of the projectile
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ProjectilComp, meta = (AllowPrivateAccess = "true"))
		USceneComponent* root;

	//VFX
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ProjectilComp, meta = (AllowPrivateAccess = "true"))
		UParticleSystemComponent* bullet;

	//Component for movement with the logic implemented
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ProjectilComp, meta = (AllowPrivateAccess = "true"))
		UProjectileMovementComponent* projectileMovement;

	//More VFX for cool explosions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectilComp, meta = (AllowPrivateAccess = "true"))
		UParticleSystem* explosion = nullptr;

	//Damage of the projectile
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = ProjectilComp, meta = (AllowPrivateAccess = "true"))
	float damage = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void SetDamage(float nDamage); //seeting a new damage if we want more powerful shoots

};
