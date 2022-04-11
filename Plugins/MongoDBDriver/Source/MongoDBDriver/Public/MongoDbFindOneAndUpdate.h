#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoDbFindOneAndUpdate.generated.h"

class UMongoDbFindOneAndUpdate;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbFindOneAndUpdate : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Failed;
    
    UMongoDbFindOneAndUpdate();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneAndUpdate* FindOneAndUpdate(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
};

