#pragma once
#include "CoreMinimal.h"
#include "DelegateCustomLineTraceForObjectsBoolDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateCustomLineTraceForObjectsBool, bool, HitA, bool, HitB);

