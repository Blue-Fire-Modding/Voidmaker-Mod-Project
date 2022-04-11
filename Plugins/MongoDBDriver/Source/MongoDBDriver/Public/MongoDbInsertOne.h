#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMultInsertDelegate.h"
#include "DocumentValue.h"
#include "MongoDbInsertOne.generated.h"

class UDatabaseConnector;
class IDatabaseConnector;
class UMongoDbInsertOne;

UCLASS()
class UMongoDbInsertOne : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMultInsert Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMultInsert Failed;
    
    UMongoDbInsertOne();
    UFUNCTION(BlueprintCallable)
    static UMongoDbInsertOne* InsertOne(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Value);
    
};

