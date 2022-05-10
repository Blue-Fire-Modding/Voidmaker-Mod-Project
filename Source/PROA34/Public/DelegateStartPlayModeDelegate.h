#pragma once
#include "CoreMinimal.h"
#include "DelegateStartPlayModeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateStartPlayMode, bool, bIsStart);

