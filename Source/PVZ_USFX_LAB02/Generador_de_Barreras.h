// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barreras.h"
#include "Generador_de_Barreras.generated.h"
UCLASS()
class PVZ_USFX_LAB02_API AGenerador_de_Barreras : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenerador_de_Barreras();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//Crea una Barrera  y lo devuelve. es una funciona virtual pura así que no necesita implementacion
	virtual ABarreras* ArmarBarreras(FString BarrerasSKU)
		PURE_VIRTUAL(AGenerador_de_Barreras::ArmarBarreras, return nullptr;);

	//Ordena, arma y devuelve una Barrera de tipo
//	ABarreras* OrdenarBarreras(FString Tipo);
	ABarreras* AGenerador_de_Barreras::OrdenarBarreras(FString Tipo);
};
