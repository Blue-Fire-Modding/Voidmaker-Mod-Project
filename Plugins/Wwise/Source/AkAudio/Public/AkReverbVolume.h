#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkReverbVolume.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkReverbVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuxBusName;
    
    UPROPERTY(EditAnywhere)
    float SendLevel;
    
    UPROPERTY(EditAnywhere)
    float FadeRate;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverbComponent;
    
    AAkReverbVolume();
};

