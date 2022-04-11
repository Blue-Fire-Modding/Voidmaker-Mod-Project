#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DelegateCustomEnemyDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FDelegateCustomEnemy, bool, Hit, FVector, Location, FRotator, Rotation, TEnumAsByte<EPhysicalSurface>, SurfaceType);

