#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RobiFunctionLibrary.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class PROA34_API URobiFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URobiFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRobiValid(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInFrustum(const AActor* Actor);
    
};

