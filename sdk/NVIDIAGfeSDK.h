/**
 * decamp dumper generated SDK
 * Package: /Script/NVIDIAGfeSDK
 */
#pragma once
#include "Basic.h"

// /Script/NVIDIAGfeSDK.GfeSDKCreateInputParams
// Kind: ScriptStruct; super: none
struct FGfeSDKCreateInputParams
{
public:
    FString AppName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> RequiredScopes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PollForCallbacks; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGfeSDKCreateInputParams, AppName) == 0, "Offset mismatch for FGfeSDKCreateInputParams::AppName");
static_assert(offsetof(FGfeSDKCreateInputParams, RequiredScopes) == 16, "Offset mismatch for FGfeSDKCreateInputParams::RequiredScopes");
static_assert(offsetof(FGfeSDKCreateInputParams, PollForCallbacks) == 32, "Offset mismatch for FGfeSDKCreateInputParams::PollForCallbacks");

// /Script/NVIDIAGfeSDK.GfeSDKCreateResponse
// Kind: ScriptStruct; super: none
struct FGfeSDKCreateResponse
{
public:
    std::uint16_t VersionMajor; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t VersionMinor; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString NVIDIAGfeVersion; // 0x0008 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> ScopePermissions; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGfeSDKCreateResponse, VersionMajor) == 0, "Offset mismatch for FGfeSDKCreateResponse::VersionMajor");
static_assert(offsetof(FGfeSDKCreateResponse, VersionMinor) == 2, "Offset mismatch for FGfeSDKCreateResponse::VersionMinor");
static_assert(offsetof(FGfeSDKCreateResponse, NVIDIAGfeVersion) == 8, "Offset mismatch for FGfeSDKCreateResponse::NVIDIAGfeVersion");
static_assert(offsetof(FGfeSDKCreateResponse, ScopePermissions) == 24, "Offset mismatch for FGfeSDKCreateResponse::ScopePermissions");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightCloseGroupParams
{
public:
    FString GroupID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t DestroyHighlights; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGfeSDKHighlightCloseGroupParams, GroupID) == 0, "Offset mismatch for FGfeSDKHighlightCloseGroupParams::GroupID");
static_assert(offsetof(FGfeSDKHighlightCloseGroupParams, DestroyHighlights) == 16, "Offset mismatch for FGfeSDKHighlightCloseGroupParams::DestroyHighlights");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightConfigParams
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightConfigParams
{
public:
    TArray<void*> HighlightDefinitions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FString DefaultLocale; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGfeSDKHighlightConfigParams, HighlightDefinitions) == 0, "Offset mismatch for FGfeSDKHighlightConfigParams::HighlightDefinitions");
static_assert(offsetof(FGfeSDKHighlightConfigParams, DefaultLocale) == 16, "Offset mismatch for FGfeSDKHighlightConfigParams::DefaultLocale");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightDefinition
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightDefinition
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t UserDefaultInterest; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HighlightTags; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Significance; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0013
    TMap<void*, void*> NameTranslationTable; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGfeSDKHighlightDefinition, ID) == 0, "Offset mismatch for FGfeSDKHighlightDefinition::ID");
static_assert(offsetof(FGfeSDKHighlightDefinition, UserDefaultInterest) == 16, "Offset mismatch for FGfeSDKHighlightDefinition::UserDefaultInterest");
static_assert(offsetof(FGfeSDKHighlightDefinition, HighlightTags) == 17, "Offset mismatch for FGfeSDKHighlightDefinition::HighlightTags");
static_assert(offsetof(FGfeSDKHighlightDefinition, Significance) == 18, "Offset mismatch for FGfeSDKHighlightDefinition::Significance");
static_assert(offsetof(FGfeSDKHighlightDefinition, NameTranslationTable) == 24, "Offset mismatch for FGfeSDKHighlightDefinition::NameTranslationTable");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightGroupView
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightGroupView
{
public:
    FString GroupID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t TagsFilter; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SignificanceFilter; // 0x0011 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGfeSDKHighlightGroupView, GroupID) == 0, "Offset mismatch for FGfeSDKHighlightGroupView::GroupID");
static_assert(offsetof(FGfeSDKHighlightGroupView, TagsFilter) == 16, "Offset mismatch for FGfeSDKHighlightGroupView::TagsFilter");
static_assert(offsetof(FGfeSDKHighlightGroupView, SignificanceFilter) == 17, "Offset mismatch for FGfeSDKHighlightGroupView::SignificanceFilter");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightOpenGroupParams
{
public:
    FString GroupID; // 0x0000 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> GroupDescriptionTranslationTable; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGfeSDKHighlightOpenGroupParams, GroupID) == 0, "Offset mismatch for FGfeSDKHighlightOpenGroupParams::GroupID");
static_assert(offsetof(FGfeSDKHighlightOpenGroupParams, GroupDescriptionTranslationTable) == 16, "Offset mismatch for FGfeSDKHighlightOpenGroupParams::GroupDescriptionTranslationTable");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightScreenshotParams
{
public:
    FString GroupID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString HighlightId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGfeSDKHighlightScreenshotParams, GroupID) == 0, "Offset mismatch for FGfeSDKHighlightScreenshotParams::GroupID");
static_assert(offsetof(FGfeSDKHighlightScreenshotParams, HighlightId) == 16, "Offset mismatch for FGfeSDKHighlightScreenshotParams::HighlightId");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightSummaryParams
{
public:
    TArray<void*> GroupViews; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGfeSDKHighlightSummaryParams, GroupViews) == 0, "Offset mismatch for FGfeSDKHighlightSummaryParams::GroupViews");

// /Script/NVIDIAGfeSDK.GfeSDKHighlightVideoParams
// Kind: ScriptStruct; super: none
struct FGfeSDKHighlightVideoParams
{
public:
    FString GroupID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString HighlightId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t StartDelta; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t EndDelta; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGfeSDKHighlightVideoParams, GroupID) == 0, "Offset mismatch for FGfeSDKHighlightVideoParams::GroupID");
static_assert(offsetof(FGfeSDKHighlightVideoParams, HighlightId) == 16, "Offset mismatch for FGfeSDKHighlightVideoParams::HighlightId");
static_assert(offsetof(FGfeSDKHighlightVideoParams, StartDelta) == 32, "Offset mismatch for FGfeSDKHighlightVideoParams::StartDelta");
static_assert(offsetof(FGfeSDKHighlightVideoParams, EndDelta) == 36, "Offset mismatch for FGfeSDKHighlightVideoParams::EndDelta");

// /Script/NVIDIAGfeSDK.GfeSDKPermissionsChangedData
// Kind: ScriptStruct; super: none
struct FGfeSDKPermissionsChangedData
{
public:
    TMap<void*, void*> ScopePermissions; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGfeSDKPermissionsChangedData, ScopePermissions) == 0, "Offset mismatch for FGfeSDKPermissionsChangedData::ScopePermissions");

// /Script/NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
// Kind: ScriptStruct; super: none
struct FGfeSDKRequestPermissionsParams
{
public:
    TArray<void*> Scopes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGfeSDKRequestPermissionsParams, Scopes) == 0, "Offset mismatch for FGfeSDKRequestPermissionsParams::Scopes");
