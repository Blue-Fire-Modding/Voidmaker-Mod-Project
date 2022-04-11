#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "DelegateCustomLineTraceByChannelSurfaceDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateCustomLineTraceByChannelSurface, bool, Hit, TEnumAsByte<EPhysicalSurface>, SurfaceType, FVector, Vector);

