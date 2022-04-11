#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbUpdateMany.generated.h"

class UMongoDbUpdateMany;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbUpdateMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbUpdateMany();
    UFUNCTION(BlueprintCallable)
    static UMongoDbUpdateMany* UpdateMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FDocumentValue Update);
    
};

