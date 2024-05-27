// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;

public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
protected:
	
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float VCaida;//Declaramos la velocidad de caida
	float VHorizontal;//Declaramos la velocidad horizontal
	FVector PosicionInicial;//Declaramos la posicion inicial de la nave
	FVector LimiteDerecho;
	FVector LimiteIzquierdo;
	FVector LimiteMaximo;

	FVector Prueba;

	class UMovimiento* Movimiento;

};
