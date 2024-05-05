// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoNodriza.h"

// Sets default values
AEscudoNodriza::AEscudoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	MallaEscudoNodriza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaEscudoNodriza->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscudoNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscudoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

