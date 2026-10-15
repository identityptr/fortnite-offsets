/**
 * decamp dumper generated SDK
 * Package: /Script/DataRegistry
 */
#pragma once
#include "Basic.h"

// /Script/DataRegistry.DataRegistryCachePolicy
// Kind: ScriptStruct; super: none
struct FDataRegistryCachePolicy
{
public:
    std::uint8_t bCacheIsAlwaysVolatile; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCurveTableCacheVersion; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t MinNumberKept; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberKept; // 0x0008 (Size: 0x4, Type: IntProperty)
    float ForceKeepSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ForceReleaseSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataRegistryCachePolicy, bCacheIsAlwaysVolatile) == 0, "Offset mismatch for FDataRegistryCachePolicy::bCacheIsAlwaysVolatile");
static_assert(offsetof(FDataRegistryCachePolicy, bUseCurveTableCacheVersion) == 1, "Offset mismatch for FDataRegistryCachePolicy::bUseCurveTableCacheVersion");
static_assert(offsetof(FDataRegistryCachePolicy, MinNumberKept) == 4, "Offset mismatch for FDataRegistryCachePolicy::MinNumberKept");
static_assert(offsetof(FDataRegistryCachePolicy, MaxNumberKept) == 8, "Offset mismatch for FDataRegistryCachePolicy::MaxNumberKept");
static_assert(offsetof(FDataRegistryCachePolicy, ForceKeepSeconds) == 12, "Offset mismatch for FDataRegistryCachePolicy::ForceKeepSeconds");
static_assert(offsetof(FDataRegistryCachePolicy, ForceReleaseSeconds) == 16, "Offset mismatch for FDataRegistryCachePolicy::ForceReleaseSeconds");

// /Script/DataRegistry.DataRegistryId
// Kind: ScriptStruct; super: none
struct FDataRegistryId
{
public:
    std::uint8_t RegistryType[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    FName ItemName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDataRegistryId, RegistryType) == 0, "Offset mismatch for FDataRegistryId::RegistryType");
static_assert(offsetof(FDataRegistryId, ItemName) == 4, "Offset mismatch for FDataRegistryId::ItemName");

// /Script/DataRegistry.DataRegistryIdFormat
// Kind: ScriptStruct; super: none
struct FDataRegistryIdFormat
{
public:
    std::uint8_t BaseGameplayTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataRegistryIdFormat, BaseGameplayTag) == 0, "Offset mismatch for FDataRegistryIdFormat::BaseGameplayTag");

// /Script/DataRegistry.DataRegistryLookup
// Kind: ScriptStruct; super: none
struct FDataRegistryLookup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataRegistry.DataRegistryOrTableRow
// Kind: ScriptStruct; super: none
struct FDataRegistryOrTableRow
{
public:
    std::uint8_t bUseDataRegistryId; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t DataTableRow[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t DataRegistryId[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDataRegistryOrTableRow, bUseDataRegistryId) == 0, "Offset mismatch for FDataRegistryOrTableRow::bUseDataRegistryId");
static_assert(offsetof(FDataRegistryOrTableRow, DataTableRow) == 8, "Offset mismatch for FDataRegistryOrTableRow::DataTableRow");
static_assert(offsetof(FDataRegistryOrTableRow, DataRegistryId) == 24, "Offset mismatch for FDataRegistryOrTableRow::DataRegistryId");

// /Script/DataRegistry.DataRegistrySourceItemId
// Kind: ScriptStruct; super: none
struct FDataRegistrySourceItemId
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataRegistry.DataRegistrySource_DataTableRules
// Kind: ScriptStruct; super: none
struct FDataRegistrySource_DataTableRules
{
public:
    std::uint8_t bPrecacheTable; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float CachedTableKeepSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDataRegistrySource_DataTableRules, bPrecacheTable) == 0, "Offset mismatch for FDataRegistrySource_DataTableRules::bPrecacheTable");
static_assert(offsetof(FDataRegistrySource_DataTableRules, CachedTableKeepSeconds) == 4, "Offset mismatch for FDataRegistrySource_DataTableRules::CachedTableKeepSeconds");

// /Script/DataRegistry.DataRegistryType
// Kind: ScriptStruct; super: none
struct FDataRegistryType
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FDataRegistryType, Name) == 0, "Offset mismatch for FDataRegistryType::Name");

// /Script/DataRegistry.SoftDataRegistryOrTable
// Kind: ScriptStruct; super: none
struct FSoftDataRegistryOrTable
{
public:
    std::uint8_t bUseDataRegistry; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Table[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RegistryType[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSoftDataRegistryOrTable, bUseDataRegistry) == 0, "Offset mismatch for FSoftDataRegistryOrTable::bUseDataRegistry");
static_assert(offsetof(FSoftDataRegistryOrTable, Table) == 8, "Offset mismatch for FSoftDataRegistryOrTable::Table");
static_assert(offsetof(FSoftDataRegistryOrTable, RegistryType) == 40, "Offset mismatch for FSoftDataRegistryOrTable::RegistryType");

// /Script/DataRegistry.DataRegistry
// Kind: Class; super: Object
class UDataRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RegistryType[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t IdFormat[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    void* ItemStruct; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DataSources; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuntimeSources; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    float TimerUpdateFrequency; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultCachePolicy[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDataRegistry, RegistryType) == 40, "Offset mismatch for UDataRegistry::RegistryType");
static_assert(offsetof(UDataRegistry, IdFormat) == 44, "Offset mismatch for UDataRegistry::IdFormat");
static_assert(offsetof(UDataRegistry, ItemStruct) == 48, "Offset mismatch for UDataRegistry::ItemStruct");
static_assert(offsetof(UDataRegistry, DataSources) == 56, "Offset mismatch for UDataRegistry::DataSources");
static_assert(offsetof(UDataRegistry, RuntimeSources) == 72, "Offset mismatch for UDataRegistry::RuntimeSources");
static_assert(offsetof(UDataRegistry, TimerUpdateFrequency) == 88, "Offset mismatch for UDataRegistry::TimerUpdateFrequency");
static_assert(offsetof(UDataRegistry, DefaultCachePolicy) == 92, "Offset mismatch for UDataRegistry::DefaultCachePolicy");

// /Script/DataRegistry.DataRegistrySettings
// Kind: Class; super: DeveloperSettings
class UDataRegistrySettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> DirectoriesToScan; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInitializeAllLoadedRegistries; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreMissingCookedAssetRegistryData; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDelayLoadingDataRegistriesUntilPIE; // 0x0042 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDataRegistrySettings, DirectoriesToScan) == 48, "Offset mismatch for UDataRegistrySettings::DirectoriesToScan");
static_assert(offsetof(UDataRegistrySettings, bInitializeAllLoadedRegistries) == 64, "Offset mismatch for UDataRegistrySettings::bInitializeAllLoadedRegistries");
static_assert(offsetof(UDataRegistrySettings, bIgnoreMissingCookedAssetRegistryData) == 65, "Offset mismatch for UDataRegistrySettings::bIgnoreMissingCookedAssetRegistryData");
static_assert(offsetof(UDataRegistrySettings, bDelayLoadingDataRegistriesUntilPIE) == 66, "Offset mismatch for UDataRegistrySettings::bDelayLoadingDataRegistriesUntilPIE");

// /Script/DataRegistry.DataRegistrySource
// Kind: Class; super: Object
class UDataRegistrySource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ParentSource; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataRegistrySource, ParentSource) == 48, "Offset mismatch for UDataRegistrySource::ParentSource");

// /Script/DataRegistry.DataRegistrySource_CurveTable
// Kind: Class; super: DataRegistrySource
class UDataRegistrySource_CurveTable
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceTable[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TableRules[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    void* CachedTable; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* PreloadTable; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataRegistrySource_CurveTable, SourceTable) == 56, "Offset mismatch for UDataRegistrySource_CurveTable::SourceTable");
static_assert(offsetof(UDataRegistrySource_CurveTable, TableRules) == 88, "Offset mismatch for UDataRegistrySource_CurveTable::TableRules");
static_assert(offsetof(UDataRegistrySource_CurveTable, CachedTable) == 96, "Offset mismatch for UDataRegistrySource_CurveTable::CachedTable");
static_assert(offsetof(UDataRegistrySource_CurveTable, PreloadTable) == 104, "Offset mismatch for UDataRegistrySource_CurveTable::PreloadTable");

// /Script/DataRegistry.DataRegistrySource_DataTable
// Kind: Class; super: DataRegistrySource
class UDataRegistrySource_DataTable
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceTable[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TableRules[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    void* CachedTable; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* PreloadTable; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataRegistrySource_DataTable, SourceTable) == 56, "Offset mismatch for UDataRegistrySource_DataTable::SourceTable");
static_assert(offsetof(UDataRegistrySource_DataTable, TableRules) == 88, "Offset mismatch for UDataRegistrySource_DataTable::TableRules");
static_assert(offsetof(UDataRegistrySource_DataTable, CachedTable) == 96, "Offset mismatch for UDataRegistrySource_DataTable::CachedTable");
static_assert(offsetof(UDataRegistrySource_DataTable, PreloadTable) == 104, "Offset mismatch for UDataRegistrySource_DataTable::PreloadTable");

// /Script/DataRegistry.DataRegistrySubsystem
// Kind: Class; super: EngineSubsystem
class UDataRegistrySubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DataRegistry.MetaDataRegistrySource
// Kind: Class; super: DataRegistrySource
class UMetaDataRegistrySource
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AssetUsage; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t SearchRules[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    TMap<void*, void*> RuntimeChildren; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMetaDataRegistrySource, AssetUsage) == 56, "Offset mismatch for UMetaDataRegistrySource::AssetUsage");
static_assert(offsetof(UMetaDataRegistrySource, SearchRules) == 64, "Offset mismatch for UMetaDataRegistrySource::SearchRules");
static_assert(offsetof(UMetaDataRegistrySource, RuntimeChildren) == 144, "Offset mismatch for UMetaDataRegistrySource::RuntimeChildren");

// /Script/DataRegistry.MetaDataRegistrySource_CurveTable
// Kind: Class; super: MetaDataRegistrySource
class UMetaDataRegistrySource_CurveTable
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* CreatedSource; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TableRules[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaDataRegistrySource_CurveTable, CreatedSource) == 200, "Offset mismatch for UMetaDataRegistrySource_CurveTable::CreatedSource");
static_assert(offsetof(UMetaDataRegistrySource_CurveTable, TableRules) == 208, "Offset mismatch for UMetaDataRegistrySource_CurveTable::TableRules");

// /Script/DataRegistry.MetaDataRegistrySource_DataTable
// Kind: Class; super: MetaDataRegistrySource
class UMetaDataRegistrySource_DataTable
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* CreatedSource; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TableRules[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMetaDataRegistrySource_DataTable, CreatedSource) == 200, "Offset mismatch for UMetaDataRegistrySource_DataTable::CreatedSource");
static_assert(offsetof(UMetaDataRegistrySource_DataTable, TableRules) == 208, "Offset mismatch for UMetaDataRegistrySource_DataTable::TableRules");
