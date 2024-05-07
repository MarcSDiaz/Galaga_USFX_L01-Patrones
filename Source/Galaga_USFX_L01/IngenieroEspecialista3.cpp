// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroEspecialista3.h"
#include "ConstruirNaveNodriza.h"

// Sets default values
AIngenieroEspecialista3::AIngenieroEspecialista3()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngenieroEspecialista3::BeginPlay()
{
	Super::BeginPlay();
	
	ConstruirNave2 = GetWorld()->SpawnActor<AConstruirNaveNodriza>(AConstruirNaveNodriza::StaticClass());

	ConstruirNave2->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void AIngenieroEspecialista3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIngenieroEspecialista3::ContruirNave(int a)
{
	ConstruirNave2->ImplementarNaveNodriza(a);
}

void AIngenieroEspecialista3::ContruirEscudos(int b)
{
	ConstruirNave2->ImplementarEscudo(b);
}

void AIngenieroEspecialista3::ContruirProyectiles(int c)
{
	ConstruirNave2->ImplementarProyectiles(c);
}

void AIngenieroEspecialista3::ContruirArmas(int d)
{
	ConstruirNave2->ImplementarArmas(d);
}

AConstruirNaveNodriza* AIngenieroEspecialista3::ObtenerNaveNodriza()
{
	return ConstruirNave2;
}

