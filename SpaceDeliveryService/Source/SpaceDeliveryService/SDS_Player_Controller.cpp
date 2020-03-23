// Fill out your copyright notice in the Description page of Project Settings.


#include "SDS_Player_Controller.h"

ASDS_Player_Controller::ASDS_Player_Controller()
{
	
}

//void ASDS_Player_Controller::PostInitializeComponents()
//{
//	Super::PostInitializeComponents();
//
//}

void ASDS_Player_Controller::BeginPlay()
{
	Super::BeginPlay();
	InputComponent->BindAxis(TEXT("Turn"), this, &ASDS_Player_Controller::Turn);
	InputComponent->BindAxis(TEXT("LookUp"), this, &ASDS_Player_Controller::LookUp);
	InputComponent->BindAxis(TEXT("Roll"), this, &ASDS_Player_Controller::Roll);
}

void ASDS_Player_Controller::Turn(float AxisValue)
{
	ControlRotation = FRotator(0, 0, AxisValue);

}

void ASDS_Player_Controller::LookUp(float AxisValue)
{
	ControlRotation = FRotator(0, AxisValue, 0);
}

void ASDS_Player_Controller::Roll(float AxisValue)
{
	ControlRotation = FRotator(AxisValue, 0, 0);
}
