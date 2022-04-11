#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VoidMakerProfilePictureStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVoidMakerProfilePictureStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProfileIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Picture;
    
    PROA34_API FVoidMakerProfilePictureStruct();
};

