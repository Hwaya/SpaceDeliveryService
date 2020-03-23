// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SpaceDeliveryService.h"
#include "GameFramework/PlayerController.h"
#include "SDS_Player_Controller.generated.h"

/**
 * 
 */
UCLASS()
class SPACEDELIVERYSERVICE_API ASDS_Player_Controller : public APlayerController
{
	GENERATED_BODY()

		ASDS_Player_Controller();

	//virtual void PostInitializeComponents() override;

	virtual void BeginPlay() override;

public:
	void Turn(float AxisValue);
	void LookUp(float AxisValue);
	void Roll(float AxisValue);
};
