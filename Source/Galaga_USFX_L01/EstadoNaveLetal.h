// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "EstadoNaveLetal.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoNaveLetal : public AActor, public IIEstados
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoNaveLetal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void EnlazarNave(class ANaveEspecialista* _NaveEsp) override;
	void Letal() override;
	FString ObtenerEstado() override;

	/*float TiempoDisparo;*/

private:

	void Defensivo() override {};
	void Neutral() override {};
	void Giratorio() override {};

protected:

	class ANaveEspecialista* Nave;

	class AProyectilNodriza* Proyectil;

};
