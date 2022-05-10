#pragma once
#include "CoreMinimal.h"
#include "ResponseDelegettDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResponseDelegett, const TArray<FString>&, ColorPixels, const FString&, Data);

