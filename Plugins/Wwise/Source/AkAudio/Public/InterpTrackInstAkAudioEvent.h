#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "InterpTrackInstAkAudioEvent.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioEvent();
};

