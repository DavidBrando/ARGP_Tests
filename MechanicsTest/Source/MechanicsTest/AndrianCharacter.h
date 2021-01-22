// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MechanicsTestCharacter.h"
#include "AndrianCharacter.generated.h"

class UParticleSystemComponent;

UCLASS()
class MECHANICSTEST_API AAndrianCharacter : public AMechanicsTestCharacter
{
	GENERATED_BODY()

public:

	AAndrianCharacter();

	virtual void BeginPlay() override;

public:

	////Create a magic fireball to shoot it
	virtual void SpecialAbility1() override;

	////Spawn an area where each player receive a damage buff
	virtual void SpecialAbility2() override;

	////Spawn an orb than can perform a instant dmg or per tick
	virtual void SpecialAbility3() override;

	////Activate for some time homing projectiles
	virtual void SpecialAbility4() override;

	////Teleports the player to a location where he is locking
	virtual void SpecialAbility5() override;

	////Makes player invisible
	virtual void SpecialAbility6() override;

	virtual void BuffControl(int buffType, float factorizedBuff) override;


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility1 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality1Coldown = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility2 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality2Coldown = 8.0f;


	//need to created others timers and bools for abilites
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AProjectileClass> bulletType;

	// component of the projectile to spawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SpawnProjectile;

	// component of the area to spawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SpawnArea;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* AnimMontage;

	//VFX
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = VFX, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* VFX_Buff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AAreaClass> AreaBuff;

private:

	//Function for reset time handle for ability 1, fire ball
	void ResetTimerForAbility1();
	FTimerHandle TimerHandleAbility1;

	//Function for reset time handle for ability 2, area buff
	void ResetTimerForAbility2();
	FTimerHandle TimerHandleAbility2;

	void ChangeMoviementCharacter(bool isUsingControllerRotationYaw, bool isUsingOrientRotationToMovement);

	FTransform CalculateTransform(FVector A, FVector B, bool bImpact);

};
