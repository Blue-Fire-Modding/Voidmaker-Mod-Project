#include "VoidMakerActorParamStruct.h"

FVoidMakerActorParamStruct::FVoidMakerActorParamStruct() {
    this->Type = EVoidMaker_ActorParam::Float;
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->Value = 0.00f;
    this->Steps = 0.00f;
    this->bBool = false;
    this->bUseTextArrayForText = false;
    this->bHidden = false;
}

