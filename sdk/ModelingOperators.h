/**
 * decamp dumper generated SDK
 * Package: /Script/ModelingOperators
 */
#pragma once
#include "Basic.h"

// /Script/ModelingOperators.GenerateCrossSectionOpFactory
// Kind: Class; super: Object
class UGenerateCrossSectionOpFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModelingOperators.RecomputeUVsOpFactory
// Kind: Class; super: Object
class URecomputeUVsOpFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Settings; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URecomputeUVsOpFactory, Settings) == 48, "Offset mismatch for URecomputeUVsOpFactory::Settings");

// /Script/ModelingOperators.RecomputeUVsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class URecomputeUVsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnablePolygroupSupport; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t IslandGeneration; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    std::uint8_t UnwrapType; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0071
    std::uint8_t AutoRotation; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0075
    std::uint8_t bPreserveIrregularity; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0079
    std::int32_t SmoothingSteps; // 0x007C (Size: 0x4, Type: IntProperty)
    float SmoothingAlpha; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MergingDistortionThreshold; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float MergingAngleThreshold; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LayoutType; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x008D
    std::int32_t TextureResolution; // 0x0090 (Size: 0x4, Type: IntProperty)
    float NormalizeScale; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableUDIMLayout; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUDIMCVAREnabled; // 0x0099 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URecomputeUVsToolProperties, bEnablePolygroupSupport) == 104, "Offset mismatch for URecomputeUVsToolProperties::bEnablePolygroupSupport");
static_assert(offsetof(URecomputeUVsToolProperties, IslandGeneration) == 108, "Offset mismatch for URecomputeUVsToolProperties::IslandGeneration");
static_assert(offsetof(URecomputeUVsToolProperties, UnwrapType) == 112, "Offset mismatch for URecomputeUVsToolProperties::UnwrapType");
static_assert(offsetof(URecomputeUVsToolProperties, AutoRotation) == 116, "Offset mismatch for URecomputeUVsToolProperties::AutoRotation");
static_assert(offsetof(URecomputeUVsToolProperties, bPreserveIrregularity) == 120, "Offset mismatch for URecomputeUVsToolProperties::bPreserveIrregularity");
static_assert(offsetof(URecomputeUVsToolProperties, SmoothingSteps) == 124, "Offset mismatch for URecomputeUVsToolProperties::SmoothingSteps");
static_assert(offsetof(URecomputeUVsToolProperties, SmoothingAlpha) == 128, "Offset mismatch for URecomputeUVsToolProperties::SmoothingAlpha");
static_assert(offsetof(URecomputeUVsToolProperties, MergingDistortionThreshold) == 132, "Offset mismatch for URecomputeUVsToolProperties::MergingDistortionThreshold");
static_assert(offsetof(URecomputeUVsToolProperties, MergingAngleThreshold) == 136, "Offset mismatch for URecomputeUVsToolProperties::MergingAngleThreshold");
static_assert(offsetof(URecomputeUVsToolProperties, LayoutType) == 140, "Offset mismatch for URecomputeUVsToolProperties::LayoutType");
static_assert(offsetof(URecomputeUVsToolProperties, TextureResolution) == 144, "Offset mismatch for URecomputeUVsToolProperties::TextureResolution");
static_assert(offsetof(URecomputeUVsToolProperties, NormalizeScale) == 148, "Offset mismatch for URecomputeUVsToolProperties::NormalizeScale");
static_assert(offsetof(URecomputeUVsToolProperties, bEnableUDIMLayout) == 152, "Offset mismatch for URecomputeUVsToolProperties::bEnableUDIMLayout");
static_assert(offsetof(URecomputeUVsToolProperties, bUDIMCVAREnabled) == 153, "Offset mismatch for URecomputeUVsToolProperties::bUDIMCVAREnabled");

// /Script/ModelingOperators.UVEditorTexelDensitySettings
// Kind: Class; super: InteractiveToolPropertySet
class UUVEditorTexelDensitySettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TexelDensityMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float TargetWorldUnits; // 0x006C (Size: 0x4, Type: FloatProperty)
    float TargetPixelCount; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float TextureResolution; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableUDIMLayout; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUVEditorTexelDensitySettings, TexelDensityMode) == 104, "Offset mismatch for UUVEditorTexelDensitySettings::TexelDensityMode");
static_assert(offsetof(UUVEditorTexelDensitySettings, TargetWorldUnits) == 108, "Offset mismatch for UUVEditorTexelDensitySettings::TargetWorldUnits");
static_assert(offsetof(UUVEditorTexelDensitySettings, TargetPixelCount) == 112, "Offset mismatch for UUVEditorTexelDensitySettings::TargetPixelCount");
static_assert(offsetof(UUVEditorTexelDensitySettings, TextureResolution) == 116, "Offset mismatch for UUVEditorTexelDensitySettings::TextureResolution");
static_assert(offsetof(UUVEditorTexelDensitySettings, bEnableUDIMLayout) == 120, "Offset mismatch for UUVEditorTexelDensitySettings::bEnableUDIMLayout");

// /Script/ModelingOperators.UVLayoutOperatorFactory
// Kind: Class; super: Object
class UUVLayoutOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Settings; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVLayoutOperatorFactory, Settings) == 48, "Offset mismatch for UUVLayoutOperatorFactory::Settings");

// /Script/ModelingOperators.UVLayoutProperties
// Kind: Class; super: InteractiveToolPropertySet
class UUVLayoutProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t LayoutType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t TextureResolution; // 0x006C (Size: 0x4, Type: IntProperty)
    float Scale; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0074
    std::uint8_t Translation[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bPreserveScale; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreserveRotation; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowFlips; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableUDIMLayout; // 0x008B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUDIMCVAREnabled; // 0x008C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUVLayoutProperties, LayoutType) == 104, "Offset mismatch for UUVLayoutProperties::LayoutType");
static_assert(offsetof(UUVLayoutProperties, TextureResolution) == 108, "Offset mismatch for UUVLayoutProperties::TextureResolution");
static_assert(offsetof(UUVLayoutProperties, Scale) == 112, "Offset mismatch for UUVLayoutProperties::Scale");
static_assert(offsetof(UUVLayoutProperties, Translation) == 120, "Offset mismatch for UUVLayoutProperties::Translation");
static_assert(offsetof(UUVLayoutProperties, bPreserveScale) == 136, "Offset mismatch for UUVLayoutProperties::bPreserveScale");
static_assert(offsetof(UUVLayoutProperties, bPreserveRotation) == 137, "Offset mismatch for UUVLayoutProperties::bPreserveRotation");
static_assert(offsetof(UUVLayoutProperties, bAllowFlips) == 138, "Offset mismatch for UUVLayoutProperties::bAllowFlips");
static_assert(offsetof(UUVLayoutProperties, bEnableUDIMLayout) == 139, "Offset mismatch for UUVLayoutProperties::bEnableUDIMLayout");
static_assert(offsetof(UUVLayoutProperties, bUDIMCVAREnabled) == 140, "Offset mismatch for UUVLayoutProperties::bUDIMCVAREnabled");

// /Script/ModelingOperators.UVTexelDensityOperatorFactory
// Kind: Class; super: Object
class UUVTexelDensityOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Settings; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVTexelDensityOperatorFactory, Settings) == 48, "Offset mismatch for UUVTexelDensityOperatorFactory::Settings");
