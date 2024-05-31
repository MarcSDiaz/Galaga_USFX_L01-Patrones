// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspecialista.h"
#include "ProyectilNodriza.h"
#include "EscudoNodriza.h"

#include "EstadoNaveDefensa.h"
#include "EstadoNaveLetal.h"
#include "EstadoNaveNeutro.h"
#include "EstadoNaveGiratorio.h"

// Sets default values
ANaveEspecialista::ANaveEspecialista()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MallaEspecialista = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaEspecialista -> SetStaticMesh(ShipMesh.Object);

	TiempoDisparo = 0.0f;
	TiempoEscudo = 0.0f;

	Velocidad = 100.0f;
}

// Called when the game starts or when spawned
void ANaveEspecialista::BeginPlay()
{
	Super::BeginPlay();
	
	PosInicial = GetActorLocation();
}

// Called every frame
void ANaveEspecialista::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover(DeltaTime);
	
	TiempoDisparo += DeltaTime;
	TiempoEscudo += DeltaTime;

	Letalidad(Disparo);
	Defender(Defensa);
}

void ANaveEspecialista::GenerearDiferentesEstados(FString _State)
{
	if (_State.Equals("Defensivo"))
	{
		EstadoNaveDefensa = GetWorld()->SpawnActor<AEstadoNaveDefensa>(AEstadoNaveDefensa::StaticClass());
		EstadoNaveDefensa->EnlazarNave(this);
		DarEstado(EstadoNaveDefensa);
	}
	if (_State.Equals("Letal"))
	{
		EstadoNaveLetal = GetWorld()->SpawnActor<AEstadoNaveLetal>(AEstadoNaveLetal::StaticClass());
		EstadoNaveLetal->EnlazarNave(this);
		DarEstado(EstadoNaveLetal);
	}
	if (_State.Equals("Neutro"))
	{
		EstadoNaveNeutral = GetWorld()->SpawnActor<AEstadoNaveNeutro>(AEstadoNaveNeutro::StaticClass());
		EstadoNaveNeutral->EnlazarNave(this);
		DarEstado(EstadoNaveNeutral);
	}
	if (_State.Equals("Giratorio"))
	{
		EstadoNaveGiratorio = GetWorld()->SpawnActor<AEstadoNaveGiratorio>(AEstadoNaveGiratorio::StaticClass());
		EstadoNaveGiratorio->EnlazarNave(this);
		DarEstado(EstadoNaveGiratorio);
	}
}

void ANaveEspecialista::DarEstado(IIEstados* State)
{
	Estado = State;
}

void ANaveEspecialista::EstadoDefensivo()
{
	Estado->Defensivo();
}

void ANaveEspecialista::EstadoNeutral()
{
	Estado->Neutral();
}

void ANaveEspecialista::EstadoLetal()
{
	Estado->Letal();
}

void ANaveEspecialista::EstadoGiratorio()
{
	Estado->Giratorio();
}

void ANaveEspecialista::Defender(bool _Defensa)
{
	Defensa = _Defensa;

	if (_Defensa)
	{
		if (TiempoEscudo > 5.0f)
		{
			FVector PosNaveEscudo = GetActorLocation();
			FRotator RotNaveEscudo = GetActorRotation();

			FVector DistanciaPEscudo = FVector(-100.0f, 0.0f, 0.0f);

			FVector PosPEscudo = PosNaveEscudo + GetActorForwardVector() * DistanciaPEscudo;

			if (EscudoNave)
			{
				EscudoNave->Destroy();
			}

			EscudoNave = GetWorld()->SpawnActor<AEscudoNodriza>(PosPEscudo, RotNaveEscudo);

			TiempoEscudo = 0.0f;
		}
	}
}

void ANaveEspecialista::Letalidad(bool Letal)
{
	Disparo = Letal;

	if (Letal)
	{
		if (TiempoDisparo > 2.0f)
		{
			FVector PosNave = GetActorLocation();
			FRotator RotNave = GetActorRotation();

			FVector DistanciaP = FVector(-100.0f, 0.0f, 0.0f);

			FVector PosP = PosNave + GetActorForwardVector() * DistanciaP;

			Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(PosP, RotNave);

			TiempoDisparo = 0.0f;
		}
	}
}

void ANaveEspecialista::Neutro(bool Neutralidad)
{
	if (Neutralidad)
	{
		Velocidad = 0.0f;
	}
}

void ANaveEspecialista::Giratorio(bool Girar)
{
	Giro = Girar;
	if (Girar)
	{
		Rotacion = 50.0f;

	}
	else if (!Girar)
	{
		Rotacion = 0.0f;
	}
}

void ANaveEspecialista::Mover(float DeltaTime)
{
	FVector PosActual = GetActorLocation();
	FRotator PosRotator = GetActorRotation();

	FVector NuevaPos = PosActual + FVector(0.0f, Velocidad * DeltaTime, 0.0f);
	FRotator NuevaRot = PosRotator + FRotator(0.0f, Rotacion * DeltaTime, 0.0f);

	FVector LimiteDerecho = PosInicial + FVector(0.0f, 400.0f, 0.0f);
	FVector LimiteIzquierdo = PosInicial - FVector(0.0f, 400.0f, 0.0f);

	if (PosActual.Y > LimiteDerecho.Y && Velocidad > 0)
	{
		Velocidad *= -1;
	}
	else if (PosActual.Y < LimiteIzquierdo.Y && Velocidad < 0)
	{
			Velocidad *= -1;
	}

	SetActorLocation(NuevaPos);
	SetActorRotation(NuevaRot);
}

