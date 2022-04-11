#include "VoidMakerUICPP.h"

class UTexture2D;


FColor UVoidMakerUICPP::HexToColor(const FString& HexString) {
    return FColor{};
}

FString UVoidMakerUICPP::getWindowsNoEditorDir() {
    return TEXT("");
}

UTexture2D* UVoidMakerUICPP::GetTextureFromPixels(const int32 SrcWidth, const int32 SrcHeight, const TArray<FColor>& SrcData, const bool UseAlpha) {
    return NULL;
}

FString UVoidMakerUICPP::getRootDir() {
    return TEXT("");
}

TArray<FColor> UVoidMakerUICPP::GetPixelArray(UTexture2D* MyTexture) {
    return TArray<FColor>();
}

FString UVoidMakerUICPP::getGameRootDir() {
    return TEXT("");
}

FDateTime UVoidMakerUICPP::getDatetimeFromInt64(const FString& datetimeString) {
    return FDateTime{};
}

FString UVoidMakerUICPP::getBinaryLocation() {
    return TEXT("");
}

FString UVoidMakerUICPP::getBinaryDir() {
    return TEXT("");
}

UVoidMakerUICPP::UVoidMakerUICPP() : UUserWidget(FObjectInitializer::Get()) {
    this->MyScreenshot = NULL;
}

