#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbRenameCollection.generated.h"

class UMongoDbRenameCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbRenameCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbRenameCollection();
    UFUNCTION(BlueprintCallable)
    static UMongoDbRenameCollection* RenameCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, const FString& NewCollectionName, bool bOverwriteExisting);
    
};

