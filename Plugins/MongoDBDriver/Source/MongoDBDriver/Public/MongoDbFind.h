#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoDbFind.generated.h"

class UMongoDbFind;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbFind : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Failed;
    
    UMongoDbFind();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFind* Find(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

