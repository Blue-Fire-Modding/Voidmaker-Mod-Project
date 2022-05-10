#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbDropCollection.generated.h"

class UMongoDbDropCollection;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbDropCollection : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbDropCollection();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDropCollection* DropCollection(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

