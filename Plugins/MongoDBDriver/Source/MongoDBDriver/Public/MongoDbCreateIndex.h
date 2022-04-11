#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbCreateIndex.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbCreateIndex;

UCLASS()
class UMongoDbCreateIndex : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbCreateIndex();
    UFUNCTION(BlueprintCallable)
    static UMongoDbCreateIndex* CreateIndex(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Keys, FDocumentValue IndexOptions);
    
};

