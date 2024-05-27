// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PublicadorObserver.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APublicadorObserver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublicadorObserver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Publicador Observer")
	TArray<AActor*> Subscriptores;

	class IISubscriptor* Subscriptor;

public:

	virtual void Subscribirse(AActor* _Subscriptor);
	virtual void DeSubscribirse(AActor* _Subscriptor);
	virtual void NotificadorSubscriptores();
};

