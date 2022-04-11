#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "BlueFireFogSettingsStruct.h"
#include "VoidMakerInfoStruct.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FVoidMakerInfoStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlueFireFogSettingsStruct FogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* SkyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor MainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlackGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* FloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VoidReverbDarken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VoidReverbSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StateMusicRecommendedName;
    
    PROA34_API FVoidMakerInfoStruct();
};

