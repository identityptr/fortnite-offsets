/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeEmporiumUI
 */
#pragma once
#include "Basic.h"

// /Script/CreativeEmporiumUI.FortEmporiumFilterCategory
// Kind: ScriptStruct; super: none
struct FFortEmporiumFilterCategory
{
public:
    std::uint8_t ID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentId[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsTab; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowCategoryModal; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    TArray<void*> SubcategoryIDList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortEmporiumFilterCategory, ID) == 0, "Offset mismatch for FFortEmporiumFilterCategory::ID");
static_assert(offsetof(FFortEmporiumFilterCategory, ParentId) == 4, "Offset mismatch for FFortEmporiumFilterCategory::ParentId");
static_assert(offsetof(FFortEmporiumFilterCategory, bIsTab) == 8, "Offset mismatch for FFortEmporiumFilterCategory::bIsTab");
static_assert(offsetof(FFortEmporiumFilterCategory, bShowCategoryModal) == 9, "Offset mismatch for FFortEmporiumFilterCategory::bShowCategoryModal");
static_assert(offsetof(FFortEmporiumFilterCategory, SubcategoryIDList) == 16, "Offset mismatch for FFortEmporiumFilterCategory::SubcategoryIDList");

// /Script/CreativeEmporiumUI.FortEmporiumFilterEntry
// Kind: ScriptStruct; super: none
struct FFortEmporiumFilterEntry
{
public:
    FName ID; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t TextRoot[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Mode; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortEmporiumFilterEntry, ID) == 0, "Offset mismatch for FFortEmporiumFilterEntry::ID");
static_assert(offsetof(FFortEmporiumFilterEntry, TextRoot) == 8, "Offset mismatch for FFortEmporiumFilterEntry::TextRoot");
static_assert(offsetof(FFortEmporiumFilterEntry, Mode) == 24, "Offset mismatch for FFortEmporiumFilterEntry::Mode");

// /Script/CreativeEmporiumUI.FortEmporiumItemData
// Kind: ScriptStruct; super: none
struct FFortEmporiumItemData
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Title; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Namespace; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString EntityType; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString ThumbnailURL; // 0x0040 (Size: 0x10, Type: StrProperty)
    float Price; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    FString BaseCurrency; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString SketchfabUID; // 0x0068 (Size: 0x10, Type: StrProperty)
    TArray<void*> TagList; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LicenseType; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRequiresEntitlement; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x008A
    FString VersePath; // 0x0090 (Size: 0x10, Type: StrProperty)
    TArray<void*> AssetIds; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t FileSize; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00B4
    FString Description; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString Seller; // 0x00C8 (Size: 0x10, Type: StrProperty)
    std::int32_t MaterialCount; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::int32_t PolygonCount; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::int32_t VertexCount; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::int32_t ChildAssetCount; // 0x00E4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortEmporiumItemData, ID) == 0, "Offset mismatch for FFortEmporiumItemData::ID");
static_assert(offsetof(FFortEmporiumItemData, Title) == 16, "Offset mismatch for FFortEmporiumItemData::Title");
static_assert(offsetof(FFortEmporiumItemData, Namespace) == 32, "Offset mismatch for FFortEmporiumItemData::Namespace");
static_assert(offsetof(FFortEmporiumItemData, EntityType) == 48, "Offset mismatch for FFortEmporiumItemData::EntityType");
static_assert(offsetof(FFortEmporiumItemData, ThumbnailURL) == 64, "Offset mismatch for FFortEmporiumItemData::ThumbnailURL");
static_assert(offsetof(FFortEmporiumItemData, Price) == 80, "Offset mismatch for FFortEmporiumItemData::Price");
static_assert(offsetof(FFortEmporiumItemData, BaseCurrency) == 88, "Offset mismatch for FFortEmporiumItemData::BaseCurrency");
static_assert(offsetof(FFortEmporiumItemData, SketchfabUID) == 104, "Offset mismatch for FFortEmporiumItemData::SketchfabUID");
static_assert(offsetof(FFortEmporiumItemData, TagList) == 120, "Offset mismatch for FFortEmporiumItemData::TagList");
static_assert(offsetof(FFortEmporiumItemData, LicenseType) == 136, "Offset mismatch for FFortEmporiumItemData::LicenseType");
static_assert(offsetof(FFortEmporiumItemData, bRequiresEntitlement) == 137, "Offset mismatch for FFortEmporiumItemData::bRequiresEntitlement");
static_assert(offsetof(FFortEmporiumItemData, VersePath) == 144, "Offset mismatch for FFortEmporiumItemData::VersePath");
static_assert(offsetof(FFortEmporiumItemData, AssetIds) == 160, "Offset mismatch for FFortEmporiumItemData::AssetIds");
static_assert(offsetof(FFortEmporiumItemData, FileSize) == 176, "Offset mismatch for FFortEmporiumItemData::FileSize");
static_assert(offsetof(FFortEmporiumItemData, Description) == 184, "Offset mismatch for FFortEmporiumItemData::Description");
static_assert(offsetof(FFortEmporiumItemData, Seller) == 200, "Offset mismatch for FFortEmporiumItemData::Seller");
static_assert(offsetof(FFortEmporiumItemData, MaterialCount) == 216, "Offset mismatch for FFortEmporiumItemData::MaterialCount");
static_assert(offsetof(FFortEmporiumItemData, PolygonCount) == 220, "Offset mismatch for FFortEmporiumItemData::PolygonCount");
static_assert(offsetof(FFortEmporiumItemData, VertexCount) == 224, "Offset mismatch for FFortEmporiumItemData::VertexCount");
static_assert(offsetof(FFortEmporiumItemData, ChildAssetCount) == 228, "Offset mismatch for FFortEmporiumItemData::ChildAssetCount");

// /Script/CreativeEmporiumUI.FortEmporiumItemLicenseData
// Kind: ScriptStruct; super: none
struct FFortEmporiumItemLicenseData
{
public:
    FName ID; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Keyword; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t Name[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t License; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    FString Url; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortEmporiumItemLicenseData, ID) == 0, "Offset mismatch for FFortEmporiumItemLicenseData::ID");
static_assert(offsetof(FFortEmporiumItemLicenseData, Keyword) == 8, "Offset mismatch for FFortEmporiumItemLicenseData::Keyword");
static_assert(offsetof(FFortEmporiumItemLicenseData, Name) == 24, "Offset mismatch for FFortEmporiumItemLicenseData::Name");
static_assert(offsetof(FFortEmporiumItemLicenseData, License) == 40, "Offset mismatch for FFortEmporiumItemLicenseData::License");
static_assert(offsetof(FFortEmporiumItemLicenseData, Url) == 48, "Offset mismatch for FFortEmporiumItemLicenseData::Url");

// /Script/CreativeEmporiumUI.FortEmporiumPriceFilterEntry
// Kind: ScriptStruct; super: none
struct FFortEmporiumPriceFilterEntry
{
public:
    FName ID; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Text[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t Filter; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortEmporiumPriceFilterEntry, ID) == 0, "Offset mismatch for FFortEmporiumPriceFilterEntry::ID");
static_assert(offsetof(FFortEmporiumPriceFilterEntry, Text) == 8, "Offset mismatch for FFortEmporiumPriceFilterEntry::Text");
static_assert(offsetof(FFortEmporiumPriceFilterEntry, Filter) == 24, "Offset mismatch for FFortEmporiumPriceFilterEntry::Filter");

// /Script/CreativeEmporiumUI.FortEmporiumSortEntry
// Kind: ScriptStruct; super: none
struct FFortEmporiumSortEntry
{
public:
    std::uint8_t Text[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortEmporiumSortEntry, Text) == 0, "Offset mismatch for FFortEmporiumSortEntry::Text");
static_assert(offsetof(FFortEmporiumSortEntry, Mode) == 16, "Offset mismatch for FFortEmporiumSortEntry::Mode");

// /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry
// Kind: Class; super: CommonButtonBase
class UEmporiumBrowserFilterEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    FMulticastInlineDelegate OnFilterEnabled; // 0x15A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFilterSelected; // 0x15B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFilterHovered; // 0x15C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWidgetDestroyed; // 0x15D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* TextBlock_FilterName; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bFilterActive; // 0x15F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x15F1
    void* Tag; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    FText ButtonText; // 0x1600 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UEmporiumBrowserFilterEntry, OnFilterEnabled) == 5544, "Offset mismatch for UEmporiumBrowserFilterEntry::OnFilterEnabled");
static_assert(offsetof(UEmporiumBrowserFilterEntry, OnFilterSelected) == 5560, "Offset mismatch for UEmporiumBrowserFilterEntry::OnFilterSelected");
static_assert(offsetof(UEmporiumBrowserFilterEntry, OnFilterHovered) == 5576, "Offset mismatch for UEmporiumBrowserFilterEntry::OnFilterHovered");
static_assert(offsetof(UEmporiumBrowserFilterEntry, OnWidgetDestroyed) == 5592, "Offset mismatch for UEmporiumBrowserFilterEntry::OnWidgetDestroyed");
static_assert(offsetof(UEmporiumBrowserFilterEntry, TextBlock_FilterName) == 5608, "Offset mismatch for UEmporiumBrowserFilterEntry::TextBlock_FilterName");
static_assert(offsetof(UEmporiumBrowserFilterEntry, bFilterActive) == 5616, "Offset mismatch for UEmporiumBrowserFilterEntry::bFilterActive");
static_assert(offsetof(UEmporiumBrowserFilterEntry, Tag) == 5624, "Offset mismatch for UEmporiumBrowserFilterEntry::Tag");
static_assert(offsetof(UEmporiumBrowserFilterEntry, ButtonText) == 5632, "Offset mismatch for UEmporiumBrowserFilterEntry::ButtonText");

// /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel
// Kind: Class; super: CommonUserWidget
class UEmporiumBrowserFiltersPanel
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnFilterChanged; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSortChanged; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSortPanelToggled; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusChanged; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCategoryActivated; // 0x0370 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCategoryFocused; // 0x0380 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0390
    FMulticastInlineDelegate OnUpdateCategoryCounts; // 0x03A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x88]; // 0x03B8
    void* FilterSectionHeaderWidgetClass; // 0x0440 (Size: 0x8, Type: ClassProperty)
    void* FilterCategoryHeaderWidgetClass; // 0x0448 (Size: 0x8, Type: ClassProperty)
    void* FilterHomeHeaderWidgetClass; // 0x0450 (Size: 0x8, Type: ClassProperty)
    void* FilterEntryWidgetClass; // 0x0458 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SortEntries; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilterEntries; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PriceFilterEntries; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LicenseFilterEntries; // 0x0490 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultCategoryFilter[0x4]; // 0x04A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t DefaultTagFilterMode; // 0x04A4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x13]; // 0x04A5
    void* Button_SortAndFilter; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x38]; // 0x04C0
    TWeakObjectPtr<void> LastSelectedTab; // 0x04F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnFilterChanged) == 816, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnFilterChanged");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnSortChanged) == 832, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnSortChanged");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnSortPanelToggled) == 848, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnSortPanelToggled");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnFocusChanged) == 864, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnFocusChanged");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnCategoryActivated) == 880, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnCategoryActivated");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnCategoryFocused) == 896, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnCategoryFocused");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, OnUpdateCategoryCounts) == 936, "Offset mismatch for UEmporiumBrowserFiltersPanel::OnUpdateCategoryCounts");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, FilterSectionHeaderWidgetClass) == 1088, "Offset mismatch for UEmporiumBrowserFiltersPanel::FilterSectionHeaderWidgetClass");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, FilterCategoryHeaderWidgetClass) == 1096, "Offset mismatch for UEmporiumBrowserFiltersPanel::FilterCategoryHeaderWidgetClass");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, FilterHomeHeaderWidgetClass) == 1104, "Offset mismatch for UEmporiumBrowserFiltersPanel::FilterHomeHeaderWidgetClass");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, FilterEntryWidgetClass) == 1112, "Offset mismatch for UEmporiumBrowserFiltersPanel::FilterEntryWidgetClass");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, SortEntries) == 1120, "Offset mismatch for UEmporiumBrowserFiltersPanel::SortEntries");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, FilterEntries) == 1136, "Offset mismatch for UEmporiumBrowserFiltersPanel::FilterEntries");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, PriceFilterEntries) == 1152, "Offset mismatch for UEmporiumBrowserFiltersPanel::PriceFilterEntries");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, LicenseFilterEntries) == 1168, "Offset mismatch for UEmporiumBrowserFiltersPanel::LicenseFilterEntries");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, DefaultCategoryFilter) == 1184, "Offset mismatch for UEmporiumBrowserFiltersPanel::DefaultCategoryFilter");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, DefaultTagFilterMode) == 1188, "Offset mismatch for UEmporiumBrowserFiltersPanel::DefaultTagFilterMode");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, Button_SortAndFilter) == 1208, "Offset mismatch for UEmporiumBrowserFiltersPanel::Button_SortAndFilter");
static_assert(offsetof(UEmporiumBrowserFiltersPanel, LastSelectedTab) == 1272, "Offset mismatch for UEmporiumBrowserFiltersPanel::LastSelectedTab");

// /Script/CreativeEmporiumUI.EmporiumBrowserTag
// Kind: Class; super: Object
class UEmporiumBrowserTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TagID[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsFilterActive; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::int32_t ItemCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowCountOnEmpty; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEmporiumBrowserTag, TagID) == 40, "Offset mismatch for UEmporiumBrowserTag::TagID");
static_assert(offsetof(UEmporiumBrowserTag, bIsFilterActive) == 44, "Offset mismatch for UEmporiumBrowserTag::bIsFilterActive");
static_assert(offsetof(UEmporiumBrowserTag, ItemCount) == 48, "Offset mismatch for UEmporiumBrowserTag::ItemCount");
static_assert(offsetof(UEmporiumBrowserTag, bShowCountOnEmpty) == 52, "Offset mismatch for UEmporiumBrowserTag::bShowCountOnEmpty");

// /Script/CreativeEmporiumUI.FortEmporiumCategoryEntry
// Kind: Class; super: Object
class UFortEmporiumCategoryEntry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Path; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString Hash; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortEmporiumCategoryEntry, Path) == 40, "Offset mismatch for UFortEmporiumCategoryEntry::Path");
static_assert(offsetof(UFortEmporiumCategoryEntry, Hash) == 56, "Offset mismatch for UFortEmporiumCategoryEntry::Hash");

// /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
// Kind: Class; super: UserWidget
class UFortEmporiumFilterCategoryHeader
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnCategoryActivated; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWidgetDestroyed; // 0x0318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnExpandCategory; // 0x0328 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* Tag; // 0x0338 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumFilterCategoryHeader, OnCategoryActivated) == 776, "Offset mismatch for UFortEmporiumFilterCategoryHeader::OnCategoryActivated");
static_assert(offsetof(UFortEmporiumFilterCategoryHeader, OnWidgetDestroyed) == 792, "Offset mismatch for UFortEmporiumFilterCategoryHeader::OnWidgetDestroyed");
static_assert(offsetof(UFortEmporiumFilterCategoryHeader, OnExpandCategory) == 808, "Offset mismatch for UFortEmporiumFilterCategoryHeader::OnExpandCategory");
static_assert(offsetof(UFortEmporiumFilterCategoryHeader, Tag) == 824, "Offset mismatch for UFortEmporiumFilterCategoryHeader::Tag");

// /Script/CreativeEmporiumUI.FortEmporiumFiltersSubPanel
// Kind: Class; super: UserWidget
class UFortEmporiumFiltersSubPanel
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnFilterEnabled; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnShowAllEnabled; // 0x0318 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* FilterEntryWidgetClass; // 0x0328 (Size: 0x8, Type: ClassProperty)
    void* ListView_FilterObjects; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* Button_All; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* Button_LastSelected; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* CachedItemTab; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0350
    TMap<void*, void*> TagsByID; // 0x0358 (Size: 0x10, Type: MapProperty)
    TArray<void*> OrderedTags; // 0x0368 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortEmporiumFiltersSubPanel, OnFilterEnabled) == 776, "Offset mismatch for UFortEmporiumFiltersSubPanel::OnFilterEnabled");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, OnShowAllEnabled) == 792, "Offset mismatch for UFortEmporiumFiltersSubPanel::OnShowAllEnabled");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, FilterEntryWidgetClass) == 808, "Offset mismatch for UFortEmporiumFiltersSubPanel::FilterEntryWidgetClass");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, ListView_FilterObjects) == 816, "Offset mismatch for UFortEmporiumFiltersSubPanel::ListView_FilterObjects");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, Button_All) == 824, "Offset mismatch for UFortEmporiumFiltersSubPanel::Button_All");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, Button_LastSelected) == 832, "Offset mismatch for UFortEmporiumFiltersSubPanel::Button_LastSelected");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, CachedItemTab) == 840, "Offset mismatch for UFortEmporiumFiltersSubPanel::CachedItemTab");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, TagsByID) == 856, "Offset mismatch for UFortEmporiumFiltersSubPanel::TagsByID");
static_assert(offsetof(UFortEmporiumFiltersSubPanel, OrderedTags) == 872, "Offset mismatch for UFortEmporiumFiltersSubPanel::OrderedTags");

// /Script/CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper
// Kind: Class; super: Object
class UFortEmporiumHomeEntryObjectWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EntrySource; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* TabPanel; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxItemsToShow; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortEmporiumHomeEntryObjectWrapper, EntrySource) == 40, "Offset mismatch for UFortEmporiumHomeEntryObjectWrapper::EntrySource");
static_assert(offsetof(UFortEmporiumHomeEntryObjectWrapper, TabPanel) == 48, "Offset mismatch for UFortEmporiumHomeEntryObjectWrapper::TabPanel");
static_assert(offsetof(UFortEmporiumHomeEntryObjectWrapper, MaxItemsToShow) == 56, "Offset mismatch for UFortEmporiumHomeEntryObjectWrapper::MaxItemsToShow");

// /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry
// Kind: Class; super: UserWidget
class UFortEmporiumHomeListEntry
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* ParentView; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x80]; // 0x0318
    std::int32_t MaxItemsToShow; // 0x0398 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x039C
    void* TabPanel; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* Text_CategoryLabel; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* HomeListView_ItemOptions; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumHomeListEntry, ParentView) == 784, "Offset mismatch for UFortEmporiumHomeListEntry::ParentView");
static_assert(offsetof(UFortEmporiumHomeListEntry, MaxItemsToShow) == 920, "Offset mismatch for UFortEmporiumHomeListEntry::MaxItemsToShow");
static_assert(offsetof(UFortEmporiumHomeListEntry, TabPanel) == 928, "Offset mismatch for UFortEmporiumHomeListEntry::TabPanel");
static_assert(offsetof(UFortEmporiumHomeListEntry, Text_CategoryLabel) == 936, "Offset mismatch for UFortEmporiumHomeListEntry::Text_CategoryLabel");
static_assert(offsetof(UFortEmporiumHomeListEntry, HomeListView_ItemOptions) == 944, "Offset mismatch for UFortEmporiumHomeListEntry::HomeListView_ItemOptions");

// /Script/CreativeEmporiumUI.FortEmporiumHomeListView
// Kind: Class; super: CommonListView
class UFortEmporiumHomeListView
{
public:
    std::uint8_t Pad_0000[0x1060]; // 0x0000
    TMap<void*, void*> Map_TabToHomeList; // 0x1060 (Size: 0x10, Type: MapProperty)
    TArray<void*> TabPanelList; // 0x1070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0xA8]; // 0x1080
    void* CurrentSelectionTab; // 0x1128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x1130
    void* RecentItemsEntry; // 0x1138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x1140
    void* NavigationHintSource; // 0x1150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumHomeListView, Map_TabToHomeList) == 4192, "Offset mismatch for UFortEmporiumHomeListView::Map_TabToHomeList");
static_assert(offsetof(UFortEmporiumHomeListView, TabPanelList) == 4208, "Offset mismatch for UFortEmporiumHomeListView::TabPanelList");
static_assert(offsetof(UFortEmporiumHomeListView, CurrentSelectionTab) == 4392, "Offset mismatch for UFortEmporiumHomeListView::CurrentSelectionTab");
static_assert(offsetof(UFortEmporiumHomeListView, RecentItemsEntry) == 4408, "Offset mismatch for UFortEmporiumHomeListView::RecentItemsEntry");
static_assert(offsetof(UFortEmporiumHomeListView, NavigationHintSource) == 4432, "Offset mismatch for UFortEmporiumHomeListView::NavigationHintSource");

// /Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel
// Kind: Class; super: FortCreativeContentBrowserTabPanelBase
class UFortEmporiumHomeTabPanel
{
public:
    std::uint8_t Pad_0000[0x548]; // 0x0000
    FName FeaturedItemTag; // 0x0548 (Size: 0x8, Type: NameProperty)
    void* FortEmporiumHomeListView_Options; // 0x0550 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumHomeTabPanel, FeaturedItemTag) == 1352, "Offset mismatch for UFortEmporiumHomeTabPanel::FeaturedItemTag");
static_assert(offsetof(UFortEmporiumHomeTabPanel, FortEmporiumHomeListView_Options) == 1360, "Offset mismatch for UFortEmporiumHomeTabPanel::FortEmporiumHomeListView_Options");

// /Script/CreativeEmporiumUI.FortEmporiumItem
// Kind: Class; super: FortItem
class UFortEmporiumItem
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* ItemDefinition; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumItem, ItemDefinition) == 168, "Offset mismatch for UFortEmporiumItem::ItemDefinition");

// /Script/CreativeEmporiumUI.FortEmporiumItemDefinition
// Kind: Class; super: FortItemDefinition
class UFortEmporiumItemDefinition
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FMulticastInlineDelegate OnItemThumbnailDownloaded; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortEmporiumItemDefinition, OnItemThumbnailDownloaded) == 168, "Offset mismatch for UFortEmporiumItemDefinition::OnItemThumbnailDownloaded");

// /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel
// Kind: Class; super: CommonUserWidget
class UFortEmporiumItemDetailsPanel
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t ItemDetailTagsInputRowHandle[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    void* CachedItemDefinition; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* CachedParentDefinition; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Details; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* ItemDetails; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* LegacyItemDetails; // 0x0398 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumItemDetailsPanel, ItemDetailTagsInputRowHandle) == 864, "Offset mismatch for UFortEmporiumItemDetailsPanel::ItemDetailTagsInputRowHandle");
static_assert(offsetof(UFortEmporiumItemDetailsPanel, CachedItemDefinition) == 888, "Offset mismatch for UFortEmporiumItemDetailsPanel::CachedItemDefinition");
static_assert(offsetof(UFortEmporiumItemDetailsPanel, CachedParentDefinition) == 896, "Offset mismatch for UFortEmporiumItemDetailsPanel::CachedParentDefinition");
static_assert(offsetof(UFortEmporiumItemDetailsPanel, Switcher_Details) == 904, "Offset mismatch for UFortEmporiumItemDetailsPanel::Switcher_Details");
static_assert(offsetof(UFortEmporiumItemDetailsPanel, ItemDetails) == 912, "Offset mismatch for UFortEmporiumItemDetailsPanel::ItemDetails");
static_assert(offsetof(UFortEmporiumItemDetailsPanel, LegacyItemDetails) == 920, "Offset mismatch for UFortEmporiumItemDetailsPanel::LegacyItemDetails");

// /Script/CreativeEmporiumUI.FortEmporiumItemInfo
// Kind: Class; super: CommonUserWidget
class UFortEmporiumItemInfo
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    TArray<void*> HiddenTags; // 0x0330 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortEmporiumItemInfo, HiddenTags) == 816, "Offset mismatch for UFortEmporiumItemInfo::HiddenTags");

// /Script/CreativeEmporiumUI.FortEmporiumItemListMenu
// Kind: Class; super: CommonActivatableWidget
class UFortEmporiumItemListMenu
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    void* PanelDataClass; // 0x04D0 (Size: 0x8, Type: ClassProperty)
    void* ItemListCategorySource; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* ItemListPanelData; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* InventoryTabClass; // 0x04E8 (Size: 0x8, Type: ClassProperty)
    void* LevelManagementTabClass; // 0x04F0 (Size: 0x8, Type: ClassProperty)
    void* HomeTabClass; // 0x04F8 (Size: 0x8, Type: ClassProperty)
    void* InventoryTabButton; // 0x0500 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> Map_CreativeBetaTagNames; // 0x0508 (Size: 0x10, Type: MapProperty)
    std::uint8_t ToggleFilterFocusActionRow[0x10]; // 0x0518 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleFilterFocusAlternateActionRow[0x10]; // 0x0528 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleFilterSubPanelFocusActionRow[0x10]; // 0x0538 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleFilterSubPanelFocusAlternateActionRow[0x10]; // 0x0548 (Size: 0x10, Type: StructProperty)
    std::uint8_t CycleTagFilterModeModifierActionRow[0x10]; // 0x0558 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClearTagFiltersModifierActionRow[0x10]; // 0x0568 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleSidePanelDockingModifierActionRow[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleSidePanelDockingActionRow[0x10]; // 0x0588 (Size: 0x10, Type: StructProperty)
    std::uint8_t ToggleSubPanelModeActionRow[0x10]; // 0x0598 (Size: 0x10, Type: StructProperty)
    std::uint8_t FocusSearchInputActionRow[0x18]; // 0x05A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClearSearchInputActionRow[0x18]; // 0x05C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CycleSortInputActionRow[0x18]; // 0x05D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequestItemFocusInputActionRow[0x18]; // 0x05F0 (Size: 0x18, Type: StructProperty)
    void* ChestTabPanel; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* VersePrefabsTabPanel; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* LevelManagementTabPanel; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* HomeTabPanel; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* FabTabPanel; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* SubItemsTabPanel; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    FName FabTabNameId; // 0x0638 (Size: 0x8, Type: NameProperty)
    std::uint8_t TabButtonLabelInfo[0xF0]; // 0x0640 (Size: 0xF0, Type: StructProperty)
    std::uint8_t MapScreenContainerTabInfo[0x40]; // 0x0730 (Size: 0x40, Type: StructProperty)
    std::uint8_t bIsDefaultActiveTab; // 0x0770 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddItemToInventoryOnEquip; // 0x0771 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoadItemsOnInitialized; // 0x0772 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0773
    std::int32_t LastUsedSlot; // 0x0774 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0778
    TMap<void*, void*> TabMap; // 0x0780 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x1B8]; // 0x0790
    TArray<void*> EmporiumItemDefinitionList; // 0x0948 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x18]; // 0x0958
    TMap<void*, void*> Map_ItemNameToTab; // 0x0970 (Size: 0x10, Type: MapProperty)
    void* Switcher_SidePanels; // 0x0980 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Categories; // 0x0988 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_ItemTabWarnings; // 0x0990 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_ChestEmpty; // 0x0998 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_TabEmpty; // 0x09A0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_DownloadingFabCategories; // 0x09A8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_FabCategoriesNotLoaded; // 0x09B0 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_CommandBar; // 0x09B8 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_ChestCommands; // 0x09C0 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_VendCommands; // 0x09C8 (Size: 0x8, Type: ObjectProperty)
    void* MenuQuickbar_QuickBars; // 0x09D0 (Size: 0x8, Type: ObjectProperty)
    void* Button_ResetChest; // 0x09D8 (Size: 0x8, Type: ObjectProperty)
    void* Button_CreateChest; // 0x09E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_AddToQuickBar; // 0x09E8 (Size: 0x8, Type: ObjectProperty)
    void* Button_OpenItem; // 0x09F0 (Size: 0x8, Type: ObjectProperty)
    void* Button_PlaceNow; // 0x09F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Equip; // 0x0A00 (Size: 0x8, Type: ObjectProperty)
    void* Button_AddToChest; // 0x0A08 (Size: 0x8, Type: ObjectProperty)
    void* Button_Drop; // 0x0A10 (Size: 0x8, Type: ObjectProperty)
    void* Button_CreateLlama; // 0x0A18 (Size: 0x8, Type: ObjectProperty)
    void* Button_RemoveFromChest; // 0x0A20 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_SearchFilters; // 0x0A28 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_LeftPanel; // 0x0A30 (Size: 0x8, Type: ObjectProperty)
    void* FiltersPanel; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    void* FiltersSubPanel; // 0x0A40 (Size: 0x8, Type: ObjectProperty)
    void* SubTabItemDetailsPanel; // 0x0A48 (Size: 0x8, Type: ObjectProperty)
    void* Blade_SortAndFilter; // 0x0A50 (Size: 0x8, Type: ObjectProperty)
    void* ItemDetailsSidePanel_DefaultSidePanel; // 0x0A58 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_ProductPage; // 0x0A60 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_ItemBrowser; // 0x0A68 (Size: 0x8, Type: ObjectProperty)
    void* ItemProductPagePanel; // 0x0A70 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_InventoryPermission; // 0x0A78 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_EmporiumPanel; // 0x0A80 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_InventoryNotAllowed; // 0x0A88 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_EditorDisconnected; // 0x0A90 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_InitializingInventory; // 0x0A98 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumItemListMenu, PanelDataClass) == 1232, "Offset mismatch for UFortEmporiumItemListMenu::PanelDataClass");
static_assert(offsetof(UFortEmporiumItemListMenu, ItemListCategorySource) == 1240, "Offset mismatch for UFortEmporiumItemListMenu::ItemListCategorySource");
static_assert(offsetof(UFortEmporiumItemListMenu, ItemListPanelData) == 1248, "Offset mismatch for UFortEmporiumItemListMenu::ItemListPanelData");
static_assert(offsetof(UFortEmporiumItemListMenu, InventoryTabClass) == 1256, "Offset mismatch for UFortEmporiumItemListMenu::InventoryTabClass");
static_assert(offsetof(UFortEmporiumItemListMenu, LevelManagementTabClass) == 1264, "Offset mismatch for UFortEmporiumItemListMenu::LevelManagementTabClass");
static_assert(offsetof(UFortEmporiumItemListMenu, HomeTabClass) == 1272, "Offset mismatch for UFortEmporiumItemListMenu::HomeTabClass");
static_assert(offsetof(UFortEmporiumItemListMenu, InventoryTabButton) == 1280, "Offset mismatch for UFortEmporiumItemListMenu::InventoryTabButton");
static_assert(offsetof(UFortEmporiumItemListMenu, Map_CreativeBetaTagNames) == 1288, "Offset mismatch for UFortEmporiumItemListMenu::Map_CreativeBetaTagNames");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleFilterFocusActionRow) == 1304, "Offset mismatch for UFortEmporiumItemListMenu::ToggleFilterFocusActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleFilterFocusAlternateActionRow) == 1320, "Offset mismatch for UFortEmporiumItemListMenu::ToggleFilterFocusAlternateActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleFilterSubPanelFocusActionRow) == 1336, "Offset mismatch for UFortEmporiumItemListMenu::ToggleFilterSubPanelFocusActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleFilterSubPanelFocusAlternateActionRow) == 1352, "Offset mismatch for UFortEmporiumItemListMenu::ToggleFilterSubPanelFocusAlternateActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, CycleTagFilterModeModifierActionRow) == 1368, "Offset mismatch for UFortEmporiumItemListMenu::CycleTagFilterModeModifierActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ClearTagFiltersModifierActionRow) == 1384, "Offset mismatch for UFortEmporiumItemListMenu::ClearTagFiltersModifierActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleSidePanelDockingModifierActionRow) == 1400, "Offset mismatch for UFortEmporiumItemListMenu::ToggleSidePanelDockingModifierActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleSidePanelDockingActionRow) == 1416, "Offset mismatch for UFortEmporiumItemListMenu::ToggleSidePanelDockingActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ToggleSubPanelModeActionRow) == 1432, "Offset mismatch for UFortEmporiumItemListMenu::ToggleSubPanelModeActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, FocusSearchInputActionRow) == 1448, "Offset mismatch for UFortEmporiumItemListMenu::FocusSearchInputActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ClearSearchInputActionRow) == 1472, "Offset mismatch for UFortEmporiumItemListMenu::ClearSearchInputActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, CycleSortInputActionRow) == 1496, "Offset mismatch for UFortEmporiumItemListMenu::CycleSortInputActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, RequestItemFocusInputActionRow) == 1520, "Offset mismatch for UFortEmporiumItemListMenu::RequestItemFocusInputActionRow");
static_assert(offsetof(UFortEmporiumItemListMenu, ChestTabPanel) == 1544, "Offset mismatch for UFortEmporiumItemListMenu::ChestTabPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, VersePrefabsTabPanel) == 1552, "Offset mismatch for UFortEmporiumItemListMenu::VersePrefabsTabPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, LevelManagementTabPanel) == 1560, "Offset mismatch for UFortEmporiumItemListMenu::LevelManagementTabPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, HomeTabPanel) == 1568, "Offset mismatch for UFortEmporiumItemListMenu::HomeTabPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, FabTabPanel) == 1576, "Offset mismatch for UFortEmporiumItemListMenu::FabTabPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, SubItemsTabPanel) == 1584, "Offset mismatch for UFortEmporiumItemListMenu::SubItemsTabPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, FabTabNameId) == 1592, "Offset mismatch for UFortEmporiumItemListMenu::FabTabNameId");
static_assert(offsetof(UFortEmporiumItemListMenu, TabButtonLabelInfo) == 1600, "Offset mismatch for UFortEmporiumItemListMenu::TabButtonLabelInfo");
static_assert(offsetof(UFortEmporiumItemListMenu, MapScreenContainerTabInfo) == 1840, "Offset mismatch for UFortEmporiumItemListMenu::MapScreenContainerTabInfo");
static_assert(offsetof(UFortEmporiumItemListMenu, bIsDefaultActiveTab) == 1904, "Offset mismatch for UFortEmporiumItemListMenu::bIsDefaultActiveTab");
static_assert(offsetof(UFortEmporiumItemListMenu, bAddItemToInventoryOnEquip) == 1905, "Offset mismatch for UFortEmporiumItemListMenu::bAddItemToInventoryOnEquip");
static_assert(offsetof(UFortEmporiumItemListMenu, bLoadItemsOnInitialized) == 1906, "Offset mismatch for UFortEmporiumItemListMenu::bLoadItemsOnInitialized");
static_assert(offsetof(UFortEmporiumItemListMenu, LastUsedSlot) == 1908, "Offset mismatch for UFortEmporiumItemListMenu::LastUsedSlot");
static_assert(offsetof(UFortEmporiumItemListMenu, TabMap) == 1920, "Offset mismatch for UFortEmporiumItemListMenu::TabMap");
static_assert(offsetof(UFortEmporiumItemListMenu, EmporiumItemDefinitionList) == 2376, "Offset mismatch for UFortEmporiumItemListMenu::EmporiumItemDefinitionList");
static_assert(offsetof(UFortEmporiumItemListMenu, Map_ItemNameToTab) == 2416, "Offset mismatch for UFortEmporiumItemListMenu::Map_ItemNameToTab");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_SidePanels) == 2432, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_SidePanels");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_Categories) == 2440, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_Categories");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_ItemTabWarnings) == 2448, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_ItemTabWarnings");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_ChestEmpty) == 2456, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_ChestEmpty");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_TabEmpty) == 2464, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_TabEmpty");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_DownloadingFabCategories) == 2472, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_DownloadingFabCategories");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_FabCategoriesNotLoaded) == 2480, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_FabCategoriesNotLoaded");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_CommandBar) == 2488, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_CommandBar");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_ChestCommands) == 2496, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_ChestCommands");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_VendCommands) == 2504, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_VendCommands");
static_assert(offsetof(UFortEmporiumItemListMenu, MenuQuickbar_QuickBars) == 2512, "Offset mismatch for UFortEmporiumItemListMenu::MenuQuickbar_QuickBars");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_ResetChest) == 2520, "Offset mismatch for UFortEmporiumItemListMenu::Button_ResetChest");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_CreateChest) == 2528, "Offset mismatch for UFortEmporiumItemListMenu::Button_CreateChest");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_AddToQuickBar) == 2536, "Offset mismatch for UFortEmporiumItemListMenu::Button_AddToQuickBar");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_OpenItem) == 2544, "Offset mismatch for UFortEmporiumItemListMenu::Button_OpenItem");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_PlaceNow) == 2552, "Offset mismatch for UFortEmporiumItemListMenu::Button_PlaceNow");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_Equip) == 2560, "Offset mismatch for UFortEmporiumItemListMenu::Button_Equip");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_AddToChest) == 2568, "Offset mismatch for UFortEmporiumItemListMenu::Button_AddToChest");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_Drop) == 2576, "Offset mismatch for UFortEmporiumItemListMenu::Button_Drop");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_CreateLlama) == 2584, "Offset mismatch for UFortEmporiumItemListMenu::Button_CreateLlama");
static_assert(offsetof(UFortEmporiumItemListMenu, Button_RemoveFromChest) == 2592, "Offset mismatch for UFortEmporiumItemListMenu::Button_RemoveFromChest");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_SearchFilters) == 2600, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_SearchFilters");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_LeftPanel) == 2608, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_LeftPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, FiltersPanel) == 2616, "Offset mismatch for UFortEmporiumItemListMenu::FiltersPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, FiltersSubPanel) == 2624, "Offset mismatch for UFortEmporiumItemListMenu::FiltersSubPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, SubTabItemDetailsPanel) == 2632, "Offset mismatch for UFortEmporiumItemListMenu::SubTabItemDetailsPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, Blade_SortAndFilter) == 2640, "Offset mismatch for UFortEmporiumItemListMenu::Blade_SortAndFilter");
static_assert(offsetof(UFortEmporiumItemListMenu, ItemDetailsSidePanel_DefaultSidePanel) == 2648, "Offset mismatch for UFortEmporiumItemListMenu::ItemDetailsSidePanel_DefaultSidePanel");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_ProductPage) == 2656, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_ProductPage");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_ItemBrowser) == 2664, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_ItemBrowser");
static_assert(offsetof(UFortEmporiumItemListMenu, ItemProductPagePanel) == 2672, "Offset mismatch for UFortEmporiumItemListMenu::ItemProductPagePanel");
static_assert(offsetof(UFortEmporiumItemListMenu, Switcher_InventoryPermission) == 2680, "Offset mismatch for UFortEmporiumItemListMenu::Switcher_InventoryPermission");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_EmporiumPanel) == 2688, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_EmporiumPanel");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_InventoryNotAllowed) == 2696, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_InventoryNotAllowed");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_EditorDisconnected) == 2704, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_EditorDisconnected");
static_assert(offsetof(UFortEmporiumItemListMenu, Overlay_InitializingInventory) == 2712, "Offset mismatch for UFortEmporiumItemListMenu::Overlay_InitializingInventory");

// /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel
// Kind: Class; super: FortCreativeContentBrowserTabPanelBase
class UFortEmporiumItemListTabPanel
{
public:
    std::uint8_t Pad_0000[0x4E8]; // 0x0000
    FMulticastInlineDelegate OnSourceItemCountChanged; // 0x04E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnItemClickedDelegate; // 0x04F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnItemDoubleClickedDelegate; // 0x0508 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0518
    void* CreativeTileView_ItemOptions; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    void* Button_Sort; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentItemEntry[0x98]; // 0x0568 (Size: 0x98, Type: StructProperty)
    FMulticastInlineDelegate OnItemCountChanged; // 0x0600 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> Items; // 0x0610 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceItems; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0xA0]; // 0x0630
    void* EmporiumItemListMenuParent; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortEmporiumItemListTabPanel, OnSourceItemCountChanged) == 1256, "Offset mismatch for UFortEmporiumItemListTabPanel::OnSourceItemCountChanged");
static_assert(offsetof(UFortEmporiumItemListTabPanel, OnItemClickedDelegate) == 1272, "Offset mismatch for UFortEmporiumItemListTabPanel::OnItemClickedDelegate");
static_assert(offsetof(UFortEmporiumItemListTabPanel, OnItemDoubleClickedDelegate) == 1288, "Offset mismatch for UFortEmporiumItemListTabPanel::OnItemDoubleClickedDelegate");
static_assert(offsetof(UFortEmporiumItemListTabPanel, CreativeTileView_ItemOptions) == 1368, "Offset mismatch for UFortEmporiumItemListTabPanel::CreativeTileView_ItemOptions");
static_assert(offsetof(UFortEmporiumItemListTabPanel, Button_Sort) == 1376, "Offset mismatch for UFortEmporiumItemListTabPanel::Button_Sort");
static_assert(offsetof(UFortEmporiumItemListTabPanel, CurrentItemEntry) == 1384, "Offset mismatch for UFortEmporiumItemListTabPanel::CurrentItemEntry");
static_assert(offsetof(UFortEmporiumItemListTabPanel, OnItemCountChanged) == 1536, "Offset mismatch for UFortEmporiumItemListTabPanel::OnItemCountChanged");
static_assert(offsetof(UFortEmporiumItemListTabPanel, Items) == 1552, "Offset mismatch for UFortEmporiumItemListTabPanel::Items");
static_assert(offsetof(UFortEmporiumItemListTabPanel, SourceItems) == 1568, "Offset mismatch for UFortEmporiumItemListTabPanel::SourceItems");
static_assert(offsetof(UFortEmporiumItemListTabPanel, EmporiumItemListMenuParent) == 1744, "Offset mismatch for UFortEmporiumItemListTabPanel::EmporiumItemListMenuParent");

// /Script/CreativeEmporiumUI.FortEmporiumUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UFortEmporiumUtilities
{
public:
    std::uint8_t Opaque[1];
};
