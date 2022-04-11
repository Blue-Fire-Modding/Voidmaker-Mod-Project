#include "XRayImpl.h"

FString UXRayImpl::start_trace_subsegment(const FString& n_trace_id, const FString& n_name) {
    return TEXT("");
}

FString UXRayImpl::start_trace_segment(const FString& n_trace_id, const FString& n_segment_name) {
    return TEXT("");
}

void UXRayImpl::end_trace_subsegment(const FString& n_trace_id, const FString& n_subsegment_id, const bool n_error) {
}

void UXRayImpl::end_trace_segment(const FString& n_trace_id, const bool n_error) {
}

UXRayImpl::UXRayImpl() {
}

