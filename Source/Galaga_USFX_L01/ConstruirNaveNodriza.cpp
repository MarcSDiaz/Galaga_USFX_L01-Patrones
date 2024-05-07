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
		ImplementarProyectiles(J);
	}
}

void AConstruirNaveNodriza::ImplementarNaveNodriza(int z)
{
	/*Carroceria = GetWorld()->SpawnActor<ACarroceriaNaveNodriza>(ACarroceriaNaveNodriza::StaticClass());

	FVector PosCarroceria = FVector(0.0f, 0.0f, 350.0f);
	FRotator RotCarroceria = FRotator(100.0f, 0.0f, 0.0f);
	Carroceria->SetActorRotation(RotCarroceria);
	Carroceria->SetActorLocation(PosCarroceria);*/
	FVector PosCarroceria = FVector(0.0f, 0.0f, 350.0f);
	FRotator RotCarroceria = FRotator(100.0f, 0.0f, 0.0f);

	FVector PosCarroceria1 = FVector(0.0f, -500.0f, 350.0f);
	FRotator RotCarroceria1 = FRotator(100.0f, 0.0f, 0.0f);

	FVector PosCarroceria2 = FVector(0.0f, 650.0f, 350.0f);
	FRotator RotCarroceria2 = FRotator(100.0f, 0.0f, 0.0f);

	switch (z)
	{
	case 1:

		Carroceria = GetWorld()->SpawnActor<ACarroceriaNaveNodriza>(ACarroceriaNaveNodriza::StaticClass());

		/*FVector PosCarroceria = FVector(0.0f, 0.0f, 350.0f);
		FRotator RotCarroceria = FRotator(100.0f, 0.0f, 0.0f);*/
		Carroceria->SetActorRotation(RotCarroceria);
		Carroceria->SetActorLocation(PosCarroceria);

		break;
	case 2:

		Carroceria = GetWorld()->SpawnActor<ACarroceriaNaveNodriza>(ACarroceriaNaveNodriza::StaticClass());

		/*FVector PosCarroceria1 = FVector(0.0f, -500.0f, 350.0f);
		FRotator RotCarroceria1 = FRotator(100.0f, 0.0f, 0.0f);*/
		Carroceria->SetActorRotation(RotCarroceria1);
		Carroceria->SetActorLocation(PosCarroceria1);

		break;
	case 3:

		Carroceria = GetWorld()->SpawnActor<ACarroceriaNaveNodriza>(ACarroceriaNaveNodriza::StaticClass());

		/*FVector PosCarroceria2 = FVector(0.0f, 500.0f, 350.0f);
		FRotator RotCarroceria2 = FRotator(100.0f, 0.0f, 0.0f);*/
		Carroceria->SetActorRotation(RotCarroceria2);
		Carroceria->SetActorLocation(PosCarroceria2);

		break;
	default:
		break;
	}

}

void AConstruirNaveNodriza::ImplementarEscudo(int x)
{

	/*Escudo = GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass());
	FVector PosEscudo = FVector(-150.0f, 0.0f, 350.0f);
	Escudo->SetActorLocation(PosEscudo);*/

	FVector PosEscudo = FVector(-150.0f, 0.0f, 350.0f);

	FVector PosEscudo1 = FVector(-150.0f, -700.0f, 350.0f);

	switch (x)
	{
	case 1:

		Escudo = GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass());
		/*FVector PosEscudo = FVector(-150.0f, 0.0f, 350.0f);*/
		Escudo->SetActorLocation(PosEscudo);

		break;
	case 2:

		for (int i = 0; i < 3; i++)
		{
			Escudo = GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass());
			/*FVector PosEscudo1 = FVector(-150.0f, 700.0f, 350.0f);*/
			Escudo->SetActorLocation(PosEscudo1);
			PosEscudo1.Y = PosEscudo1.Y + 200.0f;
		}

		break;
	case 3:

		break;
	default:
		break;
	}

}

void AConstruirNaveNodriza::ImplementarProyectiles(int v)
{
	/*Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass());

	FVector PosProyectil = FVector(-200.0f, -90.0f, 350.0f);
	FVector PosPro = PosicionNave + FVector();

	for (int i = 0; i < 2; i++)
	{
		Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass());
		Proyectil->SetActorLocation(PosProyectil);
		PosProyectil.Y = PosProyectil.Y + 200.0f;
	}*/

	J = v;

	FVector PosProyectil = FVector(-200.0f, -90.0f, 350.0f);

	FVector PosProyectil1 = FVector(-200.0f, 440.0f, 350.0f);

	switch (v)
	{
	case 1:

		/*FVector PosProyectil = FVector(-200.0f, -90.0f, 350.0f);
		FVector PosPro = PosicionNave + FVector();*/

		for (int i = 0; i < 2; i++)
		{
			Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass());
			Proyectil->SetActorLocation(PosProyectil);
			PosProyectil.Y = PosProyectil.Y + 200.0f;
		}

		break;
	case 2:

		break;
	case 3:

		/*FVector PosProyectil = FVector(-200.0f, -90.0f, 350.0f);
		FVector PosPro = PosicionNave + FVector();*/

		for (int i = 0; i < 4; i++)
		{
			Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(AProyectilNodriza::StaticClass());
			Proyectil->SetActorLocation(PosProyectil1);
			if (i == 1)
			{
				PosProyectil1.Y = PosProyectil1.Y + 220.0f;
			}
			else
			{
				PosProyectil1.Y = PosProyectil1.Y + 110.0f;
			}
		}

		break;
	default:
		break;
	}
}

void AConstruirNaveNodriza::ImplementarArmas(int w)
{
	/*FVector PosArmas = FVector(-25.0f, -90.0f ,350.0f);
	FRotator RotArmas= FRotator(100.0f, 0.0f, 0.0f);

	for (int i = 0; i < 2; i++)
	{
		Armas = GetWorld()->SpawnActor<AArmasNaveNodriza>(AArmasNaveNodriza::StaticClass());
		Armas->SetActorRotation(RotArmas);
		Armas->SetActorLocation(PosArmas);
		PosArmas.Y = PosArmas.Y + 200.0f;
	}*/

	FVector PosArmas = FVector(-25.0f, -90.0f, 350.0f);
	FRotator RotArmas = FRotator(100.0f, 0.0f, 0.0f);

	FVector PosArmas1 = FVector(-25.0f, 440.0f, 350.0f);
	FRotator RotArmas1 = FRotator(100.0f, 0.0f, 0.0f);

	switch (w)
	{
	case 1:

		/*FVector PosArmas = FVector(-25.0f, -90.0f, 350.0f);
		FRotator RotArmas = FRotator(100.0f, 0.0f, 0.0f);*/

		for (int i = 0; i < 2; i++)
		{
			Armas = GetWorld()->SpawnActor<AArmasNaveNodriza>(AArmasNaveNodriza::StaticClass());
			Armas->SetActorRotation(RotArmas);
			Armas->SetActorLocation(PosArmas);
			PosArmas.Y = PosArmas.Y + 200.0f;
		}

		break;
	case 2:

		break;
	case 3:

		/*FVector PosArmas1 = FVector(-25.0f, -360.0f, 350.0f);
		FRotator RotArmas1 = FRotator(100.0f, 0.0f, 0.0f);*/

		for (int i = 0; i < 4; i++)
		{
			Armas = GetWorld()->SpawnActor<AArmasNaveNodriza>(AArmasNaveNodriza::StaticClass());
			Armas->SetActorRotation(RotArmas1);
			Armas->SetActorLocation(PosArmas1);
			if (i == 1)
			{
				PosArmas1.Y = PosArmas1.Y + 220.0f;
			}
			else
			{
				PosArmas1.Y = PosArmas1.Y + 110.0f;
			}
		}

		break;
	default:
		break;
	}
	
}

