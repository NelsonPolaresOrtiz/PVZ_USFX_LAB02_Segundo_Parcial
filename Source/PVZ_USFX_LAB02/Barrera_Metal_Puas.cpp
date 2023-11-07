// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera_Metal_Puas.h"

ABarrera_Metal_Puas::ABarrera_Metal_Puas()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim"));
	NombreBarrera = "Barrera de Puas";
}

void ABarrera_Metal_Puas::QuitarVida()
{
}
