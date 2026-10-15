/**
 * decamp dumper generated SDK
 * Package: /Script/AudioMutators
 */
#pragma once
#include "Basic.h"

// /Script/AudioMutators.AudioMutatorAction
// Kind: ScriptStruct; super: AudioMutatorActionBase
struct FAudioMutatorAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioMutatorActionBase
// Kind: ScriptStruct; super: none
struct FAudioMutatorActionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioMutatorParseParamAction
// Kind: ScriptStruct; super: AudioMutatorStatefulActionBase
struct FAudioMutatorParseParamAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioMutatorSelector
// Kind: ScriptStruct; super: none
struct FAudioMutatorSelector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioMutatorStatefulActionBase
// Kind: ScriptStruct; super: AudioMutatorActionBase
struct FAudioMutatorStatefulActionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioMutatorStatefulSoundAction
// Kind: ScriptStruct; super: AudioMutatorStatefulActionBase
struct FAudioMutatorStatefulSoundAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.SoundActionModulator
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionModulator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Modulator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Destination; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSoundActionModulator, Modulator) == 8, "Offset mismatch for FSoundActionModulator::Modulator");
static_assert(offsetof(FSoundActionModulator, Destination) == 16, "Offset mismatch for FSoundActionModulator::Destination");

// /Script/AudioMutators.SoundActionPitch
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionPitch
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float PitchMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSoundActionPitch, PitchMultiplier) == 8, "Offset mismatch for FSoundActionPitch::PitchMultiplier");

// /Script/AudioMutators.SoundActionRerouteSubmixSend
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionRerouteSubmixSend
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SubmixToFind[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> ReplacementSubmix; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSoundActionRerouteSubmixSend, SubmixToFind) == 8, "Offset mismatch for FSoundActionRerouteSubmixSend::SubmixToFind");
static_assert(offsetof(FSoundActionRerouteSubmixSend, ReplacementSubmix) == 40, "Offset mismatch for FSoundActionRerouteSubmixSend::ReplacementSubmix");

// /Script/AudioMutators.SoundActionSourceEffect
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionSourceEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PresetChain; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSoundActionSourceEffect, PresetChain) == 8, "Offset mismatch for FSoundActionSourceEffect::PresetChain");

// /Script/AudioMutators.SoundActionSubmixSend
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionSubmixSend
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> SubmixSends; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideExistingSendLevels; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundActionSubmixSend, SubmixSends) == 8, "Offset mismatch for FSoundActionSubmixSend::SubmixSends");
static_assert(offsetof(FSoundActionSubmixSend, bOverrideExistingSendLevels) == 24, "Offset mismatch for FSoundActionSubmixSend::bOverrideExistingSendLevels");

// /Script/AudioMutators.SoundActionVolume
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionVolume
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float VolumeMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSoundActionVolume, VolumeMultiplier) == 8, "Offset mismatch for FSoundActionVolume::VolumeMultiplier");

// /Script/AudioMutators.SoundSelectorActorClass
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorActorClass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ActorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bExactClass; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundSelectorActorClass, ActorClass) == 8, "Offset mismatch for FSoundSelectorActorClass::ActorClass");
static_assert(offsetof(FSoundSelectorActorClass, bExactClass) == 16, "Offset mismatch for FSoundSelectorActorClass::bExactClass");

// /Script/AudioMutators.SoundSelectorActorInstance
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorActorInstance
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> Actor; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSoundSelectorActorInstance, Actor) == 8, "Offset mismatch for FSoundSelectorActorInstance::Actor");

// /Script/AudioMutators.SoundSelectorAlways
// Kind: ScriptStruct; super: SoundSelectorConditionalBase
struct FSoundSelectorAlways
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.SoundSelectorConditionalAll
// Kind: ScriptStruct; super: SoundSelectorConditionalBase
struct FSoundSelectorConditionalAll
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Selectors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundSelectorConditionalAll, Selectors) == 8, "Offset mismatch for FSoundSelectorConditionalAll::Selectors");

// /Script/AudioMutators.SoundSelectorConditionalAny
// Kind: ScriptStruct; super: SoundSelectorConditionalBase
struct FSoundSelectorConditionalAny
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Selectors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundSelectorConditionalAny, Selectors) == 8, "Offset mismatch for FSoundSelectorConditionalAny::Selectors");

// /Script/AudioMutators.SoundSelectorConditionalBase
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorConditionalBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.SoundSelectorConditionalNone
// Kind: ScriptStruct; super: SoundSelectorConditionalBase
struct FSoundSelectorConditionalNone
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Selectors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundSelectorConditionalNone, Selectors) == 8, "Offset mismatch for FSoundSelectorConditionalNone::Selectors");

// /Script/AudioMutators.SoundSelectorOwnerTag
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorOwnerTag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bExactMatch; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundSelectorOwnerTag, Tag) == 8, "Offset mismatch for FSoundSelectorOwnerTag::Tag");
static_assert(offsetof(FSoundSelectorOwnerTag, bExactMatch) == 12, "Offset mismatch for FSoundSelectorOwnerTag::bExactMatch");

// /Script/AudioMutators.SoundSelectorPreset
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorPreset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Preset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSoundSelectorPreset, Preset) == 8, "Offset mismatch for FSoundSelectorPreset::Preset");

// /Script/AudioMutators.SoundSelectorSoundBaseSubclass
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorSoundBaseSubclass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SoundBaseSubclass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bExactClass; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundSelectorSoundBaseSubclass, SoundBaseSubclass) == 8, "Offset mismatch for FSoundSelectorSoundBaseSubclass::SoundBaseSubclass");
static_assert(offsetof(FSoundSelectorSoundBaseSubclass, bExactClass) == 16, "Offset mismatch for FSoundSelectorSoundBaseSubclass::bExactClass");

// /Script/AudioMutators.SoundSelectorSoundClass
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorSoundClass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SoundClass; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bExactClass; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundSelectorSoundClass, SoundClass) == 8, "Offset mismatch for FSoundSelectorSoundClass::SoundClass");
static_assert(offsetof(FSoundSelectorSoundClass, bExactClass) == 16, "Offset mismatch for FSoundSelectorSoundClass::bExactClass");

// /Script/AudioMutators.SoundSelectorTag
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorTag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bExactMatch; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundSelectorTag, Tag) == 8, "Offset mismatch for FSoundSelectorTag::Tag");
static_assert(offsetof(FSoundSelectorTag, bExactMatch) == 12, "Offset mismatch for FSoundSelectorTag::bExactMatch");

// /Script/AudioMutators.StatefulActionModulator
// Kind: ScriptStruct; super: AudioMutatorStatefulSoundAction
struct FStatefulActionModulator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Modulator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Destination; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStatefulActionModulator, Modulator) == 8, "Offset mismatch for FStatefulActionModulator::Modulator");
static_assert(offsetof(FStatefulActionModulator, Destination) == 16, "Offset mismatch for FStatefulActionModulator::Destination");

// /Script/AudioMutators.StatefulActionPitch
// Kind: ScriptStruct; super: AudioMutatorParseParamAction
struct FStatefulActionPitch
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float PitchMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStatefulActionPitch, PitchMultiplier) == 8, "Offset mismatch for FStatefulActionPitch::PitchMultiplier");

// /Script/AudioMutators.StatefulActionSourceEffect
// Kind: ScriptStruct; super: AudioMutatorStatefulSoundAction
struct FStatefulActionSourceEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PresetChain; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStatefulActionSourceEffect, PresetChain) == 8, "Offset mismatch for FStatefulActionSourceEffect::PresetChain");

// /Script/AudioMutators.StatefulActionVolume
// Kind: ScriptStruct; super: AudioMutatorParseParamAction
struct FStatefulActionVolume
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float VolumeMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStatefulActionVolume, VolumeMultiplier) == 8, "Offset mismatch for FStatefulActionVolume::VolumeMultiplier");

// /Script/AudioMutators.AudioMutator
// Kind: Class; super: AudioMutatorBase
class UAudioMutator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Selectors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Actions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioMutator, Selectors) == 40, "Offset mismatch for UAudioMutator::Selectors");
static_assert(offsetof(UAudioMutator, Actions) == 56, "Offset mismatch for UAudioMutator::Actions");

// /Script/AudioMutators.AudioMutatorBase
// Kind: Class; super: Object
class UAudioMutatorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioMutatorsSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UAudioMutatorsSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.AudioOwnerRegistry
// Kind: Class; super: AudioEngineSubsystem
class UAudioOwnerRegistry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMutators.BranchAudioMutator
// Kind: Class; super: AudioMutatorBase
class UBranchAudioMutator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ActivationSelector[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t InclusionSelector[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TArray<void*> InclusionGroupActions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExclusionGroupActions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBranchAudioMutator, ActivationSelector) == 40, "Offset mismatch for UBranchAudioMutator::ActivationSelector");
static_assert(offsetof(UBranchAudioMutator, InclusionSelector) == 56, "Offset mismatch for UBranchAudioMutator::InclusionSelector");
static_assert(offsetof(UBranchAudioMutator, InclusionGroupActions) == 72, "Offset mismatch for UBranchAudioMutator::InclusionGroupActions");
static_assert(offsetof(UBranchAudioMutator, ExclusionGroupActions) == 88, "Offset mismatch for UBranchAudioMutator::ExclusionGroupActions");

// /Script/AudioMutators.GameFeatureAction_AddAudioMutators
// Kind: Class; super: GameFeatureAction_AudioActionBase
class UGameFeatureAction_AddAudioMutators
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Mutators; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddAudioMutators, Mutators) == 56, "Offset mismatch for UGameFeatureAction_AddAudioMutators::Mutators");

// /Script/AudioMutators.SoundSelectorPresetAsset
// Kind: Class; super: DataAsset
class USoundSelectorPresetAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Selector[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundSelectorPresetAsset, Selector) == 40, "Offset mismatch for USoundSelectorPresetAsset::Selector");

// /Script/AudioMutators.StatefulAudioMutator
// Kind: Class; super: AudioMutatorBase
class UStatefulAudioMutator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Selector[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    TArray<void*> Actions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UStatefulAudioMutator, Selector) == 40, "Offset mismatch for UStatefulAudioMutator::Selector");
static_assert(offsetof(UStatefulAudioMutator, Actions) == 56, "Offset mismatch for UStatefulAudioMutator::Actions");
