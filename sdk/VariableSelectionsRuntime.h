/**
 * decamp dumper generated SDK
 * Package: /Script/VariableSelectionsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VariableSelectionsRuntime.VarRow
// Kind: ScriptStruct; super: TableRowBase
struct FVarRow
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VariableSelectionsRuntime.VarRow_ActorClass
// Kind: ScriptStruct; super: VarRow
struct FVarRow_ActorClass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftClassPtr<void> Value; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FVarRow_ActorClass, Value) == 8, "Offset mismatch for FVarRow_ActorClass::Value");

// /Script/VariableSelectionsRuntime.VarRow_Boolean
// Kind: ScriptStruct; super: VarRow
struct FVarRow_Boolean
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bValue; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVarRow_Boolean, bValue) == 8, "Offset mismatch for FVarRow_Boolean::bValue");

// /Script/VariableSelectionsRuntime.VarRow_Float
// Kind: ScriptStruct; super: VarRow
struct FVarRow_Float
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVarRow_Float, Value) == 8, "Offset mismatch for FVarRow_Float::Value");

// /Script/VariableSelectionsRuntime.VarRow_GameplayTag
// Kind: ScriptStruct; super: VarRow
struct FVarRow_GameplayTag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVarRow_GameplayTag, Value) == 8, "Offset mismatch for FVarRow_GameplayTag::Value");

// /Script/VariableSelectionsRuntime.VarRow_GameplayTagContainer
// Kind: ScriptStruct; super: VarRow
struct FVarRow_GameplayTagContainer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVarRow_GameplayTagContainer, Value) == 8, "Offset mismatch for FVarRow_GameplayTagContainer::Value");

// /Script/VariableSelectionsRuntime.VarRow_Integer
// Kind: ScriptStruct; super: VarRow
struct FVarRow_Integer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Value; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVarRow_Integer, Value) == 8, "Offset mismatch for FVarRow_Integer::Value");

// /Script/VariableSelectionsRuntime.VarRow_ItemDefinition
// Kind: ScriptStruct; super: VarRow
struct FVarRow_ItemDefinition
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> Value; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVarRow_ItemDefinition, Value) == 8, "Offset mismatch for FVarRow_ItemDefinition::Value");

// /Script/VariableSelectionsRuntime.VarRow_String
// Kind: ScriptStruct; super: VarRow
struct FVarRow_String
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Value; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVarRow_String, Value) == 8, "Offset mismatch for FVarRow_String::Value");

// /Script/VariableSelectionsRuntime.VarRow_TagQuery
// Kind: ScriptStruct; super: VarRow
struct FVarRow_TagQuery
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVarRow_TagQuery, Value) == 8, "Offset mismatch for FVarRow_TagQuery::Value");

// /Script/VariableSelectionsRuntime.Variable
// Kind: ScriptStruct; super: none
struct FVariable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t VarName[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable, VarName) == 8, "Offset mismatch for FVariable::VarName");

// /Script/VariableSelectionsRuntime.VariableCollectionRow
// Kind: ScriptStruct; super: TableRowBase
struct FVariableCollectionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Variables; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVariableCollectionRow, Variables) == 8, "Offset mismatch for FVariableCollectionRow::Variables");

// /Script/VariableSelectionsRuntime.VariableCollectionSelection
// Kind: ScriptStruct; super: none
struct FVariableCollectionSelection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ValueChoiceTable[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t SelectionQuery[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableCollectionSelection, ValueChoiceTable) == 8, "Offset mismatch for FVariableCollectionSelection::ValueChoiceTable");
static_assert(offsetof(FVariableCollectionSelection, SelectionQuery) == 56, "Offset mismatch for FVariableCollectionSelection::SelectionQuery");

// /Script/VariableSelectionsRuntime.VariableCollectionSelectionRow
// Kind: ScriptStruct; super: TableRowBase
struct FVariableCollectionSelectionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Variables; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Tags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldConditionDefinition[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::int32_t Priority; // 0x0060 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0064 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVariableCollectionSelectionRow, Variables) == 8, "Offset mismatch for FVariableCollectionSelectionRow::Variables");
static_assert(offsetof(FVariableCollectionSelectionRow, Tags) == 24, "Offset mismatch for FVariableCollectionSelectionRow::Tags");
static_assert(offsetof(FVariableCollectionSelectionRow, WorldConditionDefinition) == 56, "Offset mismatch for FVariableCollectionSelectionRow::WorldConditionDefinition");
static_assert(offsetof(FVariableCollectionSelectionRow, Priority) == 96, "Offset mismatch for FVariableCollectionSelectionRow::Priority");
static_assert(offsetof(FVariableCollectionSelectionRow, Weight) == 100, "Offset mismatch for FVariableCollectionSelectionRow::Weight");

// /Script/VariableSelectionsRuntime.VariableSelections
// Kind: ScriptStruct; super: none
struct FVariableSelections
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t VarName[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t SelectionQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t bShowVariableName; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVariableSelections, VarName) == 8, "Offset mismatch for FVariableSelections::VarName");
static_assert(offsetof(FVariableSelections, SelectionQuery) == 16, "Offset mismatch for FVariableSelections::SelectionQuery");
static_assert(offsetof(FVariableSelections, bShowVariableName) == 88, "Offset mismatch for FVariableSelections::bShowVariableName");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow
// Kind: ScriptStruct; super: TableRowBase
struct FVariableSelectionsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t WorldConditionDefinition[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::int32_t Priority; // 0x0050 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVariableSelectionsRow, Tags) == 8, "Offset mismatch for FVariableSelectionsRow::Tags");
static_assert(offsetof(FVariableSelectionsRow, WorldConditionDefinition) == 40, "Offset mismatch for FVariableSelectionsRow::WorldConditionDefinition");
static_assert(offsetof(FVariableSelectionsRow, Priority) == 80, "Offset mismatch for FVariableSelectionsRow::Priority");
static_assert(offsetof(FVariableSelectionsRow, Weight) == 84, "Offset mismatch for FVariableSelectionsRow::Weight");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_ActorClass
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_ActorClass
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_ActorClass, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_ActorClass::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_Boolean
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_Boolean
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_Boolean, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_Boolean::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_Float
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_Float
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_Float, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_Float::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_GameplayTag
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_GameplayTag
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_GameplayTag, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_GameplayTag::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_GameplayTagContainer
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_GameplayTagContainer
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_GameplayTagContainer, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_GameplayTagContainer::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_Integer
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_Integer
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_Integer, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_Integer::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_ItemDefinition
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_ItemDefinition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_ItemDefinition, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_ItemDefinition::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_String
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_String
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_String, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_String::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsRow_TagQuery
// Kind: ScriptStruct; super: VariableSelectionsRow
struct FVariableSelectionsRow_TagQuery
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelectionsRow_TagQuery, RowValue) == 88, "Offset mismatch for FVariableSelectionsRow_TagQuery::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelections_ActorClass
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_ActorClass
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_ActorClass, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_ActorClass::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_Boolean
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_Boolean
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_Boolean, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_Boolean::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_Float
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_Float
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_Float, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_Float::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_GameplayTag
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_GameplayTag
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_GameplayTag, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_GameplayTag::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_GameplayTagContainer
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_GameplayTagContainer
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_GameplayTagContainer, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_GameplayTagContainer::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_Integer
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_Integer
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_Integer, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_Integer::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_ItemDefinition
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_ItemDefinition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_ItemDefinition, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_ItemDefinition::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_String
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_String
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_String, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_String::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.VariableSelections_TagQuery
// Kind: ScriptStruct; super: VariableSelections
struct FVariableSelections_TagQuery
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t ValueChoiceTable[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariableSelections_TagQuery, ValueChoiceTable) == 96, "Offset mismatch for FVariableSelections_TagQuery::ValueChoiceTable");

// /Script/VariableSelectionsRuntime.Variable_ActorClass
// Kind: ScriptStruct; super: Variable
struct FVariable_ActorClass
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_ActorClass, RowValue) == 16, "Offset mismatch for FVariable_ActorClass::RowValue");

// /Script/VariableSelectionsRuntime.Variable_Boolean
// Kind: ScriptStruct; super: Variable
struct FVariable_Boolean
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_Boolean, RowValue) == 16, "Offset mismatch for FVariable_Boolean::RowValue");

// /Script/VariableSelectionsRuntime.Variable_Float
// Kind: ScriptStruct; super: Variable
struct FVariable_Float
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_Float, RowValue) == 16, "Offset mismatch for FVariable_Float::RowValue");

// /Script/VariableSelectionsRuntime.Variable_GameplayTag
// Kind: ScriptStruct; super: Variable
struct FVariable_GameplayTag
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_GameplayTag, RowValue) == 16, "Offset mismatch for FVariable_GameplayTag::RowValue");

// /Script/VariableSelectionsRuntime.Variable_GameplayTagContainer
// Kind: ScriptStruct; super: Variable
struct FVariable_GameplayTagContainer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_GameplayTagContainer, RowValue) == 16, "Offset mismatch for FVariable_GameplayTagContainer::RowValue");

// /Script/VariableSelectionsRuntime.Variable_Integer
// Kind: ScriptStruct; super: Variable
struct FVariable_Integer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_Integer, RowValue) == 16, "Offset mismatch for FVariable_Integer::RowValue");

// /Script/VariableSelectionsRuntime.Variable_ItemDefinition
// Kind: ScriptStruct; super: Variable
struct FVariable_ItemDefinition
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_ItemDefinition, RowValue) == 16, "Offset mismatch for FVariable_ItemDefinition::RowValue");

// /Script/VariableSelectionsRuntime.Variable_String
// Kind: ScriptStruct; super: Variable
struct FVariable_String
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_String, RowValue) == 16, "Offset mismatch for FVariable_String::RowValue");

// /Script/VariableSelectionsRuntime.Variable_TagQuery
// Kind: ScriptStruct; super: Variable
struct FVariable_TagQuery
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RowValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVariable_TagQuery, RowValue) == 16, "Offset mismatch for FVariable_TagQuery::RowValue");

// /Script/VariableSelectionsRuntime.VariableSelectionsWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UVariableSelectionsWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVariableSelectionsWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UVariableSelectionsWorldConditionSchema::ContextDataDescs");
