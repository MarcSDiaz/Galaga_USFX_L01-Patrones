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

	UStaticMeshComponent* MallaEspecialista;

	void GenerearDiferentesEstados(FString _State);
	void DarEstado(class IIEstados* State);

	class IIEstados* EstadoNaveDefensa;
	class IIEstados* EstadoNaveLetal;
	class IIEstados* EstadoNaveNeutral;
	class IIEstados* EstadoNaveGiratorio;

	class IIEstados* Estado;

	void EstadoDefensivo();
	void EstadoNeutral();
	void EstadoLetal();
	void EstadoGiratorio();

	void Defender(bool _Defensa);
	void Letalidad(bool Letal);
	void Neutro(bool Neutralidad);
	void Giratorio(bool Girar);

	class AProyectilNodriza* Proyectil;
	class AEscudoNodriza* EscudoNave;

	bool Disparo;
	bool Defensa;
	bool Neutr;
	bool Giro;

	float TiempoDisparo;
	float TiempoEscudo;
	float Velocidad;
	float Rotacion;

	FVector PosInicial;

	void Mover(float DeltaTime);
	
};
