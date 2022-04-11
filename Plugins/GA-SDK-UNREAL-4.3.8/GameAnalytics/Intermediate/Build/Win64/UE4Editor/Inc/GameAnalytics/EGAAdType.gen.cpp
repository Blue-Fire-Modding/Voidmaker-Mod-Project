// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAnalytics/Public/EGAAdType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGAAdType() {}
// Cross Module References
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdType();
	UPackage* Z_Construct_UPackage__Script_GameAnalytics();
// End Cross Module References
	static UEnum* EGAAdType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAAdType, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAAdType"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdType>()
	{
		return EGAAdType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAdType(EGAAdType_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAAdType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAAdType_Hash() { return 2780719489U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAdType"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAAdType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAdType::undefined", (int64)EGAAdType::undefined },
				{ "EGAAdType::video", (int64)EGAAdType::video },
				{ "EGAAdType::rewardedvideo", (int64)EGAAdType::rewardedvideo },
				{ "EGAAdType::playable", (int64)EGAAdType::playable },
				{ "EGAAdType::interstitial", (int64)EGAAdType::interstitial },
				{ "EGAAdType::offerwall", (int64)EGAAdType::offerwall },
				{ "EGAAdType::banner", (int64)EGAAdType::banner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "banner.Name", "EGAAdType::banner" },
				{ "interstitial.Name", "EGAAdType::interstitial" },
				{ "ModuleRelativePath", "Public/EGAAdType.h" },
				{ "offerwall.Name", "EGAAdType::offerwall" },
				{ "playable.Name", "EGAAdType::playable" },
				{ "rewardedvideo.Name", "EGAAdType::rewardedvideo" },
				{ "undefined.Name", "EGAAdType::undefined" },
				{ "video.Name", "EGAAdType::video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAAdType",
				"EGAAdType",
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
