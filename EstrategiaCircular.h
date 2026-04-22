// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstrategy.h"
#include "EstrategiaCircular.generated.h"

UCLASS()
class AUXILIATURA_API AEstrategiaCircular : public AActor, public IIEstrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaCircular();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void estrategia() override;
	void posicionInicial(FVector ubicacion) override;
	FVector Ubicacion;

};
