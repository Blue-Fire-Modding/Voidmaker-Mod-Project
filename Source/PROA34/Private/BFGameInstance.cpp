#include "BFGameInstance.h"

void UBFGameInstance::ShowLoginUI(bool isSwitchProfile) {
}

void UBFGameInstance::SetAchievementStat(const FString& Stat, int32 Value) {
}













void UBFGameInstance::Login() {
}

int32 UBFGameInstance::GetXboxType() {
    return 0;
}

FString UBFGameInstance::GetOnlineId() {
    return TEXT("");
}

UBFGameInstance::UBFGameInstance() {
    this->IsUserLogged = false;
    this->ForceLogin = false;
    this->CurrentControllerIndex = 0;
    this->AmountUsersLogged = 0;
}

