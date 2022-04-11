#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbPing.generated.h"

class UMongoDbPing;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbPing : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbPing();
    UFUNCTION(BlueprintCallable)
    static UMongoDbPing* Ping(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
};

