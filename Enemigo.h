// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS(Abstract)
class AUXILIATURA_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstablecerEstrategia(class IIEstrategy* Estrategia) PURE_VIRTUAL(AEnemigo::EstablecerEstrategia, );
	virtual void EjecutarEstrategia() PURE_VIRTUAL(AEnemigo::EjecutarEstrategia, );

	class IIEstrategy* estrategy;

};
