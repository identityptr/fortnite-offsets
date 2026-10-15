/**
 * decamp dumper generated SDK
 * Package: /Script/FortSoundCueTemplates
 */
#pragma once
#include "Basic.h"

// /Script/FortSoundCueTemplates.FortBusPair
// Kind: ScriptStruct; super: none
struct FFortBusPair
{
public:
    void* SourceBus; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AudioBus; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float SendAmount; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortBusPair, SourceBus) == 0, "Offset mismatch for FFortBusPair::SourceBus");
static_assert(offsetof(FFortBusPair, AudioBus) == 8, "Offset mismatch for FFortBusPair::AudioBus");
static_assert(offsetof(FFortBusPair, SendAmount) == 16, "Offset mismatch for FFortBusPair::SendAmount");

// /Script/FortSoundCueTemplates.FortContinuousModulatorConfig
// Kind: ScriptStruct; super: none
struct FFortContinuousModulatorConfig
{
public:
    std::uint8_t VolumeRange[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchRange[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t VolumeMode; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PitchMode; // 0x0021 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortContinuousModulatorConfig, VolumeRange) == 0, "Offset mismatch for FFortContinuousModulatorConfig::VolumeRange");
static_assert(offsetof(FFortContinuousModulatorConfig, PitchRange) == 16, "Offset mismatch for FFortContinuousModulatorConfig::PitchRange");
static_assert(offsetof(FFortContinuousModulatorConfig, VolumeMode) == 32, "Offset mismatch for FFortContinuousModulatorConfig::VolumeMode");
static_assert(offsetof(FFortContinuousModulatorConfig, PitchMode) == 33, "Offset mismatch for FFortContinuousModulatorConfig::PitchMode");

// /Script/FortSoundCueTemplates.FortSubmixPair
// Kind: ScriptStruct; super: none
struct FFortSubmixPair
{
public:
    void* Submix; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float SendAmount; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortSubmixPair, Submix) == 0, "Offset mismatch for FFortSubmixPair::Submix");
static_assert(offsetof(FFortSubmixPair, SendAmount) == 8, "Offset mismatch for FFortSubmixPair::SendAmount");

// /Script/FortSoundCueTemplates.GliderThrustData
// Kind: ScriptStruct; super: none
struct FGliderThrustData
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t PitchOutput[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t VolumeOutput[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    void* Sound; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Settings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGliderThrustData, ParameterName) == 0, "Offset mismatch for FGliderThrustData::ParameterName");
static_assert(offsetof(FGliderThrustData, PitchOutput) == 8, "Offset mismatch for FGliderThrustData::PitchOutput");
static_assert(offsetof(FGliderThrustData, VolumeOutput) == 24, "Offset mismatch for FGliderThrustData::VolumeOutput");
static_assert(offsetof(FGliderThrustData, Sound) == 40, "Offset mismatch for FGliderThrustData::Sound");
static_assert(offsetof(FGliderThrustData, Settings) == 48, "Offset mismatch for FGliderThrustData::Settings");

// /Script/FortSoundCueTemplates.PhysicsImpactData
// Kind: ScriptStruct; super: none
struct FPhysicsImpactData
{
public:
    std::uint8_t VolumeOutput[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchOutput[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    TArray<void*> Variations; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsImpactData, VolumeOutput) == 0, "Offset mismatch for FPhysicsImpactData::VolumeOutput");
static_assert(offsetof(FPhysicsImpactData, PitchOutput) == 16, "Offset mismatch for FPhysicsImpactData::PitchOutput");
static_assert(offsetof(FPhysicsImpactData, Settings) == 32, "Offset mismatch for FPhysicsImpactData::Settings");
static_assert(offsetof(FPhysicsImpactData, Variations) == 72, "Offset mismatch for FPhysicsImpactData::Variations");

// /Script/FortSoundCueTemplates.PhysicsStateData
// Kind: ScriptStruct; super: none
struct FPhysicsStateData
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t VolumeOutput[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t PitchOutput[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t Settings[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t CrossfadeInputSlow[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    void* SlowLoop; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CrossfadeInputFast[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    void* FastLoop; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPhysicsStateData, ParameterName) == 0, "Offset mismatch for FPhysicsStateData::ParameterName");
static_assert(offsetof(FPhysicsStateData, VolumeOutput) == 8, "Offset mismatch for FPhysicsStateData::VolumeOutput");
static_assert(offsetof(FPhysicsStateData, PitchOutput) == 24, "Offset mismatch for FPhysicsStateData::PitchOutput");
static_assert(offsetof(FPhysicsStateData, Settings) == 40, "Offset mismatch for FPhysicsStateData::Settings");
static_assert(offsetof(FPhysicsStateData, CrossfadeInputSlow) == 80, "Offset mismatch for FPhysicsStateData::CrossfadeInputSlow");
static_assert(offsetof(FPhysicsStateData, SlowLoop) == 104, "Offset mismatch for FPhysicsStateData::SlowLoop");
static_assert(offsetof(FPhysicsStateData, CrossfadeInputFast) == 112, "Offset mismatch for FPhysicsStateData::CrossfadeInputFast");
static_assert(offsetof(FPhysicsStateData, FastLoop) == 136, "Offset mismatch for FPhysicsStateData::FastLoop");

// /Script/FortSoundCueTemplates.EmoteBase
// Kind: Class; super: FortSoundCueTemplateBase
class UEmoteBase
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

static_assert(offsetof(UEmoteBase, FirstNode) == 296, "Offset mismatch for UEmoteBase::FirstNode");
static_assert(offsetof(UEmoteBase, VolumeMultiplier) == 304, "Offset mismatch for UEmoteBase::VolumeMultiplier");
static_assert(offsetof(UEmoteBase, PitchMultiplier) == 308, "Offset mismatch for UEmoteBase::PitchMultiplier");
static_assert(offsetof(UEmoteBase, AttenuationOverrides) == 312, "Offset mismatch for UEmoteBase::AttenuationOverrides");
static_assert(offsetof(UEmoteBase, SubtitlePriority) == 968, "Offset mismatch for UEmoteBase::SubtitlePriority");
static_assert(offsetof(UEmoteBase, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UEmoteBase::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UEmoteBase, CookedQualityIndex) == 980, "Offset mismatch for UEmoteBase::CookedQualityIndex");

// /Script/FortSoundCueTemplates.EmoteFoley
// Kind: Class; super: EmoteBase
class UEmoteFoley
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

static_assert(offsetof(UEmoteFoley, FirstNode) == 296, "Offset mismatch for UEmoteFoley::FirstNode");
static_assert(offsetof(UEmoteFoley, VolumeMultiplier) == 304, "Offset mismatch for UEmoteFoley::VolumeMultiplier");
static_assert(offsetof(UEmoteFoley, PitchMultiplier) == 308, "Offset mismatch for UEmoteFoley::PitchMultiplier");
static_assert(offsetof(UEmoteFoley, AttenuationOverrides) == 312, "Offset mismatch for UEmoteFoley::AttenuationOverrides");
static_assert(offsetof(UEmoteFoley, SubtitlePriority) == 968, "Offset mismatch for UEmoteFoley::SubtitlePriority");
static_assert(offsetof(UEmoteFoley, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UEmoteFoley::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UEmoteFoley, CookedQualityIndex) == 980, "Offset mismatch for UEmoteFoley::CookedQualityIndex");

// /Script/FortSoundCueTemplates.EmoteMusic
// Kind: Class; super: EmoteBase
class UEmoteMusic
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

static_assert(offsetof(UEmoteMusic, FirstNode) == 296, "Offset mismatch for UEmoteMusic::FirstNode");
static_assert(offsetof(UEmoteMusic, VolumeMultiplier) == 304, "Offset mismatch for UEmoteMusic::VolumeMultiplier");
static_assert(offsetof(UEmoteMusic, PitchMultiplier) == 308, "Offset mismatch for UEmoteMusic::PitchMultiplier");
static_assert(offsetof(UEmoteMusic, AttenuationOverrides) == 312, "Offset mismatch for UEmoteMusic::AttenuationOverrides");
static_assert(offsetof(UEmoteMusic, SubtitlePriority) == 968, "Offset mismatch for UEmoteMusic::SubtitlePriority");
static_assert(offsetof(UEmoteMusic, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UEmoteMusic::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UEmoteMusic, CookedQualityIndex) == 980, "Offset mismatch for UEmoteMusic::CookedQualityIndex");

// /Script/FortSoundCueTemplates.EmoteMusic3P
// Kind: Class; super: EmoteBase
class UEmoteMusic3P
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

static_assert(offsetof(UEmoteMusic3P, FirstNode) == 296, "Offset mismatch for UEmoteMusic3P::FirstNode");
static_assert(offsetof(UEmoteMusic3P, VolumeMultiplier) == 304, "Offset mismatch for UEmoteMusic3P::VolumeMultiplier");
static_assert(offsetof(UEmoteMusic3P, PitchMultiplier) == 308, "Offset mismatch for UEmoteMusic3P::PitchMultiplier");
static_assert(offsetof(UEmoteMusic3P, AttenuationOverrides) == 312, "Offset mismatch for UEmoteMusic3P::AttenuationOverrides");
static_assert(offsetof(UEmoteMusic3P, SubtitlePriority) == 968, "Offset mismatch for UEmoteMusic3P::SubtitlePriority");
static_assert(offsetof(UEmoteMusic3P, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UEmoteMusic3P::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UEmoteMusic3P, CookedQualityIndex) == 980, "Offset mismatch for UEmoteMusic3P::CookedQualityIndex");

// /Script/FortSoundCueTemplates.FootstepFoley
// Kind: Class; super: PlayerFoley
class UFootstepFoley
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

static_assert(offsetof(UFootstepFoley, FirstNode) == 296, "Offset mismatch for UFootstepFoley::FirstNode");
static_assert(offsetof(UFootstepFoley, VolumeMultiplier) == 304, "Offset mismatch for UFootstepFoley::VolumeMultiplier");
static_assert(offsetof(UFootstepFoley, PitchMultiplier) == 308, "Offset mismatch for UFootstepFoley::PitchMultiplier");
static_assert(offsetof(UFootstepFoley, AttenuationOverrides) == 312, "Offset mismatch for UFootstepFoley::AttenuationOverrides");
static_assert(offsetof(UFootstepFoley, SubtitlePriority) == 968, "Offset mismatch for UFootstepFoley::SubtitlePriority");
static_assert(offsetof(UFootstepFoley, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UFootstepFoley::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UFootstepFoley, CookedQualityIndex) == 980, "Offset mismatch for UFootstepFoley::CookedQualityIndex");

// /Script/FortSoundCueTemplates.FortSoundCueTemplateBase
// Kind: Class; super: SoundCueTemplate
class UFortSoundCueTemplateBase
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

static_assert(offsetof(UFortSoundCueTemplateBase, FirstNode) == 296, "Offset mismatch for UFortSoundCueTemplateBase::FirstNode");
static_assert(offsetof(UFortSoundCueTemplateBase, VolumeMultiplier) == 304, "Offset mismatch for UFortSoundCueTemplateBase::VolumeMultiplier");
static_assert(offsetof(UFortSoundCueTemplateBase, PitchMultiplier) == 308, "Offset mismatch for UFortSoundCueTemplateBase::PitchMultiplier");
static_assert(offsetof(UFortSoundCueTemplateBase, AttenuationOverrides) == 312, "Offset mismatch for UFortSoundCueTemplateBase::AttenuationOverrides");
static_assert(offsetof(UFortSoundCueTemplateBase, SubtitlePriority) == 968, "Offset mismatch for UFortSoundCueTemplateBase::SubtitlePriority");
static_assert(offsetof(UFortSoundCueTemplateBase, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UFortSoundCueTemplateBase::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UFortSoundCueTemplateBase, CookedQualityIndex) == 980, "Offset mismatch for UFortSoundCueTemplateBase::CookedQualityIndex");

// /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
// Kind: Class; super: DataAsset
class UFortSoundCueTemplateDefaultSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> TemplateDefaults; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortSoundCueTemplateDefaultSettings, TemplateDefaults) == 40, "Offset mismatch for UFortSoundCueTemplateDefaultSettings::TemplateDefaults");

// /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaults
// Kind: Class; super: DataAsset
class UFortSoundCueTemplateDefaults
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SoundClass; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* Attenuation; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* Concurrency; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    float VolumeMultiplier; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float PitchMultiplier; // 0x0044 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SubmixSends; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreEffectBusSends; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PostEffectBusSends; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* LicensedTrackAlternative; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* LicensedSubmix; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSoundCueTemplateDefaults, SoundClass) == 40, "Offset mismatch for UFortSoundCueTemplateDefaults::SoundClass");
static_assert(offsetof(UFortSoundCueTemplateDefaults, Attenuation) == 48, "Offset mismatch for UFortSoundCueTemplateDefaults::Attenuation");
static_assert(offsetof(UFortSoundCueTemplateDefaults, Concurrency) == 56, "Offset mismatch for UFortSoundCueTemplateDefaults::Concurrency");
static_assert(offsetof(UFortSoundCueTemplateDefaults, VolumeMultiplier) == 64, "Offset mismatch for UFortSoundCueTemplateDefaults::VolumeMultiplier");
static_assert(offsetof(UFortSoundCueTemplateDefaults, PitchMultiplier) == 68, "Offset mismatch for UFortSoundCueTemplateDefaults::PitchMultiplier");
static_assert(offsetof(UFortSoundCueTemplateDefaults, SubmixSends) == 72, "Offset mismatch for UFortSoundCueTemplateDefaults::SubmixSends");
static_assert(offsetof(UFortSoundCueTemplateDefaults, PreEffectBusSends) == 88, "Offset mismatch for UFortSoundCueTemplateDefaults::PreEffectBusSends");
static_assert(offsetof(UFortSoundCueTemplateDefaults, PostEffectBusSends) == 104, "Offset mismatch for UFortSoundCueTemplateDefaults::PostEffectBusSends");
static_assert(offsetof(UFortSoundCueTemplateDefaults, LicensedTrackAlternative) == 120, "Offset mismatch for UFortSoundCueTemplateDefaults::LicensedTrackAlternative");
static_assert(offsetof(UFortSoundCueTemplateDefaults, LicensedSubmix) == 128, "Offset mismatch for UFortSoundCueTemplateDefaults::LicensedSubmix");

// /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings
// Kind: Class; super: DeveloperSettings
class UFortSoundCueTemplateSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftObjectPtr<void> DefaultTemplateSettings; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortSoundCueTemplateSettings, DefaultTemplateSettings) == 48, "Offset mismatch for UFortSoundCueTemplateSettings::DefaultTemplateSettings");

// /Script/FortSoundCueTemplates.FortSoundCueTemplateSimple
// Kind: Class; super: FortSoundCueTemplateBase
class UFortSoundCueTemplateSimple
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

static_assert(offsetof(UFortSoundCueTemplateSimple, FirstNode) == 296, "Offset mismatch for UFortSoundCueTemplateSimple::FirstNode");
static_assert(offsetof(UFortSoundCueTemplateSimple, VolumeMultiplier) == 304, "Offset mismatch for UFortSoundCueTemplateSimple::VolumeMultiplier");
static_assert(offsetof(UFortSoundCueTemplateSimple, PitchMultiplier) == 308, "Offset mismatch for UFortSoundCueTemplateSimple::PitchMultiplier");
static_assert(offsetof(UFortSoundCueTemplateSimple, AttenuationOverrides) == 312, "Offset mismatch for UFortSoundCueTemplateSimple::AttenuationOverrides");
static_assert(offsetof(UFortSoundCueTemplateSimple, SubtitlePriority) == 968, "Offset mismatch for UFortSoundCueTemplateSimple::SubtitlePriority");
static_assert(offsetof(UFortSoundCueTemplateSimple, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UFortSoundCueTemplateSimple::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UFortSoundCueTemplateSimple, CookedQualityIndex) == 980, "Offset mismatch for UFortSoundCueTemplateSimple::CookedQualityIndex");

// /Script/FortSoundCueTemplates.GliderClose
// Kind: Class; super: FortSoundCueTemplateSimple
class UGliderClose
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

static_assert(offsetof(UGliderClose, FirstNode) == 296, "Offset mismatch for UGliderClose::FirstNode");
static_assert(offsetof(UGliderClose, VolumeMultiplier) == 304, "Offset mismatch for UGliderClose::VolumeMultiplier");
static_assert(offsetof(UGliderClose, PitchMultiplier) == 308, "Offset mismatch for UGliderClose::PitchMultiplier");
static_assert(offsetof(UGliderClose, AttenuationOverrides) == 312, "Offset mismatch for UGliderClose::AttenuationOverrides");
static_assert(offsetof(UGliderClose, SubtitlePriority) == 968, "Offset mismatch for UGliderClose::SubtitlePriority");
static_assert(offsetof(UGliderClose, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UGliderClose::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UGliderClose, CookedQualityIndex) == 980, "Offset mismatch for UGliderClose::CookedQualityIndex");

// /Script/FortSoundCueTemplates.GliderOpen
// Kind: Class; super: FortSoundCueTemplateSimple
class UGliderOpen
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

static_assert(offsetof(UGliderOpen, FirstNode) == 296, "Offset mismatch for UGliderOpen::FirstNode");
static_assert(offsetof(UGliderOpen, VolumeMultiplier) == 304, "Offset mismatch for UGliderOpen::VolumeMultiplier");
static_assert(offsetof(UGliderOpen, PitchMultiplier) == 308, "Offset mismatch for UGliderOpen::PitchMultiplier");
static_assert(offsetof(UGliderOpen, AttenuationOverrides) == 312, "Offset mismatch for UGliderOpen::AttenuationOverrides");
static_assert(offsetof(UGliderOpen, SubtitlePriority) == 968, "Offset mismatch for UGliderOpen::SubtitlePriority");
static_assert(offsetof(UGliderOpen, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UGliderOpen::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UGliderOpen, CookedQualityIndex) == 980, "Offset mismatch for UGliderOpen::CookedQualityIndex");

// /Script/FortSoundCueTemplates.GliderThrustLoop
// Kind: Class; super: FortSoundCueTemplateBase
class UGliderThrustLoop
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

static_assert(offsetof(UGliderThrustLoop, FirstNode) == 296, "Offset mismatch for UGliderThrustLoop::FirstNode");
static_assert(offsetof(UGliderThrustLoop, VolumeMultiplier) == 304, "Offset mismatch for UGliderThrustLoop::VolumeMultiplier");
static_assert(offsetof(UGliderThrustLoop, PitchMultiplier) == 308, "Offset mismatch for UGliderThrustLoop::PitchMultiplier");
static_assert(offsetof(UGliderThrustLoop, AttenuationOverrides) == 312, "Offset mismatch for UGliderThrustLoop::AttenuationOverrides");
static_assert(offsetof(UGliderThrustLoop, SubtitlePriority) == 968, "Offset mismatch for UGliderThrustLoop::SubtitlePriority");
static_assert(offsetof(UGliderThrustLoop, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UGliderThrustLoop::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UGliderThrustLoop, CookedQualityIndex) == 980, "Offset mismatch for UGliderThrustLoop::CookedQualityIndex");

// /Script/FortSoundCueTemplates.GliderThrustSCTDefaults
// Kind: Class; super: FortSoundCueTemplateDefaults
class UGliderThrustSCTDefaults
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t Forward[0x58]; // 0x0088 (Size: 0x58, Type: StructProperty)
    std::uint8_t Sideways[0x58]; // 0x00E0 (Size: 0x58, Type: StructProperty)
    std::uint8_t Backwards[0x58]; // 0x0138 (Size: 0x58, Type: StructProperty)
    std::uint8_t AnyDirection[0x1]; // 0x0190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGliderThrustSCTDefaults, Forward) == 136, "Offset mismatch for UGliderThrustSCTDefaults::Forward");
static_assert(offsetof(UGliderThrustSCTDefaults, Sideways) == 224, "Offset mismatch for UGliderThrustSCTDefaults::Sideways");
static_assert(offsetof(UGliderThrustSCTDefaults, Backwards) == 312, "Offset mismatch for UGliderThrustSCTDefaults::Backwards");
static_assert(offsetof(UGliderThrustSCTDefaults, AnyDirection) == 400, "Offset mismatch for UGliderThrustSCTDefaults::AnyDirection");

// /Script/FortSoundCueTemplates.GliderThrustStart
// Kind: Class; super: FortSoundCueTemplateBase
class UGliderThrustStart
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

static_assert(offsetof(UGliderThrustStart, FirstNode) == 296, "Offset mismatch for UGliderThrustStart::FirstNode");
static_assert(offsetof(UGliderThrustStart, VolumeMultiplier) == 304, "Offset mismatch for UGliderThrustStart::VolumeMultiplier");
static_assert(offsetof(UGliderThrustStart, PitchMultiplier) == 308, "Offset mismatch for UGliderThrustStart::PitchMultiplier");
static_assert(offsetof(UGliderThrustStart, AttenuationOverrides) == 312, "Offset mismatch for UGliderThrustStart::AttenuationOverrides");
static_assert(offsetof(UGliderThrustStart, SubtitlePriority) == 968, "Offset mismatch for UGliderThrustStart::SubtitlePriority");
static_assert(offsetof(UGliderThrustStart, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UGliderThrustStart::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UGliderThrustStart, CookedQualityIndex) == 980, "Offset mismatch for UGliderThrustStart::CookedQualityIndex");

// /Script/FortSoundCueTemplates.MusicPack
// Kind: Class; super: FortSoundCueTemplateBase
class UMusicPack
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

static_assert(offsetof(UMusicPack, FirstNode) == 296, "Offset mismatch for UMusicPack::FirstNode");
static_assert(offsetof(UMusicPack, VolumeMultiplier) == 304, "Offset mismatch for UMusicPack::VolumeMultiplier");
static_assert(offsetof(UMusicPack, PitchMultiplier) == 308, "Offset mismatch for UMusicPack::PitchMultiplier");
static_assert(offsetof(UMusicPack, AttenuationOverrides) == 312, "Offset mismatch for UMusicPack::AttenuationOverrides");
static_assert(offsetof(UMusicPack, SubtitlePriority) == 968, "Offset mismatch for UMusicPack::SubtitlePriority");
static_assert(offsetof(UMusicPack, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UMusicPack::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UMusicPack, CookedQualityIndex) == 980, "Offset mismatch for UMusicPack::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PhysicsImpact
// Kind: Class; super: FortSoundCueTemplateBase
class UPhysicsImpact
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

static_assert(offsetof(UPhysicsImpact, FirstNode) == 296, "Offset mismatch for UPhysicsImpact::FirstNode");
static_assert(offsetof(UPhysicsImpact, VolumeMultiplier) == 304, "Offset mismatch for UPhysicsImpact::VolumeMultiplier");
static_assert(offsetof(UPhysicsImpact, PitchMultiplier) == 308, "Offset mismatch for UPhysicsImpact::PitchMultiplier");
static_assert(offsetof(UPhysicsImpact, AttenuationOverrides) == 312, "Offset mismatch for UPhysicsImpact::AttenuationOverrides");
static_assert(offsetof(UPhysicsImpact, SubtitlePriority) == 968, "Offset mismatch for UPhysicsImpact::SubtitlePriority");
static_assert(offsetof(UPhysicsImpact, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPhysicsImpact::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPhysicsImpact, CookedQualityIndex) == 980, "Offset mismatch for UPhysicsImpact::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PhysicsImpactSCTDefaults
// Kind: Class; super: FortSoundCueTemplateDefaults
class UPhysicsImpactSCTDefaults
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t ImpactTypeParameterName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t StrengthParameterName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t Light[0x58]; // 0x0090 (Size: 0x58, Type: StructProperty)
    std::uint8_t Medium[0x58]; // 0x00E8 (Size: 0x58, Type: StructProperty)
    std::uint8_t Heavy[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPhysicsImpactSCTDefaults, ImpactTypeParameterName) == 136, "Offset mismatch for UPhysicsImpactSCTDefaults::ImpactTypeParameterName");
static_assert(offsetof(UPhysicsImpactSCTDefaults, StrengthParameterName) == 140, "Offset mismatch for UPhysicsImpactSCTDefaults::StrengthParameterName");
static_assert(offsetof(UPhysicsImpactSCTDefaults, Light) == 144, "Offset mismatch for UPhysicsImpactSCTDefaults::Light");
static_assert(offsetof(UPhysicsImpactSCTDefaults, Medium) == 232, "Offset mismatch for UPhysicsImpactSCTDefaults::Medium");
static_assert(offsetof(UPhysicsImpactSCTDefaults, Heavy) == 320, "Offset mismatch for UPhysicsImpactSCTDefaults::Heavy");

// /Script/FortSoundCueTemplates.PhysicsStateLoop
// Kind: Class; super: FortSoundCueTemplateBase
class UPhysicsStateLoop
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

static_assert(offsetof(UPhysicsStateLoop, FirstNode) == 296, "Offset mismatch for UPhysicsStateLoop::FirstNode");
static_assert(offsetof(UPhysicsStateLoop, VolumeMultiplier) == 304, "Offset mismatch for UPhysicsStateLoop::VolumeMultiplier");
static_assert(offsetof(UPhysicsStateLoop, PitchMultiplier) == 308, "Offset mismatch for UPhysicsStateLoop::PitchMultiplier");
static_assert(offsetof(UPhysicsStateLoop, AttenuationOverrides) == 312, "Offset mismatch for UPhysicsStateLoop::AttenuationOverrides");
static_assert(offsetof(UPhysicsStateLoop, SubtitlePriority) == 968, "Offset mismatch for UPhysicsStateLoop::SubtitlePriority");
static_assert(offsetof(UPhysicsStateLoop, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPhysicsStateLoop::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPhysicsStateLoop, CookedQualityIndex) == 980, "Offset mismatch for UPhysicsStateLoop::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PhysicsStateSCTDefaults
// Kind: Class; super: FortSoundCueTemplateDefaults
class UPhysicsStateSCTDefaults
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    FName SpeedParameterName; // 0x0088 (Size: 0x8, Type: NameProperty)
    std::uint8_t Rolling[0x90]; // 0x0090 (Size: 0x90, Type: StructProperty)
    std::uint8_t Sliding[0x90]; // 0x0120 (Size: 0x90, Type: StructProperty)
    std::uint8_t Flying[0x90]; // 0x01B0 (Size: 0x90, Type: StructProperty)
    std::uint8_t Floating[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPhysicsStateSCTDefaults, SpeedParameterName) == 136, "Offset mismatch for UPhysicsStateSCTDefaults::SpeedParameterName");
static_assert(offsetof(UPhysicsStateSCTDefaults, Rolling) == 144, "Offset mismatch for UPhysicsStateSCTDefaults::Rolling");
static_assert(offsetof(UPhysicsStateSCTDefaults, Sliding) == 288, "Offset mismatch for UPhysicsStateSCTDefaults::Sliding");
static_assert(offsetof(UPhysicsStateSCTDefaults, Flying) == 432, "Offset mismatch for UPhysicsStateSCTDefaults::Flying");
static_assert(offsetof(UPhysicsStateSCTDefaults, Floating) == 576, "Offset mismatch for UPhysicsStateSCTDefaults::Floating");

// /Script/FortSoundCueTemplates.PickaxeBase
// Kind: Class; super: FortSoundCueTemplateBase
class UPickaxeBase
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

static_assert(offsetof(UPickaxeBase, FirstNode) == 296, "Offset mismatch for UPickaxeBase::FirstNode");
static_assert(offsetof(UPickaxeBase, VolumeMultiplier) == 304, "Offset mismatch for UPickaxeBase::VolumeMultiplier");
static_assert(offsetof(UPickaxeBase, PitchMultiplier) == 308, "Offset mismatch for UPickaxeBase::PitchMultiplier");
static_assert(offsetof(UPickaxeBase, AttenuationOverrides) == 312, "Offset mismatch for UPickaxeBase::AttenuationOverrides");
static_assert(offsetof(UPickaxeBase, SubtitlePriority) == 968, "Offset mismatch for UPickaxeBase::SubtitlePriority");
static_assert(offsetof(UPickaxeBase, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPickaxeBase::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPickaxeBase, CookedQualityIndex) == 980, "Offset mismatch for UPickaxeBase::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PickaxeImpactEnemy
// Kind: Class; super: FortSoundCueTemplateSimple
class UPickaxeImpactEnemy
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

static_assert(offsetof(UPickaxeImpactEnemy, FirstNode) == 296, "Offset mismatch for UPickaxeImpactEnemy::FirstNode");
static_assert(offsetof(UPickaxeImpactEnemy, VolumeMultiplier) == 304, "Offset mismatch for UPickaxeImpactEnemy::VolumeMultiplier");
static_assert(offsetof(UPickaxeImpactEnemy, PitchMultiplier) == 308, "Offset mismatch for UPickaxeImpactEnemy::PitchMultiplier");
static_assert(offsetof(UPickaxeImpactEnemy, AttenuationOverrides) == 312, "Offset mismatch for UPickaxeImpactEnemy::AttenuationOverrides");
static_assert(offsetof(UPickaxeImpactEnemy, SubtitlePriority) == 968, "Offset mismatch for UPickaxeImpactEnemy::SubtitlePriority");
static_assert(offsetof(UPickaxeImpactEnemy, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPickaxeImpactEnemy::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPickaxeImpactEnemy, CookedQualityIndex) == 980, "Offset mismatch for UPickaxeImpactEnemy::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PickaxeReady
// Kind: Class; super: PickaxeBase
class UPickaxeReady
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

static_assert(offsetof(UPickaxeReady, FirstNode) == 296, "Offset mismatch for UPickaxeReady::FirstNode");
static_assert(offsetof(UPickaxeReady, VolumeMultiplier) == 304, "Offset mismatch for UPickaxeReady::VolumeMultiplier");
static_assert(offsetof(UPickaxeReady, PitchMultiplier) == 308, "Offset mismatch for UPickaxeReady::PitchMultiplier");
static_assert(offsetof(UPickaxeReady, AttenuationOverrides) == 312, "Offset mismatch for UPickaxeReady::AttenuationOverrides");
static_assert(offsetof(UPickaxeReady, SubtitlePriority) == 968, "Offset mismatch for UPickaxeReady::SubtitlePriority");
static_assert(offsetof(UPickaxeReady, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPickaxeReady::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPickaxeReady, CookedQualityIndex) == 980, "Offset mismatch for UPickaxeReady::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PickaxeSCTDefaults
// Kind: Class; super: FortSoundCueTemplateDefaults
class UPickaxeSCTDefaults
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* CloseAttenuation; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* DistantAttenuation; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DistantVariations; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPickaxeSCTDefaults, CloseAttenuation) == 136, "Offset mismatch for UPickaxeSCTDefaults::CloseAttenuation");
static_assert(offsetof(UPickaxeSCTDefaults, DistantAttenuation) == 144, "Offset mismatch for UPickaxeSCTDefaults::DistantAttenuation");
static_assert(offsetof(UPickaxeSCTDefaults, DistantVariations) == 152, "Offset mismatch for UPickaxeSCTDefaults::DistantVariations");

// /Script/FortSoundCueTemplates.PickaxeSwing
// Kind: Class; super: PickaxeBase
class UPickaxeSwing
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

static_assert(offsetof(UPickaxeSwing, FirstNode) == 296, "Offset mismatch for UPickaxeSwing::FirstNode");
static_assert(offsetof(UPickaxeSwing, VolumeMultiplier) == 304, "Offset mismatch for UPickaxeSwing::VolumeMultiplier");
static_assert(offsetof(UPickaxeSwing, PitchMultiplier) == 308, "Offset mismatch for UPickaxeSwing::PitchMultiplier");
static_assert(offsetof(UPickaxeSwing, AttenuationOverrides) == 312, "Offset mismatch for UPickaxeSwing::AttenuationOverrides");
static_assert(offsetof(UPickaxeSwing, SubtitlePriority) == 968, "Offset mismatch for UPickaxeSwing::SubtitlePriority");
static_assert(offsetof(UPickaxeSwing, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPickaxeSwing::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPickaxeSwing, CookedQualityIndex) == 980, "Offset mismatch for UPickaxeSwing::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PlayerFoley
// Kind: Class; super: PlayerFoleyBase
class UPlayerFoley
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

static_assert(offsetof(UPlayerFoley, FirstNode) == 296, "Offset mismatch for UPlayerFoley::FirstNode");
static_assert(offsetof(UPlayerFoley, VolumeMultiplier) == 304, "Offset mismatch for UPlayerFoley::VolumeMultiplier");
static_assert(offsetof(UPlayerFoley, PitchMultiplier) == 308, "Offset mismatch for UPlayerFoley::PitchMultiplier");
static_assert(offsetof(UPlayerFoley, AttenuationOverrides) == 312, "Offset mismatch for UPlayerFoley::AttenuationOverrides");
static_assert(offsetof(UPlayerFoley, SubtitlePriority) == 968, "Offset mismatch for UPlayerFoley::SubtitlePriority");
static_assert(offsetof(UPlayerFoley, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPlayerFoley::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPlayerFoley, CookedQualityIndex) == 980, "Offset mismatch for UPlayerFoley::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PlayerFoleyBase
// Kind: Class; super: FortSoundCueTemplateBase
class UPlayerFoleyBase
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

static_assert(offsetof(UPlayerFoleyBase, FirstNode) == 296, "Offset mismatch for UPlayerFoleyBase::FirstNode");
static_assert(offsetof(UPlayerFoleyBase, VolumeMultiplier) == 304, "Offset mismatch for UPlayerFoleyBase::VolumeMultiplier");
static_assert(offsetof(UPlayerFoleyBase, PitchMultiplier) == 308, "Offset mismatch for UPlayerFoleyBase::PitchMultiplier");
static_assert(offsetof(UPlayerFoleyBase, AttenuationOverrides) == 312, "Offset mismatch for UPlayerFoleyBase::AttenuationOverrides");
static_assert(offsetof(UPlayerFoleyBase, SubtitlePriority) == 968, "Offset mismatch for UPlayerFoleyBase::SubtitlePriority");
static_assert(offsetof(UPlayerFoleyBase, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UPlayerFoleyBase::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UPlayerFoleyBase, CookedQualityIndex) == 980, "Offset mismatch for UPlayerFoleyBase::CookedQualityIndex");

// /Script/FortSoundCueTemplates.PlayerFoleyDefaults
// Kind: Class; super: FortSoundCueTemplateDefaults
class UPlayerFoleyDefaults
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* LocalPlayerSoundClass; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* TeammateSoundClass; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* HostileSoundClass; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayerAttenuation; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* AboveAttenuation; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* BelowAttenuation; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* ParallelAttenuation; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ElevationCrossfadeDistances; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayerFoleyDefaults, LocalPlayerSoundClass) == 136, "Offset mismatch for UPlayerFoleyDefaults::LocalPlayerSoundClass");
static_assert(offsetof(UPlayerFoleyDefaults, TeammateSoundClass) == 144, "Offset mismatch for UPlayerFoleyDefaults::TeammateSoundClass");
static_assert(offsetof(UPlayerFoleyDefaults, HostileSoundClass) == 152, "Offset mismatch for UPlayerFoleyDefaults::HostileSoundClass");
static_assert(offsetof(UPlayerFoleyDefaults, LocalPlayerAttenuation) == 160, "Offset mismatch for UPlayerFoleyDefaults::LocalPlayerAttenuation");
static_assert(offsetof(UPlayerFoleyDefaults, AboveAttenuation) == 168, "Offset mismatch for UPlayerFoleyDefaults::AboveAttenuation");
static_assert(offsetof(UPlayerFoleyDefaults, BelowAttenuation) == 176, "Offset mismatch for UPlayerFoleyDefaults::BelowAttenuation");
static_assert(offsetof(UPlayerFoleyDefaults, ParallelAttenuation) == 184, "Offset mismatch for UPlayerFoleyDefaults::ParallelAttenuation");
static_assert(offsetof(UPlayerFoleyDefaults, ElevationCrossfadeDistances) == 192, "Offset mismatch for UPlayerFoleyDefaults::ElevationCrossfadeDistances");

// /Script/FortSoundCueTemplates.WeaponLowAmmo
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponLowAmmo
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

static_assert(offsetof(UWeaponLowAmmo, FirstNode) == 296, "Offset mismatch for UWeaponLowAmmo::FirstNode");
static_assert(offsetof(UWeaponLowAmmo, VolumeMultiplier) == 304, "Offset mismatch for UWeaponLowAmmo::VolumeMultiplier");
static_assert(offsetof(UWeaponLowAmmo, PitchMultiplier) == 308, "Offset mismatch for UWeaponLowAmmo::PitchMultiplier");
static_assert(offsetof(UWeaponLowAmmo, AttenuationOverrides) == 312, "Offset mismatch for UWeaponLowAmmo::AttenuationOverrides");
static_assert(offsetof(UWeaponLowAmmo, SubtitlePriority) == 968, "Offset mismatch for UWeaponLowAmmo::SubtitlePriority");
static_assert(offsetof(UWeaponLowAmmo, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponLowAmmo::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponLowAmmo, CookedQualityIndex) == 980, "Offset mismatch for UWeaponLowAmmo::CookedQualityIndex");

// /Script/FortSoundCueTemplates.WeaponOutOfAmmo
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponOutOfAmmo
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

static_assert(offsetof(UWeaponOutOfAmmo, FirstNode) == 296, "Offset mismatch for UWeaponOutOfAmmo::FirstNode");
static_assert(offsetof(UWeaponOutOfAmmo, VolumeMultiplier) == 304, "Offset mismatch for UWeaponOutOfAmmo::VolumeMultiplier");
static_assert(offsetof(UWeaponOutOfAmmo, PitchMultiplier) == 308, "Offset mismatch for UWeaponOutOfAmmo::PitchMultiplier");
static_assert(offsetof(UWeaponOutOfAmmo, AttenuationOverrides) == 312, "Offset mismatch for UWeaponOutOfAmmo::AttenuationOverrides");
static_assert(offsetof(UWeaponOutOfAmmo, SubtitlePriority) == 968, "Offset mismatch for UWeaponOutOfAmmo::SubtitlePriority");
static_assert(offsetof(UWeaponOutOfAmmo, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponOutOfAmmo::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponOutOfAmmo, CookedQualityIndex) == 980, "Offset mismatch for UWeaponOutOfAmmo::CookedQualityIndex");

// /Script/FortSoundCueTemplates.WeaponReloadEnd
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponReloadEnd
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

static_assert(offsetof(UWeaponReloadEnd, FirstNode) == 296, "Offset mismatch for UWeaponReloadEnd::FirstNode");
static_assert(offsetof(UWeaponReloadEnd, VolumeMultiplier) == 304, "Offset mismatch for UWeaponReloadEnd::VolumeMultiplier");
static_assert(offsetof(UWeaponReloadEnd, PitchMultiplier) == 308, "Offset mismatch for UWeaponReloadEnd::PitchMultiplier");
static_assert(offsetof(UWeaponReloadEnd, AttenuationOverrides) == 312, "Offset mismatch for UWeaponReloadEnd::AttenuationOverrides");
static_assert(offsetof(UWeaponReloadEnd, SubtitlePriority) == 968, "Offset mismatch for UWeaponReloadEnd::SubtitlePriority");
static_assert(offsetof(UWeaponReloadEnd, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponReloadEnd::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponReloadEnd, CookedQualityIndex) == 980, "Offset mismatch for UWeaponReloadEnd::CookedQualityIndex");

// /Script/FortSoundCueTemplates.WeaponReloadInsert
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponReloadInsert
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

static_assert(offsetof(UWeaponReloadInsert, FirstNode) == 296, "Offset mismatch for UWeaponReloadInsert::FirstNode");
static_assert(offsetof(UWeaponReloadInsert, VolumeMultiplier) == 304, "Offset mismatch for UWeaponReloadInsert::VolumeMultiplier");
static_assert(offsetof(UWeaponReloadInsert, PitchMultiplier) == 308, "Offset mismatch for UWeaponReloadInsert::PitchMultiplier");
static_assert(offsetof(UWeaponReloadInsert, AttenuationOverrides) == 312, "Offset mismatch for UWeaponReloadInsert::AttenuationOverrides");
static_assert(offsetof(UWeaponReloadInsert, SubtitlePriority) == 968, "Offset mismatch for UWeaponReloadInsert::SubtitlePriority");
static_assert(offsetof(UWeaponReloadInsert, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponReloadInsert::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponReloadInsert, CookedQualityIndex) == 980, "Offset mismatch for UWeaponReloadInsert::CookedQualityIndex");

// /Script/FortSoundCueTemplates.WeaponReloadStart
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponReloadStart
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

static_assert(offsetof(UWeaponReloadStart, FirstNode) == 296, "Offset mismatch for UWeaponReloadStart::FirstNode");
static_assert(offsetof(UWeaponReloadStart, VolumeMultiplier) == 304, "Offset mismatch for UWeaponReloadStart::VolumeMultiplier");
static_assert(offsetof(UWeaponReloadStart, PitchMultiplier) == 308, "Offset mismatch for UWeaponReloadStart::PitchMultiplier");
static_assert(offsetof(UWeaponReloadStart, AttenuationOverrides) == 312, "Offset mismatch for UWeaponReloadStart::AttenuationOverrides");
static_assert(offsetof(UWeaponReloadStart, SubtitlePriority) == 968, "Offset mismatch for UWeaponReloadStart::SubtitlePriority");
static_assert(offsetof(UWeaponReloadStart, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponReloadStart::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponReloadStart, CookedQualityIndex) == 980, "Offset mismatch for UWeaponReloadStart::CookedQualityIndex");

// /Script/FortSoundCueTemplates.WeaponTargetingEnd
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponTargetingEnd
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

static_assert(offsetof(UWeaponTargetingEnd, FirstNode) == 296, "Offset mismatch for UWeaponTargetingEnd::FirstNode");
static_assert(offsetof(UWeaponTargetingEnd, VolumeMultiplier) == 304, "Offset mismatch for UWeaponTargetingEnd::VolumeMultiplier");
static_assert(offsetof(UWeaponTargetingEnd, PitchMultiplier) == 308, "Offset mismatch for UWeaponTargetingEnd::PitchMultiplier");
static_assert(offsetof(UWeaponTargetingEnd, AttenuationOverrides) == 312, "Offset mismatch for UWeaponTargetingEnd::AttenuationOverrides");
static_assert(offsetof(UWeaponTargetingEnd, SubtitlePriority) == 968, "Offset mismatch for UWeaponTargetingEnd::SubtitlePriority");
static_assert(offsetof(UWeaponTargetingEnd, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponTargetingEnd::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponTargetingEnd, CookedQualityIndex) == 980, "Offset mismatch for UWeaponTargetingEnd::CookedQualityIndex");

// /Script/FortSoundCueTemplates.WeaponTargetingStart
// Kind: Class; super: FortSoundCueTemplateSimple
class UWeaponTargetingStart
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

static_assert(offsetof(UWeaponTargetingStart, FirstNode) == 296, "Offset mismatch for UWeaponTargetingStart::FirstNode");
static_assert(offsetof(UWeaponTargetingStart, VolumeMultiplier) == 304, "Offset mismatch for UWeaponTargetingStart::VolumeMultiplier");
static_assert(offsetof(UWeaponTargetingStart, PitchMultiplier) == 308, "Offset mismatch for UWeaponTargetingStart::PitchMultiplier");
static_assert(offsetof(UWeaponTargetingStart, AttenuationOverrides) == 312, "Offset mismatch for UWeaponTargetingStart::AttenuationOverrides");
static_assert(offsetof(UWeaponTargetingStart, SubtitlePriority) == 968, "Offset mismatch for UWeaponTargetingStart::SubtitlePriority");
static_assert(offsetof(UWeaponTargetingStart, bExcludeFromRandomNodeBranchCulling) == 976, "Offset mismatch for UWeaponTargetingStart::bExcludeFromRandomNodeBranchCulling");
static_assert(offsetof(UWeaponTargetingStart, CookedQualityIndex) == 980, "Offset mismatch for UWeaponTargetingStart::CookedQualityIndex");
