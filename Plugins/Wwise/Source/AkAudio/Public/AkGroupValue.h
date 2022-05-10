#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 GroupShortID;
    
    UAkGroupValue();
};

