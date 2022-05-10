#pragma once
#include "CoreMinimal.h"
#include "EFieldState.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VoidMakerFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROA34_API UVoidMakerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoidMakerFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInsideObject(UPARAM(Ref) AActor*& Actor, TArray<AActor*> ActorsToIgnore, FVector SizeDetection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetJSONFieldTransform(UPARAM(Ref) FString& Source, int32 SearchLimit);
    
    UFUNCTION(BlueprintCallable)
    static FString GetJSONFieldString(UPARAM(Ref) FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetJSONFieldInt(UPARAM(Ref) FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    
    UFUNCTION(BlueprintCallable)
    static float GetJSONFieldFloat(UPARAM(Ref) FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    
    UFUNCTION(BlueprintCallable)
    static bool GetJSONFieldBool(UPARAM(Ref) FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray);
    
    UFUNCTION(BlueprintCallable)
    static bool ContainsProfanity_Text(UPARAM(Ref) FText& Word, uint8 InMinimumSeverity);
    
    UFUNCTION(BlueprintCallable)
    static bool ContainsProfanity_String(UPARAM(Ref) FString& Word, uint8 InMinimumSeverity);
    
    UFUNCTION(BlueprintCallable)
    static bool ContainsProfanity_Name(UPARAM(Ref) FName& Word, uint8 InMinimumSeverity);
    
};

