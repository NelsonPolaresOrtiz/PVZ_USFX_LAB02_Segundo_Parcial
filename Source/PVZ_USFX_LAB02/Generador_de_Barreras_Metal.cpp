// Fill out your copyright notice in the Description page of Project Settings.


#include "Generador_de_Barreras_Metal.h"
#include "Barrera_Metal.h"
#include "Barrera_Metal_Puas.h"
#include "Barrera_Metal_Magico.h"

//ABarreras* AGenerador_de_Barreras_Metal::ArmarBarreras(FString BarrerasSKU)
//{
//
//	FVector SpawnLocationBarreraMetalica= (FVector(-900.0f, 600.0f, 200.0f));
//
//	//Selecciona el tipo de zombie a crear basado en su ZombiesSKU (string)
//	if (BarrerasSKU.Equals("Barrera__Metalico")) {
//		return GetWorld()->SpawnActor<ABarrera_Metal>(ABarrera_Metal::StaticClass() ,SpawnLocationBarreraMetalica,FRotator::ZeroRotator);
//	}
//	else if (BarrerasSKU.Equals("Barrera_Metal_oxidado")) {
//		return nullptr;
//	}
//	else return nullptr; //Returna null si el valor no es valido
//}

//FVector AGenerador_de_Barreras_Metal::GenerateRandomSpawnLocation()
//{
//    // Genera una ubicación aleatoria entre -900 y -1500 con intervalos de 150
//    FVector MinSpawnLocation = FVector(-1500.0f, 600.0f, 200.0f);
//    FVector MaxSpawnLocation = FVector(-900.0f, 600.0f, 200.0f);
//
//    FVector RandomSpawnLocation;
//    RandomSpawnLocation.X = FMath::FRandRange(MinSpawnLocation.X, MaxSpawnLocation.X);
//    RandomSpawnLocation.Y = MinSpawnLocation.Y;
//    RandomSpawnLocation.Z = MinSpawnLocation.Z;
//
//    return RandomSpawnLocation;
//}
//
//ABarreras* AGenerador_de_Barreras_Metal::ArmarBarreras(FString BarrerasSKU)
//{
//    // Genera una ubicación aleatoria dentro del rango entre -900 y -1500 con intervalos de 150
//    do {
//        SpawnLocationBarreraMetalica = GenerateRandomSpawnLocation();
//    } while (IsSpawnLocationAlreadyUsed(SpawnLocationBarreraMetalica));
//
//    // Agrega la ubicación a la lista de ubicaciones generadas
//    SpawnedLocations.Add(SpawnLocationBarreraMetalica);
//
//    //Selecciona el tipo de barrera a crear basado en su SKU (string)
//    if (BarrerasSKU.Equals("Barrera__Metalico")) {
//        return GetWorld()->SpawnActor<ABarrera_Metal>(ABarrera_Metal::StaticClass(), SpawnLocationBarreraMetalica, FRotator::ZeroRotator);
//    }
//    else if (BarrerasSKU.Equals("Barrera_Metal_oxidado")) {
//        return nullptr;
//    }
//    else return nullptr; // Retorna null si el valor no es válido
//}
//
//bool AGenerador_de_Barreras_Metal::IsSpawnLocationAlreadyUsed(FVector Location)
//{
//    // Verifica si la ubicación ya ha sido utilizada
//    for (FVector SpawnedLocation : SpawnedLocations) {
//        if (FVector::Dist(Location, SpawnedLocation) < 150.0f) {
//            // Las ubicaciones están muy cerca, por lo que ya se utilizó
//            return true;
//        }
//    }
//    return false;
//}


AGenerador_de_Barreras_Metal::AGenerador_de_Barreras_Metal()
{
    //// Definir las ubicaciones fijas
    //FixedSpawnLocations.Add(FVector(-900.0f, 600.0f, 200.0f));
    //FixedSpawnLocations.Add(FVector(-1050.0f, 600.0f, 200.0f));
    //FixedSpawnLocations.Add(FVector(-1200.0f, 600.0f, 200.0f));
    //FixedSpawnLocations.Add(FVector(-1350.0f, 600.0f, 200.0f));
    //FixedSpawnLocations.Add(FVector(-1500.0f, 600.0f, 200.0f));
    //CurrentSpawnLocationIndex = 0;
}

ABarreras* AGenerador_de_Barreras_Metal::ArmarBarreras(FString BarrerasSKU)
{
    FVector SpawnLocationBarreraMetalica = GenerateUniqueFixedSpawnLocation();

    //Selecciona el tipo de barrera a crear basado en su SKU (string)
    if (BarrerasSKU.Equals("Barrera_Metalico_Magico")) {
        return GetWorld()->SpawnActor<ABarrera_Metal_Magico>(ABarrera_Metal_Magico::StaticClass(), SpawnLocationBarreraMetalica, FRotator::ZeroRotator);
    }
    else if (BarrerasSKU.Equals("Barrera_Metal_Puas")) {
        
        return nullptr; GetWorld()->SpawnActor<ABarrera_Metal_Puas>(ABarrera_Metal_Puas::StaticClass(), SpawnLocationBarreraMetalica, FRotator::ZeroRotator);
    }
    else return nullptr; // Retorna null si el valor no es válido
}

FVector AGenerador_de_Barreras_Metal::GenerateUniqueFixedSpawnLocation()
{
   // static TArray<FVector> FixedSpawnLocations; // Almacena las ubicaciones fijas generadas
    FVector SpawnLocationBarreraMetalica;

    // Define una lista de ubicaciones fijas
    TArray<FVector> FixedLocations = {
        FVector(-900.0f, 600.0f, 200.0f),
        FVector(-1050.0f, 600.0f, 200.0f),
        FVector(-1200.0f, 600.0f, 200.0f),
        FVector(-1350.0f, 600.0f, 200.0f),
        FVector(-1500.0f, 600.0f, 200.0f)
    };

    for (int i = 0; i < FixedLocations.Num(); ++i)
    {
        const int32 Index = FMath::RandRange(i, FixedLocations.Num() - 1);
        SpawnLocationBarreraMetalica = FixedLocations[Index];
        FixedLocations.RemoveAt(Index);

        // Verifica si la ubicación ya ha sido utilizada
        bool bIsUniqueLocation = true;
        for (const FVector& UsedLocation : FixedSpawnLocations)
        {
            if (FVector::DistSquared(UsedLocation, SpawnLocationBarreraMetalica) < 500.0f * 500.0f)
            {
                bIsUniqueLocation = false;
                break;
            }
        }

        if (bIsUniqueLocation)
        {
            // Agrega la ubicación a la lista de ubicaciones generadas
            FixedSpawnLocations.Add(SpawnLocationBarreraMetalica);
            return SpawnLocationBarreraMetalica;
        }
    }

    // Si no se puede encontrar una ubicación única, devuelve una ubicación predeterminada
    return FVector(-900.0f, 600.0f, 200.0f);
}
