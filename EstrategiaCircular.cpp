// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaCircular.h"

// Sets default values
AEstrategiaCircular::AEstrategiaCircular()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaCircular::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaCircular::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaCircular::estrategia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ejecuntado estrategia circular"));
}

void AEstrategiaCircular::posicionInicial(FVector ubicacion)
{
	Ubicacion = ubicacion;
}

