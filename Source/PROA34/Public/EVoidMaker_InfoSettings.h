#pragma once
#include "CoreMinimal.h"
#include "EVoidMaker_InfoSettings.generated.h"

UENUM()
namespace EVoidMaker_InfoSettings {
    enum Type {
        None,
        Name,
        Description,
        Color,
        Theme,
        Sky,
        Music,
        Gameplay,
        BlockEdit,
        DefaultMaterialMesh,
        InfiniteStamina,
        SpiritSelect,
        MultiSelect,
        PaintMode,
        Thumbnail,
        ContinuePlaying,
        Restart,
        BackToBrowse,
        Username,
        ProfilePicture,
        ConfirmUser,
        BuildMusic,
        ConfirmProfilePicture,
        Timed,
        Abilities,
        Health,
        Mana,
        AllowPlayerSwitchSpirits,
        EVoidMaker_MAX UMETA(Hidden),
    };
}

