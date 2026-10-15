/**
 * decamp dumper generated SDK
 * Package: /Script/MaterialShaderQualitySettings
 */
#pragma once
#include "Basic.h"

// /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
// Kind: ScriptStruct; super: none
struct FMaterialQualityOverrides
{
public:
    std::uint8_t bDiscardQualityDuringCook; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableOverride; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceFullyRough; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceNonMetal; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceDisableLMDirectionality; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceDisablePreintegratedGF; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableMaterialNormalCalculation; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MobileShadowQuality; // 0x0007 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMaterialQualityOverrides, bDiscardQualityDuringCook) == 0, "Offset mismatch for FMaterialQualityOverrides::bDiscardQualityDuringCook");
static_assert(offsetof(FMaterialQualityOverrides, bEnableOverride) == 1, "Offset mismatch for FMaterialQualityOverrides::bEnableOverride");
static_assert(offsetof(FMaterialQualityOverrides, bForceFullyRough) == 2, "Offset mismatch for FMaterialQualityOverrides::bForceFullyRough");
static_assert(offsetof(FMaterialQualityOverrides, bForceNonMetal) == 3, "Offset mismatch for FMaterialQualityOverrides::bForceNonMetal");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisableLMDirectionality) == 4, "Offset mismatch for FMaterialQualityOverrides::bForceDisableLMDirectionality");
static_assert(offsetof(FMaterialQualityOverrides, bForceDisablePreintegratedGF) == 5, "Offset mismatch for FMaterialQualityOverrides::bForceDisablePreintegratedGF");
static_assert(offsetof(FMaterialQualityOverrides, bDisableMaterialNormalCalculation) == 6, "Offset mismatch for FMaterialQualityOverrides::bDisableMaterialNormalCalculation");
static_assert(offsetof(FMaterialQualityOverrides, MobileShadowQuality) == 7, "Offset mismatch for FMaterialQualityOverrides::MobileShadowQuality");

// /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Kind: Class; super: Object
class UMaterialShaderQualitySettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ForwardSettingMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 40, "Offset mismatch for UMaterialShaderQualitySettings::ForwardSettingMap");

// /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Kind: Class; super: Object
class UShaderPlatformQualitySettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t QualityOverrides[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 40, "Offset mismatch for UShaderPlatformQualitySettings::QualityOverrides");
