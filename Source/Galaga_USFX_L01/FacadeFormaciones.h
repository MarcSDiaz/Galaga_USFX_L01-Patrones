// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeFormaciones.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFacadeFormaciones : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeFormaciones();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	class AFacade_FabricasEscuadrones* Escuadron;
	
	void FormacionFacil(FString Orden);
	void FormacionIntermedia(FString Orden);
	void FormacionDificil(FString Orden);
	void FormacionFinal(FString Orden);
};
