#pragma once
#include "CoreMinimal.h"
#include "MongoDbAsyncNodeBase.h"
#include "DocumentValue.h"
#include "DynMutlMongoDocumentDelegate.h"
#include "MongoDbRunCommand.generated.h"

class UMongoDbRunCommand;
class UDatabaseConnector;
class IDatabaseConnector;

UCLASS(Blueprintable)
class UMongoDbRunCommand : public UMongoDbAsyncNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoDocument Done;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynMutlMongoDocument Failed;
    
    UMongoDbRunCommand();
    UFUNCTION(BlueprintCallable)
    static UMongoDbRunCommand* RunCommand(TScriptInterface<IDatabaseConnector> Connector, const FString& DatabaseName, FDocumentValue Command);
    
};

