// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera_Metal.h"


ABarrera_Metal::ABarrera_Metal()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim"));
	//Define sus atributos
	NombreBarrera = "Barrera_Metalica";
	Vida_Barrera = 400;

}


