#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidMakerMaterialsStruct.generated.h"

class UMaterialInstance;
class UTexture2D;

USTRUCT(BlueprintType)
struct FVoidMakerMaterialsStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Thumbnail;
    
    PROA34_API FVoidMakerMaterialsStruct();
};

