#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DelegateCustomBoxTraceDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateCustomBoxTrace, bool, Hit, FVector, Vector, const TArray<FHitResult>&, HitResult);

