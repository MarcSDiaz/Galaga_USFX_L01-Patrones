// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmasNaveNodriza.h"

// Sets default values
AArmasNaveNodriza::AArmasNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	MallaArmasNodriza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaArmasNodriza->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArmasNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmasNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

