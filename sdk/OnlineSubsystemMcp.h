/**
 * decamp dumper generated SDK
 * Package: /Script/OnlineSubsystemMcp
 */
#pragma once
#include "Basic.h"

// /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
// Kind: ScriptStruct; super: none
struct FJsonToxicityBulkEvaluationRequest
{
public:
    TArray<void*> Names; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJsonToxicityBulkEvaluationRequest, Names) == 0, "Offset mismatch for FJsonToxicityBulkEvaluationRequest::Names");

// /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
// Kind: ScriptStruct; super: none
struct FJsonToxicityBulkEvaluationRequestLegacy
{
public:
    TArray<void*> texts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJsonToxicityBulkEvaluationRequestLegacy, texts) == 0, "Offset mismatch for FJsonToxicityBulkEvaluationRequestLegacy::texts");

// /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
// Kind: ScriptStruct; super: none
struct FJsonToxicityBulkEvaluationResponse
{
public:
    TArray<void*> isToxic; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJsonToxicityBulkEvaluationResponse, isToxic) == 0, "Offset mismatch for FJsonToxicityBulkEvaluationResponse::isToxic");

// /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequest
// Kind: ScriptStruct; super: none
struct FJsonToxicityEvaluationRequest
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJsonToxicityEvaluationRequest, Name) == 0, "Offset mismatch for FJsonToxicityEvaluationRequest::Name");

// /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
// Kind: ScriptStruct; super: none
struct FJsonToxicityEvaluationRequestLegacy
{
public:
    FString Text; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJsonToxicityEvaluationRequestLegacy, Text) == 0, "Offset mismatch for FJsonToxicityEvaluationRequestLegacy::Text");

// /Script/OnlineSubsystemMcp.JsonToxicityEvaluationResponse
// Kind: ScriptStruct; super: none
struct FJsonToxicityEvaluationResponse
{
public:
    std::uint8_t toxic; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJsonToxicityEvaluationResponse, toxic) == 0, "Offset mismatch for FJsonToxicityEvaluationResponse::toxic");

// /Script/OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
// Kind: ScriptStruct; super: none
struct FOnlineDiscoveryModeSetDef
{
public:
    std::uint8_t ModeSetId[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString SubModeLinkType; // 0x0018 (Size: 0x10, Type: StrProperty)
    TArray<void*> SubModeLinkIds; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnlineDiscoveryModeSetDef, ModeSetId) == 0, "Offset mismatch for FOnlineDiscoveryModeSetDef::ModeSetId");
static_assert(offsetof(FOnlineDiscoveryModeSetDef, SubModeLinkType) == 24, "Offset mismatch for FOnlineDiscoveryModeSetDef::SubModeLinkType");
static_assert(offsetof(FOnlineDiscoveryModeSetDef, SubModeLinkIds) == 40, "Offset mismatch for FOnlineDiscoveryModeSetDef::SubModeLinkIds");

// /Script/OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
// Kind: ScriptStruct; super: none
struct FOnlineDiscoverySurfaceDevelopmentLinkCodes
{
public:
    FName SurfaceName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> DevelopmentLinkCodes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnlineDiscoverySurfaceDevelopmentLinkCodes, SurfaceName) == 0, "Offset mismatch for FOnlineDiscoverySurfaceDevelopmentLinkCodes::SurfaceName");
static_assert(offsetof(FOnlineDiscoverySurfaceDevelopmentLinkCodes, DevelopmentLinkCodes) == 8, "Offset mismatch for FOnlineDiscoverySurfaceDevelopmentLinkCodes::DevelopmentLinkCodes");

// /Script/OnlineSubsystemMcp.OnlineDiscoverySurfaceIdentifier
// Kind: ScriptStruct; super: none
struct FOnlineDiscoverySurfaceIdentifier
{
public:
    FName SurfaceName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString PagePlayerId; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOnlineDiscoverySurfaceIdentifier, SurfaceName) == 0, "Offset mismatch for FOnlineDiscoverySurfaceIdentifier::SurfaceName");
static_assert(offsetof(FOnlineDiscoverySurfaceIdentifier, PagePlayerId) == 8, "Offset mismatch for FOnlineDiscoverySurfaceIdentifier::PagePlayerId");

// /Script/OnlineSubsystemMcp.OnlineIARCLocaleMapping
// Kind: ScriptStruct; super: none
struct FOnlineIARCLocaleMapping
{
public:
    FString LanguageId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString IARCLocaleId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOnlineIARCLocaleMapping, LanguageId) == 0, "Offset mismatch for FOnlineIARCLocaleMapping::LanguageId");
static_assert(offsetof(FOnlineIARCLocaleMapping, IARCLocaleId) == 16, "Offset mismatch for FOnlineIARCLocaleMapping::IARCLocaleId");

// /Script/OnlineSubsystemMcp.OnlineISOLanguageInfo
// Kind: ScriptStruct; super: none
struct FOnlineISOLanguageInfo
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString LanguageId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString BackendId; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOnlineISOLanguageInfo, DisplayName) == 0, "Offset mismatch for FOnlineISOLanguageInfo::DisplayName");
static_assert(offsetof(FOnlineISOLanguageInfo, LanguageId) == 16, "Offset mismatch for FOnlineISOLanguageInfo::LanguageId");
static_assert(offsetof(FOnlineISOLanguageInfo, BackendId) == 32, "Offset mismatch for FOnlineISOLanguageInfo::BackendId");

// /Script/OnlineSubsystemMcp.OnlineISORegionInfo
// Kind: ScriptStruct; super: none
struct FOnlineISORegionInfo
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString RegionId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString BackendId; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FOnlineISORegionInfo, DisplayName) == 0, "Offset mismatch for FOnlineISORegionInfo::DisplayName");
static_assert(offsetof(FOnlineISORegionInfo, RegionId) == 16, "Offset mismatch for FOnlineISORegionInfo::RegionId");
static_assert(offsetof(FOnlineISORegionInfo, BackendId) == 32, "Offset mismatch for FOnlineISORegionInfo::BackendId");

// /Script/OnlineSubsystemMcp.SurfaceHydrationData
// Kind: ScriptStruct; super: none
struct FSurfaceHydrationData
{
public:
    std::int32_t LastIndexHydrated; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsingLazyLoad; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSurfaceHydrationData, LastIndexHydrated) == 0, "Offset mismatch for FSurfaceHydrationData::LastIndexHydrated");
static_assert(offsetof(FSurfaceHydrationData, bUsingLazyLoad) == 4, "Offset mismatch for FSurfaceHydrationData::bUsingLazyLoad");

// /Script/OnlineSubsystemMcp.IARCLocaleMappingUtil
// Kind: Class; super: Object
class UIARCLocaleMappingUtil
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> LocaleMappings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FString DefaultLocale; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UIARCLocaleMappingUtil, LocaleMappings) == 40, "Offset mismatch for UIARCLocaleMappingUtil::LocaleMappings");
static_assert(offsetof(UIARCLocaleMappingUtil, DefaultLocale) == 56, "Offset mismatch for UIARCLocaleMappingUtil::DefaultLocale");

// /Script/OnlineSubsystemMcp.OnlineISOConversionUtil
// Kind: Class; super: Object
class UOnlineISOConversionUtil
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Languages; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Regions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlineISOConversionUtil, Languages) == 40, "Offset mismatch for UOnlineISOConversionUtil::Languages");
static_assert(offsetof(UOnlineISOConversionUtil, Regions) == 56, "Offset mismatch for UOnlineISOConversionUtil::Regions");
