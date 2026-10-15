/**
 * decamp dumper generated SDK
 * Package: /Script/ResonanceAudio
 */
#pragma once
#include "Basic.h"

// /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
// Kind: ScriptStruct; super: none
struct FResonanceAudioReverbPluginSettings
{
public:
    std::uint8_t bEnableRoomEffects; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetTransformFromAudioVolume; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t RoomPosition[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RoomRotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t RoomDimensions[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftWallMaterial; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RightWallMaterial; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FloorMaterial; // 0x005A (Size: 0x1, Type: EnumProperty)
    std::uint8_t CeilingMaterial; // 0x005B (Size: 0x1, Type: EnumProperty)
    std::uint8_t FrontWallMaterial; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t BackWallMaterial; // 0x005D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005E
    float ReflectionScalar; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float ReverbGain; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float ReverbTimeModifier; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float ReverbBrightness; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FResonanceAudioReverbPluginSettings, bEnableRoomEffects) == 0, "Offset mismatch for FResonanceAudioReverbPluginSettings::bEnableRoomEffects");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, bGetTransformFromAudioVolume) == 1, "Offset mismatch for FResonanceAudioReverbPluginSettings::bGetTransformFromAudioVolume");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomPosition) == 8, "Offset mismatch for FResonanceAudioReverbPluginSettings::RoomPosition");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomRotation) == 32, "Offset mismatch for FResonanceAudioReverbPluginSettings::RoomRotation");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomDimensions) == 64, "Offset mismatch for FResonanceAudioReverbPluginSettings::RoomDimensions");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, LeftWallMaterial) == 88, "Offset mismatch for FResonanceAudioReverbPluginSettings::LeftWallMaterial");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RightWallMaterial) == 89, "Offset mismatch for FResonanceAudioReverbPluginSettings::RightWallMaterial");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FloorMaterial) == 90, "Offset mismatch for FResonanceAudioReverbPluginSettings::FloorMaterial");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, CeilingMaterial) == 91, "Offset mismatch for FResonanceAudioReverbPluginSettings::CeilingMaterial");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FrontWallMaterial) == 92, "Offset mismatch for FResonanceAudioReverbPluginSettings::FrontWallMaterial");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, BackWallMaterial) == 93, "Offset mismatch for FResonanceAudioReverbPluginSettings::BackWallMaterial");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReflectionScalar) == 96, "Offset mismatch for FResonanceAudioReverbPluginSettings::ReflectionScalar");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbGain) == 100, "Offset mismatch for FResonanceAudioReverbPluginSettings::ReverbGain");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbTimeModifier) == 104, "Offset mismatch for FResonanceAudioReverbPluginSettings::ReverbTimeModifier");
static_assert(offsetof(FResonanceAudioReverbPluginSettings, ReverbBrightness) == 108, "Offset mismatch for FResonanceAudioReverbPluginSettings::ReverbBrightness");

// /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UResonanceAudioBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer
// Kind: Class; super: Actor
class UResonanceAudioDirectivityVisualizer
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    void* Material; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UResonanceAudioDirectivityVisualizer, Material) == 736, "Offset mismatch for UResonanceAudioDirectivityVisualizer::Material");
static_assert(offsetof(UResonanceAudioDirectivityVisualizer, Settings) == 744, "Offset mismatch for UResonanceAudioDirectivityVisualizer::Settings");

// /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
// Kind: Class; super: SoundEffectSubmixPreset
class UResonanceAudioReverbPluginPreset
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UResonanceAudioReverbPluginPreset, Settings) == 256, "Offset mismatch for UResonanceAudioReverbPluginPreset::Settings");

// /Script/ResonanceAudio.ResonanceAudioSettings
// Kind: Class; super: Object
class UResonanceAudioSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t OutputSubmix[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t QualityMode; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    std::uint8_t GlobalReverbPreset[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalSourcePreset[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UResonanceAudioSettings, OutputSubmix) == 40, "Offset mismatch for UResonanceAudioSettings::OutputSubmix");
static_assert(offsetof(UResonanceAudioSettings, QualityMode) == 64, "Offset mismatch for UResonanceAudioSettings::QualityMode");
static_assert(offsetof(UResonanceAudioSettings, GlobalReverbPreset) == 72, "Offset mismatch for UResonanceAudioSettings::GlobalReverbPreset");
static_assert(offsetof(UResonanceAudioSettings, GlobalSourcePreset) == 96, "Offset mismatch for UResonanceAudioSettings::GlobalSourcePreset");

// /Script/ResonanceAudio.ResonanceAudioSoundfieldSettings
// Kind: Class; super: SoundfieldEncodingSettingsBase
class UResonanceAudioSoundfieldSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RenderMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UResonanceAudioSoundfieldSettings, RenderMode) == 40, "Offset mismatch for UResonanceAudioSoundfieldSettings::RenderMode");

// /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// Kind: Class; super: SpatializationPluginSourceSettingsBase
class UResonanceAudioSpatializationSourceSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SpatializationMethod; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Pattern; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Sharpness; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bToggleVisualization; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    float Scale; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float Spread; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Rolloff; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0041
    float MinDistance; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, SpatializationMethod) == 40, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::SpatializationMethod");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Pattern) == 44, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::Pattern");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Sharpness) == 48, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::Sharpness");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, bToggleVisualization) == 52, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::bToggleVisualization");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Scale) == 56, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::Scale");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Spread) == 60, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::Spread");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Rolloff) == 64, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::Rolloff");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MinDistance) == 68, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::MinDistance");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MaxDistance) == 72, "Offset mismatch for UResonanceAudioSpatializationSourceSettings::MaxDistance");
