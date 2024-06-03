// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaProteccion.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "EscudoNodriza.h"
#include "TimerManager.h"

// Sets default values
AEstrategiaProteccion::AEstrategiaProteccion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaProteccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaProteccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaProteccion::EmplearEstrategia(AGalaga_USFX_L01Pawn* Player)
{
	Play = Player;

	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Blue, FString::Printf(TEXT("La NavePawn esta en Estrategia de Proteccion")));

	if (!Player)
	{
		return;
	}

	Player = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));

	FVector PosicionNave = Player->GetActorLocation();
	FRotator RotacionNave = Player->GetActorRotation();

	// Crear y posicionar 3 escudos frente a la nave
	for (int i = 0; i < 3; i++)
	{
		FVector PosicionEscudo = PosicionNave + FVector(200.0f, (i - 1) * 120.0f, 0.0f);  // Posiciona los escudos en frente de la nave y un poco separados entre sí
		AEscudoNodriza* Escudo = Player->GetWorld()->SpawnActor<AEscudoNodriza>(AEscudoNodriza::StaticClass(), PosicionEscudo, RotacionNave);
		Escudos.Add(Escudo);
	}

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEstrategiaProteccion::DestruirEscudos, 4.0f, false);
}

void AEstrategiaProteccion::DestruirEscudos()
{
	for (AEscudoNodriza* Escudo : Escudos)
	{
		if (Escudo)
		{
			Escudo->Destroy();
		}
	}
	Escudos.Empty();

	EmplearEstrategia(Play);
}

