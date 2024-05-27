// Fill out your copyright notice in the Description page of Project Settings.


#include "ProyectilNodriza.h"

// Sets default values
AProyectilNodriza::AProyectilNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile'"));
	MallaProyectilNodriza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaProyectilNodriza->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;

	Velocidad = 500.0f;

	Tiempo = 1.0f;
}

// Called when the game starts or when spawned
void AProyectilNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Tiempo += DeltaTime;
	if (Tiempo > 3.0f)
	{
		Destroy();
	}

}

void AProyectilNodriza::Mover(float DeltaTime)
{
	FVector PosActual = GetActorLocation();

	FVector NuevaPos = PosActual + FVector(-Velocidad * DeltaTime, 0.0f, 0.0f);

	SetActorLocation(NuevaPos);
}

