#pragma once
#include "CoreMinimal.h"
#include "MongoInsertResult.h"
#include "DynMultInsertDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynMultInsert, const FMongoInsertResult&, Result);

