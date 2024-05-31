// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "EstadoNaveGiratorio.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoNaveGiratorio : public AActor, public IIEstados
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoNaveGiratorio();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void EnlazarNave(class ANaveEspecialista* _NaveEsp) override;
	void Giratorio() override;
	FString ObtenerEstado() override;

private:

	void Defensivo() override {};
	void Letal() override {};
	void Neutral() override {};

protected:

	class ANaveEspecialista* Nave;
};
