// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Generador_de_Barreras.h"
#include "Generador_de_Barreras_Metal.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AGenerador_de_Barreras_Metal : public AGenerador_de_Barreras
{
	GENERATED_BODY()

public:
	AGenerador_de_Barreras_Metal();

	//Concoct the selected potion
	virtual ABarreras* ArmarBarreras(FString BarrerasSKU) override;
	FVector GenerateUniqueFixedSpawnLocation();
	//bool IsSpawnLocationAlreadyUsed(FVector Location);
	//FVector GenerateRandomSpawnLocation();

	//FVector SpawnLocationBarreraMetalica;
	TArray<FVector> SpawnedLocations; // Almacena las ubicaciones ya generadas

	
public:

	TArray<FVector> FixedSpawnLocations;
	int CurrentSpawnLocationIndex;
};
