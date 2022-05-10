#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DelegateCustomLineTraceByChannelVectorsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FDelegateCustomLineTraceByChannelVectors, bool, Hit, FVector, HitLocation, FVector, HitImpactNormal, FVector, TraceEnd);

