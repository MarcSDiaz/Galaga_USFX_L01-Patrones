// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspecialista.h"
#include "EstadoNaveDefensa.h"
#include "EstadoNaveLetal.h"
#include "EstadoNaveNeutro.h"

// Sets default values
ANaveEspecialista::ANaveEspecialista()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveEspecialista::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEspecialista::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANaveEspecialista::GenerearDiferentesEstados(FString _State)
{
	if (_State.Equals("Defensivo"))
	{
		EstadoNaveDefensa = GetWorld()->SpawnActor<AEstadoNaveDefensa>(AEstadoNaveDefensa::StaticClass());
		EstadoNaveDefensa->EnlazarNave(this);
		DarEstado(EstadoNaveDefensa);
	}
	if (_State.Equals("Letal"))
	{
		EstadoNaveLetal = GetWorld()->SpawnActor<AEstadoNaveLetal>(AEstadoNaveLetal::StaticClass());
		EstadoNaveLetal->EnlazarNave(this);
		DarEstado(EstadoNaveLetal);
	}
	if (_State.Equals("Neutro"))
	{
		EstadoNaveNeutral = GetWorld()->SpawnActor<AEstadoNaveNeutro>(AEstadoNaveNeutro::StaticClass());
		EstadoNaveNeutral->EnlazarNave(this);
		DarEstado(EstadoNaveNeutral);
	}
}

void ANaveEspecialista::DarEstado(IIEstados* State)
{
	Estado = State;
}

void ANaveEspecialista::EstadoDefensivo()
{
	Estado->EstadoDefensa();
}

void ANaveEspecialista::EstadoNeutral()
{
	Estado->EstadoNeutral();
}

void ANaveEspecialista::EstadoLetal()
{
	Estado->EstadoLetal();
}

