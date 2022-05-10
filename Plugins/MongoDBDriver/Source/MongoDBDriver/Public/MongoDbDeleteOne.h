#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "DocumentValue.h"
#include "MongoDbDeleteOne.generated.h"

class UMongoDbDeleteOne;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbDeleteOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbDeleteOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDeleteOne* DeleteOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

