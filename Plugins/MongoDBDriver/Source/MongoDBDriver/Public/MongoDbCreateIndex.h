#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "DocumentValue.h"
#include "MongoDbCreateIndex.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbCreateIndex;

UCLASS(Blueprintable)
class UMongoDbCreateIndex : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbCreateIndex();
    UFUNCTION(BlueprintCallable)
    static UMongoDbCreateIndex* CreateIndex(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Keys, FDocumentValue IndexOptions);
    
};

