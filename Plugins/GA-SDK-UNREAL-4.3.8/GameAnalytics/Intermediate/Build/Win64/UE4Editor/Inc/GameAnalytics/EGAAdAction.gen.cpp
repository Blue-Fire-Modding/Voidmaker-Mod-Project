// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAnalytics/Public/EGAAdAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGAAdAction() {}
// Cross Module References
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdAction();
	UPackage* Z_Construct_UPackage__Script_GameAnalytics();
// End Cross Module References
	static UEnum* EGAAdAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAAdAction, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAAdAction"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdAction>()
	{
		return EGAAdAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAdAction(EGAAdAction_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAAdAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAAdAction_Hash() { return 2067516266U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAdAction"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAAdAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAdAction::undefined", (int64)EGAAdAction::undefined },
				{ "EGAAdAction::clicked", (int64)EGAAdAction::clicked },
				{ "EGAAdAction::show", (int64)EGAAdAction::show },
				{ "EGAAdAction::failedshow", (int64)EGAAdAction::failedshow },
				{ "EGAAdAction::rewardreceived", (int64)EGAAdAction::rewardreceived },
				{ "EGAAdAction::request", (int64)EGAAdAction::request },
				{ "EGAAdAction::loaded", (int64)EGAAdAction::loaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "clicked.Name", "EGAAdAction::clicked" },
				{ "failedshow.Name", "EGAAdAction::failedshow" },
				{ "loaded.Name", "EGAAdAction::loaded" },
				{ "ModuleRelativePath", "Public/EGAAdAction.h" },
				{ "request.Name", "EGAAdAction::request" },
				{ "rewardreceived.Name", "EGAAdAction::rewardreceived" },
				{ "show.Name", "EGAAdAction::show" },
				{ "undefined.Name", "EGAAdAction::undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAAdAction",
				"EGAAdAction",
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
