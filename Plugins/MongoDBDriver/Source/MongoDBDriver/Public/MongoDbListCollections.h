#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoStringsDelegate.h"
#include "MongoDbListCollections.generated.h"

class UMongoDbListCollections;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbListCollections : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoStrings Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoStrings Failed;
    
    UMongoDbListCollections();
    UFUNCTION(BlueprintCallable)
    static UMongoDbListCollections* ListCollectionNames(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName);
    
};

