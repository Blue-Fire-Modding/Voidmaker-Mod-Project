#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class UAkRoomComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* NextLowerPriorityComponent;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float WallOcclusion;
    
    UPROPERTY(EditAnywhere)
    float AuxSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool AutoPost;
    
    UAkRoomComponent();
};

