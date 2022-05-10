#pragma once
#include "CoreMinimal.h"
#include "AkSegmentInfo.generated.h"

USTRUCT(BlueprintType)
struct FAkSegmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreEntryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostExitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingLookAheadTime;
    
    UPROPERTY(EditAnywhere)
    float BeatDuration;
    
    UPROPERTY(EditAnywhere)
    float BarDuration;
    
    UPROPERTY(EditAnywhere)
    float GridDuration;
    
    UPROPERTY(EditAnywhere)
    float GridOffset;
    
    AKAUDIO_API FAkSegmentInfo();
};

