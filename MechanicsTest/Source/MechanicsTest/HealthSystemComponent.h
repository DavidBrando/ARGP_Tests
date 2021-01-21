// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthSystemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MECHANICSTEST_API UHealthSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthSystemComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerVariables)
		bool alive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerVariables)
		float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerVariables)
		float maxHealth;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetHealth() { return health; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetFactorizedHealth() { return health / maxHealth; };

	UFUNCTION(BlueprintCallable)
		void TakeDamage(float dmg);

	UFUNCTION(BlueprintCallable)
		void Heal(float nHeal);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool GetAlive() { return alive; }

};
