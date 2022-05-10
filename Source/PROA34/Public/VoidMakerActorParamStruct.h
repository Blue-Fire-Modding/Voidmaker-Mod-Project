#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVoidMaker_ActorParam.h"
#include "VoidMakerActorParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FVoidMakerActorParamStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVoidMaker_ActorParam::Type> Type;
    
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    float Steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTextArrayForText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextArrayForInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    PROA34_API FVoidMakerActorParamStruct();
};

