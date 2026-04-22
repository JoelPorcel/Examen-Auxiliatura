// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h" 
#include "IEstrategy.h"
#include "EnemigoNaveNova.generated.h"

UCLASS()
class AUXILIATURA_API AEnemigoNaveNova : public AEnemigo, public IIEstrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoNaveNova();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerEstrategia(class IIEstrategy* Estrategia) override;
	void EjecutarEstrategia() override;
};
