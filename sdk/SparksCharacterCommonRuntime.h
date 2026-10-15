/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCharacterCommonRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksCharacterCommonRuntime.SparksAnimBPMSet
// Kind: ScriptStruct; super: none
struct FSparksAnimBPMSet
{
public:
    TArray<void*> BPMBuckets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float Hysteresis; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AllowDoublingHalving; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float CurrentTempoMultiplier; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksAnimBPMSet, BPMBuckets) == 0, "Offset mismatch for FSparksAnimBPMSet::BPMBuckets");
static_assert(offsetof(FSparksAnimBPMSet, Hysteresis) == 16, "Offset mismatch for FSparksAnimBPMSet::Hysteresis");
static_assert(offsetof(FSparksAnimBPMSet, AllowDoublingHalving) == 20, "Offset mismatch for FSparksAnimBPMSet::AllowDoublingHalving");
static_assert(offsetof(FSparksAnimBPMSet, CurrentTempoMultiplier) == 24, "Offset mismatch for FSparksAnimBPMSet::CurrentTempoMultiplier");

// /Script/SparksCharacterCommonRuntime.SparksAnimLoopCycle
// Kind: ScriptStruct; super: none
struct FSparksAnimLoopCycle
{
public:
    void* Loop; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Entry; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Exit; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSparksAnimLoopCycle, Loop) == 0, "Offset mismatch for FSparksAnimLoopCycle::Loop");
static_assert(offsetof(FSparksAnimLoopCycle, Entry) == 8, "Offset mismatch for FSparksAnimLoopCycle::Entry");
static_assert(offsetof(FSparksAnimLoopCycle, Exit) == 16, "Offset mismatch for FSparksAnimLoopCycle::Exit");

// /Script/SparksCharacterCommonRuntime.SparksAnimVariations
// Kind: ScriptStruct; super: none
struct FSparksAnimVariations
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransitionTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    TArray<void*> Variations; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksAnimVariations, Tags) == 0, "Offset mismatch for FSparksAnimVariations::Tags");
static_assert(offsetof(FSparksAnimVariations, TransitionTags) == 32, "Offset mismatch for FSparksAnimVariations::TransitionTags");
static_assert(offsetof(FSparksAnimVariations, Variations) == 64, "Offset mismatch for FSparksAnimVariations::Variations");

// /Script/SparksCharacterCommonRuntime.SparksAnimationsOverride
// Kind: ScriptStruct; super: none
struct FSparksAnimationsOverride
{
public:
    std::uint8_t PawnType[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t Anims_Stationary[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Anims_Traversal[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bReplaceDefaults; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0061
    FString RequiredCVar; // 0x0068 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSparksAnimationsOverride, PawnType) == 0, "Offset mismatch for FSparksAnimationsOverride::PawnType");
static_assert(offsetof(FSparksAnimationsOverride, Anims_Stationary) == 32, "Offset mismatch for FSparksAnimationsOverride::Anims_Stationary");
static_assert(offsetof(FSparksAnimationsOverride, Anims_Traversal) == 64, "Offset mismatch for FSparksAnimationsOverride::Anims_Traversal");
static_assert(offsetof(FSparksAnimationsOverride, bReplaceDefaults) == 96, "Offset mismatch for FSparksAnimationsOverride::bReplaceDefaults");
static_assert(offsetof(FSparksAnimationsOverride, RequiredCVar) == 104, "Offset mismatch for FSparksAnimationsOverride::RequiredCVar");

// /Script/SparksCharacterCommonRuntime.SparksWorldConditionIsEmoting
// Kind: ScriptStruct; super: WorldConditionCommonBase
struct FSparksWorldConditionIsEmoting
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t FortPawnRef[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksWorldConditionIsEmoting, FortPawnRef) == 16, "Offset mismatch for FSparksWorldConditionIsEmoting::FortPawnRef");

// /Script/SparksCharacterCommonRuntime.SparksWorldConditionIsJamming
// Kind: ScriptStruct; super: WorldConditionCommonBase
struct FSparksWorldConditionIsJamming
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InstrumentType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t FortPawnRef[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksWorldConditionIsJamming, InstrumentType) == 16, "Offset mismatch for FSparksWorldConditionIsJamming::InstrumentType");
static_assert(offsetof(FSparksWorldConditionIsJamming, FortPawnRef) == 20, "Offset mismatch for FSparksWorldConditionIsJamming::FortPawnRef");

// /Script/SparksCharacterCommonRuntime.SparksWorldConditionIsPlayingEmote
// Kind: ScriptStruct; super: WorldConditionCommonBase
struct FSparksWorldConditionIsPlayingEmote
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString EmoteName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t FortPawnRef[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksWorldConditionIsPlayingEmote, EmoteName) == 16, "Offset mismatch for FSparksWorldConditionIsPlayingEmote::EmoteName");
static_assert(offsetof(FSparksWorldConditionIsPlayingEmote, FortPawnRef) == 32, "Offset mismatch for FSparksWorldConditionIsPlayingEmote::FortPawnRef");

// /Script/SparksCharacterCommonRuntime.FortGameFeatureAction_SetSparksAnimsOverride
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_SetSparksAnimsOverride
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t AnimsOverride[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameFeatureAction_SetSparksAnimsOverride, AnimsOverride) == 64, "Offset mismatch for UFortGameFeatureAction_SetSparksAnimsOverride::AnimsOverride");

// /Script/SparksCharacterCommonRuntime.SparksAnimIntensitySet
// Kind: Class; super: DataAsset
class USparksAnimIntensitySet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Intensities; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float Bpm; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksAnimIntensitySet, Intensities) == 40, "Offset mismatch for USparksAnimIntensitySet::Intensities");
static_assert(offsetof(USparksAnimIntensitySet, Bpm) == 56, "Offset mismatch for USparksAnimIntensitySet::Bpm");

// /Script/SparksCharacterCommonRuntime.SparksAnimationSubsystem
// Kind: Class; super: WorldSubsystem
class USparksAnimationSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Anims_Stationary[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> Anims_Traversal; // 0x0058 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USparksAnimationSubsystem, Anims_Stationary) == 56, "Offset mismatch for USparksAnimationSubsystem::Anims_Stationary");
static_assert(offsetof(USparksAnimationSubsystem, Anims_Traversal) == 88, "Offset mismatch for USparksAnimationSubsystem::Anims_Traversal");

// /Script/SparksCharacterCommonRuntime.SparksBaseLayerAnimInstance
// Kind: Class; super: FortBaseLayerAnimInstance
class USparksBaseLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* InstrumentPSC; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Instrument; // 0x0348 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsNotAnimatable; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x034A
    std::uint8_t InstrumentSlotTag[0x4]; // 0x034C (Size: 0x4, Type: NameProperty)
    std::uint8_t InstrumentUpperBodySlotTag[0x4]; // 0x0350 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseUpperBodyLayer; // 0x0354 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AnimatableState; // 0x0355 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksBaseLayerAnimInstance, InstrumentPSC) == 832, "Offset mismatch for USparksBaseLayerAnimInstance::InstrumentPSC");
static_assert(offsetof(USparksBaseLayerAnimInstance, Instrument) == 840, "Offset mismatch for USparksBaseLayerAnimInstance::Instrument");
static_assert(offsetof(USparksBaseLayerAnimInstance, bIsNotAnimatable) == 841, "Offset mismatch for USparksBaseLayerAnimInstance::bIsNotAnimatable");
static_assert(offsetof(USparksBaseLayerAnimInstance, InstrumentSlotTag) == 844, "Offset mismatch for USparksBaseLayerAnimInstance::InstrumentSlotTag");
static_assert(offsetof(USparksBaseLayerAnimInstance, InstrumentUpperBodySlotTag) == 848, "Offset mismatch for USparksBaseLayerAnimInstance::InstrumentUpperBodySlotTag");
static_assert(offsetof(USparksBaseLayerAnimInstance, bUseUpperBodyLayer) == 852, "Offset mismatch for USparksBaseLayerAnimInstance::bUseUpperBodyLayer");
static_assert(offsetof(USparksBaseLayerAnimInstance, AnimatableState) == 853, "Offset mismatch for USparksBaseLayerAnimInstance::AnimatableState");

// /Script/SparksCharacterCommonRuntime.SparksBassAnimInstance
// Kind: Class; super: SparksGuitarAnimInstance
class USparksBassAnimInstance
{
public:
    std::uint8_t Pad_0000[0x410]; // 0x0000
    std::int32_t FretNumber; // 0x0410 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksBassAnimInstance, FretNumber) == 1040, "Offset mismatch for USparksBassAnimInstance::FretNumber");

// /Script/SparksCharacterCommonRuntime.SparksDrumsAnimInstance
// Kind: Class; super: SparksInstrumentAnimInstance
class USparksDrumsAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* InstrumentPSC; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> MidiEventDriver; // 0x0270 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Instrument; // 0x0280 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0281
    void* LipSyncAsset; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowLipSyncAnimations; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0291
    std::uint8_t HomebaseBPMs[0x40]; // 0x0298 (Size: 0x40, Type: StructProperty)
    std::uint8_t PlayBPMs[0x40]; // 0x02D8 (Size: 0x40, Type: StructProperty)
    std::uint8_t SoloBPMs[0x40]; // 0x0318 (Size: 0x40, Type: StructProperty)
    std::uint8_t IdleBPMs[0x40]; // 0x0358 (Size: 0x40, Type: StructProperty)
    std::uint8_t TransitionBPMs[0x40]; // 0x0398 (Size: 0x40, Type: StructProperty)
    std::uint8_t SongGenre[0x4]; // 0x03D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SongIntensity[0x4]; // 0x03DC (Size: 0x4, Type: StructProperty)
    std::uint8_t DesiredSongIntensity[0x4]; // 0x03E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanPlayMidiAnimations; // 0x03E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMusicBeatIsActive; // 0x03E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUpperBodyLayer; // 0x03E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceHandIK; // 0x03E7 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksDrumsAnimInstance, InstrumentPSC) == 608, "Offset mismatch for USparksDrumsAnimInstance::InstrumentPSC");
static_assert(offsetof(USparksDrumsAnimInstance, MusicClock) == 616, "Offset mismatch for USparksDrumsAnimInstance::MusicClock");
static_assert(offsetof(USparksDrumsAnimInstance, MidiEventDriver) == 624, "Offset mismatch for USparksDrumsAnimInstance::MidiEventDriver");
static_assert(offsetof(USparksDrumsAnimInstance, Instrument) == 640, "Offset mismatch for USparksDrumsAnimInstance::Instrument");
static_assert(offsetof(USparksDrumsAnimInstance, LipSyncAsset) == 648, "Offset mismatch for USparksDrumsAnimInstance::LipSyncAsset");
static_assert(offsetof(USparksDrumsAnimInstance, bAllowLipSyncAnimations) == 656, "Offset mismatch for USparksDrumsAnimInstance::bAllowLipSyncAnimations");
static_assert(offsetof(USparksDrumsAnimInstance, HomebaseBPMs) == 664, "Offset mismatch for USparksDrumsAnimInstance::HomebaseBPMs");
static_assert(offsetof(USparksDrumsAnimInstance, PlayBPMs) == 728, "Offset mismatch for USparksDrumsAnimInstance::PlayBPMs");
static_assert(offsetof(USparksDrumsAnimInstance, SoloBPMs) == 792, "Offset mismatch for USparksDrumsAnimInstance::SoloBPMs");
static_assert(offsetof(USparksDrumsAnimInstance, IdleBPMs) == 856, "Offset mismatch for USparksDrumsAnimInstance::IdleBPMs");
static_assert(offsetof(USparksDrumsAnimInstance, TransitionBPMs) == 920, "Offset mismatch for USparksDrumsAnimInstance::TransitionBPMs");
static_assert(offsetof(USparksDrumsAnimInstance, SongGenre) == 984, "Offset mismatch for USparksDrumsAnimInstance::SongGenre");
static_assert(offsetof(USparksDrumsAnimInstance, SongIntensity) == 988, "Offset mismatch for USparksDrumsAnimInstance::SongIntensity");
static_assert(offsetof(USparksDrumsAnimInstance, DesiredSongIntensity) == 992, "Offset mismatch for USparksDrumsAnimInstance::DesiredSongIntensity");
static_assert(offsetof(USparksDrumsAnimInstance, bCanPlayMidiAnimations) == 996, "Offset mismatch for USparksDrumsAnimInstance::bCanPlayMidiAnimations");
static_assert(offsetof(USparksDrumsAnimInstance, bMusicBeatIsActive) == 997, "Offset mismatch for USparksDrumsAnimInstance::bMusicBeatIsActive");
static_assert(offsetof(USparksDrumsAnimInstance, bUseUpperBodyLayer) == 998, "Offset mismatch for USparksDrumsAnimInstance::bUseUpperBodyLayer");
static_assert(offsetof(USparksDrumsAnimInstance, bForceHandIK) == 999, "Offset mismatch for USparksDrumsAnimInstance::bForceHandIK");

// /Script/SparksCharacterCommonRuntime.SparksGuitarAnimInstance
// Kind: Class; super: SparksInstrumentAnimInstance
class USparksGuitarAnimInstance
{
public:
    std::uint8_t Pad_0000[0x410]; // 0x0000
    std::int32_t FretNumber; // 0x0410 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USparksGuitarAnimInstance, FretNumber) == 1040, "Offset mismatch for USparksGuitarAnimInstance::FretNumber");

// /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimInstance
// Kind: Class; super: AnimInstance
class USparksInstrumentAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* InstrumentPSC; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> MidiEventDriver; // 0x0270 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Instrument; // 0x0280 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0281
    void* LipSyncAsset; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowLipSyncAnimations; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0291
    std::uint8_t HomebaseBPMs[0x40]; // 0x0298 (Size: 0x40, Type: StructProperty)
    std::uint8_t PlayBPMs[0x40]; // 0x02D8 (Size: 0x40, Type: StructProperty)
    std::uint8_t SoloBPMs[0x40]; // 0x0318 (Size: 0x40, Type: StructProperty)
    std::uint8_t IdleBPMs[0x40]; // 0x0358 (Size: 0x40, Type: StructProperty)
    std::uint8_t TransitionBPMs[0x40]; // 0x0398 (Size: 0x40, Type: StructProperty)
    std::uint8_t SongGenre[0x4]; // 0x03D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SongIntensity[0x4]; // 0x03DC (Size: 0x4, Type: StructProperty)
    std::uint8_t DesiredSongIntensity[0x4]; // 0x03E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanPlayMidiAnimations; // 0x03E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMusicBeatIsActive; // 0x03E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUpperBodyLayer; // 0x03E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceHandIK; // 0x03E7 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksInstrumentAnimInstance, InstrumentPSC) == 608, "Offset mismatch for USparksInstrumentAnimInstance::InstrumentPSC");
static_assert(offsetof(USparksInstrumentAnimInstance, MusicClock) == 616, "Offset mismatch for USparksInstrumentAnimInstance::MusicClock");
static_assert(offsetof(USparksInstrumentAnimInstance, MidiEventDriver) == 624, "Offset mismatch for USparksInstrumentAnimInstance::MidiEventDriver");
static_assert(offsetof(USparksInstrumentAnimInstance, Instrument) == 640, "Offset mismatch for USparksInstrumentAnimInstance::Instrument");
static_assert(offsetof(USparksInstrumentAnimInstance, LipSyncAsset) == 648, "Offset mismatch for USparksInstrumentAnimInstance::LipSyncAsset");
static_assert(offsetof(USparksInstrumentAnimInstance, bAllowLipSyncAnimations) == 656, "Offset mismatch for USparksInstrumentAnimInstance::bAllowLipSyncAnimations");
static_assert(offsetof(USparksInstrumentAnimInstance, HomebaseBPMs) == 664, "Offset mismatch for USparksInstrumentAnimInstance::HomebaseBPMs");
static_assert(offsetof(USparksInstrumentAnimInstance, PlayBPMs) == 728, "Offset mismatch for USparksInstrumentAnimInstance::PlayBPMs");
static_assert(offsetof(USparksInstrumentAnimInstance, SoloBPMs) == 792, "Offset mismatch for USparksInstrumentAnimInstance::SoloBPMs");
static_assert(offsetof(USparksInstrumentAnimInstance, IdleBPMs) == 856, "Offset mismatch for USparksInstrumentAnimInstance::IdleBPMs");
static_assert(offsetof(USparksInstrumentAnimInstance, TransitionBPMs) == 920, "Offset mismatch for USparksInstrumentAnimInstance::TransitionBPMs");
static_assert(offsetof(USparksInstrumentAnimInstance, SongGenre) == 984, "Offset mismatch for USparksInstrumentAnimInstance::SongGenre");
static_assert(offsetof(USparksInstrumentAnimInstance, SongIntensity) == 988, "Offset mismatch for USparksInstrumentAnimInstance::SongIntensity");
static_assert(offsetof(USparksInstrumentAnimInstance, DesiredSongIntensity) == 992, "Offset mismatch for USparksInstrumentAnimInstance::DesiredSongIntensity");
static_assert(offsetof(USparksInstrumentAnimInstance, bCanPlayMidiAnimations) == 996, "Offset mismatch for USparksInstrumentAnimInstance::bCanPlayMidiAnimations");
static_assert(offsetof(USparksInstrumentAnimInstance, bMusicBeatIsActive) == 997, "Offset mismatch for USparksInstrumentAnimInstance::bMusicBeatIsActive");
static_assert(offsetof(USparksInstrumentAnimInstance, bUseUpperBodyLayer) == 998, "Offset mismatch for USparksInstrumentAnimInstance::bUseUpperBodyLayer");
static_assert(offsetof(USparksInstrumentAnimInstance, bForceHandIK) == 999, "Offset mismatch for USparksInstrumentAnimInstance::bForceHandIK");

// /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimPawnComponent
// Kind: Class; super: PawnComponent
class USparksInstrumentAnimPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* InstrumentAnimations; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    void* MusicClock; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> MidiEventDriver; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t CosmeticInstrumentType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AnimatableState; // 0x00E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanPlayMidiAnimations; // 0x00EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00EB
    void* StagePropActor; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x30]; // 0x00F8
    FMulticastInlineDelegate BP_OnPlayerMusicClockChanged; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0138
    FMulticastInlineDelegate BP_OnPlayerMidiEventDriverChanged; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x18]; // 0x0160
    FMulticastInlineDelegate BP_OnPlayerCosmeticInstrumentTypeChanged; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0006[0x18]; // 0x0188
    FMulticastInlineDelegate BP_OnPlayerAnimatableStateChanged; // 0x01A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x01B0
    FMulticastInlineDelegate BP_OnStagePropActorChanged; // 0x01C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USparksInstrumentAnimPawnComponent, InstrumentAnimations) == 192, "Offset mismatch for USparksInstrumentAnimPawnComponent::InstrumentAnimations");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, MusicClock) == 208, "Offset mismatch for USparksInstrumentAnimPawnComponent::MusicClock");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, MidiEventDriver) == 216, "Offset mismatch for USparksInstrumentAnimPawnComponent::MidiEventDriver");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, CosmeticInstrumentType) == 232, "Offset mismatch for USparksInstrumentAnimPawnComponent::CosmeticInstrumentType");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, AnimatableState) == 233, "Offset mismatch for USparksInstrumentAnimPawnComponent::AnimatableState");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, bCanPlayMidiAnimations) == 234, "Offset mismatch for USparksInstrumentAnimPawnComponent::bCanPlayMidiAnimations");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, StagePropActor) == 240, "Offset mismatch for USparksInstrumentAnimPawnComponent::StagePropActor");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, BP_OnPlayerMusicClockChanged) == 296, "Offset mismatch for USparksInstrumentAnimPawnComponent::BP_OnPlayerMusicClockChanged");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, BP_OnPlayerMidiEventDriverChanged) == 336, "Offset mismatch for USparksInstrumentAnimPawnComponent::BP_OnPlayerMidiEventDriverChanged");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, BP_OnPlayerCosmeticInstrumentTypeChanged) == 376, "Offset mismatch for USparksInstrumentAnimPawnComponent::BP_OnPlayerCosmeticInstrumentTypeChanged");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, BP_OnPlayerAnimatableStateChanged) == 416, "Offset mismatch for USparksInstrumentAnimPawnComponent::BP_OnPlayerAnimatableStateChanged");
static_assert(offsetof(USparksInstrumentAnimPawnComponent, BP_OnStagePropActorChanged) == 456, "Offset mismatch for USparksInstrumentAnimPawnComponent::BP_OnStagePropActorChanged");

// /Script/SparksCharacterCommonRuntime.SparksInstrumentAnimations
// Kind: Class; super: DataAsset
class USparksInstrumentAnimations
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* BandPlayAnimBP; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* InstrumentAnimBPs; // 0x0030 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0038
    TSet<void*> InstrumentsUsingUpperBodyLayer; // 0x0058 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USparksInstrumentAnimations, BandPlayAnimBP) == 40, "Offset mismatch for USparksInstrumentAnimations::BandPlayAnimBP");
static_assert(offsetof(USparksInstrumentAnimations, InstrumentAnimBPs) == 48, "Offset mismatch for USparksInstrumentAnimations::InstrumentAnimBPs");
static_assert(offsetof(USparksInstrumentAnimations, InstrumentsUsingUpperBodyLayer) == 88, "Offset mismatch for USparksInstrumentAnimations::InstrumentsUsingUpperBodyLayer");

// /Script/SparksCharacterCommonRuntime.SparksMicAnimInstance
// Kind: Class; super: SparksInstrumentAnimInstance
class USparksMicAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    void* InstrumentPSC; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> MidiEventDriver; // 0x0270 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Instrument; // 0x0280 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0281
    void* LipSyncAsset; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowLipSyncAnimations; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0291
    std::uint8_t HomebaseBPMs[0x40]; // 0x0298 (Size: 0x40, Type: StructProperty)
    std::uint8_t PlayBPMs[0x40]; // 0x02D8 (Size: 0x40, Type: StructProperty)
    std::uint8_t SoloBPMs[0x40]; // 0x0318 (Size: 0x40, Type: StructProperty)
    std::uint8_t IdleBPMs[0x40]; // 0x0358 (Size: 0x40, Type: StructProperty)
    std::uint8_t TransitionBPMs[0x40]; // 0x0398 (Size: 0x40, Type: StructProperty)
    std::uint8_t SongGenre[0x4]; // 0x03D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SongIntensity[0x4]; // 0x03DC (Size: 0x4, Type: StructProperty)
    std::uint8_t DesiredSongIntensity[0x4]; // 0x03E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanPlayMidiAnimations; // 0x03E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMusicBeatIsActive; // 0x03E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUpperBodyLayer; // 0x03E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceHandIK; // 0x03E7 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksMicAnimInstance, InstrumentPSC) == 608, "Offset mismatch for USparksMicAnimInstance::InstrumentPSC");
static_assert(offsetof(USparksMicAnimInstance, MusicClock) == 616, "Offset mismatch for USparksMicAnimInstance::MusicClock");
static_assert(offsetof(USparksMicAnimInstance, MidiEventDriver) == 624, "Offset mismatch for USparksMicAnimInstance::MidiEventDriver");
static_assert(offsetof(USparksMicAnimInstance, Instrument) == 640, "Offset mismatch for USparksMicAnimInstance::Instrument");
static_assert(offsetof(USparksMicAnimInstance, LipSyncAsset) == 648, "Offset mismatch for USparksMicAnimInstance::LipSyncAsset");
static_assert(offsetof(USparksMicAnimInstance, bAllowLipSyncAnimations) == 656, "Offset mismatch for USparksMicAnimInstance::bAllowLipSyncAnimations");
static_assert(offsetof(USparksMicAnimInstance, HomebaseBPMs) == 664, "Offset mismatch for USparksMicAnimInstance::HomebaseBPMs");
static_assert(offsetof(USparksMicAnimInstance, PlayBPMs) == 728, "Offset mismatch for USparksMicAnimInstance::PlayBPMs");
static_assert(offsetof(USparksMicAnimInstance, SoloBPMs) == 792, "Offset mismatch for USparksMicAnimInstance::SoloBPMs");
static_assert(offsetof(USparksMicAnimInstance, IdleBPMs) == 856, "Offset mismatch for USparksMicAnimInstance::IdleBPMs");
static_assert(offsetof(USparksMicAnimInstance, TransitionBPMs) == 920, "Offset mismatch for USparksMicAnimInstance::TransitionBPMs");
static_assert(offsetof(USparksMicAnimInstance, SongGenre) == 984, "Offset mismatch for USparksMicAnimInstance::SongGenre");
static_assert(offsetof(USparksMicAnimInstance, SongIntensity) == 988, "Offset mismatch for USparksMicAnimInstance::SongIntensity");
static_assert(offsetof(USparksMicAnimInstance, DesiredSongIntensity) == 992, "Offset mismatch for USparksMicAnimInstance::DesiredSongIntensity");
static_assert(offsetof(USparksMicAnimInstance, bCanPlayMidiAnimations) == 996, "Offset mismatch for USparksMicAnimInstance::bCanPlayMidiAnimations");
static_assert(offsetof(USparksMicAnimInstance, bMusicBeatIsActive) == 997, "Offset mismatch for USparksMicAnimInstance::bMusicBeatIsActive");
static_assert(offsetof(USparksMicAnimInstance, bUseUpperBodyLayer) == 998, "Offset mismatch for USparksMicAnimInstance::bUseUpperBodyLayer");
static_assert(offsetof(USparksMicAnimInstance, bForceHandIK) == 999, "Offset mismatch for USparksMicAnimInstance::bForceHandIK");
