// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAnalytics/Public/EGAProgressionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGAProgressionStatus() {}
// Cross Module References
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus();
	UPackage* Z_Construct_UPackage__Script_GameAnalytics();
// End Cross Module References
	static UEnum* EGAProgressionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAProgressionStatus"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAProgressionStatus>()
	{
		return EGAProgressionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAProgressionStatus(EGAProgressionStatus_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAProgressionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_Hash() { return 267140394U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAProgressionStatus"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAProgressionStatus::undefined", (int64)EGAProgressionStatus::undefined },
				{ "EGAProgressionStatus::start", (int64)EGAProgressionStatus::start },
				{ "EGAProgressionStatus::complete", (int64)EGAProgressionStatus::complete },
				{ "EGAProgressionStatus::fail", (int64)EGAProgressionStatus::fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "complete.Name", "EGAProgressionStatus::complete" },
				{ "fail.Name", "EGAProgressionStatus::fail" },
				{ "ModuleRelativePath", "Public/EGAProgressionStatus.h" },
				{ "start.Name", "EGAProgressionStatus::start" },
				{ "undefined.Name", "EGAProgressionStatus::undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAProgressionStatus",
				"EGAProgressionStatus",
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
