#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "MovieSceneTangentDataSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTangentDataSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ArriveTangent;
    
    UPROPERTY(EditAnywhere)
    float LeaveTangent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    
    UPROPERTY(EditAnywhere)
    float ArriveTangentWeight;
    
    UPROPERTY(EditAnywhere)
    float LeaveTangentWeight;
    
    AKAUDIO_API FMovieSceneTangentDataSerializationHelper();
};

