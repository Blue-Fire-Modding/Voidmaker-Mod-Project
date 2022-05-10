#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedSpatialAudioSettings.h"
#include "AkAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 IO_MemorySize;
    
    UPROPERTY(EditAnywhere)
    uint32 IO_Granularity;
    
    UPROPERTY(EditAnywhere)
    float TargetAutoStreamBufferLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStreamCache;
    
    UPROPERTY(EditAnywhere)
    uint32 MaximumPinnedBytesInCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableGameSyncPreparation;
    
    UPROPERTY(EditAnywhere)
    uint32 ContinuousPlaybackLookAhead;
    
    UPROPERTY(EditAnywhere)
    uint32 MonitorQueuePoolSize;
    
    UPROPERTY(EditAnywhere)
    uint32 MaximumHardwareTimeoutMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugOutOfRangeCheckEnabled;
    
    UPROPERTY(EditAnywhere)
    float DebugOutOfRangeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkAdvancedSpatialAudioSettings SpatialAudioSettings;
    
    AKAUDIO_API FAkAdvancedInitializationSettings();
};
