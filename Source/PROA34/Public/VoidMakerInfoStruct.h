#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BlueFireFogSettingsStruct.h"
#include "UObject/NoExportTypes.h"
#include "VoidMakerInfoStruct.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FVoidMakerInfoStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Display;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueFireFogSettingsStruct FogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* SkyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor MainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlackGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* FloorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFloor;
    
    UPROPERTY(EditAnywhere)
    float VoidReverbDarken;
    
    UPROPERTY(EditAnywhere)
    float VoidReverbSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMusicRecommendedName;
    
    PROA34_API FVoidMakerInfoStruct();
};

