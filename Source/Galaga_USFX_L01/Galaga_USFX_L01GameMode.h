// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:

	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;

	TArray<ANaveEnemiga*> TANavesEnemigas;

	int Tiempo;
	int Cantidad;
protected:

	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};