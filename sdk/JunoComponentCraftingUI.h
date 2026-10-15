/**
 * decamp dumper generated SDK
 * Package: /Script/JunoComponentCraftingUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoComponentCraftingUI.JunoActiveCraftingActiveRecipe
// Kind: ScriptStruct; super: none
struct FJunoActiveCraftingActiveRecipe
{
public:
    void* RecipeViewModel; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CategoryViewModel; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PartViewModels; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* FocusViewModel; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AvailableBoostRecipes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsComponentCraftingRecipe; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0039
    TArray<void*> AllPartViewModels; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoActiveCraftingActiveRecipe, RecipeViewModel) == 0, "Offset mismatch for FJunoActiveCraftingActiveRecipe::RecipeViewModel");
static_assert(offsetof(FJunoActiveCraftingActiveRecipe, CategoryViewModel) == 8, "Offset mismatch for FJunoActiveCraftingActiveRecipe::CategoryViewModel");
static_assert(offsetof(FJunoActiveCraftingActiveRecipe, PartViewModels) == 16, "Offset mismatch for FJunoActiveCraftingActiveRecipe::PartViewModels");
static_assert(offsetof(FJunoActiveCraftingActiveRecipe, FocusViewModel) == 32, "Offset mismatch for FJunoActiveCraftingActiveRecipe::FocusViewModel");
static_assert(offsetof(FJunoActiveCraftingActiveRecipe, AvailableBoostRecipes) == 40, "Offset mismatch for FJunoActiveCraftingActiveRecipe::AvailableBoostRecipes");
static_assert(offsetof(FJunoActiveCraftingActiveRecipe, bIsComponentCraftingRecipe) == 56, "Offset mismatch for FJunoActiveCraftingActiveRecipe::bIsComponentCraftingRecipe");
static_assert(offsetof(FJunoActiveCraftingActiveRecipe, AllPartViewModels) == 64, "Offset mismatch for FJunoActiveCraftingActiveRecipe::AllPartViewModels");

// /Script/JunoComponentCraftingUI.JunoActiveCraftingBoostRecipe
// Kind: ScriptStruct; super: none
struct FJunoActiveCraftingBoostRecipe
{
public:
    FName RecipeRowName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> PossibleRequirements; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoActiveCraftingBoostRecipe, RecipeRowName) == 0, "Offset mismatch for FJunoActiveCraftingBoostRecipe::RecipeRowName");
static_assert(offsetof(FJunoActiveCraftingBoostRecipe, PossibleRequirements) == 8, "Offset mismatch for FJunoActiveCraftingBoostRecipe::PossibleRequirements");

// /Script/JunoComponentCraftingUI.JunoActiveCraftingRuneSlot
// Kind: ScriptStruct; super: none
struct FJunoActiveCraftingRuneSlot
{
public:
    std::uint8_t bIsUnlocked; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreviewed; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    void* CurrentRune; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoActiveCraftingRuneSlot, bIsUnlocked) == 0, "Offset mismatch for FJunoActiveCraftingRuneSlot::bIsUnlocked");
static_assert(offsetof(FJunoActiveCraftingRuneSlot, bIsPreviewed) == 1, "Offset mismatch for FJunoActiveCraftingRuneSlot::bIsPreviewed");
static_assert(offsetof(FJunoActiveCraftingRuneSlot, CurrentRune) == 8, "Offset mismatch for FJunoActiveCraftingRuneSlot::CurrentRune");

// /Script/JunoComponentCraftingUI.JunoComponentCraftingPartUIDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoComponentCraftingPartUIDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PartDisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsPrimaryPart; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t IgnoreIngredientKnowledgeQuery[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t Traits[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsOptionalPart; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoComponentCraftingPartUIDataRow, PartDisplayName) == 8, "Offset mismatch for FJunoComponentCraftingPartUIDataRow::PartDisplayName");
static_assert(offsetof(FJunoComponentCraftingPartUIDataRow, bIsPrimaryPart) == 24, "Offset mismatch for FJunoComponentCraftingPartUIDataRow::bIsPrimaryPart");
static_assert(offsetof(FJunoComponentCraftingPartUIDataRow, IgnoreIngredientKnowledgeQuery) == 32, "Offset mismatch for FJunoComponentCraftingPartUIDataRow::IgnoreIngredientKnowledgeQuery");
static_assert(offsetof(FJunoComponentCraftingPartUIDataRow, Traits) == 104, "Offset mismatch for FJunoComponentCraftingPartUIDataRow::Traits");
static_assert(offsetof(FJunoComponentCraftingPartUIDataRow, bIsOptionalPart) == 136, "Offset mismatch for FJunoComponentCraftingPartUIDataRow::bIsOptionalPart");

// /Script/JunoComponentCraftingUI.JunoComponentCraftingTextureUIDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoComponentCraftingTextureUIDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> RelevantBaseItemDefinitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultMask[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> ItemSlotMaterialsByRarity; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MasksByRarity; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t DefaultPartTexture[0x20]; // 0x0058 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> PartTexturesByRarity; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t RiftedTexture[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> PrimaryPartOverrideTextures; // 0x00A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, RelevantBaseItemDefinitions) == 8, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::RelevantBaseItemDefinitions");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, DefaultMask) == 24, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::DefaultMask");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, ItemSlotMaterialsByRarity) == 56, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::ItemSlotMaterialsByRarity");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, MasksByRarity) == 72, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::MasksByRarity");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, DefaultPartTexture) == 88, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::DefaultPartTexture");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, PartTexturesByRarity) == 120, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::PartTexturesByRarity");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, RiftedTexture) == 136, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::RiftedTexture");
static_assert(offsetof(FJunoComponentCraftingTextureUIDataRow, PrimaryPartOverrideTextures) == 168, "Offset mismatch for FJunoComponentCraftingTextureUIDataRow::PrimaryPartOverrideTextures");

// /Script/JunoComponentCraftingUI.JunoComponentCraftingTraitUIDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoComponentCraftingTraitUIDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> Icon; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoComponentCraftingTraitUIDataRow, DisplayName) == 8, "Offset mismatch for FJunoComponentCraftingTraitUIDataRow::DisplayName");
static_assert(offsetof(FJunoComponentCraftingTraitUIDataRow, Icon) == 24, "Offset mismatch for FJunoComponentCraftingTraitUIDataRow::Icon");

// /Script/JunoComponentCraftingUI.JunoCraftingPartRequirementDisplayData
// Kind: ScriptStruct; super: none
struct FJunoCraftingPartRequirementDisplayData
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Rarity; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    std::int32_t Count; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsAnyRequirement; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCraftingPartRequirementDisplayData, DisplayName) == 0, "Offset mismatch for FJunoCraftingPartRequirementDisplayData::DisplayName");
static_assert(offsetof(FJunoCraftingPartRequirementDisplayData, Icon) == 16, "Offset mismatch for FJunoCraftingPartRequirementDisplayData::Icon");
static_assert(offsetof(FJunoCraftingPartRequirementDisplayData, Rarity) == 48, "Offset mismatch for FJunoCraftingPartRequirementDisplayData::Rarity");
static_assert(offsetof(FJunoCraftingPartRequirementDisplayData, Count) == 52, "Offset mismatch for FJunoCraftingPartRequirementDisplayData::Count");
static_assert(offsetof(FJunoCraftingPartRequirementDisplayData, bIsAnyRequirement) == 56, "Offset mismatch for FJunoCraftingPartRequirementDisplayData::bIsAnyRequirement");

// /Script/JunoComponentCraftingUI.JunoTexturesByItemDefinition
// Kind: ScriptStruct; super: none
struct FJunoTexturesByItemDefinition
{
public:
    std::uint8_t DefaultTexture[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> Map; // 0x0020 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoTexturesByItemDefinition, DefaultTexture) == 0, "Offset mismatch for FJunoTexturesByItemDefinition::DefaultTexture");
static_assert(offsetof(FJunoTexturesByItemDefinition, Map) == 32, "Offset mismatch for FJunoTexturesByItemDefinition::Map");

// /Script/JunoComponentCraftingUI.GameFeatureAction_AddCBCSupportToWidgets
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddCBCSupportToWidgets
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCraftingUI.JunoActiveCraftingViewModel
// Kind: Class; super: JunoCraftingViewModelBase
class UJunoActiveCraftingViewModel
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t ActiveRecipe[0x50]; // 0x00D8 (Size: 0x50, Type: StructProperty)
    void* SelectedPartViewModel; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StatEntries; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RuneSlotCountStatTag[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t FocusSlot[0x10]; // 0x0148 (Size: 0x10, Type: StructProperty)
    TArray<void*> RuneSlots; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ComponentCraftingTextureSet[0xA0]; // 0x0168 (Size: 0xA0, Type: StructProperty)
    std::uint8_t bHasComponentCraftingTextureSet; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0209
    std::uint8_t ActiveRecipeName[0x10]; // 0x0210 (Size: 0x10, Type: TextProperty)
    std::uint8_t ActiveRecipeRarity; // 0x0220 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0221
    void* PrimaryPartResult; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnInventorySlotChangedDelegate; // 0x0230 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJunoActiveCraftingViewModel, ActiveRecipe) == 216, "Offset mismatch for UJunoActiveCraftingViewModel::ActiveRecipe");
static_assert(offsetof(UJunoActiveCraftingViewModel, SelectedPartViewModel) == 296, "Offset mismatch for UJunoActiveCraftingViewModel::SelectedPartViewModel");
static_assert(offsetof(UJunoActiveCraftingViewModel, StatEntries) == 304, "Offset mismatch for UJunoActiveCraftingViewModel::StatEntries");
static_assert(offsetof(UJunoActiveCraftingViewModel, RuneSlotCountStatTag) == 320, "Offset mismatch for UJunoActiveCraftingViewModel::RuneSlotCountStatTag");
static_assert(offsetof(UJunoActiveCraftingViewModel, FocusSlot) == 328, "Offset mismatch for UJunoActiveCraftingViewModel::FocusSlot");
static_assert(offsetof(UJunoActiveCraftingViewModel, RuneSlots) == 344, "Offset mismatch for UJunoActiveCraftingViewModel::RuneSlots");
static_assert(offsetof(UJunoActiveCraftingViewModel, ComponentCraftingTextureSet) == 360, "Offset mismatch for UJunoActiveCraftingViewModel::ComponentCraftingTextureSet");
static_assert(offsetof(UJunoActiveCraftingViewModel, bHasComponentCraftingTextureSet) == 520, "Offset mismatch for UJunoActiveCraftingViewModel::bHasComponentCraftingTextureSet");
static_assert(offsetof(UJunoActiveCraftingViewModel, ActiveRecipeName) == 528, "Offset mismatch for UJunoActiveCraftingViewModel::ActiveRecipeName");
static_assert(offsetof(UJunoActiveCraftingViewModel, ActiveRecipeRarity) == 544, "Offset mismatch for UJunoActiveCraftingViewModel::ActiveRecipeRarity");
static_assert(offsetof(UJunoActiveCraftingViewModel, PrimaryPartResult) == 552, "Offset mismatch for UJunoActiveCraftingViewModel::PrimaryPartResult");
static_assert(offsetof(UJunoActiveCraftingViewModel, OnInventorySlotChangedDelegate) == 560, "Offset mismatch for UJunoActiveCraftingViewModel::OnInventorySlotChangedDelegate");

// /Script/JunoComponentCraftingUI.JunoComponentCraftingUIComp
// Kind: Class; super: JunoDynamicUIDirectorComponent
class UJunoComponentCraftingUIComp
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TaggedWidgetSceneData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HudLayoutScenes; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> WidgetPoolInitData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoComponentCraftingUIComp, TaggedWidgetSceneData) == 200, "Offset mismatch for UJunoComponentCraftingUIComp::TaggedWidgetSceneData");
static_assert(offsetof(UJunoComponentCraftingUIComp, HudLayoutScenes) == 208, "Offset mismatch for UJunoComponentCraftingUIComp::HudLayoutScenes");
static_assert(offsetof(UJunoComponentCraftingUIComp, WidgetPoolInitData) == 224, "Offset mismatch for UJunoComponentCraftingUIComp::WidgetPoolInitData");

// /Script/JunoComponentCraftingUI.JunoCraftingPartViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoCraftingPartViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> PossibleItemAndCountArray; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* AssignedItemDefinition; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* PreviewItemDefinition; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* AssignedItemSlot; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PartTag[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t FilterTagContainer[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t IgnoreKnowledgeQuery[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    std::uint8_t PartUIData[0x90]; // 0x0110 (Size: 0x90, Type: StructProperty)
    std::int32_t CurrentCount; // 0x01A0 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x01A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01A8
    std::uint8_t bCanOpenPicker; // 0x01AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x01AD
    TArray<void*> TraitUIDataArray; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsOutputSlot; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAdjustButtons; // 0x01C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x01C2
    std::uint8_t RequirementDisplayData[0x40]; // 0x01C8 (Size: 0x40, Type: StructProperty)
    void* InventoryFilterViewModel; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldShowCountSlider; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0211
    TArray<void*> HigherPriorityParts; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RelevantInventoryComponents; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InventoryAggregateComponents; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> WeakCraftingObject; // 0x0248 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoCraftingPartViewModel, PossibleItemAndCountArray) == 120, "Offset mismatch for UJunoCraftingPartViewModel::PossibleItemAndCountArray");
static_assert(offsetof(UJunoCraftingPartViewModel, AssignedItemDefinition) == 136, "Offset mismatch for UJunoCraftingPartViewModel::AssignedItemDefinition");
static_assert(offsetof(UJunoCraftingPartViewModel, PreviewItemDefinition) == 144, "Offset mismatch for UJunoCraftingPartViewModel::PreviewItemDefinition");
static_assert(offsetof(UJunoCraftingPartViewModel, AssignedItemSlot) == 152, "Offset mismatch for UJunoCraftingPartViewModel::AssignedItemSlot");
static_assert(offsetof(UJunoCraftingPartViewModel, PartTag) == 160, "Offset mismatch for UJunoCraftingPartViewModel::PartTag");
static_assert(offsetof(UJunoCraftingPartViewModel, FilterTagContainer) == 168, "Offset mismatch for UJunoCraftingPartViewModel::FilterTagContainer");
static_assert(offsetof(UJunoCraftingPartViewModel, IgnoreKnowledgeQuery) == 200, "Offset mismatch for UJunoCraftingPartViewModel::IgnoreKnowledgeQuery");
static_assert(offsetof(UJunoCraftingPartViewModel, PartUIData) == 272, "Offset mismatch for UJunoCraftingPartViewModel::PartUIData");
static_assert(offsetof(UJunoCraftingPartViewModel, CurrentCount) == 416, "Offset mismatch for UJunoCraftingPartViewModel::CurrentCount");
static_assert(offsetof(UJunoCraftingPartViewModel, RequiredCount) == 420, "Offset mismatch for UJunoCraftingPartViewModel::RequiredCount");
static_assert(offsetof(UJunoCraftingPartViewModel, bCanOpenPicker) == 428, "Offset mismatch for UJunoCraftingPartViewModel::bCanOpenPicker");
static_assert(offsetof(UJunoCraftingPartViewModel, TraitUIDataArray) == 432, "Offset mismatch for UJunoCraftingPartViewModel::TraitUIDataArray");
static_assert(offsetof(UJunoCraftingPartViewModel, bIsOutputSlot) == 448, "Offset mismatch for UJunoCraftingPartViewModel::bIsOutputSlot");
static_assert(offsetof(UJunoCraftingPartViewModel, bShowAdjustButtons) == 449, "Offset mismatch for UJunoCraftingPartViewModel::bShowAdjustButtons");
static_assert(offsetof(UJunoCraftingPartViewModel, RequirementDisplayData) == 456, "Offset mismatch for UJunoCraftingPartViewModel::RequirementDisplayData");
static_assert(offsetof(UJunoCraftingPartViewModel, InventoryFilterViewModel) == 520, "Offset mismatch for UJunoCraftingPartViewModel::InventoryFilterViewModel");
static_assert(offsetof(UJunoCraftingPartViewModel, bShouldShowCountSlider) == 528, "Offset mismatch for UJunoCraftingPartViewModel::bShouldShowCountSlider");
static_assert(offsetof(UJunoCraftingPartViewModel, HigherPriorityParts) == 536, "Offset mismatch for UJunoCraftingPartViewModel::HigherPriorityParts");
static_assert(offsetof(UJunoCraftingPartViewModel, RelevantInventoryComponents) == 552, "Offset mismatch for UJunoCraftingPartViewModel::RelevantInventoryComponents");
static_assert(offsetof(UJunoCraftingPartViewModel, InventoryAggregateComponents) == 568, "Offset mismatch for UJunoCraftingPartViewModel::InventoryAggregateComponents");
static_assert(offsetof(UJunoCraftingPartViewModel, WeakCraftingObject) == 584, "Offset mismatch for UJunoCraftingPartViewModel::WeakCraftingObject");

// /Script/JunoComponentCraftingUI.JunoCraftingViewModelBase
// Kind: Class; super: FortPerUserViewModel
class UJunoCraftingViewModelBase
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> WeakCraftingObject; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Categories; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> CategoriesMap; // 0x0090 (Size: 0x10, Type: MapProperty)
    void* SelectedCategory; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* ActiveRecipeViewModel; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ConnectedInventoryCount; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    TArray<void*> RelevantInventoryComponents; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InventoryAggregateComponents; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoCraftingViewModelBase, WeakCraftingObject) == 120, "Offset mismatch for UJunoCraftingViewModelBase::WeakCraftingObject");
static_assert(offsetof(UJunoCraftingViewModelBase, Categories) == 128, "Offset mismatch for UJunoCraftingViewModelBase::Categories");
static_assert(offsetof(UJunoCraftingViewModelBase, CategoriesMap) == 144, "Offset mismatch for UJunoCraftingViewModelBase::CategoriesMap");
static_assert(offsetof(UJunoCraftingViewModelBase, SelectedCategory) == 160, "Offset mismatch for UJunoCraftingViewModelBase::SelectedCategory");
static_assert(offsetof(UJunoCraftingViewModelBase, ActiveRecipeViewModel) == 168, "Offset mismatch for UJunoCraftingViewModelBase::ActiveRecipeViewModel");
static_assert(offsetof(UJunoCraftingViewModelBase, ConnectedInventoryCount) == 176, "Offset mismatch for UJunoCraftingViewModelBase::ConnectedInventoryCount");
static_assert(offsetof(UJunoCraftingViewModelBase, RelevantInventoryComponents) == 184, "Offset mismatch for UJunoCraftingViewModelBase::RelevantInventoryComponents");
static_assert(offsetof(UJunoCraftingViewModelBase, InventoryAggregateComponents) == 200, "Offset mismatch for UJunoCraftingViewModelBase::InventoryAggregateComponents");

// /Script/JunoComponentCraftingUI.JunoGameStateComponent_ComponentCraftingUIData
// Kind: Class; super: JunoGameStateComponent_UIDataBase
class UJunoGameStateComponent_ComponentCraftingUIData
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t JunoComponentCraftingPartUIDataRegistryType[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t JunoComponentCraftingTextureUIDataRegistryType[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::uint8_t JunoComponentCraftingTraitUIDataRegistryType[0x8]; // 0x0100 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> ItemDefinitionToTextureUIDataMap; // 0x0108 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingUIData, JunoComponentCraftingPartUIDataRegistryType) == 248, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingUIData::JunoComponentCraftingPartUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingUIData, JunoComponentCraftingTextureUIDataRegistryType) == 252, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingUIData::JunoComponentCraftingTextureUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingUIData, JunoComponentCraftingTraitUIDataRegistryType) == 256, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingUIData::JunoComponentCraftingTraitUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingUIData, ItemDefinitionToTextureUIDataMap) == 264, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingUIData::ItemDefinitionToTextureUIDataMap");

// /Script/JunoComponentCraftingUI.JunoPassiveCraftingViewModel
// Kind: Class; super: JunoCraftingViewModelBase
class UJunoPassiveCraftingViewModel
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t PassiveCraftingState; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    TArray<void*> InputCraftingParts; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OutputCraftingParts; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAreAllRequirementsMet; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OutputState; // 0x0101 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0102
    void* PassiveCraftingComponent; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* CraftingObjectInventoryViewModel; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPassiveCraftingViewModel, PassiveCraftingState) == 216, "Offset mismatch for UJunoPassiveCraftingViewModel::PassiveCraftingState");
static_assert(offsetof(UJunoPassiveCraftingViewModel, InputCraftingParts) == 224, "Offset mismatch for UJunoPassiveCraftingViewModel::InputCraftingParts");
static_assert(offsetof(UJunoPassiveCraftingViewModel, OutputCraftingParts) == 240, "Offset mismatch for UJunoPassiveCraftingViewModel::OutputCraftingParts");
static_assert(offsetof(UJunoPassiveCraftingViewModel, bAreAllRequirementsMet) == 256, "Offset mismatch for UJunoPassiveCraftingViewModel::bAreAllRequirementsMet");
static_assert(offsetof(UJunoPassiveCraftingViewModel, OutputState) == 257, "Offset mismatch for UJunoPassiveCraftingViewModel::OutputState");
static_assert(offsetof(UJunoPassiveCraftingViewModel, PassiveCraftingComponent) == 264, "Offset mismatch for UJunoPassiveCraftingViewModel::PassiveCraftingComponent");
static_assert(offsetof(UJunoPassiveCraftingViewModel, CraftingObjectInventoryViewModel) == 272, "Offset mismatch for UJunoPassiveCraftingViewModel::CraftingObjectInventoryViewModel");
