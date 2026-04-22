// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaArbitrario.h"

// Sets default values
AEstrategiaArbitrario::AEstrategiaArbitrario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaArbitrario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaArbitrario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaArbitrario::estrategia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ejecuntado estrategia arbitraria"));
}

void AEstrategiaArbitrario::posicionInicial(FVector ubicacion)
{
	Ubicacion = ubicacion;
}

