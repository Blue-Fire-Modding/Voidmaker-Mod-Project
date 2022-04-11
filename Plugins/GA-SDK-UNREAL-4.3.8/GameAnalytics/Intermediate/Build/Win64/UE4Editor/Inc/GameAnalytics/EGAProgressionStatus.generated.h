// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEANALYTICS_EGAProgressionStatus_generated_h
#error "EGAProgressionStatus.generated.h already included, missing '#pragma once' in EGAProgressionStatus.h"
#endif
#define GAMEANALYTICS_EGAProgressionStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_EGAProgressionStatus_h


#define FOREACH_ENUM_EGAPROGRESSIONSTATUS(op) \
	op(EGAProgressionStatus::undefined) \
	op(EGAProgressionStatus::start) \
	op(EGAProgressionStatus::complete) \
	op(EGAProgressionStatus::fail) 

enum class EGAProgressionStatus : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAProgressionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
