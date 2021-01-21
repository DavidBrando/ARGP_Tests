// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ARPG_PlayerController.generated.h"

class AMechanicsTestCharacter;
/**
 * 
 */
UCLASS()
class MECHANICSTEST_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()
	


public:

	AARPG_PlayerController();

protected:

	// Begin PlayerController interface
	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	// End PlayerController interface
	virtual void BeginPlay() override;


	/** Called for forwards/backward input */
	void MyPawnMoveForward(float Value);

	/** Called for side to side input */
	void MyPawnMoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void MyPawnTurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void MyPawnLookUpAtRate(float Rate);

	//called for jumping
	void MyPawnStartJumping();

	//called for stop jumping
	void MyPawnEndJumping();

	//call AddControllerYawInput from Pawn
	void MyPawnAddControllerYawInput(float value);

	//call AddControllerPitchInput from Pawn
	void MyPawnControllerPitchInput(float value);

	//Call the functions for player's abilities
	//Depending of what kind of player you have controller, it will be different
	void MyPawnSpecialAbility1();
	void MyPawnSpecialAbility2();
	void MyPawnSpecialAbility3();
	void MyPawnSpecialAbility4();
	void MyPawnSpecialAbility5();
	void MyPawnSpecialAbility6();


protected:

	AMechanicsTestCharacter* MyPawn;
};
