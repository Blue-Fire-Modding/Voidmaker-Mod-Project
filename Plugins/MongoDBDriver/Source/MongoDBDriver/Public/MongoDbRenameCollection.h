#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbRenameCollection.generated.h"

class UMongoDbRenameCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbRenameCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbRenameCollection();
    UFUNCTION(BlueprintCallable)
    static UMongoDbRenameCollection* RenameCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, const FString& NewCollectionName, bool bOverwriteExisting);
    
};

