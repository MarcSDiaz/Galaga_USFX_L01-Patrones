// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

ARadar::ARadar()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ARadar::BeginPlay()
{
    Super::BeginPlay();
}

void ARadar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ARadar::CambioEnergia()
{
    NotificadorSubscriptores();
}

void ARadar::SetEnergia(FString _Energia)
{
    Energia = _Energia;
    CambioEnergia();
}

FString ARadar::GetEnergia()
{
    return Energia;
}
