#pragma once
#include "CoreMinimal.h"
#include "EVoidMaker_AssetType.generated.h"

UENUM(BlueprintType)
namespace EVoidMaker_AssetType {
    enum Type {
        Mesh,
        AnimatedMesh,
        StaticHazard,
        Collectible,
        InteractiveObject,
        Random,
        EVoidMaker_MAX UMETA(Hidden),
    };
}

