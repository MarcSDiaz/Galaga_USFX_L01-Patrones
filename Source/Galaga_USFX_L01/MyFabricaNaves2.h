// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaNaves.h"
#include "MyFabricaNaves2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AMyFabricaNaves2 : public AFabricaNaves
{
	GENERATED_BODY()

public:

	virtual ANaveEnemiga* CrearNave(FString Nave) override;
	
};
