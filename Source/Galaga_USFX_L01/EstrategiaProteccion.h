// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiasNavePawn.h"
#include "EstrategiaProteccion.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstrategiaProteccion : public AActor, public IEstrategiasNavePawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaProteccion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<class AEscudoNodriza*> Escudos;

	FTimerHandle TimerHandle;

	class AGalaga_USFX_L01Pawn* Play;

public:

	void EmplearEstrategia(class AGalaga_USFX_L01Pawn* Player) override;
	void DestruirEscudos();
};
