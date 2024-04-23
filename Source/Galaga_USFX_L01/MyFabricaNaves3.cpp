// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFabricaNaves3.h"
#include "NaveEnemigaDestructor.h"

ANaveEnemiga* AMyFabricaNaves3::CrearNave(FString Nave)
{
	if (Nave.Equals("Destructor")) {
		return GetWorld()->SpawnActor<ANaveEnemigaDestructor>(ANaveEnemigaDestructor::StaticClass());
	}
	else return nullptr;
}
