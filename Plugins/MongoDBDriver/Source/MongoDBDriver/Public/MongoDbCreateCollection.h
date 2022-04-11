#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbCreateCollection.generated.h"

class UMongoDbCreateCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbCreateCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbCreateCollection();
    UFUNCTION(BlueprintCallable)
    static UMongoDbCreateCollection* CreateCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

