#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbDropCollection.generated.h"

class UMongoDbDropCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbDropCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbDropCollection();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDropCollection* DropCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

