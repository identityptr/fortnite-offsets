/**
 * decamp dumper generated SDK
 * Package: /Script/GameFeatureDataTables
 */
#pragma once
#include "Basic.h"

// /Script/GameFeatureDataTables.GameFeatureDataTableEntry
// Kind: ScriptStruct; super: none
struct FGameFeatureDataTableEntry
{
public:
    TArray<void*> CompositeDataTables; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParentDataTables; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameFeatureDataTableEntry, CompositeDataTables) == 0, "Offset mismatch for FGameFeatureDataTableEntry::CompositeDataTables");
static_assert(offsetof(FGameFeatureDataTableEntry, ParentDataTables) == 16, "Offset mismatch for FGameFeatureDataTableEntry::ParentDataTables");

// /Script/GameFeatureDataTables.GameFeatureAction_GameFeatureDataTables
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_GameFeatureDataTables
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameFeatureDataTableID[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t DataTable[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsParentDataTable; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowOnDedicatedServers; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameFeatureAction_GameFeatureDataTables, GameFeatureDataTableID) == 40, "Offset mismatch for UGameFeatureAction_GameFeatureDataTables::GameFeatureDataTableID");
static_assert(offsetof(UGameFeatureAction_GameFeatureDataTables, DataTable) == 48, "Offset mismatch for UGameFeatureAction_GameFeatureDataTables::DataTable");
static_assert(offsetof(UGameFeatureAction_GameFeatureDataTables, bIsParentDataTable) == 72, "Offset mismatch for UGameFeatureAction_GameFeatureDataTables::bIsParentDataTable");
static_assert(offsetof(UGameFeatureAction_GameFeatureDataTables, bAllowOnDedicatedServers) == 73, "Offset mismatch for UGameFeatureAction_GameFeatureDataTables::bAllowOnDedicatedServers");

// /Script/GameFeatureDataTables.GameFeatureDataTablesSubsystem
// Kind: Class; super: EngineSubsystem
class UGameFeatureDataTablesSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> DataTableEntryMap; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGameFeatureDataTablesSubsystem, DataTableEntryMap) == 48, "Offset mismatch for UGameFeatureDataTablesSubsystem::DataTableEntryMap");
