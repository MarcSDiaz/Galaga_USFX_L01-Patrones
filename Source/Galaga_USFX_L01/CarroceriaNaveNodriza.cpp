// Fill out your copyright notice in the Description page of Project Settings.


#include "CarroceriaNaveNodriza.h"

// Sets default values
ACarroceriaNaveNodriza::ACarroceriaNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	MallaNaveNodriza = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaNaveNodriza->SetStaticMesh(ShipMesh.Object);

	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACarroceriaNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACarroceriaNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

