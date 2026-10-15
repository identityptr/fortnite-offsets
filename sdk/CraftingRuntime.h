/**
 * decamp dumper generated SDK
 * Package: /Script/CraftingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CraftingRuntime.CraftingEvent_OpenCraftingMenu
// Kind: ScriptStruct; super: none
struct FCraftingEvent_OpenCraftingMenu
{
public:
    void* CraftingObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCraftingEvent_OpenCraftingMenu, CraftingObject) == 0, "Offset mismatch for FCraftingEvent_OpenCraftingMenu::CraftingObject");

// /Script/CraftingRuntime.CraftingFormula
// Kind: ScriptStruct; super: ItemShopTableRowBase
struct FCraftingFormula
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreviewImage[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAlwaysKnownFormula; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bEnabled (shared storage)
    // 0x0040 BoolProperty bInstantlyConsumeIngredients (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::int32_t SortingPriority; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceObjectTag[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t AttributeTags[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    TArray<void*> RequiredIngredients; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    FName ResultLootTierKey; // 0x0080 (Size: 0x8, Type: NameProperty)
    std::uint8_t WhileCraftingAbility[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> UpgradeRules; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    float OverrideCraftingTime; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00BC
    std::uint8_t InstigatorWhileCraftingAbility[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> ExtraData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCraftingFormula, DisplayName) == 16, "Offset mismatch for FCraftingFormula::DisplayName");
static_assert(offsetof(FCraftingFormula, PreviewImage) == 32, "Offset mismatch for FCraftingFormula::PreviewImage");
static_assert(offsetof(FCraftingFormula, bAlwaysKnownFormula) == 64, "Offset mismatch for FCraftingFormula::bAlwaysKnownFormula");
static_assert(offsetof(FCraftingFormula, SortingPriority) == 68, "Offset mismatch for FCraftingFormula::SortingPriority");
static_assert(offsetof(FCraftingFormula, SourceObjectTag) == 72, "Offset mismatch for FCraftingFormula::SourceObjectTag");
static_assert(offsetof(FCraftingFormula, AttributeTags) == 80, "Offset mismatch for FCraftingFormula::AttributeTags");
static_assert(offsetof(FCraftingFormula, RequiredIngredients) == 112, "Offset mismatch for FCraftingFormula::RequiredIngredients");
static_assert(offsetof(FCraftingFormula, ResultLootTierKey) == 128, "Offset mismatch for FCraftingFormula::ResultLootTierKey");
static_assert(offsetof(FCraftingFormula, WhileCraftingAbility) == 136, "Offset mismatch for FCraftingFormula::WhileCraftingAbility");
static_assert(offsetof(FCraftingFormula, UpgradeRules) == 168, "Offset mismatch for FCraftingFormula::UpgradeRules");
static_assert(offsetof(FCraftingFormula, OverrideCraftingTime) == 184, "Offset mismatch for FCraftingFormula::OverrideCraftingTime");
static_assert(offsetof(FCraftingFormula, InstigatorWhileCraftingAbility) == 192, "Offset mismatch for FCraftingFormula::InstigatorWhileCraftingAbility");
static_assert(offsetof(FCraftingFormula, ExtraData) == 224, "Offset mismatch for FCraftingFormula::ExtraData");

// /Script/CraftingRuntime.CraftingFormulaExtraData
// Kind: ScriptStruct; super: none
struct FCraftingFormulaExtraData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CraftingRuntime.CraftingIngredientQueryState
// Kind: ScriptStruct; super: none
struct FCraftingIngredientQueryState
{
public:
    std::uint8_t Requirement[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::int32_t Owned; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t Missing; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCraftingIngredientQueryState, Requirement) == 0, "Offset mismatch for FCraftingIngredientQueryState::Requirement");
static_assert(offsetof(FCraftingIngredientQueryState, Owned) == 40, "Offset mismatch for FCraftingIngredientQueryState::Owned");
static_assert(offsetof(FCraftingIngredientQueryState, Missing) == 44, "Offset mismatch for FCraftingIngredientQueryState::Missing");

// /Script/CraftingRuntime.CraftingIngredientRequirement
// Kind: ScriptStruct; super: none
struct FCraftingIngredientRequirement
{
public:
    std::uint8_t IngredientTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::int32_t Count; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCraftingIngredientRequirement, IngredientTags) == 0, "Offset mismatch for FCraftingIngredientRequirement::IngredientTags");
static_assert(offsetof(FCraftingIngredientRequirement, Count) == 32, "Offset mismatch for FCraftingIngredientRequirement::Count");

// /Script/CraftingRuntime.CraftingIngredientUIData
// Kind: ScriptStruct; super: ItemShopTableRowBase
struct FCraftingIngredientUIData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t IngredientTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TArray<void*> ItemDefs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Icons; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCraftingIngredientUIData, IngredientTags) == 16, "Offset mismatch for FCraftingIngredientUIData::IngredientTags");
static_assert(offsetof(FCraftingIngredientUIData, ItemDefs) == 48, "Offset mismatch for FCraftingIngredientUIData::ItemDefs");
static_assert(offsetof(FCraftingIngredientUIData, Icons) == 64, "Offset mismatch for FCraftingIngredientUIData::Icons");

// /Script/CraftingRuntime.CraftingMultiKey
// Kind: ScriptStruct; super: none
struct FCraftingMultiKey
{
public:
    std::int64_t Key; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FCraftingMultiKey, Key) == 0, "Offset mismatch for FCraftingMultiKey::Key");

// /Script/CraftingRuntime.CraftingObjectAdditionalValidationEvent
// Kind: ScriptStruct; super: none
struct FCraftingObjectAdditionalValidationEvent
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName FormulaRow; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCraftingObjectAdditionalValidationEvent, Instigator) == 0, "Offset mismatch for FCraftingObjectAdditionalValidationEvent::Instigator");
static_assert(offsetof(FCraftingObjectAdditionalValidationEvent, FormulaRow) == 8, "Offset mismatch for FCraftingObjectAdditionalValidationEvent::FormulaRow");

// /Script/CraftingRuntime.CraftingObjectEntryInventory
// Kind: ScriptStruct; super: none
struct FCraftingObjectEntryInventory
{
public:
    TWeakObjectPtr<void> Inventory; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FCraftingObjectEntryInventory, Inventory) == 0, "Offset mismatch for FCraftingObjectEntryInventory::Inventory");

// /Script/CraftingRuntime.CraftingObjectEntryState
// Kind: ScriptStruct; super: none
struct FCraftingObjectEntryState
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CraftingObjectState; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float StateChangeServerTime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PausedCraftingTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float OverriddenObjectStateLength; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CraftingFormulaRow[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::int32_t NumToCraft; // 0x001C (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> CraftingInstigator; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Inventories; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCraftingObjectEntryState, Key) == 0, "Offset mismatch for FCraftingObjectEntryState::Key");
static_assert(offsetof(FCraftingObjectEntryState, CraftingObjectState) == 8, "Offset mismatch for FCraftingObjectEntryState::CraftingObjectState");
static_assert(offsetof(FCraftingObjectEntryState, StateChangeServerTime) == 12, "Offset mismatch for FCraftingObjectEntryState::StateChangeServerTime");
static_assert(offsetof(FCraftingObjectEntryState, PausedCraftingTime) == 16, "Offset mismatch for FCraftingObjectEntryState::PausedCraftingTime");
static_assert(offsetof(FCraftingObjectEntryState, OverriddenObjectStateLength) == 20, "Offset mismatch for FCraftingObjectEntryState::OverriddenObjectStateLength");
static_assert(offsetof(FCraftingObjectEntryState, CraftingFormulaRow) == 24, "Offset mismatch for FCraftingObjectEntryState::CraftingFormulaRow");
static_assert(offsetof(FCraftingObjectEntryState, NumToCraft) == 28, "Offset mismatch for FCraftingObjectEntryState::NumToCraft");
static_assert(offsetof(FCraftingObjectEntryState, CraftingInstigator) == 32, "Offset mismatch for FCraftingObjectEntryState::CraftingInstigator");
static_assert(offsetof(FCraftingObjectEntryState, Inventories) == 40, "Offset mismatch for FCraftingObjectEntryState::Inventories");

// /Script/CraftingRuntime.CraftingObjectRepStateData
// Kind: ScriptStruct; super: none
struct FCraftingObjectRepStateData
{
public:
    TArray<void*> CraftingObjectEntryStates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float CraftingSpeedMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCraftingObjectRepStateData, CraftingObjectEntryStates) == 0, "Offset mismatch for FCraftingObjectRepStateData::CraftingObjectEntryStates");
static_assert(offsetof(FCraftingObjectRepStateData, CraftingSpeedMultiplier) == 16, "Offset mismatch for FCraftingObjectRepStateData::CraftingSpeedMultiplier");

// /Script/CraftingRuntime.CraftingObjectServerStateData
// Kind: ScriptStruct; super: none
struct FCraftingObjectServerStateData
{
public:
    std::uint8_t bCraftingCompleted; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bIsNextCraftFree (shared storage)
    // 0x0000 BoolProperty bNextResultsHandledExternally (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* PendingPickupCraftingItem; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName PendingPickupCraftingFormula; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t PendingPickupCraftingItemEntry[0x98]; // 0x0018 (Size: 0x98, Type: StructProperty)
    std::int32_t PendingPickupHeldCount; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    TArray<void*> AllOfTheIngredientItems; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NonConsumedIngredientItemIndices; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CraftingResults; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InstigatorWhileCraftingAbilitySpecHandle[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCraftingObjectServerStateData, bCraftingCompleted) == 0, "Offset mismatch for FCraftingObjectServerStateData::bCraftingCompleted");
static_assert(offsetof(FCraftingObjectServerStateData, PendingPickupCraftingItem) == 8, "Offset mismatch for FCraftingObjectServerStateData::PendingPickupCraftingItem");
static_assert(offsetof(FCraftingObjectServerStateData, PendingPickupCraftingFormula) == 16, "Offset mismatch for FCraftingObjectServerStateData::PendingPickupCraftingFormula");
static_assert(offsetof(FCraftingObjectServerStateData, PendingPickupCraftingItemEntry) == 24, "Offset mismatch for FCraftingObjectServerStateData::PendingPickupCraftingItemEntry");
static_assert(offsetof(FCraftingObjectServerStateData, PendingPickupHeldCount) == 176, "Offset mismatch for FCraftingObjectServerStateData::PendingPickupHeldCount");
static_assert(offsetof(FCraftingObjectServerStateData, AllOfTheIngredientItems) == 184, "Offset mismatch for FCraftingObjectServerStateData::AllOfTheIngredientItems");
static_assert(offsetof(FCraftingObjectServerStateData, NonConsumedIngredientItemIndices) == 200, "Offset mismatch for FCraftingObjectServerStateData::NonConsumedIngredientItemIndices");
static_assert(offsetof(FCraftingObjectServerStateData, CraftingResults) == 216, "Offset mismatch for FCraftingObjectServerStateData::CraftingResults");
static_assert(offsetof(FCraftingObjectServerStateData, InstigatorWhileCraftingAbilitySpecHandle) == 232, "Offset mismatch for FCraftingObjectServerStateData::InstigatorWhileCraftingAbilitySpecHandle");

// /Script/CraftingRuntime.CraftingObjectStateChangedEvent
// Kind: ScriptStruct; super: none
struct FCraftingObjectStateChangedEvent
{
public:
    void* CraftingObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* Instigator; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CraftingState; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    float CraftingStateStartTime; // 0x001C (Size: 0x4, Type: FloatProperty)
    float CraftingStateDuration; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCraftingObjectStateChangedEvent, CraftingObject) == 0, "Offset mismatch for FCraftingObjectStateChangedEvent::CraftingObject");
static_assert(offsetof(FCraftingObjectStateChangedEvent, Key) == 8, "Offset mismatch for FCraftingObjectStateChangedEvent::Key");
static_assert(offsetof(FCraftingObjectStateChangedEvent, Instigator) == 16, "Offset mismatch for FCraftingObjectStateChangedEvent::Instigator");
static_assert(offsetof(FCraftingObjectStateChangedEvent, CraftingState) == 24, "Offset mismatch for FCraftingObjectStateChangedEvent::CraftingState");
static_assert(offsetof(FCraftingObjectStateChangedEvent, CraftingStateStartTime) == 28, "Offset mismatch for FCraftingObjectStateChangedEvent::CraftingStateStartTime");
static_assert(offsetof(FCraftingObjectStateChangedEvent, CraftingStateDuration) == 32, "Offset mismatch for FCraftingObjectStateChangedEvent::CraftingStateDuration");

// /Script/CraftingRuntime.CraftingObjectSuccessEvent
// Kind: ScriptStruct; super: none
struct FCraftingObjectSuccessEvent
{
public:
    void* CraftingObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Key[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    void* Instigator; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FName FormulaRowName; // 0x0018 (Size: 0x8, Type: NameProperty)
    TArray<void*> ConsumedIngredients; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCraftingObjectSuccessEvent, CraftingObject) == 0, "Offset mismatch for FCraftingObjectSuccessEvent::CraftingObject");
static_assert(offsetof(FCraftingObjectSuccessEvent, Key) == 8, "Offset mismatch for FCraftingObjectSuccessEvent::Key");
static_assert(offsetof(FCraftingObjectSuccessEvent, Instigator) == 16, "Offset mismatch for FCraftingObjectSuccessEvent::Instigator");
static_assert(offsetof(FCraftingObjectSuccessEvent, FormulaRowName) == 24, "Offset mismatch for FCraftingObjectSuccessEvent::FormulaRowName");
static_assert(offsetof(FCraftingObjectSuccessEvent, ConsumedIngredients) == 32, "Offset mismatch for FCraftingObjectSuccessEvent::ConsumedIngredients");

// /Script/CraftingRuntime.CraftingParameters
// Kind: ScriptStruct; super: none
struct FCraftingParameters
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CraftingObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inventories; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FormulaRow[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::int32_t NumberToCraft; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Key[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    float OverriddenObjectStateLength; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCraftingParameters, Instigator) == 0, "Offset mismatch for FCraftingParameters::Instigator");
static_assert(offsetof(FCraftingParameters, CraftingObject) == 8, "Offset mismatch for FCraftingParameters::CraftingObject");
static_assert(offsetof(FCraftingParameters, Inventories) == 16, "Offset mismatch for FCraftingParameters::Inventories");
static_assert(offsetof(FCraftingParameters, FormulaRow) == 32, "Offset mismatch for FCraftingParameters::FormulaRow");
static_assert(offsetof(FCraftingParameters, NumberToCraft) == 36, "Offset mismatch for FCraftingParameters::NumberToCraft");
static_assert(offsetof(FCraftingParameters, Key) == 40, "Offset mismatch for FCraftingParameters::Key");
static_assert(offsetof(FCraftingParameters, OverriddenObjectStateLength) == 48, "Offset mismatch for FCraftingParameters::OverriddenObjectStateLength");

// /Script/CraftingRuntime.CraftingQueryParameters
// Kind: ScriptStruct; super: none
struct FCraftingQueryParameters
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CraftingObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inventories; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FName FormulaRow; // 0x0020 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0028
    TArray<void*> AdditionalItems; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumberToCraft; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t InventoryGroups[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCraftingQueryParameters, Instigator) == 0, "Offset mismatch for FCraftingQueryParameters::Instigator");
static_assert(offsetof(FCraftingQueryParameters, CraftingObject) == 8, "Offset mismatch for FCraftingQueryParameters::CraftingObject");
static_assert(offsetof(FCraftingQueryParameters, Inventories) == 16, "Offset mismatch for FCraftingQueryParameters::Inventories");
static_assert(offsetof(FCraftingQueryParameters, FormulaRow) == 32, "Offset mismatch for FCraftingQueryParameters::FormulaRow");
static_assert(offsetof(FCraftingQueryParameters, AdditionalItems) == 48, "Offset mismatch for FCraftingQueryParameters::AdditionalItems");
static_assert(offsetof(FCraftingQueryParameters, NumberToCraft) == 64, "Offset mismatch for FCraftingQueryParameters::NumberToCraft");
static_assert(offsetof(FCraftingQueryParameters, InventoryGroups) == 72, "Offset mismatch for FCraftingQueryParameters::InventoryGroups");

// /Script/CraftingRuntime.CraftingResult
// Kind: ScriptStruct; super: none
struct FCraftingResult
{
public:
    FName ResultLootTierKey; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Results; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCraftingResult, ResultLootTierKey) == 0, "Offset mismatch for FCraftingResult::ResultLootTierKey");
static_assert(offsetof(FCraftingResult, Results) == 8, "Offset mismatch for FCraftingResult::Results");

// /Script/CraftingRuntime.CraftingTagsChangedMessage
// Kind: ScriptStruct; super: none
struct FCraftingTagsChangedMessage
{
public:
    void* CraftingObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCraftingTagsChangedMessage, CraftingObject) == 0, "Offset mismatch for FCraftingTagsChangedMessage::CraftingObject");

// /Script/CraftingRuntime.CraftingUpgradeRule
// Kind: ScriptStruct; super: none
struct FCraftingUpgradeRule
{
public:
    std::uint8_t SourceItemTags[0x88]; // 0x0000 (Size: 0x88, Type: StructProperty)
    std::uint8_t TargetItemTags[0x88]; // 0x0088 (Size: 0x88, Type: StructProperty)
    std::uint8_t UpgradeFlags; // 0x0110 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FCraftingUpgradeRule, SourceItemTags) == 0, "Offset mismatch for FCraftingUpgradeRule::SourceItemTags");
static_assert(offsetof(FCraftingUpgradeRule, TargetItemTags) == 136, "Offset mismatch for FCraftingUpgradeRule::TargetItemTags");
static_assert(offsetof(FCraftingUpgradeRule, UpgradeFlags) == 272, "Offset mismatch for FCraftingUpgradeRule::UpgradeFlags");

// /Script/CraftingRuntime.CraftingCheatManager
// Kind: Class; super: ChildCheatManager
class UCraftingCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CraftingRuntime.CraftingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCraftingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CraftingRuntime.CraftingObjectBGA
// Kind: Class; super: BuildingGameplayActor
class UCraftingObjectBGA
{
public:
    std::uint8_t Pad_0000[0x928]; // 0x0000
    void* Inventory; // 0x0928 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0930
    void* SphereComponent_InteractionRange; // 0x0948 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MenuWidget[0x20]; // 0x0950 (Size: 0x20, Type: SoftClassProperty)
    void* WidgetComponent_PotContents; // 0x0970 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShowCraftingUI; // 0x0978 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendEventMessageOnLocalInteract; // 0x0979 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRunServerInteractionWhenSendingEventMessage; // 0x097A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x097B
    void* CraftingObjectMesh; // 0x0980 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCraftingObjectBGA, Inventory) == 2344, "Offset mismatch for UCraftingObjectBGA::Inventory");
static_assert(offsetof(UCraftingObjectBGA, SphereComponent_InteractionRange) == 2376, "Offset mismatch for UCraftingObjectBGA::SphereComponent_InteractionRange");
static_assert(offsetof(UCraftingObjectBGA, MenuWidget) == 2384, "Offset mismatch for UCraftingObjectBGA::MenuWidget");
static_assert(offsetof(UCraftingObjectBGA, WidgetComponent_PotContents) == 2416, "Offset mismatch for UCraftingObjectBGA::WidgetComponent_PotContents");
static_assert(offsetof(UCraftingObjectBGA, bShowCraftingUI) == 2424, "Offset mismatch for UCraftingObjectBGA::bShowCraftingUI");
static_assert(offsetof(UCraftingObjectBGA, bSendEventMessageOnLocalInteract) == 2425, "Offset mismatch for UCraftingObjectBGA::bSendEventMessageOnLocalInteract");
static_assert(offsetof(UCraftingObjectBGA, bRunServerInteractionWhenSendingEventMessage) == 2426, "Offset mismatch for UCraftingObjectBGA::bRunServerInteractionWhenSendingEventMessage");
static_assert(offsetof(UCraftingObjectBGA, CraftingObjectMesh) == 2432, "Offset mismatch for UCraftingObjectBGA::CraftingObjectMesh");

// /Script/CraftingRuntime.CraftingObjectComponent
// Kind: Class; super: GameFrameworkComponent
class UCraftingObjectComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate CraftingObjectStateChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFormulaCraftableChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCraftingSuccess; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FScriptDelegate OnCraftingAdditionalValidationCheck; // 0x00F0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0100
    FMulticastInlineDelegate OnBuildingUsingChestResources; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CraftingObjectRepStateData[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> CraftingObjectServerStateData; // 0x0140 (Size: 0x10, Type: MapProperty)
    FName LastCraftedItemFormulaRow; // 0x0150 (Size: 0x8, Type: NameProperty)
    FString LastIngredientStringForAnalytics; // 0x0158 (Size: 0x10, Type: StrProperty)
    FString LastFormulaStringForAnalytics; // 0x0168 (Size: 0x10, Type: StrProperty)
    FString LastResultsStringForAnalytics; // 0x0178 (Size: 0x10, Type: StrProperty)
    std::uint8_t WhileCraftingAbilitySpecHandle[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t OwnerCraftingAbilitySpecHandle[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CraftingObjectTag[0x8]; // 0x01B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t CraftingObjectTags[0x20]; // 0x01C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CraftingTimeLength[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReadyTimeLength[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverCraftingTimeLength[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t ResettingTimeLength[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t DefaultCraftingSpeedMultiplier[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverCraftingLootTierKey[0x4]; // 0x02A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bTakeItemsAtCraftingStart; // 0x02AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02AD
    float DecayRate; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGiveIngredientsToCraftingObject; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    // 0x02B4 BoolProperty bGiveIngredientsToInstigator (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x02B5
    std::uint8_t IngredientSpawnOffset[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bGiveResultToInstigator; // 0x02D0 (Size: 0x1, Type: BoolProperty)
    // 0x02D0 BoolProperty bGiveToCraftingObject (shared storage)
    // 0x02D0 BoolProperty bPrioritizeSmallestIngredientStacks (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x02D1
    std::uint8_t OwnerCraftingAbility[0x20]; // 0x02D8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t WhileCraftingAbility[0x20]; // 0x02F8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t InstigatorWhileCraftingAbility[0x20]; // 0x0318 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bScaleMultiCraftingTime; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0339
    std::uint8_t CraftingFailedTags[0x128]; // 0x0340 (Size: 0x128, Type: StructProperty)
    std::uint8_t IngredientsInventoryGroupTag[0x30]; // 0x0468 (Size: 0x30, Type: StructProperty)
    std::uint8_t FreeCraftingEnabled; // 0x0498 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCraftingObjectComponent, CraftingObjectStateChanged) == 192, "Offset mismatch for UCraftingObjectComponent::CraftingObjectStateChanged");
static_assert(offsetof(UCraftingObjectComponent, OnFormulaCraftableChanged) == 208, "Offset mismatch for UCraftingObjectComponent::OnFormulaCraftableChanged");
static_assert(offsetof(UCraftingObjectComponent, OnCraftingSuccess) == 224, "Offset mismatch for UCraftingObjectComponent::OnCraftingSuccess");
static_assert(offsetof(UCraftingObjectComponent, OnCraftingAdditionalValidationCheck) == 240, "Offset mismatch for UCraftingObjectComponent::OnCraftingAdditionalValidationCheck");
static_assert(offsetof(UCraftingObjectComponent, OnBuildingUsingChestResources) == 280, "Offset mismatch for UCraftingObjectComponent::OnBuildingUsingChestResources");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectRepStateData) == 296, "Offset mismatch for UCraftingObjectComponent::CraftingObjectRepStateData");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectServerStateData) == 320, "Offset mismatch for UCraftingObjectComponent::CraftingObjectServerStateData");
static_assert(offsetof(UCraftingObjectComponent, LastCraftedItemFormulaRow) == 336, "Offset mismatch for UCraftingObjectComponent::LastCraftedItemFormulaRow");
static_assert(offsetof(UCraftingObjectComponent, LastIngredientStringForAnalytics) == 344, "Offset mismatch for UCraftingObjectComponent::LastIngredientStringForAnalytics");
static_assert(offsetof(UCraftingObjectComponent, LastFormulaStringForAnalytics) == 360, "Offset mismatch for UCraftingObjectComponent::LastFormulaStringForAnalytics");
static_assert(offsetof(UCraftingObjectComponent, LastResultsStringForAnalytics) == 376, "Offset mismatch for UCraftingObjectComponent::LastResultsStringForAnalytics");
static_assert(offsetof(UCraftingObjectComponent, WhileCraftingAbilitySpecHandle) == 392, "Offset mismatch for UCraftingObjectComponent::WhileCraftingAbilitySpecHandle");
static_assert(offsetof(UCraftingObjectComponent, OwnerCraftingAbilitySpecHandle) == 416, "Offset mismatch for UCraftingObjectComponent::OwnerCraftingAbilitySpecHandle");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectTag) == 440, "Offset mismatch for UCraftingObjectComponent::CraftingObjectTag");
static_assert(offsetof(UCraftingObjectComponent, CraftingObjectTags) == 448, "Offset mismatch for UCraftingObjectComponent::CraftingObjectTags");
static_assert(offsetof(UCraftingObjectComponent, CraftingTimeLength) == 480, "Offset mismatch for UCraftingObjectComponent::CraftingTimeLength");
static_assert(offsetof(UCraftingObjectComponent, ReadyTimeLength) == 520, "Offset mismatch for UCraftingObjectComponent::ReadyTimeLength");
static_assert(offsetof(UCraftingObjectComponent, OverCraftingTimeLength) == 560, "Offset mismatch for UCraftingObjectComponent::OverCraftingTimeLength");
static_assert(offsetof(UCraftingObjectComponent, ResettingTimeLength) == 600, "Offset mismatch for UCraftingObjectComponent::ResettingTimeLength");
static_assert(offsetof(UCraftingObjectComponent, DefaultCraftingSpeedMultiplier) == 640, "Offset mismatch for UCraftingObjectComponent::DefaultCraftingSpeedMultiplier");
static_assert(offsetof(UCraftingObjectComponent, OverCraftingLootTierKey) == 680, "Offset mismatch for UCraftingObjectComponent::OverCraftingLootTierKey");
static_assert(offsetof(UCraftingObjectComponent, bTakeItemsAtCraftingStart) == 684, "Offset mismatch for UCraftingObjectComponent::bTakeItemsAtCraftingStart");
static_assert(offsetof(UCraftingObjectComponent, DecayRate) == 688, "Offset mismatch for UCraftingObjectComponent::DecayRate");
static_assert(offsetof(UCraftingObjectComponent, bGiveIngredientsToCraftingObject) == 692, "Offset mismatch for UCraftingObjectComponent::bGiveIngredientsToCraftingObject");
static_assert(offsetof(UCraftingObjectComponent, IngredientSpawnOffset) == 696, "Offset mismatch for UCraftingObjectComponent::IngredientSpawnOffset");
static_assert(offsetof(UCraftingObjectComponent, bGiveResultToInstigator) == 720, "Offset mismatch for UCraftingObjectComponent::bGiveResultToInstigator");
static_assert(offsetof(UCraftingObjectComponent, OwnerCraftingAbility) == 728, "Offset mismatch for UCraftingObjectComponent::OwnerCraftingAbility");
static_assert(offsetof(UCraftingObjectComponent, WhileCraftingAbility) == 760, "Offset mismatch for UCraftingObjectComponent::WhileCraftingAbility");
static_assert(offsetof(UCraftingObjectComponent, InstigatorWhileCraftingAbility) == 792, "Offset mismatch for UCraftingObjectComponent::InstigatorWhileCraftingAbility");
static_assert(offsetof(UCraftingObjectComponent, bScaleMultiCraftingTime) == 824, "Offset mismatch for UCraftingObjectComponent::bScaleMultiCraftingTime");
static_assert(offsetof(UCraftingObjectComponent, CraftingFailedTags) == 832, "Offset mismatch for UCraftingObjectComponent::CraftingFailedTags");
static_assert(offsetof(UCraftingObjectComponent, IngredientsInventoryGroupTag) == 1128, "Offset mismatch for UCraftingObjectComponent::IngredientsInventoryGroupTag");
static_assert(offsetof(UCraftingObjectComponent, FreeCraftingEnabled) == 1176, "Offset mismatch for UCraftingObjectComponent::FreeCraftingEnabled");

// /Script/CraftingRuntime.FortContextualTutorial_CraftingComplete
// Kind: Class; super: FortContextualTutorial
class UFortContextualTutorial_CraftingComplete
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_CraftingComplete, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_CraftingComplete::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_CraftingComplete, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_CraftingComplete::MarkerText");
static_assert(offsetof(UFortContextualTutorial_CraftingComplete, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_CraftingComplete::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_CraftingComplete, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_CraftingComplete::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_CraftingComplete, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_CraftingComplete::OwnerController");

// /Script/CraftingRuntime.FortContextualTutorial_CraftingReady
// Kind: Class; super: FortContextualTutorial
class UFortContextualTutorial_CraftingReady
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_CraftingReady, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_CraftingReady::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_CraftingReady, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_CraftingReady::MarkerText");
static_assert(offsetof(UFortContextualTutorial_CraftingReady, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_CraftingReady::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_CraftingReady, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_CraftingReady::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_CraftingReady, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_CraftingReady::OwnerController");

// /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen
// Kind: Class; super: FortContextualTutorial
class UFortContextualTutorial_CraftingTabOpen
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TWeakObjectPtr<void> WeakMarkerActor; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MarkerText[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> MarkerHighlightComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    void* TutorialDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* OwnerController; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContextualTutorial_CraftingTabOpen, WeakMarkerActor) == 168, "Offset mismatch for UFortContextualTutorial_CraftingTabOpen::WeakMarkerActor");
static_assert(offsetof(UFortContextualTutorial_CraftingTabOpen, MarkerText) == 176, "Offset mismatch for UFortContextualTutorial_CraftingTabOpen::MarkerText");
static_assert(offsetof(UFortContextualTutorial_CraftingTabOpen, MarkerHighlightComponent) == 192, "Offset mismatch for UFortContextualTutorial_CraftingTabOpen::MarkerHighlightComponent");
static_assert(offsetof(UFortContextualTutorial_CraftingTabOpen, TutorialDefinition) == 200, "Offset mismatch for UFortContextualTutorial_CraftingTabOpen::TutorialDefinition");
static_assert(offsetof(UFortContextualTutorial_CraftingTabOpen, OwnerController) == 216, "Offset mismatch for UFortContextualTutorial_CraftingTabOpen::OwnerController");

// /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_CraftingNetworkEvents
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnCraftingSuccess; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortControllerComponent_CraftingNetworkEvents, OnCraftingSuccess) == 200, "Offset mismatch for UFortControllerComponent_CraftingNetworkEvents::OnCraftingSuccess");

// /Script/CraftingRuntime.FortGameStateComponent_Crafting
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_Crafting
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CraftingFormulaRegistryType[0x4]; // 0x00C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t CraftingIngredientsUIDataRegistryType[0x5C]; // 0x00C4 (Size: 0x5C, Type: StructProperty)
    TArray<void*> CraftingResultsList; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_Crafting, CraftingFormulaRegistryType) == 192, "Offset mismatch for UFortGameStateComponent_Crafting::CraftingFormulaRegistryType");
static_assert(offsetof(UFortGameStateComponent_Crafting, CraftingIngredientsUIDataRegistryType) == 196, "Offset mismatch for UFortGameStateComponent_Crafting::CraftingIngredientsUIDataRegistryType");
static_assert(offsetof(UFortGameStateComponent_Crafting, CraftingResultsList) == 288, "Offset mismatch for UFortGameStateComponent_Crafting::CraftingResultsList");

// /Script/CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_Crafting
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* LastPickupItemDef; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* LastFocusedItemDef; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LastTargetFormulaName[0x4]; // 0x00F0 (Size: 0x4, Type: NameProperty)
    float ContextualCraftingInteractDuration; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachedInteractionType; // 0x00F8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CachedInteractionBeingAttempted; // 0x00F9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, LastPickupItemDef) == 224, "Offset mismatch for UFortPickupInteractOverrideComponent_Crafting::LastPickupItemDef");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, LastFocusedItemDef) == 232, "Offset mismatch for UFortPickupInteractOverrideComponent_Crafting::LastFocusedItemDef");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, LastTargetFormulaName) == 240, "Offset mismatch for UFortPickupInteractOverrideComponent_Crafting::LastTargetFormulaName");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, ContextualCraftingInteractDuration) == 244, "Offset mismatch for UFortPickupInteractOverrideComponent_Crafting::ContextualCraftingInteractDuration");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, CachedInteractionType) == 248, "Offset mismatch for UFortPickupInteractOverrideComponent_Crafting::CachedInteractionType");
static_assert(offsetof(UFortPickupInteractOverrideComponent_Crafting, CachedInteractionBeingAttempted) == 249, "Offset mismatch for UFortPickupInteractOverrideComponent_Crafting::CachedInteractionBeingAttempted");
