#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "XRayImpl.generated.h"

UCLASS(BlueprintType)
class UXRayImpl : public UObject {
    GENERATED_BODY()
public:
    UXRayImpl();
    UFUNCTION(BlueprintCallable)
    FString start_trace_subsegment(const FString& n_trace_id, const FString& n_name);
    
    UFUNCTION(BlueprintCallable)
    FString start_trace_segment(const FString& n_trace_id, const FString& n_segment_name);
    
    UFUNCTION(BlueprintCallable)
    void end_trace_subsegment(const FString& n_trace_id, const FString& n_subsegment_id, const bool n_error);
    
    UFUNCTION(BlueprintCallable)
    void end_trace_segment(const FString& n_trace_id, const bool n_error);
    
};

