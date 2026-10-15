/**
 * decamp dumper generated SDK
 * Package: /Script/SoundCueTemplates
 */
#pragma once
#include "Basic.h"

// /Script/SoundCueTemplates.SoundCueCrossfadeInfo
// Kind: ScriptStruct; super: none
struct FSoundCueCrossfadeInfo
{
public:
    std::uint8_t DistanceInfo[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* Sound; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSoundCueCrossfadeInfo, DistanceInfo) == 0, "Offset mismatch for FSoundCueCrossfadeInfo::DistanceInfo");
static_assert(offsetof(FSoundCueCrossfadeInfo, Sound) == 24, "Offset mismatch for FSoundCueCrossfadeInfo::Sound");

// /Script/SoundCueTemplates.SoundCueTemplateQualitySettings
// Kind: ScriptStruct; super: none
struct FSoundCueTemplateQualitySettings
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::int32_t MaxConcatenatedVariations; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxRandomizedVariations; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxMixVariations; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSoundCueTemplateQualitySettings, DisplayName) == 0, "Offset mismatch for FSoundCueTemplateQualitySettings::DisplayName");
static_assert(offsetof(FSoundCueTemplateQualitySettings, MaxConcatenatedVariations) == 16, "Offset mismatch for FSoundCueTemplateQualitySettings::MaxConcatenatedVariations");
static_assert(offsetof(FSoundCueTemplateQualitySettings, MaxRandomizedVariations) == 20, "Offset mismatch for FSoundCueTemplateQualitySettings::MaxRandomizedVariations");
static_assert(offsetof(FSoundCueTemplateQualitySettings, MaxMixVariations) == 24, "Offset mismatch for FSoundCueTemplateQualitySettings::MaxMixVariations");

// /Script/SoundCueTemplates.SoundCueContainer
// Kind: Class; super: SoundCueTemplate
class USoundCueContainer
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* FirstNode; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    float VolumeMultiplier; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float PitchMultiplier; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AttenuationOverrides[0x290]; // 0x0138 (Size: 0x290, Type: StructProperty)
    float SubtitlePriority; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03CC
    std::uint8_t bExcludeFromRandomNodeBranchCulling; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    // 0x03D0 BoolProperty bHasPlayWhenSilent (shared storage)
    // 0x03D0 BoolProperty bOverrideAttenuation (shared storage)
    // 0x03D0 BoolProperty bPrimeOnLoad (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x03D1
    std::int32_t CookedQualityIndex; // 0x03D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USoundCueContainer, FirstNode) == 296, "Offset mismatch for USoundCueContainer::FirstNode");
static_assert(offsetof(USoundCueContainer, VolumeMultiplier) == 304, "Offset mismatch for USoundCueContainer::VolumeMultiplier");
static_assert(offsetof(USoundCueContainer, PitchMultiplier) == 308, "Offset mismatch for USoundCueContainer::PitchMultiplier");
static_assert(offsetof(USoundCueContainer, AttenuationOverrides) == 312, "Offset mismatch for USoundCueContainer::AttenuationOverrides");
static_assert(offsetof(USoundCueContainer, SubtitlePriority) == 968, "Offset mismatch for USoundCueContainer::SubtitlePriority");
static_assert(offsetof(USoundCueContainer, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for USoundCueContainer::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(USoundCueContainer, CookedQualityIndex) == 980, "Offset mismatch for USoundCueContainer::CookedQualityIndex");

// /Script/SoundCueTemplates.SoundCueDistanceCrossfade
// Kind: Class; super: SoundCueTemplate
class USoundCueDistanceCrossfade
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* FirstNode; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    float VolumeMultiplier; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float PitchMultiplier; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AttenuationOverrides[0x290]; // 0x0138 (Size: 0x290, Type: StructProperty)
    float SubtitlePriority; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03CC
    std::uint8_t bExcludeFromRandomNodeBranchCulling; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    // 0x03D0 BoolProperty bHasPlayWhenSilent (shared storage)
    // 0x03D0 BoolProperty bOverrideAttenuation (shared storage)
    // 0x03D0 BoolProperty bPrimeOnLoad (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x03D1
    std::int32_t CookedQualityIndex; // 0x03D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USoundCueDistanceCrossfade, FirstNode) == 296, "Offset mismatch for USoundCueDistanceCrossfade::FirstNode");
static_assert(offsetof(USoundCueDistanceCrossfade, VolumeMultiplier) == 304, "Offset mismatch for USoundCueDistanceCrossfade::VolumeMultiplier");
static_assert(offsetof(USoundCueDistanceCrossfade, PitchMultiplier) == 308, "Offset mismatch for USoundCueDistanceCrossfade::PitchMultiplier");
static_assert(offsetof(USoundCueDistanceCrossfade, AttenuationOverrides) == 312, "Offset mismatch for USoundCueDistanceCrossfade::AttenuationOverrides");
static_assert(offsetof(USoundCueDistanceCrossfade, SubtitlePriority) == 968, "Offset mismatch for USoundCueDistanceCrossfade::SubtitlePriority");
static_assert(offsetof(USoundCueDistanceCrossfade, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for USoundCueDistanceCrossfade::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(USoundCueDistanceCrossfade, CookedQualityIndex) == 980, "Offset mismatch for USoundCueDistanceCrossfade::CookedQualityIndex");

// /Script/SoundCueTemplates.SoundCueTemplate
// Kind: Class; super: SoundCue
class USoundCueTemplate
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* FirstNode; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    float VolumeMultiplier; // 0x0130 (Size: 0x4, Type: FloatProperty)
    float PitchMultiplier; // 0x0134 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AttenuationOverrides[0x290]; // 0x0138 (Size: 0x290, Type: StructProperty)
    float SubtitlePriority; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03CC
    std::uint8_t bExcludeFromRandomNodeBranchCulling; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    // 0x03D0 BoolProperty bHasPlayWhenSilent (shared storage)
    // 0x03D0 BoolProperty bOverrideAttenuation (shared storage)
    // 0x03D0 BoolProperty bPrimeOnLoad (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x03D1
    std::int32_t CookedQualityIndex; // 0x03D4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USoundCueTemplate, FirstNode) == 296, "Offset mismatch for USoundCueTemplate::FirstNode");
static_assert(offsetof(USoundCueTemplate, VolumeMultiplier) == 304, "Offset mismatch for USoundCueTemplate::VolumeMultiplier");
static_assert(offsetof(USoundCueTemplate, PitchMultiplier) == 308, "Offset mismatch for USoundCueTemplate::PitchMultiplier");
static_assert(offsetof(USoundCueTemplate, AttenuationOverrides) == 312, "Offset mismatch for USoundCueTemplate::AttenuationOverrides");
static_assert(offsetof(USoundCueTemplate, SubtitlePriority) == 968, "Offset mismatch for USoundCueTemplate::SubtitlePriority");
static_assert(offsetof(USoundCueTemplate, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for USoundCueTemplate::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(USoundCueTemplate, CookedQualityIndex) == 980, "Offset mismatch for USoundCueTemplate::CookedQualityIndex");

// /Script/SoundCueTemplates.SoundCueTemplateSettings
// Kind: Class; super: DeveloperSettings
class USoundCueTemplateSettings
{
public:
    std::uint8_t Opaque[1];
};
