// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstrategy.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstrategy : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AUXILIATURA_API IIEstrategy
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void estrategia() = 0;
	virtual void posicionInicial(FVector ubicacion) = 0;
};
