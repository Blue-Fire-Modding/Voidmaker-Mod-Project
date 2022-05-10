#pragma once
#include "CoreMinimal.h"
#include "ObjectId.h"
#include "MongoInsertResult.generated.h"

USTRUCT(BlueprintType)
struct MONGODBDRIVER_API FMongoInsertResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectId InsertedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InsertedCount;
    
    FMongoInsertResult();
};

