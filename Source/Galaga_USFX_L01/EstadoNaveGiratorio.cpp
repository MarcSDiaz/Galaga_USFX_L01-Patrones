// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNaveGiratorio.h"
#include "NaveEspecialista.h"

// Sets default values
AEstadoNaveGiratorio::AEstadoNaveGiratorio()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoNaveGiratorio::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNaveGiratorio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoNaveGiratorio::EnlazarNave(ANaveEspecialista* _NaveEsp)
{
	Nave = Cast<ANaveEspecialista>(_NaveEsp);
}

void AEstadoNaveGiratorio::Giratorio()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, FString::Printf(TEXT("La nave Enemiga esta en estado Giratorio")));

	Nave->Giratorio(true);
	Nave->Letalidad(true);
	Nave->Defender(true);
	Nave->Neutro(false);
}

FString AEstadoNaveGiratorio::ObtenerEstado()
{
	return "Estado Giratorio";
}

