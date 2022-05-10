#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DelegateCustomLineTraceByChannelSurfaceDelegate.h"
#include "DelegateCustomLineTraceByChannelBoolAndVectorsDelegate.h"
#include "UObject/NoExportTypes.h"
#include "DelegateCustomBoxTraceDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DelegateCustomLineTraceForObjectsBoolDelegate.h"
#include "DelegateCustomTraceDelegate.h"
#include "DelegateCustomLineTraceByChannelVectorsDelegate.h"
#include "DelegateCustomEnemyDelegate.h"
#include "RobiTraceHandler.generated.h"

UCLASS(Blueprintable)
class PROA34_API ARobiTraceHandler : public AActor {
    GENERATED_BODY()
public:
    ARobiTraceHandler();
protected:
    UFUNCTION(BlueprintCallable)
    void TraceHandlerF(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void TraceHandlerE(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void TraceHandlerD(FVector Start, FVector EndA, FVector EndB, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void TraceHandlerC(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void TraceHandlerB(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void TraceHandlerA(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    bool TraceForTarget(AActor* ActorPlayer, FVector OffsetLock, AActor* ActorTarget, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void TraceForPickUp(AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void SpinAttackHandler(AActor* ActorPlayer, FDelegateCustomBoxTrace Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void SpellDamageHandler(FVector SpellDamageLocation, AActor* ActorToIgnore, FDelegateCustomBoxTrace Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler19(AActor* ActorPlayer, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler18(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelBoolAndVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler17(FVector Start, FVector End, FVector InVec, FVector CapsuleHitImpactNormal, AActor* ActorPlayer, FDelegateCustomLineTraceForObjectsBool Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler16(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, AActor* ActorToIgnore, FDelegateCustomTrace Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler15(FVector Start, FVector End, FRotator Orientation, bool ComplexTrace, FVector StartA, FVector EndA, FVector StartB, FVector EndB, FVector StartC, FVector EndC, AActor* ActorToIgnore, FDelegateCustomLineTraceForObjectsBool Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler14(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceForObjectsBool Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler13(FVector Start, FVector End, FVector HalfSize, TArray<AActor*> ActorsToIgnore, FDelegateCustomTrace Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler12(FVector Start, FVector End, float Radius, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler11(FVector Start, FVector End, float Radius, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler10(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler09(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler08(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomTrace Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler07(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler06(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler05(FVector StartA, FVector EndA, FVector StartB, FVector EndB, FRotator Orientation, bool Initial, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler04(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler03(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler02(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayerHandler01(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void HandlerAttackC(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<AActor*> ActorsToIgnore, FDelegateCustomBoxTrace Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void HandlerAttackB(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<AActor*> ActorsToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void HandlerAttackA(FVector Start, FVector End, TArray<AActor*> ActorsToIgnore, FDelegateCustomLineTraceByChannelVectors Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void EnemyHandler01(AActor* ActorEnemy, AActor* ActorPlayer, FDelegateCustomLineTraceForObjectsBool Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void EnemyFunc03(AActor* ActorToIgnore, FDelegateCustomEnemy Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void EnemyFunc02(AActor* ActorToIgnore, FDelegateCustomEnemy Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void CamTraceHandler02(FVector Start, FVector End, AActor* ActorToIgnore, FDelegateCustomLineTraceByChannelSurface Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void CamHandler01(AActor* ActorPlayer, bool HaveHammerKing, FDelegateCustomLineTraceForObjectsBool Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable)
    void CameraHandlerLogic(FVector StartA, FVector EndA, float RadiusA, FVector StartB, FVector EndB, float RadiusB, TArray<AActor*> ActorsToIgnore, FDelegateCustomLineTraceForObjectsBool Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
};

