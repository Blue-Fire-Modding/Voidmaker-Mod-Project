#pragma once
#include "CoreMinimal.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"
#include "MovieSceneTangentDataSerializationHelper.h"
#include "MovieSceneFloatValueSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValueSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTangentDataSerializationHelper Tangent;
    
    AKAUDIO_API FMovieSceneFloatValueSerializationHelper();
};

