// Fill out your copyright notice in the Description page of Project Settings.


#include "ARPG_PlayerController.h"
#include "MechanicsTestCharacter.h"

/*
This controlled will be only used for pawns controlled by the player
*/

AARPG_PlayerController::AARPG_PlayerController() {

	
	//MyPawn = Cast<AMechanicsTestCharacter>(this->GetPawn());

}


void AARPG_PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	//Getting controlled pawn from player
	MyPawn = Cast<AMechanicsTestCharacter>(this->GetPawn());

}

//Input inicialization

void AARPG_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent);

	InputComponent->BindAction("Jump", IE_Pressed, this, &AARPG_PlayerController::MyPawnStartJumping);
	InputComponent->BindAction("Jump", IE_Released, this, &AARPG_PlayerController::MyPawnEndJumping);

	InputComponent->BindAxis("MoveForward", this, &AARPG_PlayerController::MyPawnMoveForward);
	InputComponent->BindAxis("MoveRight", this, &AARPG_PlayerController::MyPawnMoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	InputComponent->BindAxis("Turn", this, &AARPG_PlayerController::MyPawnAddControllerYawInput);
	InputComponent->BindAxis("TurnRate", this, &AARPG_PlayerController::MyPawnTurnAtRate);
	InputComponent->BindAxis("LookUp", this, &AARPG_PlayerController::MyPawnControllerPitchInput);
	InputComponent->BindAxis("LookUpRate", this, &AARPG_PlayerController::MyPawnLookUpAtRate);

}


//Input functions for controlled pawn

void AARPG_PlayerController::MyPawnMoveForward(float Value)
{
	if(MyPawn != nullptr) {
		MyPawn->MoveForward(Value);

	}
}

void AARPG_PlayerController::MyPawnMoveRight(float Value)
{
	if (MyPawn != nullptr) {
		MyPawn->MoveRight(Value);

	}
}

void AARPG_PlayerController::MyPawnTurnAtRate(float Rate)
{
	if (MyPawn != nullptr) {
		MyPawn->TurnAtRate(Rate);

	}
}

void AARPG_PlayerController::MyPawnLookUpAtRate(float Rate)
{
	if (MyPawn != nullptr) {
		MyPawn->LookUpAtRate(Rate);

	}
}

void AARPG_PlayerController::MyPawnStartJumping()
{
	if (MyPawn != nullptr) {
		MyPawn->StartJumping();

	}
}

void AARPG_PlayerController::MyPawnEndJumping()
{
	if (MyPawn != nullptr) {
		MyPawn->EndJumping();

	}
}

void AARPG_PlayerController::MyPawnAddControllerYawInput(float value)
{
	if (MyPawn != nullptr) {
		MyPawn->AddControllerYawInput(value);

	}
}

void AARPG_PlayerController::MyPawnControllerPitchInput(float value)
{
	if (MyPawn != nullptr) {
		MyPawn->AddControllerPitchInput(value);

	}
}
