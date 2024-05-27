// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEspecialista.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveEspecialista : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEspecialista();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void GenerearDiferentesEstados(FString _State);
	void DarEstado(class IIEstados* State);

	class IIEstados* EstadoNaveDefensa;
	class IIEstados* EstadoNaveLetal;
	class IIEstados* EstadoNaveNeutral;

	class IIEstados* Estado;

	void EstadoDefensivo();
	void EstadoNeutral();
	void EstadoLetal();

	
};
