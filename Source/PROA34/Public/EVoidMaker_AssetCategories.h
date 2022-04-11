#pragma once
#include "CoreMinimal.h"
#include "EVoidMaker_AssetCategories.generated.h"

UENUM(BlueprintType)
namespace EVoidMaker_AssetCategories {
    enum Type {
        Empty,
        Hazards_Dynamic,
        Hazards_Static,
        Interactive_Platforming,
        Interactive_Startup,
        Interactive_Misc,
        Game_Basic,
        Meshes_BasicShapes,
        Meshes_VoidModules,
        Meshes_Decoration,
        Meshes_Town,
        Meshes_Structures,
        Meshes_Rocks,
        Meshes_Garden,
        Meshes_Party,
        Hazards_Enemies,
        EVoidMaker_MAX UMETA(Hidden),
    };
}

