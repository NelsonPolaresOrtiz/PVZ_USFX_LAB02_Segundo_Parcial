// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera_Vidrio_Espejo.h"

ABarrera_Vidrio_Espejo::ABarrera_Vidrio_Espejo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim"));
	NombreBarrera = "Barrera de Vidrio Espejo";
}

void ABarrera_Vidrio_Espejo::Hipnotizar()
{
}
