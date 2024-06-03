// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaFrenesi.h"
#include "Kismet/GameplayStatics.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Galaga_USFX_L01Projectile.h"


// Sets default values
AEstrategiaFrenesi::AEstrategiaFrenesi()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaFrenesi::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaFrenesi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaFrenesi::EmplearEstrategia(AGalaga_USFX_L01Pawn* Player)
{
	Play = Player;
	/*if (Player)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, FString::Printf(TEXT("La NavePawn esta en Estrategia de Frenesi")));

		Player = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));
		Play = Player;
		
		FVector PosicionNave = Player->GetActorLocation();
		FRotator RotacionNave = Player->GetActorRotation();

		for (int i = 0; i < 3; i++)
		{
			FVector PosicionProyectil = PosicionNave + FVector(200.0f, (i - 1) * 120.0f, 0.0f); 
			AGalaga_USFX_L01Projectile* Escudo = Player->GetWorld()->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), PosicionProyectil, RotacionNave);
		}

		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEstrategiaFrenesi::VolverDisparo, 2.0f, false);
	}*/
	DarDisparoTriple();
}

void AEstrategiaFrenesi::DarDisparoTriple()
{
	if (Play)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Yellow, FString::Printf(TEXT("La NavePawn esta en Estrategia de Frenesi")));

		Play = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(this, 0));

		FVector PosicionNave = Play->GetActorLocation();
		FRotator RotacionNave = Play->GetActorRotation();

		for (int i = 0; i < 3; i++)
		{
			FVector PosicionProyectil = PosicionNave + FVector(200.0f, (i - 1) * 120.0f, 0.0f);
			AGalaga_USFX_L01Projectile* Escudo = Play->GetWorld()->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), PosicionProyectil, RotacionNave);
		}

		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEstrategiaFrenesi::DesactivarDisparoTiple, 1.0f, false);
	}
}

void AEstrategiaFrenesi::DesactivarDisparoTiple()
{
	DarDisparoTriple();
}


