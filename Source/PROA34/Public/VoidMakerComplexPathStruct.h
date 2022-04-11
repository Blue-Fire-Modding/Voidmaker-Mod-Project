#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "VoidMakerActorParamStruct.h"
#include "VoidMakerComplexPathStruct.generated.h"

USTRUCT(BlueprintType)
struct FVoidMakerComplexPathStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> ComplexPathPointsTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ComplexPathTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StructObjectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ComplexPointsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVoidMakerActorParamStruct> ComplexPathParameters;
    
    PROA34_API FVoidMakerComplexPathStruct();
};

