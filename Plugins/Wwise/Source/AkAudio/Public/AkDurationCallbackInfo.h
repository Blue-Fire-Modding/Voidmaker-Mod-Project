#pragma once
#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkDurationCallbackInfo.generated.h"

UCLASS(Blueprintable)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float EstimatedDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MediaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStreaming;
    
    UAkDurationCallbackInfo();
};

