#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbDeleteMany.generated.h"

class UMongoDbDeleteMany;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbDeleteMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbDeleteMany();
    UFUNCTION(BlueprintCallable)
    static UMongoDbDeleteMany* DeleteMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

