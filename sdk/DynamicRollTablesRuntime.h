/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicRollTablesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DynamicRollTablesRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
// Kind: ScriptStruct; super: none
struct FDynamicRollModifiersActivatedByPlayerTagContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicRollTablesRuntime.FortDynamicRollBaseWeightTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortDynamicRollBaseWeightTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float BaseWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    TArray<void*> ModTags; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOwningItemZerosWeight; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0029
    float MaxModifiedWeight; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MinModifiedWeight; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, ItemDefinition) == 8, "Offset mismatch for FFortDynamicRollBaseWeightTableRow::ItemDefinition");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, BaseWeight) == 16, "Offset mismatch for FFortDynamicRollBaseWeightTableRow::BaseWeight");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, ModTags) == 24, "Offset mismatch for FFortDynamicRollBaseWeightTableRow::ModTags");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, bOwningItemZerosWeight) == 40, "Offset mismatch for FFortDynamicRollBaseWeightTableRow::bOwningItemZerosWeight");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, MaxModifiedWeight) == 44, "Offset mismatch for FFortDynamicRollBaseWeightTableRow::MaxModifiedWeight");
static_assert(offsetof(FFortDynamicRollBaseWeightTableRow, MinModifiedWeight) == 48, "Offset mismatch for FFortDynamicRollBaseWeightTableRow::MinModifiedWeight");

// /Script/DynamicRollTablesRuntime.FortDynamicRollResult
// Kind: ScriptStruct; super: none
struct FFortDynamicRollResult
{
public:
    void* Item; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortDynamicRollResult, Item) == 0, "Offset mismatch for FFortDynamicRollResult::Item");

// /Script/DynamicRollTablesRuntime.FortDynamicRollWeightModifierTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortDynamicRollWeightModifierTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ActivatingPlayerTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t TargetModTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t WeightModifierOperation; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float WeightModificationValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, ActivatingPlayerTag) == 8, "Offset mismatch for FFortDynamicRollWeightModifierTableRow::ActivatingPlayerTag");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, TargetModTag) == 12, "Offset mismatch for FFortDynamicRollWeightModifierTableRow::TargetModTag");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, WeightModifierOperation) == 16, "Offset mismatch for FFortDynamicRollWeightModifierTableRow::WeightModifierOperation");
static_assert(offsetof(FFortDynamicRollWeightModifierTableRow, WeightModificationValue) == 20, "Offset mismatch for FFortDynamicRollWeightModifierTableRow::WeightModificationValue");

// /Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_DynamicRollPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* AssociatedManagerClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Enabled[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    void* TableManager; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x24]; // 0x0100
    std::uint8_t SeededRNG[0x1]; // 0x0124 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, AssociatedManagerClass) == 200, "Offset mismatch for UFortControllerComponent_DynamicRollPlayerComponent::AssociatedManagerClass");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, Enabled) == 208, "Offset mismatch for UFortControllerComponent_DynamicRollPlayerComponent::Enabled");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, TableManager) == 248, "Offset mismatch for UFortControllerComponent_DynamicRollPlayerComponent::TableManager");
static_assert(offsetof(UFortControllerComponent_DynamicRollPlayerComponent, SeededRNG) == 292, "Offset mismatch for UFortControllerComponent_DynamicRollPlayerComponent::SeededRNG");

// /Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
// Kind: Class; super: FortGameStateComponent
class UFortGamestateComponent_DynamicRollTableManager
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t DataRegistryType_BaseWeights[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DataRegistryType_WeightModifiers[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t Enabled[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGamestateComponent_DynamicRollTableManager, DataRegistryType_BaseWeights) == 240, "Offset mismatch for UFortGamestateComponent_DynamicRollTableManager::DataRegistryType_BaseWeights");
static_assert(offsetof(UFortGamestateComponent_DynamicRollTableManager, DataRegistryType_WeightModifiers) == 244, "Offset mismatch for UFortGamestateComponent_DynamicRollTableManager::DataRegistryType_WeightModifiers");
static_assert(offsetof(UFortGamestateComponent_DynamicRollTableManager, Enabled) == 248, "Offset mismatch for UFortGamestateComponent_DynamicRollTableManager::Enabled");
