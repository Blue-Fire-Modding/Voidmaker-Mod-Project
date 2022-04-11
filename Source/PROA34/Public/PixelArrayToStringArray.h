#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ResponseDelegetDelegate.h"
#include "UObject/NoExportTypes.h"
#include "PixelArrayToStringArray.generated.h"

class UPixelArrayToStringArray;

UCLASS()
class PROA34_API UPixelArrayToStringArray : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FResponseDeleget OnSucess;
    
    UPROPERTY(BlueprintAssignable)
    FResponseDeleget OnFail;
    
    UPROPERTY()
    TArray<FColor> TempPixelArray;
    
    UPROPERTY()
    FString TempString;
    
    UPixelArrayToStringArray();
    UFUNCTION(BlueprintCallable)
    static UPixelArrayToStringArray* PixelColorToString(const TArray<FColor> PixelColorArray);
    
};

