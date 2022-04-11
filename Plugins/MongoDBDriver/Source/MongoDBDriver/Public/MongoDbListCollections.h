#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoStringsDelegate.h"
#include "MongoDbListCollections.generated.h"

class UMongoDbListCollections;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS()
class UMongoDbListCollections : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoStrings Done;
    
    UPROPERTY(BlueprintAssignable)
    FDynMutlMongoStrings Failed;
    
    UMongoDbListCollections();
    UFUNCTION(BlueprintCallable)
    static UMongoDbListCollections* ListCollectionNames(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
};

