#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoCountsDelegate.h"
#include "MongoDbGetEstimatedDocumentCount.generated.h"

class UMongoDbGetEstimatedDocumentCount;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbGetEstimatedDocumentCount : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoCounts Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoCounts Failed;
    
    UMongoDbGetEstimatedDocumentCount();
    UFUNCTION(BlueprintCallable)
    static UMongoDbGetEstimatedDocumentCount* GetEstimatedDocumentCount(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

