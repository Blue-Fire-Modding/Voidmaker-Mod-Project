#pragma once
#include "CoreMinimal.h"
#include "DatabaseData.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FDatabaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    float SizeOnDisk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAnyData;
    
    FDatabaseData();
};

