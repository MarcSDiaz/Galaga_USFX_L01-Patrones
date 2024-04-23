// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNaves.h"

// Sets default values
AFabricaNaves::AFabricaNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AFabricaNaves::OrdenarNaveEnemiga(FString Tipo)
{
	ANaveEnemiga* Nave = CrearNave(Tipo);
	return Nave;
}

