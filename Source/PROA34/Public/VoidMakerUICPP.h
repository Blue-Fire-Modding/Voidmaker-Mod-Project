#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoidMakerUICPP.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class PROA34_API UVoidMakerUICPP : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTexture2D* MyScreenshot;
    
public:
    UVoidMakerUICPP();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLoadingCount(int32 current, int32 Max);
    
private:
    UFUNCTION(BlueprintCallable)
    static FColor HexToColor(const FString& HexString);
    
    UFUNCTION(BlueprintCallable)
    FString getWindowsNoEditorDir();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureFromPixels(const int32 SrcWidth, const int32 SrcHeight, const TArray<FColor>& SrcData, const bool UseAlpha);
    
    UFUNCTION(BlueprintCallable)
    FString getRootDir();
    
    UFUNCTION(BlueprintCallable)
    TArray<FColor> GetPixelArray(UTexture2D* MyTexture);
    
    UFUNCTION(BlueprintCallable)
    FString getGameRootDir();
    
    UFUNCTION(BlueprintCallable)
    FDateTime getDatetimeFromInt64(const FString& datetimeString);
    
    UFUNCTION(BlueprintCallable)
    FString getBinaryLocation();
    
    UFUNCTION(BlueprintCallable)
    FString getBinaryDir();
    
};

