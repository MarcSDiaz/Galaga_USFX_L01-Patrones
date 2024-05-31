// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstados.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstados : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IIEstados
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void EnlazarNave(class ANaveEspecialista* _NaveEsp) = 0;

	virtual void Defensivo() = 0;
	virtual void Neutral() = 0;
	virtual void Letal() = 0;
	virtual void Giratorio() = 0;

	virtual FString ObtenerEstado() = 0;
};
