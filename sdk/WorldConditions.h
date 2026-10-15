/**
 * decamp dumper generated SDK
 * Package: /Script/WorldConditions
 */
#pragma once
#include "Basic.h"

// /Script/WorldConditions.WorldConditionBase
// Kind: ScriptStruct; super: none
struct FWorldConditionBase
{
public:
    std::uint8_t Pad_0000[0xB]; // 0x0000
    std::uint8_t bInvert; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t NextExpressionDepth; // 0x000D (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FWorldConditionBase, bInvert) == 11, "Offset mismatch for FWorldConditionBase::bInvert");
static_assert(offsetof(FWorldConditionBase, Operator) == 12, "Offset mismatch for FWorldConditionBase::Operator");
static_assert(offsetof(FWorldConditionBase, NextExpressionDepth) == 13, "Offset mismatch for FWorldConditionBase::NextExpressionDepth");

// /Script/WorldConditions.WorldConditionCommonActorBase
// Kind: ScriptStruct; super: WorldConditionBase
struct FWorldConditionCommonActorBase
{
public:
    std::uint8_t Pad_0000[0xB]; // 0x0000
    std::uint8_t bInvert; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t NextExpressionDepth; // 0x000D (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FWorldConditionCommonActorBase, bInvert) == 11, "Offset mismatch for FWorldConditionCommonActorBase::bInvert");
static_assert(offsetof(FWorldConditionCommonActorBase, Operator) == 12, "Offset mismatch for FWorldConditionCommonActorBase::Operator");
static_assert(offsetof(FWorldConditionCommonActorBase, NextExpressionDepth) == 13, "Offset mismatch for FWorldConditionCommonActorBase::NextExpressionDepth");

// /Script/WorldConditions.WorldConditionCommonBase
// Kind: ScriptStruct; super: WorldConditionBase
struct FWorldConditionCommonBase
{
public:
    std::uint8_t Pad_0000[0xB]; // 0x0000
    std::uint8_t bInvert; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t NextExpressionDepth; // 0x000D (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FWorldConditionCommonBase, bInvert) == 11, "Offset mismatch for FWorldConditionCommonBase::bInvert");
static_assert(offsetof(FWorldConditionCommonBase, Operator) == 12, "Offset mismatch for FWorldConditionCommonBase::Operator");
static_assert(offsetof(FWorldConditionCommonBase, NextExpressionDepth) == 13, "Offset mismatch for FWorldConditionCommonBase::NextExpressionDepth");

// /Script/WorldConditions.WorldConditionContextDataDesc
// Kind: ScriptStruct; super: none
struct FWorldConditionContextDataDesc
{
public:
    void* Struct; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FWorldConditionContextDataDesc, Struct) == 0, "Offset mismatch for FWorldConditionContextDataDesc::Struct");
static_assert(offsetof(FWorldConditionContextDataDesc, Name) == 8, "Offset mismatch for FWorldConditionContextDataDesc::Name");
static_assert(offsetof(FWorldConditionContextDataDesc, Type) == 12, "Offset mismatch for FWorldConditionContextDataDesc::Type");

// /Script/WorldConditions.WorldConditionContextDataRef
// Kind: ScriptStruct; super: none
struct FWorldConditionContextDataRef
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Index; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FWorldConditionContextDataRef, Name) == 0, "Offset mismatch for FWorldConditionContextDataRef::Name");
static_assert(offsetof(FWorldConditionContextDataRef, Index) == 4, "Offset mismatch for FWorldConditionContextDataRef::Index");

// /Script/WorldConditions.WorldConditionEditable
// Kind: ScriptStruct; super: none
struct FWorldConditionEditable
{
public:
    std::uint8_t ExpressionDepth; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Operator; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvert; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t Condition[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWorldConditionEditable, ExpressionDepth) == 0, "Offset mismatch for FWorldConditionEditable::ExpressionDepth");
static_assert(offsetof(FWorldConditionEditable, Operator) == 1, "Offset mismatch for FWorldConditionEditable::Operator");
static_assert(offsetof(FWorldConditionEditable, bInvert) == 2, "Offset mismatch for FWorldConditionEditable::bInvert");
static_assert(offsetof(FWorldConditionEditable, Condition) == 8, "Offset mismatch for FWorldConditionEditable::Condition");

// /Script/WorldConditions.WorldConditionItem
// Kind: ScriptStruct; super: none
struct FWorldConditionItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WorldConditions.WorldConditionQuery
// Kind: ScriptStruct; super: none
struct FWorldConditionQuery
{
public:
    std::uint8_t QueryDefinition[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t QueryState[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWorldConditionQuery, QueryDefinition) == 0, "Offset mismatch for FWorldConditionQuery::QueryDefinition");
static_assert(offsetof(FWorldConditionQuery, QueryState) == 40, "Offset mismatch for FWorldConditionQuery::QueryState");

// /Script/WorldConditions.WorldConditionQueryDefinition
// Kind: ScriptStruct; super: none
struct FWorldConditionQueryDefinition
{
public:
    std::uint8_t SharedDefinition[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* SchemaClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    TArray<void*> EditableConditions; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWorldConditionQueryDefinition, SharedDefinition) == 0, "Offset mismatch for FWorldConditionQueryDefinition::SharedDefinition");
static_assert(offsetof(FWorldConditionQueryDefinition, SchemaClass) == 16, "Offset mismatch for FWorldConditionQueryDefinition::SchemaClass");
static_assert(offsetof(FWorldConditionQueryDefinition, EditableConditions) == 24, "Offset mismatch for FWorldConditionQueryDefinition::EditableConditions");

// /Script/WorldConditions.WorldConditionQuerySharedDefinition
// Kind: ScriptStruct; super: none
struct FWorldConditionQuerySharedDefinition
{
public:
    std::uint8_t Conditions[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* SchemaClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FWorldConditionQuerySharedDefinition, Conditions) == 0, "Offset mismatch for FWorldConditionQuerySharedDefinition::Conditions");
static_assert(offsetof(FWorldConditionQuerySharedDefinition, SchemaClass) == 16, "Offset mismatch for FWorldConditionQuerySharedDefinition::SchemaClass");

// /Script/WorldConditions.WorldConditionQueryState
// Kind: ScriptStruct; super: none
struct FWorldConditionQueryState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Owner; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FWorldConditionQueryState, Owner) == 40, "Offset mismatch for FWorldConditionQueryState::Owner");

// /Script/WorldConditions.WorldConditionResult
// Kind: ScriptStruct; super: none
struct FWorldConditionResult
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanBeCached; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FWorldConditionResult, Value) == 0, "Offset mismatch for FWorldConditionResult::Value");
static_assert(offsetof(FWorldConditionResult, bCanBeCached) == 1, "Offset mismatch for FWorldConditionResult::bCanBeCached");

// /Script/WorldConditions.WorldConditionStateObject
// Kind: ScriptStruct; super: none
struct FWorldConditionStateObject
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FWorldConditionStateObject, Object) == 0, "Offset mismatch for FWorldConditionStateObject::Object");

// /Script/WorldConditions.WorldConditionSchema
// Kind: Class; super: Object
class UWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UWorldConditionSchema::ContextDataDescs");
