// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeFormaciones.h"
#include "Facade_FabricasEscuadrones.h"

// Sets default values
AFacadeFormaciones::AFacadeFormaciones()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFacadeFormaciones::BeginPlay()
{
	Super::BeginPlay();

	Escuadron = GetWorld()->SpawnActor<AFacade_FabricasEscuadrones>(AFacade_FabricasEscuadrones::StaticClass());

	Escuadron->EstablecerFabricas();
}

// Called every frame
void AFacadeFormaciones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AFacadeFormaciones::FormacionFacil(FString Orden)
{
	if (Orden.Equals("Formacion"))
	{
		Escuadron->CrearEscuadronPrimario();
	}
	else if (Orden.Equals("Destruir"))
	{
		Escuadron->DestruirFormacion();
	}
}

void AFacadeFormaciones::FormacionIntermedia(FString Orden)
{
	if (Orden.Equals("Formacion"))
	{
		Escuadron->CrearEscuadronPrimario();
		Escuadron->CrearEscuadronSecundario();
	}
	else if (Orden.Equals("Destruir"))
	{
		Escuadron->DestruirFormacion();
	}
}

void AFacadeFormaciones::FormacionDificil(FString Orden)
{
	if (Orden.Equals("Formacion"))
	{
		Escuadron->CrearEscuadronPrimario();
		Escuadron->CrearEscuadronSecundario();
		Escuadron->CrearEscuadronTerciario();
	}
	else if (Orden.Equals("Destruir"))
	{
		Escuadron->DestruirFormacion();
	}

}

void AFacadeFormaciones::FormacionFinal(FString Orden)
{
	Escuadron->CrearEscuadronPrimario();
	Escuadron->CrearEscuadronSecundario();
	Escuadron->CrearEscuadronTerciario();
	//Implementar nave Nodriza.
}

