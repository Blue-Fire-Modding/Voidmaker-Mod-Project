#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMultListDatabasesDelegate.h"
#include "MongoDbListDatabases.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbListDatabases;

UCLASS(Blueprintable)
class UMongoDbListDatabases : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMultListDatabases Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMultListDatabases Failed;
    
    UMongoDbListDatabases();
    UFUNCTION(BlueprintCallable)
    static UMongoDbListDatabases* ListDatabases(TScriptInterface<IDatabaseConnector> Connector);
    
};

