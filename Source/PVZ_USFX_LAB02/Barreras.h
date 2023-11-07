// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Barreras.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ABarreras : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarreras();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	//Nombre de la Barrera
	FString NombreBarrera;
	// vida de la barrera
	int Vida_Barrera;

	// "Materiales" de las Barreras 
	TArray<FString> Materiales;
protected:
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BarreraMeshComponent;

	UPROPERTY(EditAnywhere)
		UStaticMesh* BarreraMesh; // La malla estática que deseas utilizar

public:

	// "Armar" la  Barrera
	//void Armar();

	//"Elabora" el zombie
	virtual void Elaboracion();

	//"Libera" la Barrera
	//void Liberar();

	//Devuelve el nombre dela Barrera 
	FString GetNombreBarrera();

	void Aparecer();
	void Desaparecer();


	// Restablece el contador de tiempo de desaparición.
	float TiempoDeDesaparicion = 0.0f;

	// Restablece el contador de tiempo de reaparición.
	float TiempoDeAparicion = 0.0f;
};
