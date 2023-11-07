// Fill out your copyright notice in the Description page of Project Settings.


#include "Barrera_Vidrio.h"

ABarrera_Vidrio::ABarrera_Vidrio()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarreraMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	//Define sus atributos
	NombreBarrera = "Barrera__Vidrio";
	
}
