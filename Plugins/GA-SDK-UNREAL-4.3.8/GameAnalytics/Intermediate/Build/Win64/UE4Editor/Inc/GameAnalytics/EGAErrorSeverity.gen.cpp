// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAnalytics/Public/EGAErrorSeverity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGAErrorSeverity() {}
// Cross Module References
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity();
	UPackage* Z_Construct_UPackage__Script_GameAnalytics();
// End Cross Module References
	static UEnum* EGAErrorSeverity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAErrorSeverity"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAErrorSeverity>()
	{
		return EGAErrorSeverity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAErrorSeverity(EGAErrorSeverity_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAErrorSeverity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_Hash() { return 2395440891U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAErrorSeverity"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAErrorSeverity::undefined", (int64)EGAErrorSeverity::undefined },
				{ "EGAErrorSeverity::debug", (int64)EGAErrorSeverity::debug },
				{ "EGAErrorSeverity::info", (int64)EGAErrorSeverity::info },
				{ "EGAErrorSeverity::warning", (int64)EGAErrorSeverity::warning },
				{ "EGAErrorSeverity::error", (int64)EGAErrorSeverity::error },
				{ "EGAErrorSeverity::critical", (int64)EGAErrorSeverity::critical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "critical.Name", "EGAErrorSeverity::critical" },
				{ "debug.Name", "EGAErrorSeverity::debug" },
				{ "error.Name", "EGAErrorSeverity::error" },
				{ "info.Name", "EGAErrorSeverity::info" },
				{ "ModuleRelativePath", "Public/EGAErrorSeverity.h" },
				{ "undefined.Name", "EGAErrorSeverity::undefined" },
				{ "warning.Name", "EGAErrorSeverity::warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAErrorSeverity",
				"EGAErrorSeverity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
