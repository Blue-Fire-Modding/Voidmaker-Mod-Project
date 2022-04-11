#include "VoidMakerAssetStruct.h"

FVoidMakerAssetStruct::FVoidMakerAssetStruct() {
    this->Class = NULL;
    this->Type = EVoidMaker_AssetType::Mesh;
    this->Thumbnail = NULL;
    this->Mesh = NULL;
    this->ChildActor = NULL;
    this->PerformanceSize = 0.00f;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->bCanAssignToSimplePath = false;
    this->bCanAddComplexPathOverride = false;
    this->bIgnoreMat = false;
    this->IgnoringMat = 0;
    this->Category = EVoidMaker_AssetCategories::Empty;
}

