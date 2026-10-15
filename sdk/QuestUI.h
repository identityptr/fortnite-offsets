/**
 * decamp dumper generated SDK
 * Package: /Script/QuestUI
 */
#pragma once
#include "Basic.h"

// /Script/QuestUI.BundleQuestEntryDebugData
// Kind: ScriptStruct; super: none
struct FBundleQuestEntryDebugData
{
public:
    void* QuestDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* QuestDisplayData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString QuestListItemId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnlockType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    std::int32_t UnlockValue; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t QuestAchievedCount; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t QuestRequiredCount; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t QuestState; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsProgressQuest; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0042
    std::uint8_t UnlockTime[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t UnlockTimeState; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    std::uint8_t ExpirationTime[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationTimeState; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FBundleQuestEntryDebugData, QuestDefinition) == 0, "Offset mismatch for FBundleQuestEntryDebugData::QuestDefinition");
static_assert(offsetof(FBundleQuestEntryDebugData, QuestDisplayData) == 8, "Offset mismatch for FBundleQuestEntryDebugData::QuestDisplayData");
static_assert(offsetof(FBundleQuestEntryDebugData, QuestListItemId) == 16, "Offset mismatch for FBundleQuestEntryDebugData::QuestListItemId");
static_assert(offsetof(FBundleQuestEntryDebugData, DisplayName) == 32, "Offset mismatch for FBundleQuestEntryDebugData::DisplayName");
static_assert(offsetof(FBundleQuestEntryDebugData, UnlockType) == 48, "Offset mismatch for FBundleQuestEntryDebugData::UnlockType");
static_assert(offsetof(FBundleQuestEntryDebugData, UnlockValue) == 52, "Offset mismatch for FBundleQuestEntryDebugData::UnlockValue");
static_assert(offsetof(FBundleQuestEntryDebugData, QuestAchievedCount) == 56, "Offset mismatch for FBundleQuestEntryDebugData::QuestAchievedCount");
static_assert(offsetof(FBundleQuestEntryDebugData, QuestRequiredCount) == 60, "Offset mismatch for FBundleQuestEntryDebugData::QuestRequiredCount");
static_assert(offsetof(FBundleQuestEntryDebugData, QuestState) == 64, "Offset mismatch for FBundleQuestEntryDebugData::QuestState");
static_assert(offsetof(FBundleQuestEntryDebugData, bIsProgressQuest) == 65, "Offset mismatch for FBundleQuestEntryDebugData::bIsProgressQuest");
static_assert(offsetof(FBundleQuestEntryDebugData, UnlockTime) == 72, "Offset mismatch for FBundleQuestEntryDebugData::UnlockTime");
static_assert(offsetof(FBundleQuestEntryDebugData, UnlockTimeState) == 80, "Offset mismatch for FBundleQuestEntryDebugData::UnlockTimeState");
static_assert(offsetof(FBundleQuestEntryDebugData, ExpirationTime) == 88, "Offset mismatch for FBundleQuestEntryDebugData::ExpirationTime");
static_assert(offsetof(FBundleQuestEntryDebugData, ExpirationTimeState) == 96, "Offset mismatch for FBundleQuestEntryDebugData::ExpirationTimeState");

// /Script/QuestUI.CategoryCompatibilityDebugData
// Kind: ScriptStruct; super: none
struct FCategoryCompatibilityDebugData
{
public:
    std::uint8_t bIsGenerated; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGroupEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    FString ProductCompatibilityQuery; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString AdditionalQueryTags; // 0x0018 (Size: 0x10, Type: StrProperty)
    TArray<void*> DebugHeaderData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCategoryCompatibilityDebugData, bIsGenerated) == 0, "Offset mismatch for FCategoryCompatibilityDebugData::bIsGenerated");
static_assert(offsetof(FCategoryCompatibilityDebugData, bIsGroupEnabled) == 1, "Offset mismatch for FCategoryCompatibilityDebugData::bIsGroupEnabled");
static_assert(offsetof(FCategoryCompatibilityDebugData, ProductCompatibilityQuery) == 8, "Offset mismatch for FCategoryCompatibilityDebugData::ProductCompatibilityQuery");
static_assert(offsetof(FCategoryCompatibilityDebugData, AdditionalQueryTags) == 24, "Offset mismatch for FCategoryCompatibilityDebugData::AdditionalQueryTags");
static_assert(offsetof(FCategoryCompatibilityDebugData, DebugHeaderData) == 40, "Offset mismatch for FCategoryCompatibilityDebugData::DebugHeaderData");

// /Script/QuestUI.CategoryHeaderDebugData
// Kind: ScriptStruct; super: none
struct FCategoryHeaderDebugData
{
public:
    std::uint8_t bIsGenerated; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t HeaderData[0x68]; // 0x0008 (Size: 0x68, Type: StructProperty)
    TArray<void*> DebugHeaderGroupData; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCategoryHeaderDebugData, bIsGenerated) == 0, "Offset mismatch for FCategoryHeaderDebugData::bIsGenerated");
static_assert(offsetof(FCategoryHeaderDebugData, HeaderData) == 8, "Offset mismatch for FCategoryHeaderDebugData::HeaderData");
static_assert(offsetof(FCategoryHeaderDebugData, DebugHeaderGroupData) == 112, "Offset mismatch for FCategoryHeaderDebugData::DebugHeaderGroupData");

// /Script/QuestUI.CategoryHeaderGroupDebugData
// Kind: ScriptStruct; super: none
struct FCategoryHeaderGroupDebugData
{
public:
    std::uint8_t bIsGenerated; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t HeaderGroupData[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    TArray<void*> DebugPunchCardData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DebugQuestData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCategoryHeaderGroupDebugData, bIsGenerated) == 0, "Offset mismatch for FCategoryHeaderGroupDebugData::bIsGenerated");
static_assert(offsetof(FCategoryHeaderGroupDebugData, HeaderGroupData) == 8, "Offset mismatch for FCategoryHeaderGroupDebugData::HeaderGroupData");
static_assert(offsetof(FCategoryHeaderGroupDebugData, DebugPunchCardData) == 56, "Offset mismatch for FCategoryHeaderGroupDebugData::DebugPunchCardData");
static_assert(offsetof(FCategoryHeaderGroupDebugData, DebugQuestData) == 72, "Offset mismatch for FCategoryHeaderGroupDebugData::DebugQuestData");

// /Script/QuestUI.CategoryOrganizationDebugData
// Kind: ScriptStruct; super: none
struct FCategoryOrganizationDebugData
{
public:
    TArray<void*> DebugCompatibilityData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCategoryOrganizationDebugData, DebugCompatibilityData) == 0, "Offset mismatch for FCategoryOrganizationDebugData::DebugCompatibilityData");

// /Script/QuestUI.CategoryPunchCardDebugData
// Kind: ScriptStruct; super: none
struct FCategoryPunchCardDebugData
{
public:
    void* BundleDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* BundleDisplayData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString BundleListItemId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayData[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    TArray<void*> DebugQuestData; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCategoryPunchCardDebugData, BundleDefinition) == 0, "Offset mismatch for FCategoryPunchCardDebugData::BundleDefinition");
static_assert(offsetof(FCategoryPunchCardDebugData, BundleDisplayData) == 8, "Offset mismatch for FCategoryPunchCardDebugData::BundleDisplayData");
static_assert(offsetof(FCategoryPunchCardDebugData, BundleListItemId) == 16, "Offset mismatch for FCategoryPunchCardDebugData::BundleListItemId");
static_assert(offsetof(FCategoryPunchCardDebugData, DisplayData) == 32, "Offset mismatch for FCategoryPunchCardDebugData::DisplayData");
static_assert(offsetof(FCategoryPunchCardDebugData, DebugQuestData) == 112, "Offset mismatch for FCategoryPunchCardDebugData::DebugQuestData");

// /Script/QuestUI.CategoryQuestDebugData
// Kind: ScriptStruct; super: none
struct FCategoryQuestDebugData
{
public:
    void* QuestDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* QuestDisplayData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString ListItemId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::int32_t AchievedCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t QuestState; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCategoryQuestDebugData, QuestDefinition) == 0, "Offset mismatch for FCategoryQuestDebugData::QuestDefinition");
static_assert(offsetof(FCategoryQuestDebugData, QuestDisplayData) == 8, "Offset mismatch for FCategoryQuestDebugData::QuestDisplayData");
static_assert(offsetof(FCategoryQuestDebugData, ListItemId) == 16, "Offset mismatch for FCategoryQuestDebugData::ListItemId");
static_assert(offsetof(FCategoryQuestDebugData, DisplayName) == 32, "Offset mismatch for FCategoryQuestDebugData::DisplayName");
static_assert(offsetof(FCategoryQuestDebugData, AchievedCount) == 48, "Offset mismatch for FCategoryQuestDebugData::AchievedCount");
static_assert(offsetof(FCategoryQuestDebugData, RequiredCount) == 52, "Offset mismatch for FCategoryQuestDebugData::RequiredCount");
static_assert(offsetof(FCategoryQuestDebugData, QuestState) == 56, "Offset mismatch for FCategoryQuestDebugData::QuestState");

// /Script/QuestUI.QuestPanelDebugBackendData
// Kind: ScriptStruct; super: none
struct FQuestPanelDebugBackendData
{
public:
    FString AccountName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString BackendName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Environment; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    std::uint8_t BackendDateTime[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t bHasBuildVersion; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t BuildVersion[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t VersionRelation; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FQuestPanelDebugBackendData, AccountName) == 0, "Offset mismatch for FQuestPanelDebugBackendData::AccountName");
static_assert(offsetof(FQuestPanelDebugBackendData, BackendName) == 16, "Offset mismatch for FQuestPanelDebugBackendData::BackendName");
static_assert(offsetof(FQuestPanelDebugBackendData, Environment) == 32, "Offset mismatch for FQuestPanelDebugBackendData::Environment");
static_assert(offsetof(FQuestPanelDebugBackendData, BackendDateTime) == 40, "Offset mismatch for FQuestPanelDebugBackendData::BackendDateTime");
static_assert(offsetof(FQuestPanelDebugBackendData, bHasBuildVersion) == 48, "Offset mismatch for FQuestPanelDebugBackendData::bHasBuildVersion");
static_assert(offsetof(FQuestPanelDebugBackendData, BuildVersion) == 56, "Offset mismatch for FQuestPanelDebugBackendData::BuildVersion");
static_assert(offsetof(FQuestPanelDebugBackendData, VersionRelation) == 104, "Offset mismatch for FQuestPanelDebugBackendData::VersionRelation");

// /Script/QuestUI.QuestPanelDebugBuildVersion
// Kind: ScriptStruct; super: none
struct FQuestPanelDebugBuildVersion
{
public:
    FString Branch; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Version; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Changelist; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasBuildDate; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t BuildDate[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestPanelDebugBuildVersion, Branch) == 0, "Offset mismatch for FQuestPanelDebugBuildVersion::Branch");
static_assert(offsetof(FQuestPanelDebugBuildVersion, Version) == 16, "Offset mismatch for FQuestPanelDebugBuildVersion::Version");
static_assert(offsetof(FQuestPanelDebugBuildVersion, Changelist) == 32, "Offset mismatch for FQuestPanelDebugBuildVersion::Changelist");
static_assert(offsetof(FQuestPanelDebugBuildVersion, bHasBuildDate) == 36, "Offset mismatch for FQuestPanelDebugBuildVersion::bHasBuildDate");
static_assert(offsetof(FQuestPanelDebugBuildVersion, BuildDate) == 40, "Offset mismatch for FQuestPanelDebugBuildVersion::BuildDate");

// /Script/QuestUI.QuestPanelDebugCategoryData
// Kind: ScriptStruct; super: none
struct FQuestPanelDebugCategoryData
{
public:
    FString CategoryListItemId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCategoryHasInstance; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    void* CategoryData; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bActiveProductInjectionUsed; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    TArray<void*> ProductList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FQuestPanelDebugCategoryData, CategoryListItemId) == 0, "Offset mismatch for FQuestPanelDebugCategoryData::CategoryListItemId");
static_assert(offsetof(FQuestPanelDebugCategoryData, bCategoryHasInstance) == 16, "Offset mismatch for FQuestPanelDebugCategoryData::bCategoryHasInstance");
static_assert(offsetof(FQuestPanelDebugCategoryData, CategoryData) == 24, "Offset mismatch for FQuestPanelDebugCategoryData::CategoryData");
static_assert(offsetof(FQuestPanelDebugCategoryData, bActiveProductInjectionUsed) == 32, "Offset mismatch for FQuestPanelDebugCategoryData::bActiveProductInjectionUsed");
static_assert(offsetof(FQuestPanelDebugCategoryData, ProductList) == 40, "Offset mismatch for FQuestPanelDebugCategoryData::ProductList");

// /Script/QuestUI.QuestPanelDebugPlacementIssue
// Kind: ScriptStruct; super: none
struct FQuestPanelDebugPlacementIssue
{
public:
    std::uint8_t ReasonText[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString CategoryListItemId; // 0x0010 (Size: 0x10, Type: StrProperty)
    void* CategoryData; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCategoryHasInstance; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FQuestPanelDebugPlacementIssue, ReasonText) == 0, "Offset mismatch for FQuestPanelDebugPlacementIssue::ReasonText");
static_assert(offsetof(FQuestPanelDebugPlacementIssue, CategoryListItemId) == 16, "Offset mismatch for FQuestPanelDebugPlacementIssue::CategoryListItemId");
static_assert(offsetof(FQuestPanelDebugPlacementIssue, CategoryData) == 32, "Offset mismatch for FQuestPanelDebugPlacementIssue::CategoryData");
static_assert(offsetof(FQuestPanelDebugPlacementIssue, bCategoryHasInstance) == 40, "Offset mismatch for FQuestPanelDebugPlacementIssue::bCategoryHasInstance");

// /Script/QuestUI.QuestPanelDebugToolFilter
// Kind: ScriptStruct; super: none
struct FQuestPanelDebugToolFilter
{
public:
    FString SearchString; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIncludeQuests; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeBundles; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeSchedules; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeCategories; // 0x0013 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bViewOnly; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeUnorganizedContent; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowInactiveContent; // 0x0016 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0017
    std::uint8_t OrganizationTags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t bTagsAvailable; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FQuestPanelDebugToolFilter, SearchString) == 0, "Offset mismatch for FQuestPanelDebugToolFilter::SearchString");
static_assert(offsetof(FQuestPanelDebugToolFilter, bIncludeQuests) == 16, "Offset mismatch for FQuestPanelDebugToolFilter::bIncludeQuests");
static_assert(offsetof(FQuestPanelDebugToolFilter, bIncludeBundles) == 17, "Offset mismatch for FQuestPanelDebugToolFilter::bIncludeBundles");
static_assert(offsetof(FQuestPanelDebugToolFilter, bIncludeSchedules) == 18, "Offset mismatch for FQuestPanelDebugToolFilter::bIncludeSchedules");
static_assert(offsetof(FQuestPanelDebugToolFilter, bIncludeCategories) == 19, "Offset mismatch for FQuestPanelDebugToolFilter::bIncludeCategories");
static_assert(offsetof(FQuestPanelDebugToolFilter, bViewOnly) == 20, "Offset mismatch for FQuestPanelDebugToolFilter::bViewOnly");
static_assert(offsetof(FQuestPanelDebugToolFilter, bIncludeUnorganizedContent) == 21, "Offset mismatch for FQuestPanelDebugToolFilter::bIncludeUnorganizedContent");
static_assert(offsetof(FQuestPanelDebugToolFilter, bShowInactiveContent) == 22, "Offset mismatch for FQuestPanelDebugToolFilter::bShowInactiveContent");
static_assert(offsetof(FQuestPanelDebugToolFilter, OrganizationTags) == 24, "Offset mismatch for FQuestPanelDebugToolFilter::OrganizationTags");
static_assert(offsetof(FQuestPanelDebugToolFilter, bTagsAvailable) == 56, "Offset mismatch for FQuestPanelDebugToolFilter::bTagsAvailable");

// /Script/QuestUI.QuestUIMapData
// Kind: ScriptStruct; super: none
struct FQuestUIMapData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CachedQuestView[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    void* SelectedEntryVM; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQuestUIMapData, CachedQuestView) == 56, "Offset mismatch for FQuestUIMapData::CachedQuestView");
static_assert(offsetof(FQuestUIMapData, SelectedEntryVM) == 88, "Offset mismatch for FQuestUIMapData::SelectedEntryVM");

// /Script/QuestUI.QuestUISelectionData
// Kind: ScriptStruct; super: none
struct FQuestUISelectionData
{
public:
    void* ProductVM; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CategoryInterfaceVM; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ContentVM; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ContentChildVM; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQuestUISelectionData, ProductVM) == 0, "Offset mismatch for FQuestUISelectionData::ProductVM");
static_assert(offsetof(FQuestUISelectionData, CategoryInterfaceVM) == 8, "Offset mismatch for FQuestUISelectionData::CategoryInterfaceVM");
static_assert(offsetof(FQuestUISelectionData, ContentVM) == 16, "Offset mismatch for FQuestUISelectionData::ContentVM");
static_assert(offsetof(FQuestUISelectionData, ContentChildVM) == 24, "Offset mismatch for FQuestUISelectionData::ContentChildVM");

// /Script/QuestUI.SaveDataCinematicReward
// Kind: ScriptStruct; super: SaveDataBase
struct FSaveDataCinematicReward
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bIsWatched; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSaveDataCinematicReward, bIsWatched) == 32, "Offset mismatch for FSaveDataCinematicReward::bIsWatched");

// /Script/QuestUI.ScheduleBundleEntryDebugData
// Kind: ScriptStruct; super: none
struct FScheduleBundleEntryDebugData
{
public:
    void* BundleDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* BundleDisplayData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString BundleListItemId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bHasBundleView; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UnlockType; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0022
    std::int32_t UnlockValue; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t UnlockTime[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t UnlockTimeState; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t ExpirationTime[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationTimeState; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FScheduleBundleEntryDebugData, BundleDefinition) == 0, "Offset mismatch for FScheduleBundleEntryDebugData::BundleDefinition");
static_assert(offsetof(FScheduleBundleEntryDebugData, BundleDisplayData) == 8, "Offset mismatch for FScheduleBundleEntryDebugData::BundleDisplayData");
static_assert(offsetof(FScheduleBundleEntryDebugData, BundleListItemId) == 16, "Offset mismatch for FScheduleBundleEntryDebugData::BundleListItemId");
static_assert(offsetof(FScheduleBundleEntryDebugData, bHasBundleView) == 32, "Offset mismatch for FScheduleBundleEntryDebugData::bHasBundleView");
static_assert(offsetof(FScheduleBundleEntryDebugData, UnlockType) == 33, "Offset mismatch for FScheduleBundleEntryDebugData::UnlockType");
static_assert(offsetof(FScheduleBundleEntryDebugData, UnlockValue) == 36, "Offset mismatch for FScheduleBundleEntryDebugData::UnlockValue");
static_assert(offsetof(FScheduleBundleEntryDebugData, UnlockTime) == 40, "Offset mismatch for FScheduleBundleEntryDebugData::UnlockTime");
static_assert(offsetof(FScheduleBundleEntryDebugData, UnlockTimeState) == 48, "Offset mismatch for FScheduleBundleEntryDebugData::UnlockTimeState");
static_assert(offsetof(FScheduleBundleEntryDebugData, ExpirationTime) == 56, "Offset mismatch for FScheduleBundleEntryDebugData::ExpirationTime");
static_assert(offsetof(FScheduleBundleEntryDebugData, ExpirationTimeState) == 64, "Offset mismatch for FScheduleBundleEntryDebugData::ExpirationTimeState");

// /Script/QuestUI.QuestPanelDebugListItem
// Kind: Class; super: Object
class UQuestPanelDebugListItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestUI.QuestPanelDebugListItem_Bundle
// Kind: Class; super: QuestPanelDebugListItem
class UQuestPanelDebugListItem_Bundle
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* BundleDefinition; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* BundleDisplayData; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00A8
    void* OwningSchedule; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugListItem_Bundle, BundleDefinition) == 152, "Offset mismatch for UQuestPanelDebugListItem_Bundle::BundleDefinition");
static_assert(offsetof(UQuestPanelDebugListItem_Bundle, BundleDisplayData) == 160, "Offset mismatch for UQuestPanelDebugListItem_Bundle::BundleDisplayData");
static_assert(offsetof(UQuestPanelDebugListItem_Bundle, OwningSchedule) == 184, "Offset mismatch for UQuestPanelDebugListItem_Bundle::OwningSchedule");

// /Script/QuestUI.QuestPanelDebugListItem_Category
// Kind: Class; super: QuestPanelDebugListItem
class UQuestPanelDebugListItem_Category
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* CategoryData; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugListItem_Category, CategoryData) == 152, "Offset mismatch for UQuestPanelDebugListItem_Category::CategoryData");

// /Script/QuestUI.QuestPanelDebugListItem_Quest
// Kind: Class; super: QuestPanelDebugListItem
class UQuestPanelDebugListItem_Quest
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* QuestDefinition; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* QuestDisplayData; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedQuestView[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    void* OwningBundle; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugListItem_Quest, QuestDefinition) == 152, "Offset mismatch for UQuestPanelDebugListItem_Quest::QuestDefinition");
static_assert(offsetof(UQuestPanelDebugListItem_Quest, QuestDisplayData) == 160, "Offset mismatch for UQuestPanelDebugListItem_Quest::QuestDisplayData");
static_assert(offsetof(UQuestPanelDebugListItem_Quest, CachedQuestView) == 168, "Offset mismatch for UQuestPanelDebugListItem_Quest::CachedQuestView");
static_assert(offsetof(UQuestPanelDebugListItem_Quest, OwningBundle) == 184, "Offset mismatch for UQuestPanelDebugListItem_Quest::OwningBundle");

// /Script/QuestUI.QuestPanelDebugListItem_Schedule
// Kind: Class; super: QuestPanelDebugListItem
class UQuestPanelDebugListItem_Schedule
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* ScheduleDefinition; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* ScheduleDisplayData; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugListItem_Schedule, ScheduleDefinition) == 152, "Offset mismatch for UQuestPanelDebugListItem_Schedule::ScheduleDefinition");
static_assert(offsetof(UQuestPanelDebugListItem_Schedule, ScheduleDisplayData) == 160, "Offset mismatch for UQuestPanelDebugListItem_Schedule::ScheduleDisplayData");

// /Script/QuestUI.QuestPanelDebugOrganizationNode
// Kind: Class; super: Object
class UQuestPanelDebugOrganizationNode
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ParentNode; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ChildNodes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestPanelDebugOrganizationNode, ParentNode) == 72, "Offset mismatch for UQuestPanelDebugOrganizationNode::ParentNode");
static_assert(offsetof(UQuestPanelDebugOrganizationNode, ChildNodes) == 80, "Offset mismatch for UQuestPanelDebugOrganizationNode::ChildNodes");

// /Script/QuestUI.QuestPanelDebugTool
// Kind: Class; super: CommonActivatableWidget
class UQuestPanelDebugTool
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* ListView_Entries; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x130]; // 0x04A8
    void* RootOrganizationNode; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugTool, ListView_Entries) == 1184, "Offset mismatch for UQuestPanelDebugTool::ListView_Entries");
static_assert(offsetof(UQuestPanelDebugTool, RootOrganizationNode) == 1496, "Offset mismatch for UQuestPanelDebugTool::RootOrganizationNode");

// /Script/QuestUI.QuestPanelDebugToolListEntry
// Kind: Class; super: UserWidget
class UQuestPanelDebugToolListEntry
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestPanelDebugToolListEntry, ColorAndOpacity) == 416, "Offset mismatch for UQuestPanelDebugToolListEntry::ColorAndOpacity");
static_assert(offsetof(UQuestPanelDebugToolListEntry, ColorAndOpacityDelegate) == 432, "Offset mismatch for UQuestPanelDebugToolListEntry::ColorAndOpacityDelegate");
static_assert(offsetof(UQuestPanelDebugToolListEntry, ForegroundColor) == 444, "Offset mismatch for UQuestPanelDebugToolListEntry::ForegroundColor");
static_assert(offsetof(UQuestPanelDebugToolListEntry, ForegroundColorDelegate) == 464, "Offset mismatch for UQuestPanelDebugToolListEntry::ForegroundColorDelegate");
static_assert(offsetof(UQuestPanelDebugToolListEntry, OnVisibilityChanged) == 480, "Offset mismatch for UQuestPanelDebugToolListEntry::OnVisibilityChanged");
static_assert(offsetof(UQuestPanelDebugToolListEntry, Padding) == 544, "Offset mismatch for UQuestPanelDebugToolListEntry::Padding");
static_assert(offsetof(UQuestPanelDebugToolListEntry, Priority) == 560, "Offset mismatch for UQuestPanelDebugToolListEntry::Priority");
static_assert(offsetof(UQuestPanelDebugToolListEntry, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UQuestPanelDebugToolListEntry::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UQuestPanelDebugToolListEntry, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UQuestPanelDebugToolListEntry::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UQuestPanelDebugToolListEntry, ActiveSequencePlayers) == 584, "Offset mismatch for UQuestPanelDebugToolListEntry::ActiveSequencePlayers");
static_assert(offsetof(UQuestPanelDebugToolListEntry, AnimationTickManager) == 600, "Offset mismatch for UQuestPanelDebugToolListEntry::AnimationTickManager");
static_assert(offsetof(UQuestPanelDebugToolListEntry, StoppedSequencePlayers) == 608, "Offset mismatch for UQuestPanelDebugToolListEntry::StoppedSequencePlayers");
static_assert(offsetof(UQuestPanelDebugToolListEntry, NamedSlotBindings) == 648, "Offset mismatch for UQuestPanelDebugToolListEntry::NamedSlotBindings");
static_assert(offsetof(UQuestPanelDebugToolListEntry, Extensions) == 664, "Offset mismatch for UQuestPanelDebugToolListEntry::Extensions");
static_assert(offsetof(UQuestPanelDebugToolListEntry, WidgetTree) == 680, "Offset mismatch for UQuestPanelDebugToolListEntry::WidgetTree");
static_assert(offsetof(UQuestPanelDebugToolListEntry, bHasScriptImplementedPaint) == 688, "Offset mismatch for UQuestPanelDebugToolListEntry::bHasScriptImplementedPaint");
static_assert(offsetof(UQuestPanelDebugToolListEntry, TickFrequency) == 712, "Offset mismatch for UQuestPanelDebugToolListEntry::TickFrequency");
static_assert(offsetof(UQuestPanelDebugToolListEntry, DesiredFocusWidget) == 716, "Offset mismatch for UQuestPanelDebugToolListEntry::DesiredFocusWidget");
static_assert(offsetof(UQuestPanelDebugToolListEntry, InputComponent) == 728, "Offset mismatch for UQuestPanelDebugToolListEntry::InputComponent");
static_assert(offsetof(UQuestPanelDebugToolListEntry, AnimationCallbacks) == 736, "Offset mismatch for UQuestPanelDebugToolListEntry::AnimationCallbacks");

// /Script/QuestUI.QuestPanelDebugToolOrganizationEntry
// Kind: Class; super: UserWidget
class UQuestPanelDebugToolOrganizationEntry
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, ColorAndOpacity) == 416, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::ColorAndOpacity");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, ColorAndOpacityDelegate) == 432, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::ColorAndOpacityDelegate");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, ForegroundColor) == 444, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::ForegroundColor");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, ForegroundColorDelegate) == 464, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::ForegroundColorDelegate");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, OnVisibilityChanged) == 480, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::OnVisibilityChanged");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, Padding) == 544, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::Padding");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, Priority) == 560, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::Priority");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, ActiveSequencePlayers) == 584, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::ActiveSequencePlayers");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, AnimationTickManager) == 600, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::AnimationTickManager");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, StoppedSequencePlayers) == 608, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::StoppedSequencePlayers");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, NamedSlotBindings) == 648, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::NamedSlotBindings");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, Extensions) == 664, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::Extensions");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, WidgetTree) == 680, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::WidgetTree");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, bHasScriptImplementedPaint) == 688, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::bHasScriptImplementedPaint");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, TickFrequency) == 712, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::TickFrequency");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, DesiredFocusWidget) == 716, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::DesiredFocusWidget");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, InputComponent) == 728, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::InputComponent");
static_assert(offsetof(UQuestPanelDebugToolOrganizationEntry, AnimationCallbacks) == 736, "Offset mismatch for UQuestPanelDebugToolOrganizationEntry::AnimationCallbacks");

// /Script/QuestUI.QuestPanelDebugToolOrganizationListView
// Kind: Class; super: ListView
class UQuestPanelDebugToolOrganizationListView
{
public:
    std::uint8_t Pad_0000[0xFE0]; // 0x0000
    FMulticastInlineDelegate OnCheckedTagsChanged; // 0x0FE0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* RootNode; // 0x0FF0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugToolOrganizationListView, OnCheckedTagsChanged) == 4064, "Offset mismatch for UQuestPanelDebugToolOrganizationListView::OnCheckedTagsChanged");
static_assert(offsetof(UQuestPanelDebugToolOrganizationListView, RootNode) == 4080, "Offset mismatch for UQuestPanelDebugToolOrganizationListView::RootNode");

// /Script/QuestUI.QuestPanelDebugToolViewModel
// Kind: Class; super: FortPerUserViewModel
class UQuestPanelDebugToolViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t CachedQuestView[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t bHasQuestView; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    void* QuestDefinition; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* QuestDisplayData; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FString QuestListItemId; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t QuestDisplayName[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::int32_t QuestAchievedCount; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::int32_t QuestRequiredCount; // 0x00CC (Size: 0x4, Type: IntProperty)
    std::uint8_t QuestState; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D1
    std::uint8_t ProductCompatibilityQueryText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t AdditionalQueryTagText[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t bQueryPassesForActivePlaylist; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x17]; // 0x00F9
    std::uint8_t bHasBundleView; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0111
    void* BundleDefinition; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* BundleDisplayData; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    FString BundleListItemId; // 0x0128 (Size: 0x10, Type: StrProperty)
    std::int32_t BundleAchievedCount; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::int32_t BundleRequiredCount; // 0x013C (Size: 0x4, Type: IntProperty)
    std::uint8_t BundleState; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x27]; // 0x0141
    TArray<void*> BundleEntryData; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalCardDisplayData[0x50]; // 0x0178 (Size: 0x50, Type: StructProperty)
    std::uint8_t bSkipAddToGoalBundles; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x17]; // 0x01C9
    std::uint8_t bHasScheduleView; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x01E1
    void* ScheduleDefinition; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
    void* ScheduleDisplayData; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    FString ScheduleListItemId; // 0x01F8 (Size: 0x10, Type: StrProperty)
    TArray<void*> ScheduleEntries; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    FString EventName; // 0x0218 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEventFound; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0229
    std::uint8_t EventStart[0x8]; // 0x0230 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventEnd[0x8]; // 0x0238 (Size: 0x8, Type: StructProperty)
    std::uint8_t PrimaryUnlockTime[0x8]; // 0x0240 (Size: 0x8, Type: StructProperty)
    std::uint8_t PrimaryUnlockTimeState; // 0x0248 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0009[0x7]; // 0x0249
    std::uint8_t PrimaryExpirationTime[0x8]; // 0x0250 (Size: 0x8, Type: StructProperty)
    std::uint8_t PrimaryExpirationTimeState; // 0x0258 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x17]; // 0x0259
    std::uint8_t CategoryDebugData[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    std::uint8_t CategoryOrganizationData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t QuestTags[0x20]; // 0x02B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t BundleTags[0x20]; // 0x02D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSkippedOrganization; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x02F9
    TArray<void*> CategoryList; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CategoryPlacementIssues; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAvailableInActiveProduct; // 0x0320 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x3]; // 0x0321
    std::uint8_t ActiveProductTag[0x4]; // 0x0324 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsContentVisible; // 0x0328 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x7]; // 0x0329
    std::uint8_t VisibilityReasonText[0x10]; // 0x0330 (Size: 0x10, Type: TextProperty)
    std::uint8_t bHasBuildData; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x7]; // 0x0341
    std::uint8_t BuildActiveVersion[0x30]; // 0x0348 (Size: 0x30, Type: StructProperty)
    std::uint8_t AssetReleaseVersion[0x10]; // 0x0378 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssetSunsetVersion[0x10]; // 0x0388 (Size: 0x10, Type: TextProperty)
    std::uint8_t bResidesInPlugin; // 0x0398 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x7]; // 0x0399
    FString PluginName; // 0x03A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t PluginReleaseVersion[0x10]; // 0x03B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PluginSunsetVersion[0x10]; // 0x03C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t VersionWarning[0x10]; // 0x03D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t BackendData[0x70]; // 0x03E0 (Size: 0x70, Type: StructProperty)
    std::uint8_t bQuestDataInitialized; // 0x0450 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrimaryAssetHasView; // 0x0451 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x6]; // 0x0452
    FString PrimaryAssetListItemId; // 0x0458 (Size: 0x10, Type: StrProperty)
    void* PrimaryDefinition; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryDisplayData; // 0x0470 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestPanelDebugToolViewModel, CachedQuestView) == 128, "Offset mismatch for UQuestPanelDebugToolViewModel::CachedQuestView");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bHasQuestView) == 144, "Offset mismatch for UQuestPanelDebugToolViewModel::bHasQuestView");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestDefinition) == 152, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestDefinition");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestDisplayData) == 160, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestDisplayData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestListItemId) == 168, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestListItemId");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestDisplayName) == 184, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestDisplayName");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestAchievedCount) == 200, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestAchievedCount");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestRequiredCount) == 204, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestRequiredCount");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestState) == 208, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestState");
static_assert(offsetof(UQuestPanelDebugToolViewModel, ProductCompatibilityQueryText) == 216, "Offset mismatch for UQuestPanelDebugToolViewModel::ProductCompatibilityQueryText");
static_assert(offsetof(UQuestPanelDebugToolViewModel, AdditionalQueryTagText) == 232, "Offset mismatch for UQuestPanelDebugToolViewModel::AdditionalQueryTagText");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bQueryPassesForActivePlaylist) == 248, "Offset mismatch for UQuestPanelDebugToolViewModel::bQueryPassesForActivePlaylist");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bHasBundleView) == 272, "Offset mismatch for UQuestPanelDebugToolViewModel::bHasBundleView");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleDefinition) == 280, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleDefinition");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleDisplayData) == 288, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleDisplayData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleListItemId) == 296, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleListItemId");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleAchievedCount) == 312, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleAchievedCount");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleRequiredCount) == 316, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleRequiredCount");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleState) == 320, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleState");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleEntryData) == 360, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleEntryData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, GoalCardDisplayData) == 376, "Offset mismatch for UQuestPanelDebugToolViewModel::GoalCardDisplayData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bSkipAddToGoalBundles) == 456, "Offset mismatch for UQuestPanelDebugToolViewModel::bSkipAddToGoalBundles");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bHasScheduleView) == 480, "Offset mismatch for UQuestPanelDebugToolViewModel::bHasScheduleView");
static_assert(offsetof(UQuestPanelDebugToolViewModel, ScheduleDefinition) == 488, "Offset mismatch for UQuestPanelDebugToolViewModel::ScheduleDefinition");
static_assert(offsetof(UQuestPanelDebugToolViewModel, ScheduleDisplayData) == 496, "Offset mismatch for UQuestPanelDebugToolViewModel::ScheduleDisplayData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, ScheduleListItemId) == 504, "Offset mismatch for UQuestPanelDebugToolViewModel::ScheduleListItemId");
static_assert(offsetof(UQuestPanelDebugToolViewModel, ScheduleEntries) == 520, "Offset mismatch for UQuestPanelDebugToolViewModel::ScheduleEntries");
static_assert(offsetof(UQuestPanelDebugToolViewModel, EventName) == 536, "Offset mismatch for UQuestPanelDebugToolViewModel::EventName");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bEventFound) == 552, "Offset mismatch for UQuestPanelDebugToolViewModel::bEventFound");
static_assert(offsetof(UQuestPanelDebugToolViewModel, EventStart) == 560, "Offset mismatch for UQuestPanelDebugToolViewModel::EventStart");
static_assert(offsetof(UQuestPanelDebugToolViewModel, EventEnd) == 568, "Offset mismatch for UQuestPanelDebugToolViewModel::EventEnd");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryUnlockTime) == 576, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryUnlockTime");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryUnlockTimeState) == 584, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryUnlockTimeState");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryExpirationTime) == 592, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryExpirationTime");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryExpirationTimeState) == 600, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryExpirationTimeState");
static_assert(offsetof(UQuestPanelDebugToolViewModel, CategoryDebugData) == 624, "Offset mismatch for UQuestPanelDebugToolViewModel::CategoryDebugData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, CategoryOrganizationData) == 680, "Offset mismatch for UQuestPanelDebugToolViewModel::CategoryOrganizationData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, QuestTags) == 696, "Offset mismatch for UQuestPanelDebugToolViewModel::QuestTags");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BundleTags) == 728, "Offset mismatch for UQuestPanelDebugToolViewModel::BundleTags");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bSkippedOrganization) == 760, "Offset mismatch for UQuestPanelDebugToolViewModel::bSkippedOrganization");
static_assert(offsetof(UQuestPanelDebugToolViewModel, CategoryList) == 768, "Offset mismatch for UQuestPanelDebugToolViewModel::CategoryList");
static_assert(offsetof(UQuestPanelDebugToolViewModel, CategoryPlacementIssues) == 784, "Offset mismatch for UQuestPanelDebugToolViewModel::CategoryPlacementIssues");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bAvailableInActiveProduct) == 800, "Offset mismatch for UQuestPanelDebugToolViewModel::bAvailableInActiveProduct");
static_assert(offsetof(UQuestPanelDebugToolViewModel, ActiveProductTag) == 804, "Offset mismatch for UQuestPanelDebugToolViewModel::ActiveProductTag");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bIsContentVisible) == 808, "Offset mismatch for UQuestPanelDebugToolViewModel::bIsContentVisible");
static_assert(offsetof(UQuestPanelDebugToolViewModel, VisibilityReasonText) == 816, "Offset mismatch for UQuestPanelDebugToolViewModel::VisibilityReasonText");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bHasBuildData) == 832, "Offset mismatch for UQuestPanelDebugToolViewModel::bHasBuildData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BuildActiveVersion) == 840, "Offset mismatch for UQuestPanelDebugToolViewModel::BuildActiveVersion");
static_assert(offsetof(UQuestPanelDebugToolViewModel, AssetReleaseVersion) == 888, "Offset mismatch for UQuestPanelDebugToolViewModel::AssetReleaseVersion");
static_assert(offsetof(UQuestPanelDebugToolViewModel, AssetSunsetVersion) == 904, "Offset mismatch for UQuestPanelDebugToolViewModel::AssetSunsetVersion");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bResidesInPlugin) == 920, "Offset mismatch for UQuestPanelDebugToolViewModel::bResidesInPlugin");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PluginName) == 928, "Offset mismatch for UQuestPanelDebugToolViewModel::PluginName");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PluginReleaseVersion) == 944, "Offset mismatch for UQuestPanelDebugToolViewModel::PluginReleaseVersion");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PluginSunsetVersion) == 960, "Offset mismatch for UQuestPanelDebugToolViewModel::PluginSunsetVersion");
static_assert(offsetof(UQuestPanelDebugToolViewModel, VersionWarning) == 976, "Offset mismatch for UQuestPanelDebugToolViewModel::VersionWarning");
static_assert(offsetof(UQuestPanelDebugToolViewModel, BackendData) == 992, "Offset mismatch for UQuestPanelDebugToolViewModel::BackendData");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bQuestDataInitialized) == 1104, "Offset mismatch for UQuestPanelDebugToolViewModel::bQuestDataInitialized");
static_assert(offsetof(UQuestPanelDebugToolViewModel, bPrimaryAssetHasView) == 1105, "Offset mismatch for UQuestPanelDebugToolViewModel::bPrimaryAssetHasView");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryAssetListItemId) == 1112, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryAssetListItemId");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryDefinition) == 1128, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryDefinition");
static_assert(offsetof(UQuestPanelDebugToolViewModel, PrimaryDisplayData) == 1136, "Offset mismatch for UQuestPanelDebugToolViewModel::PrimaryDisplayData");

// /Script/QuestUI.QuestPanelDebugToolWidgetBase
// Kind: Class; super: UserWidget
class UQuestPanelDebugToolWidgetBase
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestPanelDebugToolWidgetBase, ColorAndOpacity) == 416, "Offset mismatch for UQuestPanelDebugToolWidgetBase::ColorAndOpacity");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, ColorAndOpacityDelegate) == 432, "Offset mismatch for UQuestPanelDebugToolWidgetBase::ColorAndOpacityDelegate");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, ForegroundColor) == 444, "Offset mismatch for UQuestPanelDebugToolWidgetBase::ForegroundColor");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, ForegroundColorDelegate) == 464, "Offset mismatch for UQuestPanelDebugToolWidgetBase::ForegroundColorDelegate");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, OnVisibilityChanged) == 480, "Offset mismatch for UQuestPanelDebugToolWidgetBase::OnVisibilityChanged");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, Padding) == 544, "Offset mismatch for UQuestPanelDebugToolWidgetBase::Padding");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, Priority) == 560, "Offset mismatch for UQuestPanelDebugToolWidgetBase::Priority");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UQuestPanelDebugToolWidgetBase::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UQuestPanelDebugToolWidgetBase::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, ActiveSequencePlayers) == 584, "Offset mismatch for UQuestPanelDebugToolWidgetBase::ActiveSequencePlayers");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, AnimationTickManager) == 600, "Offset mismatch for UQuestPanelDebugToolWidgetBase::AnimationTickManager");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, StoppedSequencePlayers) == 608, "Offset mismatch for UQuestPanelDebugToolWidgetBase::StoppedSequencePlayers");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, NamedSlotBindings) == 648, "Offset mismatch for UQuestPanelDebugToolWidgetBase::NamedSlotBindings");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, Extensions) == 664, "Offset mismatch for UQuestPanelDebugToolWidgetBase::Extensions");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, WidgetTree) == 680, "Offset mismatch for UQuestPanelDebugToolWidgetBase::WidgetTree");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, bHasScriptImplementedPaint) == 688, "Offset mismatch for UQuestPanelDebugToolWidgetBase::bHasScriptImplementedPaint");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, TickFrequency) == 712, "Offset mismatch for UQuestPanelDebugToolWidgetBase::TickFrequency");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, DesiredFocusWidget) == 716, "Offset mismatch for UQuestPanelDebugToolWidgetBase::DesiredFocusWidget");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, InputComponent) == 728, "Offset mismatch for UQuestPanelDebugToolWidgetBase::InputComponent");
static_assert(offsetof(UQuestPanelDebugToolWidgetBase, AnimationCallbacks) == 736, "Offset mismatch for UQuestPanelDebugToolWidgetBase::AnimationCallbacks");

// /Script/QuestUI.QuestUIBaseContentVM
// Kind: Class; super: QuestUIBaseVM
class UQuestUIBaseContentVM
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bContentEnabled; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UQuestUIBaseContentVM, bContentEnabled) == 168, "Offset mismatch for UQuestUIBaseContentVM::bContentEnabled");

// /Script/QuestUI.QuestUIBaseVM
// Kind: Class; super: FortPerUserViewModel
class UQuestUIBaseVM
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    TArray<void*> Extensions; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestUIBaseVM, Extensions) == 152, "Offset mismatch for UQuestUIBaseVM::Extensions");

// /Script/QuestUI.QuestUIBucketVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIBucketVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> OrderedContentVMs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* PinnedIcon; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestUIBucketVM, DisplayName) == 176, "Offset mismatch for UQuestUIBucketVM::DisplayName");
static_assert(offsetof(UQuestUIBucketVM, Icon) == 192, "Offset mismatch for UQuestUIBucketVM::Icon");
static_assert(offsetof(UQuestUIBucketVM, OrderedContentVMs) == 224, "Offset mismatch for UQuestUIBucketVM::OrderedContentVMs");
static_assert(offsetof(UQuestUIBucketVM, PinnedIcon) == 240, "Offset mismatch for UQuestUIBucketVM::PinnedIcon");

// /Script/QuestUI.QuestUICategoryInterfaceVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUICategoryInterfaceVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t bHasNewContent; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UQuestUICategoryInterfaceVM, bHasNewContent) == 176, "Offset mismatch for UQuestUICategoryInterfaceVM::bHasNewContent");

// /Script/QuestUI.QuestUICategoryVM
// Kind: Class; super: QuestUICategoryInterfaceVM
class UQuestUICategoryVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t CategoryIcon[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> CategoryRewardVMs; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasCosmeticRewards; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCinematicRewards; // 0x0119 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCategoryTracked; // 0x011A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasExpirationTime; // 0x011B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t ExpirationTime[0x8]; // 0x0120 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationDisplayMode; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0129
    std::uint8_t CustomExpirationText[0x10]; // 0x0130 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAllowsMap; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0141
    std::uint8_t CustomMapWidget[0x20]; // 0x0148 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bPropagateCustomMapWidgetForAllContent; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0169
    std::uint8_t CustomMapBackground[0x20]; // 0x0170 (Size: 0x20, Type: SoftObjectProperty)
    FString DebugCategoryID; // 0x0190 (Size: 0x10, Type: StrProperty)
    TArray<void*> OrderedContentVMs; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x18]; // 0x01B0
    TScriptInterface<void> CategoryRuntimeProvider; // 0x01C8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestUICategoryVM, CategoryIcon) == 232, "Offset mismatch for UQuestUICategoryVM::CategoryIcon");
static_assert(offsetof(UQuestUICategoryVM, CategoryRewardVMs) == 264, "Offset mismatch for UQuestUICategoryVM::CategoryRewardVMs");
static_assert(offsetof(UQuestUICategoryVM, bHasCosmeticRewards) == 280, "Offset mismatch for UQuestUICategoryVM::bHasCosmeticRewards");
static_assert(offsetof(UQuestUICategoryVM, bHasCinematicRewards) == 281, "Offset mismatch for UQuestUICategoryVM::bHasCinematicRewards");
static_assert(offsetof(UQuestUICategoryVM, bIsCategoryTracked) == 282, "Offset mismatch for UQuestUICategoryVM::bIsCategoryTracked");
static_assert(offsetof(UQuestUICategoryVM, bHasExpirationTime) == 283, "Offset mismatch for UQuestUICategoryVM::bHasExpirationTime");
static_assert(offsetof(UQuestUICategoryVM, ExpirationTime) == 288, "Offset mismatch for UQuestUICategoryVM::ExpirationTime");
static_assert(offsetof(UQuestUICategoryVM, ExpirationDisplayMode) == 296, "Offset mismatch for UQuestUICategoryVM::ExpirationDisplayMode");
static_assert(offsetof(UQuestUICategoryVM, CustomExpirationText) == 304, "Offset mismatch for UQuestUICategoryVM::CustomExpirationText");
static_assert(offsetof(UQuestUICategoryVM, bAllowsMap) == 320, "Offset mismatch for UQuestUICategoryVM::bAllowsMap");
static_assert(offsetof(UQuestUICategoryVM, CustomMapWidget) == 328, "Offset mismatch for UQuestUICategoryVM::CustomMapWidget");
static_assert(offsetof(UQuestUICategoryVM, bPropagateCustomMapWidgetForAllContent) == 360, "Offset mismatch for UQuestUICategoryVM::bPropagateCustomMapWidgetForAllContent");
static_assert(offsetof(UQuestUICategoryVM, CustomMapBackground) == 368, "Offset mismatch for UQuestUICategoryVM::CustomMapBackground");
static_assert(offsetof(UQuestUICategoryVM, DebugCategoryID) == 400, "Offset mismatch for UQuestUICategoryVM::DebugCategoryID");
static_assert(offsetof(UQuestUICategoryVM, OrderedContentVMs) == 416, "Offset mismatch for UQuestUICategoryVM::OrderedContentVMs");
static_assert(offsetof(UQuestUICategoryVM, CategoryRuntimeProvider) == 456, "Offset mismatch for UQuestUICategoryVM::CategoryRuntimeProvider");

// /Script/QuestUI.QuestUICompatibilityVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUICompatibilityVM
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0120 (Size: 0x10, Type: TextProperty)
    FText DebugWarning; // 0x0130 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UQuestUICompatibilityVM, DisplayName) == 288, "Offset mismatch for UQuestUICompatibilityVM::DisplayName");
static_assert(offsetof(UQuestUICompatibilityVM, DebugWarning) == 304, "Offset mismatch for UQuestUICompatibilityVM::DebugWarning");

// /Script/QuestUI.QuestUICustomCategoryVM
// Kind: Class; super: QuestUICategoryInterfaceVM
class UQuestUICustomCategoryVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> OrderedRowVMs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    void* MapIconClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UQuestUICustomCategoryVM, OrderedRowVMs) == 192, "Offset mismatch for UQuestUICustomCategoryVM::OrderedRowVMs");
static_assert(offsetof(UQuestUICustomCategoryVM, MapIconClass) == 224, "Offset mismatch for UQuestUICustomCategoryVM::MapIconClass");

// /Script/QuestUI.QuestUICustomEntryVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUICustomEntryVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnIsDiscoveredChanged; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t DisplayName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t SmallIcon[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeIcon[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsDiscovered; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UQuestUICustomEntryVM, OnIsDiscoveredChanged) == 176, "Offset mismatch for UQuestUICustomEntryVM::OnIsDiscoveredChanged");
static_assert(offsetof(UQuestUICustomEntryVM, DisplayName) == 192, "Offset mismatch for UQuestUICustomEntryVM::DisplayName");
static_assert(offsetof(UQuestUICustomEntryVM, Description) == 208, "Offset mismatch for UQuestUICustomEntryVM::Description");
static_assert(offsetof(UQuestUICustomEntryVM, SmallIcon) == 224, "Offset mismatch for UQuestUICustomEntryVM::SmallIcon");
static_assert(offsetof(UQuestUICustomEntryVM, LargeIcon) == 256, "Offset mismatch for UQuestUICustomEntryVM::LargeIcon");
static_assert(offsetof(UQuestUICustomEntryVM, bIsDiscovered) == 288, "Offset mismatch for UQuestUICustomEntryVM::bIsDiscovered");

// /Script/QuestUI.QuestUICustomRowVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUICustomRowVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> OrderedContentVMs; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    void* CustomEntryWidgetOverride; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TSoftClassPtr<void> SelectionWidgetOverride; // 0x00C8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UQuestUICustomRowVM, OrderedContentVMs) == 176, "Offset mismatch for UQuestUICustomRowVM::OrderedContentVMs");
static_assert(offsetof(UQuestUICustomRowVM, CustomEntryWidgetOverride) == 192, "Offset mismatch for UQuestUICustomRowVM::CustomEntryWidgetOverride");
static_assert(offsetof(UQuestUICustomRowVM, SelectionWidgetOverride) == 200, "Offset mismatch for UQuestUICustomRowVM::SelectionWidgetOverride");

// /Script/QuestUI.QuestUIDailyPunchCardVM
// Kind: Class; super: QuestUIPunchCardVM
class UQuestUIDailyPunchCardVM
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t HeaderText[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubHeaderText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t orientation; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CustomMapWidget[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomMapBackground[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MapData[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t bHasNewContent; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0191
    TArray<void*> OrderedContentVMs; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    FString DebugBundleID; // 0x01A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0003[0x14]; // 0x01B8
    std::uint8_t bHasExpirationTime; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01CD
    std::uint8_t ExpirationTime[0x8]; // 0x01D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationDisplayMode; // 0x01D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x01D9
    std::uint8_t BackgroundIcon[0x20]; // 0x01E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAllowInspectItems; // 0x0200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0201
    void* ExternalLinkVM; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProgressDisplayMode; // 0x0210 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UQuestUIDailyPunchCardVM, HeaderText) == 200, "Offset mismatch for UQuestUIDailyPunchCardVM::HeaderText");
static_assert(offsetof(UQuestUIDailyPunchCardVM, SubHeaderText) == 216, "Offset mismatch for UQuestUIDailyPunchCardVM::SubHeaderText");
static_assert(offsetof(UQuestUIDailyPunchCardVM, orientation) == 232, "Offset mismatch for UQuestUIDailyPunchCardVM::orientation");
static_assert(offsetof(UQuestUIDailyPunchCardVM, CustomMapWidget) == 240, "Offset mismatch for UQuestUIDailyPunchCardVM::CustomMapWidget");
static_assert(offsetof(UQuestUIDailyPunchCardVM, CustomMapBackground) == 272, "Offset mismatch for UQuestUIDailyPunchCardVM::CustomMapBackground");
static_assert(offsetof(UQuestUIDailyPunchCardVM, MapData) == 304, "Offset mismatch for UQuestUIDailyPunchCardVM::MapData");
static_assert(offsetof(UQuestUIDailyPunchCardVM, bHasNewContent) == 400, "Offset mismatch for UQuestUIDailyPunchCardVM::bHasNewContent");
static_assert(offsetof(UQuestUIDailyPunchCardVM, OrderedContentVMs) == 408, "Offset mismatch for UQuestUIDailyPunchCardVM::OrderedContentVMs");
static_assert(offsetof(UQuestUIDailyPunchCardVM, DebugBundleID) == 424, "Offset mismatch for UQuestUIDailyPunchCardVM::DebugBundleID");
static_assert(offsetof(UQuestUIDailyPunchCardVM, bHasExpirationTime) == 460, "Offset mismatch for UQuestUIDailyPunchCardVM::bHasExpirationTime");
static_assert(offsetof(UQuestUIDailyPunchCardVM, ExpirationTime) == 464, "Offset mismatch for UQuestUIDailyPunchCardVM::ExpirationTime");
static_assert(offsetof(UQuestUIDailyPunchCardVM, ExpirationDisplayMode) == 472, "Offset mismatch for UQuestUIDailyPunchCardVM::ExpirationDisplayMode");
static_assert(offsetof(UQuestUIDailyPunchCardVM, BackgroundIcon) == 480, "Offset mismatch for UQuestUIDailyPunchCardVM::BackgroundIcon");
static_assert(offsetof(UQuestUIDailyPunchCardVM, bAllowInspectItems) == 512, "Offset mismatch for UQuestUIDailyPunchCardVM::bAllowInspectItems");
static_assert(offsetof(UQuestUIDailyPunchCardVM, ExternalLinkVM) == 520, "Offset mismatch for UQuestUIDailyPunchCardVM::ExternalLinkVM");
static_assert(offsetof(UQuestUIDailyPunchCardVM, ProgressDisplayMode) == 528, "Offset mismatch for UQuestUIDailyPunchCardVM::ProgressDisplayMode");

// /Script/QuestUI.QuestUIExtensionBase
// Kind: Class; super: MVVMViewModelBase
class UQuestUIExtensionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestUI.QuestUIExternalLinkVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIExternalLinkVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bOwnerAllowsText; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLinkAvailable; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00C2
    std::uint8_t InputAction[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UQuestUIExternalLinkVM, DisplayName) == 176, "Offset mismatch for UQuestUIExternalLinkVM::DisplayName");
static_assert(offsetof(UQuestUIExternalLinkVM, bOwnerAllowsText) == 192, "Offset mismatch for UQuestUIExternalLinkVM::bOwnerAllowsText");
static_assert(offsetof(UQuestUIExternalLinkVM, bIsLinkAvailable) == 193, "Offset mismatch for UQuestUIExternalLinkVM::bIsLinkAvailable");
static_assert(offsetof(UQuestUIExternalLinkVM, InputAction) == 200, "Offset mismatch for UQuestUIExternalLinkVM::InputAction");

// /Script/QuestUI.QuestUIHeaderVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIHeaderVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TScriptInterface<void> HeaderRuntimeProvider; // 0x00E0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestUIHeaderVM, HeaderRuntimeProvider) == 224, "Offset mismatch for UQuestUIHeaderVM::HeaderRuntimeProvider");

// /Script/QuestUI.QuestUIHorizontalPunchCardExtension
// Kind: Class; super: QuestUIExtensionBase
class UQuestUIHorizontalPunchCardExtension
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t SequenceIndex; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t SequenceState; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float SequenceProgressPercent; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0074
    TSoftObjectPtr<void> CustomGoalIcon; // 0x0078 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UQuestUIHorizontalPunchCardExtension, SequenceIndex) == 104, "Offset mismatch for UQuestUIHorizontalPunchCardExtension::SequenceIndex");
static_assert(offsetof(UQuestUIHorizontalPunchCardExtension, SequenceState) == 108, "Offset mismatch for UQuestUIHorizontalPunchCardExtension::SequenceState");
static_assert(offsetof(UQuestUIHorizontalPunchCardExtension, SequenceProgressPercent) == 112, "Offset mismatch for UQuestUIHorizontalPunchCardExtension::SequenceProgressPercent");
static_assert(offsetof(UQuestUIHorizontalPunchCardExtension, CustomGoalIcon) == 120, "Offset mismatch for UQuestUIHorizontalPunchCardExtension::CustomGoalIcon");

// /Script/QuestUI.QuestUIHorizontalPunchCardVM
// Kind: Class; super: QuestUIPunchCardVM
class UQuestUIHorizontalPunchCardVM
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t HeaderText[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubHeaderText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t orientation; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CustomMapWidget[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomMapBackground[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MapData[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t bHasNewContent; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0191
    TArray<void*> OrderedContentVMs; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    FString DebugBundleID; // 0x01A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0003[0x14]; // 0x01B8
    std::uint8_t bHasExpirationTime; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01CD
    std::uint8_t ExpirationTime[0x8]; // 0x01D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationDisplayMode; // 0x01D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x01D9
    std::uint8_t BackgroundIcon[0x20]; // 0x01E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAllowInspectItems; // 0x0200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0201
    void* ExternalLinkVM; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProgressDisplayMode; // 0x0210 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UQuestUIHorizontalPunchCardVM, HeaderText) == 200, "Offset mismatch for UQuestUIHorizontalPunchCardVM::HeaderText");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, SubHeaderText) == 216, "Offset mismatch for UQuestUIHorizontalPunchCardVM::SubHeaderText");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, orientation) == 232, "Offset mismatch for UQuestUIHorizontalPunchCardVM::orientation");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, CustomMapWidget) == 240, "Offset mismatch for UQuestUIHorizontalPunchCardVM::CustomMapWidget");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, CustomMapBackground) == 272, "Offset mismatch for UQuestUIHorizontalPunchCardVM::CustomMapBackground");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, MapData) == 304, "Offset mismatch for UQuestUIHorizontalPunchCardVM::MapData");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, bHasNewContent) == 400, "Offset mismatch for UQuestUIHorizontalPunchCardVM::bHasNewContent");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, OrderedContentVMs) == 408, "Offset mismatch for UQuestUIHorizontalPunchCardVM::OrderedContentVMs");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, DebugBundleID) == 424, "Offset mismatch for UQuestUIHorizontalPunchCardVM::DebugBundleID");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, bHasExpirationTime) == 460, "Offset mismatch for UQuestUIHorizontalPunchCardVM::bHasExpirationTime");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, ExpirationTime) == 464, "Offset mismatch for UQuestUIHorizontalPunchCardVM::ExpirationTime");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, ExpirationDisplayMode) == 472, "Offset mismatch for UQuestUIHorizontalPunchCardVM::ExpirationDisplayMode");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, BackgroundIcon) == 480, "Offset mismatch for UQuestUIHorizontalPunchCardVM::BackgroundIcon");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, bAllowInspectItems) == 512, "Offset mismatch for UQuestUIHorizontalPunchCardVM::bAllowInspectItems");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, ExternalLinkVM) == 520, "Offset mismatch for UQuestUIHorizontalPunchCardVM::ExternalLinkVM");
static_assert(offsetof(UQuestUIHorizontalPunchCardVM, ProgressDisplayMode) == 528, "Offset mismatch for UQuestUIHorizontalPunchCardVM::ProgressDisplayMode");

// /Script/QuestUI.QuestUILockedQuestVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUILockedQuestVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t LockedQuestData[0x1B8]; // 0x00C0 (Size: 0x1B8, Type: StructProperty)
    TArray<void*> RewardVMs; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    FString DebugSourceID; // 0x0288 (Size: 0x10, Type: StrProperty)
    FString DebugRepresentedID; // 0x0298 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UQuestUILockedQuestVM, LockedQuestData) == 192, "Offset mismatch for UQuestUILockedQuestVM::LockedQuestData");
static_assert(offsetof(UQuestUILockedQuestVM, RewardVMs) == 632, "Offset mismatch for UQuestUILockedQuestVM::RewardVMs");
static_assert(offsetof(UQuestUILockedQuestVM, DebugSourceID) == 648, "Offset mismatch for UQuestUILockedQuestVM::DebugSourceID");
static_assert(offsetof(UQuestUILockedQuestVM, DebugRepresentedID) == 664, "Offset mismatch for UQuestUILockedQuestVM::DebugRepresentedID");

// /Script/QuestUI.QuestUIMap
// Kind: Class; super: AthenaFullScreenMapBase
class UQuestUIMap
{
public:
    std::uint8_t Pad_0000[0x5F8]; // 0x0000
    std::uint8_t CachedQuestView[0x30]; // 0x05F8 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> CustomMapIcons; // 0x0628 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UQuestUIMap, CachedQuestView) == 1528, "Offset mismatch for UQuestUIMap::CachedQuestView");
static_assert(offsetof(UQuestUIMap, CustomMapIcons) == 1576, "Offset mismatch for UQuestUIMap::CustomMapIcons");

// /Script/QuestUI.QuestUIMessageVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIMessageVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t MessageType; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    FText CustomMessage; // 0x00B8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UQuestUIMessageVM, MessageType) == 176, "Offset mismatch for UQuestUIMessageVM::MessageType");
static_assert(offsetof(UQuestUIMessageVM, CustomMessage) == 184, "Offset mismatch for UQuestUIMessageVM::CustomMessage");

// /Script/QuestUI.QuestUIObjectiveVM
// Kind: Class; super: FortPerUserViewModel
class UQuestUIObjectiveVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t AchievedCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    std::uint8_t CachedQuestView[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UQuestUIObjectiveVM, AchievedCount) == 120, "Offset mismatch for UQuestUIObjectiveVM::AchievedCount");
static_assert(offsetof(UQuestUIObjectiveVM, CachedQuestView) == 128, "Offset mismatch for UQuestUIObjectiveVM::CachedQuestView");

// /Script/QuestUI.QuestUIPlayerVM
// Kind: Class; super: QuestUIBaseVM
class UQuestUIPlayerVM
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> OrderedProductVMs; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    void* TrackerVM; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasNewContent; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t DebugPlaylistInfoText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bDebugPlaylistInfoIsWarning; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UQuestUIPlayerVM, OrderedProductVMs) == 208, "Offset mismatch for UQuestUIPlayerVM::OrderedProductVMs");
static_assert(offsetof(UQuestUIPlayerVM, TrackerVM) == 224, "Offset mismatch for UQuestUIPlayerVM::TrackerVM");
static_assert(offsetof(UQuestUIPlayerVM, bHasNewContent) == 232, "Offset mismatch for UQuestUIPlayerVM::bHasNewContent");
static_assert(offsetof(UQuestUIPlayerVM, DebugPlaylistInfoText) == 240, "Offset mismatch for UQuestUIPlayerVM::DebugPlaylistInfoText");
static_assert(offsetof(UQuestUIPlayerVM, bDebugPlaylistInfoIsWarning) == 256, "Offset mismatch for UQuestUIPlayerVM::bDebugPlaylistInfoIsWarning");

// /Script/QuestUI.QuestUIProductVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIProductVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ProductName[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ProductGroupTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ProductIcon[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ProductInstallState; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F9
    TArray<void*> OrderedBucketVMs; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnProductCategoriesChanged; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0120
    void* BucketGroupData; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestUIProductVM, ProductName) == 192, "Offset mismatch for UQuestUIProductVM::ProductName");
static_assert(offsetof(UQuestUIProductVM, ProductGroupTag) == 208, "Offset mismatch for UQuestUIProductVM::ProductGroupTag");
static_assert(offsetof(UQuestUIProductVM, ProductIcon) == 216, "Offset mismatch for UQuestUIProductVM::ProductIcon");
static_assert(offsetof(UQuestUIProductVM, ProductInstallState) == 248, "Offset mismatch for UQuestUIProductVM::ProductInstallState");
static_assert(offsetof(UQuestUIProductVM, OrderedBucketVMs) == 256, "Offset mismatch for UQuestUIProductVM::OrderedBucketVMs");
static_assert(offsetof(UQuestUIProductVM, OnProductCategoriesChanged) == 272, "Offset mismatch for UQuestUIProductVM::OnProductCategoriesChanged");
static_assert(offsetof(UQuestUIProductVM, BucketGroupData) == 320, "Offset mismatch for UQuestUIProductVM::BucketGroupData");

// /Script/QuestUI.QuestUIPunchCardVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIPunchCardVM
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t HeaderText[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SubHeaderText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t orientation; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t CustomMapWidget[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomMapBackground[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MapData[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t bHasNewContent; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0191
    TArray<void*> OrderedContentVMs; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    FString DebugBundleID; // 0x01A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0003[0x14]; // 0x01B8
    std::uint8_t bHasExpirationTime; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01CD
    std::uint8_t ExpirationTime[0x8]; // 0x01D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationDisplayMode; // 0x01D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x01D9
    std::uint8_t BackgroundIcon[0x20]; // 0x01E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bAllowInspectItems; // 0x0200 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0201
    void* ExternalLinkVM; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProgressDisplayMode; // 0x0210 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UQuestUIPunchCardVM, HeaderText) == 200, "Offset mismatch for UQuestUIPunchCardVM::HeaderText");
static_assert(offsetof(UQuestUIPunchCardVM, SubHeaderText) == 216, "Offset mismatch for UQuestUIPunchCardVM::SubHeaderText");
static_assert(offsetof(UQuestUIPunchCardVM, orientation) == 232, "Offset mismatch for UQuestUIPunchCardVM::orientation");
static_assert(offsetof(UQuestUIPunchCardVM, CustomMapWidget) == 240, "Offset mismatch for UQuestUIPunchCardVM::CustomMapWidget");
static_assert(offsetof(UQuestUIPunchCardVM, CustomMapBackground) == 272, "Offset mismatch for UQuestUIPunchCardVM::CustomMapBackground");
static_assert(offsetof(UQuestUIPunchCardVM, MapData) == 304, "Offset mismatch for UQuestUIPunchCardVM::MapData");
static_assert(offsetof(UQuestUIPunchCardVM, bHasNewContent) == 400, "Offset mismatch for UQuestUIPunchCardVM::bHasNewContent");
static_assert(offsetof(UQuestUIPunchCardVM, OrderedContentVMs) == 408, "Offset mismatch for UQuestUIPunchCardVM::OrderedContentVMs");
static_assert(offsetof(UQuestUIPunchCardVM, DebugBundleID) == 424, "Offset mismatch for UQuestUIPunchCardVM::DebugBundleID");
static_assert(offsetof(UQuestUIPunchCardVM, bHasExpirationTime) == 460, "Offset mismatch for UQuestUIPunchCardVM::bHasExpirationTime");
static_assert(offsetof(UQuestUIPunchCardVM, ExpirationTime) == 464, "Offset mismatch for UQuestUIPunchCardVM::ExpirationTime");
static_assert(offsetof(UQuestUIPunchCardVM, ExpirationDisplayMode) == 472, "Offset mismatch for UQuestUIPunchCardVM::ExpirationDisplayMode");
static_assert(offsetof(UQuestUIPunchCardVM, BackgroundIcon) == 480, "Offset mismatch for UQuestUIPunchCardVM::BackgroundIcon");
static_assert(offsetof(UQuestUIPunchCardVM, bAllowInspectItems) == 512, "Offset mismatch for UQuestUIPunchCardVM::bAllowInspectItems");
static_assert(offsetof(UQuestUIPunchCardVM, ExternalLinkVM) == 520, "Offset mismatch for UQuestUIPunchCardVM::ExternalLinkVM");
static_assert(offsetof(UQuestUIPunchCardVM, ProgressDisplayMode) == 528, "Offset mismatch for UQuestUIPunchCardVM::ProgressDisplayMode");

// /Script/QuestUI.QuestUIQuestVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIQuestVM
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t CachedQuestView[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t QuestName[0x10]; // 0x0100 (Size: 0x10, Type: TextProperty)
    std::uint8_t FlavorText[0x10]; // 0x0110 (Size: 0x10, Type: TextProperty)
    std::int32_t AchievedCount; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::uint8_t QuestProgressStyle; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0129
    std::uint8_t CustomBadge[0x20]; // 0x0130 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t StageValue; // 0x0150 (Size: 0x4, Type: IntProperty)
    std::int32_t StageMax; // 0x0154 (Size: 0x4, Type: IntProperty)
    TArray<void*> RewardVMs; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> QuestGiverIcon; // 0x0168 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0002[0x38]; // 0x0190
    std::uint8_t OnlineLinkId[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DiscoveryLinkTreatmentType; // 0x01E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x01E1
    std::uint8_t MapData[0x60]; // 0x01E8 (Size: 0x60, Type: StructProperty)
    std::uint8_t bHasExpirationTime; // 0x0248 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0249
    std::uint8_t ExpirationTime[0x8]; // 0x0250 (Size: 0x8, Type: StructProperty)
    std::uint8_t CustomMapWidget[0x20]; // 0x0258 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PunchCardSettings[0x98]; // 0x0278 (Size: 0x98, Type: StructProperty)
    void* ExternalLinkVM; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SharedQuestType; // 0x0318 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsNew; // 0x0319 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTracked; // 0x031A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x1]; // 0x031B
    std::int32_t TrackIndex; // 0x031C (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsPinned; // 0x0320 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DropPlacement; // 0x0321 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsInMovingMode; // 0x0322 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x0323
    std::int32_t PinIndex; // 0x0324 (Size: 0x4, Type: IntProperty)
    FString DebugQuestID; // 0x0328 (Size: 0x10, Type: StrProperty)
    TArray<void*> ObjectiveViewModels; // 0x0338 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestUIQuestVM, CachedQuestView) == 216, "Offset mismatch for UQuestUIQuestVM::CachedQuestView");
static_assert(offsetof(UQuestUIQuestVM, QuestName) == 256, "Offset mismatch for UQuestUIQuestVM::QuestName");
static_assert(offsetof(UQuestUIQuestVM, FlavorText) == 272, "Offset mismatch for UQuestUIQuestVM::FlavorText");
static_assert(offsetof(UQuestUIQuestVM, AchievedCount) == 288, "Offset mismatch for UQuestUIQuestVM::AchievedCount");
static_assert(offsetof(UQuestUIQuestVM, RequiredCount) == 292, "Offset mismatch for UQuestUIQuestVM::RequiredCount");
static_assert(offsetof(UQuestUIQuestVM, QuestProgressStyle) == 296, "Offset mismatch for UQuestUIQuestVM::QuestProgressStyle");
static_assert(offsetof(UQuestUIQuestVM, CustomBadge) == 304, "Offset mismatch for UQuestUIQuestVM::CustomBadge");
static_assert(offsetof(UQuestUIQuestVM, StageValue) == 336, "Offset mismatch for UQuestUIQuestVM::StageValue");
static_assert(offsetof(UQuestUIQuestVM, StageMax) == 340, "Offset mismatch for UQuestUIQuestVM::StageMax");
static_assert(offsetof(UQuestUIQuestVM, RewardVMs) == 344, "Offset mismatch for UQuestUIQuestVM::RewardVMs");
static_assert(offsetof(UQuestUIQuestVM, QuestGiverIcon) == 360, "Offset mismatch for UQuestUIQuestVM::QuestGiverIcon");
static_assert(offsetof(UQuestUIQuestVM, OnlineLinkId) == 456, "Offset mismatch for UQuestUIQuestVM::OnlineLinkId");
static_assert(offsetof(UQuestUIQuestVM, DiscoveryLinkTreatmentType) == 480, "Offset mismatch for UQuestUIQuestVM::DiscoveryLinkTreatmentType");
static_assert(offsetof(UQuestUIQuestVM, MapData) == 488, "Offset mismatch for UQuestUIQuestVM::MapData");
static_assert(offsetof(UQuestUIQuestVM, bHasExpirationTime) == 584, "Offset mismatch for UQuestUIQuestVM::bHasExpirationTime");
static_assert(offsetof(UQuestUIQuestVM, ExpirationTime) == 592, "Offset mismatch for UQuestUIQuestVM::ExpirationTime");
static_assert(offsetof(UQuestUIQuestVM, CustomMapWidget) == 600, "Offset mismatch for UQuestUIQuestVM::CustomMapWidget");
static_assert(offsetof(UQuestUIQuestVM, PunchCardSettings) == 632, "Offset mismatch for UQuestUIQuestVM::PunchCardSettings");
static_assert(offsetof(UQuestUIQuestVM, ExternalLinkVM) == 784, "Offset mismatch for UQuestUIQuestVM::ExternalLinkVM");
static_assert(offsetof(UQuestUIQuestVM, SharedQuestType) == 792, "Offset mismatch for UQuestUIQuestVM::SharedQuestType");
static_assert(offsetof(UQuestUIQuestVM, bIsNew) == 793, "Offset mismatch for UQuestUIQuestVM::bIsNew");
static_assert(offsetof(UQuestUIQuestVM, bIsTracked) == 794, "Offset mismatch for UQuestUIQuestVM::bIsTracked");
static_assert(offsetof(UQuestUIQuestVM, TrackIndex) == 796, "Offset mismatch for UQuestUIQuestVM::TrackIndex");
static_assert(offsetof(UQuestUIQuestVM, bIsPinned) == 800, "Offset mismatch for UQuestUIQuestVM::bIsPinned");
static_assert(offsetof(UQuestUIQuestVM, DropPlacement) == 801, "Offset mismatch for UQuestUIQuestVM::DropPlacement");
static_assert(offsetof(UQuestUIQuestVM, bIsInMovingMode) == 802, "Offset mismatch for UQuestUIQuestVM::bIsInMovingMode");
static_assert(offsetof(UQuestUIQuestVM, PinIndex) == 804, "Offset mismatch for UQuestUIQuestVM::PinIndex");
static_assert(offsetof(UQuestUIQuestVM, DebugQuestID) == 808, "Offset mismatch for UQuestUIQuestVM::DebugQuestID");
static_assert(offsetof(UQuestUIQuestVM, ObjectiveViewModels) == 824, "Offset mismatch for UQuestUIQuestVM::ObjectiveViewModels");

// /Script/QuestUI.QuestUIRewardCinematicVM
// Kind: Class; super: QuestUIRewardVM
class UQuestUIRewardCinematicVM
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    FString VUID; // 0x0190 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsWatched; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UQuestUIRewardCinematicVM, VUID) == 400, "Offset mismatch for UQuestUIRewardCinematicVM::VUID");
static_assert(offsetof(UQuestUIRewardCinematicVM, bIsWatched) == 416, "Offset mismatch for UQuestUIRewardCinematicVM::bIsWatched");

// /Script/QuestUI.QuestUIRewardMountObserver
// Kind: Class; super: Object
class UQuestUIRewardMountObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestUI.QuestUIRewardProvider
// Kind: Class; super: Interface
class UQuestUIRewardProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestUI.QuestUIRewardVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUIRewardVM
{
public:
    std::uint8_t Pad_0000[0xB1]; // 0x0000
    std::uint8_t bIsRewardContentAvailable; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCosmetic; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSeasonalXP; // 0x00B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    std::uint8_t Title[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CategoryName[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CompatibleProducts[0x10]; // 0x00E8 (Size: 0x10, Type: SetProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargePreviewImage[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargePreviewWidgetClass[0x20]; // 0x0138 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomRewardData[0x10]; // 0x0158 (Size: 0x10, Type: StructProperty)
    std::int32_t Quantity; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t ItemType; // 0x016C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x016D
    FString ItemTemplateId; // 0x0170 (Size: 0x10, Type: StrProperty)
    std::uint8_t RequiredToken[0x8]; // 0x0180 (Size: 0x8, Type: StructProperty)
    void* TempItemDetailsVM; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestUIRewardVM, bIsRewardContentAvailable) == 177, "Offset mismatch for UQuestUIRewardVM::bIsRewardContentAvailable");
static_assert(offsetof(UQuestUIRewardVM, bIsCosmetic) == 178, "Offset mismatch for UQuestUIRewardVM::bIsCosmetic");
static_assert(offsetof(UQuestUIRewardVM, bIsSeasonalXP) == 179, "Offset mismatch for UQuestUIRewardVM::bIsSeasonalXP");
static_assert(offsetof(UQuestUIRewardVM, Title) == 184, "Offset mismatch for UQuestUIRewardVM::Title");
static_assert(offsetof(UQuestUIRewardVM, Description) == 200, "Offset mismatch for UQuestUIRewardVM::Description");
static_assert(offsetof(UQuestUIRewardVM, CategoryName) == 216, "Offset mismatch for UQuestUIRewardVM::CategoryName");
static_assert(offsetof(UQuestUIRewardVM, CompatibleProducts) == 232, "Offset mismatch for UQuestUIRewardVM::CompatibleProducts");
static_assert(offsetof(UQuestUIRewardVM, SmallPreviewImage) == 248, "Offset mismatch for UQuestUIRewardVM::SmallPreviewImage");
static_assert(offsetof(UQuestUIRewardVM, LargePreviewImage) == 280, "Offset mismatch for UQuestUIRewardVM::LargePreviewImage");
static_assert(offsetof(UQuestUIRewardVM, LargePreviewWidgetClass) == 312, "Offset mismatch for UQuestUIRewardVM::LargePreviewWidgetClass");
static_assert(offsetof(UQuestUIRewardVM, CustomRewardData) == 344, "Offset mismatch for UQuestUIRewardVM::CustomRewardData");
static_assert(offsetof(UQuestUIRewardVM, Quantity) == 360, "Offset mismatch for UQuestUIRewardVM::Quantity");
static_assert(offsetof(UQuestUIRewardVM, ItemType) == 364, "Offset mismatch for UQuestUIRewardVM::ItemType");
static_assert(offsetof(UQuestUIRewardVM, ItemTemplateId) == 368, "Offset mismatch for UQuestUIRewardVM::ItemTemplateId");
static_assert(offsetof(UQuestUIRewardVM, RequiredToken) == 384, "Offset mismatch for UQuestUIRewardVM::RequiredToken");
static_assert(offsetof(UQuestUIRewardVM, TempItemDetailsVM) == 392, "Offset mismatch for UQuestUIRewardVM::TempItemDetailsVM");

// /Script/QuestUI.QuestUIRowWidget
// Kind: Class; super: UserWidget
class UQuestUIRowWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate OnColumnSelected; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UQuestUIRowWidget, OnColumnSelected) == 776, "Offset mismatch for UQuestUIRowWidget::OnColumnSelected");

// /Script/QuestUI.QuestUIScreen
// Kind: Class; super: CommonActivatableWidget
class UQuestUIScreen
{
public:
    std::uint8_t Pad_0000[0x4C8]; // 0x0000
    FMulticastInlineDelegate OnQuestModalDeactivated; // 0x04C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MapTabInfo[0x1]; // 0x04D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UQuestUIScreen, OnQuestModalDeactivated) == 1224, "Offset mismatch for UQuestUIScreen::OnQuestModalDeactivated");
static_assert(offsetof(UQuestUIScreen, MapTabInfo) == 1240, "Offset mismatch for UQuestUIScreen::MapTabInfo");

// /Script/QuestUI.QuestUISeasonPassLinkVM
// Kind: Class; super: QuestUIExternalLinkVM
class UQuestUISeasonPassLinkVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bOwnerAllowsText; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLinkAvailable; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00C2
    std::uint8_t InputAction[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UQuestUISeasonPassLinkVM, DisplayName) == 176, "Offset mismatch for UQuestUISeasonPassLinkVM::DisplayName");
static_assert(offsetof(UQuestUISeasonPassLinkVM, bOwnerAllowsText) == 192, "Offset mismatch for UQuestUISeasonPassLinkVM::bOwnerAllowsText");
static_assert(offsetof(UQuestUISeasonPassLinkVM, bIsLinkAvailable) == 193, "Offset mismatch for UQuestUISeasonPassLinkVM::bIsLinkAvailable");
static_assert(offsetof(UQuestUISeasonPassLinkVM, InputAction) == 200, "Offset mismatch for UQuestUISeasonPassLinkVM::InputAction");

// /Script/QuestUI.QuestUISpacerVM
// Kind: Class; super: QuestUIBaseContentVM
class UQuestUISpacerVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t SpacerSize; // 0x00B0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UQuestUISpacerVM, SpacerSize) == 176, "Offset mismatch for UQuestUISpacerVM::SpacerSize");

// /Script/QuestUI.QuestUITrackerVM
// Kind: Class; super: QuestUICategoryInterfaceVM
class UQuestUITrackerVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> OrderedContentVMs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestUITrackerVM, OrderedContentVMs) == 192, "Offset mismatch for UQuestUITrackerVM::OrderedContentVMs");

// /Script/QuestUI.QuestUIVerseCategoryVM
// Kind: Class; super: QuestUICategoryInterfaceVM
class UQuestUIVerseCategoryVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> OrderedContentVMs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestUIVerseCategoryVM, OrderedContentVMs) == 192, "Offset mismatch for UQuestUIVerseCategoryVM::OrderedContentVMs");

// /Script/QuestUI.QuestUIViewModelSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UQuestUIViewModelSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> TypeManagerMap; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UQuestUIViewModelSubsystem, TypeManagerMap) == 48, "Offset mismatch for UQuestUIViewModelSubsystem::TypeManagerMap");

// /Script/QuestUI.QuestUIViewModelTypeManager
// Kind: Class; super: Object
class UQuestUIViewModelTypeManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ContentMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UQuestUIViewModelTypeManager, ContentMap) == 40, "Offset mismatch for UQuestUIViewModelTypeManager::ContentMap");
