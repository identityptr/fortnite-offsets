/**
 * decamp dumper generated SDK
 * Package: /Script/MetasoundPolyphonyInternal
 */
#pragma once
#include "Basic.h"

// /Script/MetasoundPolyphonyInternal.FloatPropertyVariant
// Kind: ScriptStruct; super: none
struct FFloatPropertyVariant
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Interval[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloatPropertyVariant, Type) == 0, "Offset mismatch for FFloatPropertyVariant::Type");
static_assert(offsetof(FFloatPropertyVariant, Mode) == 1, "Offset mismatch for FFloatPropertyVariant::Mode");
static_assert(offsetof(FFloatPropertyVariant, Value) == 4, "Offset mismatch for FFloatPropertyVariant::Value");
static_assert(offsetof(FFloatPropertyVariant, Interval) == 8, "Offset mismatch for FFloatPropertyVariant::Interval");

// /Script/MetasoundPolyphonyInternal.MetaSoundEffectsContainerEntry
// Kind: ScriptStruct; super: none
struct FMetaSoundEffectsContainerEntry
{
public:
    void* MetaSoundEffect; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMetaSoundEffectsContainerEntry, MetaSoundEffect) == 0, "Offset mismatch for FMetaSoundEffectsContainerEntry::MetaSoundEffect");

// /Script/MetasoundPolyphonyInternal.MetasoundPolyphonyEffectsChainNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FMetasoundPolyphonyEffectsChainNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t OutputFormat; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMetasoundPolyphonyEffectsChainNodeConfiguration, OutputFormat) == 8, "Offset mismatch for FMetasoundPolyphonyEffectsChainNodeConfiguration::OutputFormat");

// /Script/MetasoundPolyphonyInternal.MetasoundPolyphonyPatchPlayerNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FMetasoundPolyphonyPatchPlayerNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t OutputFormat; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMetasoundPolyphonyPatchPlayerNodeConfiguration, OutputFormat) == 8, "Offset mismatch for FMetasoundPolyphonyPatchPlayerNodeConfiguration::OutputFormat");

// /Script/MetasoundPolyphonyInternal.MetasoundPolyphonyWavePlayerNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FMetasoundPolyphonyWavePlayerNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t MaxVoices; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutputFormat; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlaybackType; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t PlaybackMode; // 0x000E (Size: 0x1, Type: EnumProperty)
    std::uint8_t SequenceType; // 0x000F (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMetasoundPolyphonyWavePlayerNodeConfiguration, MaxVoices) == 8, "Offset mismatch for FMetasoundPolyphonyWavePlayerNodeConfiguration::MaxVoices");
static_assert(offsetof(FMetasoundPolyphonyWavePlayerNodeConfiguration, OutputFormat) == 12, "Offset mismatch for FMetasoundPolyphonyWavePlayerNodeConfiguration::OutputFormat");
static_assert(offsetof(FMetasoundPolyphonyWavePlayerNodeConfiguration, PlaybackType) == 13, "Offset mismatch for FMetasoundPolyphonyWavePlayerNodeConfiguration::PlaybackType");
static_assert(offsetof(FMetasoundPolyphonyWavePlayerNodeConfiguration, PlaybackMode) == 14, "Offset mismatch for FMetasoundPolyphonyWavePlayerNodeConfiguration::PlaybackMode");
static_assert(offsetof(FMetasoundPolyphonyWavePlayerNodeConfiguration, SequenceType) == 15, "Offset mismatch for FMetasoundPolyphonyWavePlayerNodeConfiguration::SequenceType");

// /Script/MetasoundPolyphonyInternal.SoundWaveContainerEntry
// Kind: ScriptStruct; super: none
struct FSoundWaveContainerEntry
{
public:
    void* SoundWave; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Properties[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    float Weight; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSoundWaveContainerEntry, SoundWave) == 0, "Offset mismatch for FSoundWaveContainerEntry::SoundWave");
static_assert(offsetof(FSoundWaveContainerEntry, Properties) == 8, "Offset mismatch for FSoundWaveContainerEntry::Properties");
static_assert(offsetof(FSoundWaveContainerEntry, Weight) == 24, "Offset mismatch for FSoundWaveContainerEntry::Weight");

// /Script/MetasoundPolyphonyInternal.MetaSoundEffectsContainer
// Kind: Class; super: Object
class UMetaSoundEffectsContainer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Entries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMetaSoundEffectsContainer, Entries) == 48, "Offset mismatch for UMetaSoundEffectsContainer::Entries");

// /Script/MetasoundPolyphonyInternal.SoundWaveContainer
// Kind: Class; super: Object
class USoundWaveContainer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Type; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t Properties[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USoundWaveContainer, Type) == 48, "Offset mismatch for USoundWaveContainer::Type");
static_assert(offsetof(USoundWaveContainer, Properties) == 56, "Offset mismatch for USoundWaveContainer::Properties");
static_assert(offsetof(USoundWaveContainer, Entries) == 72, "Offset mismatch for USoundWaveContainer::Entries");
