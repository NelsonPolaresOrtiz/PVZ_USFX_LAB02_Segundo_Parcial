// Fill out your copyright notice in the Description page of Project Settings.


#include "Barreras.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
ABarreras::ABarreras()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	


	// Inicializa el componente UStaticMeshComponent.
	BarreraMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarreraMeshComponent"));
	RootComponent = BarreraMeshComponent;

	// Asigna la malla estática deseada a la variable BarreraMesh.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim"));

}

// Called when the game starts or when spawned
void ABarreras::BeginPlay()
{
	Super::BeginPlay();
	
}



void ABarreras::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Aumenta el contador de tiempo de desaparición.
    TiempoDeDesaparicion += DeltaTime;

    if (TiempoDeDesaparicion >= 10.0f)
    {
        // Comienza a desvanecer la barrera.
        Desaparecer();

        // Aumenta el contador de tiempo de reaparición.
		TiempoDeAparicion += DeltaTime;

        if (TiempoDeAparicion >= 5.0f)
        {
            // Comienza a reaparecer la barrera.
            Aparecer();
        }
    }
}

void ABarreras::Desaparecer()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
    
}

void ABarreras::Aparecer()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

//void ABarreras::Armar()
//{
//	//Muestra el procedimiento de armado  de las barreras en pantalla
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Armando %s"), *GetNombreBarrera()));
//
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Armando..."));
//}

void ABarreras::Elaboracion()
{
	//Muestra el procedimiento de elaboracion en pantalla
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Elaborando..."));
}

//void ABarreras::Liberar()
//{
//	//Muestra el procedimiento de liberacion en pantalla
//	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Liberando la Barrera"));
//}

FString ABarreras::GetNombreBarrera()
{
	return NombreBarrera;
}

