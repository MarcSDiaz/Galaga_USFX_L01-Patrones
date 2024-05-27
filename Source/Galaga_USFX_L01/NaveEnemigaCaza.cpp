// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	//VCaida = -1.0f;
	//VHorizontal = 1.0f;
	//PosicionInicial = GetActorLocation();
	//Prueba = FVector(400.0f, 500.0f, 600.0f);

	/*Movimiento = CreateDefaultSubobject<UMovimiento>(TEXT("Movimiento"));*/

}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{

	/*FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = PosicionActual + FVector(VCaida, VHorizontal, 0.0f);

	LimiteDerecho.Y = PosicionInicial.Y + 150.0f;

	if (Prueba.Y == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT("Pos Ac: %d"), Prueba.X));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT("Pos Ac: %d"), Prueba.Y));
	}
	if (PosicionActual.Y >= LimiteDerecho.Y)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT("Pos Ac: %d"), Prueba.X));
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, FString::Printf(TEXT("Pos Ac: %d"), Prueba.Y));
		VHorizontal = -1.0f;
	}
	SetActorLocation(NuevaPosicion);*/
}

void ANaveEnemigaCaza::Disparar()
{

}

void ANaveEnemigaCaza::BeginPlay()
{
	Super::BeginPlay();
	///*LimiteDerecho = PosicionInicial + FVector(0.0f, 150.0f, 0.0f);*/
	//LimiteIzquierdo = PosicionInicial + FVector(0.0f, -150.0f, 0.0f);
	//LimiteMaximo = PosicionInicial + FVector(-300.0f, 0.0f, 0.0f);

}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
