#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoFindOptions.h"
#include "MongoDbFindWithOptions.generated.h"

class UMongoDbFindWithOptions;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbFindWithOptions : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoDocument Failed;
    
    UMongoDbFindWithOptions();
    UFUNCTION(BlueprintCallable)
    static UMongoDbFindWithOptions* FindWithOptions(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, FDocumentValue Filter, FMongoFindOptions Options);
    
};

