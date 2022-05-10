#pragma once
#include "CoreMinimal.h"
#include "DatabaseIndex.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FDatabaseIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FDatabaseIndex();
};

