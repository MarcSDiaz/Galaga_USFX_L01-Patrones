// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IngenieroGeneral.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIngenieroGeneral : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IIngenieroGeneral
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Puros metodos virtuales, todos los necesarios para crear mi nave final
	virtual void ContruirNave(int a) = 0;
	virtual void ContruirEscudos(int b) = 0;
	virtual void ContruirProyectiles(int c) = 0;
	virtual void ContruirArmas(int d) = 0;
	virtual class AConstruirNaveNodriza* ObtenerNaveNodriza() = 0;
	//Necesitamos otra interfaz que establezca todas las clases creadas, metodos virtuales, de ahi heredamos una clase final "NaveNodriza"
};
