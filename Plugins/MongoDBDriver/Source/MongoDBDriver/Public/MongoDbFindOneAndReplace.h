#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoDbFindOneAndReplace.generated.h"

class UMongoDbFindOneAndReplace;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbFindOneAndReplace : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Failed;
    
    UMongoDbFindOneAndReplace();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneAndReplace* FindOneAndReplace(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Replacement);
    
};

