// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Generador_de_Barreras.h"
#include "Generador_de_Barreras_Vidrio.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AGenerador_de_Barreras_Vidrio : public AGenerador_de_Barreras
{
	GENERATED_BODY()
public:

		virtual ABarreras* ArmarBarreras(FString BarrerasSKU) override;
	
		FVector GenerateUniqueFixedSpawnLocation();

public:

	TArray<FVector> FixedSpawnLocations;
	int CurrentSpawnLocationIndex;

	//FVector SpawnLocationBarreraMetalica;
	TArray<FVector> SpawnedLocations; // Almacena las ubicaciones ya generadas
};
