#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ResponseDelegettDelegate.h"
#include "ReadStringArrayToColorArray.generated.h"

class UReadStringArrayToColorArray;

UCLASS(Blueprintable)
class PROA34_API UReadStringArrayToColorArray : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseDelegett OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseDelegett OnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TempString;
    
    UReadStringArrayToColorArray();
    UFUNCTION(BlueprintCallable)
    static UReadStringArrayToColorArray* ReadStringArray(const FString& StringArray);
    
};

