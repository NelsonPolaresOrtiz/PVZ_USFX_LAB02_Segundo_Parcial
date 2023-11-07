// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera_Metal_Magico.h"

ABarrera_Metal_Magico::ABarrera_Metal_Magico()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim"));
	NombreBarrera = "Barrera Metal Magico";

}

void ABarrera_Metal_Magico::MandarAlInicio()
{

}
