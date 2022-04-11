#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ResponseDelegettDelegate.h"
#include "ReadStringArrayToColorArray.generated.h"

class UReadStringArrayToColorArray;

UCLASS()
class PROA34_API UReadStringArrayToColorArray : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FResponseDelegett OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FResponseDelegett OnFail;
    
    UPROPERTY()
    FString TempString;
    
    UReadStringArrayToColorArray();
    UFUNCTION(BlueprintCallable)
    static UReadStringArrayToColorArray* ReadStringArray(const FString& StringArray);
    
};

