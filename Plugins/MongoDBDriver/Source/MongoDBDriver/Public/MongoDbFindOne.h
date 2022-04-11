#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoDbFindOne.generated.h"

class UMongoDbFindOne;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbFindOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoDocument Failed;
    
    UMongoDbFindOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindOne* FindOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

