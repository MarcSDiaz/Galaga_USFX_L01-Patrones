// Fill out your copyright notice in the Description page of Project Settings.


#include "CapitanNavesNodrizas.h"

// Sets default values
ACapitanNavesNodrizas::ACapitanNavesNodrizas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapitanNavesNodrizas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapitanNavesNodrizas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapitanNavesNodrizas::OrdenarIngeniero(AActor* Ingeniero)
{
	IngenieroACargo = Cast<IIngenieroGeneral>(Ingeniero);//Para poder acceder a mis clases concretas, lo estamos casteando para que sea un actor
}

void ACapitanNavesNodrizas::ContruirNaveNodriza()
{
	IngenieroACargo->ContruirNave();
	IngenieroACargo->ContruirEscudos();
	IngenieroACargo->ContruirProyectiles();
	IngenieroACargo->ContruirArmas();
}

AConstruirNaveNodriza* ACapitanNavesNodrizas::ObtenerNave()
{
	return IngenieroACargo->ObtenerNaveNodriza();
}


