#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoCountsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynMutlMongoCounts, const int64, Count);

