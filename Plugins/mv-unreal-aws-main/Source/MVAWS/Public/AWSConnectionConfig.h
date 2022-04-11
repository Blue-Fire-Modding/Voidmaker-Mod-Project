#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EImageFormat.h"
#include "DelegateOnUploadCompleteDelegate.h"
#include "AWSConnectionConfig.generated.h"

class UBillboardComponent;
class UTexture2D;

UCLASS()
class MVAWS_API AAWSConnectionConfig : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString BucketName;
    
    UPROPERTY(EditAnywhere)
    FString Region;
    
    UPROPERTY(EditAnywhere)
    FString FolderLocal;
    
    UPROPERTY(EditAnywhere)
    FString FolderS3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EImageFormat> ImageFormat;
    
private:
    UPROPERTY(Export)
    UBillboardComponent* m_sprite_component;
    
    UPROPERTY()
    UTexture2D* m_aws_icon_texture;
    
public:
    AAWSConnectionConfig();
    UFUNCTION(BlueprintCallable)
    void UploadImage(const FString& VoidLocalID, const FString& Username, FDelegateOnUploadComplete OnComplete);
    
};

