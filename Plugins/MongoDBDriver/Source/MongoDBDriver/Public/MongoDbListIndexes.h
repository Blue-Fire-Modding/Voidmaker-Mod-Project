#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoIndexesDelegate.h"
#include "MongoDbListIndexes.generated.h"

class UMongoDbListIndexes;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbListIndexes : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoIndexes Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoIndexes Failed;
    
    UMongoDbListIndexes();
    UFUNCTION(BlueprintCallable)
    static UMongoDbListIndexes* ListIndexes(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

