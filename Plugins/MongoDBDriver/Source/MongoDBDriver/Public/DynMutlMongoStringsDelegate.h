#pragma once
#include "CoreMinimal.h"
#include "DynMutlMongoStringsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynMutlMongoStrings, const TArray<FString>&, Collections);

