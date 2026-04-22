// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaAleatoria.h"

// Sets default values
AEstrategiaAleatoria::AEstrategiaAleatoria()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaAleatoria::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaAleatoria::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaAleatoria::estrategia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ejecuntado estrategia aleatoria"));
}

void AEstrategiaAleatoria::posicionInicial(FVector ubicacion)
{
	Ubicacion = ubicacion;
}

