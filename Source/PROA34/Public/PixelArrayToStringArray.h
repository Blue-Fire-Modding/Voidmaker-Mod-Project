#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ResponseDelegetDelegate.h"
#include "UObject/NoExportTypes.h"
#include "PixelArrayToStringArray.generated.h"

class UPixelArrayToStringArray;

UCLASS(Blueprintable)
class PROA34_API UPixelArrayToStringArray : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseDeleget OnSucess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResponseDeleget OnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> TempPixelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TempString;
    
    UPixelArrayToStringArray();
    UFUNCTION(BlueprintCallable)
    static UPixelArrayToStringArray* PixelColorToString(const TArray<FColor> PixelColorArray);
    
};

