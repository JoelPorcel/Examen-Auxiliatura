// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoNaveNova.h"

// Sets default values
AEnemigoNaveNova::AEnemigoNaveNova()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigoNaveNova::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoNaveNova::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigoNaveNova::EstablecerEstrategia(IIEstrategy* Estrategia)
{
	estrategy = Estrategia;
	if (estrategy)  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("estrategia correcta"));
}

void AEnemigoNaveNova::EjecutarEstrategia()
{
	if (estrategy) {
		estrategy->posicionInicial(GetActorLocation());
		estrategy->estrategia();

	}
}

