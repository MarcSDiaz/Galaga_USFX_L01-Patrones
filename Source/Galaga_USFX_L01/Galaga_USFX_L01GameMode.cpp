// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"

#include "IngenieroEspecialista1.h"
#include "IngenieroEspecialista2.h"
#include "IngenieroEspecialista3.h"
#include "CapitanNavesNodrizas.h"
#include "ConstruirNaveNodriza.h"

#include "Facade_FabricasEscuadrones.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	Tiempo = 0;
	Cantidad = 0;
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

	Facade = GetWorld()->SpawnActor<AFacade_FabricasEscuadrones>(AFacade_FabricasEscuadrones::StaticClass());
	Facade->EstablecerFabricas();
	Facade->CrearEscuadronPrimario();
	Facade->CrearEscuadronSecundario();
	Facade->CrearEscuadronTerciario();

	/*AFabricaNaves* FabricaCaza = GetWorld()->SpawnActor<AMyFabricaNaves1>(AMyFabricaNaves1::StaticClass());
	AFabricaNaves* FabricaTransporte = GetWorld()->SpawnActor<AMyFabricaNaves2>(AMyFabricaNaves2::StaticClass());
	AFabricaNaves* FabricaDestructor = GetWorld()->SpawnActor<AMyFabricaNaves3>(AMyFabricaNaves3::StaticClass());

	FVector PosCaza = FVector(-600.0f,-600.0f,250.0f);
	FVector PosTransporte = FVector(-400.0f, -600.0f, 250.0f);
	FVector PosDestructor = FVector(-200.0f, -600.0f, 250.0f);



	Ingeniero = GetWorld()->SpawnActor<AIngenieroEspecialista1>(AIngenieroEspecialista1::StaticClass());
	Capitan = GetWorld()->SpawnActor<ACapitanNavesNodrizas>(ACapitanNavesNodrizas::StaticClass());

	Capitan->OrdenarIngeniero(Ingeniero);
	Capitan->ContruirNaveNodriza();

	AConstruirNaveNodriza* Nodriza = Capitan->ObtenerNave();


	Ingeniero2 = GetWorld()->SpawnActor<AIngenieroEspecialista2>(AIngenieroEspecialista2::StaticClass());

	Capitan->OrdenarIngeniero(Ingeniero2);
	Capitan->ConstruirNaveEscudo();

	AConstruirNaveNodriza* Nodriza2 = Capitan->ObtenerNave();


	Ingeniero3 = GetWorld()->SpawnActor<AIngenieroEspecialista3>(AIngenieroEspecialista3::StaticClass());
	
	Capitan->OrdenarIngeniero(Ingeniero3);
	Capitan->ConstruirNaveBatalla();

	AConstruirNaveNodriza* Nodriza3 = Capitan->ObtenerNave();*/

	/*for (int i = 0; i < 4; i++)
	{
		ANaveEnemiga* Nave1 = FabricaCaza->OrdenarNaveEnemiga("Caza");
		Nave1->SetActorLocation(PosCaza);
		TANavesEnemigas.Push(Nave1);
		PosCaza.Y = PosCaza.Y + 400.0f;
		Cantidad++;
	}

	for (int i = 0; i < 4; i++)
	{
		ANaveEnemiga* Nave2 = FabricaTransporte->OrdenarNaveEnemiga("Transporte");
		Nave2->SetActorLocation(PosTransporte);
		TANavesEnemigas.Push(Nave2);
		PosTransporte.Y = PosTransporte.Y + 400.0f;
		Cantidad++;
	}

	for (int i = 0; i < 4; i++)
	{
		ANaveEnemiga* Nave3 = FabricaDestructor->OrdenarNaveEnemiga("Destructor");
		Nave3->SetActorLocation(PosDestructor);
		TANavesEnemigas.Push(Nave3);
		PosDestructor.Y = PosDestructor.Y + 400.0f;
		Cantidad++;
	}

	FString CantidadComoTexto = FString::Printf(TEXT("%d"), Cantidad);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("CANTIDAD DE NAVES LISTAS: ") + CantidadComoTexto);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("NAVES LISTAS PARA DESPEGAR"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("Calentando Motores"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Tanques de Combustible Lleno"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Recargando Combustible"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Municiones Recargadas"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Recargando Municiones"));*/

}

//void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	TiempoTranscurrido++;
//
//	if (TiempoTranscurrido >= 100)
//	{
//		int numeroEnemigo = FMath::RandRange(0, 9);
//		if(GEngine)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));
//
//
//			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));
//			
//		}
//		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
//		TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
//	}
//}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FVector PosCaza = FVector(0.0f, -600.0f, 250.0f);
	FVector PosTransporte = FVector(200.0f, -600.0f, 250.0f);
	FVector PosDestructor = FVector(400.0f, -600.0f, 250.0f);*/

	/*if (Tiempo % 700 == 0)
	{
		AFabricaNaves* FabricaCaza = GetWorld()->SpawnActor<AMyFabricaNaves1>(AMyFabricaNaves1::StaticClass());
		AFabricaNaves* FabricaTransporte = GetWorld()->SpawnActor<AMyFabricaNaves2>(AMyFabricaNaves2::StaticClass());
		AFabricaNaves* FabricaDestructor = GetWorld()->SpawnActor<AMyFabricaNaves3>(AMyFabricaNaves3::StaticClass());

		if (Tiempo > 700)
		{
			PosCaza.X = PosCaza.X + 600.0f;
			PosTransporte.X = PosTransporte.X + 600.0f;
			PosDestructor.X = PosDestructor.X + 600.0f;
		}
		for (int i = 0; i < 4; i++)
		{
			ANaveEnemiga* Nave1 = FabricaCaza->OrdenarNaveEnemiga("Caza");
			Nave1->SetActorLocation(PosCaza);
			TANavesEnemigas.Push(Nave1);
			PosCaza.Y = PosCaza.Y + 400.0f;
			Cantidad++;
		}

		for (int i = 0; i < 4; i++)
		{
			ANaveEnemiga* Nave2 = FabricaTransporte->OrdenarNaveEnemiga("Transporte");
			Nave2->SetActorLocation(PosTransporte);
			TANavesEnemigas.Push(Nave2);
			PosTransporte.Y = PosTransporte.Y + 400.0f;
			Cantidad++;
		}

		for (int i = 0; i < 4; i++)
		{
			ANaveEnemiga* Nave3 = FabricaDestructor->OrdenarNaveEnemiga("Destructor");
			Nave3->SetActorLocation(PosDestructor);
			TANavesEnemigas.Push(Nave3);
			PosDestructor.Y = PosDestructor.Y + 400.0f;
			Cantidad++;
		}
		FString CantidadComoTexto = FString::Printf(TEXT("%d"), Cantidad);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("CANTIDAD DE NAVES LISTAS: ") + CantidadComoTexto);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, TEXT("NAVES LISTAS PARA DESPEGAR"));
	}*/
}