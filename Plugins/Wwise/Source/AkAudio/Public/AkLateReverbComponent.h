#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkLateReverbComponent.generated.h"

class UAkAuxBus;
class UAkLateReverbComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkLateReverbComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* AuxBus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuxBusName;
    
    UPROPERTY(EditAnywhere)
    float SendLevel;
    
    UPROPERTY(EditAnywhere)
    float FadeRate;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* NextLowerPriorityComponent;
    
    UAkLateReverbComponent();
};

