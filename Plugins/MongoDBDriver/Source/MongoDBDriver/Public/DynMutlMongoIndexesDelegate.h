#pragma once
#include "CoreMinimal.h"
#include "DatabaseIndex.h"
#include "DynMutlMongoIndexesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynMutlMongoIndexes, const TArray<FDatabaseIndex>&, Indexes);

