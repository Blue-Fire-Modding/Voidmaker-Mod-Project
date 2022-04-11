// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEANALYTICS_EGAAdError_generated_h
#error "EGAAdError.generated.h already included, missing '#pragma once' in EGAAdError.h"
#endif
#define GAMEANALYTICS_EGAAdError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_EGAAdError_h


#define FOREACH_ENUM_EGAADERROR(op) \
	op(EGAAdError::undefined) \
	op(EGAAdError::unknown) \
	op(EGAAdError::offline) \
	op(EGAAdError::nofill) \
	op(EGAAdError::internalerror) \
	op(EGAAdError::invalidrequest) \
	op(EGAAdError::unabletoprecache) 

enum class EGAAdError : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
