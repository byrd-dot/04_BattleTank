// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
public:
	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	ATank* GetAIControlledTank();
	ATank* GetPlayerTank();
	void AimTowardsCrosshair();
	bool GetSiteRayHitLocation(FVector) const;

};
