#include "AWSConnectionConfig.h"

void AAWSConnectionConfig::UploadImage(const FString& VoidLocalID, const FString& Username, FDelegateOnUploadComplete OnComplete) {
}

AAWSConnectionConfig::AAWSConnectionConfig() {
    this->Region = TEXT("xx-xxxx-x");
    this->ImageFormat = jpg;
    this->m_sprite_component = NULL;
}

