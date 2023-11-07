// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barreras.h"
#include "Barrera_Vidrio_Fragil.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ABarrera_Vidrio_Fragil : public ABarreras
{
	GENERATED_BODY()

public:
	ABarrera_Vidrio_Fragil();

	void RomperRapido();
	
};
