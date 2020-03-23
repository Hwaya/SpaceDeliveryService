// Fill out your copyright notice in the Description page of Project Settings.


#include "SDS_Ship.h"

// Sets default values
ASDS_Ship::ASDS_Ship()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASDS_Ship::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASDS_Ship::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASDS_Ship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

