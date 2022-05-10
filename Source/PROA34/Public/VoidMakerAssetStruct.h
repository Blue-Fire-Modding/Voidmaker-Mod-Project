#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "EVoidMaker_AssetType.h"
#include "EVoidMaker_AssetCategories.h"
#include "VoidMakerActorParamStruct.h"
#include "VoidMakerAssetStruct.generated.h"

class UTexture2D;
class AActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FVoidMakerAssetStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InternalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Class;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVoidMaker_AssetType::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoidMakerActorParamStruct> Params;
    
    UPROPERTY(EditAnywhere)
    float PerformanceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(EditAnywhere)
    float MinScale;
    
    UPROPERTY(EditAnywhere)
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAssignToSimplePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAddComplexPathOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoringMat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVoidMaker_AssetCategories::Type> Category;
    
    PROA34_API FVoidMakerAssetStruct();
};

