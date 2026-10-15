/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCraftingBaseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryFilteringUIDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoCraftingCategoryFilteringUIDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EntryType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnabled; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x000A
    std::uint8_t DisplayText[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t IdTag[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentTag[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    std::uint8_t FilterType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    std::uint8_t FilterTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t SortingPriority; // 0x0070 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, EntryType) == 8, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::EntryType");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, bEnabled) == 9, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::bEnabled");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, DisplayText) == 16, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::DisplayText");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, IdTag) == 32, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::IdTag");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, ParentTag) == 36, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::ParentTag");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, FilterType) == 40, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::FilterType");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, FilterTags) == 48, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::FilterTags");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, DisplayIcon) == 80, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::DisplayIcon");
static_assert(offsetof(FJunoCraftingCategoryFilteringUIDataRow, SortingPriority) == 112, "Offset mismatch for FJunoCraftingCategoryFilteringUIDataRow::SortingPriority");

// /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIDataEntry
// Kind: ScriptStruct; super: none
struct FJunoCraftingCategoryUIDataEntry
{
public:
    std::uint8_t CategoryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CategoryIcon[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CategoryTitle[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    TArray<void*> Headers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubCategories; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SortingPreferences; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCraftingCategoryUIDataEntry, CategoryTag) == 0, "Offset mismatch for FJunoCraftingCategoryUIDataEntry::CategoryTag");
static_assert(offsetof(FJunoCraftingCategoryUIDataEntry, CategoryIcon) == 8, "Offset mismatch for FJunoCraftingCategoryUIDataEntry::CategoryIcon");
static_assert(offsetof(FJunoCraftingCategoryUIDataEntry, CategoryTitle) == 40, "Offset mismatch for FJunoCraftingCategoryUIDataEntry::CategoryTitle");
static_assert(offsetof(FJunoCraftingCategoryUIDataEntry, Headers) == 56, "Offset mismatch for FJunoCraftingCategoryUIDataEntry::Headers");
static_assert(offsetof(FJunoCraftingCategoryUIDataEntry, SubCategories) == 72, "Offset mismatch for FJunoCraftingCategoryUIDataEntry::SubCategories");
static_assert(offsetof(FJunoCraftingCategoryUIDataEntry, SortingPreferences) == 88, "Offset mismatch for FJunoCraftingCategoryUIDataEntry::SortingPreferences");

// /Script/JunoCraftingBaseRuntime.JunoCraftingHeaderUIDataEntry
// Kind: ScriptStruct; super: none
struct FJunoCraftingHeaderUIDataEntry
{
public:
    std::uint8_t HeaderTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FText HeaderText; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoCraftingHeaderUIDataEntry, HeaderTag) == 0, "Offset mismatch for FJunoCraftingHeaderUIDataEntry::HeaderTag");
static_assert(offsetof(FJunoCraftingHeaderUIDataEntry, HeaderText) == 8, "Offset mismatch for FJunoCraftingHeaderUIDataEntry::HeaderText");

// /Script/JunoCraftingBaseRuntime.JunoCraftingSubCategoryUIDataEntry
// Kind: ScriptStruct; super: none
struct FJunoCraftingSubCategoryUIDataEntry
{
public:
    std::uint8_t CategoryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CategoryIcon[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CategoryTitle[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryTitleFormattedWithCount[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    TArray<void*> Headers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SortingPreferences; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCraftingSubCategoryUIDataEntry, CategoryTag) == 0, "Offset mismatch for FJunoCraftingSubCategoryUIDataEntry::CategoryTag");
static_assert(offsetof(FJunoCraftingSubCategoryUIDataEntry, CategoryIcon) == 8, "Offset mismatch for FJunoCraftingSubCategoryUIDataEntry::CategoryIcon");
static_assert(offsetof(FJunoCraftingSubCategoryUIDataEntry, CategoryTitle) == 40, "Offset mismatch for FJunoCraftingSubCategoryUIDataEntry::CategoryTitle");
static_assert(offsetof(FJunoCraftingSubCategoryUIDataEntry, CategoryTitleFormattedWithCount) == 56, "Offset mismatch for FJunoCraftingSubCategoryUIDataEntry::CategoryTitleFormattedWithCount");
static_assert(offsetof(FJunoCraftingSubCategoryUIDataEntry, Headers) == 72, "Offset mismatch for FJunoCraftingSubCategoryUIDataEntry::Headers");
static_assert(offsetof(FJunoCraftingSubCategoryUIDataEntry, SortingPreferences) == 88, "Offset mismatch for FJunoCraftingSubCategoryUIDataEntry::SortingPreferences");

// /Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings
// Kind: Class; super: PrimaryDataAsset
class UJunoCraftingBaseSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* JunoCraftingIngredientsShopUIDataTable; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* JunoBuildingFrontendUIDataTable; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* JunoPropFrontendUIDataTable; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* CraftingCategoryUIData; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoCraftingBaseSettings, JunoCraftingIngredientsShopUIDataTable) == 40, "Offset mismatch for UJunoCraftingBaseSettings::JunoCraftingIngredientsShopUIDataTable");
static_assert(offsetof(UJunoCraftingBaseSettings, JunoBuildingFrontendUIDataTable) == 48, "Offset mismatch for UJunoCraftingBaseSettings::JunoBuildingFrontendUIDataTable");
static_assert(offsetof(UJunoCraftingBaseSettings, JunoPropFrontendUIDataTable) == 56, "Offset mismatch for UJunoCraftingBaseSettings::JunoPropFrontendUIDataTable");
static_assert(offsetof(UJunoCraftingBaseSettings, CraftingCategoryUIData) == 64, "Offset mismatch for UJunoCraftingBaseSettings::CraftingCategoryUIData");

// /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIData
// Kind: Class; super: DataAsset
class UJunoCraftingCategoryUIData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Entries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoCraftingCategoryUIData, Entries) == 48, "Offset mismatch for UJunoCraftingCategoryUIData::Entries");
