#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoDelegate.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "MongoDbInsertMany.generated.h"

class UMongoDbInsertMany;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbInsertMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongo Failed;
    
    UMongoDbInsertMany();
    UFUNCTION(BlueprintCallable)
    static UMongoDbInsertMany* InsertMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, TArray<FDocumentValue> Value);
    
};

