/**
 * decamp dumper generated SDK
 * Package: /Script/AmbientAudio
 */
#pragma once
#include "Basic.h"

// /Script/AmbientAudio.AmbientAudioBase
// Kind: ScriptStruct; super: none
struct FAmbientAudioBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Sound[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PlaybackRequirements[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAmbientAudioBase, Sound) == 8, "Offset mismatch for FAmbientAudioBase::Sound");
static_assert(offsetof(FAmbientAudioBase, PlaybackRequirements) == 40, "Offset mismatch for FAmbientAudioBase::PlaybackRequirements");

// /Script/AmbientAudio.AmbientAudioLoop
// Kind: ScriptStruct; super: AmbientAudioBase
struct FAmbientAudioLoop
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Sound[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PlaybackRequirements[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAmbientAudioLoop, Sound) == 8, "Offset mismatch for FAmbientAudioLoop::Sound");
static_assert(offsetof(FAmbientAudioLoop, PlaybackRequirements) == 40, "Offset mismatch for FAmbientAudioLoop::PlaybackRequirements");

// /Script/AmbientAudio.AmbientAudioOneShot
// Kind: ScriptStruct; super: AmbientAudioBase
struct FAmbientAudioOneShot
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t RetriggerTimeRange[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t TriggerDistanceRange[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAmbientAudioOneShot, RetriggerTimeRange) == 120, "Offset mismatch for FAmbientAudioOneShot::RetriggerTimeRange");
static_assert(offsetof(FAmbientAudioOneShot, TriggerDistanceRange) == 136, "Offset mismatch for FAmbientAudioOneShot::TriggerDistanceRange");

// /Script/AmbientAudio.ArrayAmbientAudioBase
// Kind: ScriptStruct; super: none
struct FArrayAmbientAudioBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AmbientAudio.ArrayAmbientAudioLoop
// Kind: ScriptStruct; super: ArrayAmbientAudioBase
struct FArrayAmbientAudioLoop
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Sounds; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FArrayAmbientAudioLoop, Sounds) == 8, "Offset mismatch for FArrayAmbientAudioLoop::Sounds");

// /Script/AmbientAudio.ArrayAmbientAudioOneShot
// Kind: ScriptStruct; super: ArrayAmbientAudioBase
struct FArrayAmbientAudioOneShot
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Sounds; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FArrayAmbientAudioOneShot, Sounds) == 8, "Offset mismatch for FArrayAmbientAudioOneShot::Sounds");

// /Script/AmbientAudio.AmbientAudioComponent
// Kind: Class; super: AudioGameplayComponent
class UAmbientAudioComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* AmbientAsset; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Priority; // 0x00D8 (Size: 0x4, Type: IntProperty)
    float CrossfadeTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t AmbientGuid[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    FName DisplayName; // 0x00F0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAmbientAudioComponent, AmbientAsset) == 208, "Offset mismatch for UAmbientAudioComponent::AmbientAsset");
static_assert(offsetof(UAmbientAudioComponent, Priority) == 216, "Offset mismatch for UAmbientAudioComponent::Priority");
static_assert(offsetof(UAmbientAudioComponent, CrossfadeTime) == 220, "Offset mismatch for UAmbientAudioComponent::CrossfadeTime");
static_assert(offsetof(UAmbientAudioComponent, AmbientGuid) == 224, "Offset mismatch for UAmbientAudioComponent::AmbientGuid");
static_assert(offsetof(UAmbientAudioComponent, DisplayName) == 240, "Offset mismatch for UAmbientAudioComponent::DisplayName");

// /Script/AmbientAudio.AmbientAudioDataAsset
// Kind: Class; super: DataAsset
class UAmbientAudioDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SoundArrays; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float TagCrossfadeTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAmbientAudioDataAsset, SoundArrays) == 40, "Offset mismatch for UAmbientAudioDataAsset::SoundArrays");
static_assert(offsetof(UAmbientAudioDataAsset, TagCrossfadeTime) == 56, "Offset mismatch for UAmbientAudioDataAsset::TagCrossfadeTime");

// /Script/AmbientAudio.AmbientAudioParameterActor
// Kind: Class; super: Actor
class UAmbientAudioParameterActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Parameters; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAmbientAudioParameterActor, Parameters) == 624, "Offset mismatch for UAmbientAudioParameterActor::Parameters");

// /Script/AmbientAudio.AmbientAudioSubsystem
// Kind: Class; super: WorldSubsystem
class UAmbientAudioSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FMulticastInlineDelegate OnTagChanged; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEntryChanged; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> AmbientComponents; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    void* ParameterActor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAmbientAudioSubsystem, OnTagChanged) == 64, "Offset mismatch for UAmbientAudioSubsystem::OnTagChanged");
static_assert(offsetof(UAmbientAudioSubsystem, OnEntryChanged) == 80, "Offset mismatch for UAmbientAudioSubsystem::OnEntryChanged");
static_assert(offsetof(UAmbientAudioSubsystem, AmbientComponents) == 96, "Offset mismatch for UAmbientAudioSubsystem::AmbientComponents");
static_assert(offsetof(UAmbientAudioSubsystem, ParameterActor) == 112, "Offset mismatch for UAmbientAudioSubsystem::ParameterActor");
