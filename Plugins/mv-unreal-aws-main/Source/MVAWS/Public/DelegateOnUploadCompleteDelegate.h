#pragma once
#include "CoreMinimal.h"
#include "DelegateOnUploadCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnUploadComplete, const bool, bSuccess, const FString&, URL);

