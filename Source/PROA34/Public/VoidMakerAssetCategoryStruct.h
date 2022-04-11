#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidMakerAssetCategoryStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVoidMakerAssetCategoryStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Background;
    
    PROA34_API FVoidMakerAssetCategoryStruct();
};

