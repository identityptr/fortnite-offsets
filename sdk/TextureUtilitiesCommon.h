/**
 * decamp dumper generated SDK
 * Package: /Script/TextureUtilitiesCommon
 */
#pragma once
#include "Basic.h"

// /Script/TextureUtilitiesCommon.TextureImportSettings
// Kind: Class; super: DeveloperSettings
class UTextureImportSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t AutoVTSize; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t AutoLimitDimension; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableNormalizeNormals; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFastMipFilter; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CompressedFormatForFloatTextures; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t PNGInfill; // 0x003B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDoAutomaticTextureSettingsForNonPow2Textures; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTextureImportSettings, AutoVTSize) == 48, "Offset mismatch for UTextureImportSettings::AutoVTSize");
static_assert(offsetof(UTextureImportSettings, AutoLimitDimension) == 52, "Offset mismatch for UTextureImportSettings::AutoLimitDimension");
static_assert(offsetof(UTextureImportSettings, bEnableNormalizeNormals) == 56, "Offset mismatch for UTextureImportSettings::bEnableNormalizeNormals");
static_assert(offsetof(UTextureImportSettings, bEnableFastMipFilter) == 57, "Offset mismatch for UTextureImportSettings::bEnableFastMipFilter");
static_assert(offsetof(UTextureImportSettings, CompressedFormatForFloatTextures) == 58, "Offset mismatch for UTextureImportSettings::CompressedFormatForFloatTextures");
static_assert(offsetof(UTextureImportSettings, PNGInfill) == 59, "Offset mismatch for UTextureImportSettings::PNGInfill");
static_assert(offsetof(UTextureImportSettings, bDoAutomaticTextureSettingsForNonPow2Textures) == 60, "Offset mismatch for UTextureImportSettings::bDoAutomaticTextureSettingsForNonPow2Textures");

// /Script/TextureUtilitiesCommon.TextureImportUserSettings
// Kind: Class; super: DeveloperSettings
class UTextureImportUserSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PNGInfill; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UTextureImportUserSettings, PNGInfill) == 48, "Offset mismatch for UTextureImportUserSettings::PNGInfill");
