// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNaveNeutro.h"
#include "NaveEspecialista.h"

// Sets default values
AEstadoNaveNeutro::AEstadoNaveNeutro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoNaveNeutro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNaveNeutro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoNaveNeutro::EnlazarNave(ANaveEspecialista* _NaveEsp)
{
	Nave = Cast<ANaveEspecialista>(_NaveEsp);
}

void AEstadoNaveNeutro::Neutral()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("La nave Enemiga esta en estado Neutral")));

	Nave->Neutro(true);
	/*Nave->Giratorio(false);
	Nave->Defender(false);
	Nave->Letalidad(false);*/
}

FString AEstadoNaveNeutro::ObtenerEstado()
{
	return "Estado Neutral";
}

