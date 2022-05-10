#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DynMutlMongoDelegate.h"
#include "DocumentValue.h"
#include "MongoDbInsertMany.generated.h"

class UMongoDbInsertMany;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbInsertMany : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongo Failed;
    
    UMongoDbInsertMany();
    UFUNCTION(BlueprintCallable)
    static UMongoDbInsertMany* InsertMany(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, const FString& CollectionName, TArray<FDocumentValue> Value);
    
};

