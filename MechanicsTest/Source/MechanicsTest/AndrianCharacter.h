// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MechanicsTestCharacter.h"
#include "AndrianCharacter.generated.h"

class UParticleSystemComponent;
class UMaterial;
class AProjectileArea;

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

	UFUNCTION(BlueprintCallable)
	void AttachOrbToHand();

	UFUNCTION(BlueprintCallable)
	void LaunchOrb();


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility1 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality1Coldown = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility2 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality2Coldown = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility3 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality3Coldown = 9.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility4 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality4Coldown = 12.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility5 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality5Coldown = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	bool isCastingAbility6 = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
	float Abality6Coldown = 10.0f;


	//need to created others timers and bools for abilites



protected:


	//type of projectile for shooting main ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AProjectileClass> bulletType;

	//type of projectile for shooting orb ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<AProjectileArea> orbType;

	AProjectileArea* AreaProjectile;

	// component of the projectile to spawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		USceneComponent* SpawnProjectile;

	// component of the area to spawn
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		USceneComponent* SpawnArea;

	//Anim montage for shooting fire balls
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		UAnimMontage* AnimMontageFireBall;

	//Anim montage for shooting fire balls
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
		UAnimMontage* AnimMontageOrb;

	//Will change for each spawn of the ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	bool tickDamage = false;

	//VFX
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = VFX, meta = (AllowPrivateAccess = "true"))
		UParticleSystemComponent* VFX_Buff;

	//Area buff for spawning.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AbilityVariables, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<class AAreaClass> AreaBuff;

	//Material for make character invisible
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VFX, meta = (AllowPrivateAccess = "true"))
		UMaterial* invisibleMaterial;

	//Default material
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VFX, meta = (AllowPrivateAccess = "true"))
		UMaterial* DefaultMaterial;

	//Objcetive for homing projectiles
	AMechanicsTestCharacter* Objective;

private:

	//Function for reset time handle for ability 1, fire ball
	void ResetTimerForAbility1();
	FTimerHandle TimerHandleAbility1;

	//Function for reset time handle for ability 2, area buff
	void ResetTimerForAbility2();
	FTimerHandle TimerHandleAbility2;

	//Function for reset time handle for ability 3, acid orb
	void ResetTimerForAbility3();
	FTimerHandle TimerHandleAbility3;

	//Function for reset time handle for ability 4, homing projectiles for fire ball
	void ResetTimerForAbility4();
	FTimerHandle TimerHandleAbility4;

	//Function for reset time handle for ability 5, tp ability
	void ResetTimerForAbility5();
	FTimerHandle TimerHandleAbility5;

	//Function for reset time handle for ability 6, invisibility ability
	void ResetTimerForAbility6();
	FTimerHandle TimerHandleAbility6;

	//Special function for change character movement
	void ChangeMoviementCharacter(bool isUsingControllerRotationYaw, bool isUsingOrientRotationToMovement);

	FTransform CalculateTransform(FVector A, FVector B, bool bImpact);

};
