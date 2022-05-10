#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidMakerAssetCategoryStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVoidMakerAssetCategoryStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Background;
    
    PROA34_API FVoidMakerAssetCategoryStruct();
};

