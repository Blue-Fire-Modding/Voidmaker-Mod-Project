#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbDropDatabase.generated.h"

class UMongoDbDropDatabase;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbDropDatabase : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbDropDatabase();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDropDatabase* DropDatabase(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
};

