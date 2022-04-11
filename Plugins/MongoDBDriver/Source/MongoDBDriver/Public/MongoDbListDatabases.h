#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMultListDatabasesDelegate.h"
#include "MongoDbListDatabases.generated.h"

class UMongoDbListDatabases;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbListDatabases : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMultListDatabases Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMultListDatabases Failed;
    
    UMongoDbListDatabases();
    UFUNCTION(BlueprintCallable)
    static UMongoDbListDatabases* ListDatabases(TScriptInterface<IDatabaseConnector> Connector);
    
};

