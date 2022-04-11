#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbUpdateOne.generated.h"

class UMongoDbUpdateOne;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbUpdateOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbUpdateOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbUpdateOne* UpdateOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
};

