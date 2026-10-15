/**
 * decamp dumper generated SDK
 * Package: /Script/JunoComponentCrafting
 */
#pragma once
#include "Basic.h"

// /Script/JunoComponentCrafting.JunoBasicCraftingRequest
// Kind: ScriptStruct; super: none
struct FJunoBasicCraftingRequest
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CraftingObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName CraftingFormulaName; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> Ingredients; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeNearbyInventories; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoBasicCraftingRequest, Instigator) == 0, "Offset mismatch for FJunoBasicCraftingRequest::Instigator");
static_assert(offsetof(FJunoBasicCraftingRequest, CraftingObject) == 8, "Offset mismatch for FJunoBasicCraftingRequest::CraftingObject");
static_assert(offsetof(FJunoBasicCraftingRequest, CraftingFormulaName) == 16, "Offset mismatch for FJunoBasicCraftingRequest::CraftingFormulaName");
static_assert(offsetof(FJunoBasicCraftingRequest, Ingredients) == 24, "Offset mismatch for FJunoBasicCraftingRequest::Ingredients");
static_assert(offsetof(FJunoBasicCraftingRequest, bIncludeNearbyInventories) == 40, "Offset mismatch for FJunoBasicCraftingRequest::bIncludeNearbyInventories");

// /Script/JunoComponentCrafting.JunoBasicCraftingRequestIngredient
// Kind: ScriptStruct; super: none
struct FJunoBasicCraftingRequestIngredient
{
public:
    void* Ingredient; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoBasicCraftingRequestIngredient, Ingredient) == 0, "Offset mismatch for FJunoBasicCraftingRequestIngredient::Ingredient");

// /Script/JunoComponentCrafting.JunoBiomeIngredientsData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBiomeIngredientsData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Biomes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Ingredients[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoBiomeIngredientsData, Biomes) == 8, "Offset mismatch for FJunoBiomeIngredientsData::Biomes");
static_assert(offsetof(FJunoBiomeIngredientsData, Ingredients) == 24, "Offset mismatch for FJunoBiomeIngredientsData::Ingredients");

// /Script/JunoComponentCrafting.JunoBoostStatDefinition
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBoostStatDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StatTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Calculations[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Minimum[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    std::uint8_t Maximum[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    TArray<void*> StatAttributes; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCompundStatAttributesWithBoostStatValues; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    // 0x00A0 BoolProperty bInverserAggregateStatModifications (shared storage)
};

static_assert(offsetof(FJunoBoostStatDefinition, StatTag) == 8, "Offset mismatch for FJunoBoostStatDefinition::StatTag");
static_assert(offsetof(FJunoBoostStatDefinition, bEnabled) == 12, "Offset mismatch for FJunoBoostStatDefinition::bEnabled");
static_assert(offsetof(FJunoBoostStatDefinition, DisplayName) == 16, "Offset mismatch for FJunoBoostStatDefinition::DisplayName");
static_assert(offsetof(FJunoBoostStatDefinition, Calculations) == 32, "Offset mismatch for FJunoBoostStatDefinition::Calculations");
static_assert(offsetof(FJunoBoostStatDefinition, Minimum) == 64, "Offset mismatch for FJunoBoostStatDefinition::Minimum");
static_assert(offsetof(FJunoBoostStatDefinition, Maximum) == 104, "Offset mismatch for FJunoBoostStatDefinition::Maximum");
static_assert(offsetof(FJunoBoostStatDefinition, StatAttributes) == 144, "Offset mismatch for FJunoBoostStatDefinition::StatAttributes");
static_assert(offsetof(FJunoBoostStatDefinition, bCompundStatAttributesWithBoostStatValues) == 160, "Offset mismatch for FJunoBoostStatDefinition::bCompundStatAttributesWithBoostStatValues");

// /Script/JunoComponentCrafting.JunoBoostStatStatic
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBoostStatStatic
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ItemDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StatTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    float FallbackValue; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoBoostStatStatic, ItemDefinition) == 8, "Offset mismatch for FJunoBoostStatStatic::ItemDefinition");
static_assert(offsetof(FJunoBoostStatStatic, StatTag) == 40, "Offset mismatch for FJunoBoostStatStatic::StatTag");
static_assert(offsetof(FJunoBoostStatStatic, FallbackValue) == 44, "Offset mismatch for FJunoBoostStatStatic::FallbackValue");

// /Script/JunoComponentCrafting.JunoBoostStatValue
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBoostStatValue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BoostDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t StatTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    float StatValue; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoBoostStatValue, BoostDefinition) == 8, "Offset mismatch for FJunoBoostStatValue::BoostDefinition");
static_assert(offsetof(FJunoBoostStatValue, StatTag) == 40, "Offset mismatch for FJunoBoostStatValue::StatTag");
static_assert(offsetof(FJunoBoostStatValue, StatValue) == 44, "Offset mismatch for FJunoBoostStatValue::StatValue");

// /Script/JunoComponentCrafting.JunoBoostedItemName
// Kind: ScriptStruct; super: TableRowBase
struct FJunoBoostedItemName
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ItemDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BoostDefinition[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    FText DisplayName; // 0x0050 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoBoostedItemName, ItemDefinition) == 8, "Offset mismatch for FJunoBoostedItemName::ItemDefinition");
static_assert(offsetof(FJunoBoostedItemName, BoostDefinition) == 40, "Offset mismatch for FJunoBoostedItemName::BoostDefinition");
static_assert(offsetof(FJunoBoostedItemName, bEnabled) == 72, "Offset mismatch for FJunoBoostedItemName::bEnabled");
static_assert(offsetof(FJunoBoostedItemName, DisplayName) == 80, "Offset mismatch for FJunoBoostedItemName::DisplayName");

// /Script/JunoComponentCrafting.JunoComponentCraftingOverrideCosmeticEntry
// Kind: ScriptStruct; super: none
struct FJunoComponentCraftingOverrideCosmeticEntry
{
public:
    std::uint8_t PartTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> Alteration; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoComponentCraftingOverrideCosmeticEntry, PartTag) == 0, "Offset mismatch for FJunoComponentCraftingOverrideCosmeticEntry::PartTag");
static_assert(offsetof(FJunoComponentCraftingOverrideCosmeticEntry, Alteration) == 8, "Offset mismatch for FJunoComponentCraftingOverrideCosmeticEntry::Alteration");

// /Script/JunoComponentCrafting.JunoComponentCraftingPartIngredients
// Kind: ScriptStruct; super: none
struct FJunoComponentCraftingPartIngredients
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCrafting.JunoComponentCraftingRequest
// Kind: ScriptStruct; super: none
struct FJunoComponentCraftingRequest
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CraftingObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName MainCraftingFormulaName; // 0x0010 (Size: 0x8, Type: NameProperty)
    TArray<void*> Parts; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeNearbyInventories; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoComponentCraftingRequest, Instigator) == 0, "Offset mismatch for FJunoComponentCraftingRequest::Instigator");
static_assert(offsetof(FJunoComponentCraftingRequest, CraftingObject) == 8, "Offset mismatch for FJunoComponentCraftingRequest::CraftingObject");
static_assert(offsetof(FJunoComponentCraftingRequest, MainCraftingFormulaName) == 16, "Offset mismatch for FJunoComponentCraftingRequest::MainCraftingFormulaName");
static_assert(offsetof(FJunoComponentCraftingRequest, Parts) == 24, "Offset mismatch for FJunoComponentCraftingRequest::Parts");
static_assert(offsetof(FJunoComponentCraftingRequest, bIncludeNearbyInventories) == 40, "Offset mismatch for FJunoComponentCraftingRequest::bIncludeNearbyInventories");

// /Script/JunoComponentCrafting.JunoComponentCraftingRequestPart
// Kind: ScriptStruct; super: none
struct FJunoComponentCraftingRequestPart
{
public:
    std::uint8_t PartTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Ingredient; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoComponentCraftingRequestPart, PartTag) == 0, "Offset mismatch for FJunoComponentCraftingRequestPart::PartTag");
static_assert(offsetof(FJunoComponentCraftingRequestPart, Ingredient) == 8, "Offset mismatch for FJunoComponentCraftingRequestPart::Ingredient");

// /Script/JunoComponentCrafting.JunoComponentCraftingState
// Kind: ScriptStruct; super: none
struct FJunoComponentCraftingState
{
public:
    std::uint8_t Request[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoComponentCraftingState, Request) == 0, "Offset mismatch for FJunoComponentCraftingState::Request");

// /Script/JunoComponentCrafting.JunoComponentItemMigration
// Kind: ScriptStruct; super: TableRowBase
struct FJunoComponentItemMigration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MigrationIDTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t OldItemTemplateID[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t NewItemDefinition[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NewAlterationsRow[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t bRestoreDurability; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoComponentItemMigration, MigrationIDTag) == 8, "Offset mismatch for FJunoComponentItemMigration::MigrationIDTag");
static_assert(offsetof(FJunoComponentItemMigration, OldItemTemplateID) == 12, "Offset mismatch for FJunoComponentItemMigration::OldItemTemplateID");
static_assert(offsetof(FJunoComponentItemMigration, bEnabled) == 16, "Offset mismatch for FJunoComponentItemMigration::bEnabled");
static_assert(offsetof(FJunoComponentItemMigration, NewItemDefinition) == 24, "Offset mismatch for FJunoComponentItemMigration::NewItemDefinition");
static_assert(offsetof(FJunoComponentItemMigration, NewAlterationsRow) == 56, "Offset mismatch for FJunoComponentItemMigration::NewAlterationsRow");
static_assert(offsetof(FJunoComponentItemMigration, bRestoreDurability) == 60, "Offset mismatch for FJunoComponentItemMigration::bRestoreDurability");

// /Script/JunoComponentCrafting.JunoCraftingComponentIngredients
// Kind: ScriptStruct; super: none
struct FJunoCraftingComponentIngredients
{
public:
    TArray<void*> Ingredients; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCraftingComponentIngredients, Ingredients) == 0, "Offset mismatch for FJunoCraftingComponentIngredients::Ingredients");

// /Script/JunoComponentCrafting.JunoCraftingComponentPartKey
// Kind: ScriptStruct; super: none
struct FJunoCraftingComponentPartKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCrafting.JunoCraftingPartFormula
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCraftingPartFormula
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FormulaName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t PartTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t RequiredIngredients[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::int32_t RequiredIngredientCount; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    std::uint8_t OutputBaseDefinition[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> OutputAlterationDefinitions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Attributes[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCraftingPartFormula, FormulaName) == 8, "Offset mismatch for FJunoCraftingPartFormula::FormulaName");
static_assert(offsetof(FJunoCraftingPartFormula, PartTag) == 12, "Offset mismatch for FJunoCraftingPartFormula::PartTag");
static_assert(offsetof(FJunoCraftingPartFormula, bEnabled) == 16, "Offset mismatch for FJunoCraftingPartFormula::bEnabled");
static_assert(offsetof(FJunoCraftingPartFormula, RequiredIngredients) == 24, "Offset mismatch for FJunoCraftingPartFormula::RequiredIngredients");
static_assert(offsetof(FJunoCraftingPartFormula, RequiredIngredientCount) == 56, "Offset mismatch for FJunoCraftingPartFormula::RequiredIngredientCount");
static_assert(offsetof(FJunoCraftingPartFormula, OutputBaseDefinition) == 64, "Offset mismatch for FJunoCraftingPartFormula::OutputBaseDefinition");
static_assert(offsetof(FJunoCraftingPartFormula, OutputAlterationDefinitions) == 96, "Offset mismatch for FJunoCraftingPartFormula::OutputAlterationDefinitions");
static_assert(offsetof(FJunoCraftingPartFormula, Attributes) == 112, "Offset mismatch for FJunoCraftingPartFormula::Attributes");

// /Script/JunoComponentCrafting.JunoItemComponentData_OverrideComponentCraftingCosmetics
// Kind: ScriptStruct; super: FortItemComponentData
struct FJunoItemComponentData_OverrideComponentCraftingCosmetics
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoItemComponentData_OverrideComponentCraftingCosmetics, Data) == 0, "Offset mismatch for FJunoItemComponentData_OverrideComponentCraftingCosmetics::Data");

// /Script/JunoComponentCrafting.JunoItemCorrespondenceData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoItemCorrespondenceData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceItemDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AlterationInitializationMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t TargetItemDefinition[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    FName FormulaName; // 0x0050 (Size: 0x8, Type: NameProperty)
    TSet<void*> ExplicitAlterationFormulaNames; // 0x0058 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FJunoItemCorrespondenceData, SourceItemDefinition) == 8, "Offset mismatch for FJunoItemCorrespondenceData::SourceItemDefinition");
static_assert(offsetof(FJunoItemCorrespondenceData, AlterationInitializationMode) == 40, "Offset mismatch for FJunoItemCorrespondenceData::AlterationInitializationMode");
static_assert(offsetof(FJunoItemCorrespondenceData, TargetItemDefinition) == 48, "Offset mismatch for FJunoItemCorrespondenceData::TargetItemDefinition");
static_assert(offsetof(FJunoItemCorrespondenceData, FormulaName) == 80, "Offset mismatch for FJunoItemCorrespondenceData::FormulaName");
static_assert(offsetof(FJunoItemCorrespondenceData, ExplicitAlterationFormulaNames) == 88, "Offset mismatch for FJunoItemCorrespondenceData::ExplicitAlterationFormulaNames");

// /Script/JunoComponentCrafting.JunoItemPartData
// Kind: ScriptStruct; super: none
struct FJunoItemPartData
{
public:
    std::uint8_t PartTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t SlotIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    void* ItemDef; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoItemPartData, PartTag) == 0, "Offset mismatch for FJunoItemPartData::PartTag");
static_assert(offsetof(FJunoItemPartData, SlotIndex) == 4, "Offset mismatch for FJunoItemPartData::SlotIndex");
static_assert(offsetof(FJunoItemPartData, ItemDef) == 8, "Offset mismatch for FJunoItemPartData::ItemDef");

// /Script/JunoComponentCrafting.JunoLootAlteration
// Kind: ScriptStruct; super: none
struct FJunoLootAlteration
{
public:
    std::uint8_t PartTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Parts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLootAlteration, PartTag) == 0, "Offset mismatch for FJunoLootAlteration::PartTag");
static_assert(offsetof(FJunoLootAlteration, Parts) == 8, "Offset mismatch for FJunoLootAlteration::Parts");

// /Script/JunoComponentCrafting.JunoLootAlterationData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoLootAlterationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Alterations; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLootAlterationData, Alterations) == 8, "Offset mismatch for FJunoLootAlterationData::Alterations");

// /Script/JunoComponentCrafting.JunoRecipeKnowledgeMigration
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRecipeKnowledgeMigration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    FName NewRecipeName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoRecipeKnowledgeMigration, bEnabled) == 8, "Offset mismatch for FJunoRecipeKnowledgeMigration::bEnabled");
static_assert(offsetof(FJunoRecipeKnowledgeMigration, NewRecipeName) == 12, "Offset mismatch for FJunoRecipeKnowledgeMigration::NewRecipeName");

// /Script/JunoComponentCrafting.JunoWeightedPart
// Kind: ScriptStruct; super: none
struct FJunoWeightedPart
{
public:
    FName PartFormula; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> AlterationDefinitions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float Weight; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t TagQuery[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoWeightedPart, PartFormula) == 0, "Offset mismatch for FJunoWeightedPart::PartFormula");
static_assert(offsetof(FJunoWeightedPart, AlterationDefinitions) == 8, "Offset mismatch for FJunoWeightedPart::AlterationDefinitions");
static_assert(offsetof(FJunoWeightedPart, Weight) == 24, "Offset mismatch for FJunoWeightedPart::Weight");
static_assert(offsetof(FJunoWeightedPart, TagQuery) == 32, "Offset mismatch for FJunoWeightedPart::TagQuery");

// /Script/JunoComponentCrafting.FortAutomationRpcManager_JunoComponentCrafting
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_JunoComponentCrafting
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCrafting.JunoComponentCraftingAnalytics
// Kind: Class; super: Object
class UJunoComponentCraftingAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCrafting.JunoComponentCraftingControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoComponentCraftingControllerComponent
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

static_assert(offsetof(UJunoComponentCraftingControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoComponentCraftingControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoComponentCraftingControllerComponent::ComponentTags");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoComponentCraftingControllerComponent::AssetUserData");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoComponentCraftingControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoComponentCraftingControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoComponentCraftingControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoComponentCraftingControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoComponentCraftingControllerComponent::CreationMethod");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoComponentCraftingControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoComponentCraftingControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoComponentCraftingControllerComponent::OnComponentDeactivated");

// /Script/JunoComponentCrafting.JunoComponentCraftingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoComponentCraftingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCrafting.JunoComponentCraftingMigrator
// Kind: Class; super: PlayspaceComponent
class UJunoComponentCraftingMigrator
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

static_assert(offsetof(UJunoComponentCraftingMigrator, PrimaryComponentTick) == 56, "Offset mismatch for UJunoComponentCraftingMigrator::PrimaryComponentTick");
static_assert(offsetof(UJunoComponentCraftingMigrator, ComponentTags) == 104, "Offset mismatch for UJunoComponentCraftingMigrator::ComponentTags");
static_assert(offsetof(UJunoComponentCraftingMigrator, AssetUserData) == 120, "Offset mismatch for UJunoComponentCraftingMigrator::AssetUserData");
static_assert(offsetof(UJunoComponentCraftingMigrator, UCSSerializationIndex) == 144, "Offset mismatch for UJunoComponentCraftingMigrator::UCSSerializationIndex");
static_assert(offsetof(UJunoComponentCraftingMigrator, bNetAddressable) == 152, "Offset mismatch for UJunoComponentCraftingMigrator::bNetAddressable");
static_assert(offsetof(UJunoComponentCraftingMigrator, bAutoActivate) == 154, "Offset mismatch for UJunoComponentCraftingMigrator::bAutoActivate");
static_assert(offsetof(UJunoComponentCraftingMigrator, bIsEditorOnly) == 155, "Offset mismatch for UJunoComponentCraftingMigrator::bIsEditorOnly");
static_assert(offsetof(UJunoComponentCraftingMigrator, CreationMethod) == 185, "Offset mismatch for UJunoComponentCraftingMigrator::CreationMethod");
static_assert(offsetof(UJunoComponentCraftingMigrator, OnComponentActivated) == 186, "Offset mismatch for UJunoComponentCraftingMigrator::OnComponentActivated");
static_assert(offsetof(UJunoComponentCraftingMigrator, OnComponentDeactivated) == 187, "Offset mismatch for UJunoComponentCraftingMigrator::OnComponentDeactivated");

// /Script/JunoComponentCrafting.JunoCraftingCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoCraftingCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoComponentCrafting.JunoGameStateComponent_ComponentCrafting
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_ComponentCrafting
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    TMap<void*, void*> IngredientsLookup; // 0x0148 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoGameStateComponent_ComponentCrafting, IngredientsLookup) == 328, "Offset mismatch for UJunoGameStateComponent_ComponentCrafting::IngredientsLookup");

// /Script/JunoComponentCrafting.JunoGameStateComponent_ComponentCraftingOverrides
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_ComponentCraftingOverrides
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

static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_ComponentCraftingOverrides, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_ComponentCraftingOverrides::OnComponentDeactivated");

// /Script/JunoComponentCrafting.JunoGameStateComponent_LootModifier
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_LootModifier
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

static_assert(offsetof(UJunoGameStateComponent_LootModifier, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_LootModifier::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_LootModifier::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_LootModifier::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_LootModifier::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_LootModifier::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_LootModifier::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_LootModifier::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_LootModifier::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_LootModifier::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_LootModifier, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_LootModifier::OnComponentDeactivated");

// /Script/JunoComponentCrafting.JunoPartDataComponent
// Kind: Class; super: ActorComponent
class UJunoPartDataComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> PartData; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPartDataComponent, PartData) == 192, "Offset mismatch for UJunoPartDataComponent::PartData");

// /Script/JunoComponentCrafting.JunoUpgradeCraftingComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoUpgradeCraftingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FName FormulaName; // 0x00C0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoUpgradeCraftingComponent, FormulaName) == 192, "Offset mismatch for UJunoUpgradeCraftingComponent::FormulaName");
