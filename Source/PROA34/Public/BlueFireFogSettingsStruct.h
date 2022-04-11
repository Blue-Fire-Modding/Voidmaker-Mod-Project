#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "BlueFireFogSettingsStruct.generated.h"

USTRUCT(BlueprintType)
struct FBlueFireFogSettingsStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldLocation;
    
    PROA34_API FBlueFireFogSettingsStruct();
};

