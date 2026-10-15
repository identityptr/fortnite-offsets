/**
 * decamp dumper generated SDK
 * Package: /Script/JunoResearchUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoResearchUI.JunoResearchCategoryUIData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoResearchCategoryUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Enabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t ResearchCategoryTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayImage[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayDescription[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    float DisplaySortPriority; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoResearchCategoryUIData, Enabled) == 8, "Offset mismatch for FJunoResearchCategoryUIData::Enabled");
static_assert(offsetof(FJunoResearchCategoryUIData, ResearchCategoryTag) == 12, "Offset mismatch for FJunoResearchCategoryUIData::ResearchCategoryTag");
static_assert(offsetof(FJunoResearchCategoryUIData, DisplayName) == 16, "Offset mismatch for FJunoResearchCategoryUIData::DisplayName");
static_assert(offsetof(FJunoResearchCategoryUIData, DisplayImage) == 32, "Offset mismatch for FJunoResearchCategoryUIData::DisplayImage");
static_assert(offsetof(FJunoResearchCategoryUIData, DisplayDescription) == 64, "Offset mismatch for FJunoResearchCategoryUIData::DisplayDescription");
static_assert(offsetof(FJunoResearchCategoryUIData, DisplaySortPriority) == 80, "Offset mismatch for FJunoResearchCategoryUIData::DisplaySortPriority");

// /Script/JunoResearchUI.JunoResearchTagUIData
// Kind: ScriptStruct; super: TableRowBase
struct FJunoResearchTagUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ResearchTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayImage[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    float DisplaySortPriority; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoResearchTagUIData, ResearchTag) == 8, "Offset mismatch for FJunoResearchTagUIData::ResearchTag");
static_assert(offsetof(FJunoResearchTagUIData, DisplayName) == 16, "Offset mismatch for FJunoResearchTagUIData::DisplayName");
static_assert(offsetof(FJunoResearchTagUIData, Description) == 32, "Offset mismatch for FJunoResearchTagUIData::Description");
static_assert(offsetof(FJunoResearchTagUIData, DisplayImage) == 48, "Offset mismatch for FJunoResearchTagUIData::DisplayImage");
static_assert(offsetof(FJunoResearchTagUIData, DisplayIcon) == 80, "Offset mismatch for FJunoResearchTagUIData::DisplayIcon");
static_assert(offsetof(FJunoResearchTagUIData, DisplaySortPriority) == 112, "Offset mismatch for FJunoResearchTagUIData::DisplaySortPriority");

// /Script/JunoResearchUI.JunoGameStateComponent_ResearchUIData
// Kind: Class; super: JunoGameStateComponent_DataBase
class UJunoGameStateComponent_ResearchUIData
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t ResearchCategoryUIDataRegistryType[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ResearchTagUIDataRegistryType[0x1]; // 0x00DC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_ResearchUIData, ResearchCategoryUIDataRegistryType) == 216, "Offset mismatch for UJunoGameStateComponent_ResearchUIData::ResearchCategoryUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_ResearchUIData, ResearchTagUIDataRegistryType) == 220, "Offset mismatch for UJunoGameStateComponent_ResearchUIData::ResearchTagUIDataRegistryType");

// /Script/JunoResearchUI.JunoPlayerResearchAvailableViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerResearchAvailableViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t IsAnyResearchUnlocked; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasRecentlyViewed; // 0x0079 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayerResearchAvailableViewModel, IsAnyResearchUnlocked) == 120, "Offset mismatch for UJunoPlayerResearchAvailableViewModel::IsAnyResearchUnlocked");
static_assert(offsetof(UJunoPlayerResearchAvailableViewModel, HasRecentlyViewed) == 121, "Offset mismatch for UJunoPlayerResearchAvailableViewModel::HasRecentlyViewed");

// /Script/JunoResearchUI.JunoPlayerResearchViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerResearchViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnResearchChanged; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ThemeEntryType[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t CategoryEntryType[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t GroupEntryType[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    std::uint8_t ResearchEntryType[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    TArray<void*> ResearchCategories; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResearchEntries; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelectedThemeTag[0x8]; // 0x00B8 (Size: 0x8, Type: StructProperty)
    void* SelectedThemeViewModel; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerResearchViewModel, OnResearchChanged) == 120, "Offset mismatch for UJunoPlayerResearchViewModel::OnResearchChanged");
static_assert(offsetof(UJunoPlayerResearchViewModel, ThemeEntryType) == 136, "Offset mismatch for UJunoPlayerResearchViewModel::ThemeEntryType");
static_assert(offsetof(UJunoPlayerResearchViewModel, CategoryEntryType) == 140, "Offset mismatch for UJunoPlayerResearchViewModel::CategoryEntryType");
static_assert(offsetof(UJunoPlayerResearchViewModel, GroupEntryType) == 144, "Offset mismatch for UJunoPlayerResearchViewModel::GroupEntryType");
static_assert(offsetof(UJunoPlayerResearchViewModel, ResearchEntryType) == 148, "Offset mismatch for UJunoPlayerResearchViewModel::ResearchEntryType");
static_assert(offsetof(UJunoPlayerResearchViewModel, ResearchCategories) == 152, "Offset mismatch for UJunoPlayerResearchViewModel::ResearchCategories");
static_assert(offsetof(UJunoPlayerResearchViewModel, ResearchEntries) == 168, "Offset mismatch for UJunoPlayerResearchViewModel::ResearchEntries");
static_assert(offsetof(UJunoPlayerResearchViewModel, SelectedThemeTag) == 184, "Offset mismatch for UJunoPlayerResearchViewModel::SelectedThemeTag");
static_assert(offsetof(UJunoPlayerResearchViewModel, SelectedThemeViewModel) == 192, "Offset mismatch for UJunoPlayerResearchViewModel::SelectedThemeViewModel");

// /Script/JunoResearchUI.JunoResearchCategoryViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoResearchCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayImage[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayDescription[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t ResearchCategoryTag[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoResearchCategoryViewModel, DisplayName) == 104, "Offset mismatch for UJunoResearchCategoryViewModel::DisplayName");
static_assert(offsetof(UJunoResearchCategoryViewModel, DisplayImage) == 120, "Offset mismatch for UJunoResearchCategoryViewModel::DisplayImage");
static_assert(offsetof(UJunoResearchCategoryViewModel, DisplayDescription) == 152, "Offset mismatch for UJunoResearchCategoryViewModel::DisplayDescription");
static_assert(offsetof(UJunoResearchCategoryViewModel, ResearchCategoryTag) == 168, "Offset mismatch for UJunoResearchCategoryViewModel::ResearchCategoryTag");

// /Script/JunoResearchUI.JunoResearchEntryViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoResearchEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FMulticastInlineDelegate OnPlayerResearched; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerUpgradedResearch; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0090
    std::uint8_t IdTag[0x4]; // 0x0094 (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayImage[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DisplayIcon[0x20]; // 0x00C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Description[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t StyleTag[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::int32_t NumPurchaseableEntries; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::int32_t NumPurchasedEntries; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTotalEntries; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x30]; // 0x0108
    void* ItemDefinition; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RequiredPrerequisiteResearch; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoResearchEntryViewModel, OnPlayerResearched) == 112, "Offset mismatch for UJunoResearchEntryViewModel::OnPlayerResearched");
static_assert(offsetof(UJunoResearchEntryViewModel, OnPlayerUpgradedResearch) == 128, "Offset mismatch for UJunoResearchEntryViewModel::OnPlayerUpgradedResearch");
static_assert(offsetof(UJunoResearchEntryViewModel, IdTag) == 148, "Offset mismatch for UJunoResearchEntryViewModel::IdTag");
static_assert(offsetof(UJunoResearchEntryViewModel, DisplayName) == 152, "Offset mismatch for UJunoResearchEntryViewModel::DisplayName");
static_assert(offsetof(UJunoResearchEntryViewModel, DisplayImage) == 168, "Offset mismatch for UJunoResearchEntryViewModel::DisplayImage");
static_assert(offsetof(UJunoResearchEntryViewModel, DisplayIcon) == 200, "Offset mismatch for UJunoResearchEntryViewModel::DisplayIcon");
static_assert(offsetof(UJunoResearchEntryViewModel, Description) == 232, "Offset mismatch for UJunoResearchEntryViewModel::Description");
static_assert(offsetof(UJunoResearchEntryViewModel, StyleTag) == 248, "Offset mismatch for UJunoResearchEntryViewModel::StyleTag");
static_assert(offsetof(UJunoResearchEntryViewModel, NumPurchaseableEntries) == 252, "Offset mismatch for UJunoResearchEntryViewModel::NumPurchaseableEntries");
static_assert(offsetof(UJunoResearchEntryViewModel, NumPurchasedEntries) == 256, "Offset mismatch for UJunoResearchEntryViewModel::NumPurchasedEntries");
static_assert(offsetof(UJunoResearchEntryViewModel, NumTotalEntries) == 260, "Offset mismatch for UJunoResearchEntryViewModel::NumTotalEntries");
static_assert(offsetof(UJunoResearchEntryViewModel, ItemDefinition) == 312, "Offset mismatch for UJunoResearchEntryViewModel::ItemDefinition");
static_assert(offsetof(UJunoResearchEntryViewModel, RequiredPrerequisiteResearch) == 320, "Offset mismatch for UJunoResearchEntryViewModel::RequiredPrerequisiteResearch");
