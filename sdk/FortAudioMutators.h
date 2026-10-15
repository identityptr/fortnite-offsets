/**
 * decamp dumper generated SDK
 * Package: /Script/FortAudioMutators
 */
#pragma once
#include "Basic.h"

// /Script/FortAudioMutators.SoundActionEnsure
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionEnsure
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString CustomMessage; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSoundActionEnsure, CustomMessage) == 8, "Offset mismatch for FSoundActionEnsure::CustomMessage");

// /Script/FortAudioMutators.SoundActionSwapSoundClassGraph
// Kind: ScriptStruct; super: AudioMutatorAction
struct FSoundActionSwapSoundClassGraph
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SoundClassMapping; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSoundActionSwapSoundClassGraph, SoundClassMapping) == 8, "Offset mismatch for FSoundActionSwapSoundClassGraph::SoundClassMapping");

// /Script/FortAudioMutators.SoundSelectorAffiliation
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorAffiliation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Affiliation; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSoundSelectorAffiliation, Affiliation) == 8, "Offset mismatch for FSoundSelectorAffiliation::Affiliation");

// /Script/FortAudioMutators.SoundSelectorHasAttenuation
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorHasAttenuation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortAudioMutators.SoundSelectorPathPattern
// Kind: ScriptStruct; super: AudioMutatorSelector
struct FSoundSelectorPathPattern
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Patterns; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundSelectorPathPattern, Patterns) == 8, "Offset mismatch for FSoundSelectorPathPattern::Patterns");

// /Script/FortAudioMutators.SoundClassGraphMapping
// Kind: Class; super: DataAsset
class USoundClassGraphMapping
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SoundClassMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USoundClassGraphMapping, SoundClassMap) == 40, "Offset mismatch for USoundClassGraphMapping::SoundClassMap");
