// Fill out your copyright notice in the Description page of Project Settings.


#include "Generador_de_Barreras.h"

// Sets default values
AGenerador_de_Barreras::AGenerador_de_Barreras()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGenerador_de_Barreras::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AGenerador_de_Barreras::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABarreras* AGenerador_de_Barreras::OrdenarBarreras(FString Tipo)
{

	//Crea la Barrera y muestra su nombre en pantalla
	ABarreras* Barrera = ArmarBarreras(Tipo);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Elaborando %s"), *Barrera->GetNombreBarrera()));
	//Inicia el proceso de elaboracion
	//Barrera->Armar();
	Barrera->Elaboracion();
	//Barrera->Liberar();

	//Returns the created potion
	return Barrera;
}

