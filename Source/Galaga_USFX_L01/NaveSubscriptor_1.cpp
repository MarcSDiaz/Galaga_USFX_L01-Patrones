// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveSubscriptor_1.h"
#include "Radar.h"
#include "ProyectilNodriza.h"
#include "EscudoNodriza.h"

// Sets default values
ANaveSubscriptor_1::ANaveSubscriptor_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MallaSub1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaSub1->SetStaticMesh(ShipMesh.Object);

	Energy = 0;

	SVelocidad = 1;
	Armamento = 0;
	SArmamento = 0;
	Escudo = 0;

	Tiempo = 1.0f;
	Tiempo2 = 1.0f;

	Velocidad = 100.0f;
}

// Called when the game starts or when spawned
void ANaveSubscriptor_1::BeginPlay()
{
	Super::BeginPlay();
	PosIn = GetActorLocation();
}

// Called every frame
void ANaveSubscriptor_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Mover(DeltaTime);

	Tiempo += DeltaTime;
	Tiempo2 += DeltaTime;


	if (Tiempo > 2.0f)
	{
		ActivarArmamento();
		MejoraArmamento(DeltaTime);
		Tiempo = 0.0f;
	}

	if (Tiempo2 > 10.0f)
	{
		MejorarImplementarEscudo();
		Tiempo2 = 0.0f;
	}

}

void ANaveSubscriptor_1::EstablecerRadar(ARadar* _Radar)
{
	if (!_Radar)
	{
		GEngine->AddOnScreenDebugMessage(-1, -15.0f, FColor::Red, FString::Printf(TEXT("El radar del subscriptor no existe")));
		return;
	}
	Radar = _Radar;
	Radar->Subscribirse(this);
}

void ANaveSubscriptor_1::Actualizar(APublicadorObserver* _Publicador)
{
	MejorarSubscriptor();
}

void ANaveSubscriptor_1::MejorarSubscriptor()
{
	Energy = Radar->GetEnergia();
	if (Energy.Equals("25"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("NaveSub1 Activar: SuperVelocidad y Armamento"), *Energy));
		ActivarSuperVelocidad();
		Armamento = 1;
		ActivarArmamento();
	}
	if (Energy.Equals("15"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("NaveSub1 Activar: Escudo y Mejorar: Armamento"), *Energy));
		SArmamento = 1;
		MejoraArmamento(0.0f);
		ActivarEscudo();
	}
	if (Energy.Equals("7"))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("NaveSub1 Mejorar: SuperVelocidad"), *Energy));
		MejorarSuperVelocidad();
	}
}

void ANaveSubscriptor_1::ActivarArmamento()
{
	if (Armamento == 1)
	{
		FVector PosNave = GetActorLocation();
		FRotator RotNave = GetActorRotation();

		FVector DistanciaP = FVector(-100.0f, 0.0f, 0.0f);

		FVector PosP = PosNave + GetActorForwardVector() * DistanciaP;

		Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(PosP, RotNave);

	}
}

void ANaveSubscriptor_1::MejoraArmamento(float DeltaTime)
{
	if (SArmamento == 1)
	{
		FVector PosNave = GetActorLocation();
		FRotator RotNave = GetActorRotation();

		FVector DistanciaP = FVector(-300.0f, 0.0f, 0.0f);

		FVector PosP = PosNave + GetActorForwardVector() * DistanciaP;

		Proyectil = GetWorld()->SpawnActor<AProyectilNodriza>(PosP, RotNave);

	}
}

void ANaveSubscriptor_1::ActivarSuperVelocidad()
{
	Velocidad = Velocidad * 2.0f;
}

void ANaveSubscriptor_1::MejorarSuperVelocidad()
{
	Velocidad = Velocidad * 2.0f;
}

void ANaveSubscriptor_1::ActivarEscudo()
{
	Escudo = 1;
}

void ANaveSubscriptor_1::MejorarImplementarEscudo()
{
	if (Escudo == 1)
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
	}
}

void ANaveSubscriptor_1::DestruirSubscripcion()
{
	Radar->DeSubscribirse(this);
}

void ANaveSubscriptor_1::Mover(float DeltaTime)
{
	FVector PosActual = GetActorLocation();
	FVector NuevaPos = PosActual + FVector(0.0f, Velocidad* DeltaTime, 0.0f);

	FVector LimiteDerecho = PosIn + FVector(0.0f, 400.0f, 0.0f);
	FVector LimiteIzquierdo = PosIn - FVector(0.0f, 400.0f, 0.0f);

	if (PosActual.Y > LimiteDerecho.Y && Velocidad > 0)
	{	
		Velocidad *= -1;
	}
	else if(PosActual.Y < LimiteIzquierdo.Y && Velocidad < 0)
	{
		Velocidad *= -1;
	}

	SetActorLocation(NuevaPos);
}

