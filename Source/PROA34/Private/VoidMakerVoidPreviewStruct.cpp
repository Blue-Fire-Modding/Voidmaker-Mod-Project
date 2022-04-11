#include "VoidMakerVoidPreviewStruct.h"

FVoidMakerVoidPreviewStruct::FVoidMakerVoidPreviewStruct() {
    this->Tags = EVoidMaker_LevelTags::Easy;
    this->bIsOnline = false;
    this->Spirits = EBlueFireSpirits::FarasGrace;
    this->bIsValid = false;
    this->ProfilePictureIndex = 0;
    this->NumberOfObjects = 0;
    this->RecordHolderProfilePicture = 0;
    this->RecordHolderTime = 0.00f;
}

