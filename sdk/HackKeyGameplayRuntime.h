/**
 * decamp dumper generated SDK
 * Package: /Script/HackKeyGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HackKeyGameplayRuntime.FortHackKeyGameplayData
// Kind: Class; super: PrimaryDataAsset
class UFortHackKeyGameplayData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t KeyTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t LootTierGroup[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    TSoftClassPtr<void> GameplayEffect; // 0x0030 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortHackKeyGameplayData, KeyTag) == 40, "Offset mismatch for UFortHackKeyGameplayData::KeyTag");
static_assert(offsetof(UFortHackKeyGameplayData, LootTierGroup) == 44, "Offset mismatch for UFortHackKeyGameplayData::LootTierGroup");
static_assert(offsetof(UFortHackKeyGameplayData, GameplayEffect) == 48, "Offset mismatch for UFortHackKeyGameplayData::GameplayEffect");

// /Script/HackKeyGameplayRuntime.FortHackKeyItemDefinition
// Kind: Class; super: FortWorldItemDefinition
class UFortHackKeyItemDefinition
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t CoreData[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> GameplayData; // 0x00C8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortHackKeyItemDefinition, CoreData) == 168, "Offset mismatch for UFortHackKeyItemDefinition::CoreData");
static_assert(offsetof(UFortHackKeyItemDefinition, GameplayData) == 200, "Offset mismatch for UFortHackKeyItemDefinition::GameplayData");
