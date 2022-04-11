#pragma once
#include "CoreMinimal.h"
#include "EVoidMaker_LevelTags.h"
#include "Engine/DataTable.h"
#include "EBlueFireSpirits.h"
#include "VoidMakerVoidPreviewStruct.generated.h"

USTRUCT(BlueprintType)
struct FVoidMakerVoidPreviewStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Theme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InfiniteStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Editable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVoidMaker_LevelTags::Type> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ShareCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString CreatorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DateUploaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Rating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ThumbnailPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBlueFireSpirits::Type> Spirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProfilePictureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RecordHolderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RecordHolderProfilePicture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RecordHolderUsername;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecordHolderTime;
    
    PROA34_API FVoidMakerVoidPreviewStruct();
};

