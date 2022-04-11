#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidMakerCategoryArrayStruct.generated.h"

USTRUCT(BlueprintType)
struct FVoidMakerCategoryArrayStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> StringArray;
    
    PROA34_API FVoidMakerCategoryArrayStruct();
};

