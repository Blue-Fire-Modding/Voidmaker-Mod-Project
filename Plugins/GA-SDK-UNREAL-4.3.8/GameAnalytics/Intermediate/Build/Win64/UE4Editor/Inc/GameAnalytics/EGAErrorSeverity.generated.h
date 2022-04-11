// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEANALYTICS_EGAErrorSeverity_generated_h
#error "EGAErrorSeverity.generated.h already included, missing '#pragma once' in EGAErrorSeverity.h"
#endif
#define GAMEANALYTICS_EGAErrorSeverity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_EGAErrorSeverity_h


#define FOREACH_ENUM_EGAERRORSEVERITY(op) \
	op(EGAErrorSeverity::undefined) \
	op(EGAErrorSeverity::debug) \
	op(EGAErrorSeverity::info) \
	op(EGAErrorSeverity::warning) \
	op(EGAErrorSeverity::error) \
	op(EGAErrorSeverity::critical) 

enum class EGAErrorSeverity : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAErrorSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
