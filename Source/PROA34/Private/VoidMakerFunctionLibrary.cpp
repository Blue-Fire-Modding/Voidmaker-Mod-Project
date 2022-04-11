#include "VoidMakerFunctionLibrary.h"

class AActor;

bool UVoidMakerFunctionLibrary::IsActorInsideObject(AActor*& Actor, TArray<AActor*> ActorsToIgnore, FVector SizeDetection) {
    return false;
}

FTransform UVoidMakerFunctionLibrary::GetJSONFieldTransform(FString& Source, int32 SearchLimit) {
    return FTransform{};
}

FString UVoidMakerFunctionLibrary::GetJSONFieldString(FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray) {
    return TEXT("");
}

int32 UVoidMakerFunctionLibrary::GetJSONFieldInt(FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray) {
    return 0;
}

float UVoidMakerFunctionLibrary::GetJSONFieldFloat(FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray) {
    return 0.0f;
}

bool UVoidMakerFunctionLibrary::GetJSONFieldBool(FString& Source, const FString& FieldName, TEnumAsByte<EFieldState>& FieldState, int32 SearchLimit, bool bIsArray) {
    return false;
}

bool UVoidMakerFunctionLibrary::ContainsProfanity_Text(FText& Word, uint8 InMinimumSeverity) {
    return false;
}

bool UVoidMakerFunctionLibrary::ContainsProfanity_String(FString& Word, uint8 InMinimumSeverity) {
    return false;
}

bool UVoidMakerFunctionLibrary::ContainsProfanity_Name(FName& Word, uint8 InMinimumSeverity) {
    return false;
}

UVoidMakerFunctionLibrary::UVoidMakerFunctionLibrary() {
}

