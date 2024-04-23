// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaDestructor.h"

ANaveEnemigaDestructor::ANaveEnemigaDestructor()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaDestructor::Tick(float DeltaTime)
{

}

void ANaveEnemigaDestructor::Mover(float DeltaTime)
{

}

void ANaveEnemigaDestructor::Disparar()
{

}
