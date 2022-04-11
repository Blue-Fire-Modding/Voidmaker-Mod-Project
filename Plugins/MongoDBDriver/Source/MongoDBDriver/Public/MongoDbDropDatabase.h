#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "MongoDbDropDatabase.generated.h"

class UMongoDbDropDatabase;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbDropDatabase : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbDropDatabase();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDropDatabase* DropDatabase(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
};

