// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreamlineLibraryDeepDVC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UStreamlineDeepDVCMode : uint8;
enum class UStreamlineFeatureSupport : uint8;
#ifdef STREAMLINEDEEPDVCBLUEPRINT_StreamlineLibraryDeepDVC_generated_h
#error "StreamlineLibraryDeepDVC.generated.h already included, missing '#pragma once' in StreamlineLibraryDeepDVC.h"
#endif
#define STREAMLINEDEEPDVCBLUEPRINT_StreamlineLibraryDeepDVC_generated_h

#define FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeepDVCSaturationBoost); \
	DECLARE_FUNCTION(execSetDeepDVCSaturationBoost); \
	DECLARE_FUNCTION(execGetDeepDVCIntensity); \
	DECLARE_FUNCTION(execSetDeepDVCIntensity); \
	DECLARE_FUNCTION(execGetDefaultDeepDVCMode); \
	DECLARE_FUNCTION(execGetDeepDVCMode); \
	DECLARE_FUNCTION(execSetDeepDVCMode); \
	DECLARE_FUNCTION(execGetSupportedDeepDVCModes); \
	DECLARE_FUNCTION(execIsDeepDVCModeSupported); \
	DECLARE_FUNCTION(execQueryDeepDVCSupport); \
	DECLARE_FUNCTION(execIsDeepDVCSupported);


#define FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamlineLibraryDeepDVC(); \
	friend struct Z_Construct_UClass_UStreamlineLibraryDeepDVC_Statics; \
public: \
	DECLARE_CLASS(UStreamlineLibraryDeepDVC, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamlineDeepDVCBlueprint"), STREAMLINEDEEPDVCBLUEPRINT_API) \
	DECLARE_SERIALIZER(UStreamlineLibraryDeepDVC)


#define FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STREAMLINEDEEPDVCBLUEPRINT_API UStreamlineLibraryDeepDVC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamlineLibraryDeepDVC(UStreamlineLibraryDeepDVC&&); \
	UStreamlineLibraryDeepDVC(const UStreamlineLibraryDeepDVC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STREAMLINEDEEPDVCBLUEPRINT_API, UStreamlineLibraryDeepDVC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamlineLibraryDeepDVC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamlineLibraryDeepDVC) \
	STREAMLINEDEEPDVCBLUEPRINT_API virtual ~UStreamlineLibraryDeepDVC();


#define FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_40_PROLOG
#define FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLINEDEEPDVCBLUEPRINT_API UClass* StaticClass<class UStreamlineLibraryDeepDVC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_StreamlineDeepDVC_Source_StreamlineDeepDVCBlueprint_Public_StreamlineLibraryDeepDVC_h


#define FOREACH_ENUM_USTREAMLINEDEEPDVCMODE(op) \
	op(UStreamlineDeepDVCMode::Off) \
	op(UStreamlineDeepDVCMode::On) 

enum class UStreamlineDeepDVCMode : uint8;
template<> struct TIsUEnumClass<UStreamlineDeepDVCMode> { enum { Value = true }; };
template<> STREAMLINEDEEPDVCBLUEPRINT_API UEnum* StaticEnum<UStreamlineDeepDVCMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
