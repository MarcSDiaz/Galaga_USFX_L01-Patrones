// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNaveDefensa.h"
#include "NaveEspecialista.h"

// Sets default values
AEstadoNaveDefensa::AEstadoNaveDefensa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoNaveDefensa::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNaveDefensa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoNaveDefensa::EnlazarNave(ANaveEspecialista* _NaveEsp)
{
	Nave = Cast<ANaveEspecialista>(_NaveEsp);
}

void AEstadoNaveDefensa::EstadoDefensa()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("La nave Enemiga esta en estado Defensivo")));
}

FString AEstadoNaveDefensa::ObtenerEstado()
{
	return "Sin actividad";
}

