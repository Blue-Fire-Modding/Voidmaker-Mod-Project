#pragma once
#include "CoreMinimal.h"
#include "ResponseDelegetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResponseDeleget, const FString&, PixelArray, const FString&, Data);

