#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbCreateCollection.generated.h"

class UMongoDbCreateCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbCreateCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbCreateCollection();
    UFUNCTION(BlueprintCallable)
    static UMongoDbCreateCollection* CreateCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

