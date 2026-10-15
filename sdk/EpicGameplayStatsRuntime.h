/**
 * decamp dumper generated SDK
 * Package: /Script/EpicGameplayStatsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FGameplayStatMetadataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString BackendName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    TArray<void*> Windows; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Metric; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DataType; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPublish; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    std::int32_t WeeklyRefreshInterval; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t bExportToBackEnd; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInFrontEnd; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayStatMetadataTableRow, BackendName) == 8, "Offset mismatch for FGameplayStatMetadataTableRow::BackendName");
static_assert(offsetof(FGameplayStatMetadataTableRow, DisplayName) == 24, "Offset mismatch for FGameplayStatMetadataTableRow::DisplayName");
static_assert(offsetof(FGameplayStatMetadataTableRow, Windows) == 40, "Offset mismatch for FGameplayStatMetadataTableRow::Windows");
static_assert(offsetof(FGameplayStatMetadataTableRow, Metric) == 56, "Offset mismatch for FGameplayStatMetadataTableRow::Metric");
static_assert(offsetof(FGameplayStatMetadataTableRow, DataType) == 57, "Offset mismatch for FGameplayStatMetadataTableRow::DataType");
static_assert(offsetof(FGameplayStatMetadataTableRow, bPublish) == 58, "Offset mismatch for FGameplayStatMetadataTableRow::bPublish");
static_assert(offsetof(FGameplayStatMetadataTableRow, WeeklyRefreshInterval) == 60, "Offset mismatch for FGameplayStatMetadataTableRow::WeeklyRefreshInterval");
static_assert(offsetof(FGameplayStatMetadataTableRow, bExportToBackEnd) == 64, "Offset mismatch for FGameplayStatMetadataTableRow::bExportToBackEnd");
static_assert(offsetof(FGameplayStatMetadataTableRow, bShowInFrontEnd) == 65, "Offset mismatch for FGameplayStatMetadataTableRow::bShowInFrontEnd");

// /Script/EpicGameplayStatsRuntime.GameplayStatTag
// Kind: ScriptStruct; super: GameplayTag
struct FGameplayStatTag
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::uint8_t Tag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayStatTag, Tag) == 4, "Offset mismatch for FGameplayStatTag::Tag");

// /Script/EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
// Kind: ScriptStruct; super: none
struct FManagedGameplayTagDataTableItem
{
public:
    std::uint8_t RootTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* DataTable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FManagedGameplayTagDataTableItem, RootTag) == 0, "Offset mismatch for FManagedGameplayTagDataTableItem::RootTag");
static_assert(offsetof(FManagedGameplayTagDataTableItem, DataTable) == 8, "Offset mismatch for FManagedGameplayTagDataTableItem::DataTable");

// /Script/EpicGameplayStatsRuntime.TagTableManagerHelper
// Kind: ScriptStruct; super: none
struct FTagTableManagerHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBlueprintGameplayStatsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EpicGameplayStatsRuntime.GameplayTagTableManager
// Kind: Class; super: DataAsset
class UGameplayTagTableManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Tables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayTagTableManager, Tables) == 40, "Offset mismatch for UGameplayTagTableManager::Tables");
