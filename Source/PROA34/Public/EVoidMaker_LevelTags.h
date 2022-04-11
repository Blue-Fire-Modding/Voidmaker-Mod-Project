#pragma once
#include "CoreMinimal.h"
#include "EVoidMaker_LevelTags.generated.h"

UENUM(BlueprintType)
namespace EVoidMaker_LevelTags {
    enum Type {
        Easy,
        Hard,
        NoCheckpoints,
        Short,
        Long,
        Brutal,
        EVoidMaker_MAX UMETA(Hidden),
    };
}

