#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EVoidMaker_AssetCategories.h"
#include "Engine/DataTable.h"
#include "EVoidMaker_AssetType.h"
#include "VoidMakerActorParamStruct.h"
#include "VoidMakerAssetStruct.generated.h"

class UStaticMesh;
class AActor;
class UTexture2D;

USTRUCT(BlueprintType)
struct FVoidMakerAssetStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InternalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVoidMaker_AssetType::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVoidMakerActorParamStruct> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PerformanceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanAssignToSimplePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanAddComplexPathOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IgnoringMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVoidMaker_AssetCategories::Type> Category;
    
    PROA34_API FVoidMakerAssetStruct();
};

