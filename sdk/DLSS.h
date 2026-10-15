/**
 * decamp dumper generated SDK
 * Package: /Script/DLSS
 */
#pragma once
#include "Basic.h"

// /Script/DLSS.DLSSUpscalerModularFeatureSettings
// Kind: ScriptStruct; super: none
struct FDLSSUpscalerModularFeatureSettings
{
public:
    std::uint8_t Quality; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDLSSUpscalerModularFeatureSettings, Quality) == 0, "Offset mismatch for FDLSSUpscalerModularFeatureSettings::Quality");

// /Script/DLSS.DLSSOverrideSettings
// Kind: Class; super: Object
class UDLSSOverrideSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bShowDLSSIncompatiblePluginsToolsWarnings; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowDLSSSDebugOnScreenMessages; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EnableDLSSInEditorViewportsOverride; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t EnableDLSSInPlayInEditorViewportsOverride; // 0x002B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDLSSOverrideSettings, bShowDLSSIncompatiblePluginsToolsWarnings) == 40, "Offset mismatch for UDLSSOverrideSettings::bShowDLSSIncompatiblePluginsToolsWarnings");
static_assert(offsetof(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages) == 41, "Offset mismatch for UDLSSOverrideSettings::ShowDLSSSDebugOnScreenMessages");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride) == 42, "Offset mismatch for UDLSSOverrideSettings::EnableDLSSInEditorViewportsOverride");
static_assert(offsetof(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride) == 43, "Offset mismatch for UDLSSOverrideSettings::EnableDLSSInPlayInEditorViewportsOverride");

// /Script/DLSS.DLSSSettings
// Kind: Class; super: Object
class UDLSSSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAllowOTAUpdate; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint32_t NVIDIANGXApplicationId; // 0x002C (Size: 0x4, Type: UInt32Property)
    std::uint8_t BiasCurrentColorStencilValue; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEnableDLSSD3D12; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDLSSD3D11; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDLSSVulkan; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDLSSIncompatiblePluginsToolsWarnings; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDLSSInEditorViewports; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDLSSInPlayInEditorViewports; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDLSSSDebugOnScreenMessages; // 0x0037 (Size: 0x1, Type: BoolProperty)
    FString GenericDLSSSRBinaryPath; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t bGenericDLSSSRBinaryExists; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0049
    FString CustomDLSSSRBinaryPath; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCustomDLSSSRBinaryExists; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DLAAPreset; // 0x0061 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0062
    std::uint8_t DLSSQualityPreset; // 0x0063 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DLSSBalancedPreset; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DLSSPerformancePreset; // 0x0065 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DLSSUltraPerformancePreset; // 0x0066 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0067
    FString GenericDLSSRRBinaryPath; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t bGenericDLSSRRBinaryExists; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0079
    FString CustomDLSSRRBinaryPath; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCustomDLSSRRBinaryExists; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DLAARRPreset; // 0x0091 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x1]; // 0x0092
    std::uint8_t DLSSRRQualityPreset; // 0x0093 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DLSSRRBalancedPreset; // 0x0094 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DLSSRRPerformancePreset; // 0x0095 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DLSSRRUltraPerformancePreset; // 0x0096 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDLSSSettings, bAllowOTAUpdate) == 40, "Offset mismatch for UDLSSSettings::bAllowOTAUpdate");
static_assert(offsetof(UDLSSSettings, NVIDIANGXApplicationId) == 44, "Offset mismatch for UDLSSSettings::NVIDIANGXApplicationId");
static_assert(offsetof(UDLSSSettings, BiasCurrentColorStencilValue) == 48, "Offset mismatch for UDLSSSettings::BiasCurrentColorStencilValue");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D12) == 49, "Offset mismatch for UDLSSSettings::bEnableDLSSD3D12");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D11) == 50, "Offset mismatch for UDLSSSettings::bEnableDLSSD3D11");
static_assert(offsetof(UDLSSSettings, bEnableDLSSVulkan) == 51, "Offset mismatch for UDLSSSettings::bEnableDLSSVulkan");
static_assert(offsetof(UDLSSSettings, bShowDLSSIncompatiblePluginsToolsWarnings) == 52, "Offset mismatch for UDLSSSettings::bShowDLSSIncompatiblePluginsToolsWarnings");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInEditorViewports) == 53, "Offset mismatch for UDLSSSettings::bEnableDLSSInEditorViewports");
static_assert(offsetof(UDLSSSettings, bEnableDLSSInPlayInEditorViewports) == 54, "Offset mismatch for UDLSSSettings::bEnableDLSSInPlayInEditorViewports");
static_assert(offsetof(UDLSSSettings, bShowDLSSSDebugOnScreenMessages) == 55, "Offset mismatch for UDLSSSettings::bShowDLSSSDebugOnScreenMessages");
static_assert(offsetof(UDLSSSettings, GenericDLSSSRBinaryPath) == 56, "Offset mismatch for UDLSSSettings::GenericDLSSSRBinaryPath");
static_assert(offsetof(UDLSSSettings, bGenericDLSSSRBinaryExists) == 72, "Offset mismatch for UDLSSSettings::bGenericDLSSSRBinaryExists");
static_assert(offsetof(UDLSSSettings, CustomDLSSSRBinaryPath) == 80, "Offset mismatch for UDLSSSettings::CustomDLSSSRBinaryPath");
static_assert(offsetof(UDLSSSettings, bCustomDLSSSRBinaryExists) == 96, "Offset mismatch for UDLSSSettings::bCustomDLSSSRBinaryExists");
static_assert(offsetof(UDLSSSettings, DLAAPreset) == 97, "Offset mismatch for UDLSSSettings::DLAAPreset");
static_assert(offsetof(UDLSSSettings, DLSSQualityPreset) == 99, "Offset mismatch for UDLSSSettings::DLSSQualityPreset");
static_assert(offsetof(UDLSSSettings, DLSSBalancedPreset) == 100, "Offset mismatch for UDLSSSettings::DLSSBalancedPreset");
static_assert(offsetof(UDLSSSettings, DLSSPerformancePreset) == 101, "Offset mismatch for UDLSSSettings::DLSSPerformancePreset");
static_assert(offsetof(UDLSSSettings, DLSSUltraPerformancePreset) == 102, "Offset mismatch for UDLSSSettings::DLSSUltraPerformancePreset");
static_assert(offsetof(UDLSSSettings, GenericDLSSRRBinaryPath) == 104, "Offset mismatch for UDLSSSettings::GenericDLSSRRBinaryPath");
static_assert(offsetof(UDLSSSettings, bGenericDLSSRRBinaryExists) == 120, "Offset mismatch for UDLSSSettings::bGenericDLSSRRBinaryExists");
static_assert(offsetof(UDLSSSettings, CustomDLSSRRBinaryPath) == 128, "Offset mismatch for UDLSSSettings::CustomDLSSRRBinaryPath");
static_assert(offsetof(UDLSSSettings, bCustomDLSSRRBinaryExists) == 144, "Offset mismatch for UDLSSSettings::bCustomDLSSRRBinaryExists");
static_assert(offsetof(UDLSSSettings, DLAARRPreset) == 145, "Offset mismatch for UDLSSSettings::DLAARRPreset");
static_assert(offsetof(UDLSSSettings, DLSSRRQualityPreset) == 147, "Offset mismatch for UDLSSSettings::DLSSRRQualityPreset");
static_assert(offsetof(UDLSSSettings, DLSSRRBalancedPreset) == 148, "Offset mismatch for UDLSSSettings::DLSSRRBalancedPreset");
static_assert(offsetof(UDLSSSettings, DLSSRRPerformancePreset) == 149, "Offset mismatch for UDLSSSettings::DLSSRRPerformancePreset");
static_assert(offsetof(UDLSSSettings, DLSSRRUltraPerformancePreset) == 150, "Offset mismatch for UDLSSSettings::DLSSRRUltraPerformancePreset");
