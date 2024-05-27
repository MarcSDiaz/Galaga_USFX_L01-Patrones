// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"

#include "Radar.h"
#include "NaveSubscriptor_1.h"
#include "NaveSubscriptor_2.h"

#include "NaveEspecialista.h"

//#include "IngenieroEspecialista1.h"
//#include "IngenieroEspecialista2.h"
//#include "IngenieroEspecialista3.h"
//#include "CapitanNavesNodrizas.h"
//#include "ConstruirNaveNodriza.h"
//
//#include "Facade_FabricasEscuadrones.h"
//#include "FacadeFormaciones.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;

	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	PosNavesSub1 = FVector(-700.0f, 200.0f, 200.0f);
	PosNavesSub2 = FVector(-700.0f, 800.0f, 200.0f);

	TotalEnergy = 30.0f;

	V = 0;

	State = 1.0f;
	Estado = 0;
}
//void AGalaga_USFX_L01GameMode::BeginPlay()
//{
//	Super::BeginPlay();
//	//Set the game state to playing
//	FVector ubicacionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 250.0f);
//	FVector ubicacionInicioNavesEnemigasTransporte = FVector(500.0f, 500.0f, 250.0f);
//
//	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
//
//	UWorld* const World = GetWorld();
//	if (World != nullptr)
//	{
//		for (int i = 0; i < 5; i++) {
//			FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
//			ANaveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
//
//			//TANavesEnemigasCaza.Push(NaveEnemigaCazaTemporal);
//			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);
//		}
//
//		float nuevaposicionX = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;
//
//		for (int j = 0; j < 5; j++) {
//			FVector PosicionNaveActual = FVector(nuevaposicionX, ubicacionInicioNavesEnemigasTransporte.Y + j * 300, ubicacionInicioNavesEnemigasTransporte.Z);
//			ANaveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
//
//			//TANavesEnemigasTransporte.Push(NaveEnemigaTransporteTemporal);
//			TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
//		}
//
//		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
//		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
//
//		TiempoTranscurrido = 0;
//	}
//
//	/*NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
//	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));*/
//
//}
void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();

	/*Facade2 = GetWorld()->SpawnActor<AFacadeFormaciones>(AFacadeFormaciones::StaticClass());*/

	Radar = GetWorld()->SpawnActor<ARadar>(ARadar::StaticClass());

	for (int i = 0; i < 2; i++)
	{
		NaveSubscriptor1 = GetWorld()->SpawnActor<ANaveSubscriptor_1>(ANaveSubscriptor_1::StaticClass());
		NavesSub1.Add(NaveSubscriptor1);

		NaveSubscriptor1->EstablecerRadar(Radar);

		NaveSubscriptor1->SetActorLocation(PosNavesSub1);

		PosNavesSub1.X = PosNavesSub1.X + 200.0f;
		PosNavesSub1.Y = PosNavesSub1.Y - 200.0f;
	}

	for (int i = 0; i < 2; i++)
	{
		NaveSubscriptor2 = GetWorld()->SpawnActor<ANaveSubscriptor_2>(ANaveSubscriptor_2::StaticClass());
		NavesSub2.Add(NaveSubscriptor2);

		NaveSubscriptor2->EstablecerRadar(Radar);

		NaveSubscriptor2->SetActorLocation(PosNavesSub2);

		PosNavesSub2.X = PosNavesSub2.X + 200.0f;
		PosNavesSub2.Y = PosNavesSub2.Y + 200.0f;
	}

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, FString::Printf(TEXT("La energia de las naves esta al : %.2f"), TotalEnergy));

	/*NaveEspecialista = GetWorld()->SpawnActor<ANaveEspecialista>(ANaveEspecialista::StaticClass());*/

}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime); 

	/*State += DeltaTime;

	if (State > 7.0f && Estado == 0)
	{
		NaveEspecialista->GenerearDiferentesEstados("Neutro");
		NaveEspecialista->EstadoNeutral();
		Estado++;
	}
	else if (State > 14.0f && Estado == 1)
	{
		NaveEspecialista->GenerearDiferentesEstados("Letal");
		NaveEspecialista->EstadoLetal();
		Estado++;
	}
	else if (State > 21.0f && Estado == 2)
	{
		NaveEspecialista->GenerearDiferentesEstados("Defensivo");
		NaveEspecialista->EstadoDefensivo();
		Estado++;
	}*/

	TotalEnergy -= DeltaTime;

	if (TotalEnergy < 25.0f && V == 0)
	{
		Radar->SetEnergia("25");
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, FString::Printf(TEXT("La energia esta disminuyendo: %.2f"), TotalEnergy));
		for (ANaveSubscriptor_1* Subs1 : NavesSub1)
		{
			Subs1->DestruirSubscripcion();
		}
		NaveSubscriptor1->DestruirSubscripcion();
		V++;
	}
	else if (TotalEnergy < 15.0f && V == 1)
	{
		Radar->SetEnergia("15");
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, FString::Printf(TEXT("La energia esta disminuyendo: %.2f"), TotalEnergy));
		V++;
	}
	else if (TotalEnergy < 7.0f && V == 2)
	{
		Radar->SetEnergia("7");
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, FString::Printf(TEXT("La energia esta disminuyendo: %.2f"), TotalEnergy));
		V++;
	}
	else if (TotalEnergy <= 2.0f)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Purple, FString::Printf(TEXT("La energia esta disminuyendo: %.2f"), TotalEnergy));
		TotalEnergy = 30.0f;
	}

	/*if (Tiempo == 175)
	{
		Facade2->FormacionFacil("Formacion");
	}
	else if (Tiempo == 350 || Tiempo == 420)
	{
		if (Tiempo == 350)
		{
			Facade2->FormacionFacil("Destruir");
		}
		else if (Tiempo == 420)
		{
			Facade2->FormacionIntermedia("Formacion");
		}
	}
	else if (Tiempo == 595 || Tiempo == 665)
	{
		if (Tiempo == 595)
		{
			Facade2->FormacionIntermedia("Destruir");
		}
		else if (Tiempo == 665)
		{
			Facade2->FormacionDificil("Formacion");
		}
	}
	else if (Tiempo == 840 || Tiempo == 910)
	{
		if (Tiempo == 840)
		{
			Facade2->FormacionDificil("Destruir");
		}
		else if (Tiempo == 910)
		{

		}
	}*/


}