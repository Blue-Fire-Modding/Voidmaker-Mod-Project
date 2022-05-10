#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "DocumentValue.h"
#include "MongoDbUpdateOne.generated.h"

class UMongoDbUpdateOne;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbUpdateOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbUpdateOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbUpdateOne* UpdateOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
};

