// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "EstadoNaveNeutro.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoNaveNeutro : public AActor, public IIEstados
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoNaveNeutro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void EnlazarNave(class ANaveEspecialista* _NaveEsp) override;
	void EstadoNeutral() override;
	FString ObtenerEstado() override;

private:

	void EstadoDefensa() override {};
	void EstadoLetal() override {};

protected:

	class ANaveEspecialista* Nave;
};
