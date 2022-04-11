#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoDbFindOneAndDelete.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbFindOneAndDelete;

UCLASS()
class UMongoDbFindOneAndDelete : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Failed;
    
    UMongoDbFindOneAndDelete();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOneAndDelete* FindOneAndDelete(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

