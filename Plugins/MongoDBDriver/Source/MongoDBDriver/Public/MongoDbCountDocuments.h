#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoCountsDelegate.h"
#include "DocumentValue.h"
#include "MongoDbCountDocuments.generated.h"

class UMongoDbCountDocuments;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbCountDocuments : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoCounts Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoCounts Failed;
    
    UMongoDbCountDocuments();
    UFUNCTION(BlueprintCallable)
    static UMongoDbCountDocuments* CountDocuments(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter);
    
};

