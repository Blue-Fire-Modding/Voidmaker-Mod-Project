#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbReplaceOne.generated.h"

class UMongoDbReplaceOne;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbReplaceOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbReplaceOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbReplaceOne* ReplaceOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Replacement);
    
};

