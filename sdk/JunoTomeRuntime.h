/**
 * decamp dumper generated SDK
 * Package: /Script/JunoTomeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoTomeRuntime.JunoTieredTomeCollectionEntry
// Kind: ScriptStruct; super: none
struct FJunoTieredTomeCollectionEntry
{
public:
    std::uint8_t TierCollectionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName FallbackTierCollectionEntryRowName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoTieredTomeCollectionEntry, TierCollectionName) == 0, "Offset mismatch for FJunoTieredTomeCollectionEntry::TierCollectionName");
static_assert(offsetof(FJunoTieredTomeCollectionEntry, FallbackTierCollectionEntryRowName) == 4, "Offset mismatch for FJunoTieredTomeCollectionEntry::FallbackTierCollectionEntryRowName");

// /Script/JunoTomeRuntime.JunoTieredTomeRewardsData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoTieredTomeRewardsData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Collection[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FName FallbackLootTier; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoTieredTomeRewardsData, Collection) == 8, "Offset mismatch for FJunoTieredTomeRewardsData::Collection");
static_assert(offsetof(FJunoTieredTomeRewardsData, FallbackLootTier) == 16, "Offset mismatch for FJunoTieredTomeRewardsData::FallbackLootTier");

// /Script/JunoTomeRuntime.JunoTomeCollectionData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoTomeCollectionData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> UnlockList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoTomeCollectionData, UnlockList) == 8, "Offset mismatch for FJunoTomeCollectionData::UnlockList");

// /Script/JunoTomeRuntime.JunoTomeCollectionEntry
// Kind: ScriptStruct; super: none
struct FJunoTomeCollectionEntry
{
public:
    std::uint8_t CollectionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float CollectionWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoTomeCollectionEntry, CollectionName) == 0, "Offset mismatch for FJunoTomeCollectionEntry::CollectionName");
static_assert(offsetof(FJunoTomeCollectionEntry, CollectionWeight) == 4, "Offset mismatch for FJunoTomeCollectionEntry::CollectionWeight");

// /Script/JunoTomeRuntime.JunoTomeCollectionUnlock
// Kind: ScriptStruct; super: none
struct FJunoTomeCollectionUnlock
{
public:
    float UnlockWeight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PrerequisiteKnowledge[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName RecipeUnlock; // 0x0008 (Size: 0x8, Type: NameProperty)
    TArray<void*> AdditionalRecipeUnlocks; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> AccountRecipeUnlock; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoTomeCollectionUnlock, UnlockWeight) == 0, "Offset mismatch for FJunoTomeCollectionUnlock::UnlockWeight");
static_assert(offsetof(FJunoTomeCollectionUnlock, PrerequisiteKnowledge) == 4, "Offset mismatch for FJunoTomeCollectionUnlock::PrerequisiteKnowledge");
static_assert(offsetof(FJunoTomeCollectionUnlock, RecipeUnlock) == 8, "Offset mismatch for FJunoTomeCollectionUnlock::RecipeUnlock");
static_assert(offsetof(FJunoTomeCollectionUnlock, AdditionalRecipeUnlocks) == 16, "Offset mismatch for FJunoTomeCollectionUnlock::AdditionalRecipeUnlocks");
static_assert(offsetof(FJunoTomeCollectionUnlock, AccountRecipeUnlock) == 32, "Offset mismatch for FJunoTomeCollectionUnlock::AccountRecipeUnlock");

// /Script/JunoTomeRuntime.JunoTomeRewardsData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoTomeRewardsData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> CollectionList; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    FName FallbackLootTier; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoTomeRewardsData, CollectionList) == 8, "Offset mismatch for FJunoTomeRewardsData::CollectionList");
static_assert(offsetof(FJunoTomeRewardsData, FallbackLootTier) == 24, "Offset mismatch for FJunoTomeRewardsData::FallbackLootTier");

// /Script/JunoTomeRuntime.JunoTomeBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoTomeBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
