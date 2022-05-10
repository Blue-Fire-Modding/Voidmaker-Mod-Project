#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RobiObject.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROA34_API ARobiObject : public AActor {
    GENERATED_BODY()
public:
    ARobiObject();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRobiValid(const UObject* Object);
    
};

