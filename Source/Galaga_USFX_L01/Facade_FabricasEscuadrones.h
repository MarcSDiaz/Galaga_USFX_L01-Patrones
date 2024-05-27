// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaNaves.h"
#include "Facade_FabricasEscuadrones.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFacade_FabricasEscuadrones : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade_FabricasEscuadrones();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	AFabricaNaves* FabricaCaza;
	AFabricaNaves* FabricaTransporte;
	AFabricaNaves* FabricaDestructores;

	TArray<ANaveEnemiga*> TANavesEnemigas;

	FVector PosEscuadronPrimario;
	FVector PosEscuadronSecundario;
	FVector PosEscuadronTerciario;

public:

	void EstablecerFabricas();
	void CrearEscuadronPrimario();
	void CrearEscuadronSecundario();
	void CrearEscuadronTerciario();
	void DestruirFormacion();

};
