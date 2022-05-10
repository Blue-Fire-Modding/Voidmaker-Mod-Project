#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ProfaneWordStruct.generated.h"

USTRUCT(BlueprintType)
struct FProfaneWordStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Language;
    
    UPROPERTY(EditAnywhere)
    uint8 Severity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Word;
    
    PROA34_API FProfaneWordStruct();
};

