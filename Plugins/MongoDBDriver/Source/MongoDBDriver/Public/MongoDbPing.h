#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbPing.generated.h"

class UMongoDbPing;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbPing : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbPing();
    UFUNCTION(BlueprintCallable)
    static UMongoDbPing* Ping(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
};

