/**
 * decamp dumper generated SDK
 * Package: /Script/OpenColorIO
 */
#pragma once
#include "Basic.h"

// /Script/OpenColorIO.OpenColorIOColorConversionSettings
// Kind: ScriptStruct; super: none
struct FOpenColorIOColorConversionSettings
{
public:
    void* ConfigurationSource; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceColorSpace[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t DestinationColorSpace[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t DestinationDisplayView[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t DisplayViewDirection; // 0x0098 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FOpenColorIOColorConversionSettings, ConfigurationSource) == 0, "Offset mismatch for FOpenColorIOColorConversionSettings::ConfigurationSource");
static_assert(offsetof(FOpenColorIOColorConversionSettings, SourceColorSpace) == 8, "Offset mismatch for FOpenColorIOColorConversionSettings::SourceColorSpace");
static_assert(offsetof(FOpenColorIOColorConversionSettings, DestinationColorSpace) == 56, "Offset mismatch for FOpenColorIOColorConversionSettings::DestinationColorSpace");
static_assert(offsetof(FOpenColorIOColorConversionSettings, DestinationDisplayView) == 104, "Offset mismatch for FOpenColorIOColorConversionSettings::DestinationDisplayView");
static_assert(offsetof(FOpenColorIOColorConversionSettings, DisplayViewDirection) == 152, "Offset mismatch for FOpenColorIOColorConversionSettings::DisplayViewDirection");

// /Script/OpenColorIO.OpenColorIOColorSpace
// Kind: ScriptStruct; super: none
struct FOpenColorIOColorSpace
{
public:
    FString ColorSpaceName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString FamilyName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOpenColorIOColorSpace, ColorSpaceName) == 0, "Offset mismatch for FOpenColorIOColorSpace::ColorSpaceName");
static_assert(offsetof(FOpenColorIOColorSpace, FamilyName) == 16, "Offset mismatch for FOpenColorIOColorSpace::FamilyName");
static_assert(offsetof(FOpenColorIOColorSpace, Description) == 32, "Offset mismatch for FOpenColorIOColorSpace::Description");

// /Script/OpenColorIO.OpenColorIODisplayConfiguration
// Kind: ScriptStruct; super: none
struct FOpenColorIODisplayConfiguration
{
public:
    std::uint8_t bIsEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ColorConfiguration[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOpenColorIODisplayConfiguration, bIsEnabled) == 0, "Offset mismatch for FOpenColorIODisplayConfiguration::bIsEnabled");
static_assert(offsetof(FOpenColorIODisplayConfiguration, ColorConfiguration) == 8, "Offset mismatch for FOpenColorIODisplayConfiguration::ColorConfiguration");

// /Script/OpenColorIO.OpenColorIODisplayView
// Kind: ScriptStruct; super: none
struct FOpenColorIODisplayView
{
public:
    FString Display; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString View; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Description; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOpenColorIODisplayView, Display) == 0, "Offset mismatch for FOpenColorIODisplayView::Display");
static_assert(offsetof(FOpenColorIODisplayView, View) == 16, "Offset mismatch for FOpenColorIODisplayView::View");
static_assert(offsetof(FOpenColorIODisplayView, Description) == 32, "Offset mismatch for FOpenColorIODisplayView::Description");

// /Script/OpenColorIO.OpenColorIOBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UOpenColorIOBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OpenColorIO.OpenColorIOColorTransform
// Kind: Class; super: Object
class UOpenColorIOColorTransform
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsDisplayViewType; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    FString SourceColorSpace; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString DestinationColorSpace; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString Display; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString View; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayViewDirection; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    TArray<void*> LookupTextures; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOpenColorIOColorTransform, bIsDisplayViewType) == 40, "Offset mismatch for UOpenColorIOColorTransform::bIsDisplayViewType");
static_assert(offsetof(UOpenColorIOColorTransform, SourceColorSpace) == 48, "Offset mismatch for UOpenColorIOColorTransform::SourceColorSpace");
static_assert(offsetof(UOpenColorIOColorTransform, DestinationColorSpace) == 64, "Offset mismatch for UOpenColorIOColorTransform::DestinationColorSpace");
static_assert(offsetof(UOpenColorIOColorTransform, Display) == 80, "Offset mismatch for UOpenColorIOColorTransform::Display");
static_assert(offsetof(UOpenColorIOColorTransform, View) == 96, "Offset mismatch for UOpenColorIOColorTransform::View");
static_assert(offsetof(UOpenColorIOColorTransform, DisplayViewDirection) == 112, "Offset mismatch for UOpenColorIOColorTransform::DisplayViewDirection");
static_assert(offsetof(UOpenColorIOColorTransform, LookupTextures) == 120, "Offset mismatch for UOpenColorIOColorTransform::LookupTextures");

// /Script/OpenColorIO.OpenColorIOConfiguration
// Kind: Class; super: Object
class UOpenColorIOConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DesiredColorSpaces; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DesiredDisplayViews; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Context; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t ConfigurationFile[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    TArray<void*> ColorTransforms; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0078
    FString ConfigHash; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UOpenColorIOConfiguration, DesiredColorSpaces) == 40, "Offset mismatch for UOpenColorIOConfiguration::DesiredColorSpaces");
static_assert(offsetof(UOpenColorIOConfiguration, DesiredDisplayViews) == 56, "Offset mismatch for UOpenColorIOConfiguration::DesiredDisplayViews");
static_assert(offsetof(UOpenColorIOConfiguration, Context) == 72, "Offset mismatch for UOpenColorIOConfiguration::Context");
static_assert(offsetof(UOpenColorIOConfiguration, ConfigurationFile) == 88, "Offset mismatch for UOpenColorIOConfiguration::ConfigurationFile");
static_assert(offsetof(UOpenColorIOConfiguration, ColorTransforms) == 104, "Offset mismatch for UOpenColorIOConfiguration::ColorTransforms");
static_assert(offsetof(UOpenColorIOConfiguration, ConfigHash) == 168, "Offset mismatch for UOpenColorIOConfiguration::ConfigHash");

// /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper
// Kind: Class; super: Object
class UOpenColorIODisplayExtensionWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OpenColorIO.OpenColorIOSettings
// Kind: Class; super: DeveloperSettings
class UOpenColorIOSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bSupportInverseViewTransforms; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bUse32fLUT (shared storage)
    // 0x0030 BoolProperty bUseLegacyProcessor (shared storage)
};

static_assert(offsetof(UOpenColorIOSettings, bSupportInverseViewTransforms) == 48, "Offset mismatch for UOpenColorIOSettings::bSupportInverseViewTransforms");
