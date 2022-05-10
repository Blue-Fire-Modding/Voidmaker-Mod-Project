#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EBPLoginStatus.h"
#include "BFGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class PROA34_API UBFGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUserLogged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentControllerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountUsersLogged;
    
    UBFGameInstance();
    UFUNCTION(BlueprintCallable)
    void ShowLoginUI(bool isSwitchProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementStat(const FString& Stat, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerUserLoginChanged(bool isLogin, int32 UserId, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLogoutComplete(int32 LocalUserNum, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLogout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLoginChanged(int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerGameSessionIDChanged(const FString& sessionData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerDisconectedEvent(int32 UserId, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerConnectedEvent(int32 UserId, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NativeOnPhysicalControllerConnectionEvent(bool IsConnected, int32 PlatformUserId, int32 GameUserId, int32 ControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NativeOnPhysicalButtonPressedEvent(int32 ControllerIndex, int32 GameUserId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NativeOnLoginUICloseEvent(int32 LocalPlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NativeOnControllerPairingEvent(int32 ControllerIndex, int32 NewUserId, int32 OldUserId);
    
    UFUNCTION(BlueprintCallable)
    void Login();
    
    UFUNCTION(BlueprintCallable)
    int32 GetXboxType();
    
    UFUNCTION(BlueprintCallable)
    FString GetOnlineId();
    
};

