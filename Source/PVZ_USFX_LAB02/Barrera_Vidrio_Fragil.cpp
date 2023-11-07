// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera_Vidrio_Fragil.h"

ABarrera_Vidrio_Fragil::ABarrera_Vidrio_Fragil()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim"));
	NombreBarrera = "Barrera de Vidrio Fragil ";
}

void ABarrera_Vidrio_Fragil::RomperRapido()
{
}
