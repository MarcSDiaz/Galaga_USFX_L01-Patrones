// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFabricaNaves2.h"
#include "NaveEnemigaTransporte.h"

ANaveEnemiga* AMyFabricaNaves2::CrearNave(FString Nave)
{
	if (Nave.Equals("Transporte")) {
		return GetWorld()->SpawnActor<ANaveEnemigaTransporte>(ANaveEnemigaTransporte::StaticClass());
	}
	else return nullptr;
}
