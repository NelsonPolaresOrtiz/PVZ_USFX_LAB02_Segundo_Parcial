// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barreras.h"
#include "Barrera_Metal_Puas.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ABarrera_Metal_Puas : public ABarreras
{
	GENERATED_BODY()
public:
	ABarrera_Metal_Puas();
	void QuitarVida();
};
