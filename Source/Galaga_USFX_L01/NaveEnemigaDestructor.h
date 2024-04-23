// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaDestructor.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaDestructor : public ANaveEnemiga
{
	GENERATED_BODY()

public:

	ANaveEnemigaDestructor();

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
