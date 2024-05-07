// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IngenieroGeneral.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapitanNavesNodrizas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ACapitanNavesNodrizas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapitanNavesNodrizas();

	IIngenieroGeneral* IngenieroACargo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void OrdenarIngeniero(AActor* Ingeniero);
	void ContruirNaveNodriza();
	void ConstruirNaveEscudo();
	void ConstruirNaveBatalla();
	class AConstruirNaveNodriza* ObtenerNave();

};
