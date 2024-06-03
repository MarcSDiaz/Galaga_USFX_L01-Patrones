// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoNaveLetal.h"
#include "NaveEspecialista.h"
#include "ProyectilNodriza.h"

// Sets default values
AEstadoNaveLetal::AEstadoNaveLetal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEstadoNaveLetal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoNaveLetal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*TiempoDisparo += DeltaTime;*/

}

void AEstadoNaveLetal::EnlazarNave(ANaveEspecialista* _NaveEsp)
{
	Nave = Cast<ANaveEspecialista>(_NaveEsp);
}

void AEstadoNaveLetal::Letal()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, FString::Printf(TEXT("La nave Enemiga esta en estado Letal")));

	Nave->Letalidad(true);
	/*Nave->Defender(false);
	Nave->Giratorio(false);
	Nave->Neutro(false);*/

	/*if (TiempoDisparo > 2.0f)
	{
		FVector PosNave = Nave->GetActorLocation();
		FRotator RotNave = Nave->GetActorRotation();

		FVector DistanciaP = FVector(-100.0f, 0.0f, 0.0f);

		FVector PosP = PosNave + Nave->GetActorForwardVector() * DistanciaP;

		Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(PosP, RotNave);

		TiempoDisparo = 0.0f;
	}*/
}

FString AEstadoNaveLetal::ObtenerEstado()
{
	return "Estado Letal";
}

