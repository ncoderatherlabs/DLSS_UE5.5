// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamlineRHI/Public/StreamlineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamlineSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineOverrideSettings();
STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineOverrideSettings_NoRegister();
STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineSettings();
STREAMLINERHI_API UClass* Z_Construct_UClass_UStreamlineSettings_NoRegister();
STREAMLINERHI_API UEnum* Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride();
UPackage* Z_Construct_UPackage__Script_StreamlineRHI();
// End Cross Module References

// Begin Enum EStreamlineSettingOverride
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStreamlineSettingOverride;
static UEnum* EStreamlineSettingOverride_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride, (UObject*)Z_Construct_UPackage__Script_StreamlineRHI(), TEXT("EStreamlineSettingOverride"));
	}
	return Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton;
}
template<> STREAMLINERHI_API UEnum* StaticEnum<EStreamlineSettingOverride>()
{
	return EStreamlineSettingOverride_StaticEnum();
}
struct Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.DisplayName", "False" },
		{ "Disabled.Name", "EStreamlineSettingOverride::Disabled" },
		{ "Enabled.DisplayName", "True" },
		{ "Enabled.Name", "EStreamlineSettingOverride::Enabled" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "UseProjectSettings.DisplayName", "Use project settings" },
		{ "UseProjectSettings.Name", "EStreamlineSettingOverride::UseProjectSettings" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStreamlineSettingOverride::Enabled", (int64)EStreamlineSettingOverride::Enabled },
		{ "EStreamlineSettingOverride::Disabled", (int64)EStreamlineSettingOverride::Disabled },
		{ "EStreamlineSettingOverride::UseProjectSettings", (int64)EStreamlineSettingOverride::UseProjectSettings },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_StreamlineRHI,
	nullptr,
	"EStreamlineSettingOverride",
	"EStreamlineSettingOverride",
	Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride()
{
	if (!Z_Registration_Info_UEnum_EStreamlineSettingOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStreamlineSettingOverride.InnerSingleton, Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStreamlineSettingOverride.InnerSingleton;
}
// End Enum EStreamlineSettingOverride

// Begin Class UStreamlineOverrideSettings
void UStreamlineOverrideSettings::StaticRegisterNativesUStreamlineOverrideSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamlineOverrideSettings);
UClass* Z_Construct_UClass_UStreamlineOverrideSettings_NoRegister()
{
	return UStreamlineOverrideSettings::StaticClass();
}
struct Z_Construct_UClass_UStreamlineOverrideSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StreamlineSettings.h" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData[] = {
		{ "Category", "Level Editor - Viewport (Local)" },
		{ "Comment", "/**\n\x09 * Enable DLSS Frame Generation in New Editor Window Play In Editor mode.\n\x09 * Saved to local user config only.\n\x09 * Note: DLSS Frame Generation is not supported in editor viewports\n\x09 */" },
		{ "DisplayName", "Enable DLSS-FG in New Editor Window (PIE) mode" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Enable DLSS Frame Generation in New Editor Window Play In Editor mode.\nSaved to local user config only.\nNote: DLSS Frame Generation is not supported in editor viewports" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadDebugOverlayOverride_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**\n\x09 * Load the Streamline debug overlay in non-Shipping configurations. Note that the overlay requires DLSS Frame Generation to be available.\n\x09 * Modifying this setting requires an editor restart to take effect. Saved to local user config only\n\x09 */" },
		{ "DisplayName", "Load Debug Overlay" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Load the Streamline debug overlay in non-Shipping configurations. Note that the overlay requires DLSS Frame Generation to be available.\nModifying this setting requires an editor restart to take effect. Saved to local user config only" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnableDLSSFGInPlayInEditorViewportsOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LoadDebugOverlayOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoadDebugOverlayOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineOverrideSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride = { "EnableDLSSFGInPlayInEditorViewportsOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamlineOverrideSettings, EnableDLSSFGInPlayInEditorViewportsOverride), Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData), NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_MetaData) }; // 2869691042
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride = { "LoadDebugOverlayOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamlineOverrideSettings, LoadDebugOverlayOverride), Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadDebugOverlayOverride_MetaData), NewProp_LoadDebugOverlayOverride_MetaData) }; // 2869691042
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_EnableDLSSFGInPlayInEditorViewportsOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineOverrideSettings_Statics::NewProp_LoadDebugOverlayOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStreamlineOverrideSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StreamlineRHI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineOverrideSettings_Statics::ClassParams = {
	&UStreamlineOverrideSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::PropPointers),
	0,
	0x001000E4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineOverrideSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamlineOverrideSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamlineOverrideSettings()
{
	if (!Z_Registration_Info_UClass_UStreamlineOverrideSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamlineOverrideSettings.OuterSingleton, Z_Construct_UClass_UStreamlineOverrideSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamlineOverrideSettings.OuterSingleton;
}
template<> STREAMLINERHI_API UClass* StaticClass<UStreamlineOverrideSettings>()
{
	return UStreamlineOverrideSettings::StaticClass();
}
UStreamlineOverrideSettings::UStreamlineOverrideSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineOverrideSettings);
UStreamlineOverrideSettings::~UStreamlineOverrideSettings() {}
// End Class UStreamlineOverrideSettings

// Begin Class UStreamlineSettings
void UStreamlineSettings::StaticRegisterNativesUStreamlineSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamlineSettings);
UClass* Z_Construct_UClass_UStreamlineSettings_NoRegister()
{
	return UStreamlineSettings::StaticClass();
}
struct Z_Construct_UClass_UStreamlineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "NVIDIA DLSS Frame Generation" },
		{ "IncludePath", "StreamlineSettings.h" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStreamlineD3D12_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Enable plugin features for D3D12, if the driver supports it at runtime */" },
		{ "DisplayName", "Enable plugin features for the D3D12RHI" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Enable plugin features for D3D12, if the driver supports it at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStreamlineD3D11_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Enable plugin features for D3D11, if the driver supports it at runtime */" },
		{ "DisplayName", "Enable plugin features for the D3D11RHI (Reflex only)" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Enable plugin features for D3D11, if the driver supports it at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData[] = {
		{ "Category", "Level Editor - Viewport" },
		{ "Comment", "/**\n\x09 * Enable DLSS Frame Generation in New Editor Window Play In Editor mode.\n\x09 * This project wide setting can be locally overridden in the NVIDIA DLSS Frame Generation (Local) settings.\n\x09 * Note: DLSS Frame Generation is not supported in editor viewports\n\x09 */" },
		{ "DisplayName", "Enable DLSS-FG in New Editor Window (PIE) mode" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Enable DLSS Frame Generation in New Editor Window Play In Editor mode.\nThis project wide setting can be locally overridden in the NVIDIA DLSS Frame Generation (Local) settings.\nNote: DLSS Frame Generation is not supported in editor viewports" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoadDebugOverlay_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**\n\x09 * Load the Streamline debug overlay in non-Shipping configurations. Note that the overlay requires DLSS Frame Generation to be available.\n\x09 * This project wide setting can be locally overridden in the NVIDIA DLSS Frame Generation (Local) settings.\n\x09 * Modifying this setting requires an editor restart to take effect\n\x09 */" },
		{ "DisplayName", "Load Debug Overlay" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Load the Streamline debug overlay in non-Shipping configurations. Note that the overlay requires DLSS Frame Generation to be available.\nThis project wide setting can be locally overridden in the NVIDIA DLSS Frame Generation (Local) settings.\nModifying this setting requires an editor restart to take effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOTAUpdate_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/** Allow OTA updates of Streamline features */" },
		{ "DisplayName", "Allow OTA update" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "Allow OTA updates of Streamline features" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NVIDIANGXApplicationId_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/** By default the DLSS Frame Generation plugin uses the UE Project ID to initialize Streamline. In some cases NVIDIA might provide a separate NVIDIA Application ID, which should be put here. */" },
		{ "DisplayName", "NVIDIA NGX Application ID" },
		{ "ModuleRelativePath", "Public/StreamlineSettings.h" },
		{ "ToolTip", "By default the DLSS Frame Generation plugin uses the UE Project ID to initialize Streamline. In some cases NVIDIA might provide a separate NVIDIA Application ID, which should be put here." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableStreamlineD3D12_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreamlineD3D12;
	static void NewProp_bEnableStreamlineD3D11_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreamlineD3D11;
	static void NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSFGInPlayInEditorViewports;
	static void NewProp_bLoadDebugOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadDebugOverlay;
	static void NewProp_bAllowOTAUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOTAUpdate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NVIDIANGXApplicationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamlineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_SetBit(void* Obj)
{
	((UStreamlineSettings*)Obj)->bEnableStreamlineD3D12 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12 = { "bEnableStreamlineD3D12", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStreamlineD3D12_MetaData), NewProp_bEnableStreamlineD3D12_MetaData) };
void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_SetBit(void* Obj)
{
	((UStreamlineSettings*)Obj)->bEnableStreamlineD3D11 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11 = { "bEnableStreamlineD3D11", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStreamlineD3D11_MetaData), NewProp_bEnableStreamlineD3D11_MetaData) };
void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit(void* Obj)
{
	((UStreamlineSettings*)Obj)->bEnableDLSSFGInPlayInEditorViewports = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports = { "bEnableDLSSFGInPlayInEditorViewports", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData), NewProp_bEnableDLSSFGInPlayInEditorViewports_MetaData) };
void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_SetBit(void* Obj)
{
	((UStreamlineSettings*)Obj)->bLoadDebugOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay = { "bLoadDebugOverlay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoadDebugOverlay_MetaData), NewProp_bLoadDebugOverlay_MetaData) };
void Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_SetBit(void* Obj)
{
	((UStreamlineSettings*)Obj)->bAllowOTAUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate = { "bAllowOTAUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreamlineSettings), &Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowOTAUpdate_MetaData), NewProp_bAllowOTAUpdate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId = { "NVIDIANGXApplicationId", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamlineSettings, NVIDIANGXApplicationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NVIDIANGXApplicationId_MetaData), NewProp_NVIDIANGXApplicationId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_NVIDIANGXApplicationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStreamlineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_StreamlineRHI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamlineSettings_Statics::ClassParams = {
	&UStreamlineSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamlineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamlineSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamlineSettings()
{
	if (!Z_Registration_Info_UClass_UStreamlineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamlineSettings.OuterSingleton, Z_Construct_UClass_UStreamlineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamlineSettings.OuterSingleton;
}
template<> STREAMLINERHI_API UClass* StaticClass<UStreamlineSettings>()
{
	return UStreamlineSettings::StaticClass();
}
UStreamlineSettings::UStreamlineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamlineSettings);
UStreamlineSettings::~UStreamlineSettings() {}
// End Class UStreamlineSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStreamlineSettingOverride_StaticEnum, TEXT("EStreamlineSettingOverride"), &Z_Registration_Info_UEnum_EStreamlineSettingOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2869691042U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreamlineOverrideSettings, UStreamlineOverrideSettings::StaticClass, TEXT("UStreamlineOverrideSettings"), &Z_Registration_Info_UClass_UStreamlineOverrideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamlineOverrideSettings), 1920145531U) },
		{ Z_Construct_UClass_UStreamlineSettings, UStreamlineSettings::StaticClass, TEXT("UStreamlineSettings"), &Z_Registration_Info_UClass_UStreamlineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamlineSettings), 516285895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_140089210(TEXT("/Script/StreamlineRHI"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Streamline_Source_StreamlineRHI_Public_StreamlineSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
