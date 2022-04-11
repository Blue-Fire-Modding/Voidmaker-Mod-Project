#pragma once
#include "CoreMinimal.h"
#include "EVoidMaker_ActorParam.generated.h"

UENUM(BlueprintType)
namespace EVoidMaker_ActorParam {
    enum Type {
        Float,
        Bool,
        Material,
        Int,
        None,
        Text,
        EVoidMaker_MAX UMETA(Hidden),
    };
}

