#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoCountsDelegate.h"
#include "MongoDbGetEstimatedDocumentCount.generated.h"

class UMongoDbGetEstimatedDocumentCount;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbGetEstimatedDocumentCount : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoCounts Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoCounts Failed;
    
    UMongoDbGetEstimatedDocumentCount();
    UFUNCTION(BlueprintCallable)
    static UMongoDbGetEstimatedDocumentCount* GetEstimatedDocumentCount(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

