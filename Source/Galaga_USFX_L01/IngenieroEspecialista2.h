// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IngenieroGeneral.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IngenieroEspecialista2.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AIngenieroEspecialista2 : public AActor,public IIngenieroGeneral
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngenieroEspecialista2();

	class AConstruirNaveNodriza* ConstruirNave1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void ContruirNave(int a) override;
	void ContruirEscudos(int b) override;
	void ContruirProyectiles(int c) override;
	void ContruirArmas(int d) override;
	class AConstruirNaveNodriza* ObtenerNaveNodriza() override;

};
