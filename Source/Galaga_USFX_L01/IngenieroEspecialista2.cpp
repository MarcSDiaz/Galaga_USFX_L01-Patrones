// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroEspecialista2.h"
#include "ConstruirNaveNodriza.h"

// Sets default values
AIngenieroEspecialista2::AIngenieroEspecialista2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngenieroEspecialista2::BeginPlay()
{
	Super::BeginPlay();
	
	ConstruirNave1 = GetWorld()->SpawnActor<AConstruirNaveNodriza>(AConstruirNaveNodriza::StaticClass());

	ConstruirNave1->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void AIngenieroEspecialista2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngenieroEspecialista2::ContruirNave(int a)
{
	ConstruirNave1->ImplementarNaveNodriza(a);
}

void AIngenieroEspecialista2::ContruirEscudos(int b)
{
	ConstruirNave1->ImplementarEscudo(b);
}

void AIngenieroEspecialista2::ContruirProyectiles(int c)
{
	ConstruirNave1->ImplementarProyectiles(c);
}

void AIngenieroEspecialista2::ContruirArmas(int d)
{
	ConstruirNave1->ImplementarArmas(d);
}

AConstruirNaveNodriza* AIngenieroEspecialista2::ObtenerNaveNodriza()
{
	return ConstruirNave1;
}

