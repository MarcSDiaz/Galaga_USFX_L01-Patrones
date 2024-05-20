// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade_FabricasEscuadrones.h"
#include "MyFabricaNaves1.h"
#include "MyFabricaNaves2.h"
#include "MyFabricaNaves3.h"

// Sets default values
AFacade_FabricasEscuadrones::AFacade_FabricasEscuadrones()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PosEscuadronPrimario = FVector(0.0f, -500.0f, 250.0f);
	PosEscuadronSecundario = FVector(300.0f, -500.0f, 250.0f);
	PosEscuadronTerciario = FVector(600.0f, -500.0f, 250.0f);

}

// Called when the game starts or when spawned
void AFacade_FabricasEscuadrones::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacade_FabricasEscuadrones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacade_FabricasEscuadrones::EstablecerFabricas()
{
	FabricaCaza = GetWorld()->SpawnActor<AMyFabricaNaves1>(AMyFabricaNaves1::StaticClass());
	FabricaTransporte = GetWorld()->SpawnActor<AMyFabricaNaves2>(AMyFabricaNaves2::StaticClass());
	FabricaDestructores = GetWorld()->SpawnActor<AMyFabricaNaves3>(AMyFabricaNaves3::StaticClass());

	if (FabricaCaza && FabricaDestructores && FabricaTransporte)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Fabricas Listas"));
	}
}

void AFacade_FabricasEscuadrones::CrearEscuadronPrimario()
{
	for (int i = 0; i < 10; i++)
	{
		ANaveEnemiga* NaveCaza = FabricaCaza->OrdenarNaveEnemiga("Caza");
		NaveCaza->SetActorLocation(PosEscuadronPrimario);
		PosEscuadronPrimario.Y += 200.0f;
		if (i == 4)
		{
			PosEscuadronPrimario.X += 150.0f;
			PosEscuadronPrimario.Y = -500.0f;
		}
		TANavesEnemigas.Push(NaveCaza);
	}
}

void AFacade_FabricasEscuadrones::CrearEscuadronSecundario()
{
	for (int i = 0; i < 10; i++)
	{
		ANaveEnemiga* NaveTransportes = FabricaTransporte->OrdenarNaveEnemiga("Transporte");
		NaveTransportes->SetActorLocation(PosEscuadronSecundario);
		PosEscuadronSecundario.Y += 200.0f;
		if(i == 4)
		{
			PosEscuadronSecundario.X += 150.0f;
			PosEscuadronSecundario.Y = -500.0f;
		}
		TANavesEnemigas.Push(NaveTransportes);
	}
}

void AFacade_FabricasEscuadrones::CrearEscuadronTerciario()
{
	for (int i = 0; i < 10; i++)
	{
		ANaveEnemiga* NaveDestructores = FabricaDestructores->OrdenarNaveEnemiga("Destructor");
		NaveDestructores->SetActorLocation(PosEscuadronTerciario);
		PosEscuadronTerciario.Y += 200.0f;
		if(i == 4)
		{
			PosEscuadronTerciario.X += 150.0f;
			PosEscuadronTerciario.Y = -500.0f;
		}
		TANavesEnemigas.Push(NaveDestructores);
	}
}


