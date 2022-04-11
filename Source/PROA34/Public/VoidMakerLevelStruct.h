#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "VoidMakerAssetStruct.h"
#include "UObject/NoExportTypes.h"
#include "EBlueFireSpirits.h"
#include "VoidMakerComplexPathStruct.h"
#include "VoidMakerLevelStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVoidMakerLevelStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> ObjectsPlacedTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LevelName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ThemeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TimerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DateOfCreation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVoidMakerAssetStruct> ObjectsPlacedStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> ObjectsPlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLevelEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLocalLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInfiniteStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVoidMakerComplexPathStruct> ComplexPathMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<EBlueFireSpirits::Type>> ActivatedSpirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ThumbnailLocalPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsValid;
    
    PROA34_API FVoidMakerLevelStruct();
};

