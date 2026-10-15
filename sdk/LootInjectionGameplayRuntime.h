/**
 * decamp dumper generated SDK
 * Package: /Script/LootInjectionGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LootInjectionGameplayRuntime.RepLootOptionTokenCount
// Kind: ScriptStruct; super: none
struct FRepLootOptionTokenCount
{
public:
    std::uint8_t LootOptionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t TokenCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRepLootOptionTokenCount, LootOptionName) == 0, "Offset mismatch for FRepLootOptionTokenCount::LootOptionName");
static_assert(offsetof(FRepLootOptionTokenCount, TokenCount) == 4, "Offset mismatch for FRepLootOptionTokenCount::TokenCount");

// /Script/LootInjectionGameplayRuntime.FortCheatManager_LootInjectionGameplay
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_LootInjectionGameplay
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LootInjectionGameplayRuntime.FortControllerComponent_LootInjectionGameplay
// Kind: Class; super: FortControllerComponent_LootInjectionParent
class UFortControllerComponent_LootInjectionGameplay
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    TArray<void*> RepLootOptionTokenCounts; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxLootInjectionsPerMatch[0x34]; // 0x0140 (Size: 0x34, Type: StructProperty)
    std::uint8_t LootInjectionGuaranteeTag[0x4]; // 0x0174 (Size: 0x4, Type: StructProperty)
    std::uint8_t NumLootInjectionGuarantees[0x30]; // 0x0178 (Size: 0x30, Type: StructProperty)
    std::uint8_t LootHackerSpriteBonusChance[0x30]; // 0x01A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bLootHackerSpriteBonusChanceIsAdditive[0x30]; // 0x01D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t LootHackerSpriteEquippedTag[0x8]; // 0x0208 (Size: 0x8, Type: StructProperty)
    std::uint8_t LootInjectionCooldown[0x1]; // 0x0210 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, RepLootOptionTokenCounts) == 304, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::RepLootOptionTokenCounts");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, MaxLootInjectionsPerMatch) == 320, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::MaxLootInjectionsPerMatch");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, LootInjectionGuaranteeTag) == 372, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::LootInjectionGuaranteeTag");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, NumLootInjectionGuarantees) == 376, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::NumLootInjectionGuarantees");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, LootHackerSpriteBonusChance) == 424, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::LootHackerSpriteBonusChance");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, bLootHackerSpriteBonusChanceIsAdditive) == 472, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::bLootHackerSpriteBonusChanceIsAdditive");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, LootHackerSpriteEquippedTag) == 520, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::LootHackerSpriteEquippedTag");
static_assert(offsetof(UFortControllerComponent_LootInjectionGameplay, LootInjectionCooldown) == 528, "Offset mismatch for UFortControllerComponent_LootInjectionGameplay::LootInjectionCooldown");
