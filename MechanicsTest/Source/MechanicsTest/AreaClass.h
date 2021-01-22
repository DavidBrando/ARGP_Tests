// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AreaClass.generated.h"


class USphereComponent;
class UParticleSystemComponent;
class USceneComponent;
class UCapsuleComponent;
class UStaticMeshComponent;

UCLASS()
class MECHANICSTEST_API AAreaClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAreaClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//For colision purposes
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AreaComp, meta = (AllowPrivateAccess = "true"))
		UCapsuleComponent* capsule;

	//root component of the projectile
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AreaComp, meta = (AllowPrivateAccess = "true"))
		USceneComponent* root;

	//VFX
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AreaComp, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* VFX;

	//Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AreaComp, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh;

	//Bool for know if this area apply damage or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AreaInfo, meta = (AllowPrivateAccess = "true"))
	bool isDoingDamage;

	//value for damage than apply this area or buff, could be negative for buffs
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AreaInfo, meta = (AllowPrivateAccess = "true"))
	float areaValue;

	//value that indicates how many time live this object
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AreaInfo, meta = (AllowPrivateAccess = "true"))
	float areaLife;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
