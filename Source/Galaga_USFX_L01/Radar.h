// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PublicadorObserver.h"
#include "Radar.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ARadar : public APublicadorObserver
{
	GENERATED_BODY()
	
public:

	ARadar();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

private:

	FString Energia;

public:

	void CambioEnergia();
	void SetEnergia(FString _Energia);
	FORCEINLINE FString GetEnergia();

};
