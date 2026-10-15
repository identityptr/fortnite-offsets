/**
 * decamp dumper generated SDK
 * Package: /Script/MarketGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MarketGameplayRuntime.AthenaMarketItemCostData
// Kind: ScriptStruct; super: none
struct FAthenaMarketItemCostData
{
public:
    void* Resource; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Cost; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanPlayerAfford; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAthenaMarketItemCostData, Resource) == 0, "Offset mismatch for FAthenaMarketItemCostData::Resource");
static_assert(offsetof(FAthenaMarketItemCostData, Cost) == 8, "Offset mismatch for FAthenaMarketItemCostData::Cost");
static_assert(offsetof(FAthenaMarketItemCostData, bCanPlayerAfford) == 12, "Offset mismatch for FAthenaMarketItemCostData::bCanPlayerAfford");

// /Script/MarketGameplayRuntime.MarketGameplayPurchaseGroupTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FMarketGameplayPurchaseGroupTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PurchaseGroupName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t PurchaseListName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t MinStockAvailablePerInstance; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStockAvailablePerInstance; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStockPerPlayerPerInstance; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMarketGameplayPurchaseGroupTableRow, PurchaseGroupName) == 8, "Offset mismatch for FMarketGameplayPurchaseGroupTableRow::PurchaseGroupName");
static_assert(offsetof(FMarketGameplayPurchaseGroupTableRow, PurchaseListName) == 12, "Offset mismatch for FMarketGameplayPurchaseGroupTableRow::PurchaseListName");
static_assert(offsetof(FMarketGameplayPurchaseGroupTableRow, Weight) == 16, "Offset mismatch for FMarketGameplayPurchaseGroupTableRow::Weight");
static_assert(offsetof(FMarketGameplayPurchaseGroupTableRow, MinStockAvailablePerInstance) == 20, "Offset mismatch for FMarketGameplayPurchaseGroupTableRow::MinStockAvailablePerInstance");
static_assert(offsetof(FMarketGameplayPurchaseGroupTableRow, MaxStockAvailablePerInstance) == 24, "Offset mismatch for FMarketGameplayPurchaseGroupTableRow::MaxStockAvailablePerInstance");
static_assert(offsetof(FMarketGameplayPurchaseGroupTableRow, MaxStockPerPlayerPerInstance) == 28, "Offset mismatch for FMarketGameplayPurchaseGroupTableRow::MaxStockPerPlayerPerInstance");

// /Script/MarketGameplayRuntime.MarketGameplayPurchaseListTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FMarketGameplayPurchaseListTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PurchaseListName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t LootTierGroup[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    float Weight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLootTierGroupIsUnique; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    TSoftObjectPtr<void> Display_ItemDef; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Display_Transform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t DisplayOveride_Rarity; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A1
    std::uint8_t DisplayOverride_Icon[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayOverride_Text[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayOverride_StaticMesh[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayOverride_SkeletalMesh[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CashPricingLookup_ItemDef[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    FName CashPricingLookup_Name; // 0x0138 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> Currency; // 0x0140 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FMarketGameplayPurchaseListTableRow, PurchaseListName) == 8, "Offset mismatch for FMarketGameplayPurchaseListTableRow::PurchaseListName");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, LootTierGroup) == 12, "Offset mismatch for FMarketGameplayPurchaseListTableRow::LootTierGroup");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, Weight) == 16, "Offset mismatch for FMarketGameplayPurchaseListTableRow::Weight");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, bLootTierGroupIsUnique) == 20, "Offset mismatch for FMarketGameplayPurchaseListTableRow::bLootTierGroupIsUnique");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, Display_ItemDef) == 24, "Offset mismatch for FMarketGameplayPurchaseListTableRow::Display_ItemDef");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, Display_Transform) == 64, "Offset mismatch for FMarketGameplayPurchaseListTableRow::Display_Transform");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, DisplayOveride_Rarity) == 160, "Offset mismatch for FMarketGameplayPurchaseListTableRow::DisplayOveride_Rarity");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, DisplayOverride_Icon) == 168, "Offset mismatch for FMarketGameplayPurchaseListTableRow::DisplayOverride_Icon");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, DisplayOverride_Text) == 200, "Offset mismatch for FMarketGameplayPurchaseListTableRow::DisplayOverride_Text");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, DisplayOverride_StaticMesh) == 216, "Offset mismatch for FMarketGameplayPurchaseListTableRow::DisplayOverride_StaticMesh");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, DisplayOverride_SkeletalMesh) == 248, "Offset mismatch for FMarketGameplayPurchaseListTableRow::DisplayOverride_SkeletalMesh");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, CashPricingLookup_ItemDef) == 280, "Offset mismatch for FMarketGameplayPurchaseListTableRow::CashPricingLookup_ItemDef");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, CashPricingLookup_Name) == 312, "Offset mismatch for FMarketGameplayPurchaseListTableRow::CashPricingLookup_Name");
static_assert(offsetof(FMarketGameplayPurchaseListTableRow, Currency) == 320, "Offset mismatch for FMarketGameplayPurchaseListTableRow::Currency");

// /Script/MarketGameplayRuntime.MarketGameplayPurchaseRuntimeData
// Kind: ScriptStruct; super: none
struct FMarketGameplayPurchaseRuntimeData
{
public:
    std::uint8_t PurchaseListRowName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t LootTierGroup[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t Cost; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* Currency; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::int32_t StockAvailablePerInstance; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStockPerPlayerPerInstance; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t Display_ItemDef[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Display_Transform[0x60]; // 0x0040 (Size: 0x60, Type: StructProperty)
    std::uint8_t DisplayOveride_Rarity; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    std::uint8_t DisplayOverride_Icon[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayOverride_Text[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayOverride_StaticMesh[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DisplayOverride_SkeletalMesh; // 0x00F8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, PurchaseListRowName) == 0, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::PurchaseListRowName");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, LootTierGroup) == 4, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::LootTierGroup");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, Cost) == 8, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::Cost");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, Currency) == 16, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::Currency");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, StockAvailablePerInstance) == 24, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::StockAvailablePerInstance");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, MaxStockPerPlayerPerInstance) == 28, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::MaxStockPerPlayerPerInstance");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, Display_ItemDef) == 32, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::Display_ItemDef");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, Display_Transform) == 64, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::Display_Transform");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, DisplayOveride_Rarity) == 160, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::DisplayOveride_Rarity");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, DisplayOverride_Icon) == 168, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::DisplayOverride_Icon");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, DisplayOverride_Text) == 200, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::DisplayOverride_Text");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, DisplayOverride_StaticMesh) == 216, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::DisplayOverride_StaticMesh");
static_assert(offsetof(FMarketGameplayPurchaseRuntimeData, DisplayOverride_SkeletalMesh) == 248, "Offset mismatch for FMarketGameplayPurchaseRuntimeData::DisplayOverride_SkeletalMesh");

// /Script/MarketGameplayRuntime.AthenaMarketItemVM
// Kind: Class; super: MVVMViewModelBase
class UAthenaMarketItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t CurrentStock; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsOutOfStock; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLimitReached; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006E
    void* ItemDefinition; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CostData[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCanPlayerAfford; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayerAllowedToBuy; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ItemDefinitionChangedReason; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x008B
    TSoftObjectPtr<void> DisplayIcon; // 0x0090 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UAthenaMarketItemVM, CurrentStock) == 104, "Offset mismatch for UAthenaMarketItemVM::CurrentStock");
static_assert(offsetof(UAthenaMarketItemVM, bIsOutOfStock) == 108, "Offset mismatch for UAthenaMarketItemVM::bIsOutOfStock");
static_assert(offsetof(UAthenaMarketItemVM, bIsLimitReached) == 109, "Offset mismatch for UAthenaMarketItemVM::bIsLimitReached");
static_assert(offsetof(UAthenaMarketItemVM, ItemDefinition) == 112, "Offset mismatch for UAthenaMarketItemVM::ItemDefinition");
static_assert(offsetof(UAthenaMarketItemVM, CostData) == 120, "Offset mismatch for UAthenaMarketItemVM::CostData");
static_assert(offsetof(UAthenaMarketItemVM, bCanPlayerAfford) == 136, "Offset mismatch for UAthenaMarketItemVM::bCanPlayerAfford");
static_assert(offsetof(UAthenaMarketItemVM, bIsPlayerAllowedToBuy) == 137, "Offset mismatch for UAthenaMarketItemVM::bIsPlayerAllowedToBuy");
static_assert(offsetof(UAthenaMarketItemVM, ItemDefinitionChangedReason) == 138, "Offset mismatch for UAthenaMarketItemVM::ItemDefinitionChangedReason");
static_assert(offsetof(UAthenaMarketItemVM, DisplayIcon) == 144, "Offset mismatch for UAthenaMarketItemVM::DisplayIcon");

// /Script/MarketGameplayRuntime.BuildingGameplayActorMarketItem
// Kind: Class; super: BuildingGameplayActor
class UBuildingGameplayActorMarketItem
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t bAutoSelectPurchaseData; // 0x0920 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0921
    std::uint8_t MarketGroupTag[0x4]; // 0x0924 (Size: 0x4, Type: StructProperty)
    FName PurchaseGroupName; // 0x0928 (Size: 0x8, Type: NameProperty)
    void* GSC_MarketGameplayClass; // 0x0930 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0938
    std::uint8_t PurchaseData[0x120]; // 0x0940 (Size: 0x120, Type: StructProperty)
    FMulticastInlineDelegate OnPurchaseDataReady; // 0x0A60 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSelectPurchaseDataFailed; // 0x0A70 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UBuildingGameplayActorMarketItem, bAutoSelectPurchaseData) == 2336, "Offset mismatch for UBuildingGameplayActorMarketItem::bAutoSelectPurchaseData");
static_assert(offsetof(UBuildingGameplayActorMarketItem, MarketGroupTag) == 2340, "Offset mismatch for UBuildingGameplayActorMarketItem::MarketGroupTag");
static_assert(offsetof(UBuildingGameplayActorMarketItem, PurchaseGroupName) == 2344, "Offset mismatch for UBuildingGameplayActorMarketItem::PurchaseGroupName");
static_assert(offsetof(UBuildingGameplayActorMarketItem, GSC_MarketGameplayClass) == 2352, "Offset mismatch for UBuildingGameplayActorMarketItem::GSC_MarketGameplayClass");
static_assert(offsetof(UBuildingGameplayActorMarketItem, PurchaseData) == 2368, "Offset mismatch for UBuildingGameplayActorMarketItem::PurchaseData");
static_assert(offsetof(UBuildingGameplayActorMarketItem, OnPurchaseDataReady) == 2656, "Offset mismatch for UBuildingGameplayActorMarketItem::OnPurchaseDataReady");
static_assert(offsetof(UBuildingGameplayActorMarketItem, OnSelectPurchaseDataFailed) == 2672, "Offset mismatch for UBuildingGameplayActorMarketItem::OnSelectPurchaseDataFailed");

// /Script/MarketGameplayRuntime.FortGameStateComponent_MarketGameplay
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_MarketGameplay
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* PurchaseGroupDataTable; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* PurchaseListDataTable; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CashPricingTables; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_MarketGameplay, PurchaseGroupDataTable) == 192, "Offset mismatch for UFortGameStateComponent_MarketGameplay::PurchaseGroupDataTable");
static_assert(offsetof(UFortGameStateComponent_MarketGameplay, PurchaseListDataTable) == 200, "Offset mismatch for UFortGameStateComponent_MarketGameplay::PurchaseListDataTable");
static_assert(offsetof(UFortGameStateComponent_MarketGameplay, CashPricingTables) == 208, "Offset mismatch for UFortGameStateComponent_MarketGameplay::CashPricingTables");
