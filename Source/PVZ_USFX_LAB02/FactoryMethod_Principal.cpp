// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Principal.h"
#include "Generador_de_Barreras_Metal.h"
#include "Generador_de_Barreras_Vidrio.h"
// Sets default values
AFactoryMethod_Principal::AFactoryMethod_Principal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactoryMethod_Principal::BeginPlay()
{
	Super::BeginPlay();
  
	//Crea los generadores de BARRERAS
	AGenerador_de_Barreras* Generador_de_Barreras_Metal = GetWorld()->SpawnActor<AGenerador_de_Barreras_Metal>(AGenerador_de_Barreras_Metal::StaticClass());
    AGenerador_de_Barreras* Generador_de_Barreras_Vidrio = GetWorld()->SpawnActor<AGenerador_de_Barreras_Vidrio>(AGenerador_de_Barreras_Vidrio::StaticClass());
	ABarreras* Barrera;
   

	Barrera = Generador_de_Barreras_Metal->OrdenarBarreras("Barrera_Metalico_Puas");
 //   Barrera = Generador_de_Barreras_Metal->OrdenarBarreras("Barrera_Metalico_Magico");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT(" Creando %s"), *Barrera->GetNombreBarrera()));

	
    Barrera = Generador_de_Barreras_Vidrio->OrdenarBarreras("Barrera_Vidrio_Fragil");
   // Barrera = Generador_de_Barreras_Vidrio->OrdenarBarreras("Barrera_vidrio_Espejo");
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT(" Creando %s"), *Barrera->GetNombreBarrera()));
}

// Called every frame
void AFactoryMethod_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

