// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento.h"

// Sets default values for this component's properties
UMovimiento::UMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	VCaida = -1.0f;
	VHorizontal = 1.0f;
	// ...
}


// Called when the game starts
void UMovimiento::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	if (Owner)
	{
		PosicionInicial = Owner->GetActorLocation();
	}
	// ...
	
}


// Called every frame
void UMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Diagonal2 = GetOwner();
	FVector LimiteDerecho = PosicionInicial + FVector(0.0f, 150.0f, 0.0f);
	FVector LimiteIzquierdo = PosicionInicial + FVector(0.0f, -150.0f, 0.0f);
	FVector LimiteMaximo = PosicionInicial + FVector(-300.0f, 0.0f, 0.0f);
	if (Diagonal2) {

		FVector PosicionActual = Diagonal2->GetActorLocation();
		FVector NuevaPosicion = PosicionActual + FVector(VCaida, VHorizontal, 0.0f);
		if (NuevaPosicion.Y == LimiteDerecho.Y)
		{
			VHorizontal = -1.0f;
		}
		if (NuevaPosicion.X == LimiteMaximo.X)
		{
			VCaida = 1.0f;
			VHorizontal = -1.0f;
		}
		if (NuevaPosicion.Y == LimiteIzquierdo.Y)
		{
			VHorizontal = 1.0f;
		}
		if (NuevaPosicion.X == PosicionInicial.X)
		{
			VCaida = -1.0f;
			VHorizontal = 1.0f;
		}

		Diagonal2->SetActorLocation(NuevaPosicion);
	}
}

