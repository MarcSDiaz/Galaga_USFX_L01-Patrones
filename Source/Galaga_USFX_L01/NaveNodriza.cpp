// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"
#include "CarroceriaNaveNodriza.h"
#include "EscudoNodriza.h"
#include "ProyectilNodriza.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANaveNodriza::ConstruirCarroceria()
{
	/*Carroceria = GetWorld()->SpawnActor<ACarroceriaNaveNodriza>(ACarroceriaNaveNodriza::StaticClass());
	if (Carroceria)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Nave Nodriza Implementada"));
	}*/
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Nave Nodriza Implementada"));
}

void ANaveNodriza::ConstruirArmas()
{
	/*Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass());
	if (Proyectil)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Proyectiles Implementados"));
	}*/
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Proyectiles Implementados"));
}

void ANaveNodriza::ConstruirEscudos()
{
	/*Escudo = GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass());
	if (Escudo)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Escudos Implementados"));
	}*/
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Escudos Implementados"));
}


