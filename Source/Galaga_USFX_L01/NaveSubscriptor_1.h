// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISubscriptor.h"
#include "ICambiosSubscriptores.h"
#include "NaveSubscriptor_1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ANaveSubscriptor_1 : public AActor, public IISubscriptor, public IICambiosSubscriptores
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveSubscriptor_1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	
	void EstablecerRadar(class ARadar* _Radar);
	void Actualizar(APublicadorObserver* _Publicador) override;
	void MejorarSubscriptor() override;
	void ActivarArmamento() override;
	void MejoraArmamento(float DeltaTime) override;
	void ActivarSuperVelocidad() override;
	void MejorarSuperVelocidad() override;
	void ActivarEscudo() override;
	void MejorarImplementarEscudo() override;
	void DestruirSubscripcion();

	void Mover(float DeltaTime);

	FString Energy;

	int Armamento;
	int SArmamento;
	int Escudo;
	int SVelocidad;

	float Tiempo;
	float Tiempo2;

	FVector PosIn;
	int Velocidad;

	UPROPERTY(VisibleAnywhere, Category = "Malla")
	UStaticMeshComponent* MallaSub1;

	UPROPERTY()
	class AProyectilNodriza* Proyectil;

	UPROPERTY()
	class AEscudoNodriza* EscudoNave;

private:

	UPROPERTY(VisibleAnywhere, Category = "Subscriptor")
	class ARadar* Radar;
};
