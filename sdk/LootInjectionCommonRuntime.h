/**
 * decamp dumper generated SDK
 * Package: /Script/LootInjectionCommonRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LootInjectionCommonRuntime.LootInjectionOptionAnalyticsEventData
// Kind: ScriptStruct; super: none
struct FLootInjectionOptionAnalyticsEventData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LootInjectionCommonRuntime.LootInjectionOptionRarityUpgradeEntry
// Kind: ScriptStruct; super: none
struct FLootInjectionOptionRarityUpgradeEntry
{
public:
    std::uint8_t DisplayRarity; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t LootTierGroup[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    TArray<void*> Weights; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLootInjectionOptionRarityUpgradeEntry, DisplayRarity) == 0, "Offset mismatch for FLootInjectionOptionRarityUpgradeEntry::DisplayRarity");
static_assert(offsetof(FLootInjectionOptionRarityUpgradeEntry, LootTierGroup) == 4, "Offset mismatch for FLootInjectionOptionRarityUpgradeEntry::LootTierGroup");
static_assert(offsetof(FLootInjectionOptionRarityUpgradeEntry, Weights) == 8, "Offset mismatch for FLootInjectionOptionRarityUpgradeEntry::Weights");

// /Script/LootInjectionCommonRuntime.LootInjectionOptionRow
// Kind: ScriptStruct; super: TableRowBase
struct FLootInjectionOptionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t BaseLootTierGroup[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t BaseDisplayRarity; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0011
    float BaseSpawnChance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::int32_t UnlockTokenCount; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x001C
    TArray<void*> SpawnChanceUpgrades; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RarityUpgrades; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ItemCountUpgrades; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> UpgradesAtTokenCount; // 0x0050 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAutoPopulateItemAndText; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0061
    std::uint8_t ItemIcon[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemName[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    FText ItemDescription; // 0x0098 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FLootInjectionOptionRow, bIsEnabled) == 8, "Offset mismatch for FLootInjectionOptionRow::bIsEnabled");
static_assert(offsetof(FLootInjectionOptionRow, BaseLootTierGroup) == 12, "Offset mismatch for FLootInjectionOptionRow::BaseLootTierGroup");
static_assert(offsetof(FLootInjectionOptionRow, BaseDisplayRarity) == 16, "Offset mismatch for FLootInjectionOptionRow::BaseDisplayRarity");
static_assert(offsetof(FLootInjectionOptionRow, BaseSpawnChance) == 20, "Offset mismatch for FLootInjectionOptionRow::BaseSpawnChance");
static_assert(offsetof(FLootInjectionOptionRow, UnlockTokenCount) == 24, "Offset mismatch for FLootInjectionOptionRow::UnlockTokenCount");
static_assert(offsetof(FLootInjectionOptionRow, SpawnChanceUpgrades) == 32, "Offset mismatch for FLootInjectionOptionRow::SpawnChanceUpgrades");
static_assert(offsetof(FLootInjectionOptionRow, RarityUpgrades) == 48, "Offset mismatch for FLootInjectionOptionRow::RarityUpgrades");
static_assert(offsetof(FLootInjectionOptionRow, ItemCountUpgrades) == 64, "Offset mismatch for FLootInjectionOptionRow::ItemCountUpgrades");
static_assert(offsetof(FLootInjectionOptionRow, UpgradesAtTokenCount) == 80, "Offset mismatch for FLootInjectionOptionRow::UpgradesAtTokenCount");
static_assert(offsetof(FLootInjectionOptionRow, bAutoPopulateItemAndText) == 96, "Offset mismatch for FLootInjectionOptionRow::bAutoPopulateItemAndText");
static_assert(offsetof(FLootInjectionOptionRow, ItemIcon) == 104, "Offset mismatch for FLootInjectionOptionRow::ItemIcon");
static_assert(offsetof(FLootInjectionOptionRow, ItemName) == 136, "Offset mismatch for FLootInjectionOptionRow::ItemName");
static_assert(offsetof(FLootInjectionOptionRow, ItemDescription) == 152, "Offset mismatch for FLootInjectionOptionRow::ItemDescription");

// /Script/LootInjectionCommonRuntime.OnLootInjectionOptionsDataLoaded
// Kind: ScriptStruct; super: none
struct FOnLootInjectionOptionsDataLoaded
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LootInjectionCommonRuntime.FortCheatManager_LootInjectionCommon
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_LootInjectionCommon
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LootInjectionCommonRuntime.FortControllerComponent_LootInjectionParent
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_LootInjectionParent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLootOptionTokenCountsUpdated; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOwnedTokenCountUpdated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPurchaseStarted; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPurchaseCompleted; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x14]; // 0x0108
    std::int32_t OwnedTokenCount; // 0x011C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortControllerComponent_LootInjectionParent, OnLootOptionTokenCountsUpdated) == 200, "Offset mismatch for UFortControllerComponent_LootInjectionParent::OnLootOptionTokenCountsUpdated");
static_assert(offsetof(UFortControllerComponent_LootInjectionParent, OnOwnedTokenCountUpdated) == 216, "Offset mismatch for UFortControllerComponent_LootInjectionParent::OnOwnedTokenCountUpdated");
static_assert(offsetof(UFortControllerComponent_LootInjectionParent, OnPurchaseStarted) == 232, "Offset mismatch for UFortControllerComponent_LootInjectionParent::OnPurchaseStarted");
static_assert(offsetof(UFortControllerComponent_LootInjectionParent, OnPurchaseCompleted) == 248, "Offset mismatch for UFortControllerComponent_LootInjectionParent::OnPurchaseCompleted");
static_assert(offsetof(UFortControllerComponent_LootInjectionParent, OwnedTokenCount) == 284, "Offset mismatch for UFortControllerComponent_LootInjectionParent::OwnedTokenCount");

// /Script/LootInjectionCommonRuntime.FortGameStateComponent_LootInjectionOptionsData
// Kind: Class; super: FortGameStateComponent_DataBase
class UFortGameStateComponent_LootInjectionOptionsData
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t LootInjectionOptionDataRegistryType[0x8]; // 0x00D8 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> LootOptionDataMap; // 0x00E0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGameStateComponent_LootInjectionOptionsData, LootInjectionOptionDataRegistryType) == 216, "Offset mismatch for UFortGameStateComponent_LootInjectionOptionsData::LootInjectionOptionDataRegistryType");
static_assert(offsetof(UFortGameStateComponent_LootInjectionOptionsData, LootOptionDataMap) == 224, "Offset mismatch for UFortGameStateComponent_LootInjectionOptionsData::LootOptionDataMap");

// /Script/LootInjectionCommonRuntime.LootInjectionCommonLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULootInjectionCommonLibrary
{
public:
    std::uint8_t Opaque[1];
};
