// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IngenieroGeneral.h"
#include "IngenieroEspecialista1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AIngenieroEspecialista1 : public AActor, public IIngenieroGeneral
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIngenieroEspecialista1();

	class AConstruirNaveNodriza* ConstruirNave;

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
