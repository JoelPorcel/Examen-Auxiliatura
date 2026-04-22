// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaCurvilineo.h"

// Sets default values
AEstrategiaCurvilineo::AEstrategiaCurvilineo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaCurvilineo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaCurvilineo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaCurvilineo::estrategia()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Ejecuntado estrategia curbilinea"));
}

void AEstrategiaCurvilineo::posicionInicial(FVector ubicacion)
{
	Ubicacion = ubicacion;
}

