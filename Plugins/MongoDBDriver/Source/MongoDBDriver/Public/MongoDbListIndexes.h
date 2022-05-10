#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoIndexesDelegate.h"
#include "MongoDbListIndexes.generated.h"

class UMongoDbListIndexes;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbListIndexes : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoIndexes Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoIndexes Failed;
    
    UMongoDbListIndexes();
    UFUNCTION(BlueprintCallable)
    static UMongoDbListIndexes* ListIndexes(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName);
    
};

