#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EImageFormat.h"
#include "DelegateOnUploadCompleteDelegate.h"
#include "AWSConnectionConfig.generated.h"

class UBillboardComponent;
class UTexture2D;

UCLASS(Blueprintable)
class MVAWS_API AAWSConnectionConfig : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BucketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderS3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EImageFormat> ImageFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* m_sprite_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_aws_icon_texture;
    
public:
    AAWSConnectionConfig();
    UFUNCTION(BlueprintCallable)
    void UploadImage(const FString& VoidLocalID, const FString& Username, FDelegateOnUploadComplete OnComplete);
    
};

