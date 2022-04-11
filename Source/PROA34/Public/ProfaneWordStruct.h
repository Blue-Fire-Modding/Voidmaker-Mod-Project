#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ProfaneWordStruct.generated.h"

USTRUCT(BlueprintType)
struct FProfaneWordStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName Language;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 Severity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString Word;
    
    PROA34_API FProfaneWordStruct();
};

