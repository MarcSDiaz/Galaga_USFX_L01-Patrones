// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroEspecialista1.h"
#include "ConstruirNaveNodriza.h"

// Sets default values
AIngenieroEspecialista1::AIngenieroEspecialista1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AIngenieroEspecialista1::BeginPlay()
{
	Super::BeginPlay();

	ConstruirNave = GetWorld()->SpawnActor<AConstruirNaveNodriza>(AConstruirNaveNodriza::StaticClass());

	ConstruirNave->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AIngenieroEspecialista1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngenieroEspecialista1::ContruirNave()
{
	ConstruirNave->ImplementarNaveNodriza();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Nave Nodriza Implementada"));
}

void AIngenieroEspecialista1::ContruirEscudos()
{
	ConstruirNave->ImplementarEscudo();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Escudos Implementados"));
}

void AIngenieroEspecialista1::ContruirProyectiles()
{
	ConstruirNave->ImplementarProyectiles();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Proyectiles Implementados"));
}

void AIngenieroEspecialista1::ContruirArmas()
{
	ConstruirNave->ImplementarArmas();

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Armas Implementadas"));
}

AConstruirNaveNodriza* AIngenieroEspecialista1::ObtenerNaveNodriza()
{
	return ConstruirNave;
}


