#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DelegateStartPlayModeDelegate.h"
#include "EBlueFireSpirits.h"
#include "EVoidMaker_InfoSettings.h"
#include "VoidMakerLevelStruct.h"
#include "VoidMaker_ControllerC.generated.h"

class AC_VoidMaker_Actor;
class UVoidMakerUICPP;

UCLASS()
class PROA34_API AVoidMaker_ControllerC : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FDelegateStartPlayMode OnStartPlayMode;
    
    UPROPERTY(BlueprintReadOnly)
    FVoidMakerLevelStruct CurrentLevelData;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UVoidMakerUICPP* VoidMakerUICPP;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AC_VoidMaker_Actor*> PlacedVMActors;
    
    UPROPERTY(BlueprintReadWrite)
    float PerformanceCountCPP;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsActorLoaded;
    
    AVoidMaker_ControllerC();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateThemeCPP(const TEnumAsByte<EVoidMaker_InfoSettings::Type>& Setting, const bool bAll);
    
    UFUNCTION(BlueprintCallable)
    void LoadMapFromDownloadCPP(FVoidMakerLevelStruct LevelData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinishLoadMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddSpiritsToPlayer(const TArray<TEnumAsByte<EBlueFireSpirits::Type>>& Spirits);
    
};

