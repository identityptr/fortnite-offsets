/**
 * decamp dumper generated SDK
 * Package: /Script/JunoRecycleStation
 */
#pragma once
#include "Basic.h"

// /Script/JunoRecycleStation.JunoRecycleIngredientOverrideRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRecycleIngredientOverrideRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t IngredientTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TSoftObjectPtr<void> IngredientDefinition; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoRecycleIngredientOverrideRow, IngredientTags) == 8, "Offset mismatch for FJunoRecycleIngredientOverrideRow::IngredientTags");
static_assert(offsetof(FJunoRecycleIngredientOverrideRow, IngredientDefinition) == 40, "Offset mismatch for FJunoRecycleIngredientOverrideRow::IngredientDefinition");

// /Script/JunoRecycleStation.JunoRecycleInputOverrideRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRecycleInputOverrideRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t OverrideType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t ItemDefinition[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemQuery[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    TArray<void*> CustomOutputItems; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    // 0x0088 BoolProperty bUseCustomOutputItems (shared storage)
};

static_assert(offsetof(FJunoRecycleInputOverrideRow, OverrideType) == 8, "Offset mismatch for FJunoRecycleInputOverrideRow::OverrideType");
static_assert(offsetof(FJunoRecycleInputOverrideRow, ItemDefinition) == 16, "Offset mismatch for FJunoRecycleInputOverrideRow::ItemDefinition");
static_assert(offsetof(FJunoRecycleInputOverrideRow, ItemQuery) == 48, "Offset mismatch for FJunoRecycleInputOverrideRow::ItemQuery");
static_assert(offsetof(FJunoRecycleInputOverrideRow, CustomOutputItems) == 120, "Offset mismatch for FJunoRecycleInputOverrideRow::CustomOutputItems");
static_assert(offsetof(FJunoRecycleInputOverrideRow, bEnabled) == 136, "Offset mismatch for FJunoRecycleInputOverrideRow::bEnabled");

// /Script/JunoRecycleStation.JunoRecyclePartOverrideRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRecyclePartOverrideRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MainFormulaName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t PartTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t Ingredient[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoRecyclePartOverrideRow, MainFormulaName) == 8, "Offset mismatch for FJunoRecyclePartOverrideRow::MainFormulaName");
static_assert(offsetof(FJunoRecyclePartOverrideRow, PartTag) == 12, "Offset mismatch for FJunoRecyclePartOverrideRow::PartTag");
static_assert(offsetof(FJunoRecyclePartOverrideRow, Ingredient) == 16, "Offset mismatch for FJunoRecyclePartOverrideRow::Ingredient");

// /Script/JunoRecycleStation.JunoGameStateComponent_Recycling
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Recycling
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t IngredientOverrideRegistry[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t PartOverrideRegistry[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t InputItemOverrideRegistry[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t DurabilityOutputCurve[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Recycling, IngredientOverrideRegistry) == 192, "Offset mismatch for UJunoGameStateComponent_Recycling::IngredientOverrideRegistry");
static_assert(offsetof(UJunoGameStateComponent_Recycling, PartOverrideRegistry) == 196, "Offset mismatch for UJunoGameStateComponent_Recycling::PartOverrideRegistry");
static_assert(offsetof(UJunoGameStateComponent_Recycling, InputItemOverrideRegistry) == 200, "Offset mismatch for UJunoGameStateComponent_Recycling::InputItemOverrideRegistry");
static_assert(offsetof(UJunoGameStateComponent_Recycling, DurabilityOutputCurve) == 208, "Offset mismatch for UJunoGameStateComponent_Recycling::DurabilityOutputCurve");

// /Script/JunoRecycleStation.JunoRecycleStationAnalyticsComponent
// Kind: Class; super: JunoPassiveCraftingAnalyticsComponent
class UJunoRecycleStationAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t AccumulatedItem[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    TArray<void*> AccumulatedContributors; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AccumulatedIngredients; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    FName Recipe; // 0x00F8 (Size: 0x8, Type: NameProperty)
    double AccumulatedCraftingTime; // 0x0100 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUsedResourcesFromNearbyChests; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoRecycleStationAnalyticsComponent, AccumulatedItem) == 200, "Offset mismatch for UJunoRecycleStationAnalyticsComponent::AccumulatedItem");
static_assert(offsetof(UJunoRecycleStationAnalyticsComponent, AccumulatedContributors) == 216, "Offset mismatch for UJunoRecycleStationAnalyticsComponent::AccumulatedContributors");
static_assert(offsetof(UJunoRecycleStationAnalyticsComponent, AccumulatedIngredients) == 232, "Offset mismatch for UJunoRecycleStationAnalyticsComponent::AccumulatedIngredients");
static_assert(offsetof(UJunoRecycleStationAnalyticsComponent, Recipe) == 248, "Offset mismatch for UJunoRecycleStationAnalyticsComponent::Recipe");
static_assert(offsetof(UJunoRecycleStationAnalyticsComponent, AccumulatedCraftingTime) == 256, "Offset mismatch for UJunoRecycleStationAnalyticsComponent::AccumulatedCraftingTime");
static_assert(offsetof(UJunoRecycleStationAnalyticsComponent, bUsedResourcesFromNearbyChests) == 264, "Offset mismatch for UJunoRecycleStationAnalyticsComponent::bUsedResourcesFromNearbyChests");

// /Script/JunoRecycleStation.JunoRecycleStationCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoRecycleStationCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoRecycleStation.JunoRecycleStationComponent
// Kind: Class; super: JunoMultiCraftingComponent
class UJunoRecycleStationComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnMultiCraftingFinished; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMultiCraftingBlocked; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00E8
    float TimeToStartProcess; // 0x0100 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> CachedCraftingObjectComponent; // 0x0104 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedInventoryComponent; // 0x010C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0114
    void* AnalyticsComponent; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CraftingProcesses; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0130
    std::int64_t KeyGenerator; // 0x0138 (Size: 0x8, Type: Int64Property)
    std::uint8_t Pad_0004[0x10]; // 0x0140
    std::uint8_t bIsCraftingBlocked; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoRecycleStationComponent, OnMultiCraftingFinished) == 200, "Offset mismatch for UJunoRecycleStationComponent::OnMultiCraftingFinished");
static_assert(offsetof(UJunoRecycleStationComponent, OnMultiCraftingBlocked) == 216, "Offset mismatch for UJunoRecycleStationComponent::OnMultiCraftingBlocked");
static_assert(offsetof(UJunoRecycleStationComponent, TimeToStartProcess) == 256, "Offset mismatch for UJunoRecycleStationComponent::TimeToStartProcess");
static_assert(offsetof(UJunoRecycleStationComponent, CachedCraftingObjectComponent) == 260, "Offset mismatch for UJunoRecycleStationComponent::CachedCraftingObjectComponent");
static_assert(offsetof(UJunoRecycleStationComponent, CachedInventoryComponent) == 268, "Offset mismatch for UJunoRecycleStationComponent::CachedInventoryComponent");
static_assert(offsetof(UJunoRecycleStationComponent, AnalyticsComponent) == 280, "Offset mismatch for UJunoRecycleStationComponent::AnalyticsComponent");
static_assert(offsetof(UJunoRecycleStationComponent, CraftingProcesses) == 288, "Offset mismatch for UJunoRecycleStationComponent::CraftingProcesses");
static_assert(offsetof(UJunoRecycleStationComponent, KeyGenerator) == 312, "Offset mismatch for UJunoRecycleStationComponent::KeyGenerator");
static_assert(offsetof(UJunoRecycleStationComponent, bIsCraftingBlocked) == 336, "Offset mismatch for UJunoRecycleStationComponent::bIsCraftingBlocked");

// /Script/JunoRecycleStation.JunoRecycleStationLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoRecycleStationLibrary
{
public:
    std::uint8_t Opaque[1];
};
