/**
 * decamp dumper generated SDK
 * Package: /Script/EnhancedChewRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EnhancedChewRuntime.RestrictedEmoteEntry
// Kind: ScriptStruct; super: none
struct FRestrictedEmoteEntry
{
public:
    std::uint8_t EmoteId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float MinimumDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRestrictedEmoteEntry, EmoteId) == 0, "Offset mismatch for FRestrictedEmoteEntry::EmoteId");
static_assert(offsetof(FRestrictedEmoteEntry, MinimumDistance) == 8, "Offset mismatch for FRestrictedEmoteEntry::MinimumDistance");

// /Script/EnhancedChewRuntime.FortAthenaMutator_EnhancedChew
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_EnhancedChew
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t EmoteAbilityTagsToCancel[0x20]; // 0x02E0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ListOne; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ListTwo; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ListOneHotfix; // 0x0320 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ListTwoHotfix; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    float DefaultMinimumDistance; // 0x0340 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaMutator_EnhancedChew, EmoteAbilityTagsToCancel) == 736, "Offset mismatch for UFortAthenaMutator_EnhancedChew::EmoteAbilityTagsToCancel");
static_assert(offsetof(UFortAthenaMutator_EnhancedChew, ListOne) == 768, "Offset mismatch for UFortAthenaMutator_EnhancedChew::ListOne");
static_assert(offsetof(UFortAthenaMutator_EnhancedChew, ListTwo) == 784, "Offset mismatch for UFortAthenaMutator_EnhancedChew::ListTwo");
static_assert(offsetof(UFortAthenaMutator_EnhancedChew, ListOneHotfix) == 800, "Offset mismatch for UFortAthenaMutator_EnhancedChew::ListOneHotfix");
static_assert(offsetof(UFortAthenaMutator_EnhancedChew, ListTwoHotfix) == 816, "Offset mismatch for UFortAthenaMutator_EnhancedChew::ListTwoHotfix");
static_assert(offsetof(UFortAthenaMutator_EnhancedChew, DefaultMinimumDistance) == 832, "Offset mismatch for UFortAthenaMutator_EnhancedChew::DefaultMinimumDistance");
