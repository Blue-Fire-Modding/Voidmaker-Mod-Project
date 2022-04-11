// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEANALYTICS_EGAAdType_generated_h
#error "EGAAdType.generated.h already included, missing '#pragma once' in EGAAdType.h"
#endif
#define GAMEANALYTICS_EGAAdType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_EGAAdType_h


#define FOREACH_ENUM_EGAADTYPE(op) \
	op(EGAAdType::undefined) \
	op(EGAAdType::video) \
	op(EGAAdType::rewardedvideo) \
	op(EGAAdType::playable) \
	op(EGAAdType::interstitial) \
	op(EGAAdType::offerwall) \
	op(EGAAdType::banner) 

enum class EGAAdType : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
