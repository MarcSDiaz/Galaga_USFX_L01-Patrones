// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEspecialista.h"
#include "ProyectilNodriza.h"
#include "EscudoNodriza.h"

#include "EstadoNaveDefensa.h"
#include "EstadoNaveLetal.h"
#include "EstadoNaveNeutro.h"
#include "EstadoNaveGiratorio.h"

#include "Galaga_USFX_L01Projectile.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Components/PrimitiveComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ANaveEspecialista::ANaveEspecialista()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	MallaEspecialista = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MallaEspecialista->BodyInstance.SetCollisionProfileName("Nave Especialista");
	MallaEspecialista->OnComponentHit.AddDynamic(this, &ANaveEspecialista::OnHit);

	MallaEspecialista -> SetStaticMesh(ShipMesh.Object);
	RootComponent = MallaEspecialista;

	TiempoDisparo = 0.0f;
	TiempoEscudo = 0.0f;

	Velocidad = 100.0f;

	Mensaje = 0;

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

	Estado_Actual();

	Letalidad(Disparo);
	Defender(Defensa);

}

void ANaveEspecialista::GenerearDiferentesEstados(FString _State)
{
	
	EstadoActual = _State;

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

void ANaveEspecialista::Estado_Actual()
{

	if (EstadoActual.Equals("Letal") && Mensaje == 0)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("DesHabilitando Estados")));

		Defender(false);
		Giratorio(false);
		Neutro(false);
		
		Mensaje++;
	}
	if (EstadoActual.Equals("Defensivo") && Mensaje == 1)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("DesHabilitando Estados")));

		Letalidad(false);
		Neutro(false);
		Giratorio(false);

		Mensaje++;
	}
	if (EstadoActual.Equals("Giratorio") && Mensaje == 2)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("DesHabilitando Estados")));

		Letalidad(true);
		Defender(true);
		Neutro(false);

		Mensaje++;
	}
	if (EstadoActual.Equals("Neutro") && Mensaje == 3)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("DesHabilitando Estados")));

		Giratorio(false);
		Defender(false);
		Letalidad(false);

		Mensaje++;
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

void ANaveEspecialista::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor->IsA(AGalaga_USFX_L01Projectile::StaticClass()))
	{
		// Destruye el actor si colisiona con un proyectil
		Destroy();

		GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, FString::Printf(TEXT("Nave Destruida")));
	}
	
}



