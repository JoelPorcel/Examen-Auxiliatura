// Copyright Epic Games, Inc. All Rights Reserved.

// Patron usado para los movimientos: Estrategy, esto porque es un paatron que cada clase tiene su propia estrategia, lo que nos permite
// tener una buena reutilizacion de estos, ya que a futuro se pueden crear nuevas naves y combinar 2 estratergias.


#include "AuxiliaturaGameModeBase.h"
#include "EnemigoNaveEstrella.h"
#include "EnemigoNaveNova.h"
#include "EstrategiaArbitrario.h"
#include "EstrategiaAleatoria.h"
#include "EstrategiaCircular.h"
#include "EstrategiaCurvilineo.h"

void AAuxiliaturaGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	TArray<class AEnemigos*> enemigos;
	AEnemigoNaveEstrella* naveEstrella = GetWorld()->SpawnActor<AEnemigoNaveEstrella>();
	AEnemigoNaveNova* naveNova = GetWorld()->SpawnActor<AEnemigoNaveNova>();
	naveEstrella->SetActorLocation(FVector(0, 0, 0));
	naveNova->SetActorLocation(FVector(0, 0, 0));

	IIEstrategy* estrategiaCircular = GetWorld()->SpawnActor<AEstrategiaCircular>();
	IIEstrategy* estrategiaAleatoria = GetWorld()->SpawnActor<AEstrategiaAleatoria>();

	naveEstrella->EstablecerEstrategia(estrategiaCircular);
	naveEstrella->EjecutarEstrategia();

	naveNova->EstablecerEstrategia(estrategiaAleatoria);
	naveNova->EjecutarEstrategia();

	AEnemigoNaveEstrella* naveA = GetWorld()->SpawnActor<AEnemigoNaveEstrella>();
	AEnemigoNaveNova* naveB = GetWorld()->SpawnActor<AEnemigoNaveNova>();

	// poner de forma estrategica naves
	for (int32 i = 1; i <= 10; i++) {
		naveA = GetWorld()->SpawnActor<AEnemigoNaveEstrella>();
		naveA->SetActorLocation(FVector(i * 100, 0, 0));
		enemigos.Add(naveA);
		naveB = GetWorld()->SpawnActor<AEnemigoNaveNova>();
		naveB->SetActorLocation(FVector(i * -100, 0, 0));
		enemigos.Add(naveB);
	}

}

void AAuxiliaturaGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
