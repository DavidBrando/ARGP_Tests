// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthSystemComponent.h"

// Sets default values for this component's properties
UHealthSystemComponent::UHealthSystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	health = 100.f;
	maxHealth = health;
	alive = true;
}


// Called when the game starts
void UHealthSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UHealthSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UHealthSystemComponent::TakeDamage(float dmg)
{
	health -= dmg;

	if (health <= 0.0f) {
		alive = false;
	}

}

void UHealthSystemComponent::Heal(float nHeal)
{
	health += nHeal;

	if (health >= maxHealth) {
		health = maxHealth;
	}

}


