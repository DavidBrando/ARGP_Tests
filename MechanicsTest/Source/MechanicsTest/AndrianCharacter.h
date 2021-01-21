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

	void BuffControl();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility1 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality1Coldown = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility2 = false;

	//need to created others timers and bools for abilites
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AProjectileClass> bulletType;

	//root component of the projectile
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SpawnProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	UAnimMontage* AnimMontage;

	//VFX
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = VFX, meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* VFX_Buff;


private:

	//Function for reset time handle for ability 1
	void ResetTimerForAbility1();
	FTimerHandle TimerHandleAbility1;

	void ChangeMoviementCharacter(bool isUsingControllerRotationYaw, bool isUsingOrientRotationToMovement);

	FTransform CalculateTransform(FVector A, FVector B, bool bImpact);

};
