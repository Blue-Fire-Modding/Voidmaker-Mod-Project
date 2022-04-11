#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVoidMaker_ActorParam.h"
#include "VoidMakerActorParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FVoidMakerActorParamStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVoidMaker_ActorParam::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Steps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTextArrayForText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FText> TextArrayForInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    PROA34_API FVoidMakerActorParamStruct();
};

