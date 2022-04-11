// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEANALYTICS_EGAAdAction_generated_h
#error "EGAAdAction.generated.h already included, missing '#pragma once' in EGAAdAction.h"
#endif
#define GAMEANALYTICS_EGAAdAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_EGAAdAction_h


#define FOREACH_ENUM_EGAADACTION(op) \
	op(EGAAdAction::undefined) \
	op(EGAAdAction::clicked) \
	op(EGAAdAction::show) \
	op(EGAAdAction::failedshow) \
	op(EGAAdAction::rewardreceived) \
	op(EGAAdAction::request) \
	op(EGAAdAction::loaded) 

enum class EGAAdAction : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
