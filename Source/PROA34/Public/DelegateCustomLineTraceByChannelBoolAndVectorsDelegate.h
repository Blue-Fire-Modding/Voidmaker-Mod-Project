#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DelegateCustomLineTraceByChannelBoolAndVectorsDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_SixParams(FDelegateCustomLineTraceByChannelBoolAndVectors, bool, HitA, bool, HitB, bool, HitC, FVector, HitLocation, FVector, HitImpactPoint, FVector, HitImpactNormal);

