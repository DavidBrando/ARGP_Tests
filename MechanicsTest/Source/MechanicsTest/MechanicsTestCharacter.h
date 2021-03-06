// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MechanicsTestCharacter.generated.h"

class UHealthSystemComponent;

UCLASS(config=Game)
class AMechanicsTestCharacter : public ACharacter
{
	GENERATED_BODY()
protected:
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

//Variables

public:
	AMechanicsTestCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

//Functions

public:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	//called for jumping
	void StartJumping();

	//called for stop jumping
	void EndJumping();

	//call AddControllerYawInput from Pawn
	void PlayerAddControllerYawInput(float value);
	
	//call AddControllerPitchInput from Pawn
	void PlayerAddControllerPitchInput(float value);

	virtual void BeginPlay() override;

	//Functions for special abilities that will be inplemented on child classes
	virtual void SpecialAbility1();
	virtual void SpecialAbility2();
	virtual void SpecialAbility3();
	virtual void SpecialAbility4();
	virtual void SpecialAbility5();
	virtual void SpecialAbility6();

	UFUNCTION(BlueprintCallable)
	virtual void BuffControl(int buffType, float factorizedBuff);


//Variables

protected:

	//Component with heal system logic
	UHealthSystemComponent* PlayerHealthSystem;

	//Stats for default damage
	float Ability1_Damage = 25.0f;
	float DefaultAbility1_Damage = 25.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InfoCharacter, meta = (AllowPrivateAccess = "true"))
	bool bIsEnemy = false;

	virtual float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	
	//Get Health component for make changes
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UHealthSystemComponent* GetHealthComponent() { return PlayerHealthSystem;  }

	//Check if is enemy or not
	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsEnemy() { return bIsEnemy; }

};

