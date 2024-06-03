// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaVeloz.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEstrategiaVeloz::AEstrategiaVeloz()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaVeloz::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaVeloz::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaVeloz::EmplearEstrategia(AGalaga_USFX_L01Pawn* Player)
{
	Play = Player;
	/*if (Player)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("La NavePawn esta en Estrategia de Veloz")));
		Player = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));
		Player->SetMoveSpeed(2000.0f);
	}*/
	DarVelocidad();
}

void AEstrategiaVeloz::DarVelocidad()
{
	if (Play)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Cyan, FString::Printf(TEXT("La NavePawn esta en Estrategia de Veloz")));
		Play = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));
		Play->SetMoveSpeed(2000.0f);
	}
}


