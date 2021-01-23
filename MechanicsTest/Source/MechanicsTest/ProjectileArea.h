// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileClass.h"
#include "ProjectileArea.generated.h"



UCLASS()
class MECHANICSTEST_API AProjectileArea : public AProjectileClass
{
	GENERATED_BODY()
	
public:
	AProjectileArea();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//type of area for spawning when this projectile dead
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AAreaClass> AreaSpawn;

	//Bool for applying tick damage or not
	bool isApplyTickDamage = false;

public:

	void LaunchOrb();

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void SetTickDamage(bool b) { isApplyTickDamage = b; }

};
