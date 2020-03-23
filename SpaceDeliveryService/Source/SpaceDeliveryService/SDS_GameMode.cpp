// Fill out your copyright notice in the Description page of Project Settings.


#include "SDS_GameMode.h"
#include "SDS_Ship.h"
#include "SDS_Player_Controller.h"

ASDS_GameMode::ASDS_GameMode()
{
	DefaultPawnClass = ASDS_Ship::StaticClass();
	PlayerControllerClass = ASDS_Player_Controller::StaticClass();
}

//void ASDS_GameMode::PostInitializeComponents()
//{
//	Super::PostInitializeComponents();
//
//
//}