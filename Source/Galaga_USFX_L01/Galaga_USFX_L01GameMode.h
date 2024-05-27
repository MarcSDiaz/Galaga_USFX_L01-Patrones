// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveSubscriptor_1;
class ANaveSubscriptor_2;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

	/*class AIngenieroEspecialista1* Ingeniero;
	class AIngenieroEspecialista2* Ingeniero2;
	class AIngenieroEspecialista3* Ingeniero3;

	class ACapitanNavesNodrizas* Capitan;

	class AFacade_FabricasEscuadrones* Facade;

	class AFacadeFormaciones* Facade2;*/

public:

	/*ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;

	TArray<ANaveEnemiga*> TANavesEnemigas;

	int Tiempo;
	int Cantidad;*/

protected:

	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	class ARadar* Radar;
	class ANaveSubscriptor_1* NaveSubscriptor1;
	class ANaveSubscriptor_2* NaveSubscriptor2;

	class ANaveEspecialista* NaveEspecialista;


public:

	TArray<ANaveSubscriptor_1*> NavesSub1;
	TArray<ANaveSubscriptor_2*> NavesSub2;

	float TotalEnergy;
	int V;

	FVector PosNavesSub1;
	FVector PosNavesSub2;

	float State;
	int Estado;

};
