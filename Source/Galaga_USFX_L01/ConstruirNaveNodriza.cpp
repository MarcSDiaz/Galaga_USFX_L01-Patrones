// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstruirNaveNodriza.h"
#include "CarroceriaNaveNodriza.h"
#include "ProyectilNodriza.h"
#include "EscudoNodriza.h"
#include "ArmasNaveNodriza.h"

// Sets default values
AConstruirNaveNodriza::AConstruirNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Tiempo = 0;
	AcEscudo = 1;
}

// Called when the game starts or when spawned
void AConstruirNaveNodriza::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AConstruirNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Tiempo++;
	if (Tiempo % 100 == 0)
	{
		ImplementarProyectiles();
		//AcEscudo = AcEscudo * -1;
		/*ImplementarEscudo();*/
	}
}

void AConstruirNaveNodriza::ImplementarNaveNodriza()
{
	Carroceria = GetWorld()->SpawnActor<ACarroceriaNaveNodriza>(ACarroceriaNaveNodriza::StaticClass());
	FVector PosCarroceria = FVector(0.0f, 0.0f, 350.0f);
	FRotator RotCarroceria = FRotator(100.0f, 0.0f, 0.0f);
	Carroceria->SetActorRotation(RotCarroceria);
	Carroceria->SetActorLocation(PosCarroceria);
}

void AConstruirNaveNodriza::ImplementarEscudo()
{
	//if (AcEscudo == -1)
	//{
		Escudo = GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass());
		FVector PosEscudo = FVector(-150.0f, 0.0f, 350.0f);
		Escudo->SetActorLocation(PosEscudo);
	//}
}

void AConstruirNaveNodriza::ImplementarProyectiles()
{
	FVector PosProyectil = FVector(-200.0f, -90.0f, 350.0f);

	for (int i = 0; i < 2; i++)
	{
		Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass());
		Proyectil->SetActorLocation(PosProyectil);
		PosProyectil.Y = PosProyectil.Y + 200.0f;
	}
}

void AConstruirNaveNodriza::ImplementarArmas()
{
	FVector PosArmas = FVector(-25.0f, -90.0f ,350.0f);
	FRotator RotArmas= FRotator(100.0f, 0.0f, 0.0f);

	for (int i = 0; i < 2; i++)
	{
		Armas = GetWorld()->SpawnActor<AArmasNaveNodriza>(AArmasNaveNodriza::StaticClass());
		Armas->SetActorRotation(RotArmas);
		Armas->SetActorLocation(PosArmas);
		PosArmas.Y = PosArmas.Y + 200.0f;
	}
}

