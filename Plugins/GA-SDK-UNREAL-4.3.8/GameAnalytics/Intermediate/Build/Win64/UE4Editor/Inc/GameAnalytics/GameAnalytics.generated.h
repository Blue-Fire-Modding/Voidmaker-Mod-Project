// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGAAdAction : uint8;
enum class EGAAdType : uint8;
enum class EGAAdError : uint8;
enum class EGAErrorSeverity : uint8;
enum class EGAProgressionStatus : uint8;
enum class EGAResourceFlowType : uint8;
#ifdef GAMEANALYTICS_GameAnalytics_generated_h
#error "GameAnalytics.generated.h already included, missing '#pragma once' in GameAnalytics.h"
#endif
#define GAMEANALYTICS_GameAnalytics_generated_h

#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_SPARSE_DATA
#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAdEvent); \
	DECLARE_FUNCTION(execAddAdEventWithDuration); \
	DECLARE_FUNCTION(execAddAdEventWithNoAdReason); \
	DECLARE_FUNCTION(execAddBusinessEvent); \
	DECLARE_FUNCTION(execAddBusinessEventAndAutoFetchReceipt); \
	DECLARE_FUNCTION(execAddBusinessEventAndroid); \
	DECLARE_FUNCTION(execAddBusinessEventIOS); \
	DECLARE_FUNCTION(execAddDesignEvent); \
	DECLARE_FUNCTION(execAddDesignEventWithValue); \
	DECLARE_FUNCTION(execAddErrorEvent); \
	DECLARE_FUNCTION(execAddProgressionEventWithOne); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndTwo); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndThree); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoThreeAndScore); \
	DECLARE_FUNCTION(execAddResourceEvent); \
	DECLARE_FUNCTION(execGetABTestingId); \
	DECLARE_FUNCTION(execGetABTestingVariantId); \
	DECLARE_FUNCTION(execGetRemoteConfigsContentAsString); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsString); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsStringWithDefaultValue); \
	DECLARE_FUNCTION(execIsRemoteConfigsReady); \
	DECLARE_FUNCTION(execOnQuit); \
	DECLARE_FUNCTION(execSetCustomDimension01); \
	DECLARE_FUNCTION(execSetCustomDimension02); \
	DECLARE_FUNCTION(execSetCustomDimension03);


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAdEvent); \
	DECLARE_FUNCTION(execAddAdEventWithDuration); \
	DECLARE_FUNCTION(execAddAdEventWithNoAdReason); \
	DECLARE_FUNCTION(execAddBusinessEvent); \
	DECLARE_FUNCTION(execAddBusinessEventAndAutoFetchReceipt); \
	DECLARE_FUNCTION(execAddBusinessEventAndroid); \
	DECLARE_FUNCTION(execAddBusinessEventIOS); \
	DECLARE_FUNCTION(execAddDesignEvent); \
	DECLARE_FUNCTION(execAddDesignEventWithValue); \
	DECLARE_FUNCTION(execAddErrorEvent); \
	DECLARE_FUNCTION(execAddProgressionEventWithOne); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndTwo); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndThree); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoThreeAndScore); \
	DECLARE_FUNCTION(execAddResourceEvent); \
	DECLARE_FUNCTION(execGetABTestingId); \
	DECLARE_FUNCTION(execGetABTestingVariantId); \
	DECLARE_FUNCTION(execGetRemoteConfigsContentAsString); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsString); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsStringWithDefaultValue); \
	DECLARE_FUNCTION(execIsRemoteConfigsReady); \
	DECLARE_FUNCTION(execOnQuit); \
	DECLARE_FUNCTION(execSetCustomDimension01); \
	DECLARE_FUNCTION(execSetCustomDimension02); \
	DECLARE_FUNCTION(execSetCustomDimension03);


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameAnalytics(); \
	friend struct Z_Construct_UClass_UGameAnalytics_Statics; \
public: \
	DECLARE_CLASS(UGameAnalytics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UGameAnalytics)


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGameAnalytics(); \
	friend struct Z_Construct_UClass_UGameAnalytics_Statics; \
public: \
	DECLARE_CLASS(UGameAnalytics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UGameAnalytics)


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAnalytics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAnalytics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAnalytics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAnalytics(UGameAnalytics&&); \
	NO_API UGameAnalytics(const UGameAnalytics&); \
public:


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAnalytics(UGameAnalytics&&); \
	NO_API UGameAnalytics(const UGameAnalytics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAnalytics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameAnalytics)


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_PRIVATE_PROPERTY_OFFSET
#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_12_PROLOG
#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_PRIVATE_PROPERTY_OFFSET \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_SPARSE_DATA \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_RPC_WRAPPERS \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_INCLASS \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_PRIVATE_PROPERTY_OFFSET \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_SPARSE_DATA \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_INCLASS_NO_PURE_DECLS \
	Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEANALYTICS_API UClass* StaticClass<class UGameAnalytics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Voidmaker_Plugins_GA_SDK_UNREAL_4_3_8_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
