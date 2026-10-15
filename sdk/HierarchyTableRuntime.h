/**
 * decamp dumper generated SDK
 * Package: /Script/HierarchyTableRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HierarchyTableRuntime.HierarchyTableEntryData
// Kind: ScriptStruct; super: none
struct FHierarchyTableEntryData
{
public:
    void* OwnerTable; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Payload[0x18]; // 0x0008 (Size: 0x18, Type: OptionalProperty)
    std::uint8_t Identifier[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::int32_t Parent; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t TablePayload[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHierarchyTableEntryData, OwnerTable) == 0, "Offset mismatch for FHierarchyTableEntryData::OwnerTable");
static_assert(offsetof(FHierarchyTableEntryData, Payload) == 8, "Offset mismatch for FHierarchyTableEntryData::Payload");
static_assert(offsetof(FHierarchyTableEntryData, Identifier) == 32, "Offset mismatch for FHierarchyTableEntryData::Identifier");
static_assert(offsetof(FHierarchyTableEntryData, Parent) == 36, "Offset mismatch for FHierarchyTableEntryData::Parent");
static_assert(offsetof(FHierarchyTableEntryData, TablePayload) == 40, "Offset mismatch for FHierarchyTableEntryData::TablePayload");

// /Script/HierarchyTableRuntime.HierarchyTable_ElementType
// Kind: ScriptStruct; super: none
struct FHierarchyTable_ElementType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HierarchyTableRuntime.HierarchyTable_ElementType_Float
// Kind: ScriptStruct; super: HierarchyTable_ElementType
struct FHierarchyTable_ElementType_Float
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHierarchyTable_ElementType_Float, Value) == 0, "Offset mismatch for FHierarchyTable_ElementType_Float::Value");

// /Script/HierarchyTableRuntime.HierarchyTable_TablePayloadType
// Kind: ScriptStruct; super: none
struct FHierarchyTable_TablePayloadType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HierarchyTableRuntime.HierarchyTable_TableType
// Kind: ScriptStruct; super: none
struct FHierarchyTable_TableType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HierarchyTableRuntime.HierarchyTable_TableType_Default
// Kind: ScriptStruct; super: HierarchyTable_TableType
struct FHierarchyTable_TableType_Default
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HierarchyTableRuntime.HierarchyTable
// Kind: Class; super: Object
class UHierarchyTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TableMetadata[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* ElementType; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TableData; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HierarchyGuid[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHierarchyTable, TableMetadata) == 40, "Offset mismatch for UHierarchyTable::TableMetadata");
static_assert(offsetof(UHierarchyTable, ElementType) == 56, "Offset mismatch for UHierarchyTable::ElementType");
static_assert(offsetof(UHierarchyTable, TableData) == 64, "Offset mismatch for UHierarchyTable::TableData");
static_assert(offsetof(UHierarchyTable, HierarchyGuid) == 80, "Offset mismatch for UHierarchyTable::HierarchyGuid");
