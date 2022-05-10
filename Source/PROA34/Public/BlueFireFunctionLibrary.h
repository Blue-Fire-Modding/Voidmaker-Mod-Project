#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "BlueFireFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROA34_API UBlueFireFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueFireFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void WaitForLoadCompleted(UPARAM(Ref) bool& bIsLoadCompleted, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime);
    
};

