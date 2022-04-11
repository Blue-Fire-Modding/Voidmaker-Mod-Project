#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoFindOptions.h"
#include "MongoDbFindOneWithOptions.generated.h"

class UMongoDbFindOneWithOptions;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbFindOneWithOptions : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Failed;
    
    UMongoDbFindOneWithOptions();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneWithOptions* FindOneWithOptions(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FMongoFindOptions Options);
    
};

