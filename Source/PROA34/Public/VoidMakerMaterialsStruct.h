#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidMakerMaterialsStruct.generated.h"

class UTexture2D;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FVoidMakerMaterialsStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Thumbnail;
    
    PROA34_API FVoidMakerMaterialsStruct();
};

