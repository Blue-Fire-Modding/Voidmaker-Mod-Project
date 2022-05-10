#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DelegateOnLoadedDelegate.h"
#include "VoidMakerAssetStruct.h"
#include "UObject/NoExportTypes.h"
#include "C_VoidMaker_Actor.generated.h"

class AVoidMaker_ControllerC;
class UStaticMeshComponent;
class USplineComponent;

UCLASS(Blueprintable)
class PROA34_API AC_VoidMaker_Actor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DistanceInSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInReverse;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateOnLoaded OnLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVoidMaker_ControllerC*> VMController;
    
    AC_VoidMaker_Actor();
    UFUNCTION(BlueprintCallable)
    void SetCollisionByPlayerLocation(float PlayerVectorLenght, UStaticMeshComponent* TargetMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorWithOutLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorWithLoop(float Speed, USplineComponent* TargetSpline, UStaticMeshComponent* TargetMeshComponent, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorComplexNoLoop(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorComplex(float Speed, USplineComponent* TargetSpline, AActor* TargetActor, float RotationSpeed, int32 RotationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeActor(FTransform Transform, FVoidMakerAssetStruct LevelData, AVoidMaker_ControllerC* VoidMakerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BindToStartPlayMode(AVoidMaker_ControllerC* VoidMakerController);
    
};

