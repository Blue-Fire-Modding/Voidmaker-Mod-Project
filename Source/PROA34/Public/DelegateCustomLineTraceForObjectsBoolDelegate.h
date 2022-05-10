#pragma once
#include "CoreMinimal.h"
#include "DelegateCustomLineTraceForObjectsBoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateCustomLineTraceForObjectsBool, bool, HitA, bool, HitB);

