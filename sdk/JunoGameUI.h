/**
 * decamp dumper generated SDK
 * Package: /Script/JunoGameUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoGameUI.BlockingWidgetData
// Kind: ScriptStruct; super: none
struct FBlockingWidgetData
{
public:
    std::uint8_t WidgetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bClampLeft; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampRight; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampTop; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampBottom; // 0x0007 (Size: 0x1, Type: BoolProperty)
    void* WidgetReference; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBlockingWidgetData, WidgetName) == 0, "Offset mismatch for FBlockingWidgetData::WidgetName");
static_assert(offsetof(FBlockingWidgetData, bClampLeft) == 4, "Offset mismatch for FBlockingWidgetData::bClampLeft");
static_assert(offsetof(FBlockingWidgetData, bClampRight) == 5, "Offset mismatch for FBlockingWidgetData::bClampRight");
static_assert(offsetof(FBlockingWidgetData, bClampTop) == 6, "Offset mismatch for FBlockingWidgetData::bClampTop");
static_assert(offsetof(FBlockingWidgetData, bClampBottom) == 7, "Offset mismatch for FBlockingWidgetData::bClampBottom");
static_assert(offsetof(FBlockingWidgetData, WidgetReference) == 8, "Offset mismatch for FBlockingWidgetData::WidgetReference");

// /Script/JunoGameUI.ConversationMessageDebugInfo
// Kind: ScriptStruct; super: none
struct FConversationMessageDebugInfo
{
public:
    std::uint8_t NodeName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString CollectionName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t DataCache[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    FString DebugString; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FConversationMessageDebugInfo, NodeName) == 0, "Offset mismatch for FConversationMessageDebugInfo::NodeName");
static_assert(offsetof(FConversationMessageDebugInfo, CollectionName) == 16, "Offset mismatch for FConversationMessageDebugInfo::CollectionName");
static_assert(offsetof(FConversationMessageDebugInfo, DataCache) == 32, "Offset mismatch for FConversationMessageDebugInfo::DataCache");
static_assert(offsetof(FConversationMessageDebugInfo, DebugString) == 72, "Offset mismatch for FConversationMessageDebugInfo::DebugString");

// /Script/JunoGameUI.CountUnviewedRecipesInCategoryArgs
// Kind: ScriptStruct; super: none
struct FCountUnviewedRecipesInCategoryArgs
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CraftingObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CategoryTag[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t SubCategoryTag[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    std::uint8_t bOnlyKnownRecipes; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCountUnacquiredRecipes; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCountUnviewedRecipesInCategoryArgs, PlayerController) == 0, "Offset mismatch for FCountUnviewedRecipesInCategoryArgs::PlayerController");
static_assert(offsetof(FCountUnviewedRecipesInCategoryArgs, CraftingObject) == 8, "Offset mismatch for FCountUnviewedRecipesInCategoryArgs::CraftingObject");
static_assert(offsetof(FCountUnviewedRecipesInCategoryArgs, CategoryTag) == 16, "Offset mismatch for FCountUnviewedRecipesInCategoryArgs::CategoryTag");
static_assert(offsetof(FCountUnviewedRecipesInCategoryArgs, SubCategoryTag) == 20, "Offset mismatch for FCountUnviewedRecipesInCategoryArgs::SubCategoryTag");
static_assert(offsetof(FCountUnviewedRecipesInCategoryArgs, bOnlyKnownRecipes) == 24, "Offset mismatch for FCountUnviewedRecipesInCategoryArgs::bOnlyKnownRecipes");
static_assert(offsetof(FCountUnviewedRecipesInCategoryArgs, bCountUnacquiredRecipes) == 25, "Offset mismatch for FCountUnviewedRecipesInCategoryArgs::bCountUnacquiredRecipes");

// /Script/JunoGameUI.GridListSlotInfo
// Kind: ScriptStruct; super: none
struct FGridListSlotInfo
{
public:
    std::uint8_t SlotType[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Height; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Width; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t ItemsPerRow; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t ItemPadding[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGridListSlotInfo, SlotType) == 0, "Offset mismatch for FGridListSlotInfo::SlotType");
static_assert(offsetof(FGridListSlotInfo, Height) == 4, "Offset mismatch for FGridListSlotInfo::Height");
static_assert(offsetof(FGridListSlotInfo, Width) == 8, "Offset mismatch for FGridListSlotInfo::Width");
static_assert(offsetof(FGridListSlotInfo, ItemsPerRow) == 12, "Offset mismatch for FGridListSlotInfo::ItemsPerRow");
static_assert(offsetof(FGridListSlotInfo, ItemPadding) == 16, "Offset mismatch for FGridListSlotInfo::ItemPadding");

// /Script/JunoGameUI.GridListSlotInfoContainer
// Kind: ScriptStruct; super: none
struct FGridListSlotInfoContainer
{
public:
    TArray<void*> GridListInfo; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGridListSlotInfoContainer, GridListInfo) == 0, "Offset mismatch for FGridListSlotInfoContainer::GridListInfo");

// /Script/JunoGameUI.GridListViewInfo
// Kind: ScriptStruct; super: none
struct FGridListViewInfo
{
public:
    void* UserWidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GridListSlotInfo[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGridListViewInfo, UserWidgetClass) == 0, "Offset mismatch for FGridListViewInfo::UserWidgetClass");
static_assert(offsetof(FGridListViewInfo, GridListSlotInfo) == 8, "Offset mismatch for FGridListViewInfo::GridListSlotInfo");

// /Script/JunoGameUI.InactiveUserWidgets
// Kind: ScriptStruct; super: none
struct FInactiveUserWidgets
{
public:
    TArray<void*> InactiveWidgets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInactiveUserWidgets, InactiveWidgets) == 0, "Offset mismatch for FInactiveUserWidgets::InactiveWidgets");

// /Script/JunoGameUI.InteractionInfoViewModelMonitorPair
// Kind: ScriptStruct; super: none
struct FInteractionInfoViewModelMonitorPair
{
public:
    void* InteractionInfoViewModel; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoMonitor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FInteractionInfoViewModelMonitorPair, InteractionInfoViewModel) == 0, "Offset mismatch for FInteractionInfoViewModelMonitorPair::InteractionInfoViewModel");
static_assert(offsetof(FInteractionInfoViewModelMonitorPair, InteractionInfoMonitor) == 8, "Offset mismatch for FInteractionInfoViewModelMonitorPair::InteractionInfoMonitor");

// /Script/JunoGameUI.InventorySlotViewModelFakeSlotData
// Kind: ScriptStruct; super: none
struct FInventorySlotViewModelFakeSlotData
{
public:
    void* ItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Count; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxStackSize; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInventorySlotViewModelFakeSlotData, ItemDefinition) == 0, "Offset mismatch for FInventorySlotViewModelFakeSlotData::ItemDefinition");
static_assert(offsetof(FInventorySlotViewModelFakeSlotData, Count) == 8, "Offset mismatch for FInventorySlotViewModelFakeSlotData::Count");
static_assert(offsetof(FInventorySlotViewModelFakeSlotData, MaxStackSize) == 12, "Offset mismatch for FInventorySlotViewModelFakeSlotData::MaxStackSize");

// /Script/JunoGameUI.JunoAcquiredWidgets
// Kind: ScriptStruct; super: none
struct FJunoAcquiredWidgets
{
public:
    TSet<void*> Widgets; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FJunoAcquiredWidgets, Widgets) == 0, "Offset mismatch for FJunoAcquiredWidgets::Widgets");

// /Script/JunoGameUI.JunoActiveCompassMarker
// Kind: ScriptStruct; super: none
struct FJunoActiveCompassMarker
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* MID; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoActiveCompassMarker, MID) == 24, "Offset mismatch for FJunoActiveCompassMarker::MID");

// /Script/JunoGameUI.JunoActiveInputModeChanged
// Kind: ScriptStruct; super: none
struct FJunoActiveInputModeChanged
{
public:
    std::uint8_t ActiveInputMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoActiveInputModeChanged, ActiveInputMode) == 0, "Offset mismatch for FJunoActiveInputModeChanged::ActiveInputMode");

// /Script/JunoGameUI.JunoBiomeUIDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBiomeUIDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BiomeEnum; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t BiomeName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t BiomeText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubBiomeText[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BiomeColor[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBiomeUIDataRow, BiomeEnum) == 8, "Offset mismatch for FJunoBiomeUIDataRow::BiomeEnum");
static_assert(offsetof(FJunoBiomeUIDataRow, BiomeName) == 12, "Offset mismatch for FJunoBiomeUIDataRow::BiomeName");
static_assert(offsetof(FJunoBiomeUIDataRow, BiomeText) == 16, "Offset mismatch for FJunoBiomeUIDataRow::BiomeText");
static_assert(offsetof(FJunoBiomeUIDataRow, SubBiomeText) == 32, "Offset mismatch for FJunoBiomeUIDataRow::SubBiomeText");
static_assert(offsetof(FJunoBiomeUIDataRow, Icon) == 48, "Offset mismatch for FJunoBiomeUIDataRow::Icon");
static_assert(offsetof(FJunoBiomeUIDataRow, BiomeColor) == 80, "Offset mismatch for FJunoBiomeUIDataRow::BiomeColor");

// /Script/JunoGameUI.JunoBuildMenuExclusionDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBuildMenuExclusionDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PrimaryCategory[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubCategories[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildMenuExclusionDataRow, PrimaryCategory) == 8, "Offset mismatch for FJunoBuildMenuExclusionDataRow::PrimaryCategory");
static_assert(offsetof(FJunoBuildMenuExclusionDataRow, SubCategories) == 16, "Offset mismatch for FJunoBuildMenuExclusionDataRow::SubCategories");

// /Script/JunoGameUI.JunoBuildingGroupData
// Kind: ScriptStruct; super: none
struct FJunoBuildingGroupData
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoriesQuery[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBuildingGroupData, DisplayName) == 0, "Offset mismatch for FJunoBuildingGroupData::DisplayName");
static_assert(offsetof(FJunoBuildingGroupData, CategoriesQuery) == 16, "Offset mismatch for FJunoBuildingGroupData::CategoriesQuery");

// /Script/JunoGameUI.JunoCategoryFilteringUIDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCategoryFilteringUIDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EntryType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnabled; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    std::uint8_t DisplayText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t IdTag[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentTag[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    std::uint8_t FilterTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t SortingPriority; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCategoryFilteringUIDataRow, EntryType) == 8, "Offset mismatch for FJunoCategoryFilteringUIDataRow::EntryType");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, bEnabled) == 9, "Offset mismatch for FJunoCategoryFilteringUIDataRow::bEnabled");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, DisplayText) == 16, "Offset mismatch for FJunoCategoryFilteringUIDataRow::DisplayText");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, IdTag) == 32, "Offset mismatch for FJunoCategoryFilteringUIDataRow::IdTag");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, ParentTag) == 36, "Offset mismatch for FJunoCategoryFilteringUIDataRow::ParentTag");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, FilterTags) == 40, "Offset mismatch for FJunoCategoryFilteringUIDataRow::FilterTags");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, DisplayIcon) == 72, "Offset mismatch for FJunoCategoryFilteringUIDataRow::DisplayIcon");
static_assert(offsetof(FJunoCategoryFilteringUIDataRow, SortingPriority) == 104, "Offset mismatch for FJunoCategoryFilteringUIDataRow::SortingPriority");

// /Script/JunoGameUI.JunoComponentCraftingTextureSet
// Kind: ScriptStruct; super: none
struct FJunoComponentCraftingTextureSet
{
public:
    std::uint8_t SoftItemSlotMaterial[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SoftMaskTexture[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SoftPartTextures; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SoftRiftedTexture[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    void* ItemSlotMaterial; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* MaskTexture; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PartTextures; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* RiftedTexture; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsLoaded; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoComponentCraftingTextureSet, SoftItemSlotMaterial) == 0, "Offset mismatch for FJunoComponentCraftingTextureSet::SoftItemSlotMaterial");
static_assert(offsetof(FJunoComponentCraftingTextureSet, SoftMaskTexture) == 32, "Offset mismatch for FJunoComponentCraftingTextureSet::SoftMaskTexture");
static_assert(offsetof(FJunoComponentCraftingTextureSet, SoftPartTextures) == 64, "Offset mismatch for FJunoComponentCraftingTextureSet::SoftPartTextures");
static_assert(offsetof(FJunoComponentCraftingTextureSet, SoftRiftedTexture) == 80, "Offset mismatch for FJunoComponentCraftingTextureSet::SoftRiftedTexture");
static_assert(offsetof(FJunoComponentCraftingTextureSet, ItemSlotMaterial) == 112, "Offset mismatch for FJunoComponentCraftingTextureSet::ItemSlotMaterial");
static_assert(offsetof(FJunoComponentCraftingTextureSet, MaskTexture) == 120, "Offset mismatch for FJunoComponentCraftingTextureSet::MaskTexture");
static_assert(offsetof(FJunoComponentCraftingTextureSet, PartTextures) == 128, "Offset mismatch for FJunoComponentCraftingTextureSet::PartTextures");
static_assert(offsetof(FJunoComponentCraftingTextureSet, RiftedTexture) == 144, "Offset mismatch for FJunoComponentCraftingTextureSet::RiftedTexture");
static_assert(offsetof(FJunoComponentCraftingTextureSet, bIsLoaded) == 152, "Offset mismatch for FJunoComponentCraftingTextureSet::bIsLoaded");

// /Script/JunoGameUI.JunoCraftingEvent_CanCraftRecipeChange
// Kind: ScriptStruct; super: none
struct FJunoCraftingEvent_CanCraftRecipeChange
{
public:
    std::uint8_t bCanCraft; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCraftingEvent_CanCraftRecipeChange, bCanCraft) == 0, "Offset mismatch for FJunoCraftingEvent_CanCraftRecipeChange::bCanCraft");

// /Script/JunoGameUI.JunoCraftingOutputGroupInitData
// Kind: ScriptStruct; super: none
struct FJunoCraftingOutputGroupInitData
{
public:
    void* InventoryOwner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName RecipeRowName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoCraftingOutputGroupInitData, InventoryOwner) == 0, "Offset mismatch for FJunoCraftingOutputGroupInitData::InventoryOwner");
static_assert(offsetof(FJunoCraftingOutputGroupInitData, RecipeRowName) == 8, "Offset mismatch for FJunoCraftingOutputGroupInitData::RecipeRowName");

// /Script/JunoGameUI.JunoCraftingStationUIDataEntry
// Kind: ScriptStruct; super: none
struct FJunoCraftingStationUIDataEntry
{
public:
    std::uint8_t SourceTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> CraftingObjectRef; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t CraftStationIcon[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCraftingStationUIDataEntry, SourceTag) == 0, "Offset mismatch for FJunoCraftingStationUIDataEntry::SourceTag");
static_assert(offsetof(FJunoCraftingStationUIDataEntry, CraftingObjectRef) == 8, "Offset mismatch for FJunoCraftingStationUIDataEntry::CraftingObjectRef");
static_assert(offsetof(FJunoCraftingStationUIDataEntry, CraftStationIcon) == 48, "Offset mismatch for FJunoCraftingStationUIDataEntry::CraftStationIcon");

// /Script/JunoGameUI.JunoCurrencyUIData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCurrencyUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Enabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t CurrencyItemDefinition[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t SortingPriority; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCurrencyUIData, Enabled) == 8, "Offset mismatch for FJunoCurrencyUIData::Enabled");
static_assert(offsetof(FJunoCurrencyUIData, CurrencyItemDefinition) == 16, "Offset mismatch for FJunoCurrencyUIData::CurrencyItemDefinition");
static_assert(offsetof(FJunoCurrencyUIData, SortingPriority) == 48, "Offset mismatch for FJunoCurrencyUIData::SortingPriority");

// /Script/JunoGameUI.JunoCustomIndicatorInfo
// Kind: ScriptStruct; super: none
struct FJunoCustomIndicatorInfo
{
public:
    TSoftObjectPtr<void> IndicatedActor; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
    void* IndicatorWidgetClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FJunoCustomIndicatorInfo, IndicatedActor) == 0, "Offset mismatch for FJunoCustomIndicatorInfo::IndicatedActor");
static_assert(offsetof(FJunoCustomIndicatorInfo, IndicatorWidgetClass) == 40, "Offset mismatch for FJunoCustomIndicatorInfo::IndicatorWidgetClass");

// /Script/JunoGameUI.JunoCustomIndicatorLimit
// Kind: ScriptStruct; super: none
struct FJunoCustomIndicatorLimit
{
public:
    std::uint8_t IndicatorTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t MaxCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    float MaxDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoCustomIndicatorLimit, IndicatorTag) == 0, "Offset mismatch for FJunoCustomIndicatorLimit::IndicatorTag");
static_assert(offsetof(FJunoCustomIndicatorLimit, MaxCount) == 4, "Offset mismatch for FJunoCustomIndicatorLimit::MaxCount");
static_assert(offsetof(FJunoCustomIndicatorLimit, MaxDistance) == 8, "Offset mismatch for FJunoCustomIndicatorLimit::MaxDistance");

// /Script/JunoGameUI.JunoCustomIndicatorSetInfo
// Kind: ScriptStruct; super: none
struct FJunoCustomIndicatorSetInfo
{
public:
    TArray<void*> IndicatorList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCustomIndicatorSetInfo, IndicatorList) == 0, "Offset mismatch for FJunoCustomIndicatorSetInfo::IndicatorList");

// /Script/JunoGameUI.JunoCustomMapElement
// Kind: ScriptStruct; super: none
struct FJunoCustomMapElement
{
public:
    std::uint8_t SlateBrush[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t WorldLocation[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VisibilityQuery[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCustomMapElement, SlateBrush) == 0, "Offset mismatch for FJunoCustomMapElement::SlateBrush");
static_assert(offsetof(FJunoCustomMapElement, WorldLocation) == 176, "Offset mismatch for FJunoCustomMapElement::WorldLocation");
static_assert(offsetof(FJunoCustomMapElement, VisibilityQuery) == 200, "Offset mismatch for FJunoCustomMapElement::VisibilityQuery");

// /Script/JunoGameUI.JunoEvent_AckPendingAction
// Kind: ScriptStruct; super: none
struct FJunoEvent_AckPendingAction
{
public:
    FString ActionID; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoEvent_AckPendingAction, ActionID) == 0, "Offset mismatch for FJunoEvent_AckPendingAction::ActionID");

// /Script/JunoGameUI.JunoEvent_BuildingLimitStatusChanged
// Kind: ScriptStruct; super: none
struct FJunoEvent_BuildingLimitStatusChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoEvent_DBNOStateChanged
// Kind: ScriptStruct; super: none
struct FJunoEvent_DBNOStateChanged
{
public:
    void* AffectedPlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInDBNO; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoEvent_DBNOStateChanged, AffectedPlayerState) == 0, "Offset mismatch for FJunoEvent_DBNOStateChanged::AffectedPlayerState");
static_assert(offsetof(FJunoEvent_DBNOStateChanged, bIsInDBNO) == 8, "Offset mismatch for FJunoEvent_DBNOStateChanged::bIsInDBNO");

// /Script/JunoGameUI.JunoEvent_DynamicUIDirectorStarted
// Kind: ScriptStruct; super: none
struct FJunoEvent_DynamicUIDirectorStarted
{
public:
    TWeakObjectPtr<void> PlayerController; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoEvent_DynamicUIDirectorStarted, PlayerController) == 0, "Offset mismatch for FJunoEvent_DynamicUIDirectorStarted::PlayerController");

// /Script/JunoGameUI.JunoEvent_HudMenu_RequestShowModal
// Kind: ScriptStruct; super: none
struct FJunoEvent_HudMenu_RequestShowModal
{
public:
    void* ModalWidget; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_HudMenu_RequestShowModal, ModalWidget) == 0, "Offset mismatch for FJunoEvent_HudMenu_RequestShowModal::ModalWidget");

// /Script/JunoGameUI.JunoEvent_JunoUIDirectorChangeClassMessage
// Kind: ScriptStruct; super: none
struct FJunoEvent_JunoUIDirectorChangeClassMessage
{
public:
    std::uint8_t TagHudLayout[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoEvent_JunoUIDirectorChangeClassMessage, TagHudLayout) == 0, "Offset mismatch for FJunoEvent_JunoUIDirectorChangeClassMessage::TagHudLayout");

// /Script/JunoGameUI.JunoEvent_MarkerHovered
// Kind: ScriptStruct; super: none
struct FJunoEvent_MarkerHovered
{
public:
    std::uint8_t JunoMarker[0x110]; // 0x0000 (Size: 0x110, Type: StructProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoEvent_MarkerHovered, JunoMarker) == 0, "Offset mismatch for FJunoEvent_MarkerHovered::JunoMarker");
static_assert(offsetof(FJunoEvent_MarkerHovered, PlayerState) == 272, "Offset mismatch for FJunoEvent_MarkerHovered::PlayerState");

// /Script/JunoGameUI.JunoEvent_MarkerSelected
// Kind: ScriptStruct; super: none
struct FJunoEvent_MarkerSelected
{
public:
    std::uint8_t JunoMarker[0x110]; // 0x0000 (Size: 0x110, Type: StructProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoEvent_MarkerSelected, JunoMarker) == 0, "Offset mismatch for FJunoEvent_MarkerSelected::JunoMarker");
static_assert(offsetof(FJunoEvent_MarkerSelected, PlayerState) == 272, "Offset mismatch for FJunoEvent_MarkerSelected::PlayerState");

// /Script/JunoGameUI.JunoEvent_MarkerUnhovered
// Kind: ScriptStruct; super: none
struct FJunoEvent_MarkerUnhovered
{
public:
    std::uint8_t JunoMarker[0x110]; // 0x0000 (Size: 0x110, Type: StructProperty)
    TWeakObjectPtr<void> PlayerState; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoEvent_MarkerUnhovered, JunoMarker) == 0, "Offset mismatch for FJunoEvent_MarkerUnhovered::JunoMarker");
static_assert(offsetof(FJunoEvent_MarkerUnhovered, PlayerState) == 272, "Offset mismatch for FJunoEvent_MarkerUnhovered::PlayerState");

// /Script/JunoGameUI.JunoEvent_RequestStartDistanceTracking
// Kind: ScriptStruct; super: none
struct FJunoEvent_RequestStartDistanceTracking
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoEvent_RequestStopDistanceTracking
// Kind: ScriptStruct; super: none
struct FJunoEvent_RequestStopDistanceTracking
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoEvent_ShowPendingAction
// Kind: ScriptStruct; super: none
struct FJunoEvent_ShowPendingAction
{
public:
    FString ActionID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ActionKind; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoEvent_ShowPendingAction, ActionID) == 0, "Offset mismatch for FJunoEvent_ShowPendingAction::ActionID");
static_assert(offsetof(FJunoEvent_ShowPendingAction, ActionKind) == 16, "Offset mismatch for FJunoEvent_ShowPendingAction::ActionKind");

// /Script/JunoGameUI.JunoEvent_UIDataReady
// Kind: ScriptStruct; super: none
struct FJunoEvent_UIDataReady
{
public:
    void* UIDataComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoEvent_UIDataReady, UIDataComponent) == 0, "Offset mismatch for FJunoEvent_UIDataReady::UIDataComponent");

// /Script/JunoGameUI.JunoFilteredItemSlot
// Kind: ScriptStruct; super: none
struct FJunoFilteredItemSlot
{
public:
    std::uint8_t ItemSlot[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::int32_t CachedCount; // 0x0058 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoFilteredItemSlot, ItemSlot) == 0, "Offset mismatch for FJunoFilteredItemSlot::ItemSlot");
static_assert(offsetof(FJunoFilteredItemSlot, CachedCount) == 88, "Offset mismatch for FJunoFilteredItemSlot::CachedCount");

// /Script/JunoGameUI.JunoFocalPointBuildChallengeUIData
// Kind: ScriptStruct; super: none
struct FJunoFocalPointBuildChallengeUIData
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssetIcon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bMet; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0041
    std::int32_t HasCount; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    double PointsToReceive; // 0x0050 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, Name) == 0, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::Name");
static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, Description) == 16, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::Description");
static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, AssetIcon) == 32, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::AssetIcon");
static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, bMet) == 64, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::bMet");
static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, HasCount) == 68, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::HasCount");
static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, RequiredCount) == 72, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::RequiredCount");
static_assert(offsetof(FJunoFocalPointBuildChallengeUIData, PointsToReceive) == 80, "Offset mismatch for FJunoFocalPointBuildChallengeUIData::PointsToReceive");

// /Script/JunoGameUI.JunoFreeBuildCategoryUIDataEntry
// Kind: ScriptStruct; super: none
struct FJunoFreeBuildCategoryUIDataEntry
{
public:
    std::uint8_t CategoryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CategoryIcon[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CategoryTitle[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t bShowInFreeBuild; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInCodex; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoFreeBuildCategoryUIDataEntry, CategoryTag) == 0, "Offset mismatch for FJunoFreeBuildCategoryUIDataEntry::CategoryTag");
static_assert(offsetof(FJunoFreeBuildCategoryUIDataEntry, CategoryIcon) == 8, "Offset mismatch for FJunoFreeBuildCategoryUIDataEntry::CategoryIcon");
static_assert(offsetof(FJunoFreeBuildCategoryUIDataEntry, CategoryTitle) == 40, "Offset mismatch for FJunoFreeBuildCategoryUIDataEntry::CategoryTitle");
static_assert(offsetof(FJunoFreeBuildCategoryUIDataEntry, bShowInFreeBuild) == 56, "Offset mismatch for FJunoFreeBuildCategoryUIDataEntry::bShowInFreeBuild");
static_assert(offsetof(FJunoFreeBuildCategoryUIDataEntry, bShowInCodex) == 57, "Offset mismatch for FJunoFreeBuildCategoryUIDataEntry::bShowInCodex");

// /Script/JunoGameUI.JunoFreeBuildSubCategoryUIDataEntry
// Kind: ScriptStruct; super: none
struct FJunoFreeBuildSubCategoryUIDataEntry
{
public:
    std::uint8_t SubCategoryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubCategoryTitle[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    FText SubCategoryUnknownItemTitle; // 0x0018 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoFreeBuildSubCategoryUIDataEntry, SubCategoryTag) == 0, "Offset mismatch for FJunoFreeBuildSubCategoryUIDataEntry::SubCategoryTag");
static_assert(offsetof(FJunoFreeBuildSubCategoryUIDataEntry, SubCategoryTitle) == 8, "Offset mismatch for FJunoFreeBuildSubCategoryUIDataEntry::SubCategoryTitle");
static_assert(offsetof(FJunoFreeBuildSubCategoryUIDataEntry, SubCategoryUnknownItemTitle) == 24, "Offset mismatch for FJunoFreeBuildSubCategoryUIDataEntry::SubCategoryUnknownItemTitle");

// /Script/JunoGameUI.JunoGameEventStreamData
// Kind: ScriptStruct; super: none
struct FJunoGameEventStreamData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoGuidedBuildingUIData
// Kind: ScriptStruct; super: none
struct FJunoGuidedBuildingUIData
{
public:
    std::uint8_t bIsGuidedBuildingSet; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t TotalStagesInSet; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ExtraIngredientsInSet; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoGuidedBuildingUIData, bIsGuidedBuildingSet) == 0, "Offset mismatch for FJunoGuidedBuildingUIData::bIsGuidedBuildingSet");
static_assert(offsetof(FJunoGuidedBuildingUIData, TotalStagesInSet) == 4, "Offset mismatch for FJunoGuidedBuildingUIData::TotalStagesInSet");
static_assert(offsetof(FJunoGuidedBuildingUIData, ExtraIngredientsInSet) == 8, "Offset mismatch for FJunoGuidedBuildingUIData::ExtraIngredientsInSet");

// /Script/JunoGameUI.JunoHUDShowVillageUpgradeCelebrationEvent
// Kind: ScriptStruct; super: none
struct FJunoHUDShowVillageUpgradeCelebrationEvent
{
public:
    std::uint8_t VillageName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Biome; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t NewLevel; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoHUDShowVillageUpgradeCelebrationEvent, VillageName) == 0, "Offset mismatch for FJunoHUDShowVillageUpgradeCelebrationEvent::VillageName");
static_assert(offsetof(FJunoHUDShowVillageUpgradeCelebrationEvent, Biome) == 16, "Offset mismatch for FJunoHUDShowVillageUpgradeCelebrationEvent::Biome");
static_assert(offsetof(FJunoHUDShowVillageUpgradeCelebrationEvent, NewLevel) == 20, "Offset mismatch for FJunoHUDShowVillageUpgradeCelebrationEvent::NewLevel");

// /Script/JunoGameUI.JunoHealthIndicatorDistanceDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoHealthIndicatorDistanceDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DistanceTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    float ShowDistance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float HideDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float OverpoweredShowDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float OverpoweredHideDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoHealthIndicatorDistanceDataRow, DistanceTag) == 8, "Offset mismatch for FJunoHealthIndicatorDistanceDataRow::DistanceTag");
static_assert(offsetof(FJunoHealthIndicatorDistanceDataRow, ShowDistance) == 12, "Offset mismatch for FJunoHealthIndicatorDistanceDataRow::ShowDistance");
static_assert(offsetof(FJunoHealthIndicatorDistanceDataRow, HideDistance) == 16, "Offset mismatch for FJunoHealthIndicatorDistanceDataRow::HideDistance");
static_assert(offsetof(FJunoHealthIndicatorDistanceDataRow, OverpoweredShowDistance) == 20, "Offset mismatch for FJunoHealthIndicatorDistanceDataRow::OverpoweredShowDistance");
static_assert(offsetof(FJunoHealthIndicatorDistanceDataRow, OverpoweredHideDistance) == 24, "Offset mismatch for FJunoHealthIndicatorDistanceDataRow::OverpoweredHideDistance");

// /Script/JunoGameUI.JunoHudMenuTabRequest
// Kind: ScriptStruct; super: none
struct FJunoHudMenuTabRequest
{
public:
    FName NameId; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* ButtonType; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* ContentType; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0018
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x0020 (Size: 0xF0, Type: StructProperty)
    std::int32_t Priority; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::uint8_t Style; // 0x0114 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoHudMenuTabRequest, NameId) == 0, "Offset mismatch for FJunoHudMenuTabRequest::NameId");
static_assert(offsetof(FJunoHudMenuTabRequest, ButtonType) == 8, "Offset mismatch for FJunoHudMenuTabRequest::ButtonType");
static_assert(offsetof(FJunoHudMenuTabRequest, ContentType) == 16, "Offset mismatch for FJunoHudMenuTabRequest::ContentType");
static_assert(offsetof(FJunoHudMenuTabRequest, TabButtonLabelInfo) == 32, "Offset mismatch for FJunoHudMenuTabRequest::TabButtonLabelInfo");
static_assert(offsetof(FJunoHudMenuTabRequest, Priority) == 272, "Offset mismatch for FJunoHudMenuTabRequest::Priority");
static_assert(offsetof(FJunoHudMenuTabRequest, Style) == 276, "Offset mismatch for FJunoHudMenuTabRequest::Style");

// /Script/JunoGameUI.JunoIngredientInfo
// Kind: ScriptStruct; super: none
struct FJunoIngredientInfo
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t IngredientTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::int32_t OwnedCount; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x0044 (Size: 0x4, Type: IntProperty)
    void* LoadedIngredient; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    FText IngredientNameOverride; // 0x0050 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoIngredientInfo, IngredientTags) == 32, "Offset mismatch for FJunoIngredientInfo::IngredientTags");
static_assert(offsetof(FJunoIngredientInfo, OwnedCount) == 64, "Offset mismatch for FJunoIngredientInfo::OwnedCount");
static_assert(offsetof(FJunoIngredientInfo, RequiredCount) == 68, "Offset mismatch for FJunoIngredientInfo::RequiredCount");
static_assert(offsetof(FJunoIngredientInfo, LoadedIngredient) == 72, "Offset mismatch for FJunoIngredientInfo::LoadedIngredient");
static_assert(offsetof(FJunoIngredientInfo, IngredientNameOverride) == 80, "Offset mismatch for FJunoIngredientInfo::IngredientNameOverride");

// /Script/JunoGameUI.JunoInteractDecoratorDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoInteractDecoratorDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> AssociatedClasses; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DecoratorWidgetClass[0x20]; // 0x0018 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DecoratorPosition; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoInteractDecoratorDataRow, AssociatedClasses) == 8, "Offset mismatch for FJunoInteractDecoratorDataRow::AssociatedClasses");
static_assert(offsetof(FJunoInteractDecoratorDataRow, DecoratorWidgetClass) == 24, "Offset mismatch for FJunoInteractDecoratorDataRow::DecoratorWidgetClass");
static_assert(offsetof(FJunoInteractDecoratorDataRow, DecoratorPosition) == 56, "Offset mismatch for FJunoInteractDecoratorDataRow::DecoratorPosition");

// /Script/JunoGameUI.JunoInventoryGroupUIData
// Kind: ScriptStruct; super: none
struct FJunoInventoryGroupUIData
{
public:
    std::uint8_t GroupTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> OptionalIcon; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoInventoryGroupUIData, GroupTag) == 0, "Offset mismatch for FJunoInventoryGroupUIData::GroupTag");
static_assert(offsetof(FJunoInventoryGroupUIData, DisplayName) == 8, "Offset mismatch for FJunoInventoryGroupUIData::DisplayName");
static_assert(offsetof(FJunoInventoryGroupUIData, OptionalIcon) == 24, "Offset mismatch for FJunoInventoryGroupUIData::OptionalIcon");

// /Script/JunoGameUI.JunoInventoryGroupUIDataList
// Kind: ScriptStruct; super: none
struct FJunoInventoryGroupUIDataList
{
public:
    std::uint8_t AllowedInventoryTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExcludedInventoryTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    TArray<void*> GroupDataList; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoInventoryGroupUIDataList, AllowedInventoryTags) == 0, "Offset mismatch for FJunoInventoryGroupUIDataList::AllowedInventoryTags");
static_assert(offsetof(FJunoInventoryGroupUIDataList, ExcludedInventoryTags) == 32, "Offset mismatch for FJunoInventoryGroupUIDataList::ExcludedInventoryTags");
static_assert(offsetof(FJunoInventoryGroupUIDataList, GroupDataList) == 64, "Offset mismatch for FJunoInventoryGroupUIDataList::GroupDataList");

// /Script/JunoGameUI.JunoMapElement
// Kind: ScriptStruct; super: none
struct FJunoMapElement
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Brush[0xB0]; // 0x0010 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Font[0x58]; // 0x00C0 (Size: 0x58, Type: StructProperty)
    std::uint8_t Text[0x10]; // 0x0118 (Size: 0x10, Type: TextProperty)
    float TextPadding; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x14]; // 0x012C (Size: 0x14, Type: StructProperty)
    std::uint8_t WorldLocation[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    std::uint8_t DrawSize[0x8]; // 0x0150 (Size: 0x8, Type: StructProperty)
    float Rotation; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeTypeX; // 0x015C (Size: 0x1, Type: EnumProperty)
    std::uint8_t SizeTypeY; // 0x015D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x015E
    FString LayerName; // 0x0160 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0170
    std::uint8_t bClampToScreenEdge; // 0x0172 (Size: 0x1, Type: BoolProperty)
    // 0x0172 BoolProperty bDrawAnchoringArrow (shared storage)
    // 0x0172 BoolProperty bDrawFastTravelIcon (shared storage)
    // 0x0172 BoolProperty bScaleTextToIconSize (shared storage)
};

static_assert(offsetof(FJunoMapElement, Guid) == 0, "Offset mismatch for FJunoMapElement::Guid");
static_assert(offsetof(FJunoMapElement, Brush) == 16, "Offset mismatch for FJunoMapElement::Brush");
static_assert(offsetof(FJunoMapElement, Font) == 192, "Offset mismatch for FJunoMapElement::Font");
static_assert(offsetof(FJunoMapElement, Text) == 280, "Offset mismatch for FJunoMapElement::Text");
static_assert(offsetof(FJunoMapElement, TextPadding) == 296, "Offset mismatch for FJunoMapElement::TextPadding");
static_assert(offsetof(FJunoMapElement, Color) == 300, "Offset mismatch for FJunoMapElement::Color");
static_assert(offsetof(FJunoMapElement, WorldLocation) == 320, "Offset mismatch for FJunoMapElement::WorldLocation");
static_assert(offsetof(FJunoMapElement, DrawSize) == 336, "Offset mismatch for FJunoMapElement::DrawSize");
static_assert(offsetof(FJunoMapElement, Rotation) == 344, "Offset mismatch for FJunoMapElement::Rotation");
static_assert(offsetof(FJunoMapElement, SizeTypeX) == 348, "Offset mismatch for FJunoMapElement::SizeTypeX");
static_assert(offsetof(FJunoMapElement, SizeTypeY) == 349, "Offset mismatch for FJunoMapElement::SizeTypeY");
static_assert(offsetof(FJunoMapElement, LayerName) == 352, "Offset mismatch for FJunoMapElement::LayerName");
static_assert(offsetof(FJunoMapElement, bClampToScreenEdge) == 370, "Offset mismatch for FJunoMapElement::bClampToScreenEdge");

// /Script/JunoGameUI.JunoMapElementList
// Kind: ScriptStruct; super: none
struct FJunoMapElementList
{
public:
    TArray<void*> MapElements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoMapElementList, MapElements) == 0, "Offset mismatch for FJunoMapElementList::MapElements");

// /Script/JunoGameUI.JunoMapLayers
// Kind: ScriptStruct; super: none
struct FJunoMapLayers
{
public:
    TMap<void*, void*> Layers; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DeferredElements; // 0x0010 (Size: 0x10, Type: MapProperty)
    TSet<void*> MapLegendEntries; // 0x0020 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FJunoMapLayers, Layers) == 0, "Offset mismatch for FJunoMapLayers::Layers");
static_assert(offsetof(FJunoMapLayers, DeferredElements) == 16, "Offset mismatch for FJunoMapLayers::DeferredElements");
static_assert(offsetof(FJunoMapLayers, MapLegendEntries) == 32, "Offset mismatch for FJunoMapLayers::MapLegendEntries");

// /Script/JunoGameUI.JunoMapLegendEntry
// Kind: ScriptStruct; super: none
struct FJunoMapLegendEntry
{
public:
    FName ID; // 0x0000 (Size: 0x8, Type: NameProperty)
    FText DisplayName; // 0x0008 (Size: 0x18, Type: TextProperty)
    std::uint8_t Brush[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMapLegendEntry, ID) == 0, "Offset mismatch for FJunoMapLegendEntry::ID");
static_assert(offsetof(FJunoMapLegendEntry, DisplayName) == 8, "Offset mismatch for FJunoMapLegendEntry::DisplayName");
static_assert(offsetof(FJunoMapLegendEntry, Brush) == 32, "Offset mismatch for FJunoMapLegendEntry::Brush");

// /Script/JunoGameUI.JunoMapMarkerEntryInitData
// Kind: ScriptStruct; super: none
struct FJunoMapMarkerEntryInitData
{
public:
    std::uint8_t WidgetEntryType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t EntryIcon[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EntryColor[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMapMarkerEntryInitData, WidgetEntryType) == 0, "Offset mismatch for FJunoMapMarkerEntryInitData::WidgetEntryType");
static_assert(offsetof(FJunoMapMarkerEntryInitData, EntryIcon) == 8, "Offset mismatch for FJunoMapMarkerEntryInitData::EntryIcon");
static_assert(offsetof(FJunoMapMarkerEntryInitData, EntryColor) == 40, "Offset mismatch for FJunoMapMarkerEntryInitData::EntryColor");

// /Script/JunoGameUI.JunoMapTileTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoMapTileTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MapTileMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoMapTileTableRow, MapTileMaterial) == 8, "Offset mismatch for FJunoMapTileTableRow::MapTileMaterial");

// /Script/JunoGameUI.JunoMapZoomBounds
// Kind: ScriptStruct; super: none
struct FJunoMapZoomBounds
{
public:
    float MinZoom; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaximumZoom; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DefaultZoom; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoMapZoomBounds, MinZoom) == 0, "Offset mismatch for FJunoMapZoomBounds::MinZoom");
static_assert(offsetof(FJunoMapZoomBounds, MaximumZoom) == 4, "Offset mismatch for FJunoMapZoomBounds::MaximumZoom");
static_assert(offsetof(FJunoMapZoomBounds, DefaultZoom) == 8, "Offset mismatch for FJunoMapZoomBounds::DefaultZoom");

// /Script/JunoGameUI.JunoMarkerMaterialInstances
// Kind: ScriptStruct; super: none
struct FJunoMarkerMaterialInstances
{
public:
    TArray<void*> Instances; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoMarkerMaterialInstances, Instances) == 0, "Offset mismatch for FJunoMarkerMaterialInstances::Instances");

// /Script/JunoGameUI.JunoMenuSceneOperation
// Kind: ScriptStruct; super: none
struct FJunoMenuSceneOperation
{
public:
    std::uint8_t WidgetSceneAndIndex[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoMenuSceneOperation, WidgetSceneAndIndex) == 0, "Offset mismatch for FJunoMenuSceneOperation::WidgetSceneAndIndex");

// /Script/JunoGameUI.JunoModalDescription
// Kind: ScriptStruct; super: none
struct FJunoModalDescription
{
public:
    void* ModalScene; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Title[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConfirmButtonText[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t CancelButtonText[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConfirmAction[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t CancelAction[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoModalDescription, ModalScene) == 0, "Offset mismatch for FJunoModalDescription::ModalScene");
static_assert(offsetof(FJunoModalDescription, Title) == 8, "Offset mismatch for FJunoModalDescription::Title");
static_assert(offsetof(FJunoModalDescription, Description) == 24, "Offset mismatch for FJunoModalDescription::Description");
static_assert(offsetof(FJunoModalDescription, ConfirmButtonText) == 40, "Offset mismatch for FJunoModalDescription::ConfirmButtonText");
static_assert(offsetof(FJunoModalDescription, CancelButtonText) == 56, "Offset mismatch for FJunoModalDescription::CancelButtonText");
static_assert(offsetof(FJunoModalDescription, ConfirmAction) == 72, "Offset mismatch for FJunoModalDescription::ConfirmAction");
static_assert(offsetof(FJunoModalDescription, CancelAction) == 88, "Offset mismatch for FJunoModalDescription::CancelAction");

// /Script/JunoGameUI.JunoModalSceneOperation
// Kind: ScriptStruct; super: none
struct FJunoModalSceneOperation
{
public:
    void* ModalScene; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Payload; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoModalSceneOperation, ModalScene) == 0, "Offset mismatch for FJunoModalSceneOperation::ModalScene");
static_assert(offsetof(FJunoModalSceneOperation, Payload) == 8, "Offset mismatch for FJunoModalSceneOperation::Payload");

// /Script/JunoGameUI.JunoModalSelectionChoice
// Kind: ScriptStruct; super: none
struct FJunoModalSelectionChoice
{
public:
    std::uint8_t SelectionTitle[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Action[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate SelectionDelegate; // 0x0020 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(FJunoModalSelectionChoice, SelectionTitle) == 0, "Offset mismatch for FJunoModalSelectionChoice::SelectionTitle");
static_assert(offsetof(FJunoModalSelectionChoice, Action) == 16, "Offset mismatch for FJunoModalSelectionChoice::Action");
static_assert(offsetof(FJunoModalSelectionChoice, SelectionDelegate) == 32, "Offset mismatch for FJunoModalSelectionChoice::SelectionDelegate");

// /Script/JunoGameUI.JunoNotificationData
// Kind: ScriptStruct; super: none
struct FJunoNotificationData
{
public:
    std::uint8_t NotificationType[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> ItemDefinitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AdditionalTags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    FString PlayerName; // 0x0038 (Size: 0x10, Type: StrProperty)
    void* InitObject; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoNotificationData, NotificationType) == 0, "Offset mismatch for FJunoNotificationData::NotificationType");
static_assert(offsetof(FJunoNotificationData, ItemDefinitions) == 8, "Offset mismatch for FJunoNotificationData::ItemDefinitions");
static_assert(offsetof(FJunoNotificationData, AdditionalTags) == 24, "Offset mismatch for FJunoNotificationData::AdditionalTags");
static_assert(offsetof(FJunoNotificationData, PlayerName) == 56, "Offset mismatch for FJunoNotificationData::PlayerName");
static_assert(offsetof(FJunoNotificationData, InitObject) == 72, "Offset mismatch for FJunoNotificationData::InitObject");

// /Script/JunoGameUI.JunoNotificationEvent
// Kind: ScriptStruct; super: none
struct FJunoNotificationEvent
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t NotificationSoftClass[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    void* InitObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoNotificationEvent, Tag) == 0, "Offset mismatch for FJunoNotificationEvent::Tag");
static_assert(offsetof(FJunoNotificationEvent, NotificationSoftClass) == 8, "Offset mismatch for FJunoNotificationEvent::NotificationSoftClass");
static_assert(offsetof(FJunoNotificationEvent, InitObject) == 40, "Offset mismatch for FJunoNotificationEvent::InitObject");

// /Script/JunoGameUI.JunoNpcArmorViewModelInitParams
// Kind: ScriptStruct; super: none
struct FJunoNpcArmorViewModelInitParams
{
public:
    void* NpcArmorActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float InMinCollisionRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float InMaxCollisionRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float InMinScalingDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float InMaxScalingDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoNpcArmorViewModelInitParams, NpcArmorActor) == 0, "Offset mismatch for FJunoNpcArmorViewModelInitParams::NpcArmorActor");
static_assert(offsetof(FJunoNpcArmorViewModelInitParams, InMinCollisionRadius) == 8, "Offset mismatch for FJunoNpcArmorViewModelInitParams::InMinCollisionRadius");
static_assert(offsetof(FJunoNpcArmorViewModelInitParams, InMaxCollisionRadius) == 12, "Offset mismatch for FJunoNpcArmorViewModelInitParams::InMaxCollisionRadius");
static_assert(offsetof(FJunoNpcArmorViewModelInitParams, InMinScalingDistance) == 16, "Offset mismatch for FJunoNpcArmorViewModelInitParams::InMinScalingDistance");
static_assert(offsetof(FJunoNpcArmorViewModelInitParams, InMaxScalingDistance) == 20, "Offset mismatch for FJunoNpcArmorViewModelInitParams::InMaxScalingDistance");

// /Script/JunoGameUI.JunoNpcHealthViewModelInitParams
// Kind: ScriptStruct; super: none
struct FJunoNpcHealthViewModelInitParams
{
public:
    void* NPCActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float InMinCollisionRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float InMaxCollisionRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float InMinScalingDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float InMaxScalingDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoNpcHealthViewModelInitParams, NPCActor) == 0, "Offset mismatch for FJunoNpcHealthViewModelInitParams::NPCActor");
static_assert(offsetof(FJunoNpcHealthViewModelInitParams, InMinCollisionRadius) == 8, "Offset mismatch for FJunoNpcHealthViewModelInitParams::InMinCollisionRadius");
static_assert(offsetof(FJunoNpcHealthViewModelInitParams, InMaxCollisionRadius) == 12, "Offset mismatch for FJunoNpcHealthViewModelInitParams::InMaxCollisionRadius");
static_assert(offsetof(FJunoNpcHealthViewModelInitParams, InMinScalingDistance) == 16, "Offset mismatch for FJunoNpcHealthViewModelInitParams::InMinScalingDistance");
static_assert(offsetof(FJunoNpcHealthViewModelInitParams, InMaxScalingDistance) == 20, "Offset mismatch for FJunoNpcHealthViewModelInitParams::InMaxScalingDistance");

// /Script/JunoGameUI.JunoParticipantUIState
// Kind: ScriptStruct; super: TableRowBase
struct FJunoParticipantUIState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Priority; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t StateTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t PrimaryIcon[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> SecondaryIcon; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoParticipantUIState, Priority) == 8, "Offset mismatch for FJunoParticipantUIState::Priority");
static_assert(offsetof(FJunoParticipantUIState, StateTag) == 12, "Offset mismatch for FJunoParticipantUIState::StateTag");
static_assert(offsetof(FJunoParticipantUIState, PrimaryIcon) == 16, "Offset mismatch for FJunoParticipantUIState::PrimaryIcon");
static_assert(offsetof(FJunoParticipantUIState, SecondaryIcon) == 48, "Offset mismatch for FJunoParticipantUIState::SecondaryIcon");

// /Script/JunoGameUI.JunoPickupStreamData
// Kind: ScriptStruct; super: none
struct FJunoPickupStreamData
{
public:
    TWeakObjectPtr<void> PickupWidget; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    void* ItemDefinition; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::int32_t StackCount; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalInventoryCount; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t ItemRarity; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x17]; // 0x0029
    void* WorldItem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoPickupStreamData, PickupWidget) == 0, "Offset mismatch for FJunoPickupStreamData::PickupWidget");
static_assert(offsetof(FJunoPickupStreamData, DisplayName) == 8, "Offset mismatch for FJunoPickupStreamData::DisplayName");
static_assert(offsetof(FJunoPickupStreamData, ItemDefinition) == 24, "Offset mismatch for FJunoPickupStreamData::ItemDefinition");
static_assert(offsetof(FJunoPickupStreamData, StackCount) == 32, "Offset mismatch for FJunoPickupStreamData::StackCount");
static_assert(offsetof(FJunoPickupStreamData, TotalInventoryCount) == 36, "Offset mismatch for FJunoPickupStreamData::TotalInventoryCount");
static_assert(offsetof(FJunoPickupStreamData, ItemRarity) == 40, "Offset mismatch for FJunoPickupStreamData::ItemRarity");
static_assert(offsetof(FJunoPickupStreamData, WorldItem) == 64, "Offset mismatch for FJunoPickupStreamData::WorldItem");

// /Script/JunoGameUI.JunoPickupStreamEvent
// Kind: ScriptStruct; super: none
struct FJunoPickupStreamEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoPlayerHealthUpdatePayload
// Kind: ScriptStruct; super: none
struct FJunoPlayerHealthUpdatePayload
{
public:
    float CurrentHealth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxHealth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BonusHealth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RevivalPercentageComplete; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CurrentShield; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxShield; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoPlayerHealthUpdatePayload, CurrentHealth) == 0, "Offset mismatch for FJunoPlayerHealthUpdatePayload::CurrentHealth");
static_assert(offsetof(FJunoPlayerHealthUpdatePayload, MaxHealth) == 4, "Offset mismatch for FJunoPlayerHealthUpdatePayload::MaxHealth");
static_assert(offsetof(FJunoPlayerHealthUpdatePayload, BonusHealth) == 8, "Offset mismatch for FJunoPlayerHealthUpdatePayload::BonusHealth");
static_assert(offsetof(FJunoPlayerHealthUpdatePayload, RevivalPercentageComplete) == 12, "Offset mismatch for FJunoPlayerHealthUpdatePayload::RevivalPercentageComplete");
static_assert(offsetof(FJunoPlayerHealthUpdatePayload, CurrentShield) == 16, "Offset mismatch for FJunoPlayerHealthUpdatePayload::CurrentShield");
static_assert(offsetof(FJunoPlayerHealthUpdatePayload, MaxShield) == 20, "Offset mismatch for FJunoPlayerHealthUpdatePayload::MaxShield");

// /Script/JunoGameUI.JunoQuickBuildSlotData
// Kind: ScriptStruct; super: none
struct FJunoQuickBuildSlotData
{
public:
    std::uint8_t Icon[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FText DisplayName; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoQuickBuildSlotData, Icon) == 0, "Offset mismatch for FJunoQuickBuildSlotData::Icon");
static_assert(offsetof(FJunoQuickBuildSlotData, DisplayName) == 32, "Offset mismatch for FJunoQuickBuildSlotData::DisplayName");

// /Script/JunoGameUI.JunoTaggedWidget
// Kind: ScriptStruct; super: none
struct FJunoTaggedWidget
{
public:
    void* WidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t Priority; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoTaggedWidget, WidgetClass) == 0, "Offset mismatch for FJunoTaggedWidget::WidgetClass");
static_assert(offsetof(FJunoTaggedWidget, Priority) == 8, "Offset mismatch for FJunoTaggedWidget::Priority");

// /Script/JunoGameUI.JunoTaggedWidgetScene
// Kind: ScriptStruct; super: none
struct FJunoTaggedWidgetScene
{
public:
    std::uint8_t WidgetSceneAndIndex[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoTaggedWidgetScene, WidgetSceneAndIndex) == 0, "Offset mismatch for FJunoTaggedWidgetScene::WidgetSceneAndIndex");
static_assert(offsetof(FJunoTaggedWidgetScene, Priority) == 16, "Offset mismatch for FJunoTaggedWidgetScene::Priority");

// /Script/JunoGameUI.JunoUITutorialFlowStageTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoUITutorialFlowStageTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t JournalTaskTrigger[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t JournalTaskTriggerState; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequireJournalTaskTracked; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    std::uint8_t MinimalHUDScene[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InventoryItemTagsToHighlight[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t BuildingEntryTagsToHighlight[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    TArray<void*> CraftingRecipeNamesToHighlight; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MenuTabToHighlight[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t MenuTabToDisable[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSuppressRegularBangs; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoUITutorialFlowStageTableRow, JournalTaskTrigger) == 8, "Offset mismatch for FJunoUITutorialFlowStageTableRow::JournalTaskTrigger");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, JournalTaskTriggerState) == 12, "Offset mismatch for FJunoUITutorialFlowStageTableRow::JournalTaskTriggerState");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, bRequireJournalTaskTracked) == 13, "Offset mismatch for FJunoUITutorialFlowStageTableRow::bRequireJournalTaskTracked");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, MinimalHUDScene) == 16, "Offset mismatch for FJunoUITutorialFlowStageTableRow::MinimalHUDScene");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, InventoryItemTagsToHighlight) == 48, "Offset mismatch for FJunoUITutorialFlowStageTableRow::InventoryItemTagsToHighlight");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, BuildingEntryTagsToHighlight) == 80, "Offset mismatch for FJunoUITutorialFlowStageTableRow::BuildingEntryTagsToHighlight");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, CraftingRecipeNamesToHighlight) == 112, "Offset mismatch for FJunoUITutorialFlowStageTableRow::CraftingRecipeNamesToHighlight");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, MenuTabToHighlight) == 128, "Offset mismatch for FJunoUITutorialFlowStageTableRow::MenuTabToHighlight");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, MenuTabToDisable) == 132, "Offset mismatch for FJunoUITutorialFlowStageTableRow::MenuTabToDisable");
static_assert(offsetof(FJunoUITutorialFlowStageTableRow, bSuppressRegularBangs) == 136, "Offset mismatch for FJunoUITutorialFlowStageTableRow::bSuppressRegularBangs");

// /Script/JunoGameUI.JunoVillageRewardEntryInfo
// Kind: ScriptStruct; super: none
struct FJunoVillageRewardEntryInfo
{
public:
    std::int32_t AwesomeLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t AwesomePerkReward[0x40]; // 0x0008 (Size: 0x40, Type: StructProperty)
    std::int32_t NewVillagerSlotCount; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    TArray<void*> KnowledgeBundles; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ButtonIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::int32_t IndexWithinGroup; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::int32_t ButtonsWithinGroup; // 0x0068 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoVillageRewardEntryInfo, AwesomeLevel) == 0, "Offset mismatch for FJunoVillageRewardEntryInfo::AwesomeLevel");
static_assert(offsetof(FJunoVillageRewardEntryInfo, AwesomePerkReward) == 8, "Offset mismatch for FJunoVillageRewardEntryInfo::AwesomePerkReward");
static_assert(offsetof(FJunoVillageRewardEntryInfo, NewVillagerSlotCount) == 72, "Offset mismatch for FJunoVillageRewardEntryInfo::NewVillagerSlotCount");
static_assert(offsetof(FJunoVillageRewardEntryInfo, KnowledgeBundles) == 80, "Offset mismatch for FJunoVillageRewardEntryInfo::KnowledgeBundles");
static_assert(offsetof(FJunoVillageRewardEntryInfo, ButtonIndex) == 96, "Offset mismatch for FJunoVillageRewardEntryInfo::ButtonIndex");
static_assert(offsetof(FJunoVillageRewardEntryInfo, IndexWithinGroup) == 100, "Offset mismatch for FJunoVillageRewardEntryInfo::IndexWithinGroup");
static_assert(offsetof(FJunoVillageRewardEntryInfo, ButtonsWithinGroup) == 104, "Offset mismatch for FJunoVillageRewardEntryInfo::ButtonsWithinGroup");

// /Script/JunoGameUI.JunoVillageUIData
// Kind: ScriptStruct; super: none
struct FJunoVillageUIData
{
public:
    std::uint8_t POIName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Marker[0x110]; // 0x0010 (Size: 0x110, Type: StructProperty)
    std::uint8_t MarkerId[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t BiomeTag[0x4]; // 0x0130 (Size: 0x4, Type: StructProperty)
    std::int32_t AwesomeLevel; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxAwesomeLevel; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t AwesomePoints; // 0x013C (Size: 0x4, Type: IntProperty)
    std::int32_t AwesomePointGoal; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::int32_t AwesomePointFloor; // 0x0144 (Size: 0x4, Type: IntProperty)
    std::int32_t AwesomePointsNeededForNextLevel; // 0x0148 (Size: 0x4, Type: IntProperty)
    float AwesomeProgressToNextLevel; // 0x014C (Size: 0x4, Type: FloatProperty)
    float AwesomeEffectiveProgressToNextLevel; // 0x0150 (Size: 0x4, Type: FloatProperty)
    std::int32_t AwesomeLevelFromCurrentPoints; // 0x0154 (Size: 0x4, Type: IntProperty)
    TArray<void*> AwesomeLevelRewardEntries; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentUpgradeRequirements[0x20]; // 0x0168 (Size: 0x20, Type: StructProperty)
    TArray<void*> UnlockedPlayerPerks; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveNPCEntries; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxNPCs; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::int32_t NPCSlots; // 0x01AC (Size: 0x4, Type: IntProperty)
    std::int32_t CreatureSlots; // 0x01B0 (Size: 0x4, Type: IntProperty)
    std::int32_t SharedSlots; // 0x01B4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNPCsEver; // 0x01B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x01BC
    TArray<void*> VisitingNPCEntries; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveCreatureEntries; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> JobCounts; // 0x01E0 (Size: 0x10, Type: MapProperty)
    TArray<void*> KnowledgeBundles; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    void* VillageCenterItemDefinition; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasReachedGlobalNPCsCap; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0209
    std::int32_t FreeSlotsForNPCs; // 0x020C (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalNPCCount; // 0x0210 (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalNPCsCap; // 0x0214 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasReachedGlobalCreaturesCap; // 0x0218 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0219
    std::int32_t FreeSlotsForCreatures; // 0x021C (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalCreatureCount; // 0x0220 (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalCreaturesCap; // 0x0224 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoVillageUIData, POIName) == 0, "Offset mismatch for FJunoVillageUIData::POIName");
static_assert(offsetof(FJunoVillageUIData, Marker) == 16, "Offset mismatch for FJunoVillageUIData::Marker");
static_assert(offsetof(FJunoVillageUIData, MarkerId) == 288, "Offset mismatch for FJunoVillageUIData::MarkerId");
static_assert(offsetof(FJunoVillageUIData, BiomeTag) == 304, "Offset mismatch for FJunoVillageUIData::BiomeTag");
static_assert(offsetof(FJunoVillageUIData, AwesomeLevel) == 308, "Offset mismatch for FJunoVillageUIData::AwesomeLevel");
static_assert(offsetof(FJunoVillageUIData, MaxAwesomeLevel) == 312, "Offset mismatch for FJunoVillageUIData::MaxAwesomeLevel");
static_assert(offsetof(FJunoVillageUIData, AwesomePoints) == 316, "Offset mismatch for FJunoVillageUIData::AwesomePoints");
static_assert(offsetof(FJunoVillageUIData, AwesomePointGoal) == 320, "Offset mismatch for FJunoVillageUIData::AwesomePointGoal");
static_assert(offsetof(FJunoVillageUIData, AwesomePointFloor) == 324, "Offset mismatch for FJunoVillageUIData::AwesomePointFloor");
static_assert(offsetof(FJunoVillageUIData, AwesomePointsNeededForNextLevel) == 328, "Offset mismatch for FJunoVillageUIData::AwesomePointsNeededForNextLevel");
static_assert(offsetof(FJunoVillageUIData, AwesomeProgressToNextLevel) == 332, "Offset mismatch for FJunoVillageUIData::AwesomeProgressToNextLevel");
static_assert(offsetof(FJunoVillageUIData, AwesomeEffectiveProgressToNextLevel) == 336, "Offset mismatch for FJunoVillageUIData::AwesomeEffectiveProgressToNextLevel");
static_assert(offsetof(FJunoVillageUIData, AwesomeLevelFromCurrentPoints) == 340, "Offset mismatch for FJunoVillageUIData::AwesomeLevelFromCurrentPoints");
static_assert(offsetof(FJunoVillageUIData, AwesomeLevelRewardEntries) == 344, "Offset mismatch for FJunoVillageUIData::AwesomeLevelRewardEntries");
static_assert(offsetof(FJunoVillageUIData, CurrentUpgradeRequirements) == 360, "Offset mismatch for FJunoVillageUIData::CurrentUpgradeRequirements");
static_assert(offsetof(FJunoVillageUIData, UnlockedPlayerPerks) == 392, "Offset mismatch for FJunoVillageUIData::UnlockedPlayerPerks");
static_assert(offsetof(FJunoVillageUIData, ActiveNPCEntries) == 408, "Offset mismatch for FJunoVillageUIData::ActiveNPCEntries");
static_assert(offsetof(FJunoVillageUIData, MaxNPCs) == 424, "Offset mismatch for FJunoVillageUIData::MaxNPCs");
static_assert(offsetof(FJunoVillageUIData, NPCSlots) == 428, "Offset mismatch for FJunoVillageUIData::NPCSlots");
static_assert(offsetof(FJunoVillageUIData, CreatureSlots) == 432, "Offset mismatch for FJunoVillageUIData::CreatureSlots");
static_assert(offsetof(FJunoVillageUIData, SharedSlots) == 436, "Offset mismatch for FJunoVillageUIData::SharedSlots");
static_assert(offsetof(FJunoVillageUIData, MaxNPCsEver) == 440, "Offset mismatch for FJunoVillageUIData::MaxNPCsEver");
static_assert(offsetof(FJunoVillageUIData, VisitingNPCEntries) == 448, "Offset mismatch for FJunoVillageUIData::VisitingNPCEntries");
static_assert(offsetof(FJunoVillageUIData, ActiveCreatureEntries) == 464, "Offset mismatch for FJunoVillageUIData::ActiveCreatureEntries");
static_assert(offsetof(FJunoVillageUIData, JobCounts) == 480, "Offset mismatch for FJunoVillageUIData::JobCounts");
static_assert(offsetof(FJunoVillageUIData, KnowledgeBundles) == 496, "Offset mismatch for FJunoVillageUIData::KnowledgeBundles");
static_assert(offsetof(FJunoVillageUIData, VillageCenterItemDefinition) == 512, "Offset mismatch for FJunoVillageUIData::VillageCenterItemDefinition");
static_assert(offsetof(FJunoVillageUIData, bHasReachedGlobalNPCsCap) == 520, "Offset mismatch for FJunoVillageUIData::bHasReachedGlobalNPCsCap");
static_assert(offsetof(FJunoVillageUIData, FreeSlotsForNPCs) == 524, "Offset mismatch for FJunoVillageUIData::FreeSlotsForNPCs");
static_assert(offsetof(FJunoVillageUIData, GlobalNPCCount) == 528, "Offset mismatch for FJunoVillageUIData::GlobalNPCCount");
static_assert(offsetof(FJunoVillageUIData, GlobalNPCsCap) == 532, "Offset mismatch for FJunoVillageUIData::GlobalNPCsCap");
static_assert(offsetof(FJunoVillageUIData, bHasReachedGlobalCreaturesCap) == 536, "Offset mismatch for FJunoVillageUIData::bHasReachedGlobalCreaturesCap");
static_assert(offsetof(FJunoVillageUIData, FreeSlotsForCreatures) == 540, "Offset mismatch for FJunoVillageUIData::FreeSlotsForCreatures");
static_assert(offsetof(FJunoVillageUIData, GlobalCreatureCount) == 544, "Offset mismatch for FJunoVillageUIData::GlobalCreatureCount");
static_assert(offsetof(FJunoVillageUIData, GlobalCreaturesCap) == 548, "Offset mismatch for FJunoVillageUIData::GlobalCreaturesCap");

// /Script/JunoGameUI.JunoWidgetPool
// Kind: ScriptStruct; super: none
struct FJunoWidgetPool
{
public:
    TArray<void*> ActiveWidgets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> InactiveWidgetsMap; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoWidgetPool, ActiveWidgets) == 0, "Offset mismatch for FJunoWidgetPool::ActiveWidgets");
static_assert(offsetof(FJunoWidgetPool, InactiveWidgetsMap) == 16, "Offset mismatch for FJunoWidgetPool::InactiveWidgetsMap");

// /Script/JunoGameUI.JunoWidgetPoolInitData
// Kind: ScriptStruct; super: none
struct FJunoWidgetPoolInitData
{
public:
    void* WidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t Count; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoWidgetPoolInitData, WidgetClass) == 0, "Offset mismatch for FJunoWidgetPoolInitData::WidgetClass");
static_assert(offsetof(FJunoWidgetPoolInitData, Count) == 8, "Offset mismatch for FJunoWidgetPoolInitData::Count");

// /Script/JunoGameUI.JunoWidgetSceneAndIndex
// Kind: ScriptStruct; super: none
struct FJunoWidgetSceneAndIndex
{
public:
    void* WidgetScene; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WidgetAllowedIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRemoveOnDeath; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoWidgetSceneAndIndex, WidgetScene) == 0, "Offset mismatch for FJunoWidgetSceneAndIndex::WidgetScene");
static_assert(offsetof(FJunoWidgetSceneAndIndex, WidgetAllowedIndex) == 8, "Offset mismatch for FJunoWidgetSceneAndIndex::WidgetAllowedIndex");
static_assert(offsetof(FJunoWidgetSceneAndIndex, bRemoveOnDeath) == 12, "Offset mismatch for FJunoWidgetSceneAndIndex::bRemoveOnDeath");

// /Script/JunoGameUI.Juno_CodexUIData_DataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJuno_CodexUIData_DataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> CodexUIData; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJuno_CodexUIData_DataRow, CodexUIData) == 8, "Offset mismatch for FJuno_CodexUIData_DataRow::CodexUIData");

// /Script/JunoGameUI.PendingActionMsgText
// Kind: ScriptStruct; super: none
struct FPendingActionMsgText
{
public:
    std::uint8_t Title[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FPendingActionMsgText, Title) == 0, "Offset mismatch for FPendingActionMsgText::Title");
static_assert(offsetof(FPendingActionMsgText, Description) == 16, "Offset mismatch for FPendingActionMsgText::Description");

// /Script/JunoGameUI.PriorityQueueNode
// Kind: ScriptStruct; super: none
struct FPriorityQueueNode
{
public:
    void* WidgetVM; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Priority; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPriorityQueueNode, WidgetVM) == 0, "Offset mismatch for FPriorityQueueNode::WidgetVM");
static_assert(offsetof(FPriorityQueueNode, Priority) == 8, "Offset mismatch for FPriorityQueueNode::Priority");

// /Script/JunoGameUI.TrackedTouchData
// Kind: ScriptStruct; super: none
struct FTrackedTouchData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.GameStateComponent_JunoFeedback
// Kind: Class; super: GameStateComponent_PlayerFeedback
class UGameStateComponent_JunoFeedback
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UGameStateComponent_JunoFeedback, PrimaryComponentTick) == 56, "Offset mismatch for UGameStateComponent_JunoFeedback::PrimaryComponentTick");
static_assert(offsetof(UGameStateComponent_JunoFeedback, ComponentTags) == 104, "Offset mismatch for UGameStateComponent_JunoFeedback::ComponentTags");
static_assert(offsetof(UGameStateComponent_JunoFeedback, AssetUserData) == 120, "Offset mismatch for UGameStateComponent_JunoFeedback::AssetUserData");
static_assert(offsetof(UGameStateComponent_JunoFeedback, UCSSerializationIndex) == 144, "Offset mismatch for UGameStateComponent_JunoFeedback::UCSSerializationIndex");
static_assert(offsetof(UGameStateComponent_JunoFeedback, bNetAddressable) == 152, "Offset mismatch for UGameStateComponent_JunoFeedback::bNetAddressable");
static_assert(offsetof(UGameStateComponent_JunoFeedback, bAutoActivate) == 154, "Offset mismatch for UGameStateComponent_JunoFeedback::bAutoActivate");
static_assert(offsetof(UGameStateComponent_JunoFeedback, bIsEditorOnly) == 155, "Offset mismatch for UGameStateComponent_JunoFeedback::bIsEditorOnly");
static_assert(offsetof(UGameStateComponent_JunoFeedback, CreationMethod) == 185, "Offset mismatch for UGameStateComponent_JunoFeedback::CreationMethod");
static_assert(offsetof(UGameStateComponent_JunoFeedback, OnComponentActivated) == 186, "Offset mismatch for UGameStateComponent_JunoFeedback::OnComponentActivated");
static_assert(offsetof(UGameStateComponent_JunoFeedback, OnComponentDeactivated) == 187, "Offset mismatch for UGameStateComponent_JunoFeedback::OnComponentDeactivated");

// /Script/JunoGameUI.GridListDataInterface
// Kind: Class; super: Interface
class UGridListDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.GridListView
// Kind: Class; super: CommonTileView
class UGridListView
{
public:
    std::uint8_t Pad_0000[0x1010]; // 0x0000
    TArray<void*> GridListViewInfo; // 0x1010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAlwaysShowScrollbar; // 0x1020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysShowScrollbarTrack; // 0x1021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x1022
    std::uint8_t ScrollbarThickness[0x10]; // 0x1028 (Size: 0x10, Type: StructProperty)
    std::uint8_t GeneratedGridListSlotInfo[0x1]; // 0x1038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGridListView, GridListViewInfo) == 4112, "Offset mismatch for UGridListView::GridListViewInfo");
static_assert(offsetof(UGridListView, bAlwaysShowScrollbar) == 4128, "Offset mismatch for UGridListView::bAlwaysShowScrollbar");
static_assert(offsetof(UGridListView, bAlwaysShowScrollbarTrack) == 4129, "Offset mismatch for UGridListView::bAlwaysShowScrollbarTrack");
static_assert(offsetof(UGridListView, ScrollbarThickness) == 4136, "Offset mismatch for UGridListView::ScrollbarThickness");
static_assert(offsetof(UGridListView, GeneratedGridListSlotInfo) == 4152, "Offset mismatch for UGridListView::GeneratedGridListSlotInfo");

// /Script/JunoGameUI.JunoActivatableWidget
// Kind: Class; super: CommonActivatableWidget
class UJunoActivatableWidget
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t CurrentInputType; // 0x04A0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoActivatableWidget, CurrentInputType) == 1184, "Offset mismatch for UJunoActivatableWidget::CurrentInputType");

// /Script/JunoGameUI.JunoActorIndicatorWidget
// Kind: Class; super: FortActorIndicatorWidget
class UJunoActorIndicatorWidget
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    std::uint8_t CloseScaleDistance[0x28]; // 0x0430 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistantScaleDistance[0x28]; // 0x0458 (Size: 0x28, Type: StructProperty)
    std::uint8_t DistantIndicatorScale[0x10]; // 0x0480 (Size: 0x10, Type: StructProperty)
    std::uint8_t CloseIndicatorScale[0x10]; // 0x0490 (Size: 0x10, Type: StructProperty)
    std::uint8_t MobileDistantIndicatorScale[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MobileCloseIndicatorScale[0x20]; // 0x04B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseDistanceScale; // 0x04D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoActorIndicatorWidget, CloseScaleDistance) == 1072, "Offset mismatch for UJunoActorIndicatorWidget::CloseScaleDistance");
static_assert(offsetof(UJunoActorIndicatorWidget, DistantScaleDistance) == 1112, "Offset mismatch for UJunoActorIndicatorWidget::DistantScaleDistance");
static_assert(offsetof(UJunoActorIndicatorWidget, DistantIndicatorScale) == 1152, "Offset mismatch for UJunoActorIndicatorWidget::DistantIndicatorScale");
static_assert(offsetof(UJunoActorIndicatorWidget, CloseIndicatorScale) == 1168, "Offset mismatch for UJunoActorIndicatorWidget::CloseIndicatorScale");
static_assert(offsetof(UJunoActorIndicatorWidget, MobileDistantIndicatorScale) == 1184, "Offset mismatch for UJunoActorIndicatorWidget::MobileDistantIndicatorScale");
static_assert(offsetof(UJunoActorIndicatorWidget, MobileCloseIndicatorScale) == 1200, "Offset mismatch for UJunoActorIndicatorWidget::MobileCloseIndicatorScale");
static_assert(offsetof(UJunoActorIndicatorWidget, bUseDistanceScale) == 1232, "Offset mismatch for UJunoActorIndicatorWidget::bUseDistanceScale");

// /Script/JunoGameUI.JunoActorInventoryViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoActorInventoryViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TMap<void*, void*> InventoryGroups; // 0x0090 (Size: 0x10, Type: MapProperty)
    std::uint8_t NonEmptyInventorySlots[0x10]; // 0x00A0 (Size: 0x10, Type: SetProperty)
    TWeakObjectPtr<void> WeakInventoryActor; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    void* TypeListViewModel; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoActorInventoryViewModel, InventoryGroups) == 144, "Offset mismatch for UJunoActorInventoryViewModel::InventoryGroups");
static_assert(offsetof(UJunoActorInventoryViewModel, NonEmptyInventorySlots) == 160, "Offset mismatch for UJunoActorInventoryViewModel::NonEmptyInventorySlots");
static_assert(offsetof(UJunoActorInventoryViewModel, WeakInventoryActor) == 176, "Offset mismatch for UJunoActorInventoryViewModel::WeakInventoryActor");
static_assert(offsetof(UJunoActorInventoryViewModel, TypeListViewModel) == 184, "Offset mismatch for UJunoActorInventoryViewModel::TypeListViewModel");

// /Script/JunoGameUI.JunoAdjustableInventorySlot
// Kind: Class; super: CommonUserWidget
class UJunoAdjustableInventorySlot
{
public:
    std::uint8_t Pad_0000[0x368]; // 0x0000
    void* Button_Increase; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* Button_Decrease; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* Container_InventorySlot; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IncreaseAction[0x10]; // 0x0380 (Size: 0x10, Type: StructProperty)
    std::uint8_t DecreaseAction[0x1]; // 0x0390 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoAdjustableInventorySlot, Button_Increase) == 872, "Offset mismatch for UJunoAdjustableInventorySlot::Button_Increase");
static_assert(offsetof(UJunoAdjustableInventorySlot, Button_Decrease) == 880, "Offset mismatch for UJunoAdjustableInventorySlot::Button_Decrease");
static_assert(offsetof(UJunoAdjustableInventorySlot, Container_InventorySlot) == 888, "Offset mismatch for UJunoAdjustableInventorySlot::Container_InventorySlot");
static_assert(offsetof(UJunoAdjustableInventorySlot, IncreaseAction) == 896, "Offset mismatch for UJunoAdjustableInventorySlot::IncreaseAction");
static_assert(offsetof(UJunoAdjustableInventorySlot, DecreaseAction) == 912, "Offset mismatch for UJunoAdjustableInventorySlot::DecreaseAction");

// /Script/JunoGameUI.JunoAnimatedProgressBar
// Kind: Class; super: CommonUserWidget
class UJunoAnimatedProgressBar
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t ProgressMaterialBrush[0xB0]; // 0x0330 (Size: 0xB0, Type: StructProperty)
    std::uint8_t FillEndParamName[0x4]; // 0x03E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FillStartParamName[0x4]; // 0x03E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t FillPercentParamName[0x4]; // 0x03E8 (Size: 0x4, Type: NameProperty)
    std::uint8_t DeltaStartParamName[0x4]; // 0x03EC (Size: 0x4, Type: NameProperty)
    std::uint8_t DeltaEndParamName[0x4]; // 0x03F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t DeltaPercentParamName[0x4]; // 0x03F4 (Size: 0x4, Type: NameProperty)
    void* Image_ProgressBar; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* CachedMID; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* BoundAnim_FillBar; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* BoundAnim_DeltaBar; // 0x0410 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoAnimatedProgressBar, ProgressMaterialBrush) == 816, "Offset mismatch for UJunoAnimatedProgressBar::ProgressMaterialBrush");
static_assert(offsetof(UJunoAnimatedProgressBar, FillEndParamName) == 992, "Offset mismatch for UJunoAnimatedProgressBar::FillEndParamName");
static_assert(offsetof(UJunoAnimatedProgressBar, FillStartParamName) == 996, "Offset mismatch for UJunoAnimatedProgressBar::FillStartParamName");
static_assert(offsetof(UJunoAnimatedProgressBar, FillPercentParamName) == 1000, "Offset mismatch for UJunoAnimatedProgressBar::FillPercentParamName");
static_assert(offsetof(UJunoAnimatedProgressBar, DeltaStartParamName) == 1004, "Offset mismatch for UJunoAnimatedProgressBar::DeltaStartParamName");
static_assert(offsetof(UJunoAnimatedProgressBar, DeltaEndParamName) == 1008, "Offset mismatch for UJunoAnimatedProgressBar::DeltaEndParamName");
static_assert(offsetof(UJunoAnimatedProgressBar, DeltaPercentParamName) == 1012, "Offset mismatch for UJunoAnimatedProgressBar::DeltaPercentParamName");
static_assert(offsetof(UJunoAnimatedProgressBar, Image_ProgressBar) == 1016, "Offset mismatch for UJunoAnimatedProgressBar::Image_ProgressBar");
static_assert(offsetof(UJunoAnimatedProgressBar, CachedMID) == 1024, "Offset mismatch for UJunoAnimatedProgressBar::CachedMID");
static_assert(offsetof(UJunoAnimatedProgressBar, BoundAnim_FillBar) == 1032, "Offset mismatch for UJunoAnimatedProgressBar::BoundAnim_FillBar");
static_assert(offsetof(UJunoAnimatedProgressBar, BoundAnim_DeltaBar) == 1040, "Offset mismatch for UJunoAnimatedProgressBar::BoundAnim_DeltaBar");

// /Script/JunoGameUI.JunoAnnouncementBaseViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoAnnouncementBaseViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t AnnouncementType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t Header[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t PrimaryText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    void* ItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Count; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoAnnouncementBaseViewModel, AnnouncementType) == 104, "Offset mismatch for UJunoAnnouncementBaseViewModel::AnnouncementType");
static_assert(offsetof(UJunoAnnouncementBaseViewModel, Header) == 112, "Offset mismatch for UJunoAnnouncementBaseViewModel::Header");
static_assert(offsetof(UJunoAnnouncementBaseViewModel, PrimaryText) == 128, "Offset mismatch for UJunoAnnouncementBaseViewModel::PrimaryText");
static_assert(offsetof(UJunoAnnouncementBaseViewModel, SecondaryText) == 144, "Offset mismatch for UJunoAnnouncementBaseViewModel::SecondaryText");
static_assert(offsetof(UJunoAnnouncementBaseViewModel, ItemDefinition) == 160, "Offset mismatch for UJunoAnnouncementBaseViewModel::ItemDefinition");
static_assert(offsetof(UJunoAnnouncementBaseViewModel, Count) == 168, "Offset mismatch for UJunoAnnouncementBaseViewModel::Count");

// /Script/JunoGameUI.JunoAnnouncementBiomeViewModel
// Kind: Class; super: JunoAnnouncementBaseViewModel
class UJunoAnnouncementBiomeViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t AnnouncementType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t Header[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t PrimaryText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    void* ItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Count; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoAnnouncementBiomeViewModel, AnnouncementType) == 104, "Offset mismatch for UJunoAnnouncementBiomeViewModel::AnnouncementType");
static_assert(offsetof(UJunoAnnouncementBiomeViewModel, Header) == 112, "Offset mismatch for UJunoAnnouncementBiomeViewModel::Header");
static_assert(offsetof(UJunoAnnouncementBiomeViewModel, PrimaryText) == 128, "Offset mismatch for UJunoAnnouncementBiomeViewModel::PrimaryText");
static_assert(offsetof(UJunoAnnouncementBiomeViewModel, SecondaryText) == 144, "Offset mismatch for UJunoAnnouncementBiomeViewModel::SecondaryText");
static_assert(offsetof(UJunoAnnouncementBiomeViewModel, ItemDefinition) == 160, "Offset mismatch for UJunoAnnouncementBiomeViewModel::ItemDefinition");
static_assert(offsetof(UJunoAnnouncementBiomeViewModel, Count) == 168, "Offset mismatch for UJunoAnnouncementBiomeViewModel::Count");

// /Script/JunoGameUI.JunoAnnouncementQueueViewModel
// Kind: Class; super: JunoAnnouncementQueueViewModelBase
class UJunoAnnouncementQueueViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> PriorityQueue; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentMessage[0x34]; // 0x0090 (Size: 0x34, Type: StructProperty)
    std::int32_t WidgetTimeoutDelay; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoAnnouncementQueueViewModel, PriorityQueue) == 128, "Offset mismatch for UJunoAnnouncementQueueViewModel::PriorityQueue");
static_assert(offsetof(UJunoAnnouncementQueueViewModel, CurrentMessage) == 144, "Offset mismatch for UJunoAnnouncementQueueViewModel::CurrentMessage");
static_assert(offsetof(UJunoAnnouncementQueueViewModel, WidgetTimeoutDelay) == 196, "Offset mismatch for UJunoAnnouncementQueueViewModel::WidgetTimeoutDelay");

// /Script/JunoGameUI.JunoAnnouncementQueueViewModelBase
// Kind: Class; super: FortPerUserViewModel
class UJunoAnnouncementQueueViewModelBase
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> PriorityQueue; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentMessage[0x34]; // 0x0090 (Size: 0x34, Type: StructProperty)
    std::int32_t WidgetTimeoutDelay; // 0x00C4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoAnnouncementQueueViewModelBase, PriorityQueue) == 128, "Offset mismatch for UJunoAnnouncementQueueViewModelBase::PriorityQueue");
static_assert(offsetof(UJunoAnnouncementQueueViewModelBase, CurrentMessage) == 144, "Offset mismatch for UJunoAnnouncementQueueViewModelBase::CurrentMessage");
static_assert(offsetof(UJunoAnnouncementQueueViewModelBase, WidgetTimeoutDelay) == 196, "Offset mismatch for UJunoAnnouncementQueueViewModelBase::WidgetTimeoutDelay");

// /Script/JunoGameUI.JunoBangWidget
// Kind: Class; super: UserWidget
class UJunoBangWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t BangType; // 0x0308 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCleanupBangWidgetWhenHidden; // 0x0309 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x030A
    void* CurrentBangContainer; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0318
    void* NamedSlot_BangWidgetContainer; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* CurrentBangClass; // 0x0340 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> BangContainerClassMap; // 0x0348 (Size: 0x10, Type: MapProperty)
    void* UnacquiredContainerClass; // 0x0358 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoBangWidget, BangType) == 776, "Offset mismatch for UJunoBangWidget::BangType");
static_assert(offsetof(UJunoBangWidget, bCleanupBangWidgetWhenHidden) == 777, "Offset mismatch for UJunoBangWidget::bCleanupBangWidgetWhenHidden");
static_assert(offsetof(UJunoBangWidget, CurrentBangContainer) == 784, "Offset mismatch for UJunoBangWidget::CurrentBangContainer");
static_assert(offsetof(UJunoBangWidget, NamedSlot_BangWidgetContainer) == 824, "Offset mismatch for UJunoBangWidget::NamedSlot_BangWidgetContainer");
static_assert(offsetof(UJunoBangWidget, CurrentBangClass) == 832, "Offset mismatch for UJunoBangWidget::CurrentBangClass");
static_assert(offsetof(UJunoBangWidget, BangContainerClassMap) == 840, "Offset mismatch for UJunoBangWidget::BangContainerClassMap");
static_assert(offsetof(UJunoBangWidget, UnacquiredContainerClass) == 856, "Offset mismatch for UJunoBangWidget::UnacquiredContainerClass");

// /Script/JunoGameUI.JunoBaseIndicatorLayerManagerWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoBaseIndicatorLayerManagerWidget
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    void* GeneralIndicators; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayerViewModel; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShowIndicatorForLocalPlayer; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0389
    std::uint8_t IndicatorPool[0x48]; // 0x0390 (Size: 0x48, Type: StructProperty)
    std::int32_t PlayerIndicatorPoolSize; // 0x03D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03DC
    void* PlayerIndicatorClass; // 0x03E0 (Size: 0x8, Type: ClassProperty)
    void* PlayerIndicators; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    float MinimumInFocusRadius; // 0x03F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03F4
    TMap<void*, void*> IndicatorClasses; // 0x03F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x20]; // 0x0408
    TArray<void*> LimitedCustomIndicators; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> LimitedCustomIndicatorsMap; // 0x0438 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0005[0x8]; // 0x0448
    float BuildingHealthDisplayDuration; // 0x0450 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, GeneralIndicators) == 888, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::GeneralIndicators");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, LocalPlayerViewModel) == 896, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::LocalPlayerViewModel");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, ShowIndicatorForLocalPlayer) == 904, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::ShowIndicatorForLocalPlayer");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, IndicatorPool) == 912, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::IndicatorPool");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, PlayerIndicatorPoolSize) == 984, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::PlayerIndicatorPoolSize");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, PlayerIndicatorClass) == 992, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::PlayerIndicatorClass");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, PlayerIndicators) == 1000, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::PlayerIndicators");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, MinimumInFocusRadius) == 1008, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::MinimumInFocusRadius");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, IndicatorClasses) == 1016, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::IndicatorClasses");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, LimitedCustomIndicators) == 1064, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::LimitedCustomIndicators");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, LimitedCustomIndicatorsMap) == 1080, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::LimitedCustomIndicatorsMap");
static_assert(offsetof(UJunoBaseIndicatorLayerManagerWidget, BuildingHealthDisplayDuration) == 1104, "Offset mismatch for UJunoBaseIndicatorLayerManagerWidget::BuildingHealthDisplayDuration");

// /Script/JunoGameUI.JunoBedAssignmentListEntry
// Kind: Class; super: CommonButtonLegacy
class UJunoBedAssignmentListEntry
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* BedAssignmentListObject; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBedAssignmentListEntry, BedAssignmentListObject) == 5624, "Offset mismatch for UJunoBedAssignmentListEntry::BedAssignmentListObject");

// /Script/JunoGameUI.JunoBedAssignmentListObject
// Kind: Class; super: Object
class UJunoBedAssignmentListObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NPCGameplayTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t NPCDisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t NPCIcon[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bHasBed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    std::uint8_t PlayerNetId[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t bIsBed; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBedAssignmentListObject, NPCGameplayTag) == 40, "Offset mismatch for UJunoBedAssignmentListObject::NPCGameplayTag");
static_assert(offsetof(UJunoBedAssignmentListObject, NPCDisplayName) == 48, "Offset mismatch for UJunoBedAssignmentListObject::NPCDisplayName");
static_assert(offsetof(UJunoBedAssignmentListObject, NPCIcon) == 64, "Offset mismatch for UJunoBedAssignmentListObject::NPCIcon");
static_assert(offsetof(UJunoBedAssignmentListObject, bHasBed) == 96, "Offset mismatch for UJunoBedAssignmentListObject::bHasBed");
static_assert(offsetof(UJunoBedAssignmentListObject, PlayerNetId) == 104, "Offset mismatch for UJunoBedAssignmentListObject::PlayerNetId");
static_assert(offsetof(UJunoBedAssignmentListObject, bIsBed) == 152, "Offset mismatch for UJunoBedAssignmentListObject::bIsBed");

// /Script/JunoGameUI.JunoBedAssignmentScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoBedAssignmentScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t AssignPlayerCharacterDisplayText[0x10]; // 0x04A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssignPlayerCharacterIcon[0x20]; // 0x04B8 (Size: 0x20, Type: SoftObjectProperty)
    void* BackButton; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* CloseButton; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* List_Characters; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* ThisBedListObject; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* BedObject; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Assign; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AssignButtonText[0x10]; // 0x0508 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnassignButtonText[0x10]; // 0x0518 (Size: 0x10, Type: TextProperty)
    std::uint8_t ReassignButtonText[0x10]; // 0x0528 (Size: 0x10, Type: TextProperty)
    std::uint8_t ModalDescription[0x68]; // 0x0538 (Size: 0x68, Type: StructProperty)
    void* ListHeaderClass; // 0x05A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ThisBedHeaderText[0x10]; // 0x05A8 (Size: 0x10, Type: TextProperty)
    FText VillagersHeaderText; // 0x05B8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UJunoBedAssignmentScreen, AssignPlayerCharacterDisplayText) == 1192, "Offset mismatch for UJunoBedAssignmentScreen::AssignPlayerCharacterDisplayText");
static_assert(offsetof(UJunoBedAssignmentScreen, AssignPlayerCharacterIcon) == 1208, "Offset mismatch for UJunoBedAssignmentScreen::AssignPlayerCharacterIcon");
static_assert(offsetof(UJunoBedAssignmentScreen, BackButton) == 1240, "Offset mismatch for UJunoBedAssignmentScreen::BackButton");
static_assert(offsetof(UJunoBedAssignmentScreen, CloseButton) == 1248, "Offset mismatch for UJunoBedAssignmentScreen::CloseButton");
static_assert(offsetof(UJunoBedAssignmentScreen, List_Characters) == 1256, "Offset mismatch for UJunoBedAssignmentScreen::List_Characters");
static_assert(offsetof(UJunoBedAssignmentScreen, ThisBedListObject) == 1264, "Offset mismatch for UJunoBedAssignmentScreen::ThisBedListObject");
static_assert(offsetof(UJunoBedAssignmentScreen, BedObject) == 1272, "Offset mismatch for UJunoBedAssignmentScreen::BedObject");
static_assert(offsetof(UJunoBedAssignmentScreen, Button_Assign) == 1280, "Offset mismatch for UJunoBedAssignmentScreen::Button_Assign");
static_assert(offsetof(UJunoBedAssignmentScreen, AssignButtonText) == 1288, "Offset mismatch for UJunoBedAssignmentScreen::AssignButtonText");
static_assert(offsetof(UJunoBedAssignmentScreen, UnassignButtonText) == 1304, "Offset mismatch for UJunoBedAssignmentScreen::UnassignButtonText");
static_assert(offsetof(UJunoBedAssignmentScreen, ReassignButtonText) == 1320, "Offset mismatch for UJunoBedAssignmentScreen::ReassignButtonText");
static_assert(offsetof(UJunoBedAssignmentScreen, ModalDescription) == 1336, "Offset mismatch for UJunoBedAssignmentScreen::ModalDescription");
static_assert(offsetof(UJunoBedAssignmentScreen, ListHeaderClass) == 1440, "Offset mismatch for UJunoBedAssignmentScreen::ListHeaderClass");
static_assert(offsetof(UJunoBedAssignmentScreen, ThisBedHeaderText) == 1448, "Offset mismatch for UJunoBedAssignmentScreen::ThisBedHeaderText");
static_assert(offsetof(UJunoBedAssignmentScreen, VillagersHeaderText) == 1464, "Offset mismatch for UJunoBedAssignmentScreen::VillagersHeaderText");

// /Script/JunoGameUI.JunoBuildMenuCaptureExtension
// Kind: Class; super: UserWidgetExtension
class UJunoBuildMenuCaptureExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoBuildMenuCaptureExtensionV2
// Kind: Class; super: UserWidgetExtension
class UJunoBuildMenuCaptureExtensionV2
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoBuildMenuFilterCaptureExtension
// Kind: Class; super: UserWidgetExtension
class UJunoBuildMenuFilterCaptureExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoBuildMenuFilterEntry
// Kind: Class; super: CommonButtonBase
class UJunoBuildMenuFilterEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* FilterListObject; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBuildMenuFilterEntry, FilterListObject) == 5544, "Offset mismatch for UJunoBuildMenuFilterEntry::FilterListObject");

// /Script/JunoGameUI.JunoBuildMenuFilterHeaderEntry
// Kind: Class; super: CommonButtonBase
class UJunoBuildMenuFilterHeaderEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* Text_Name; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    void* FilterListObject; // 0x15B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBuildMenuFilterHeaderEntry, Text_Name) == 5544, "Offset mismatch for UJunoBuildMenuFilterHeaderEntry::Text_Name");
static_assert(offsetof(UJunoBuildMenuFilterHeaderEntry, FilterListObject) == 5552, "Offset mismatch for UJunoBuildMenuFilterHeaderEntry::FilterListObject");

// /Script/JunoGameUI.JunoBuildMenuFilterListObject
// Kind: Class; super: Object
class UJunoBuildMenuFilterListObject
{
public:
    std::uint8_t Pad_0000[0x6C]; // 0x0000
    TWeakObjectPtr<void> CraftingCategoryFilterViewModel; // 0x006C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoBuildMenuFilterListObject, CraftingCategoryFilterViewModel) == 108, "Offset mismatch for UJunoBuildMenuFilterListObject::CraftingCategoryFilterViewModel");

// /Script/JunoGameUI.JunoBuildMenuFilterTab
// Kind: Class; super: CommonButtonBase
class UJunoBuildMenuFilterTab
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* JunoBangWidget; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CraftingCategoryFilterViewModel; // 0x15B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoBuildMenuFilterTab, JunoBangWidget) == 5544, "Offset mismatch for UJunoBuildMenuFilterTab::JunoBangWidget");
static_assert(offsetof(UJunoBuildMenuFilterTab, CraftingCategoryFilterViewModel) == 5552, "Offset mismatch for UJunoBuildMenuFilterTab::CraftingCategoryFilterViewModel");

// /Script/JunoGameUI.JunoBuildMenuFilteringScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoBuildMenuFilteringScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* TabList_FilterTabs; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* GridListView_SubFilters; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* DynamicEntryBox_FilterTags; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxNumFilterTagsDisplayed; // 0x04B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04BC
    void* FilterTabWidget; // 0x04C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HeaderEntryType[0x4]; // 0x04C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t SubCategoryEntryType[0x4]; // 0x04CC (Size: 0x4, Type: NameProperty)
    TArray<void*> CurrentFilterListObjects; // 0x04D0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CraftingCategoryFilterViewModel; // 0x04E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoBuildMenuFilteringScreen, TabList_FilterTabs) == 1184, "Offset mismatch for UJunoBuildMenuFilteringScreen::TabList_FilterTabs");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, GridListView_SubFilters) == 1192, "Offset mismatch for UJunoBuildMenuFilteringScreen::GridListView_SubFilters");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, DynamicEntryBox_FilterTags) == 1200, "Offset mismatch for UJunoBuildMenuFilteringScreen::DynamicEntryBox_FilterTags");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, MaxNumFilterTagsDisplayed) == 1208, "Offset mismatch for UJunoBuildMenuFilteringScreen::MaxNumFilterTagsDisplayed");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, FilterTabWidget) == 1216, "Offset mismatch for UJunoBuildMenuFilteringScreen::FilterTabWidget");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, HeaderEntryType) == 1224, "Offset mismatch for UJunoBuildMenuFilteringScreen::HeaderEntryType");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, SubCategoryEntryType) == 1228, "Offset mismatch for UJunoBuildMenuFilteringScreen::SubCategoryEntryType");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, CurrentFilterListObjects) == 1232, "Offset mismatch for UJunoBuildMenuFilteringScreen::CurrentFilterListObjects");
static_assert(offsetof(UJunoBuildMenuFilteringScreen, CraftingCategoryFilterViewModel) == 1248, "Offset mismatch for UJunoBuildMenuFilteringScreen::CraftingCategoryFilterViewModel");

// /Script/JunoGameUI.JunoBuildingCategoryBaseViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoBuildingCategoryBaseViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t IconResource[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Entries; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoBuildingCategoryBaseViewModel, Tag) == 104, "Offset mismatch for UJunoBuildingCategoryBaseViewModel::Tag");
static_assert(offsetof(UJunoBuildingCategoryBaseViewModel, DisplayName) == 112, "Offset mismatch for UJunoBuildingCategoryBaseViewModel::DisplayName");
static_assert(offsetof(UJunoBuildingCategoryBaseViewModel, IconResource) == 128, "Offset mismatch for UJunoBuildingCategoryBaseViewModel::IconResource");
static_assert(offsetof(UJunoBuildingCategoryBaseViewModel, Entries) == 160, "Offset mismatch for UJunoBuildingCategoryBaseViewModel::Entries");

// /Script/JunoGameUI.JunoBuildingCategoryRecentViewModel
// Kind: Class; super: JunoBuildingCategoryViewModel
class UJunoBuildingCategoryRecentViewModel
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t MaxRecentRecipes; // 0x00C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoBuildingCategoryRecentViewModel, MaxRecentRecipes) == 192, "Offset mismatch for UJunoBuildingCategoryRecentViewModel::MaxRecentRecipes");

// /Script/JunoGameUI.JunoBuildingCategoryViewModel
// Kind: Class; super: JunoBuildingCategoryBaseViewModel
class UJunoBuildingCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> SubCategories; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoBuildingCategoryViewModel, SubCategories) == 176, "Offset mismatch for UJunoBuildingCategoryViewModel::SubCategories");

// /Script/JunoGameUI.JunoBuildingDisplaySlot
// Kind: Class; super: CommonUserWidget
class UJunoBuildingDisplaySlot
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t BuildingSlotData[0x1]; // 0x0330 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBuildingDisplaySlot, BuildingSlotData) == 816, "Offset mismatch for UJunoBuildingDisplaySlot::BuildingSlotData");

// /Script/JunoGameUI.JunoBuildingGroupViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoBuildingGroupViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FText DisplayName; // 0x0068 (Size: 0x18, Type: TextProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0080
    TArray<void*> Categories; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoBuildingGroupViewModel, DisplayName) == 104, "Offset mismatch for UJunoBuildingGroupViewModel::DisplayName");
static_assert(offsetof(UJunoBuildingGroupViewModel, Categories) == 192, "Offset mismatch for UJunoBuildingGroupViewModel::Categories");

// /Script/JunoGameUI.JunoBuildingIngredientsGroup
// Kind: Class; super: FortHUDElementWidget
class UJunoBuildingIngredientsGroup
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    float PercentComplete; // 0x0370 (Size: 0x4, Type: FloatProperty)
    std::int32_t BuildablesRemaining; // 0x0374 (Size: 0x4, Type: IntProperty)
    void* EntryBox_Ingredients; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FilteredTags[0x1]; // 0x0380 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBuildingIngredientsGroup, PercentComplete) == 880, "Offset mismatch for UJunoBuildingIngredientsGroup::PercentComplete");
static_assert(offsetof(UJunoBuildingIngredientsGroup, BuildablesRemaining) == 884, "Offset mismatch for UJunoBuildingIngredientsGroup::BuildablesRemaining");
static_assert(offsetof(UJunoBuildingIngredientsGroup, EntryBox_Ingredients) == 888, "Offset mismatch for UJunoBuildingIngredientsGroup::EntryBox_Ingredients");
static_assert(offsetof(UJunoBuildingIngredientsGroup, FilteredTags) == 896, "Offset mismatch for UJunoBuildingIngredientsGroup::FilteredTags");

// /Script/JunoGameUI.JunoBuildingLimitComponent
// Kind: Class; super: ActorComponent
class UJunoBuildingLimitComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoBuildingLimitComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoBuildingLimitComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoBuildingLimitComponent, ComponentTags) == 104, "Offset mismatch for UJunoBuildingLimitComponent::ComponentTags");
static_assert(offsetof(UJunoBuildingLimitComponent, AssetUserData) == 120, "Offset mismatch for UJunoBuildingLimitComponent::AssetUserData");
static_assert(offsetof(UJunoBuildingLimitComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoBuildingLimitComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoBuildingLimitComponent, bNetAddressable) == 152, "Offset mismatch for UJunoBuildingLimitComponent::bNetAddressable");
static_assert(offsetof(UJunoBuildingLimitComponent, bAutoActivate) == 154, "Offset mismatch for UJunoBuildingLimitComponent::bAutoActivate");
static_assert(offsetof(UJunoBuildingLimitComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoBuildingLimitComponent::bIsEditorOnly");
static_assert(offsetof(UJunoBuildingLimitComponent, CreationMethod) == 185, "Offset mismatch for UJunoBuildingLimitComponent::CreationMethod");
static_assert(offsetof(UJunoBuildingLimitComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoBuildingLimitComponent::OnComponentActivated");
static_assert(offsetof(UJunoBuildingLimitComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoBuildingLimitComponent::OnComponentDeactivated");

// /Script/JunoGameUI.JunoBuildingRecipeDetails
// Kind: Class; super: JunoRecipeDetailsWidget
class UJunoBuildingRecipeDetails
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    void* EntryBox_GuidedBuildingIngredients; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    float LoadingMinimumWaitTimeSeconds; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03B4
    TSoftClassPtr<void> ActorClassToBuild; // 0x03B8 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x03E0
    void* ScrollBox_Requirements; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBuildingRecipeDetails, EntryBox_GuidedBuildingIngredients) == 936, "Offset mismatch for UJunoBuildingRecipeDetails::EntryBox_GuidedBuildingIngredients");
static_assert(offsetof(UJunoBuildingRecipeDetails, LoadingMinimumWaitTimeSeconds) == 944, "Offset mismatch for UJunoBuildingRecipeDetails::LoadingMinimumWaitTimeSeconds");
static_assert(offsetof(UJunoBuildingRecipeDetails, ActorClassToBuild) == 952, "Offset mismatch for UJunoBuildingRecipeDetails::ActorClassToBuild");
static_assert(offsetof(UJunoBuildingRecipeDetails, ScrollBox_Requirements) == 1000, "Offset mismatch for UJunoBuildingRecipeDetails::ScrollBox_Requirements");

// /Script/JunoGameUI.JunoBuildingScreen
// Kind: Class; super: JunoRecipeScreenBase
class UJunoBuildingScreen
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    FName PreviewRecipe; // 0x0578 (Size: 0x8, Type: NameProperty)
    void* Button_ItemShop; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSortPriorityAscending; // 0x0588 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0589
    void* TabList_PrimaryCategories; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* TabList_SecondaryCategories; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseScreenAction[0x10]; // 0x05A0 (Size: 0x10, Type: StructProperty)
    float PreviewWaitTime; // 0x05B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x05B4
    TArray<void*> DefaultSortingPreferences; // 0x05B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x100]; // 0x05C8
    TWeakObjectPtr<void> CraftingCategoryFilterViewModel; // 0x06C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoBuildingScreen, PreviewRecipe) == 1400, "Offset mismatch for UJunoBuildingScreen::PreviewRecipe");
static_assert(offsetof(UJunoBuildingScreen, Button_ItemShop) == 1408, "Offset mismatch for UJunoBuildingScreen::Button_ItemShop");
static_assert(offsetof(UJunoBuildingScreen, bSortPriorityAscending) == 1416, "Offset mismatch for UJunoBuildingScreen::bSortPriorityAscending");
static_assert(offsetof(UJunoBuildingScreen, TabList_PrimaryCategories) == 1424, "Offset mismatch for UJunoBuildingScreen::TabList_PrimaryCategories");
static_assert(offsetof(UJunoBuildingScreen, TabList_SecondaryCategories) == 1432, "Offset mismatch for UJunoBuildingScreen::TabList_SecondaryCategories");
static_assert(offsetof(UJunoBuildingScreen, CloseScreenAction) == 1440, "Offset mismatch for UJunoBuildingScreen::CloseScreenAction");
static_assert(offsetof(UJunoBuildingScreen, PreviewWaitTime) == 1456, "Offset mismatch for UJunoBuildingScreen::PreviewWaitTime");
static_assert(offsetof(UJunoBuildingScreen, DefaultSortingPreferences) == 1464, "Offset mismatch for UJunoBuildingScreen::DefaultSortingPreferences");
static_assert(offsetof(UJunoBuildingScreen, CraftingCategoryFilterViewModel) == 1736, "Offset mismatch for UJunoBuildingScreen::CraftingCategoryFilterViewModel");

// /Script/JunoGameUI.JunoBuildingScreenV2
// Kind: Class; super: JunoActivatableWidget
class UJunoBuildingScreenV2
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    std::uint8_t CloseScreenAction[0x10]; // 0x04A8 (Size: 0x10, Type: StructProperty)
    float PreviewWaitTime; // 0x04B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoBuildingScreenV2, CloseScreenAction) == 1192, "Offset mismatch for UJunoBuildingScreenV2::CloseScreenAction");
static_assert(offsetof(UJunoBuildingScreenV2, PreviewWaitTime) == 1208, "Offset mismatch for UJunoBuildingScreenV2::PreviewWaitTime");

// /Script/JunoGameUI.JunoBuildingSubCategoryViewModel
// Kind: Class; super: JunoBuildingCategoryBaseViewModel
class UJunoBuildingSubCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t CategoryTag[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBuildingSubCategoryViewModel, CategoryTag) == 176, "Offset mismatch for UJunoBuildingSubCategoryViewModel::CategoryTag");

// /Script/JunoGameUI.JunoBuildingSubmenuListObject
// Kind: Class; super: JunoRecipeListObject
class UJunoBuildingSubmenuListObject
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> CraftingObject; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RecipeScreen; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoBuildingSubmenuListObject, CraftingObject) == 48, "Offset mismatch for UJunoBuildingSubmenuListObject::CraftingObject");
static_assert(offsetof(UJunoBuildingSubmenuListObject, RecipeScreen) == 56, "Offset mismatch for UJunoBuildingSubmenuListObject::RecipeScreen");

// /Script/JunoGameUI.JunoBuildingViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoBuildingViewModel
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> BuildingGroups; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    void* SelectedGroup; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FilteredCategories; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* SelectedCategory; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FilteredSubCategories; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    void* SelectedSubCategory; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FilteredRecipeEntries; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    void* SelectedRecipeEntry; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInfoPanelIsVisible; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0129
    void* CategoryRecent; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x38]; // 0x0138
    TArray<void*> DefaultSortingPreferences; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSortPriorityAscending; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0181
    std::uint8_t HeaderTagPrefix[0x4]; // 0x0184 (Size: 0x4, Type: NameProperty)
    std::uint8_t HeaderEntryType[0x4]; // 0x0188 (Size: 0x4, Type: NameProperty)
    FName RecipeEntryType; // 0x018C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoBuildingViewModel, BuildingGroups) == 200, "Offset mismatch for UJunoBuildingViewModel::BuildingGroups");
static_assert(offsetof(UJunoBuildingViewModel, SelectedGroup) == 216, "Offset mismatch for UJunoBuildingViewModel::SelectedGroup");
static_assert(offsetof(UJunoBuildingViewModel, FilteredCategories) == 224, "Offset mismatch for UJunoBuildingViewModel::FilteredCategories");
static_assert(offsetof(UJunoBuildingViewModel, SelectedCategory) == 240, "Offset mismatch for UJunoBuildingViewModel::SelectedCategory");
static_assert(offsetof(UJunoBuildingViewModel, FilteredSubCategories) == 248, "Offset mismatch for UJunoBuildingViewModel::FilteredSubCategories");
static_assert(offsetof(UJunoBuildingViewModel, SelectedSubCategory) == 264, "Offset mismatch for UJunoBuildingViewModel::SelectedSubCategory");
static_assert(offsetof(UJunoBuildingViewModel, FilteredRecipeEntries) == 272, "Offset mismatch for UJunoBuildingViewModel::FilteredRecipeEntries");
static_assert(offsetof(UJunoBuildingViewModel, SelectedRecipeEntry) == 288, "Offset mismatch for UJunoBuildingViewModel::SelectedRecipeEntry");
static_assert(offsetof(UJunoBuildingViewModel, bInfoPanelIsVisible) == 296, "Offset mismatch for UJunoBuildingViewModel::bInfoPanelIsVisible");
static_assert(offsetof(UJunoBuildingViewModel, CategoryRecent) == 304, "Offset mismatch for UJunoBuildingViewModel::CategoryRecent");
static_assert(offsetof(UJunoBuildingViewModel, DefaultSortingPreferences) == 368, "Offset mismatch for UJunoBuildingViewModel::DefaultSortingPreferences");
static_assert(offsetof(UJunoBuildingViewModel, bSortPriorityAscending) == 384, "Offset mismatch for UJunoBuildingViewModel::bSortPriorityAscending");
static_assert(offsetof(UJunoBuildingViewModel, HeaderTagPrefix) == 388, "Offset mismatch for UJunoBuildingViewModel::HeaderTagPrefix");
static_assert(offsetof(UJunoBuildingViewModel, HeaderEntryType) == 392, "Offset mismatch for UJunoBuildingViewModel::HeaderEntryType");
static_assert(offsetof(UJunoBuildingViewModel, RecipeEntryType) == 396, "Offset mismatch for UJunoBuildingViewModel::RecipeEntryType");

// /Script/JunoGameUI.JunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup
// Kind: Class; super: ButtonBehaviorComponentTagContainerMonitor
class UJunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> GroupSlots; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InventoryGroup[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup, GroupSlots) == 64, "Offset mismatch for UJunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup::GroupSlots");
static_assert(offsetof(UJunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup, InventoryGroup) == 80, "Offset mismatch for UJunoButtonBehaviorComponentTagContainerMonitor_InventoryGroup::InventoryGroup");

// /Script/JunoGameUI.JunoCheatManager_UI
// Kind: Class; super: ChildCheatManager
class UJunoCheatManager_UI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoChestSettingsViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoChestSettingsViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoCompassWidget
// Kind: Class; super: FortCompassWidget
class UJunoCompassWidget
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    float CompassWidth; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MarkerSize[0x8]; // 0x04CC (Size: 0x8, Type: StructProperty)
    std::uint8_t MobileMarkerSize[0x8]; // 0x04D4 (Size: 0x8, Type: StructProperty)
    float MinMarkerScaleDistanceCutOff; // 0x04DC (Size: 0x4, Type: FloatProperty)
    float MaxMarkerScaleCutOff; // 0x04E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04E4
    std::uint8_t MarkerScaleCurve[0x48]; // 0x04E8 (Size: 0x48, Type: StructProperty)
    float MarkerDistanceOffset; // 0x0530 (Size: 0x4, Type: FloatProperty)
    float MobileMarkerDistanceOffset; // 0x0534 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AdvancedCompassTag[0x8]; // 0x0538 (Size: 0x8, Type: StructProperty)
    std::uint8_t MarkerDistanceTextFont[0x58]; // 0x0540 (Size: 0x58, Type: StructProperty)
    std::uint8_t MarkerDistanceTextFont_Mobile[0x58]; // 0x0598 (Size: 0x58, Type: StructProperty)
    std::uint8_t PreviousSpawnPointMarkerRow[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> ActiveMarkers; // 0x0600 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AvailableMaterialInstances; // 0x0610 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoCompassWidget, CompassWidth) == 1224, "Offset mismatch for UJunoCompassWidget::CompassWidth");
static_assert(offsetof(UJunoCompassWidget, MarkerSize) == 1228, "Offset mismatch for UJunoCompassWidget::MarkerSize");
static_assert(offsetof(UJunoCompassWidget, MobileMarkerSize) == 1236, "Offset mismatch for UJunoCompassWidget::MobileMarkerSize");
static_assert(offsetof(UJunoCompassWidget, MinMarkerScaleDistanceCutOff) == 1244, "Offset mismatch for UJunoCompassWidget::MinMarkerScaleDistanceCutOff");
static_assert(offsetof(UJunoCompassWidget, MaxMarkerScaleCutOff) == 1248, "Offset mismatch for UJunoCompassWidget::MaxMarkerScaleCutOff");
static_assert(offsetof(UJunoCompassWidget, MarkerScaleCurve) == 1256, "Offset mismatch for UJunoCompassWidget::MarkerScaleCurve");
static_assert(offsetof(UJunoCompassWidget, MarkerDistanceOffset) == 1328, "Offset mismatch for UJunoCompassWidget::MarkerDistanceOffset");
static_assert(offsetof(UJunoCompassWidget, MobileMarkerDistanceOffset) == 1332, "Offset mismatch for UJunoCompassWidget::MobileMarkerDistanceOffset");
static_assert(offsetof(UJunoCompassWidget, AdvancedCompassTag) == 1336, "Offset mismatch for UJunoCompassWidget::AdvancedCompassTag");
static_assert(offsetof(UJunoCompassWidget, MarkerDistanceTextFont) == 1344, "Offset mismatch for UJunoCompassWidget::MarkerDistanceTextFont");
static_assert(offsetof(UJunoCompassWidget, MarkerDistanceTextFont_Mobile) == 1432, "Offset mismatch for UJunoCompassWidget::MarkerDistanceTextFont_Mobile");
static_assert(offsetof(UJunoCompassWidget, PreviousSpawnPointMarkerRow) == 1520, "Offset mismatch for UJunoCompassWidget::PreviousSpawnPointMarkerRow");
static_assert(offsetof(UJunoCompassWidget, ActiveMarkers) == 1536, "Offset mismatch for UJunoCompassWidget::ActiveMarkers");
static_assert(offsetof(UJunoCompassWidget, AvailableMaterialInstances) == 1552, "Offset mismatch for UJunoCompassWidget::AvailableMaterialInstances");

// /Script/JunoGameUI.JunoComposterScreen
// Kind: Class; super: JunoDisassemblingScreen
class UJunoComposterScreen
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    void* JunoMultiCraftingComponent; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentStationInventoryState; // 0x0618 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0619
    TArray<void*> CurrentCraftingProcesses; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    void* InventoryGroup_Processing; // 0x0630 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoComposterScreen, JunoMultiCraftingComponent) == 1552, "Offset mismatch for UJunoComposterScreen::JunoMultiCraftingComponent");
static_assert(offsetof(UJunoComposterScreen, CurrentStationInventoryState) == 1560, "Offset mismatch for UJunoComposterScreen::CurrentStationInventoryState");
static_assert(offsetof(UJunoComposterScreen, CurrentCraftingProcesses) == 1568, "Offset mismatch for UJunoComposterScreen::CurrentCraftingProcesses");
static_assert(offsetof(UJunoComposterScreen, InventoryGroup_Processing) == 1584, "Offset mismatch for UJunoComposterScreen::InventoryGroup_Processing");

// /Script/JunoGameUI.JunoConnectedVillageChestViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoConnectedVillageChestViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnBuildingInventorySlotChangedDelegate; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> WeakCraftingObject; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t ConnectedInventoryCount; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    TArray<void*> RelevantInventoryComponents; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InventoryAggregateComponents; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoConnectedVillageChestViewModel, OnBuildingInventorySlotChangedDelegate) == 120, "Offset mismatch for UJunoConnectedVillageChestViewModel::OnBuildingInventorySlotChangedDelegate");
static_assert(offsetof(UJunoConnectedVillageChestViewModel, WeakCraftingObject) == 136, "Offset mismatch for UJunoConnectedVillageChestViewModel::WeakCraftingObject");
static_assert(offsetof(UJunoConnectedVillageChestViewModel, ConnectedInventoryCount) == 144, "Offset mismatch for UJunoConnectedVillageChestViewModel::ConnectedInventoryCount");
static_assert(offsetof(UJunoConnectedVillageChestViewModel, RelevantInventoryComponents) == 152, "Offset mismatch for UJunoConnectedVillageChestViewModel::RelevantInventoryComponents");
static_assert(offsetof(UJunoConnectedVillageChestViewModel, InventoryAggregateComponents) == 168, "Offset mismatch for UJunoConnectedVillageChestViewModel::InventoryAggregateComponents");

// /Script/JunoGameUI.JunoContentModeration_ModifyToxicityReport
// Kind: Class; super: FortUIGameFeatureAction_ModifyToxicityReport
class UJunoContentModeration_ModifyToxicityReport
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoControllerComponent_Indicators
// Kind: Class; super: FortControllerComponent
class UJunoControllerComponent_Indicators
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    float BuildingHealthBarDisplayMaxDuration; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float BuildingShowDistance; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float BuildingHideDistance; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HealthIndicatorPrefixTag[0x4]; // 0x00D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultHealthIndicatorTag[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultArmorIndicatorTag[0x5C]; // 0x00DC (Size: 0x5C, Type: StructProperty)
    std::uint8_t SingleActorHealthShown[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoControllerComponent_Indicators, BuildingHealthBarDisplayMaxDuration) == 200, "Offset mismatch for UJunoControllerComponent_Indicators::BuildingHealthBarDisplayMaxDuration");
static_assert(offsetof(UJunoControllerComponent_Indicators, BuildingShowDistance) == 204, "Offset mismatch for UJunoControllerComponent_Indicators::BuildingShowDistance");
static_assert(offsetof(UJunoControllerComponent_Indicators, BuildingHideDistance) == 208, "Offset mismatch for UJunoControllerComponent_Indicators::BuildingHideDistance");
static_assert(offsetof(UJunoControllerComponent_Indicators, HealthIndicatorPrefixTag) == 212, "Offset mismatch for UJunoControllerComponent_Indicators::HealthIndicatorPrefixTag");
static_assert(offsetof(UJunoControllerComponent_Indicators, DefaultHealthIndicatorTag) == 216, "Offset mismatch for UJunoControllerComponent_Indicators::DefaultHealthIndicatorTag");
static_assert(offsetof(UJunoControllerComponent_Indicators, DefaultArmorIndicatorTag) == 220, "Offset mismatch for UJunoControllerComponent_Indicators::DefaultArmorIndicatorTag");
static_assert(offsetof(UJunoControllerComponent_Indicators, SingleActorHealthShown) == 312, "Offset mismatch for UJunoControllerComponent_Indicators::SingleActorHealthShown");

// /Script/JunoGameUI.JunoControllerComponent_InteractionInfoViewModelCollection
// Kind: Class; super: ControllerComponent
class UJunoControllerComponent_InteractionInfoViewModelCollection
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> InteractionInfoViewModelMonitors; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoControllerComponent_InteractionInfoViewModelCollection, InteractionInfoViewModelMonitors) == 192, "Offset mismatch for UJunoControllerComponent_InteractionInfoViewModelCollection::InteractionInfoViewModelMonitors");

// /Script/JunoGameUI.JunoConversationMarker
// Kind: Class; super: FortActorIndicatorWidget
class UJunoConversationMarker
{
public:
    std::uint8_t Pad_0000[0x438]; // 0x0000
    void* Keybind_Interact; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    float MessageBubbleDuration; // 0x0440 (Size: 0x4, Type: FloatProperty)
    float LastTextBubbleDuration; // 0x0444 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetCustomInteractionWidgetOnlyWhenNeeded; // 0x0448 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0449
    TMap<void*, void*> ActiveNPCStateMap; // 0x0458 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoConversationMarker, Keybind_Interact) == 1080, "Offset mismatch for UJunoConversationMarker::Keybind_Interact");
static_assert(offsetof(UJunoConversationMarker, MessageBubbleDuration) == 1088, "Offset mismatch for UJunoConversationMarker::MessageBubbleDuration");
static_assert(offsetof(UJunoConversationMarker, LastTextBubbleDuration) == 1092, "Offset mismatch for UJunoConversationMarker::LastTextBubbleDuration");
static_assert(offsetof(UJunoConversationMarker, bSetCustomInteractionWidgetOnlyWhenNeeded) == 1096, "Offset mismatch for UJunoConversationMarker::bSetCustomInteractionWidgetOnlyWhenNeeded");
static_assert(offsetof(UJunoConversationMarker, ActiveNPCStateMap) == 1112, "Offset mismatch for UJunoConversationMarker::ActiveNPCStateMap");

// /Script/JunoGameUI.JunoConversationOption
// Kind: Class; super: CommonButtonBase
class UJunoConversationOption
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    std::uint8_t RepresentedOption[0x1]; // 0x15A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoConversationOption, RepresentedOption) == 5544, "Offset mismatch for UJunoConversationOption::RepresentedOption");

// /Script/JunoGameUI.JunoConversationScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoConversationScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* Group_Options; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_Options; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* LastEntryHovered; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseScreenAction[0x1]; // 0x04B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoConversationScreen, Group_Options) == 1184, "Offset mismatch for UJunoConversationScreen::Group_Options");
static_assert(offsetof(UJunoConversationScreen, EntryBox_Options) == 1192, "Offset mismatch for UJunoConversationScreen::EntryBox_Options");
static_assert(offsetof(UJunoConversationScreen, LastEntryHovered) == 1200, "Offset mismatch for UJunoConversationScreen::LastEntryHovered");
static_assert(offsetof(UJunoConversationScreen, CloseScreenAction) == 1208, "Offset mismatch for UJunoConversationScreen::CloseScreenAction");

// /Script/JunoGameUI.JunoCraftingCategoryFilterViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoCraftingCategoryFilterViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> UIData; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LastSelectedTab[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t SelectedFilterIds[0x10]; // 0x0088 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> Filters; // 0x0098 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoCraftingCategoryFilterViewModel, UIData) == 120, "Offset mismatch for UJunoCraftingCategoryFilterViewModel::UIData");
static_assert(offsetof(UJunoCraftingCategoryFilterViewModel, LastSelectedTab) == 128, "Offset mismatch for UJunoCraftingCategoryFilterViewModel::LastSelectedTab");
static_assert(offsetof(UJunoCraftingCategoryFilterViewModel, SelectedFilterIds) == 136, "Offset mismatch for UJunoCraftingCategoryFilterViewModel::SelectedFilterIds");
static_assert(offsetof(UJunoCraftingCategoryFilterViewModel, Filters) == 152, "Offset mismatch for UJunoCraftingCategoryFilterViewModel::Filters");

// /Script/JunoGameUI.JunoDebugWatermark
// Kind: Class; super: FortHUDElementWidget
class UJunoDebugWatermark
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDebugWatermark, HLTDependentWidgetTag) == 824, "Offset mismatch for UJunoDebugWatermark::HLTDependentWidgetTag");
static_assert(offsetof(UJunoDebugWatermark, ElementTag) == 828, "Offset mismatch for UJunoDebugWatermark::ElementTag");
static_assert(offsetof(UJunoDebugWatermark, HUDElementTag) == 832, "Offset mismatch for UJunoDebugWatermark::HUDElementTag");
static_assert(offsetof(UJunoDebugWatermark, HiddenVisibility) == 864, "Offset mismatch for UJunoDebugWatermark::HiddenVisibility");
static_assert(offsetof(UJunoDebugWatermark, TutorialHighlight) == 872, "Offset mismatch for UJunoDebugWatermark::TutorialHighlight");

// /Script/JunoGameUI.JunoDisassemblingScreen
// Kind: Class; super: JunoActivatableWidget
class UJunoDisassemblingScreen
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    std::uint8_t StationInventoryState; // 0x04D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x27]; // 0x04D9
    void* CraftingObject; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* Container_PlayerInventory; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* InventoryGroup_Input; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* InventoryGroup_Output; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* Button_TakeStack; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* Button_DepositStack; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* Button_MoreActions; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* Button_TakeAll; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllSlots; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CancelAction[0x10]; // 0x0558 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackAction[0x10]; // 0x0568 (Size: 0x10, Type: StructProperty)
    void* LastSelectedSlot; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* LastClickedSlot; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* JunoPassiveCraftingComponent; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* JunoInventoryDragAndDropHandler; // 0x0590 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDisassemblingScreen, StationInventoryState) == 1240, "Offset mismatch for UJunoDisassemblingScreen::StationInventoryState");
static_assert(offsetof(UJunoDisassemblingScreen, CraftingObject) == 1280, "Offset mismatch for UJunoDisassemblingScreen::CraftingObject");
static_assert(offsetof(UJunoDisassemblingScreen, Container_PlayerInventory) == 1288, "Offset mismatch for UJunoDisassemblingScreen::Container_PlayerInventory");
static_assert(offsetof(UJunoDisassemblingScreen, InventoryGroup_Input) == 1296, "Offset mismatch for UJunoDisassemblingScreen::InventoryGroup_Input");
static_assert(offsetof(UJunoDisassemblingScreen, InventoryGroup_Output) == 1304, "Offset mismatch for UJunoDisassemblingScreen::InventoryGroup_Output");
static_assert(offsetof(UJunoDisassemblingScreen, Button_Close) == 1312, "Offset mismatch for UJunoDisassemblingScreen::Button_Close");
static_assert(offsetof(UJunoDisassemblingScreen, Button_Back) == 1320, "Offset mismatch for UJunoDisassemblingScreen::Button_Back");
static_assert(offsetof(UJunoDisassemblingScreen, Button_TakeStack) == 1328, "Offset mismatch for UJunoDisassemblingScreen::Button_TakeStack");
static_assert(offsetof(UJunoDisassemblingScreen, Button_DepositStack) == 1336, "Offset mismatch for UJunoDisassemblingScreen::Button_DepositStack");
static_assert(offsetof(UJunoDisassemblingScreen, Button_MoreActions) == 1344, "Offset mismatch for UJunoDisassemblingScreen::Button_MoreActions");
static_assert(offsetof(UJunoDisassemblingScreen, Button_TakeAll) == 1352, "Offset mismatch for UJunoDisassemblingScreen::Button_TakeAll");
static_assert(offsetof(UJunoDisassemblingScreen, ButtonGroup_AllSlots) == 1360, "Offset mismatch for UJunoDisassemblingScreen::ButtonGroup_AllSlots");
static_assert(offsetof(UJunoDisassemblingScreen, CancelAction) == 1368, "Offset mismatch for UJunoDisassemblingScreen::CancelAction");
static_assert(offsetof(UJunoDisassemblingScreen, BackAction) == 1384, "Offset mismatch for UJunoDisassemblingScreen::BackAction");
static_assert(offsetof(UJunoDisassemblingScreen, LastSelectedSlot) == 1400, "Offset mismatch for UJunoDisassemblingScreen::LastSelectedSlot");
static_assert(offsetof(UJunoDisassemblingScreen, LastClickedSlot) == 1408, "Offset mismatch for UJunoDisassemblingScreen::LastClickedSlot");
static_assert(offsetof(UJunoDisassemblingScreen, JunoPassiveCraftingComponent) == 1416, "Offset mismatch for UJunoDisassemblingScreen::JunoPassiveCraftingComponent");
static_assert(offsetof(UJunoDisassemblingScreen, JunoInventoryDragAndDropHandler) == 1424, "Offset mismatch for UJunoDisassemblingScreen::JunoInventoryDragAndDropHandler");

// /Script/JunoGameUI.JunoDistanceTrackerInterface
// Kind: Class; super: Interface
class UJunoDistanceTrackerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoDurabilityCountdown
// Kind: Class; super: UserWidget
class UJunoDurabilityCountdown
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDurabilityCountdown, ColorAndOpacity) == 416, "Offset mismatch for UJunoDurabilityCountdown::ColorAndOpacity");
static_assert(offsetof(UJunoDurabilityCountdown, ColorAndOpacityDelegate) == 432, "Offset mismatch for UJunoDurabilityCountdown::ColorAndOpacityDelegate");
static_assert(offsetof(UJunoDurabilityCountdown, ForegroundColor) == 444, "Offset mismatch for UJunoDurabilityCountdown::ForegroundColor");
static_assert(offsetof(UJunoDurabilityCountdown, ForegroundColorDelegate) == 464, "Offset mismatch for UJunoDurabilityCountdown::ForegroundColorDelegate");
static_assert(offsetof(UJunoDurabilityCountdown, OnVisibilityChanged) == 480, "Offset mismatch for UJunoDurabilityCountdown::OnVisibilityChanged");
static_assert(offsetof(UJunoDurabilityCountdown, Padding) == 544, "Offset mismatch for UJunoDurabilityCountdown::Padding");
static_assert(offsetof(UJunoDurabilityCountdown, Priority) == 560, "Offset mismatch for UJunoDurabilityCountdown::Priority");
static_assert(offsetof(UJunoDurabilityCountdown, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UJunoDurabilityCountdown::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UJunoDurabilityCountdown, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UJunoDurabilityCountdown::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UJunoDurabilityCountdown, ActiveSequencePlayers) == 584, "Offset mismatch for UJunoDurabilityCountdown::ActiveSequencePlayers");
static_assert(offsetof(UJunoDurabilityCountdown, AnimationTickManager) == 600, "Offset mismatch for UJunoDurabilityCountdown::AnimationTickManager");
static_assert(offsetof(UJunoDurabilityCountdown, StoppedSequencePlayers) == 608, "Offset mismatch for UJunoDurabilityCountdown::StoppedSequencePlayers");
static_assert(offsetof(UJunoDurabilityCountdown, NamedSlotBindings) == 648, "Offset mismatch for UJunoDurabilityCountdown::NamedSlotBindings");
static_assert(offsetof(UJunoDurabilityCountdown, Extensions) == 664, "Offset mismatch for UJunoDurabilityCountdown::Extensions");
static_assert(offsetof(UJunoDurabilityCountdown, WidgetTree) == 680, "Offset mismatch for UJunoDurabilityCountdown::WidgetTree");
static_assert(offsetof(UJunoDurabilityCountdown, bHasScriptImplementedPaint) == 688, "Offset mismatch for UJunoDurabilityCountdown::bHasScriptImplementedPaint");
static_assert(offsetof(UJunoDurabilityCountdown, TickFrequency) == 712, "Offset mismatch for UJunoDurabilityCountdown::TickFrequency");
static_assert(offsetof(UJunoDurabilityCountdown, DesiredFocusWidget) == 716, "Offset mismatch for UJunoDurabilityCountdown::DesiredFocusWidget");
static_assert(offsetof(UJunoDurabilityCountdown, InputComponent) == 728, "Offset mismatch for UJunoDurabilityCountdown::InputComponent");
static_assert(offsetof(UJunoDurabilityCountdown, AnimationCallbacks) == 736, "Offset mismatch for UJunoDurabilityCountdown::AnimationCallbacks");

// /Script/JunoGameUI.JunoDynamicControlPromptsWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoDynamicControlPromptsWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* EntryBox; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDynamicControlPromptsWidget, EntryBox) == 880, "Offset mismatch for UJunoDynamicControlPromptsWidget::EntryBox");

// /Script/JunoGameUI.JunoDynamicUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UJunoDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* WaitForEventRouterAction; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> MapViewModelClasses; // 0x02A8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MapViewModels; // 0x02B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t HideWithMenuTags[0x20]; // 0x02C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t DisallowMenuTags[0x20]; // 0x02E8 (Size: 0x20, Type: StructProperty)
    void* TaggedWidgetSceneData; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TaggedWidgetScenes; // 0x0310 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TaggedWidgets; // 0x0320 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x80]; // 0x0330
    std::uint8_t CurrentModalSceneOperation[0x18]; // 0x03B0 (Size: 0x18, Type: OptionalProperty)
    std::uint8_t CurrentMenuOperationParams[0x20]; // 0x03C8 (Size: 0x20, Type: OptionalProperty)
    void* CurrentMenuOperationParamBoundObject; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoDynamicUIDirector, WaitForEventRouterAction) == 672, "Offset mismatch for UJunoDynamicUIDirector::WaitForEventRouterAction");
static_assert(offsetof(UJunoDynamicUIDirector, MapViewModelClasses) == 680, "Offset mismatch for UJunoDynamicUIDirector::MapViewModelClasses");
static_assert(offsetof(UJunoDynamicUIDirector, MapViewModels) == 696, "Offset mismatch for UJunoDynamicUIDirector::MapViewModels");
static_assert(offsetof(UJunoDynamicUIDirector, HideWithMenuTags) == 712, "Offset mismatch for UJunoDynamicUIDirector::HideWithMenuTags");
static_assert(offsetof(UJunoDynamicUIDirector, DisallowMenuTags) == 744, "Offset mismatch for UJunoDynamicUIDirector::DisallowMenuTags");
static_assert(offsetof(UJunoDynamicUIDirector, TaggedWidgetSceneData) == 776, "Offset mismatch for UJunoDynamicUIDirector::TaggedWidgetSceneData");
static_assert(offsetof(UJunoDynamicUIDirector, TaggedWidgetScenes) == 784, "Offset mismatch for UJunoDynamicUIDirector::TaggedWidgetScenes");
static_assert(offsetof(UJunoDynamicUIDirector, TaggedWidgets) == 800, "Offset mismatch for UJunoDynamicUIDirector::TaggedWidgets");
static_assert(offsetof(UJunoDynamicUIDirector, CurrentModalSceneOperation) == 944, "Offset mismatch for UJunoDynamicUIDirector::CurrentModalSceneOperation");
static_assert(offsetof(UJunoDynamicUIDirector, CurrentMenuOperationParams) == 968, "Offset mismatch for UJunoDynamicUIDirector::CurrentMenuOperationParams");
static_assert(offsetof(UJunoDynamicUIDirector, CurrentMenuOperationParamBoundObject) == 1000, "Offset mismatch for UJunoDynamicUIDirector::CurrentMenuOperationParamBoundObject");

// /Script/JunoGameUI.JunoDynamicUIDirectorComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoDynamicUIDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TaggedWidgetSceneData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HudLayoutScenes; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> WidgetPoolInitData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoDynamicUIDirectorComponent, TaggedWidgetSceneData) == 200, "Offset mismatch for UJunoDynamicUIDirectorComponent::TaggedWidgetSceneData");
static_assert(offsetof(UJunoDynamicUIDirectorComponent, HudLayoutScenes) == 208, "Offset mismatch for UJunoDynamicUIDirectorComponent::HudLayoutScenes");
static_assert(offsetof(UJunoDynamicUIDirectorComponent, WidgetPoolInitData) == 224, "Offset mismatch for UJunoDynamicUIDirectorComponent::WidgetPoolInitData");

// /Script/JunoGameUI.JunoEnchantmentWidget
// Kind: Class; super: CommonUserWidget
class UJunoEnchantmentWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* Enchantment; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnchantmentState; // 0x0338 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoEnchantmentWidget, Enchantment) == 816, "Offset mismatch for UJunoEnchantmentWidget::Enchantment");
static_assert(offsetof(UJunoEnchantmentWidget, EnchantmentState) == 824, "Offset mismatch for UJunoEnchantmentWidget::EnchantmentState");

// /Script/JunoGameUI.JunoEnchantmentsWidget
// Kind: Class; super: CommonUserWidget
class UJunoEnchantmentsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EntryBox_Enchantments; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* RepresentedItem; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoEnchantmentsWidget, EntryBox_Enchantments) == 816, "Offset mismatch for UJunoEnchantmentsWidget::EntryBox_Enchantments");
static_assert(offsetof(UJunoEnchantmentsWidget, RepresentedItem) == 824, "Offset mismatch for UJunoEnchantmentsWidget::RepresentedItem");

// /Script/JunoGameUI.JunoEquipmentWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoEquipmentWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* InventorySlot_Item; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemSlotData[0x1]; // 0x0378 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoEquipmentWidget, InventorySlot_Item) == 880, "Offset mismatch for UJunoEquipmentWidget::InventorySlot_Item");
static_assert(offsetof(UJunoEquipmentWidget, ItemSlotData) == 888, "Offset mismatch for UJunoEquipmentWidget::ItemSlotData");

// /Script/JunoGameUI.JunoEquippedItemViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoEquippedItemViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PrimaryActionText[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryActionText[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShowOffhandPromptFirst; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HideOffhandPrompt; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoEquippedItemViewModel, PrimaryActionText) == 104, "Offset mismatch for UJunoEquippedItemViewModel::PrimaryActionText");
static_assert(offsetof(UJunoEquippedItemViewModel, SecondaryActionText) == 120, "Offset mismatch for UJunoEquippedItemViewModel::SecondaryActionText");
static_assert(offsetof(UJunoEquippedItemViewModel, ShowOffhandPromptFirst) == 136, "Offset mismatch for UJunoEquippedItemViewModel::ShowOffhandPromptFirst");
static_assert(offsetof(UJunoEquippedItemViewModel, HideOffhandPrompt) == 137, "Offset mismatch for UJunoEquippedItemViewModel::HideOffhandPrompt");

// /Script/JunoGameUI.JunoFilterTagWidget
// Kind: Class; super: CommonUserWidget
class UJunoFilterTagWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoFilterTagWidget, bDisplayInActionBar) == 776, "Offset mismatch for UJunoFilterTagWidget::bDisplayInActionBar");
static_assert(offsetof(UJunoFilterTagWidget, bConsumePointerInput) == 777, "Offset mismatch for UJunoFilterTagWidget::bConsumePointerInput");

// /Script/JunoGameUI.JunoFocalPointBuildChallengeEntryViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoFocalPointBuildChallengeEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DataBuildChallengeName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t DataBuildChallengeDescription[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t DataBuildChallengeAssetIcon[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bDataBuildChallengeMet; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t DataBuildChallengeHasCount; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::int32_t DataBuildChallengeRequiredCount; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t DataBuildChallengePointsToReceive; // 0x00B4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, DataBuildChallengeName) == 104, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::DataBuildChallengeName");
static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, DataBuildChallengeDescription) == 120, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::DataBuildChallengeDescription");
static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, DataBuildChallengeAssetIcon) == 136, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::DataBuildChallengeAssetIcon");
static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, bDataBuildChallengeMet) == 168, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::bDataBuildChallengeMet");
static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, DataBuildChallengeHasCount) == 172, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::DataBuildChallengeHasCount");
static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, DataBuildChallengeRequiredCount) == 176, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::DataBuildChallengeRequiredCount");
static_assert(offsetof(UJunoFocalPointBuildChallengeEntryViewModel, DataBuildChallengePointsToReceive) == 180, "Offset mismatch for UJunoFocalPointBuildChallengeEntryViewModel::DataBuildChallengePointsToReceive");

// /Script/JunoGameUI.JunoFocalPointsBuildChallengesViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoFocalPointsBuildChallengesViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t FocalPointName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t FocalPointDescription[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t FocalPointAssetIcon[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t FocalPointCurrentLevel; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00AC
    TArray<void*> BuildChallengeEntries; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x1C]; // 0x00C0
    FName FocalPointsDataRegistryName; // 0x00DC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoFocalPointsBuildChallengesViewModel, FocalPointName) == 104, "Offset mismatch for UJunoFocalPointsBuildChallengesViewModel::FocalPointName");
static_assert(offsetof(UJunoFocalPointsBuildChallengesViewModel, FocalPointDescription) == 120, "Offset mismatch for UJunoFocalPointsBuildChallengesViewModel::FocalPointDescription");
static_assert(offsetof(UJunoFocalPointsBuildChallengesViewModel, FocalPointAssetIcon) == 136, "Offset mismatch for UJunoFocalPointsBuildChallengesViewModel::FocalPointAssetIcon");
static_assert(offsetof(UJunoFocalPointsBuildChallengesViewModel, FocalPointCurrentLevel) == 168, "Offset mismatch for UJunoFocalPointsBuildChallengesViewModel::FocalPointCurrentLevel");
static_assert(offsetof(UJunoFocalPointsBuildChallengesViewModel, BuildChallengeEntries) == 176, "Offset mismatch for UJunoFocalPointsBuildChallengesViewModel::BuildChallengeEntries");
static_assert(offsetof(UJunoFocalPointsBuildChallengesViewModel, FocalPointsDataRegistryName) == 220, "Offset mismatch for UJunoFocalPointsBuildChallengesViewModel::FocalPointsDataRegistryName");

// /Script/JunoGameUI.JunoFortItemViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoFortItemViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* RepresentedItem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxAllowedItemAlterations; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxAllowedNonFocusItemAlterations; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoFortItemViewModel, RepresentedItem) == 120, "Offset mismatch for UJunoFortItemViewModel::RepresentedItem");
static_assert(offsetof(UJunoFortItemViewModel, MaxAllowedItemAlterations) == 128, "Offset mismatch for UJunoFortItemViewModel::MaxAllowedItemAlterations");
static_assert(offsetof(UJunoFortItemViewModel, MaxAllowedNonFocusItemAlterations) == 132, "Offset mismatch for UJunoFortItemViewModel::MaxAllowedNonFocusItemAlterations");

// /Script/JunoGameUI.JunoFreeBuildCategoryUIData
// Kind: Class; super: DataAsset
class UJunoFreeBuildCategoryUIData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Categories; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubCategories; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoFreeBuildCategoryUIData, Categories) == 40, "Offset mismatch for UJunoFreeBuildCategoryUIData::Categories");
static_assert(offsetof(UJunoFreeBuildCategoryUIData, SubCategories) == 56, "Offset mismatch for UJunoFreeBuildCategoryUIData::SubCategories");

// /Script/JunoGameUI.JunoFullScreenMap
// Kind: Class; super: CommonActivatableWidget
class UJunoFullScreenMap
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    std::uint8_t CloseScreenAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    void* Button_Back; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CloseTouch; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_PlaceMarker; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_ResetFocus; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* MapWidget; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Text_EmptyList; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* HBox_MapPrompts; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* RT_Location; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* RT_Biome; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* RT_SubBiome; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* Image_Biome; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* CommonActionWidget_Zoom_Gamepad; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    void* CommonActionWidget_Pan_Gamepad; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CaveIcon[0xB0]; // 0x0540 (Size: 0xB0, Type: StructProperty)
    float ZoomMouseWheelScale; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float TouchZoomSpeed; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    float GamepadZoomSpeed; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float GamepadPanSpeed; // 0x05FC (Size: 0x4, Type: FloatProperty)
    float GamepadDeadZone; // 0x0600 (Size: 0x4, Type: FloatProperty)
    float VirtualCursorMoveSpeed; // 0x0604 (Size: 0x4, Type: FloatProperty)
    float VirtualCursorHoverSpeedMultiplier; // 0x0608 (Size: 0x4, Type: FloatProperty)
    float VirtualCursorAccelerationTime; // 0x060C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyHoveredIconMagnetism; // 0x0610 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVirtualCursorEnabled; // 0x0611 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0612
    float VirtualCursorMagnetismSpeed; // 0x0614 (Size: 0x4, Type: FloatProperty)
    void* VirtualCursorCurve; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VirtualCursorBlockingWidgets; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanPlaceMapPings; // 0x0630 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoFullScreenMap, CloseScreenAction) == 1224, "Offset mismatch for UJunoFullScreenMap::CloseScreenAction");
static_assert(offsetof(UJunoFullScreenMap, Button_Back) == 1240, "Offset mismatch for UJunoFullScreenMap::Button_Back");
static_assert(offsetof(UJunoFullScreenMap, Button_CloseTouch) == 1248, "Offset mismatch for UJunoFullScreenMap::Button_CloseTouch");
static_assert(offsetof(UJunoFullScreenMap, Button_PlaceMarker) == 1256, "Offset mismatch for UJunoFullScreenMap::Button_PlaceMarker");
static_assert(offsetof(UJunoFullScreenMap, Button_ResetFocus) == 1264, "Offset mismatch for UJunoFullScreenMap::Button_ResetFocus");
static_assert(offsetof(UJunoFullScreenMap, MapWidget) == 1272, "Offset mismatch for UJunoFullScreenMap::MapWidget");
static_assert(offsetof(UJunoFullScreenMap, Text_EmptyList) == 1280, "Offset mismatch for UJunoFullScreenMap::Text_EmptyList");
static_assert(offsetof(UJunoFullScreenMap, HBox_MapPrompts) == 1288, "Offset mismatch for UJunoFullScreenMap::HBox_MapPrompts");
static_assert(offsetof(UJunoFullScreenMap, RT_Location) == 1296, "Offset mismatch for UJunoFullScreenMap::RT_Location");
static_assert(offsetof(UJunoFullScreenMap, RT_Biome) == 1304, "Offset mismatch for UJunoFullScreenMap::RT_Biome");
static_assert(offsetof(UJunoFullScreenMap, RT_SubBiome) == 1312, "Offset mismatch for UJunoFullScreenMap::RT_SubBiome");
static_assert(offsetof(UJunoFullScreenMap, Image_Biome) == 1320, "Offset mismatch for UJunoFullScreenMap::Image_Biome");
static_assert(offsetof(UJunoFullScreenMap, CommonActionWidget_Zoom_Gamepad) == 1328, "Offset mismatch for UJunoFullScreenMap::CommonActionWidget_Zoom_Gamepad");
static_assert(offsetof(UJunoFullScreenMap, CommonActionWidget_Pan_Gamepad) == 1336, "Offset mismatch for UJunoFullScreenMap::CommonActionWidget_Pan_Gamepad");
static_assert(offsetof(UJunoFullScreenMap, CaveIcon) == 1344, "Offset mismatch for UJunoFullScreenMap::CaveIcon");
static_assert(offsetof(UJunoFullScreenMap, ZoomMouseWheelScale) == 1520, "Offset mismatch for UJunoFullScreenMap::ZoomMouseWheelScale");
static_assert(offsetof(UJunoFullScreenMap, TouchZoomSpeed) == 1524, "Offset mismatch for UJunoFullScreenMap::TouchZoomSpeed");
static_assert(offsetof(UJunoFullScreenMap, GamepadZoomSpeed) == 1528, "Offset mismatch for UJunoFullScreenMap::GamepadZoomSpeed");
static_assert(offsetof(UJunoFullScreenMap, GamepadPanSpeed) == 1532, "Offset mismatch for UJunoFullScreenMap::GamepadPanSpeed");
static_assert(offsetof(UJunoFullScreenMap, GamepadDeadZone) == 1536, "Offset mismatch for UJunoFullScreenMap::GamepadDeadZone");
static_assert(offsetof(UJunoFullScreenMap, VirtualCursorMoveSpeed) == 1540, "Offset mismatch for UJunoFullScreenMap::VirtualCursorMoveSpeed");
static_assert(offsetof(UJunoFullScreenMap, VirtualCursorHoverSpeedMultiplier) == 1544, "Offset mismatch for UJunoFullScreenMap::VirtualCursorHoverSpeedMultiplier");
static_assert(offsetof(UJunoFullScreenMap, VirtualCursorAccelerationTime) == 1548, "Offset mismatch for UJunoFullScreenMap::VirtualCursorAccelerationTime");
static_assert(offsetof(UJunoFullScreenMap, bApplyHoveredIconMagnetism) == 1552, "Offset mismatch for UJunoFullScreenMap::bApplyHoveredIconMagnetism");
static_assert(offsetof(UJunoFullScreenMap, bIsVirtualCursorEnabled) == 1553, "Offset mismatch for UJunoFullScreenMap::bIsVirtualCursorEnabled");
static_assert(offsetof(UJunoFullScreenMap, VirtualCursorMagnetismSpeed) == 1556, "Offset mismatch for UJunoFullScreenMap::VirtualCursorMagnetismSpeed");
static_assert(offsetof(UJunoFullScreenMap, VirtualCursorCurve) == 1560, "Offset mismatch for UJunoFullScreenMap::VirtualCursorCurve");
static_assert(offsetof(UJunoFullScreenMap, VirtualCursorBlockingWidgets) == 1568, "Offset mismatch for UJunoFullScreenMap::VirtualCursorBlockingWidgets");
static_assert(offsetof(UJunoFullScreenMap, bCanPlaceMapPings) == 1584, "Offset mismatch for UJunoFullScreenMap::bCanPlaceMapPings");

// /Script/JunoGameUI.JunoGameEventStreamEntryWidget
// Kind: Class; super: UserWidget
class UJunoGameEventStreamEntryWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnHideAnimComplete; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoGameEventStreamEntryWidget, OnHideAnimComplete) == 776, "Offset mismatch for UJunoGameEventStreamEntryWidget::OnHideAnimComplete");

// /Script/JunoGameUI.JunoGameEventStreamWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoGameEventStreamWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    TArray<void*> GameEvents; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x0380
    std::int32_t MaxDisplayedItems; // 0x039C (Size: 0x4, Type: IntProperty)
    float ExpirationTime; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03A4
    void* EntryBox_GameEvents; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoGameEventStreamWidget, GameEvents) == 880, "Offset mismatch for UJunoGameEventStreamWidget::GameEvents");
static_assert(offsetof(UJunoGameEventStreamWidget, MaxDisplayedItems) == 924, "Offset mismatch for UJunoGameEventStreamWidget::MaxDisplayedItems");
static_assert(offsetof(UJunoGameEventStreamWidget, ExpirationTime) == 928, "Offset mismatch for UJunoGameEventStreamWidget::ExpirationTime");
static_assert(offsetof(UJunoGameEventStreamWidget, EntryBox_GameEvents) == 936, "Offset mismatch for UJunoGameEventStreamWidget::EntryBox_GameEvents");

// /Script/JunoGameUI.JunoGameStateComponent_InventoryUIData
// Kind: Class; super: JunoGameStateComponent_UIDataBase
class UJunoGameStateComponent_InventoryUIData
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* InventoryUIData; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoGameStateComponent_InventoryUIData, InventoryUIData) == 240, "Offset mismatch for UJunoGameStateComponent_InventoryUIData::InventoryUIData");

// /Script/JunoGameUI.JunoGameStateComponent_UIData
// Kind: Class; super: JunoGameStateComponent_UIDataBase
class UJunoGameStateComponent_UIData
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* CraftingCategoryUIData; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* VillageUIData; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeaponEssenceDataRegistryType[0x4]; // 0x0100 (Size: 0x4, Type: StructProperty)
    std::uint8_t BiomeUIDataRegistryType[0x4]; // 0x0104 (Size: 0x4, Type: StructProperty)
    std::uint8_t CraftingFormulaRegistryType[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    std::uint8_t CraftingCategoryFilterRegistryType[0x4]; // 0x010C (Size: 0x4, Type: StructProperty)
    std::uint8_t CraftingIngredientRegistryType[0x4]; // 0x0110 (Size: 0x4, Type: StructProperty)
    std::uint8_t DistanceRegistryType[0x4]; // 0x0114 (Size: 0x4, Type: StructProperty)
    std::uint8_t CraftingRegistryType[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t CurrencyDataRegistryType[0x4]; // 0x011C (Size: 0x4, Type: StructProperty)
    std::uint8_t InteractDecoratorRegistryType[0x4]; // 0x0120 (Size: 0x4, Type: StructProperty)
    std::uint8_t BuildMenuExclusionRegistryType[0x4]; // 0x0124 (Size: 0x4, Type: StructProperty)
    std::uint8_t ContextActionRegistryType[0x4]; // 0x0128 (Size: 0x4, Type: StructProperty)
    std::uint8_t AlterationMappingRegistryType[0x4]; // 0x012C (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultDistanceDataTag[0x4]; // 0x0130 (Size: 0x4, Type: StructProperty)
    std::uint8_t TypeTagPrefix[0x4]; // 0x0134 (Size: 0x4, Type: StructProperty)
    std::uint8_t FreeBuildTypeTagPrefix[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t BuildingRecipeCategoryPrefix[0x4]; // 0x0158 (Size: 0x4, Type: StructProperty)
    std::uint8_t BuildingRecipeSubCategoryPrefix[0x1]; // 0x015C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_UIData, CraftingCategoryUIData) == 240, "Offset mismatch for UJunoGameStateComponent_UIData::CraftingCategoryUIData");
static_assert(offsetof(UJunoGameStateComponent_UIData, VillageUIData) == 248, "Offset mismatch for UJunoGameStateComponent_UIData::VillageUIData");
static_assert(offsetof(UJunoGameStateComponent_UIData, WeaponEssenceDataRegistryType) == 256, "Offset mismatch for UJunoGameStateComponent_UIData::WeaponEssenceDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, BiomeUIDataRegistryType) == 260, "Offset mismatch for UJunoGameStateComponent_UIData::BiomeUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, CraftingFormulaRegistryType) == 264, "Offset mismatch for UJunoGameStateComponent_UIData::CraftingFormulaRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, CraftingCategoryFilterRegistryType) == 268, "Offset mismatch for UJunoGameStateComponent_UIData::CraftingCategoryFilterRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, CraftingIngredientRegistryType) == 272, "Offset mismatch for UJunoGameStateComponent_UIData::CraftingIngredientRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, DistanceRegistryType) == 276, "Offset mismatch for UJunoGameStateComponent_UIData::DistanceRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, CraftingRegistryType) == 280, "Offset mismatch for UJunoGameStateComponent_UIData::CraftingRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, CurrencyDataRegistryType) == 284, "Offset mismatch for UJunoGameStateComponent_UIData::CurrencyDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, InteractDecoratorRegistryType) == 288, "Offset mismatch for UJunoGameStateComponent_UIData::InteractDecoratorRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, BuildMenuExclusionRegistryType) == 292, "Offset mismatch for UJunoGameStateComponent_UIData::BuildMenuExclusionRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, ContextActionRegistryType) == 296, "Offset mismatch for UJunoGameStateComponent_UIData::ContextActionRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, AlterationMappingRegistryType) == 300, "Offset mismatch for UJunoGameStateComponent_UIData::AlterationMappingRegistryType");
static_assert(offsetof(UJunoGameStateComponent_UIData, DefaultDistanceDataTag) == 304, "Offset mismatch for UJunoGameStateComponent_UIData::DefaultDistanceDataTag");
static_assert(offsetof(UJunoGameStateComponent_UIData, TypeTagPrefix) == 308, "Offset mismatch for UJunoGameStateComponent_UIData::TypeTagPrefix");
static_assert(offsetof(UJunoGameStateComponent_UIData, FreeBuildTypeTagPrefix) == 312, "Offset mismatch for UJunoGameStateComponent_UIData::FreeBuildTypeTagPrefix");
static_assert(offsetof(UJunoGameStateComponent_UIData, BuildingRecipeCategoryPrefix) == 344, "Offset mismatch for UJunoGameStateComponent_UIData::BuildingRecipeCategoryPrefix");
static_assert(offsetof(UJunoGameStateComponent_UIData, BuildingRecipeSubCategoryPrefix) == 348, "Offset mismatch for UJunoGameStateComponent_UIData::BuildingRecipeSubCategoryPrefix");

// /Script/JunoGameUI.JunoGameStateComponent_UIDataBase
// Kind: Class; super: JunoGameStateComponent_DataBase
class UJunoGameStateComponent_UIDataBase
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t ParticipantStateRegistryType[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_UIDataBase, ParticipantStateRegistryType) == 216, "Offset mismatch for UJunoGameStateComponent_UIDataBase::ParticipantStateRegistryType");

// /Script/JunoGameUI.JunoGliderWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoGliderWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* MainContent; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_MainContent; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoGliderWidget, MainContent) == 880, "Offset mismatch for UJunoGliderWidget::MainContent");
static_assert(offsetof(UJunoGliderWidget, Overlay_MainContent) == 888, "Offset mismatch for UJunoGliderWidget::Overlay_MainContent");

// /Script/JunoGameUI.JunoGuidedBuildingHudStateWidget
// Kind: Class; super: CommonUserWidget
class UJunoGuidedBuildingHudStateWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> CurrentGuidedBuildingActor; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    float AutoHideTimeLength; // 0x0338 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoGuidedBuildingHudStateWidget, CurrentGuidedBuildingActor) == 816, "Offset mismatch for UJunoGuidedBuildingHudStateWidget::CurrentGuidedBuildingActor");
static_assert(offsetof(UJunoGuidedBuildingHudStateWidget, AutoHideTimeLength) == 824, "Offset mismatch for UJunoGuidedBuildingHudStateWidget::AutoHideTimeLength");

// /Script/JunoGameUI.JunoHUDMenuTabButton
// Kind: Class; super: CommonButtonBase
class UJunoHUDMenuTabButton
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t ClickEvent[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::int32_t MinWidth; // 0x0334 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x033C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0344
    void* Style; // 0x0348 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bHideInputAction; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0351
    std::uint8_t PressedSlateSoundOverride[0x18]; // 0x0358 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSoundOverride[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredSlateSoundOverride[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedPressedSlateSoundOverride[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedClickedSlateSoundOverride[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedHoveredSlateSoundOverride[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedPressedSlateSoundOverride[0x18]; // 0x03E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedClickedSlateSoundOverride[0x18]; // 0x0400 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedHoveredSlateSoundOverride[0x18]; // 0x0418 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyAlphaOnDisable; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bDisplayInputActionWhenNotInteractable (shared storage)
    // 0x0430 BoolProperty bInteractableWhenSelected (shared storage)
    // 0x0430 BoolProperty bLocked (shared storage)
    // 0x0430 BoolProperty bSelectable (shared storage)
    // 0x0430 BoolProperty bShouldSelectUponReceivingFocus (shared storage)
    // 0x0430 BoolProperty bToggleable (shared storage)
    // 0x0430 BoolProperty bTriggerClickedAfterSelection (shared storage)
    std::uint8_t bHideInputActionWithKeyboard; // 0x0431 (Size: 0x1, Type: BoolProperty)
    // 0x0431 BoolProperty bRequiresHold (shared storage)
    // 0x0431 BoolProperty bShouldUseFallbackDefaultInputAction (shared storage)
    std::uint8_t Pad_0003[0x6]; // 0x0432
    void* HoldData; // 0x0438 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSimulateHoverOnTouchInput; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0441
    std::uint8_t ClickMethod; // 0x0443 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TouchMethod; // 0x0444 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PressMethod; // 0x0445 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0446
    std::int32_t InputPriority; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x4]; // 0x044C
    std::uint8_t TriggeringInputAction[0x10]; // 0x0450 (Size: 0x10, Type: StructProperty)
    void* TriggeringEnhancedInputAction; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0468
    std::uint8_t bNavigateToNextWidgetOnDisable; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0479
    FMulticastInlineDelegate OnSelectedChangedBase; // 0x0480 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseClicked; // 0x0490 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseHovered; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseFocused; // 0x04D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnfocused; // 0x04E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x04F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseSelected; // 0x0510 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnselected; // 0x0520 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragDetected; // 0x0530 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragEnter; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragLeave; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragOver; // 0x0560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDrop; // 0x0570 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x38]; // 0x0580
    std::uint8_t bIsPersistentBinding; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputModeOverride; // 0x05B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x26]; // 0x05BA
    void* SingleMaterialStyleMID; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x8]; // 0x05E8
    std::uint8_t NormalStyle[0x390]; // 0x05F0 (Size: 0x390, Type: StructProperty)
    std::uint8_t SelectedStyle[0x390]; // 0x0980 (Size: 0x390, Type: StructProperty)
    std::uint8_t DisabledStyle[0x390]; // 0x0D10 (Size: 0x390, Type: StructProperty)
    std::uint8_t LockedStyle[0x390]; // 0x10A0 (Size: 0x390, Type: StructProperty)
    std::uint8_t bStopDoubleClickPropagation; // 0x1430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x167]; // 0x1431
    void* InputActionWidget; // 0x1598 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoHUDMenuTabButton, ClickEvent) == 816, "Offset mismatch for UJunoHUDMenuTabButton::ClickEvent");
static_assert(offsetof(UJunoHUDMenuTabButton, MinWidth) == 820, "Offset mismatch for UJunoHUDMenuTabButton::MinWidth");
static_assert(offsetof(UJunoHUDMenuTabButton, MinHeight) == 824, "Offset mismatch for UJunoHUDMenuTabButton::MinHeight");
static_assert(offsetof(UJunoHUDMenuTabButton, MaxWidth) == 828, "Offset mismatch for UJunoHUDMenuTabButton::MaxWidth");
static_assert(offsetof(UJunoHUDMenuTabButton, MaxHeight) == 832, "Offset mismatch for UJunoHUDMenuTabButton::MaxHeight");
static_assert(offsetof(UJunoHUDMenuTabButton, Style) == 840, "Offset mismatch for UJunoHUDMenuTabButton::Style");
static_assert(offsetof(UJunoHUDMenuTabButton, bHideInputAction) == 848, "Offset mismatch for UJunoHUDMenuTabButton::bHideInputAction");
static_assert(offsetof(UJunoHUDMenuTabButton, PressedSlateSoundOverride) == 856, "Offset mismatch for UJunoHUDMenuTabButton::PressedSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, ClickedSlateSoundOverride) == 880, "Offset mismatch for UJunoHUDMenuTabButton::ClickedSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, HoveredSlateSoundOverride) == 904, "Offset mismatch for UJunoHUDMenuTabButton::HoveredSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UJunoHUDMenuTabButton::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UJunoHUDMenuTabButton::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UJunoHUDMenuTabButton::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UJunoHUDMenuTabButton::LockedPressedSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UJunoHUDMenuTabButton::LockedClickedSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UJunoHUDMenuTabButton::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UJunoHUDMenuTabButton::bApplyAlphaOnDisable");
static_assert(offsetof(UJunoHUDMenuTabButton, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UJunoHUDMenuTabButton::bHideInputActionWithKeyboard");
static_assert(offsetof(UJunoHUDMenuTabButton, HoldData) == 1080, "Offset mismatch for UJunoHUDMenuTabButton::HoldData");
static_assert(offsetof(UJunoHUDMenuTabButton, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UJunoHUDMenuTabButton::bSimulateHoverOnTouchInput");
static_assert(offsetof(UJunoHUDMenuTabButton, ClickMethod) == 1091, "Offset mismatch for UJunoHUDMenuTabButton::ClickMethod");
static_assert(offsetof(UJunoHUDMenuTabButton, TouchMethod) == 1092, "Offset mismatch for UJunoHUDMenuTabButton::TouchMethod");
static_assert(offsetof(UJunoHUDMenuTabButton, PressMethod) == 1093, "Offset mismatch for UJunoHUDMenuTabButton::PressMethod");
static_assert(offsetof(UJunoHUDMenuTabButton, InputPriority) == 1096, "Offset mismatch for UJunoHUDMenuTabButton::InputPriority");
static_assert(offsetof(UJunoHUDMenuTabButton, TriggeringInputAction) == 1104, "Offset mismatch for UJunoHUDMenuTabButton::TriggeringInputAction");
static_assert(offsetof(UJunoHUDMenuTabButton, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UJunoHUDMenuTabButton::TriggeringEnhancedInputAction");
static_assert(offsetof(UJunoHUDMenuTabButton, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UJunoHUDMenuTabButton::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UJunoHUDMenuTabButton, OnSelectedChangedBase) == 1152, "Offset mismatch for UJunoHUDMenuTabButton::OnSelectedChangedBase");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseClicked) == 1168, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseClicked");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseDoubleClicked");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseHovered) == 1200, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseHovered");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseUnhovered");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseFocused) == 1232, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseFocused");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseUnfocused");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseLockClicked");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseSelected) == 1296, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseSelected");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseUnselected) == 1312, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseUnselected");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseDragDetected");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseDragEnter");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseDragLeave");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseDragOver) == 1376, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseDragOver");
static_assert(offsetof(UJunoHUDMenuTabButton, OnButtonBaseDrop) == 1392, "Offset mismatch for UJunoHUDMenuTabButton::OnButtonBaseDrop");
static_assert(offsetof(UJunoHUDMenuTabButton, bIsPersistentBinding) == 1464, "Offset mismatch for UJunoHUDMenuTabButton::bIsPersistentBinding");
static_assert(offsetof(UJunoHUDMenuTabButton, InputModeOverride) == 1465, "Offset mismatch for UJunoHUDMenuTabButton::InputModeOverride");
static_assert(offsetof(UJunoHUDMenuTabButton, SingleMaterialStyleMID) == 1504, "Offset mismatch for UJunoHUDMenuTabButton::SingleMaterialStyleMID");
static_assert(offsetof(UJunoHUDMenuTabButton, NormalStyle) == 1520, "Offset mismatch for UJunoHUDMenuTabButton::NormalStyle");
static_assert(offsetof(UJunoHUDMenuTabButton, SelectedStyle) == 2432, "Offset mismatch for UJunoHUDMenuTabButton::SelectedStyle");
static_assert(offsetof(UJunoHUDMenuTabButton, DisabledStyle) == 3344, "Offset mismatch for UJunoHUDMenuTabButton::DisabledStyle");
static_assert(offsetof(UJunoHUDMenuTabButton, LockedStyle) == 4256, "Offset mismatch for UJunoHUDMenuTabButton::LockedStyle");
static_assert(offsetof(UJunoHUDMenuTabButton, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UJunoHUDMenuTabButton::bStopDoubleClickPropagation");
static_assert(offsetof(UJunoHUDMenuTabButton, InputActionWidget) == 5528, "Offset mismatch for UJunoHUDMenuTabButton::InputActionWidget");

// /Script/JunoGameUI.JunoHudMenu
// Kind: Class; super: JunoHudMenuBase
class UJunoHudMenu
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    void* Button_ItemShop; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    FName DefaultSelectedTabId; // 0x0528 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoHudMenu, Button_ItemShop) == 1312, "Offset mismatch for UJunoHudMenu::Button_ItemShop");
static_assert(offsetof(UJunoHudMenu, DefaultSelectedTabId) == 1320, "Offset mismatch for UJunoHudMenu::DefaultSelectedTabId");

// /Script/JunoGameUI.JunoHudMenuBase
// Kind: Class; super: CommonActivatableWidget
class UJunoHudMenuBase
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* TabList_MenuTabs; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Tabs; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseHUDMenuAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    void* HudMenuBaseInitData; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CurrentTabRequests; // 0x04E0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04F0
    void* ModalSlot; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoHudMenuBase, TabList_MenuTabs) == 1200, "Offset mismatch for UJunoHudMenuBase::TabList_MenuTabs");
static_assert(offsetof(UJunoHudMenuBase, Switcher_Tabs) == 1208, "Offset mismatch for UJunoHudMenuBase::Switcher_Tabs");
static_assert(offsetof(UJunoHudMenuBase, Button_Back) == 1216, "Offset mismatch for UJunoHudMenuBase::Button_Back");
static_assert(offsetof(UJunoHudMenuBase, CloseHUDMenuAction) == 1224, "Offset mismatch for UJunoHudMenuBase::CloseHUDMenuAction");
static_assert(offsetof(UJunoHudMenuBase, HudMenuBaseInitData) == 1240, "Offset mismatch for UJunoHudMenuBase::HudMenuBaseInitData");
static_assert(offsetof(UJunoHudMenuBase, CurrentTabRequests) == 1248, "Offset mismatch for UJunoHudMenuBase::CurrentTabRequests");
static_assert(offsetof(UJunoHudMenuBase, ModalSlot) == 1272, "Offset mismatch for UJunoHudMenuBase::ModalSlot");

// /Script/JunoGameUI.JunoHudMenuBaseInitData
// Kind: Class; super: Object
class UJunoHudMenuBaseInitData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName InitialHudMenuBaseTab; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoHudMenuBaseInitData, InitialHudMenuBaseTab) == 40, "Offset mismatch for UJunoHudMenuBaseInitData::InitialHudMenuBaseTab");

// /Script/JunoGameUI.JunoHudMenuContentInterface
// Kind: Class; super: Interface
class UJunoHudMenuContentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoHudMenuContentWidget
// Kind: Class; super: CommonActivatableWidget
class UJunoHudMenuContentWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoHudMenuContentWidget, bIsBackHandler) == 816, "Offset mismatch for UJunoHudMenuContentWidget::bIsBackHandler");
static_assert(offsetof(UJunoHudMenuContentWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJunoHudMenuContentWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJunoHudMenuContentWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJunoHudMenuContentWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UJunoHudMenuContentWidget, bAutoActivate) == 840, "Offset mismatch for UJunoHudMenuContentWidget::bAutoActivate");
static_assert(offsetof(UJunoHudMenuContentWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UJunoHudMenuContentWidget::bSupportsActivationFocus");
static_assert(offsetof(UJunoHudMenuContentWidget, bIsModal) == 842, "Offset mismatch for UJunoHudMenuContentWidget::bIsModal");
static_assert(offsetof(UJunoHudMenuContentWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UJunoHudMenuContentWidget::bAutoRestoreFocus");
static_assert(offsetof(UJunoHudMenuContentWidget, bOverrideActionDomain) == 844, "Offset mismatch for UJunoHudMenuContentWidget::bOverrideActionDomain");
static_assert(offsetof(UJunoHudMenuContentWidget, InputMapping) == 848, "Offset mismatch for UJunoHudMenuContentWidget::InputMapping");
static_assert(offsetof(UJunoHudMenuContentWidget, InputMappingPriority) == 856, "Offset mismatch for UJunoHudMenuContentWidget::InputMappingPriority");
static_assert(offsetof(UJunoHudMenuContentWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UJunoHudMenuContentWidget::InputModeTagsToAdd");
static_assert(offsetof(UJunoHudMenuContentWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UJunoHudMenuContentWidget::InputModeTagsToRemove");
static_assert(offsetof(UJunoHudMenuContentWidget, ActionDomainOverride) == 928, "Offset mismatch for UJunoHudMenuContentWidget::ActionDomainOverride");
static_assert(offsetof(UJunoHudMenuContentWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UJunoHudMenuContentWidget::BP_OnWidgetActivated");
static_assert(offsetof(UJunoHudMenuContentWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJunoHudMenuContentWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UJunoHudMenuContentWidget, bIsActive) == 992, "Offset mismatch for UJunoHudMenuContentWidget::bIsActive");
static_assert(offsetof(UJunoHudMenuContentWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJunoHudMenuContentWidget::VisibilityBoundWidgets");
static_assert(offsetof(UJunoHudMenuContentWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJunoHudMenuContentWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UJunoHudMenuContentWidget, ActivatedVisibility) == 1177, "Offset mismatch for UJunoHudMenuContentWidget::ActivatedVisibility");
static_assert(offsetof(UJunoHudMenuContentWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJunoHudMenuContentWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJunoHudMenuContentWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UJunoHudMenuContentWidget::DeactivatedVisibility");

// /Script/JunoGameUI.JunoInGameWorldSettingsScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoInGameWorldSettingsScreen
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoInGameWorldSettingsScreen, bIsBackHandler) == 816, "Offset mismatch for UJunoInGameWorldSettingsScreen::bIsBackHandler");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UJunoInGameWorldSettingsScreen::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, OverrideBackActionDisplayName) == 824, "Offset mismatch for UJunoInGameWorldSettingsScreen::OverrideBackActionDisplayName");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bAutoActivate) == 840, "Offset mismatch for UJunoInGameWorldSettingsScreen::bAutoActivate");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bSupportsActivationFocus) == 841, "Offset mismatch for UJunoInGameWorldSettingsScreen::bSupportsActivationFocus");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bIsModal) == 842, "Offset mismatch for UJunoInGameWorldSettingsScreen::bIsModal");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bAutoRestoreFocus) == 843, "Offset mismatch for UJunoInGameWorldSettingsScreen::bAutoRestoreFocus");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bOverrideActionDomain) == 844, "Offset mismatch for UJunoInGameWorldSettingsScreen::bOverrideActionDomain");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, InputMapping) == 848, "Offset mismatch for UJunoInGameWorldSettingsScreen::InputMapping");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, InputMappingPriority) == 856, "Offset mismatch for UJunoInGameWorldSettingsScreen::InputMappingPriority");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, InputModeTagsToAdd) == 864, "Offset mismatch for UJunoInGameWorldSettingsScreen::InputModeTagsToAdd");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, InputModeTagsToRemove) == 896, "Offset mismatch for UJunoInGameWorldSettingsScreen::InputModeTagsToRemove");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, ActionDomainOverride) == 928, "Offset mismatch for UJunoInGameWorldSettingsScreen::ActionDomainOverride");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, BP_OnWidgetActivated) == 960, "Offset mismatch for UJunoInGameWorldSettingsScreen::BP_OnWidgetActivated");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UJunoInGameWorldSettingsScreen::BP_OnWidgetDeactivated");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bIsActive) == 992, "Offset mismatch for UJunoInGameWorldSettingsScreen::bIsActive");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, VisibilityBoundWidgets) == 1000, "Offset mismatch for UJunoInGameWorldSettingsScreen::VisibilityBoundWidgets");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UJunoInGameWorldSettingsScreen::bSetVisibilityOnActivated");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, ActivatedVisibility) == 1177, "Offset mismatch for UJunoInGameWorldSettingsScreen::ActivatedVisibility");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UJunoInGameWorldSettingsScreen::bSetVisibilityOnDeactivated");
static_assert(offsetof(UJunoInGameWorldSettingsScreen, DeactivatedVisibility) == 1179, "Offset mismatch for UJunoInGameWorldSettingsScreen::DeactivatedVisibility");

// /Script/JunoGameUI.JunoInGameWorldSettingsViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoInGameWorldSettingsViewModel
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* CurrentWorldViewModel; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SettingsDataTable[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> WorldImageDataTable; // 0x0098 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoInGameWorldSettingsViewModel, CurrentWorldViewModel) == 112, "Offset mismatch for UJunoInGameWorldSettingsViewModel::CurrentWorldViewModel");
static_assert(offsetof(UJunoInGameWorldSettingsViewModel, SettingsDataTable) == 120, "Offset mismatch for UJunoInGameWorldSettingsViewModel::SettingsDataTable");
static_assert(offsetof(UJunoInGameWorldSettingsViewModel, WorldImageDataTable) == 152, "Offset mismatch for UJunoInGameWorldSettingsViewModel::WorldImageDataTable");

// /Script/JunoGameUI.JunoIndicatorLayerManagerWidget
// Kind: Class; super: JunoBaseIndicatorLayerManagerWidget
class UJunoIndicatorLayerManagerWidget
{
public:
    std::uint8_t Pad_0000[0x4C0]; // 0x0000
    void* BuildingHealthWidgetClass; // 0x04C0 (Size: 0x8, Type: ClassProperty)
    void* BuildingHealthIndicatorWidget; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoIndicatorLayerManagerWidget, BuildingHealthWidgetClass) == 1216, "Offset mismatch for UJunoIndicatorLayerManagerWidget::BuildingHealthWidgetClass");
static_assert(offsetof(UJunoIndicatorLayerManagerWidget, BuildingHealthIndicatorWidget) == 1224, "Offset mismatch for UJunoIndicatorLayerManagerWidget::BuildingHealthIndicatorWidget");

// /Script/JunoGameUI.JunoIngredientWidget
// Kind: Class; super: CommonUserWidget
class UJunoIngredientWidget
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t bDisableInfiniteIcon; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0341
    std::uint8_t StaticDescriptionText[0x10]; // 0x0348 (Size: 0x10, Type: TextProperty)
    std::uint8_t CachedInfo[0x1]; // 0x0358 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoIngredientWidget, bDisableInfiniteIcon) == 832, "Offset mismatch for UJunoIngredientWidget::bDisableInfiniteIcon");
static_assert(offsetof(UJunoIngredientWidget, StaticDescriptionText) == 840, "Offset mismatch for UJunoIngredientWidget::StaticDescriptionText");
static_assert(offsetof(UJunoIngredientWidget, CachedInfo) == 856, "Offset mismatch for UJunoIngredientWidget::CachedInfo");

// /Script/JunoGameUI.JunoInteractionIndicatorWidget
// Kind: Class; super: FortActorIndicatorWidget
class UJunoInteractionIndicatorWidget
{
public:
    std::uint8_t Pad_0000[0x438]; // 0x0000
    void* CurrentContextInfo; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LastReceivingActor; // 0x0440 (Size: 0x8, Type: WeakObjectProperty)
    void* KeyBindWidget; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    void* KeyBindWidget_Second; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* Text_KeyBindName; // 0x0458 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionIndicatorWidget, CurrentContextInfo) == 1080, "Offset mismatch for UJunoInteractionIndicatorWidget::CurrentContextInfo");
static_assert(offsetof(UJunoInteractionIndicatorWidget, LastReceivingActor) == 1088, "Offset mismatch for UJunoInteractionIndicatorWidget::LastReceivingActor");
static_assert(offsetof(UJunoInteractionIndicatorWidget, KeyBindWidget) == 1096, "Offset mismatch for UJunoInteractionIndicatorWidget::KeyBindWidget");
static_assert(offsetof(UJunoInteractionIndicatorWidget, KeyBindWidget_Second) == 1104, "Offset mismatch for UJunoInteractionIndicatorWidget::KeyBindWidget_Second");
static_assert(offsetof(UJunoInteractionIndicatorWidget, Text_KeyBindName) == 1112, "Offset mismatch for UJunoInteractionIndicatorWidget::Text_KeyBindName");

// /Script/JunoGameUI.JunoInteractionInfoMonitorBase
// Kind: Class; super: Object
class UJunoInteractionInfoMonitorBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerController; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoViewModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakTrackedActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    void* InteractionLongUseMonitor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionInfoMonitorBase, PlayerController) == 40, "Offset mismatch for UJunoInteractionInfoMonitorBase::PlayerController");
static_assert(offsetof(UJunoInteractionInfoMonitorBase, InteractionInfoViewModel) == 48, "Offset mismatch for UJunoInteractionInfoMonitorBase::InteractionInfoViewModel");
static_assert(offsetof(UJunoInteractionInfoMonitorBase, WeakTrackedActor) == 56, "Offset mismatch for UJunoInteractionInfoMonitorBase::WeakTrackedActor");
static_assert(offsetof(UJunoInteractionInfoMonitorBase, InteractionLongUseMonitor) == 64, "Offset mismatch for UJunoInteractionInfoMonitorBase::InteractionLongUseMonitor");

// /Script/JunoGameUI.JunoInteractionInfoMonitorConversation
// Kind: Class; super: JunoInteractionInfoMonitorBase
class UJunoInteractionInfoMonitorConversation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerController; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoViewModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakTrackedActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    void* InteractionLongUseMonitor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionInfoMonitorConversation, PlayerController) == 40, "Offset mismatch for UJunoInteractionInfoMonitorConversation::PlayerController");
static_assert(offsetof(UJunoInteractionInfoMonitorConversation, InteractionInfoViewModel) == 48, "Offset mismatch for UJunoInteractionInfoMonitorConversation::InteractionInfoViewModel");
static_assert(offsetof(UJunoInteractionInfoMonitorConversation, WeakTrackedActor) == 56, "Offset mismatch for UJunoInteractionInfoMonitorConversation::WeakTrackedActor");
static_assert(offsetof(UJunoInteractionInfoMonitorConversation, InteractionLongUseMonitor) == 64, "Offset mismatch for UJunoInteractionInfoMonitorConversation::InteractionLongUseMonitor");

// /Script/JunoGameUI.JunoInteractionInfoMonitorPrimary
// Kind: Class; super: JunoInteractionInfoMonitorBase
class UJunoInteractionInfoMonitorPrimary
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerController; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoViewModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakTrackedActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    void* InteractionLongUseMonitor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionInfoMonitorPrimary, PlayerController) == 40, "Offset mismatch for UJunoInteractionInfoMonitorPrimary::PlayerController");
static_assert(offsetof(UJunoInteractionInfoMonitorPrimary, InteractionInfoViewModel) == 48, "Offset mismatch for UJunoInteractionInfoMonitorPrimary::InteractionInfoViewModel");
static_assert(offsetof(UJunoInteractionInfoMonitorPrimary, WeakTrackedActor) == 56, "Offset mismatch for UJunoInteractionInfoMonitorPrimary::WeakTrackedActor");
static_assert(offsetof(UJunoInteractionInfoMonitorPrimary, InteractionLongUseMonitor) == 64, "Offset mismatch for UJunoInteractionInfoMonitorPrimary::InteractionLongUseMonitor");

// /Script/JunoGameUI.JunoInteractionInfoMonitorSecondary
// Kind: Class; super: JunoInteractionInfoMonitorBase
class UJunoInteractionInfoMonitorSecondary
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerController; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoViewModel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakTrackedActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    void* InteractionLongUseMonitor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionInfoMonitorSecondary, PlayerController) == 40, "Offset mismatch for UJunoInteractionInfoMonitorSecondary::PlayerController");
static_assert(offsetof(UJunoInteractionInfoMonitorSecondary, InteractionInfoViewModel) == 48, "Offset mismatch for UJunoInteractionInfoMonitorSecondary::InteractionInfoViewModel");
static_assert(offsetof(UJunoInteractionInfoMonitorSecondary, WeakTrackedActor) == 56, "Offset mismatch for UJunoInteractionInfoMonitorSecondary::WeakTrackedActor");
static_assert(offsetof(UJunoInteractionInfoMonitorSecondary, InteractionLongUseMonitor) == 64, "Offset mismatch for UJunoInteractionInfoMonitorSecondary::InteractionLongUseMonitor");

// /Script/JunoGameUI.JunoInteractionInfoViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoInteractionInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t InteractionText[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t InteractionErrorText[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    FName ActionName; // 0x0088 (Size: 0x8, Type: NameProperty)
    void* InputAction; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    float InteractionDuration; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x009C
    FMulticastInlineDelegate OnInteractionLongUseStartDelegate; // 0x00A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInteractionLongUseStopDelegate; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoInteractionInfoViewModel, InteractionText) == 104, "Offset mismatch for UJunoInteractionInfoViewModel::InteractionText");
static_assert(offsetof(UJunoInteractionInfoViewModel, InteractionErrorText) == 120, "Offset mismatch for UJunoInteractionInfoViewModel::InteractionErrorText");
static_assert(offsetof(UJunoInteractionInfoViewModel, ActionName) == 136, "Offset mismatch for UJunoInteractionInfoViewModel::ActionName");
static_assert(offsetof(UJunoInteractionInfoViewModel, InputAction) == 144, "Offset mismatch for UJunoInteractionInfoViewModel::InputAction");
static_assert(offsetof(UJunoInteractionInfoViewModel, InteractionDuration) == 152, "Offset mismatch for UJunoInteractionInfoViewModel::InteractionDuration");
static_assert(offsetof(UJunoInteractionInfoViewModel, OnInteractionLongUseStartDelegate) == 160, "Offset mismatch for UJunoInteractionInfoViewModel::OnInteractionLongUseStartDelegate");
static_assert(offsetof(UJunoInteractionInfoViewModel, OnInteractionLongUseStopDelegate) == 176, "Offset mismatch for UJunoInteractionInfoViewModel::OnInteractionLongUseStopDelegate");

// /Script/JunoGameUI.JunoInteractionInfoViewModelResolver
// Kind: Class; super: MVVMViewModelContextResolver
class UJunoInteractionInfoViewModelResolver
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InteractionInfoMonitorClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoInteractionInfoViewModelResolver, InteractionInfoMonitorClass) == 40, "Offset mismatch for UJunoInteractionInfoViewModelResolver::InteractionInfoMonitorClass");

// /Script/JunoGameUI.JunoInteractionPin
// Kind: Class; super: CommonUserWidget
class UJunoInteractionPin
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnInteractionPinStateChangedDelegate; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoInteractionPin, OnInteractionPinStateChangedDelegate) == 816, "Offset mismatch for UJunoInteractionPin::OnInteractionPinStateChangedDelegate");

// /Script/JunoGameUI.JunoInteractionTouchButtonsViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInteractionTouchButtonsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Entries; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* InteractionInfoPrimaryViewModel; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoSecondaryViewModel; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoConversationViewModel; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* InteractionInfoViewModelClass; // 0x00A0 (Size: 0x8, Type: ClassProperty)
    void* PrimaryMonitorClass; // 0x00A8 (Size: 0x8, Type: ClassProperty)
    void* SecondaryMonitorClass; // 0x00B0 (Size: 0x8, Type: ClassProperty)
    void* ConversationMonitorClass; // 0x00B8 (Size: 0x8, Type: ClassProperty)
    FName InteractionPrimaryActionName; // 0x00C0 (Size: 0x8, Type: NameProperty)
    void* InteractionPrimaryInputAction; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    FName InteractionSecondaryActionName; // 0x00D0 (Size: 0x8, Type: NameProperty)
    void* InteractionSecondaryInputAction; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, Entries) == 120, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::Entries");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionInfoPrimaryViewModel) == 136, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionInfoPrimaryViewModel");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionInfoSecondaryViewModel) == 144, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionInfoSecondaryViewModel");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionInfoConversationViewModel) == 152, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionInfoConversationViewModel");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionInfoViewModelClass) == 160, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionInfoViewModelClass");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, PrimaryMonitorClass) == 168, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::PrimaryMonitorClass");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, SecondaryMonitorClass) == 176, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::SecondaryMonitorClass");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, ConversationMonitorClass) == 184, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::ConversationMonitorClass");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionPrimaryActionName) == 192, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionPrimaryActionName");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionPrimaryInputAction) == 200, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionPrimaryInputAction");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionSecondaryActionName) == 208, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionSecondaryActionName");
static_assert(offsetof(UJunoInteractionTouchButtonsViewModel, InteractionSecondaryInputAction) == 216, "Offset mismatch for UJunoInteractionTouchButtonsViewModel::InteractionSecondaryInputAction");

// /Script/JunoGameUI.JunoInventoryDragAndDropHandler
// Kind: Class; super: Object
class UJunoInventoryDragAndDropHandler
{
public:
    std::uint8_t Pad_0000[0xD4]; // 0x0000
    TWeakObjectPtr<void> WeakButtonGroup_InventorySlots; // 0x00D4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    TArray<void*> WeakEquipSlots; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> WeakOwningPlayer; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00F8
    void* SourceInventorySlot; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* DestinationInventorySlot; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInventoryDragAndDropHandler, WeakButtonGroup_InventorySlots) == 212, "Offset mismatch for UJunoInventoryDragAndDropHandler::WeakButtonGroup_InventorySlots");
static_assert(offsetof(UJunoInventoryDragAndDropHandler, WeakEquipSlots) == 224, "Offset mismatch for UJunoInventoryDragAndDropHandler::WeakEquipSlots");
static_assert(offsetof(UJunoInventoryDragAndDropHandler, WeakOwningPlayer) == 240, "Offset mismatch for UJunoInventoryDragAndDropHandler::WeakOwningPlayer");
static_assert(offsetof(UJunoInventoryDragAndDropHandler, SourceInventorySlot) == 256, "Offset mismatch for UJunoInventoryDragAndDropHandler::SourceInventorySlot");
static_assert(offsetof(UJunoInventoryDragAndDropHandler, DestinationInventorySlot) == 264, "Offset mismatch for UJunoInventoryDragAndDropHandler::DestinationInventorySlot");

// /Script/JunoGameUI.JunoInventoryFilterItemViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInventoryFilterItemViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* ItemDefinition; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Count; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasDiscoveredItem; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAccountForFreeBuildCostFiltering; // 0x0091 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoInventoryFilterItemViewModel, ItemDefinition) == 128, "Offset mismatch for UJunoInventoryFilterItemViewModel::ItemDefinition");
static_assert(offsetof(UJunoInventoryFilterItemViewModel, Count) == 136, "Offset mismatch for UJunoInventoryFilterItemViewModel::Count");
static_assert(offsetof(UJunoInventoryFilterItemViewModel, RequiredCount) == 140, "Offset mismatch for UJunoInventoryFilterItemViewModel::RequiredCount");
static_assert(offsetof(UJunoInventoryFilterItemViewModel, bHasDiscoveredItem) == 144, "Offset mismatch for UJunoInventoryFilterItemViewModel::bHasDiscoveredItem");
static_assert(offsetof(UJunoInventoryFilterItemViewModel, bAccountForFreeBuildCostFiltering) == 145, "Offset mismatch for UJunoInventoryFilterItemViewModel::bAccountForFreeBuildCostFiltering");

// /Script/JunoGameUI.JunoInventoryFilterViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInventoryFilterViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TMap<void*, void*> FilteredItems; // 0x0078 (Size: 0x10, Type: MapProperty)
    TArray<void*> RelevantInventoryComponents; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WeakInventoryAggregateComponents; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> FilteredItemSlots; // 0x00A8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AlreadyUsedCounts; // 0x00B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoInventoryFilterViewModel, FilteredItems) == 120, "Offset mismatch for UJunoInventoryFilterViewModel::FilteredItems");
static_assert(offsetof(UJunoInventoryFilterViewModel, RelevantInventoryComponents) == 136, "Offset mismatch for UJunoInventoryFilterViewModel::RelevantInventoryComponents");
static_assert(offsetof(UJunoInventoryFilterViewModel, WeakInventoryAggregateComponents) == 152, "Offset mismatch for UJunoInventoryFilterViewModel::WeakInventoryAggregateComponents");
static_assert(offsetof(UJunoInventoryFilterViewModel, FilteredItemSlots) == 168, "Offset mismatch for UJunoInventoryFilterViewModel::FilteredItemSlots");
static_assert(offsetof(UJunoInventoryFilterViewModel, AlreadyUsedCounts) == 184, "Offset mismatch for UJunoInventoryFilterViewModel::AlreadyUsedCounts");

// /Script/JunoGameUI.JunoInventoryGroup
// Kind: Class; super: CommonUserWidget
class UJunoInventoryGroup
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TArray<void*> TrackedInventorySlots; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CraftingInputInventorySlots; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0350
    TSoftObjectPtr<void> GroupIcon; // 0x0368 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0390
    void* GridPanel_Slots; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    void* Button_Sort; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* InventorySlotClass; // 0x03A8 (Size: 0x8, Type: ClassProperty)
    void* CraftingInputInventorySlotClass; // 0x03B0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoInventoryGroup, TrackedInventorySlots) == 816, "Offset mismatch for UJunoInventoryGroup::TrackedInventorySlots");
static_assert(offsetof(UJunoInventoryGroup, CraftingInputInventorySlots) == 832, "Offset mismatch for UJunoInventoryGroup::CraftingInputInventorySlots");
static_assert(offsetof(UJunoInventoryGroup, GroupIcon) == 872, "Offset mismatch for UJunoInventoryGroup::GroupIcon");
static_assert(offsetof(UJunoInventoryGroup, GridPanel_Slots) == 920, "Offset mismatch for UJunoInventoryGroup::GridPanel_Slots");
static_assert(offsetof(UJunoInventoryGroup, Button_Sort) == 928, "Offset mismatch for UJunoInventoryGroup::Button_Sort");
static_assert(offsetof(UJunoInventoryGroup, InventorySlotClass) == 936, "Offset mismatch for UJunoInventoryGroup::InventorySlotClass");
static_assert(offsetof(UJunoInventoryGroup, CraftingInputInventorySlotClass) == 944, "Offset mismatch for UJunoInventoryGroup::CraftingInputInventorySlotClass");

// /Script/JunoGameUI.JunoInventoryGroupViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInventoryGroupViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* GroupOwner; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GroupUIData[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    TArray<void*> InventorySlots; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoInventoryGroupViewModel, GroupOwner) == 120, "Offset mismatch for UJunoInventoryGroupViewModel::GroupOwner");
static_assert(offsetof(UJunoInventoryGroupViewModel, GroupUIData) == 128, "Offset mismatch for UJunoInventoryGroupViewModel::GroupUIData");
static_assert(offsetof(UJunoInventoryGroupViewModel, InventorySlots) == 184, "Offset mismatch for UJunoInventoryGroupViewModel::InventorySlots");

// /Script/JunoGameUI.JunoInventoryScreen
// Kind: Class; super: JunoActivatableWidget
class UJunoInventoryScreen
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    std::uint8_t MoveAllProgressTitle[0x10]; // 0x04D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t MoveAllProgressDescription[0x10]; // 0x04E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t MergeAllProgressTitle[0x10]; // 0x04F8 (Size: 0x10, Type: TextProperty)
    FText MergeAllProgressDescription; // 0x0508 (Size: 0x18, Type: TextProperty)
    void* LastSelectedSlot; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* LastHoveredSlot; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    void* LastClickedSlot; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakOtherInventoryActor; // 0x0538 (Size: 0x8, Type: WeakObjectProperty)
    void* Group_ObjectInventory; // 0x0540 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllSlots; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* InventoryGroupClass; // 0x0550 (Size: 0x8, Type: ClassProperty)
    void* Button_Back; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* Button_MoreActions; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* Button_Equip; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* Button_Unequip; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* Button_MoveToInventory; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* Button_MoveToMainHand; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    void* Button_Drop; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    void* Button_DropOne; // 0x0590 (Size: 0x8, Type: ObjectProperty)
    void* Button_MoveToOffHand; // 0x0598 (Size: 0x8, Type: ObjectProperty)
    void* Button_TakeAll; // 0x05A0 (Size: 0x8, Type: ObjectProperty)
    void* Button_SmartDeposit; // 0x05A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_TakeStack; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_DepositStack; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CancelAction[0x10]; // 0x05C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackAction[0x10]; // 0x05D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CloseScreenAction[0x10]; // 0x05E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SortAction[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    void* Container_PlayerInventory; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* Group_PlayerGear; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* Group_OffHand; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* NamedSlot_ObjectInventory; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* NamedSlot_VirtualCurrency; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VirtualCurrencyWidgetTag[0x4]; // 0x0628 (Size: 0x4, Type: StructProperty)
    float ItemsModificationProgressMinimumWaitTimeSeconds; // 0x062C (Size: 0x4, Type: FloatProperty)
    TArray<void*> SortOrder; // 0x0630 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0640
    void* JunoInventoryDragAndDropHandler; // 0x0698 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoInventoryScreen, MoveAllProgressTitle) == 1240, "Offset mismatch for UJunoInventoryScreen::MoveAllProgressTitle");
static_assert(offsetof(UJunoInventoryScreen, MoveAllProgressDescription) == 1256, "Offset mismatch for UJunoInventoryScreen::MoveAllProgressDescription");
static_assert(offsetof(UJunoInventoryScreen, MergeAllProgressTitle) == 1272, "Offset mismatch for UJunoInventoryScreen::MergeAllProgressTitle");
static_assert(offsetof(UJunoInventoryScreen, MergeAllProgressDescription) == 1288, "Offset mismatch for UJunoInventoryScreen::MergeAllProgressDescription");
static_assert(offsetof(UJunoInventoryScreen, LastSelectedSlot) == 1312, "Offset mismatch for UJunoInventoryScreen::LastSelectedSlot");
static_assert(offsetof(UJunoInventoryScreen, LastHoveredSlot) == 1320, "Offset mismatch for UJunoInventoryScreen::LastHoveredSlot");
static_assert(offsetof(UJunoInventoryScreen, LastClickedSlot) == 1328, "Offset mismatch for UJunoInventoryScreen::LastClickedSlot");
static_assert(offsetof(UJunoInventoryScreen, WeakOtherInventoryActor) == 1336, "Offset mismatch for UJunoInventoryScreen::WeakOtherInventoryActor");
static_assert(offsetof(UJunoInventoryScreen, Group_ObjectInventory) == 1344, "Offset mismatch for UJunoInventoryScreen::Group_ObjectInventory");
static_assert(offsetof(UJunoInventoryScreen, ButtonGroup_AllSlots) == 1352, "Offset mismatch for UJunoInventoryScreen::ButtonGroup_AllSlots");
static_assert(offsetof(UJunoInventoryScreen, InventoryGroupClass) == 1360, "Offset mismatch for UJunoInventoryScreen::InventoryGroupClass");
static_assert(offsetof(UJunoInventoryScreen, Button_Back) == 1368, "Offset mismatch for UJunoInventoryScreen::Button_Back");
static_assert(offsetof(UJunoInventoryScreen, Button_MoreActions) == 1376, "Offset mismatch for UJunoInventoryScreen::Button_MoreActions");
static_assert(offsetof(UJunoInventoryScreen, Button_Equip) == 1384, "Offset mismatch for UJunoInventoryScreen::Button_Equip");
static_assert(offsetof(UJunoInventoryScreen, Button_Unequip) == 1392, "Offset mismatch for UJunoInventoryScreen::Button_Unequip");
static_assert(offsetof(UJunoInventoryScreen, Button_MoveToInventory) == 1400, "Offset mismatch for UJunoInventoryScreen::Button_MoveToInventory");
static_assert(offsetof(UJunoInventoryScreen, Button_MoveToMainHand) == 1408, "Offset mismatch for UJunoInventoryScreen::Button_MoveToMainHand");
static_assert(offsetof(UJunoInventoryScreen, Button_Drop) == 1416, "Offset mismatch for UJunoInventoryScreen::Button_Drop");
static_assert(offsetof(UJunoInventoryScreen, Button_DropOne) == 1424, "Offset mismatch for UJunoInventoryScreen::Button_DropOne");
static_assert(offsetof(UJunoInventoryScreen, Button_MoveToOffHand) == 1432, "Offset mismatch for UJunoInventoryScreen::Button_MoveToOffHand");
static_assert(offsetof(UJunoInventoryScreen, Button_TakeAll) == 1440, "Offset mismatch for UJunoInventoryScreen::Button_TakeAll");
static_assert(offsetof(UJunoInventoryScreen, Button_SmartDeposit) == 1448, "Offset mismatch for UJunoInventoryScreen::Button_SmartDeposit");
static_assert(offsetof(UJunoInventoryScreen, Button_TakeStack) == 1456, "Offset mismatch for UJunoInventoryScreen::Button_TakeStack");
static_assert(offsetof(UJunoInventoryScreen, Button_DepositStack) == 1464, "Offset mismatch for UJunoInventoryScreen::Button_DepositStack");
static_assert(offsetof(UJunoInventoryScreen, CancelAction) == 1472, "Offset mismatch for UJunoInventoryScreen::CancelAction");
static_assert(offsetof(UJunoInventoryScreen, BackAction) == 1488, "Offset mismatch for UJunoInventoryScreen::BackAction");
static_assert(offsetof(UJunoInventoryScreen, CloseScreenAction) == 1504, "Offset mismatch for UJunoInventoryScreen::CloseScreenAction");
static_assert(offsetof(UJunoInventoryScreen, SortAction) == 1520, "Offset mismatch for UJunoInventoryScreen::SortAction");
static_assert(offsetof(UJunoInventoryScreen, Container_PlayerInventory) == 1536, "Offset mismatch for UJunoInventoryScreen::Container_PlayerInventory");
static_assert(offsetof(UJunoInventoryScreen, Group_PlayerGear) == 1544, "Offset mismatch for UJunoInventoryScreen::Group_PlayerGear");
static_assert(offsetof(UJunoInventoryScreen, Group_OffHand) == 1552, "Offset mismatch for UJunoInventoryScreen::Group_OffHand");
static_assert(offsetof(UJunoInventoryScreen, NamedSlot_ObjectInventory) == 1560, "Offset mismatch for UJunoInventoryScreen::NamedSlot_ObjectInventory");
static_assert(offsetof(UJunoInventoryScreen, NamedSlot_VirtualCurrency) == 1568, "Offset mismatch for UJunoInventoryScreen::NamedSlot_VirtualCurrency");
static_assert(offsetof(UJunoInventoryScreen, VirtualCurrencyWidgetTag) == 1576, "Offset mismatch for UJunoInventoryScreen::VirtualCurrencyWidgetTag");
static_assert(offsetof(UJunoInventoryScreen, ItemsModificationProgressMinimumWaitTimeSeconds) == 1580, "Offset mismatch for UJunoInventoryScreen::ItemsModificationProgressMinimumWaitTimeSeconds");
static_assert(offsetof(UJunoInventoryScreen, SortOrder) == 1584, "Offset mismatch for UJunoInventoryScreen::SortOrder");
static_assert(offsetof(UJunoInventoryScreen, JunoInventoryDragAndDropHandler) == 1688, "Offset mismatch for UJunoInventoryScreen::JunoInventoryDragAndDropHandler");

// /Script/JunoGameUI.JunoInventoryScreenView
// Kind: Class; super: CommonActivatableWidget
class UJunoInventoryScreenView
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    TWeakObjectPtr<void> WeakOtherInventoryActor; // 0x04D0 (Size: 0x8, Type: WeakObjectProperty)
    void* Button_Back; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CloseScreenAction[0x1]; // 0x04E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoInventoryScreenView, WeakOtherInventoryActor) == 1232, "Offset mismatch for UJunoInventoryScreenView::WeakOtherInventoryActor");
static_assert(offsetof(UJunoInventoryScreenView, Button_Back) == 1240, "Offset mismatch for UJunoInventoryScreenView::Button_Back");
static_assert(offsetof(UJunoInventoryScreenView, CloseScreenAction) == 1248, "Offset mismatch for UJunoInventoryScreenView::CloseScreenAction");

// /Script/JunoGameUI.JunoInventorySlot
// Kind: Class; super: CommonButtonBase
class UJunoInventorySlot
{
public:
    std::uint8_t Pad_0000[0x1618]; // 0x0000
    void* ContextMenuAnchor; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    void* PreviewSlotWidget; // 0x1620 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanShowItemDetails; // 0x1628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsTooltipDisplay; // 0x1629 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDragAndDropAllowed; // 0x162A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x162B
    void* ContextMenuClass; // 0x1630 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x1638
    void* InventoryOwner; // 0x1640 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InventoryGroupIcon[0x20]; // 0x1648 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MatchingItemIcon[0x20]; // 0x1668 (Size: 0x20, Type: SoftObjectProperty)
    void* NamedSlot_PreviewSlot; // 0x1688 (Size: 0x8, Type: ObjectProperty)
    void* PreviewSlotWidgetClass; // 0x1690 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0003[0x8]; // 0x1698
    std::uint8_t SlotData[0x1]; // 0x16A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoInventorySlot, ContextMenuAnchor) == 5656, "Offset mismatch for UJunoInventorySlot::ContextMenuAnchor");
static_assert(offsetof(UJunoInventorySlot, PreviewSlotWidget) == 5664, "Offset mismatch for UJunoInventorySlot::PreviewSlotWidget");
static_assert(offsetof(UJunoInventorySlot, bCanShowItemDetails) == 5672, "Offset mismatch for UJunoInventorySlot::bCanShowItemDetails");
static_assert(offsetof(UJunoInventorySlot, bSupportsTooltipDisplay) == 5673, "Offset mismatch for UJunoInventorySlot::bSupportsTooltipDisplay");
static_assert(offsetof(UJunoInventorySlot, bDragAndDropAllowed) == 5674, "Offset mismatch for UJunoInventorySlot::bDragAndDropAllowed");
static_assert(offsetof(UJunoInventorySlot, ContextMenuClass) == 5680, "Offset mismatch for UJunoInventorySlot::ContextMenuClass");
static_assert(offsetof(UJunoInventorySlot, InventoryOwner) == 5696, "Offset mismatch for UJunoInventorySlot::InventoryOwner");
static_assert(offsetof(UJunoInventorySlot, InventoryGroupIcon) == 5704, "Offset mismatch for UJunoInventorySlot::InventoryGroupIcon");
static_assert(offsetof(UJunoInventorySlot, MatchingItemIcon) == 5736, "Offset mismatch for UJunoInventorySlot::MatchingItemIcon");
static_assert(offsetof(UJunoInventorySlot, NamedSlot_PreviewSlot) == 5768, "Offset mismatch for UJunoInventorySlot::NamedSlot_PreviewSlot");
static_assert(offsetof(UJunoInventorySlot, PreviewSlotWidgetClass) == 5776, "Offset mismatch for UJunoInventorySlot::PreviewSlotWidgetClass");
static_assert(offsetof(UJunoInventorySlot, SlotData) == 5792, "Offset mismatch for UJunoInventorySlot::SlotData");

// /Script/JunoGameUI.JunoInventorySlotPickerViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInventorySlotPickerViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* PlayerInventoryViewModel; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SlotsToView; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoInventorySlotPickerViewModel, PlayerInventoryViewModel) == 120, "Offset mismatch for UJunoInventorySlotPickerViewModel::PlayerInventoryViewModel");
static_assert(offsetof(UJunoInventorySlotPickerViewModel, SlotsToView) == 128, "Offset mismatch for UJunoInventorySlotPickerViewModel::SlotsToView");

// /Script/JunoGameUI.JunoInventorySlotViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInventorySlotViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FMulticastInlineDelegate OnContextMenuSummoned; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnContextMenuActionTriggered; // 0x0090 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ItemSlot[0x58]; // 0x00A0 (Size: 0x58, Type: StructProperty)
    std::uint8_t FakeSlotData[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotType; // 0x0108 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoInventorySlotViewModel, OnContextMenuSummoned) == 128, "Offset mismatch for UJunoInventorySlotViewModel::OnContextMenuSummoned");
static_assert(offsetof(UJunoInventorySlotViewModel, OnContextMenuActionTriggered) == 144, "Offset mismatch for UJunoInventorySlotViewModel::OnContextMenuActionTriggered");
static_assert(offsetof(UJunoInventorySlotViewModel, ItemSlot) == 160, "Offset mismatch for UJunoInventorySlotViewModel::ItemSlot");
static_assert(offsetof(UJunoInventorySlotViewModel, FakeSlotData) == 248, "Offset mismatch for UJunoInventorySlotViewModel::FakeSlotData");
static_assert(offsetof(UJunoInventorySlotViewModel, SlotType) == 264, "Offset mismatch for UJunoInventorySlotViewModel::SlotType");

// /Script/JunoGameUI.JunoInventorySlotsInfo
// Kind: Class; super: CommonUserWidget
class UJunoInventorySlotsInfo
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> WeakOptionalInventoryObject; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoInventorySlotsInfo, WeakOptionalInventoryObject) == 816, "Offset mismatch for UJunoInventorySlotsInfo::WeakOptionalInventoryObject");

// /Script/JunoGameUI.JunoInventoryTypeTagBaseViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoInventoryTypeTagBaseViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t Tag[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsActive; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoInventoryTypeTagBaseViewModel, Tag) == 136, "Offset mismatch for UJunoInventoryTypeTagBaseViewModel::Tag");
static_assert(offsetof(UJunoInventoryTypeTagBaseViewModel, DisplayText) == 144, "Offset mismatch for UJunoInventoryTypeTagBaseViewModel::DisplayText");
static_assert(offsetof(UJunoInventoryTypeTagBaseViewModel, DisplayIcon) == 160, "Offset mismatch for UJunoInventoryTypeTagBaseViewModel::DisplayIcon");
static_assert(offsetof(UJunoInventoryTypeTagBaseViewModel, bIsActive) == 192, "Offset mismatch for UJunoInventoryTypeTagBaseViewModel::bIsActive");

// /Script/JunoGameUI.JunoInventoryTypeTagCategoryViewModel
// Kind: Class; super: JunoInventoryTypeTagBaseViewModel
class UJunoInventoryTypeTagCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* SpecialAllEntry; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EntryList; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoInventoryTypeTagCategoryViewModel, SpecialAllEntry) == 208, "Offset mismatch for UJunoInventoryTypeTagCategoryViewModel::SpecialAllEntry");
static_assert(offsetof(UJunoInventoryTypeTagCategoryViewModel, EntryList) == 216, "Offset mismatch for UJunoInventoryTypeTagCategoryViewModel::EntryList");

// /Script/JunoGameUI.JunoInventoryTypeTagListViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoInventoryTypeTagListViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> TypeTagList; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoInventoryTypeTagListViewModel, TypeTagList) == 104, "Offset mismatch for UJunoInventoryTypeTagListViewModel::TypeTagList");

// /Script/JunoGameUI.JunoInventoryTypeTagManagementViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoInventoryTypeTagManagementViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> CategoryList; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* TypeTagListViewModel; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PlayerInventoryComponent; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> StorageInventoryComponent; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoInventoryTypeTagManagementViewModel, CategoryList) == 120, "Offset mismatch for UJunoInventoryTypeTagManagementViewModel::CategoryList");
static_assert(offsetof(UJunoInventoryTypeTagManagementViewModel, TypeTagListViewModel) == 136, "Offset mismatch for UJunoInventoryTypeTagManagementViewModel::TypeTagListViewModel");
static_assert(offsetof(UJunoInventoryTypeTagManagementViewModel, PlayerInventoryComponent) == 144, "Offset mismatch for UJunoInventoryTypeTagManagementViewModel::PlayerInventoryComponent");
static_assert(offsetof(UJunoInventoryTypeTagManagementViewModel, StorageInventoryComponent) == 152, "Offset mismatch for UJunoInventoryTypeTagManagementViewModel::StorageInventoryComponent");

// /Script/JunoGameUI.JunoInventoryUIData
// Kind: Class; super: DataAsset
class UJunoInventoryUIData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> IndividualInventoryGroupUIData; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoInventoryUIData, IndividualInventoryGroupUIData) == 40, "Offset mismatch for UJunoInventoryUIData::IndividualInventoryGroupUIData");

// /Script/JunoGameUI.JunoItemAlterationViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoItemAlterationViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* RecipeListObject; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* ItemDefinition; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Cost; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t CanBeApplied; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoItemAlterationViewModel, RecipeListObject) == 104, "Offset mismatch for UJunoItemAlterationViewModel::RecipeListObject");
static_assert(offsetof(UJunoItemAlterationViewModel, ItemDefinition) == 112, "Offset mismatch for UJunoItemAlterationViewModel::ItemDefinition");
static_assert(offsetof(UJunoItemAlterationViewModel, Cost) == 120, "Offset mismatch for UJunoItemAlterationViewModel::Cost");
static_assert(offsetof(UJunoItemAlterationViewModel, CanBeApplied) == 124, "Offset mismatch for UJunoItemAlterationViewModel::CanBeApplied");

// /Script/JunoGameUI.JunoItemDetailsWidget
// Kind: Class; super: CommonUserWidget
class UJunoItemDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* NamedSlot_AlterationInformation; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AlterationInformationWidgetTag[0x1]; // 0x0338 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoItemDetailsWidget, NamedSlot_AlterationInformation) == 816, "Offset mismatch for UJunoItemDetailsWidget::NamedSlot_AlterationInformation");
static_assert(offsetof(UJunoItemDetailsWidget, AlterationInformationWidgetTag) == 824, "Offset mismatch for UJunoItemDetailsWidget::AlterationInformationWidgetTag");

// /Script/JunoGameUI.JunoItemImageViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoItemImageViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t CurrentTextureSet[0xA0]; // 0x0080 (Size: 0xA0, Type: StructProperty)
    void* CurrentMaterialIcon; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PendingMaterialIcon[0x20]; // 0x0128 (Size: 0x20, Type: SoftObjectProperty)
    void* CurrentIconImage; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> PendingIconImage; // 0x0150 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoItemImageViewModel, CurrentTextureSet) == 128, "Offset mismatch for UJunoItemImageViewModel::CurrentTextureSet");
static_assert(offsetof(UJunoItemImageViewModel, CurrentMaterialIcon) == 288, "Offset mismatch for UJunoItemImageViewModel::CurrentMaterialIcon");
static_assert(offsetof(UJunoItemImageViewModel, PendingMaterialIcon) == 296, "Offset mismatch for UJunoItemImageViewModel::PendingMaterialIcon");
static_assert(offsetof(UJunoItemImageViewModel, CurrentIconImage) == 328, "Offset mismatch for UJunoItemImageViewModel::CurrentIconImage");
static_assert(offsetof(UJunoItemImageViewModel, PendingIconImage) == 336, "Offset mismatch for UJunoItemImageViewModel::PendingIconImage");

// /Script/JunoGameUI.JunoItemInfoViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoItemInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> WeakItemDefinition; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ItemDisplayName[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::int32_t CurrentCount; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t StackCount; // 0x0094 (Size: 0x4, Type: IntProperty)
    void* InventoryFilterViewModel; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoItemInfoViewModel, WeakItemDefinition) == 120, "Offset mismatch for UJunoItemInfoViewModel::WeakItemDefinition");
static_assert(offsetof(UJunoItemInfoViewModel, ItemDisplayName) == 128, "Offset mismatch for UJunoItemInfoViewModel::ItemDisplayName");
static_assert(offsetof(UJunoItemInfoViewModel, CurrentCount) == 144, "Offset mismatch for UJunoItemInfoViewModel::CurrentCount");
static_assert(offsetof(UJunoItemInfoViewModel, StackCount) == 148, "Offset mismatch for UJunoItemInfoViewModel::StackCount");
static_assert(offsetof(UJunoItemInfoViewModel, InventoryFilterViewModel) == 152, "Offset mismatch for UJunoItemInfoViewModel::InventoryFilterViewModel");

// /Script/JunoGameUI.JunoItemStatsList
// Kind: Class; super: UserWidget
class UJunoItemStatsList
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* CurrentItem; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoItemStatsList, CurrentItem) == 784, "Offset mismatch for UJunoItemStatsList::CurrentItem");

// /Script/JunoGameUI.JunoItemTextureInterface
// Kind: Class; super: Interface
class UJunoItemTextureInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoListViewHeaderObject
// Kind: Class; super: Object
class UJunoListViewHeaderObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FText HeaderText; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UJunoListViewHeaderObject, HeaderText) == 40, "Offset mismatch for UJunoListViewHeaderObject::HeaderText");

// /Script/JunoGameUI.JunoLocalPlayerViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoLocalPlayerViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> CachedTeammatePlayerStates; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedSquadMemberPlayerStates; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedPartyMemberPlayerStates; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoLocalPlayerViewModel, CachedTeammatePlayerStates) == 120, "Offset mismatch for UJunoLocalPlayerViewModel::CachedTeammatePlayerStates");
static_assert(offsetof(UJunoLocalPlayerViewModel, CachedSquadMemberPlayerStates) == 136, "Offset mismatch for UJunoLocalPlayerViewModel::CachedSquadMemberPlayerStates");
static_assert(offsetof(UJunoLocalPlayerViewModel, CachedPartyMemberPlayerStates) == 152, "Offset mismatch for UJunoLocalPlayerViewModel::CachedPartyMemberPlayerStates");

// /Script/JunoGameUI.JunoMapElementProviderBase
// Kind: Class; super: Object
class UJunoMapElementProviderBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> LayerNames; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t TagQuery[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMapElementProviderBase, LayerNames) == 40, "Offset mismatch for UJunoMapElementProviderBase::LayerNames");
static_assert(offsetof(UJunoMapElementProviderBase, TagQuery) == 56, "Offset mismatch for UJunoMapElementProviderBase::TagQuery");

// /Script/JunoGameUI.JunoMapElementProvider_Markers
// Kind: Class; super: JunoMapElementProviderBase
class UJunoMapElementProvider_Markers
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FString DefaultMarkerLayerName; // 0x00B0 (Size: 0x10, Type: StrProperty)
    TSoftObjectPtr<void> PendingIconPlaceholder; // 0x00C0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoMapElementProvider_Markers, DefaultMarkerLayerName) == 176, "Offset mismatch for UJunoMapElementProvider_Markers::DefaultMarkerLayerName");
static_assert(offsetof(UJunoMapElementProvider_Markers, PendingIconPlaceholder) == 192, "Offset mismatch for UJunoMapElementProvider_Markers::PendingIconPlaceholder");

// /Script/JunoGameUI.JunoMapElementProvider_Pings
// Kind: Class; super: JunoMapElementProviderBase
class UJunoMapElementProvider_Pings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FString PingLayerName; // 0x00B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t PingBrush[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    float PingDrawSize; // 0x0170 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoMapElementProvider_Pings, PingLayerName) == 176, "Offset mismatch for UJunoMapElementProvider_Pings::PingLayerName");
static_assert(offsetof(UJunoMapElementProvider_Pings, PingBrush) == 192, "Offset mismatch for UJunoMapElementProvider_Pings::PingBrush");
static_assert(offsetof(UJunoMapElementProvider_Pings, PingDrawSize) == 368, "Offset mismatch for UJunoMapElementProvider_Pings::PingDrawSize");

// /Script/JunoGameUI.JunoMapElementProvider_Players
// Kind: Class; super: JunoMapElementProviderBase
class UJunoMapElementProvider_Players
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FString PlayerIconLayerName; // 0x00B0 (Size: 0x10, Type: StrProperty)
    float PlayerDrawSize; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* LocalPlayerIconMaterial; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PartyMemberIconMaterial; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* OtherPlayerIconMaterial; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActorRotationParamName[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t CameraRotationParamName[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    FName AvatarParamName; // 0x00E8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PlayerMIDs; // 0x00F0 (Size: 0x10, Type: MapProperty)
    void* LocalPlayerViewModel; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMapElementProvider_Players, PlayerIconLayerName) == 176, "Offset mismatch for UJunoMapElementProvider_Players::PlayerIconLayerName");
static_assert(offsetof(UJunoMapElementProvider_Players, PlayerDrawSize) == 192, "Offset mismatch for UJunoMapElementProvider_Players::PlayerDrawSize");
static_assert(offsetof(UJunoMapElementProvider_Players, LocalPlayerIconMaterial) == 200, "Offset mismatch for UJunoMapElementProvider_Players::LocalPlayerIconMaterial");
static_assert(offsetof(UJunoMapElementProvider_Players, PartyMemberIconMaterial) == 208, "Offset mismatch for UJunoMapElementProvider_Players::PartyMemberIconMaterial");
static_assert(offsetof(UJunoMapElementProvider_Players, OtherPlayerIconMaterial) == 216, "Offset mismatch for UJunoMapElementProvider_Players::OtherPlayerIconMaterial");
static_assert(offsetof(UJunoMapElementProvider_Players, ActorRotationParamName) == 224, "Offset mismatch for UJunoMapElementProvider_Players::ActorRotationParamName");
static_assert(offsetof(UJunoMapElementProvider_Players, CameraRotationParamName) == 228, "Offset mismatch for UJunoMapElementProvider_Players::CameraRotationParamName");
static_assert(offsetof(UJunoMapElementProvider_Players, AvatarParamName) == 232, "Offset mismatch for UJunoMapElementProvider_Players::AvatarParamName");
static_assert(offsetof(UJunoMapElementProvider_Players, PlayerMIDs) == 240, "Offset mismatch for UJunoMapElementProvider_Players::PlayerMIDs");
static_assert(offsetof(UJunoMapElementProvider_Players, LocalPlayerViewModel) == 256, "Offset mismatch for UJunoMapElementProvider_Players::LocalPlayerViewModel");

// /Script/JunoGameUI.JunoMapElementProvider_Storms
// Kind: Class; super: JunoMapElementProviderBase
class UJunoMapElementProvider_Storms
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FString StormLayerName; // 0x00B0 (Size: 0x10, Type: StrProperty)
    void* StormMaterial; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    float LargeStormWorldSize; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float SmallStormWorldSize; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t StormImageSize[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t StormMapLayers[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMapElementProvider_Storms, StormLayerName) == 176, "Offset mismatch for UJunoMapElementProvider_Storms::StormLayerName");
static_assert(offsetof(UJunoMapElementProvider_Storms, StormMaterial) == 192, "Offset mismatch for UJunoMapElementProvider_Storms::StormMaterial");
static_assert(offsetof(UJunoMapElementProvider_Storms, LargeStormWorldSize) == 200, "Offset mismatch for UJunoMapElementProvider_Storms::LargeStormWorldSize");
static_assert(offsetof(UJunoMapElementProvider_Storms, SmallStormWorldSize) == 204, "Offset mismatch for UJunoMapElementProvider_Storms::SmallStormWorldSize");
static_assert(offsetof(UJunoMapElementProvider_Storms, StormImageSize) == 208, "Offset mismatch for UJunoMapElementProvider_Storms::StormImageSize");
static_assert(offsetof(UJunoMapElementProvider_Storms, StormMapLayers) == 216, "Offset mismatch for UJunoMapElementProvider_Storms::StormMapLayers");

// /Script/JunoGameUI.JunoMapElementProvider_Terrain
// Kind: Class; super: JunoMapElementProviderBase
class UJunoMapElementProvider_Terrain
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    FString TerrainLayerName; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString FogOfWarLayerName; // 0x00C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t TerrainMaterial[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> BiomeTagMaterialMap; // 0x00F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t FogOfWarMaterial[0x20]; // 0x0108 (Size: 0x20, Type: SoftObjectProperty)
    void* MapTileRegistry; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TerrainMapLayers[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMapElementProvider_Terrain, TerrainLayerName) == 184, "Offset mismatch for UJunoMapElementProvider_Terrain::TerrainLayerName");
static_assert(offsetof(UJunoMapElementProvider_Terrain, FogOfWarLayerName) == 200, "Offset mismatch for UJunoMapElementProvider_Terrain::FogOfWarLayerName");
static_assert(offsetof(UJunoMapElementProvider_Terrain, TerrainMaterial) == 216, "Offset mismatch for UJunoMapElementProvider_Terrain::TerrainMaterial");
static_assert(offsetof(UJunoMapElementProvider_Terrain, BiomeTagMaterialMap) == 248, "Offset mismatch for UJunoMapElementProvider_Terrain::BiomeTagMaterialMap");
static_assert(offsetof(UJunoMapElementProvider_Terrain, FogOfWarMaterial) == 264, "Offset mismatch for UJunoMapElementProvider_Terrain::FogOfWarMaterial");
static_assert(offsetof(UJunoMapElementProvider_Terrain, MapTileRegistry) == 296, "Offset mismatch for UJunoMapElementProvider_Terrain::MapTileRegistry");
static_assert(offsetof(UJunoMapElementProvider_Terrain, TerrainMapLayers) == 304, "Offset mismatch for UJunoMapElementProvider_Terrain::TerrainMapLayers");

// /Script/JunoGameUI.JunoMapLegendWidget
// Kind: Class; super: CommonUserWidget
class UJunoMapLegendWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* EntryBox_TeamPlayers; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMapLegendWidget, EntryBox_TeamPlayers) == 816, "Offset mismatch for UJunoMapLegendWidget::EntryBox_TeamPlayers");

// /Script/JunoGameUI.JunoMapMarkerCustomizationEntry
// Kind: Class; super: CommonButtonBase
class UJunoMapMarkerCustomizationEntry
{
public:
    std::uint8_t Pad_0000[0x15B0]; // 0x0000
    TSoftObjectPtr<void> Icon; // 0x15B0 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x15D8
    void* Image_MarkerIcon; // 0x15E0 (Size: 0x8, Type: ObjectProperty)
    void* ColorBorder; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
    void* Checkmark; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IconEntryBackgroundColor[0x1]; // 0x15F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoMapMarkerCustomizationEntry, Icon) == 5552, "Offset mismatch for UJunoMapMarkerCustomizationEntry::Icon");
static_assert(offsetof(UJunoMapMarkerCustomizationEntry, Image_MarkerIcon) == 5600, "Offset mismatch for UJunoMapMarkerCustomizationEntry::Image_MarkerIcon");
static_assert(offsetof(UJunoMapMarkerCustomizationEntry, ColorBorder) == 5608, "Offset mismatch for UJunoMapMarkerCustomizationEntry::ColorBorder");
static_assert(offsetof(UJunoMapMarkerCustomizationEntry, Checkmark) == 5616, "Offset mismatch for UJunoMapMarkerCustomizationEntry::Checkmark");
static_assert(offsetof(UJunoMapMarkerCustomizationEntry, IconEntryBackgroundColor) == 5624, "Offset mismatch for UJunoMapMarkerCustomizationEntry::IconEntryBackgroundColor");

// /Script/JunoGameUI.JunoMapMarkerCustomizationScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoMapMarkerCustomizationScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* SelectedColor; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* SelectedIcon; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* EntryClass; // 0x04B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RandomCampNameRegistry[0x4]; // 0x04C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ColorParamName[0x4]; // 0x04C4 (Size: 0x4, Type: NameProperty)
    void* ColorPanel; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* IconPanel; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* ConfirmButton; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllIconSlots; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllColorSlots; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Image_PreviewMarker; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* InitData; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoMapMarkerCustomizationScreen, SelectedColor) == 1192, "Offset mismatch for UJunoMapMarkerCustomizationScreen::SelectedColor");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, SelectedIcon) == 1200, "Offset mismatch for UJunoMapMarkerCustomizationScreen::SelectedIcon");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, EntryClass) == 1208, "Offset mismatch for UJunoMapMarkerCustomizationScreen::EntryClass");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, RandomCampNameRegistry) == 1216, "Offset mismatch for UJunoMapMarkerCustomizationScreen::RandomCampNameRegistry");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, ColorParamName) == 1220, "Offset mismatch for UJunoMapMarkerCustomizationScreen::ColorParamName");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, ColorPanel) == 1224, "Offset mismatch for UJunoMapMarkerCustomizationScreen::ColorPanel");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, IconPanel) == 1232, "Offset mismatch for UJunoMapMarkerCustomizationScreen::IconPanel");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, ConfirmButton) == 1240, "Offset mismatch for UJunoMapMarkerCustomizationScreen::ConfirmButton");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, ButtonGroup_AllIconSlots) == 1248, "Offset mismatch for UJunoMapMarkerCustomizationScreen::ButtonGroup_AllIconSlots");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, ButtonGroup_AllColorSlots) == 1256, "Offset mismatch for UJunoMapMarkerCustomizationScreen::ButtonGroup_AllColorSlots");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, Image_PreviewMarker) == 1264, "Offset mismatch for UJunoMapMarkerCustomizationScreen::Image_PreviewMarker");
static_assert(offsetof(UJunoMapMarkerCustomizationScreen, InitData) == 1272, "Offset mismatch for UJunoMapMarkerCustomizationScreen::InitData");

// /Script/JunoGameUI.JunoMapViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoMapViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TMap<void*, void*> TeamPlayerAvatarViewModels; // 0x0078 (Size: 0x10, Type: MapProperty)
    void* LocalPlayerAvatarViewModel; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* MapMaterialParameterCollection; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* AnchoringArrowMaterial; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* FastTravelIconMaterial; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OffscreenParamName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t FogOfWarMaterialParameterName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t FogOfWarScaleParameterName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FogOfWarOffsetParameterName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t RandomSignParameterName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t RandomIntensityParameterName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t TerrainMaterialParameterName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkyIslandMaterialParameterName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZoomLevelMaterialParameterName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MapContainerSizeXParameterName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t MapContainerSizeYParameterName[0x4]; // 0x00D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t MapContainerVerticalOffsetParameterName[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MinZoomParameterName[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaxZoomParameterName[0x4]; // 0x00DC (Size: 0x4, Type: NameProperty)
    std::uint8_t EnabledRoundedCornersParameterName[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    float AnchoringArrowIconSize; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float AnchorMapPadding; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float MarkerCyclingDisplayDuration; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float InContainerIconDistance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float WorldMetersInWidth; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float ViewOverscrollLimit; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FastTravelIconOffset[0x8]; // 0x00FC (Size: 0x8, Type: StructProperty)
    std::uint8_t FastTravelIconDrawSize[0xC]; // 0x0104 (Size: 0xC, Type: StructProperty)
    std::uint8_t MapLegendEntries[0x10]; // 0x0110 (Size: 0x10, Type: SetProperty)
    TSet<void*> RemovedMapLegendEntries; // 0x0120 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UJunoMapViewModel, TeamPlayerAvatarViewModels) == 120, "Offset mismatch for UJunoMapViewModel::TeamPlayerAvatarViewModels");
static_assert(offsetof(UJunoMapViewModel, LocalPlayerAvatarViewModel) == 136, "Offset mismatch for UJunoMapViewModel::LocalPlayerAvatarViewModel");
static_assert(offsetof(UJunoMapViewModel, MapMaterialParameterCollection) == 144, "Offset mismatch for UJunoMapViewModel::MapMaterialParameterCollection");
static_assert(offsetof(UJunoMapViewModel, AnchoringArrowMaterial) == 152, "Offset mismatch for UJunoMapViewModel::AnchoringArrowMaterial");
static_assert(offsetof(UJunoMapViewModel, FastTravelIconMaterial) == 160, "Offset mismatch for UJunoMapViewModel::FastTravelIconMaterial");
static_assert(offsetof(UJunoMapViewModel, OffscreenParamName) == 168, "Offset mismatch for UJunoMapViewModel::OffscreenParamName");
static_assert(offsetof(UJunoMapViewModel, FogOfWarMaterialParameterName) == 172, "Offset mismatch for UJunoMapViewModel::FogOfWarMaterialParameterName");
static_assert(offsetof(UJunoMapViewModel, FogOfWarScaleParameterName) == 176, "Offset mismatch for UJunoMapViewModel::FogOfWarScaleParameterName");
static_assert(offsetof(UJunoMapViewModel, FogOfWarOffsetParameterName) == 180, "Offset mismatch for UJunoMapViewModel::FogOfWarOffsetParameterName");
static_assert(offsetof(UJunoMapViewModel, RandomSignParameterName) == 184, "Offset mismatch for UJunoMapViewModel::RandomSignParameterName");
static_assert(offsetof(UJunoMapViewModel, RandomIntensityParameterName) == 188, "Offset mismatch for UJunoMapViewModel::RandomIntensityParameterName");
static_assert(offsetof(UJunoMapViewModel, TerrainMaterialParameterName) == 192, "Offset mismatch for UJunoMapViewModel::TerrainMaterialParameterName");
static_assert(offsetof(UJunoMapViewModel, SkyIslandMaterialParameterName) == 196, "Offset mismatch for UJunoMapViewModel::SkyIslandMaterialParameterName");
static_assert(offsetof(UJunoMapViewModel, ZoomLevelMaterialParameterName) == 200, "Offset mismatch for UJunoMapViewModel::ZoomLevelMaterialParameterName");
static_assert(offsetof(UJunoMapViewModel, MapContainerSizeXParameterName) == 204, "Offset mismatch for UJunoMapViewModel::MapContainerSizeXParameterName");
static_assert(offsetof(UJunoMapViewModel, MapContainerSizeYParameterName) == 208, "Offset mismatch for UJunoMapViewModel::MapContainerSizeYParameterName");
static_assert(offsetof(UJunoMapViewModel, MapContainerVerticalOffsetParameterName) == 212, "Offset mismatch for UJunoMapViewModel::MapContainerVerticalOffsetParameterName");
static_assert(offsetof(UJunoMapViewModel, MinZoomParameterName) == 216, "Offset mismatch for UJunoMapViewModel::MinZoomParameterName");
static_assert(offsetof(UJunoMapViewModel, MaxZoomParameterName) == 220, "Offset mismatch for UJunoMapViewModel::MaxZoomParameterName");
static_assert(offsetof(UJunoMapViewModel, EnabledRoundedCornersParameterName) == 224, "Offset mismatch for UJunoMapViewModel::EnabledRoundedCornersParameterName");
static_assert(offsetof(UJunoMapViewModel, AnchoringArrowIconSize) == 228, "Offset mismatch for UJunoMapViewModel::AnchoringArrowIconSize");
static_assert(offsetof(UJunoMapViewModel, AnchorMapPadding) == 232, "Offset mismatch for UJunoMapViewModel::AnchorMapPadding");
static_assert(offsetof(UJunoMapViewModel, MarkerCyclingDisplayDuration) == 236, "Offset mismatch for UJunoMapViewModel::MarkerCyclingDisplayDuration");
static_assert(offsetof(UJunoMapViewModel, InContainerIconDistance) == 240, "Offset mismatch for UJunoMapViewModel::InContainerIconDistance");
static_assert(offsetof(UJunoMapViewModel, WorldMetersInWidth) == 244, "Offset mismatch for UJunoMapViewModel::WorldMetersInWidth");
static_assert(offsetof(UJunoMapViewModel, ViewOverscrollLimit) == 248, "Offset mismatch for UJunoMapViewModel::ViewOverscrollLimit");
static_assert(offsetof(UJunoMapViewModel, FastTravelIconOffset) == 252, "Offset mismatch for UJunoMapViewModel::FastTravelIconOffset");
static_assert(offsetof(UJunoMapViewModel, FastTravelIconDrawSize) == 260, "Offset mismatch for UJunoMapViewModel::FastTravelIconDrawSize");
static_assert(offsetof(UJunoMapViewModel, MapLegendEntries) == 272, "Offset mismatch for UJunoMapViewModel::MapLegendEntries");
static_assert(offsetof(UJunoMapViewModel, RemovedMapLegendEntries) == 288, "Offset mismatch for UJunoMapViewModel::RemovedMapLegendEntries");

// /Script/JunoGameUI.JunoMapWidget
// Kind: Class; super: UserWidget
class UJunoMapWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnMapViewModelSet; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ZoomBounds[0xC]; // 0x0318 (Size: 0xC, Type: StructProperty)
    float IconHoverScale; // 0x0324 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NonSelectableIconColor[0x18]; // 0x0328 (Size: 0x18, Type: StructProperty)
    std::uint8_t MapBackgroundBrush[0xB0]; // 0x0340 (Size: 0xB0, Type: StructProperty)
    std::uint8_t GameplayTags[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t InteractionContextTags[0x20]; // 0x0410 (Size: 0x20, Type: StructProperty)
    std::uint8_t MapKey[0x4]; // 0x0430 (Size: 0x4, Type: StructProperty)
    std::uint8_t bShowVirtualCursorForKBM; // 0x0434 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x13]; // 0x0435
    TArray<void*> MapElementProviders; // 0x0448 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnMapDragBlocked; // 0x0458 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMapClickedDynamic; // 0x0468 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* VirtualCursorMaterial; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakMapViewModel; // 0x0480 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoMapWidget, OnMapViewModelSet) == 776, "Offset mismatch for UJunoMapWidget::OnMapViewModelSet");
static_assert(offsetof(UJunoMapWidget, ZoomBounds) == 792, "Offset mismatch for UJunoMapWidget::ZoomBounds");
static_assert(offsetof(UJunoMapWidget, IconHoverScale) == 804, "Offset mismatch for UJunoMapWidget::IconHoverScale");
static_assert(offsetof(UJunoMapWidget, NonSelectableIconColor) == 808, "Offset mismatch for UJunoMapWidget::NonSelectableIconColor");
static_assert(offsetof(UJunoMapWidget, MapBackgroundBrush) == 832, "Offset mismatch for UJunoMapWidget::MapBackgroundBrush");
static_assert(offsetof(UJunoMapWidget, GameplayTags) == 1008, "Offset mismatch for UJunoMapWidget::GameplayTags");
static_assert(offsetof(UJunoMapWidget, InteractionContextTags) == 1040, "Offset mismatch for UJunoMapWidget::InteractionContextTags");
static_assert(offsetof(UJunoMapWidget, MapKey) == 1072, "Offset mismatch for UJunoMapWidget::MapKey");
static_assert(offsetof(UJunoMapWidget, bShowVirtualCursorForKBM) == 1076, "Offset mismatch for UJunoMapWidget::bShowVirtualCursorForKBM");
static_assert(offsetof(UJunoMapWidget, MapElementProviders) == 1096, "Offset mismatch for UJunoMapWidget::MapElementProviders");
static_assert(offsetof(UJunoMapWidget, OnMapDragBlocked) == 1112, "Offset mismatch for UJunoMapWidget::OnMapDragBlocked");
static_assert(offsetof(UJunoMapWidget, OnMapClickedDynamic) == 1128, "Offset mismatch for UJunoMapWidget::OnMapClickedDynamic");
static_assert(offsetof(UJunoMapWidget, VirtualCursorMaterial) == 1144, "Offset mismatch for UJunoMapWidget::VirtualCursorMaterial");
static_assert(offsetof(UJunoMapWidget, WeakMapViewModel) == 1152, "Offset mismatch for UJunoMapWidget::WeakMapViewModel");

// /Script/JunoGameUI.JunoModalSelectionContext
// Kind: Class; super: Object
class UJunoModalSelectionContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    TArray<void*> Choices; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate TouchCloseDelegate; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* InitObject; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoModalSelectionContext, Title) == 40, "Offset mismatch for UJunoModalSelectionContext::Title");
static_assert(offsetof(UJunoModalSelectionContext, Description) == 56, "Offset mismatch for UJunoModalSelectionContext::Description");
static_assert(offsetof(UJunoModalSelectionContext, Choices) == 72, "Offset mismatch for UJunoModalSelectionContext::Choices");
static_assert(offsetof(UJunoModalSelectionContext, TouchCloseDelegate) == 88, "Offset mismatch for UJunoModalSelectionContext::TouchCloseDelegate");
static_assert(offsetof(UJunoModalSelectionContext, InitObject) == 104, "Offset mismatch for UJunoModalSelectionContext::InitObject");

// /Script/JunoGameUI.JunoNPCStatusWidgetBase
// Kind: Class; super: FortActorIndicatorWidget
class UJunoNPCStatusWidgetBase
{
public:
    std::uint8_t Pad_0000[0x438]; // 0x0000
    void* AnimatedProgressBar; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0440
    float MinRadius; // 0x0444 (Size: 0x4, Type: FloatProperty)
    float MaxRadius; // 0x0448 (Size: 0x4, Type: FloatProperty)
    float MinScalingDistance; // 0x044C (Size: 0x4, Type: FloatProperty)
    float MaxScalingDistance; // 0x0450 (Size: 0x4, Type: FloatProperty)
    float BuildingStaticUIScaleFactor; // 0x0454 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoNPCStatusWidgetBase, AnimatedProgressBar) == 1080, "Offset mismatch for UJunoNPCStatusWidgetBase::AnimatedProgressBar");
static_assert(offsetof(UJunoNPCStatusWidgetBase, MinRadius) == 1092, "Offset mismatch for UJunoNPCStatusWidgetBase::MinRadius");
static_assert(offsetof(UJunoNPCStatusWidgetBase, MaxRadius) == 1096, "Offset mismatch for UJunoNPCStatusWidgetBase::MaxRadius");
static_assert(offsetof(UJunoNPCStatusWidgetBase, MinScalingDistance) == 1100, "Offset mismatch for UJunoNPCStatusWidgetBase::MinScalingDistance");
static_assert(offsetof(UJunoNPCStatusWidgetBase, MaxScalingDistance) == 1104, "Offset mismatch for UJunoNPCStatusWidgetBase::MaxScalingDistance");
static_assert(offsetof(UJunoNPCStatusWidgetBase, BuildingStaticUIScaleFactor) == 1108, "Offset mismatch for UJunoNPCStatusWidgetBase::BuildingStaticUIScaleFactor");

// /Script/JunoGameUI.JunoNotificationHostWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoNotificationHostWidget
{
public:
    std::uint8_t Pad_0000[0x3B8]; // 0x0000
    void* WidgetSwitcher; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TagToWidgetClassMap; // 0x03C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TagToWidgetMap; // 0x03D0 (Size: 0x10, Type: MapProperty)
    std::uint8_t RecipeFilterTags[0x20]; // 0x03E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t PrioritizationData[0x8]; // 0x0400 (Size: 0x8, Type: StructProperty)
    TArray<void*> EventsBeingAsyncLoaded; // 0x0408 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoNotificationHostWidget, WidgetSwitcher) == 952, "Offset mismatch for UJunoNotificationHostWidget::WidgetSwitcher");
static_assert(offsetof(UJunoNotificationHostWidget, TagToWidgetClassMap) == 960, "Offset mismatch for UJunoNotificationHostWidget::TagToWidgetClassMap");
static_assert(offsetof(UJunoNotificationHostWidget, TagToWidgetMap) == 976, "Offset mismatch for UJunoNotificationHostWidget::TagToWidgetMap");
static_assert(offsetof(UJunoNotificationHostWidget, RecipeFilterTags) == 992, "Offset mismatch for UJunoNotificationHostWidget::RecipeFilterTags");
static_assert(offsetof(UJunoNotificationHostWidget, PrioritizationData) == 1024, "Offset mismatch for UJunoNotificationHostWidget::PrioritizationData");
static_assert(offsetof(UJunoNotificationHostWidget, EventsBeingAsyncLoaded) == 1032, "Offset mismatch for UJunoNotificationHostWidget::EventsBeingAsyncLoaded");

// /Script/JunoGameUI.JunoNotificationWidget
// Kind: Class; super: CommonActivatableWidget
class UJunoNotificationWidget
{
public:
    std::uint8_t Pad_0000[0x4E8]; // 0x0000
    std::uint8_t PrioData[0x8]; // 0x04E8 (Size: 0x8, Type: StructProperty)
    TArray<void*> QueuedNotifications; // 0x04F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TouchEnhancedInputInjector[0x1]; // 0x0500 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoNotificationWidget, PrioData) == 1256, "Offset mismatch for UJunoNotificationWidget::PrioData");
static_assert(offsetof(UJunoNotificationWidget, QueuedNotifications) == 1264, "Offset mismatch for UJunoNotificationWidget::QueuedNotifications");
static_assert(offsetof(UJunoNotificationWidget, TouchEnhancedInputInjector) == 1280, "Offset mismatch for UJunoNotificationWidget::TouchEnhancedInputInjector");

// /Script/JunoGameUI.JunoNpcArmorViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoNpcArmorViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float ScalingFactor; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float ArmorPercentage; // 0x0084 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> TrackedArmorActor; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoNpcArmorViewModel, ScalingFactor) == 128, "Offset mismatch for UJunoNpcArmorViewModel::ScalingFactor");
static_assert(offsetof(UJunoNpcArmorViewModel, ArmorPercentage) == 132, "Offset mismatch for UJunoNpcArmorViewModel::ArmorPercentage");
static_assert(offsetof(UJunoNpcArmorViewModel, TrackedArmorActor) == 136, "Offset mismatch for UJunoNpcArmorViewModel::TrackedArmorActor");

// /Script/JunoGameUI.JunoNpcHealthViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoNpcHealthViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float ScalingFactor; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float HealthPercentage; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float ShieldPercentage; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NpcHealthState; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x008D
    std::uint8_t LastDamageAffinityEvent[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    TWeakObjectPtr<void> TrackedNpcPawn; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoNpcHealthViewModel, ScalingFactor) == 128, "Offset mismatch for UJunoNpcHealthViewModel::ScalingFactor");
static_assert(offsetof(UJunoNpcHealthViewModel, HealthPercentage) == 132, "Offset mismatch for UJunoNpcHealthViewModel::HealthPercentage");
static_assert(offsetof(UJunoNpcHealthViewModel, ShieldPercentage) == 136, "Offset mismatch for UJunoNpcHealthViewModel::ShieldPercentage");
static_assert(offsetof(UJunoNpcHealthViewModel, NpcHealthState) == 140, "Offset mismatch for UJunoNpcHealthViewModel::NpcHealthState");
static_assert(offsetof(UJunoNpcHealthViewModel, LastDamageAffinityEvent) == 144, "Offset mismatch for UJunoNpcHealthViewModel::LastDamageAffinityEvent");
static_assert(offsetof(UJunoNpcHealthViewModel, TrackedNpcPawn) == 200, "Offset mismatch for UJunoNpcHealthViewModel::TrackedNpcPawn");

// /Script/JunoGameUI.JunoNullHUD
// Kind: Class; super: FortNullHUD
class UJunoNullHUD
{
public:
    std::uint8_t Pad_0000[0x538]; // 0x0000
    void* AthenaHudMenu; // 0x0538 (Size: 0x8, Type: ObjectProperty)
    void* ActionBar_BottomBar; // 0x0540 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoNullHUD, AthenaHudMenu) == 1336, "Offset mismatch for UJunoNullHUD::AthenaHudMenu");
static_assert(offsetof(UJunoNullHUD, ActionBar_BottomBar) == 1344, "Offset mismatch for UJunoNullHUD::ActionBar_BottomBar");

// /Script/JunoGameUI.JunoOffhandWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoOffhandWidget
{
public:
    std::uint8_t Pad_0000[0x388]; // 0x0000
    void* QuickBarTouchItemRules; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_Slots; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedOffhandWidgetSlots; // 0x0398 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoOffhandWidget, QuickBarTouchItemRules) == 904, "Offset mismatch for UJunoOffhandWidget::QuickBarTouchItemRules");
static_assert(offsetof(UJunoOffhandWidget, EntryBox_Slots) == 912, "Offset mismatch for UJunoOffhandWidget::EntryBox_Slots");
static_assert(offsetof(UJunoOffhandWidget, CachedOffhandWidgetSlots) == 920, "Offset mismatch for UJunoOffhandWidget::CachedOffhandWidgetSlots");

// /Script/JunoGameUI.JunoOffhandWidgetSlot
// Kind: Class; super: FortHUDElementWidget
class UJunoOffhandWidgetSlot
{
public:
    std::uint8_t Pad_0000[0x380]; // 0x0000
    std::uint8_t ItemSlotData[0x58]; // 0x0380 (Size: 0x58, Type: StructProperty)
    void* InventorySlot_Item; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoOffhandWidgetSlot, ItemSlotData) == 896, "Offset mismatch for UJunoOffhandWidgetSlot::ItemSlotData");
static_assert(offsetof(UJunoOffhandWidgetSlot, InventorySlot_Item) == 984, "Offset mismatch for UJunoOffhandWidgetSlot::InventorySlot_Item");

// /Script/JunoGameUI.JunoPickupStream
// Kind: Class; super: FortHUDElementWidget
class UJunoPickupStream
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t PickupDisplayPool[0x48]; // 0x0370 (Size: 0x48, Type: StructProperty)
    TArray<void*> Pickups; // 0x03B8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxDisplayedItems; // 0x03C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03CC
    void* PickupEntryWidgetClass; // 0x03D0 (Size: 0x8, Type: ClassProperty)
    float ExpirationTime; // 0x03D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03DC
    void* VerticalBox_PickupMessages; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPickupStream, PickupDisplayPool) == 880, "Offset mismatch for UJunoPickupStream::PickupDisplayPool");
static_assert(offsetof(UJunoPickupStream, Pickups) == 952, "Offset mismatch for UJunoPickupStream::Pickups");
static_assert(offsetof(UJunoPickupStream, MaxDisplayedItems) == 968, "Offset mismatch for UJunoPickupStream::MaxDisplayedItems");
static_assert(offsetof(UJunoPickupStream, PickupEntryWidgetClass) == 976, "Offset mismatch for UJunoPickupStream::PickupEntryWidgetClass");
static_assert(offsetof(UJunoPickupStream, ExpirationTime) == 984, "Offset mismatch for UJunoPickupStream::ExpirationTime");
static_assert(offsetof(UJunoPickupStream, VerticalBox_PickupMessages) == 992, "Offset mismatch for UJunoPickupStream::VerticalBox_PickupMessages");

// /Script/JunoGameUI.JunoPlayerBuffManagerViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerBuffManagerViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnBuffAdded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0088
    TArray<void*> ActiveBuffViewModels; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerBuffManagerViewModel, OnBuffAdded) == 120, "Offset mismatch for UJunoPlayerBuffManagerViewModel::OnBuffAdded");
static_assert(offsetof(UJunoPlayerBuffManagerViewModel, ActiveBuffViewModels) == 160, "Offset mismatch for UJunoPlayerBuffManagerViewModel::ActiveBuffViewModels");

// /Script/JunoGameUI.JunoPlayerBuffViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerBuffViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* GameplayEffectClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIsInhibited; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    float BuffMagnitude; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoPlayerBuffViewModel, GameplayEffectClass) == 120, "Offset mismatch for UJunoPlayerBuffViewModel::GameplayEffectClass");
static_assert(offsetof(UJunoPlayerBuffViewModel, bIsInhibited) == 128, "Offset mismatch for UJunoPlayerBuffViewModel::bIsInhibited");
static_assert(offsetof(UJunoPlayerBuffViewModel, BuffMagnitude) == 132, "Offset mismatch for UJunoPlayerBuffViewModel::BuffMagnitude");
static_assert(offsetof(UJunoPlayerBuffViewModel, duration) == 136, "Offset mismatch for UJunoPlayerBuffViewModel::duration");

// /Script/JunoGameUI.JunoPlayerCurrenciesViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerCurrenciesViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Currencies; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerCurrenciesViewModel, Currencies) == 120, "Offset mismatch for UJunoPlayerCurrenciesViewModel::Currencies");

// /Script/JunoGameUI.JunoPlayerCurrencyViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerCurrencyViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TSoftObjectPtr<void> CurrencyItemDefinition; // 0x0080 (Size: 0x28, Type: SoftObjectProperty)
    std::int32_t CurrentBalance; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoPlayerCurrencyViewModel, CurrencyItemDefinition) == 128, "Offset mismatch for UJunoPlayerCurrencyViewModel::CurrencyItemDefinition");
static_assert(offsetof(UJunoPlayerCurrencyViewModel, CurrentBalance) == 168, "Offset mismatch for UJunoPlayerCurrencyViewModel::CurrentBalance");

// /Script/JunoGameUI.JunoPlayerHealthViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerHealthViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float CurrentRawValue; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float PreviousRawValue; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxRawValue; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float BonusRawValue; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float CurrentPctValue; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float PreviousPctValue; // 0x008C (Size: 0x4, Type: FloatProperty)
    float MinimumMaxHealthClampValue; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    std::uint8_t LowHealthThresholdCurve[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t bLowHealth; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A9
    float RevivalPercentComplete; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float CurrentShield; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float MaxShield; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPermadeathOn; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x00B9
    TWeakObjectPtr<void> PlayerState; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoPlayerHealthViewModel, CurrentRawValue) == 120, "Offset mismatch for UJunoPlayerHealthViewModel::CurrentRawValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, PreviousRawValue) == 124, "Offset mismatch for UJunoPlayerHealthViewModel::PreviousRawValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, MaxRawValue) == 128, "Offset mismatch for UJunoPlayerHealthViewModel::MaxRawValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, BonusRawValue) == 132, "Offset mismatch for UJunoPlayerHealthViewModel::BonusRawValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, CurrentPctValue) == 136, "Offset mismatch for UJunoPlayerHealthViewModel::CurrentPctValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, PreviousPctValue) == 140, "Offset mismatch for UJunoPlayerHealthViewModel::PreviousPctValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, MinimumMaxHealthClampValue) == 144, "Offset mismatch for UJunoPlayerHealthViewModel::MinimumMaxHealthClampValue");
static_assert(offsetof(UJunoPlayerHealthViewModel, LowHealthThresholdCurve) == 152, "Offset mismatch for UJunoPlayerHealthViewModel::LowHealthThresholdCurve");
static_assert(offsetof(UJunoPlayerHealthViewModel, bLowHealth) == 168, "Offset mismatch for UJunoPlayerHealthViewModel::bLowHealth");
static_assert(offsetof(UJunoPlayerHealthViewModel, RevivalPercentComplete) == 172, "Offset mismatch for UJunoPlayerHealthViewModel::RevivalPercentComplete");
static_assert(offsetof(UJunoPlayerHealthViewModel, CurrentShield) == 176, "Offset mismatch for UJunoPlayerHealthViewModel::CurrentShield");
static_assert(offsetof(UJunoPlayerHealthViewModel, MaxShield) == 180, "Offset mismatch for UJunoPlayerHealthViewModel::MaxShield");
static_assert(offsetof(UJunoPlayerHealthViewModel, bPermadeathOn) == 184, "Offset mismatch for UJunoPlayerHealthViewModel::bPermadeathOn");
static_assert(offsetof(UJunoPlayerHealthViewModel, PlayerState) == 200, "Offset mismatch for UJunoPlayerHealthViewModel::PlayerState");

// /Script/JunoGameUI.JunoPlayerIndicatorWidget
// Kind: Class; super: FortActorIndicatorWidget
class UJunoPlayerIndicatorWidget
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    std::uint8_t bCollapseInfoOnClamp; // 0x0430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0431
    float MinDistanceToDisplayInfo; // 0x0434 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0438
    void* Text_Distance; // 0x0440 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerIndicatorWidget, bCollapseInfoOnClamp) == 1072, "Offset mismatch for UJunoPlayerIndicatorWidget::bCollapseInfoOnClamp");
static_assert(offsetof(UJunoPlayerIndicatorWidget, MinDistanceToDisplayInfo) == 1076, "Offset mismatch for UJunoPlayerIndicatorWidget::MinDistanceToDisplayInfo");
static_assert(offsetof(UJunoPlayerIndicatorWidget, Text_Distance) == 1088, "Offset mismatch for UJunoPlayerIndicatorWidget::Text_Distance");

// /Script/JunoGameUI.JunoPlayerInventoryContainer
// Kind: Class; super: CommonUserWidget
class UJunoPlayerInventoryContainer
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> OwningPlayer; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    void* Group_MainInventory; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Group_MainHand; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GroupList; // 0x0348 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerInventoryContainer, OwningPlayer) == 816, "Offset mismatch for UJunoPlayerInventoryContainer::OwningPlayer");
static_assert(offsetof(UJunoPlayerInventoryContainer, Group_MainInventory) == 824, "Offset mismatch for UJunoPlayerInventoryContainer::Group_MainInventory");
static_assert(offsetof(UJunoPlayerInventoryContainer, Group_MainHand) == 832, "Offset mismatch for UJunoPlayerInventoryContainer::Group_MainHand");
static_assert(offsetof(UJunoPlayerInventoryContainer, GroupList) == 840, "Offset mismatch for UJunoPlayerInventoryContainer::GroupList");

// /Script/JunoGameUI.JunoPlayerInventoryViewModel
// Kind: Class; super: JunoActorInventoryViewModel
class UJunoPlayerInventoryViewModel
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t SwappingMethod; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    void* SwappingSourceSlot; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* SwappingDestinationSlot; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* SelectedSlot; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* ActiveContextMenuSlot; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectedQuickbarSlot[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerInventoryViewModel, SwappingMethod) == 200, "Offset mismatch for UJunoPlayerInventoryViewModel::SwappingMethod");
static_assert(offsetof(UJunoPlayerInventoryViewModel, SwappingSourceSlot) == 208, "Offset mismatch for UJunoPlayerInventoryViewModel::SwappingSourceSlot");
static_assert(offsetof(UJunoPlayerInventoryViewModel, SwappingDestinationSlot) == 216, "Offset mismatch for UJunoPlayerInventoryViewModel::SwappingDestinationSlot");
static_assert(offsetof(UJunoPlayerInventoryViewModel, SelectedSlot) == 224, "Offset mismatch for UJunoPlayerInventoryViewModel::SelectedSlot");
static_assert(offsetof(UJunoPlayerInventoryViewModel, ActiveContextMenuSlot) == 232, "Offset mismatch for UJunoPlayerInventoryViewModel::ActiveContextMenuSlot");
static_assert(offsetof(UJunoPlayerInventoryViewModel, SelectedQuickbarSlot) == 240, "Offset mismatch for UJunoPlayerInventoryViewModel::SelectedQuickbarSlot");

// /Script/JunoGameUI.JunoPlayerManagementScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoPlayerManagementScreen
{
public:
    std::uint8_t Pad_0000[0x4E8]; // 0x0000
    void* Button_Close; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerManagementScreen, Button_Close) == 1256, "Offset mismatch for UJunoPlayerManagementScreen::Button_Close");

// /Script/JunoGameUI.JunoPlayerStateComponent_UITutorialFlow
// Kind: Class; super: PlayerStateComponent
class UJunoPlayerStateComponent_UITutorialFlow
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnTutorialEnabledCVarChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTutorialStageChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTutorialFinished; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoPlayerStateComponent_UITutorialFlow, OnTutorialEnabledCVarChanged) == 192, "Offset mismatch for UJunoPlayerStateComponent_UITutorialFlow::OnTutorialEnabledCVarChanged");
static_assert(offsetof(UJunoPlayerStateComponent_UITutorialFlow, OnTutorialStageChanged) == 208, "Offset mismatch for UJunoPlayerStateComponent_UITutorialFlow::OnTutorialStageChanged");
static_assert(offsetof(UJunoPlayerStateComponent_UITutorialFlow, OnTutorialFinished) == 224, "Offset mismatch for UJunoPlayerStateComponent_UITutorialFlow::OnTutorialFinished");

// /Script/JunoGameUI.JunoPlayerStateComponent_UIViewModels
// Kind: Class; super: PlayerStateComponent
class UJunoPlayerStateComponent_UIViewModels
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> ViewModels; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuestViewModels; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerStateComponent_UIViewModels, ViewModels) == 192, "Offset mismatch for UJunoPlayerStateComponent_UIViewModels::ViewModels");
static_assert(offsetof(UJunoPlayerStateComponent_UIViewModels, QuestViewModels) == 208, "Offset mismatch for UJunoPlayerStateComponent_UIViewModels::QuestViewModels");

// /Script/JunoGameUI.JunoPlayerStateUIViewModelsResolver
// Kind: Class; super: MVVMViewModelContextResolver
class UJunoPlayerStateUIViewModelsResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoPooledWidget
// Kind: Class; super: Interface
class UJunoPooledWidget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoProcessingInventoryGroup
// Kind: Class; super: CommonUserWidget
class UJunoProcessingInventoryGroup
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ProcessingSlotClass; // 0x0330 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GroupTag[0x8]; // 0x0338 (Size: 0x8, Type: StructProperty)
    TArray<void*> TrackedInventorySlots; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    void* GridPanel_Slots; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoProcessingInventoryGroup, ProcessingSlotClass) == 816, "Offset mismatch for UJunoProcessingInventoryGroup::ProcessingSlotClass");
static_assert(offsetof(UJunoProcessingInventoryGroup, GroupTag) == 824, "Offset mismatch for UJunoProcessingInventoryGroup::GroupTag");
static_assert(offsetof(UJunoProcessingInventoryGroup, TrackedInventorySlots) == 832, "Offset mismatch for UJunoProcessingInventoryGroup::TrackedInventorySlots");
static_assert(offsetof(UJunoProcessingInventoryGroup, GridPanel_Slots) == 848, "Offset mismatch for UJunoProcessingInventoryGroup::GridPanel_Slots");

// /Script/JunoGameUI.JunoProcessingSlot
// Kind: Class; super: CommonUserWidget
class UJunoProcessingSlot
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* InventoryOwner; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SlotData[0x60]; // 0x0348 (Size: 0x60, Type: StructProperty)
    void* Image_SlotIcon; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Progress; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentCraftingProcess[0x1]; // 0x03B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoProcessingSlot, InventoryOwner) == 832, "Offset mismatch for UJunoProcessingSlot::InventoryOwner");
static_assert(offsetof(UJunoProcessingSlot, SlotData) == 840, "Offset mismatch for UJunoProcessingSlot::SlotData");
static_assert(offsetof(UJunoProcessingSlot, Image_SlotIcon) == 936, "Offset mismatch for UJunoProcessingSlot::Image_SlotIcon");
static_assert(offsetof(UJunoProcessingSlot, Image_Progress) == 944, "Offset mismatch for UJunoProcessingSlot::Image_Progress");
static_assert(offsetof(UJunoProcessingSlot, CurrentCraftingProcess) == 952, "Offset mismatch for UJunoProcessingSlot::CurrentCraftingProcess");

// /Script/JunoGameUI.JunoQuickBuildRadialPicker
// Kind: Class; super: CommonActivatableWidget
class UJunoQuickBuildRadialPicker
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* PickerOverlay_QuickBuildItems; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_Ingredients; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* QuickBuildSelectionData; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoQuickBuildRadialPicker, PickerOverlay_QuickBuildItems) == 1192, "Offset mismatch for UJunoQuickBuildRadialPicker::PickerOverlay_QuickBuildItems");
static_assert(offsetof(UJunoQuickBuildRadialPicker, EntryBox_Ingredients) == 1200, "Offset mismatch for UJunoQuickBuildRadialPicker::EntryBox_Ingredients");
static_assert(offsetof(UJunoQuickBuildRadialPicker, QuickBuildSelectionData) == 1208, "Offset mismatch for UJunoQuickBuildRadialPicker::QuickBuildSelectionData");

// /Script/JunoGameUI.JunoQuickBuildingHudStateWidget
// Kind: Class; super: CommonUserWidget
class UJunoQuickBuildingHudStateWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TWeakObjectPtr<void> CurrentQuickBuildActor; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoQuickBuildingHudStateWidget, CurrentQuickBuildActor) == 816, "Offset mismatch for UJunoQuickBuildingHudStateWidget::CurrentQuickBuildActor");

// /Script/JunoGameUI.JunoQuickSlotRadialPicker
// Kind: Class; super: CommonActivatableWidget
class UJunoQuickSlotRadialPicker
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* PickerOverlay_Items; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    void* CloseMenuAction; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemName; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoQuickSlotRadialPicker, PickerOverlay_Items) == 1184, "Offset mismatch for UJunoQuickSlotRadialPicker::PickerOverlay_Items");
static_assert(offsetof(UJunoQuickSlotRadialPicker, CloseMenuAction) == 1192, "Offset mismatch for UJunoQuickSlotRadialPicker::CloseMenuAction");
static_assert(offsetof(UJunoQuickSlotRadialPicker, Text_ItemName) == 1200, "Offset mismatch for UJunoQuickSlotRadialPicker::Text_ItemName");

// /Script/JunoGameUI.JunoQuickbar
// Kind: Class; super: FortHUDElementWidget
class UJunoQuickbar
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    FMulticastInlineDelegate OnQuickbarSlotsInitialized; // 0x0370 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* QuickBarTouchItemRules; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* JunoOffhandWidget; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* JunoInventoryDragAndDropHandler; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllSlots; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x03A0
    void* EntryBox_Slots; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedQuickbarSlots; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoQuickbar, OnQuickbarSlotsInitialized) == 880, "Offset mismatch for UJunoQuickbar::OnQuickbarSlotsInitialized");
static_assert(offsetof(UJunoQuickbar, QuickBarTouchItemRules) == 896, "Offset mismatch for UJunoQuickbar::QuickBarTouchItemRules");
static_assert(offsetof(UJunoQuickbar, JunoOffhandWidget) == 904, "Offset mismatch for UJunoQuickbar::JunoOffhandWidget");
static_assert(offsetof(UJunoQuickbar, JunoInventoryDragAndDropHandler) == 912, "Offset mismatch for UJunoQuickbar::JunoInventoryDragAndDropHandler");
static_assert(offsetof(UJunoQuickbar, ButtonGroup_AllSlots) == 920, "Offset mismatch for UJunoQuickbar::ButtonGroup_AllSlots");
static_assert(offsetof(UJunoQuickbar, EntryBox_Slots) == 936, "Offset mismatch for UJunoQuickbar::EntryBox_Slots");
static_assert(offsetof(UJunoQuickbar, CachedQuickbarSlots) == 944, "Offset mismatch for UJunoQuickbar::CachedQuickbarSlots");

// /Script/JunoGameUI.JunoQuickbarItemRules
// Kind: Class; super: DataAsset
class UJunoQuickbarItemRules
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CanBeUsedInQuickbarQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoQuickbarItemRules, CanBeUsedInQuickbarQuery) == 40, "Offset mismatch for UJunoQuickbarItemRules::CanBeUsedInQuickbarQuery");

// /Script/JunoGameUI.JunoQuickbarSlot
// Kind: Class; super: CommonUserWidget
class UJunoQuickbarSlot
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* InventorySlot_Item; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Keybind_Keyboard; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoQuickbarSlot, InventorySlot_Item) == 832, "Offset mismatch for UJunoQuickbarSlot::InventorySlot_Item");
static_assert(offsetof(UJunoQuickbarSlot, Keybind_Keyboard) == 840, "Offset mismatch for UJunoQuickbarSlot::Keybind_Keyboard");

// /Script/JunoGameUI.JunoRadialItemPickerEntry
// Kind: Class; super: FortRadialPickerEntry
class UJunoRadialItemPickerEntry
{
public:
    std::uint8_t Pad_0000[0x1640]; // 0x0000
    void* HorizontalBox_EntryName; // 0x1640 (Size: 0x8, Type: ObjectProperty)
    void* Text_Center; // 0x1648 (Size: 0x8, Type: ObjectProperty)
    void* HorizontalBox_CenterText; // 0x1650 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRadialItemPickerEntry, HorizontalBox_EntryName) == 5696, "Offset mismatch for UJunoRadialItemPickerEntry::HorizontalBox_EntryName");
static_assert(offsetof(UJunoRadialItemPickerEntry, Text_Center) == 5704, "Offset mismatch for UJunoRadialItemPickerEntry::Text_Center");
static_assert(offsetof(UJunoRadialItemPickerEntry, HorizontalBox_CenterText) == 5712, "Offset mismatch for UJunoRadialItemPickerEntry::HorizontalBox_CenterText");

// /Script/JunoGameUI.JunoRecipeCategoryViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoRecipeCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CategoryUIData[0x68]; // 0x0078 (Size: 0x68, Type: StructProperty)
    TArray<void*> Recipes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RecipesMap; // 0x00F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoRecipeCategoryViewModel, CategoryUIData) == 120, "Offset mismatch for UJunoRecipeCategoryViewModel::CategoryUIData");
static_assert(offsetof(UJunoRecipeCategoryViewModel, Recipes) == 224, "Offset mismatch for UJunoRecipeCategoryViewModel::Recipes");
static_assert(offsetof(UJunoRecipeCategoryViewModel, RecipesMap) == 240, "Offset mismatch for UJunoRecipeCategoryViewModel::RecipesMap");

// /Script/JunoGameUI.JunoRecipeCraftingCategoryUIData
// Kind: Class; super: DataAsset
class UJunoRecipeCraftingCategoryUIData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CraftingCategoryUIData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Stations; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IgnoredCraftingCategories[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    TArray<void*> BuildingGroups; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoRecipeCraftingCategoryUIData, CraftingCategoryUIData) == 40, "Offset mismatch for UJunoRecipeCraftingCategoryUIData::CraftingCategoryUIData");
static_assert(offsetof(UJunoRecipeCraftingCategoryUIData, Stations) == 48, "Offset mismatch for UJunoRecipeCraftingCategoryUIData::Stations");
static_assert(offsetof(UJunoRecipeCraftingCategoryUIData, IgnoredCraftingCategories) == 64, "Offset mismatch for UJunoRecipeCraftingCategoryUIData::IgnoredCraftingCategories");
static_assert(offsetof(UJunoRecipeCraftingCategoryUIData, BuildingGroups) == 96, "Offset mismatch for UJunoRecipeCraftingCategoryUIData::BuildingGroups");

// /Script/JunoGameUI.JunoRecipeDetailsWidget
// Kind: Class; super: CommonUserWidget
class UJunoRecipeDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bCanCraft; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableInfiniteIcon; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x16]; // 0x0332
    TArray<void*> IngredientRequirements; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CraftingObject; // 0x0358 (Size: 0x8, Type: WeakObjectProperty)
    FName CurrentRecipe; // 0x0360 (Size: 0x8, Type: NameProperty)
    void* EntryBox_Ingredients; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox_Ingredients; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRecipeDetailsWidget, bCanCraft) == 816, "Offset mismatch for UJunoRecipeDetailsWidget::bCanCraft");
static_assert(offsetof(UJunoRecipeDetailsWidget, bDisableInfiniteIcon) == 817, "Offset mismatch for UJunoRecipeDetailsWidget::bDisableInfiniteIcon");
static_assert(offsetof(UJunoRecipeDetailsWidget, IngredientRequirements) == 840, "Offset mismatch for UJunoRecipeDetailsWidget::IngredientRequirements");
static_assert(offsetof(UJunoRecipeDetailsWidget, CraftingObject) == 856, "Offset mismatch for UJunoRecipeDetailsWidget::CraftingObject");
static_assert(offsetof(UJunoRecipeDetailsWidget, CurrentRecipe) == 864, "Offset mismatch for UJunoRecipeDetailsWidget::CurrentRecipe");
static_assert(offsetof(UJunoRecipeDetailsWidget, EntryBox_Ingredients) == 872, "Offset mismatch for UJunoRecipeDetailsWidget::EntryBox_Ingredients");
static_assert(offsetof(UJunoRecipeDetailsWidget, ScrollBox_Ingredients) == 880, "Offset mismatch for UJunoRecipeDetailsWidget::ScrollBox_Ingredients");

// /Script/JunoGameUI.JunoRecipeEntryViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoRecipeEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FName CraftingFormulaRowName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t CraftingFormula[0xF0]; // 0x0080 (Size: 0xF0, Type: StructProperty)
    void* ItemDefinition; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CraftedCount; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x017C
    TArray<void*> IngredientRequirements; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasMultipleCraftingResults; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsRecipeTracked; // 0x0191 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoRecipeEntryViewModel, CraftingFormulaRowName) == 120, "Offset mismatch for UJunoRecipeEntryViewModel::CraftingFormulaRowName");
static_assert(offsetof(UJunoRecipeEntryViewModel, CraftingFormula) == 128, "Offset mismatch for UJunoRecipeEntryViewModel::CraftingFormula");
static_assert(offsetof(UJunoRecipeEntryViewModel, ItemDefinition) == 368, "Offset mismatch for UJunoRecipeEntryViewModel::ItemDefinition");
static_assert(offsetof(UJunoRecipeEntryViewModel, CraftedCount) == 376, "Offset mismatch for UJunoRecipeEntryViewModel::CraftedCount");
static_assert(offsetof(UJunoRecipeEntryViewModel, IngredientRequirements) == 384, "Offset mismatch for UJunoRecipeEntryViewModel::IngredientRequirements");
static_assert(offsetof(UJunoRecipeEntryViewModel, bHasMultipleCraftingResults) == 400, "Offset mismatch for UJunoRecipeEntryViewModel::bHasMultipleCraftingResults");
static_assert(offsetof(UJunoRecipeEntryViewModel, IsRecipeTracked) == 401, "Offset mismatch for UJunoRecipeEntryViewModel::IsRecipeTracked");

// /Script/JunoGameUI.JunoRecipeFilterButton
// Kind: Class; super: CommonButtonBase
class UJunoRecipeFilterButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    TWeakObjectPtr<void> CraftingObject; // 0x15A0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x15A8
    void* JunoBangWidget; // 0x15B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRecipeFilterButton, CraftingObject) == 5536, "Offset mismatch for UJunoRecipeFilterButton::CraftingObject");
static_assert(offsetof(UJunoRecipeFilterButton, JunoBangWidget) == 5560, "Offset mismatch for UJunoRecipeFilterButton::JunoBangWidget");

// /Script/JunoGameUI.JunoRecipeHeaderWidget
// Kind: Class; super: CommonButtonBase
class UJunoRecipeHeaderWidget
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* Text_Name; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    void* RecipeListObject; // 0x15B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoRecipeHeaderWidget, Text_Name) == 5544, "Offset mismatch for UJunoRecipeHeaderWidget::Text_Name");
static_assert(offsetof(UJunoRecipeHeaderWidget, RecipeListObject) == 5552, "Offset mismatch for UJunoRecipeHeaderWidget::RecipeListObject");

// /Script/JunoGameUI.JunoRecipeListEntry
// Kind: Class; super: CommonButtonBase
class UJunoRecipeListEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* ContextMenuAnchor; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    void* JunoBangWidget; // 0x15B0 (Size: 0x8, Type: ObjectProperty)
    void* RecipeListObject; // 0x15B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x15C0
    void* ContextMenuClass; // 0x15E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x50]; // 0x15E8
    std::int32_t MaxCraftCount; // 0x1638 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanCraft; // 0x163C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoRecipeListEntry, ContextMenuAnchor) == 5544, "Offset mismatch for UJunoRecipeListEntry::ContextMenuAnchor");
static_assert(offsetof(UJunoRecipeListEntry, JunoBangWidget) == 5552, "Offset mismatch for UJunoRecipeListEntry::JunoBangWidget");
static_assert(offsetof(UJunoRecipeListEntry, RecipeListObject) == 5560, "Offset mismatch for UJunoRecipeListEntry::RecipeListObject");
static_assert(offsetof(UJunoRecipeListEntry, ContextMenuClass) == 5600, "Offset mismatch for UJunoRecipeListEntry::ContextMenuClass");
static_assert(offsetof(UJunoRecipeListEntry, MaxCraftCount) == 5688, "Offset mismatch for UJunoRecipeListEntry::MaxCraftCount");
static_assert(offsetof(UJunoRecipeListEntry, bCanCraft) == 5692, "Offset mismatch for UJunoRecipeListEntry::bCanCraft");

// /Script/JunoGameUI.JunoRecipeListObject
// Kind: Class; super: Object
class UJunoRecipeListObject
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> CraftingObject; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RecipeScreen; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoRecipeListObject, CraftingObject) == 48, "Offset mismatch for UJunoRecipeListObject::CraftingObject");
static_assert(offsetof(UJunoRecipeListObject, RecipeScreen) == 56, "Offset mismatch for UJunoRecipeListObject::RecipeScreen");

// /Script/JunoGameUI.JunoRecipeScreenBase
// Kind: Class; super: JunoActivatableWidget
class UJunoRecipeScreenBase
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    TWeakObjectPtr<void> WeakCraftingObject; // 0x04D8 (Size: 0x8, Type: WeakObjectProperty)
    void* RecipeDetailsWidget; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_TouchSelect; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Back; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_TouchClose; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* RecipeList; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HeaderPrefix[0x4]; // 0x0508 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkipSortOnInventoryChange; // 0x050C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x050D
    TWeakObjectPtr<void> WeakSelectedRecipe; // 0x0510 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> CurrentRecipes; // 0x0518 (Size: 0x10, Type: ArrayProperty)
    void* FilterTabWidget; // 0x0528 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HeaderEntryType[0x4]; // 0x0530 (Size: 0x4, Type: NameProperty)
    FName RecipeEntryType; // 0x0534 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoRecipeScreenBase, WeakCraftingObject) == 1240, "Offset mismatch for UJunoRecipeScreenBase::WeakCraftingObject");
static_assert(offsetof(UJunoRecipeScreenBase, RecipeDetailsWidget) == 1248, "Offset mismatch for UJunoRecipeScreenBase::RecipeDetailsWidget");
static_assert(offsetof(UJunoRecipeScreenBase, Button_TouchSelect) == 1256, "Offset mismatch for UJunoRecipeScreenBase::Button_TouchSelect");
static_assert(offsetof(UJunoRecipeScreenBase, Button_Back) == 1264, "Offset mismatch for UJunoRecipeScreenBase::Button_Back");
static_assert(offsetof(UJunoRecipeScreenBase, Button_TouchClose) == 1272, "Offset mismatch for UJunoRecipeScreenBase::Button_TouchClose");
static_assert(offsetof(UJunoRecipeScreenBase, RecipeList) == 1280, "Offset mismatch for UJunoRecipeScreenBase::RecipeList");
static_assert(offsetof(UJunoRecipeScreenBase, HeaderPrefix) == 1288, "Offset mismatch for UJunoRecipeScreenBase::HeaderPrefix");
static_assert(offsetof(UJunoRecipeScreenBase, SkipSortOnInventoryChange) == 1292, "Offset mismatch for UJunoRecipeScreenBase::SkipSortOnInventoryChange");
static_assert(offsetof(UJunoRecipeScreenBase, WeakSelectedRecipe) == 1296, "Offset mismatch for UJunoRecipeScreenBase::WeakSelectedRecipe");
static_assert(offsetof(UJunoRecipeScreenBase, CurrentRecipes) == 1304, "Offset mismatch for UJunoRecipeScreenBase::CurrentRecipes");
static_assert(offsetof(UJunoRecipeScreenBase, FilterTabWidget) == 1320, "Offset mismatch for UJunoRecipeScreenBase::FilterTabWidget");
static_assert(offsetof(UJunoRecipeScreenBase, HeaderEntryType) == 1328, "Offset mismatch for UJunoRecipeScreenBase::HeaderEntryType");
static_assert(offsetof(UJunoRecipeScreenBase, RecipeEntryType) == 1332, "Offset mismatch for UJunoRecipeScreenBase::RecipeEntryType");

// /Script/JunoGameUI.JunoRecipeVisibilityViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoRecipeVisibilityViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoReticleContainerWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoReticleContainerWidget
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    void* ReticleSwitcher; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* ReticleOverrideSlot; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* FortReticleWidget; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoReticleContainerWidget, ReticleSwitcher) == 888, "Offset mismatch for UJunoReticleContainerWidget::ReticleSwitcher");
static_assert(offsetof(UJunoReticleContainerWidget, ReticleOverrideSlot) == 896, "Offset mismatch for UJunoReticleContainerWidget::ReticleOverrideSlot");
static_assert(offsetof(UJunoReticleContainerWidget, FortReticleWidget) == 904, "Offset mismatch for UJunoReticleContainerWidget::FortReticleWidget");

// /Script/JunoGameUI.JunoRewardBaseVM
// Kind: Class; super: FortPerUserViewModel
class UJunoRewardBaseVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t Icon[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Name[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoRewardBaseVM, Icon) == 120, "Offset mismatch for UJunoRewardBaseVM::Icon");
static_assert(offsetof(UJunoRewardBaseVM, Name) == 152, "Offset mismatch for UJunoRewardBaseVM::Name");
static_assert(offsetof(UJunoRewardBaseVM, Count) == 168, "Offset mismatch for UJunoRewardBaseVM::Count");

// /Script/JunoGameUI.JunoRewardsBaseVM
// Kind: Class; super: FortPerUserViewModel
class UJunoRewardsBaseVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> IndividualRewards; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoRewardsBaseVM, IndividualRewards) == 120, "Offset mismatch for UJunoRewardsBaseVM::IndividualRewards");

// /Script/JunoGameUI.JunoSelectionModal
// Kind: Class; super: CommonActivatableWidget
class UJunoSelectionModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* SelectionButtonClass; // 0x04A0 (Size: 0x8, Type: ClassProperty)
    void* Button_TouchClose; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* SelectionContext; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoSelectionModal, SelectionButtonClass) == 1184, "Offset mismatch for UJunoSelectionModal::SelectionButtonClass");
static_assert(offsetof(UJunoSelectionModal, Button_TouchClose) == 1192, "Offset mismatch for UJunoSelectionModal::Button_TouchClose");
static_assert(offsetof(UJunoSelectionModal, SelectionContext) == 1200, "Offset mismatch for UJunoSelectionModal::SelectionContext");

// /Script/JunoGameUI.JunoTaggedWidgetData
// Kind: Class; super: DataAsset
class UJunoTaggedWidgetData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> TaggedWidgetScenes; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TaggedWidgets; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoTaggedWidgetData, TaggedWidgetScenes) == 40, "Offset mismatch for UJunoTaggedWidgetData::TaggedWidgetScenes");
static_assert(offsetof(UJunoTaggedWidgetData, TaggedWidgets) == 56, "Offset mismatch for UJunoTaggedWidgetData::TaggedWidgets");

// /Script/JunoGameUI.JunoTaskTrackingWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoTaskTrackingWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoTaskTrackingWidget, HLTDependentWidgetTag) == 824, "Offset mismatch for UJunoTaskTrackingWidget::HLTDependentWidgetTag");
static_assert(offsetof(UJunoTaskTrackingWidget, ElementTag) == 828, "Offset mismatch for UJunoTaskTrackingWidget::ElementTag");
static_assert(offsetof(UJunoTaskTrackingWidget, HUDElementTag) == 832, "Offset mismatch for UJunoTaskTrackingWidget::HUDElementTag");
static_assert(offsetof(UJunoTaskTrackingWidget, HiddenVisibility) == 864, "Offset mismatch for UJunoTaskTrackingWidget::HiddenVisibility");
static_assert(offsetof(UJunoTaskTrackingWidget, TutorialHighlight) == 872, "Offset mismatch for UJunoTaskTrackingWidget::TutorialHighlight");

// /Script/JunoGameUI.JunoToyParametersEntryVM
// Kind: Class; super: MVVMViewModelBase
class UJunoToyParametersEntryVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FName ParameterId; // 0x0068 (Size: 0x8, Type: NameProperty)
    std::uint8_t Title[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    TArray<void*> ValueLabels; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MapIndexValue; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SelectedValueIndex; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00A4
    TSoftObjectPtr<void> ToyAbilities; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UJunoToyParametersEntryVM, ParameterId) == 104, "Offset mismatch for UJunoToyParametersEntryVM::ParameterId");
static_assert(offsetof(UJunoToyParametersEntryVM, Title) == 112, "Offset mismatch for UJunoToyParametersEntryVM::Title");
static_assert(offsetof(UJunoToyParametersEntryVM, ValueLabels) == 128, "Offset mismatch for UJunoToyParametersEntryVM::ValueLabels");
static_assert(offsetof(UJunoToyParametersEntryVM, MapIndexValue) == 144, "Offset mismatch for UJunoToyParametersEntryVM::MapIndexValue");
static_assert(offsetof(UJunoToyParametersEntryVM, SelectedValueIndex) == 160, "Offset mismatch for UJunoToyParametersEntryVM::SelectedValueIndex");
static_assert(offsetof(UJunoToyParametersEntryVM, ToyAbilities) == 168, "Offset mismatch for UJunoToyParametersEntryVM::ToyAbilities");

// /Script/JunoGameUI.JunoTrackRecipeWidget
// Kind: Class; super: FortHUDElementWidget
class UJunoTrackRecipeWidget
{
public:
    std::uint8_t Pad_0000[0x390]; // 0x0000
    void* EntryBox_Ingredients; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0398
    TMap<void*, void*> JunoIngredientWidgets; // 0x03A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t bWasAutoTracked; // 0x03B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoTrackRecipeWidget, EntryBox_Ingredients) == 912, "Offset mismatch for UJunoTrackRecipeWidget::EntryBox_Ingredients");
static_assert(offsetof(UJunoTrackRecipeWidget, JunoIngredientWidgets) == 928, "Offset mismatch for UJunoTrackRecipeWidget::JunoIngredientWidgets");
static_assert(offsetof(UJunoTrackRecipeWidget, bWasAutoTracked) == 944, "Offset mismatch for UJunoTrackRecipeWidget::bWasAutoTracked");

// /Script/JunoGameUI.JunoTrackingWidgetViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoTrackingWidgetViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TMap<void*, void*> ActiveTrackedWidgets; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t bShowTrackingWidget; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoTrackingWidgetViewModel, ActiveTrackedWidgets) == 120, "Offset mismatch for UJunoTrackingWidgetViewModel::ActiveTrackedWidgets");
static_assert(offsetof(UJunoTrackingWidgetViewModel, bShowTrackingWidget) == 136, "Offset mismatch for UJunoTrackingWidgetViewModel::bShowTrackingWidget");

// /Script/JunoGameUI.JunoUIFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoUIFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoUIGameFeatureAction_AddHUDMenuTab
// Kind: Class; super: FortUIGameFeatureAction
class UJunoUIGameFeatureAction_AddHUDMenuTab
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName TabNameId; // 0x0028 (Size: 0x8, Type: NameProperty)
    std::uint8_t TabButtonType[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TabContentType[0x20]; // 0x0050 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x0070 (Size: 0xF0, Type: StructProperty)
    std::int32_t Priority; // 0x0160 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOnlyForWorldOwner; // 0x0164 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Style; // 0x0165 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0166
    FString OptionalBooleanGatingCVar; // 0x0168 (Size: 0x10, Type: StrProperty)
    std::uint8_t bOptionalBooleanGatingValue; // 0x0178 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, TabNameId) == 40, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::TabNameId");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, TabButtonType) == 48, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::TabButtonType");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, TabContentType) == 80, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::TabContentType");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, TabButtonLabelInfo) == 112, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::TabButtonLabelInfo");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, Priority) == 352, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::Priority");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, bOnlyForWorldOwner) == 356, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::bOnlyForWorldOwner");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, Style) == 357, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::Style");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, OptionalBooleanGatingCVar) == 360, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::OptionalBooleanGatingCVar");
static_assert(offsetof(UJunoUIGameFeatureAction_AddHUDMenuTab, bOptionalBooleanGatingValue) == 376, "Offset mismatch for UJunoUIGameFeatureAction_AddHUDMenuTab::bOptionalBooleanGatingValue");

// /Script/JunoGameUI.JunoUIGameFeatureAction_AddScheduledWidgetAlias
// Kind: Class; super: FortUIGameFeatureAction_AddWidgetAlias
class UJunoUIGameFeatureAction_AddScheduledWidgetAlias
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t EnabledFeatureRange[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoUIGameFeatureAction_AddScheduledWidgetAlias, EnabledFeatureRange) == 64, "Offset mismatch for UJunoUIGameFeatureAction_AddScheduledWidgetAlias::EnabledFeatureRange");

// /Script/JunoGameUI.JunoUIGameFeatureAction_ExcludeHUDMenuTabs
// Kind: Class; super: FortUIGameFeatureAction
class UJunoUIGameFeatureAction_ExcludeHUDMenuTabs
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSet<void*> TabsToExclude; // 0x0028 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UJunoUIGameFeatureAction_ExcludeHUDMenuTabs, TabsToExclude) == 40, "Offset mismatch for UJunoUIGameFeatureAction_ExcludeHUDMenuTabs::TabsToExclude");

// /Script/JunoGameUI.JunoVillageMenuInitData
// Kind: Class; super: JunoHudMenuBaseInitData
class UJunoVillageMenuInitData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CampActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CampActorMembershipActorComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* AwesomeLevelComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVillageMenuInitData, CampActor) == 48, "Offset mismatch for UJunoVillageMenuInitData::CampActor");
static_assert(offsetof(UJunoVillageMenuInitData, CampActorMembershipActorComponent) == 56, "Offset mismatch for UJunoVillageMenuInitData::CampActorMembershipActorComponent");
static_assert(offsetof(UJunoVillageMenuInitData, AwesomeLevelComponent) == 64, "Offset mismatch for UJunoVillageMenuInitData::AwesomeLevelComponent");

// /Script/JunoGameUI.JunoVillageRequiredAwesomePointsInterface
// Kind: Class; super: Interface
class UJunoVillageRequiredAwesomePointsInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoGameUI.JunoVillageRewardEntry
// Kind: Class; super: CommonButtonBase
class UJunoVillageRewardEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    std::uint8_t VillageRewardEntryInfo[0x70]; // 0x15A8 (Size: 0x70, Type: StructProperty)
    std::uint8_t ParentVillageUIData[0x1]; // 0x1618 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVillageRewardEntry, VillageRewardEntryInfo) == 5544, "Offset mismatch for UJunoVillageRewardEntry::VillageRewardEntryInfo");
static_assert(offsetof(UJunoVillageRewardEntry, ParentVillageUIData) == 5656, "Offset mismatch for UJunoVillageRewardEntry::ParentVillageUIData");

// /Script/JunoGameUI.JunoVillageScreenBase
// Kind: Class; super: CommonActivatableWidget
class UJunoVillageScreenBase
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    void* Button_Back; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VillageUIData[0x228]; // 0x04D8 (Size: 0x228, Type: StructProperty)
    void* CampActor; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    void* CampMembershipActorComponent; // 0x0708 (Size: 0x8, Type: ObjectProperty)
    void* AwesomeLevelComponent; // 0x0710 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVillageScreenBase, Button_Back) == 1232, "Offset mismatch for UJunoVillageScreenBase::Button_Back");
static_assert(offsetof(UJunoVillageScreenBase, VillageUIData) == 1240, "Offset mismatch for UJunoVillageScreenBase::VillageUIData");
static_assert(offsetof(UJunoVillageScreenBase, CampActor) == 1792, "Offset mismatch for UJunoVillageScreenBase::CampActor");
static_assert(offsetof(UJunoVillageScreenBase, CampMembershipActorComponent) == 1800, "Offset mismatch for UJunoVillageScreenBase::CampMembershipActorComponent");
static_assert(offsetof(UJunoVillageScreenBase, AwesomeLevelComponent) == 1808, "Offset mismatch for UJunoVillageScreenBase::AwesomeLevelComponent");

// /Script/JunoGameUI.JunoVillageTownBuilderQuestEntry
// Kind: Class; super: CommonUserWidget
class UJunoVillageTownBuilderQuestEntry
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    FString ItemDefinitionTagQueryDescription; // 0x0338 (Size: 0x10, Type: StrProperty)
    TArray<void*> ItemDefinitionTagQueryTags; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    void* ItemDefinition; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Name[0x10]; // 0x0360 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0370 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0380 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t StepIndex; // 0x03A0 (Size: 0x4, Type: IntProperty)
    std::int32_t StepCount; // 0x03A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsComplete; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOsirisCamp; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTownbuilder; // 0x03AA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, ItemDefinitionTagQueryDescription) == 824, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::ItemDefinitionTagQueryDescription");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, ItemDefinitionTagQueryTags) == 840, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::ItemDefinitionTagQueryTags");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, ItemDefinition) == 856, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::ItemDefinition");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, Name) == 864, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::Name");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, Description) == 880, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::Description");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, Icon) == 896, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::Icon");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, StepIndex) == 928, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::StepIndex");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, StepCount) == 932, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::StepCount");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, bIsComplete) == 936, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::bIsComplete");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, bIsOsirisCamp) == 937, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::bIsOsirisCamp");
static_assert(offsetof(UJunoVillageTownBuilderQuestEntry, bIsTownbuilder) == 938, "Offset mismatch for UJunoVillageTownBuilderQuestEntry::bIsTownbuilder");

// /Script/JunoGameUI.JunoVillageUIDataAsset
// Kind: Class; super: DataAsset
class UJunoVillageUIDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> PerkTagToIcon; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RoleTagToIcon; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoVillageUIDataAsset, PerkTagToIcon) == 40, "Offset mismatch for UJunoVillageUIDataAsset::PerkTagToIcon");
static_assert(offsetof(UJunoVillageUIDataAsset, RoleTagToIcon) == 56, "Offset mismatch for UJunoVillageUIDataAsset::RoleTagToIcon");

// /Script/JunoGameUI.JunoVillageUpgradeCelebrationScreen
// Kind: Class; super: FortHUDElementWidget
class UJunoVillageUpgradeCelebrationScreen
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVillageUpgradeCelebrationScreen, HLTDependentWidgetTag) == 824, "Offset mismatch for UJunoVillageUpgradeCelebrationScreen::HLTDependentWidgetTag");
static_assert(offsetof(UJunoVillageUpgradeCelebrationScreen, ElementTag) == 828, "Offset mismatch for UJunoVillageUpgradeCelebrationScreen::ElementTag");
static_assert(offsetof(UJunoVillageUpgradeCelebrationScreen, HUDElementTag) == 832, "Offset mismatch for UJunoVillageUpgradeCelebrationScreen::HUDElementTag");
static_assert(offsetof(UJunoVillageUpgradeCelebrationScreen, HiddenVisibility) == 864, "Offset mismatch for UJunoVillageUpgradeCelebrationScreen::HiddenVisibility");
static_assert(offsetof(UJunoVillageUpgradeCelebrationScreen, TutorialHighlight) == 872, "Offset mismatch for UJunoVillageUpgradeCelebrationScreen::TutorialHighlight");

// /Script/JunoGameUI.JunoWeaponsBarViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoWeaponsBarViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> WeaponSlots; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AbilityWeaponSlots; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasAbilityWeapons; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    void* ActiveWeapon; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsMarsPlaylist; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A9
    void* TemporaryWeaponSlot; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ActiveQuickbarSlotIndex; // 0x00B8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoWeaponsBarViewModel, WeaponSlots) == 120, "Offset mismatch for UJunoWeaponsBarViewModel::WeaponSlots");
static_assert(offsetof(UJunoWeaponsBarViewModel, AbilityWeaponSlots) == 136, "Offset mismatch for UJunoWeaponsBarViewModel::AbilityWeaponSlots");
static_assert(offsetof(UJunoWeaponsBarViewModel, bHasAbilityWeapons) == 152, "Offset mismatch for UJunoWeaponsBarViewModel::bHasAbilityWeapons");
static_assert(offsetof(UJunoWeaponsBarViewModel, ActiveWeapon) == 160, "Offset mismatch for UJunoWeaponsBarViewModel::ActiveWeapon");
static_assert(offsetof(UJunoWeaponsBarViewModel, bIsMarsPlaylist) == 168, "Offset mismatch for UJunoWeaponsBarViewModel::bIsMarsPlaylist");
static_assert(offsetof(UJunoWeaponsBarViewModel, TemporaryWeaponSlot) == 176, "Offset mismatch for UJunoWeaponsBarViewModel::TemporaryWeaponSlot");
static_assert(offsetof(UJunoWeaponsBarViewModel, ActiveQuickbarSlotIndex) == 184, "Offset mismatch for UJunoWeaponsBarViewModel::ActiveQuickbarSlotIndex");

// /Script/JunoGameUI.JunoWidgetPoolSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UJunoWidgetPoolSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t WidgetPool[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> AcquiredWidgetsMapping; // 0x0060 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoWidgetPoolSubsystem, WidgetPool) == 48, "Offset mismatch for UJunoWidgetPoolSubsystem::WidgetPool");
static_assert(offsetof(UJunoWidgetPoolSubsystem, AcquiredWidgetsMapping) == 96, "Offset mismatch for UJunoWidgetPoolSubsystem::AcquiredWidgetsMapping");

// /Script/JunoGameUI.JunoWorldManagementUIComponent
// Kind: Class; super: FortControllerComponent
class UJunoWorldManagementUIComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoWorldManagementUIComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoWorldManagementUIComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoWorldManagementUIComponent, ComponentTags) == 104, "Offset mismatch for UJunoWorldManagementUIComponent::ComponentTags");
static_assert(offsetof(UJunoWorldManagementUIComponent, AssetUserData) == 120, "Offset mismatch for UJunoWorldManagementUIComponent::AssetUserData");
static_assert(offsetof(UJunoWorldManagementUIComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoWorldManagementUIComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoWorldManagementUIComponent, bNetAddressable) == 152, "Offset mismatch for UJunoWorldManagementUIComponent::bNetAddressable");
static_assert(offsetof(UJunoWorldManagementUIComponent, bAutoActivate) == 154, "Offset mismatch for UJunoWorldManagementUIComponent::bAutoActivate");
static_assert(offsetof(UJunoWorldManagementUIComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoWorldManagementUIComponent::bIsEditorOnly");
static_assert(offsetof(UJunoWorldManagementUIComponent, CreationMethod) == 185, "Offset mismatch for UJunoWorldManagementUIComponent::CreationMethod");
static_assert(offsetof(UJunoWorldManagementUIComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoWorldManagementUIComponent::OnComponentActivated");
static_assert(offsetof(UJunoWorldManagementUIComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoWorldManagementUIComponent::OnComponentDeactivated");

// /Script/JunoGameUI.Juno_GFA_AddMapElementProviders
// Kind: Class; super: FortUIGameFeatureAction
class UJuno_GFA_AddMapElementProviders
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ElementProviders; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedElementProviders; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJuno_GFA_AddMapElementProviders, ElementProviders) == 48, "Offset mismatch for UJuno_GFA_AddMapElementProviders::ElementProviders");
static_assert(offsetof(UJuno_GFA_AddMapElementProviders, LoadedElementProviders) == 64, "Offset mismatch for UJuno_GFA_AddMapElementProviders::LoadedElementProviders");

// /Script/JunoGameUI.Juno_GFA_RegisterMapViewModelClasses
// Kind: Class; super: GameFeatureAction
class UJuno_GFA_RegisterMapViewModelClasses
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> MapViewModelClasses; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MapViewModelLoadedClassRefs; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJuno_GFA_RegisterMapViewModelClasses, MapViewModelClasses) == 48, "Offset mismatch for UJuno_GFA_RegisterMapViewModelClasses::MapViewModelClasses");
static_assert(offsetof(UJuno_GFA_RegisterMapViewModelClasses, MapViewModelLoadedClassRefs) == 64, "Offset mismatch for UJuno_GFA_RegisterMapViewModelClasses::MapViewModelLoadedClassRefs");

// /Script/JunoGameUI.PermaDeathFlowInitData
// Kind: Class; super: Object
class UPermaDeathFlowInitData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ShouldOpenOnPlayerManagement; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPermaDeathFlowInitData, ShouldOpenOnPlayerManagement) == 40, "Offset mismatch for UPermaDeathFlowInitData::ShouldOpenOnPlayerManagement");

// /Script/JunoGameUI.PermaDeathFlowScreen
// Kind: Class; super: CommonActivatableWidget
class UPermaDeathFlowScreen
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPermaDeathFlowScreen, bIsBackHandler) == 816, "Offset mismatch for UPermaDeathFlowScreen::bIsBackHandler");
static_assert(offsetof(UPermaDeathFlowScreen, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UPermaDeathFlowScreen::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UPermaDeathFlowScreen, OverrideBackActionDisplayName) == 824, "Offset mismatch for UPermaDeathFlowScreen::OverrideBackActionDisplayName");
static_assert(offsetof(UPermaDeathFlowScreen, bAutoActivate) == 840, "Offset mismatch for UPermaDeathFlowScreen::bAutoActivate");
static_assert(offsetof(UPermaDeathFlowScreen, bSupportsActivationFocus) == 841, "Offset mismatch for UPermaDeathFlowScreen::bSupportsActivationFocus");
static_assert(offsetof(UPermaDeathFlowScreen, bIsModal) == 842, "Offset mismatch for UPermaDeathFlowScreen::bIsModal");
static_assert(offsetof(UPermaDeathFlowScreen, bAutoRestoreFocus) == 843, "Offset mismatch for UPermaDeathFlowScreen::bAutoRestoreFocus");
static_assert(offsetof(UPermaDeathFlowScreen, bOverrideActionDomain) == 844, "Offset mismatch for UPermaDeathFlowScreen::bOverrideActionDomain");
static_assert(offsetof(UPermaDeathFlowScreen, InputMapping) == 848, "Offset mismatch for UPermaDeathFlowScreen::InputMapping");
static_assert(offsetof(UPermaDeathFlowScreen, InputMappingPriority) == 856, "Offset mismatch for UPermaDeathFlowScreen::InputMappingPriority");
static_assert(offsetof(UPermaDeathFlowScreen, InputModeTagsToAdd) == 864, "Offset mismatch for UPermaDeathFlowScreen::InputModeTagsToAdd");
static_assert(offsetof(UPermaDeathFlowScreen, InputModeTagsToRemove) == 896, "Offset mismatch for UPermaDeathFlowScreen::InputModeTagsToRemove");
static_assert(offsetof(UPermaDeathFlowScreen, ActionDomainOverride) == 928, "Offset mismatch for UPermaDeathFlowScreen::ActionDomainOverride");
static_assert(offsetof(UPermaDeathFlowScreen, BP_OnWidgetActivated) == 960, "Offset mismatch for UPermaDeathFlowScreen::BP_OnWidgetActivated");
static_assert(offsetof(UPermaDeathFlowScreen, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UPermaDeathFlowScreen::BP_OnWidgetDeactivated");
static_assert(offsetof(UPermaDeathFlowScreen, bIsActive) == 992, "Offset mismatch for UPermaDeathFlowScreen::bIsActive");
static_assert(offsetof(UPermaDeathFlowScreen, VisibilityBoundWidgets) == 1000, "Offset mismatch for UPermaDeathFlowScreen::VisibilityBoundWidgets");
static_assert(offsetof(UPermaDeathFlowScreen, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UPermaDeathFlowScreen::bSetVisibilityOnActivated");
static_assert(offsetof(UPermaDeathFlowScreen, ActivatedVisibility) == 1177, "Offset mismatch for UPermaDeathFlowScreen::ActivatedVisibility");
static_assert(offsetof(UPermaDeathFlowScreen, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UPermaDeathFlowScreen::bSetVisibilityOnDeactivated");
static_assert(offsetof(UPermaDeathFlowScreen, DeactivatedVisibility) == 1179, "Offset mismatch for UPermaDeathFlowScreen::DeactivatedVisibility");
