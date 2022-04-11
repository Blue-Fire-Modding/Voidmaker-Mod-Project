#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbDeleteOne.generated.h"

class UMongoDbDeleteOne;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbDeleteOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbDeleteOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDeleteOne* DeleteOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

