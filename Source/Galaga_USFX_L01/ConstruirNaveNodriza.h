// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "InterfazNodriza.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstruirNaveNodriza.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConstruirNaveNodriza : public AActor, public IInterfazNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConstruirNaveNodriza();

	int Tiempo;
	int AcEscudo;

	class ACarroceriaNaveNodriza* Carroceria;
	class AProyectilNodriza* Proyectil;
	class AEscudoNodriza* Escudo;
	class AArmasNaveNodriza* Armas;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	void ImplementarNaveNodriza() override;
	void ImplementarEscudo() override;
	void ImplementarProyectiles() override;
	void ImplementarArmas() override;
};
