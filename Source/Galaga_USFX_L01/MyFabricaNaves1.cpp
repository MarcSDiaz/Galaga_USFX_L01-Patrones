// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFabricaNaves1.h"
#include "NaveEnemigaCaza.h"

ANaveEnemiga* AMyFabricaNaves1::CrearNave(FString Nave)
{
	if (Nave.Equals("Caza")) {
		return GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass());
	}
	else return nullptr;
}
