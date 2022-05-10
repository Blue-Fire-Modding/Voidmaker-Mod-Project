#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DelegateStartPlayModeDelegate.h"
#include "VoidMakerLevelStruct.h"
#include "EBlueFireSpirits.h"
#include "EVoidMaker_InfoSettings.h"
#include "VoidMaker_ControllerC.generated.h"

class AC_VoidMaker_Actor;
class UVoidMakerUICPP;

UCLASS(Blueprintable)
class PROA34_API AVoidMaker_ControllerC : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegateStartPlayMode OnStartPlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoidMakerLevelStruct CurrentLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVoidMakerUICPP* VoidMakerUICPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AC_VoidMaker_Actor*> PlacedVMActors;
    
    UPROPERTY(EditAnywhere)
    float PerformanceCountCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActorLoaded;
    
    AVoidMaker_ControllerC();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateThemeCPP(const TEnumAsByte<EVoidMaker_InfoSettings::Type>& Setting, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void LoadMapFromDownloadCPP(FVoidMakerLevelStruct LevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishLoadMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddSpiritsToPlayer(const TArray<TEnumAsByte<EBlueFireSpirits::Type>>& Spirits);
    
};

