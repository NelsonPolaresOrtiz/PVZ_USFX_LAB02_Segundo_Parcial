// Fill out your copyright notice in the Description page of Project Settings.


#include "Generador_de_Barreras_Vidrio.h"
#include "Barrera_Vidrio_Espejo.h"
#include "Barrera_Vidrio_Fragil.h"
ABarreras* AGenerador_de_Barreras_Vidrio::ArmarBarreras(FString BarrerasSKU)
{
    
        FVector SpawnLocationBarreraMetalica = GenerateUniqueFixedSpawnLocation();

        //Selecciona el tipo de barrera a crear basado en su SKU (string)
        if (BarrerasSKU.Equals("Barrera_Vidrio_Fragil")) {
            return GetWorld()->SpawnActor<ABarrera_Vidrio_Fragil>(ABarrera_Vidrio_Fragil::StaticClass(), SpawnLocationBarreraMetalica, FRotator::ZeroRotator);
        }
        else if (BarrerasSKU.Equals("Barrera_vidrio_Espejo")) {

            return  GetWorld()->SpawnActor<ABarrera_Vidrio_Espejo>(ABarrera_Vidrio_Espejo::StaticClass(), SpawnLocationBarreraMetalica, FRotator::ZeroRotator);
        }
        else return nullptr; // Retorna null si el valor no es válido
    
}

FVector AGenerador_de_Barreras_Vidrio::GenerateUniqueFixedSpawnLocation()
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
