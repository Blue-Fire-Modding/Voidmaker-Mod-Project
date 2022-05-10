#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "BlueFireFogSettingsStruct.generated.h"

USTRUCT(BlueprintType)
struct FBlueFireFogSettingsStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogColor;
    
    UPROPERTY(EditAnywhere)
    float FogDensity;
    
    UPROPERTY(EditAnywhere)
    float HeightFalloff;
    
    UPROPERTY(EditAnywhere)
    float StartDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxOpacity;
    
    UPROPERTY(EditAnywhere)
    float WorldLocation;
    
    PROA34_API FBlueFireFogSettingsStruct();
};

