/**
 * decamp dumper generated SDK
 * Package: /Script/CareerV3UI
 */
#pragma once
#include "Basic.h"

// /Script/CareerV3UI.FortCareerV3UILeaderboardRequestParams
// Kind: ScriptStruct; super: FortCompeteUILeaderboardRequestParams
struct FFortCareerV3UILeaderboardRequestParams
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* LeaderboardClassPtr; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortCareerV3UILeaderboardRequestParams, LeaderboardClassPtr) == 80, "Offset mismatch for FFortCareerV3UILeaderboardRequestParams::LeaderboardClassPtr");

// /Script/CareerV3UI.FortRankGameModeSeasonPlayerData
// Kind: ScriptStruct; super: none
struct FFortRankGameModeSeasonPlayerData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CareerV3UI.FortRankPlayerProgressData
// Kind: ScriptStruct; super: none
struct FFortRankPlayerProgressData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CareerV3UI.GameModeRankedLeaderboardData
// Kind: ScriptStruct; super: none
struct FGameModeRankedLeaderboardData
{
public:
    std::uint8_t GameMode[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SeasonName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName GameModeRankedTrack; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t StartTime[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t EndTime[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    FString GameModeSeasonIdnStr; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGameModeRankedLeaderboardData, GameMode) == 0, "Offset mismatch for FGameModeRankedLeaderboardData::GameMode");
static_assert(offsetof(FGameModeRankedLeaderboardData, SeasonName) == 4, "Offset mismatch for FGameModeRankedLeaderboardData::SeasonName");
static_assert(offsetof(FGameModeRankedLeaderboardData, GameModeRankedTrack) == 8, "Offset mismatch for FGameModeRankedLeaderboardData::GameModeRankedTrack");
static_assert(offsetof(FGameModeRankedLeaderboardData, StartTime) == 16, "Offset mismatch for FGameModeRankedLeaderboardData::StartTime");
static_assert(offsetof(FGameModeRankedLeaderboardData, EndTime) == 24, "Offset mismatch for FGameModeRankedLeaderboardData::EndTime");
static_assert(offsetof(FGameModeRankedLeaderboardData, GameModeSeasonIdnStr) == 32, "Offset mismatch for FGameModeRankedLeaderboardData::GameModeSeasonIdnStr");

// /Script/CareerV3UI.FortCareerChangeFlagModalItemVM
// Kind: Class; super: MVVMViewModelBase
class UFortCareerChangeFlagModalItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString RegionId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t RegionDisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegionFlagAsset[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsCurrent; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    void* CareerUIManager; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCareerChangeFlagModalItemVM, RegionId) == 104, "Offset mismatch for UFortCareerChangeFlagModalItemVM::RegionId");
static_assert(offsetof(UFortCareerChangeFlagModalItemVM, RegionDisplayName) == 120, "Offset mismatch for UFortCareerChangeFlagModalItemVM::RegionDisplayName");
static_assert(offsetof(UFortCareerChangeFlagModalItemVM, RegionFlagAsset) == 136, "Offset mismatch for UFortCareerChangeFlagModalItemVM::RegionFlagAsset");
static_assert(offsetof(UFortCareerChangeFlagModalItemVM, bIsCurrent) == 168, "Offset mismatch for UFortCareerChangeFlagModalItemVM::bIsCurrent");
static_assert(offsetof(UFortCareerChangeFlagModalItemVM, CareerUIManager) == 176, "Offset mismatch for UFortCareerChangeFlagModalItemVM::CareerUIManager");

// /Script/CareerV3UI.FortCareerChangeFlagModalVM
// Kind: Class; super: FortCareerStatsScreenVM
class UFortCareerChangeFlagModalVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnFlagChanged; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t RegionLockDaysRemaining; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowedToChangeFlag; // 0x00C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C5
    TArray<void*> AvailableRegions; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCareerChangeFlagModalVM, OnFlagChanged) == 176, "Offset mismatch for UFortCareerChangeFlagModalVM::OnFlagChanged");
static_assert(offsetof(UFortCareerChangeFlagModalVM, RegionLockDaysRemaining) == 192, "Offset mismatch for UFortCareerChangeFlagModalVM::RegionLockDaysRemaining");
static_assert(offsetof(UFortCareerChangeFlagModalVM, bAllowedToChangeFlag) == 196, "Offset mismatch for UFortCareerChangeFlagModalVM::bAllowedToChangeFlag");
static_assert(offsetof(UFortCareerChangeFlagModalVM, AvailableRegions) == 200, "Offset mismatch for UFortCareerChangeFlagModalVM::AvailableRegions");

// /Script/CareerV3UI.FortCareerGameModeTabVM
// Kind: Class; super: FortPerUserViewModel
class UFortCareerGameModeTabVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* GameModePosterTexture; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* GameModePosterTextTexture; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TabSelectedIndex; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    void* GameModeRankedDataAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentGameModeRankedData[0x70]; // 0x0098 (Size: 0x70, Type: StructProperty)
    void* CurrentGameModeDataTable; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RowNames; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LGTMNames; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCareerGameModeTabVM, GameModePosterTexture) == 120, "Offset mismatch for UFortCareerGameModeTabVM::GameModePosterTexture");
static_assert(offsetof(UFortCareerGameModeTabVM, GameModePosterTextTexture) == 128, "Offset mismatch for UFortCareerGameModeTabVM::GameModePosterTextTexture");
static_assert(offsetof(UFortCareerGameModeTabVM, TabSelectedIndex) == 136, "Offset mismatch for UFortCareerGameModeTabVM::TabSelectedIndex");
static_assert(offsetof(UFortCareerGameModeTabVM, GameModeRankedDataAsset) == 144, "Offset mismatch for UFortCareerGameModeTabVM::GameModeRankedDataAsset");
static_assert(offsetof(UFortCareerGameModeTabVM, CurrentGameModeRankedData) == 152, "Offset mismatch for UFortCareerGameModeTabVM::CurrentGameModeRankedData");
static_assert(offsetof(UFortCareerGameModeTabVM, CurrentGameModeDataTable) == 264, "Offset mismatch for UFortCareerGameModeTabVM::CurrentGameModeDataTable");
static_assert(offsetof(UFortCareerGameModeTabVM, RowNames) == 272, "Offset mismatch for UFortCareerGameModeTabVM::RowNames");
static_assert(offsetof(UFortCareerGameModeTabVM, LGTMNames) == 288, "Offset mismatch for UFortCareerGameModeTabVM::LGTMNames");

// /Script/CareerV3UI.FortCareerSocialLeaderboardVM
// Kind: Class; super: FortPerUserViewModel
class UFortCareerSocialLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsModelInitialized; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t CurrentGameMode[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::int32_t CurrentSeasonIndex; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t CurrentSeasonNumber[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    FName LobbyGameMode; // 0x0088 (Size: 0x8, Type: NameProperty)
    TArray<void*> GameModeNames; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TabVisibility; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    void* CurrentGameModeRankedAsset; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00B8
    TMap<void*, void*> ViewStates; // 0x00C8 (Size: 0x10, Type: MapProperty)
    void* SelectedEntry; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCareerSocialLeaderboardVM, bIsModelInitialized) == 120, "Offset mismatch for UFortCareerSocialLeaderboardVM::bIsModelInitialized");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, CurrentGameMode) == 124, "Offset mismatch for UFortCareerSocialLeaderboardVM::CurrentGameMode");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, CurrentSeasonIndex) == 128, "Offset mismatch for UFortCareerSocialLeaderboardVM::CurrentSeasonIndex");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, CurrentSeasonNumber) == 132, "Offset mismatch for UFortCareerSocialLeaderboardVM::CurrentSeasonNumber");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, LobbyGameMode) == 136, "Offset mismatch for UFortCareerSocialLeaderboardVM::LobbyGameMode");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, GameModeNames) == 144, "Offset mismatch for UFortCareerSocialLeaderboardVM::GameModeNames");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, TabVisibility) == 160, "Offset mismatch for UFortCareerSocialLeaderboardVM::TabVisibility");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, CurrentGameModeRankedAsset) == 176, "Offset mismatch for UFortCareerSocialLeaderboardVM::CurrentGameModeRankedAsset");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, ViewStates) == 200, "Offset mismatch for UFortCareerSocialLeaderboardVM::ViewStates");
static_assert(offsetof(UFortCareerSocialLeaderboardVM, SelectedEntry) == 216, "Offset mismatch for UFortCareerSocialLeaderboardVM::SelectedEntry");

// /Script/CareerV3UI.FortCareerStatsScreenVM
// Kind: Class; super: MVVMViewModelBase
class UFortCareerStatsScreenVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString RegionId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t RegionDisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegionFlagAsset[0x20]; // 0x0088 (Size: 0x20, Type: SoftObjectProperty)
    void* CareerUIManager; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCareerStatsScreenVM, RegionId) == 104, "Offset mismatch for UFortCareerStatsScreenVM::RegionId");
static_assert(offsetof(UFortCareerStatsScreenVM, RegionDisplayName) == 120, "Offset mismatch for UFortCareerStatsScreenVM::RegionDisplayName");
static_assert(offsetof(UFortCareerStatsScreenVM, RegionFlagAsset) == 136, "Offset mismatch for UFortCareerStatsScreenVM::RegionFlagAsset");
static_assert(offsetof(UFortCareerStatsScreenVM, CareerUIManager) == 168, "Offset mismatch for UFortCareerStatsScreenVM::CareerUIManager");

// /Script/CareerV3UI.FortCareerUIManager
// Kind: Class; super: EngineSubsystem
class UFortCareerUIManager
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* ChangeFlagModalVM; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCareerUIManager, ChangeFlagModalVM) == 128, "Offset mismatch for UFortCareerUIManager::ChangeFlagModalVM");

// /Script/CareerV3UI.FortCareerV3UIManager
// Kind: Class; super: GameInstanceSubsystem
class UFortCareerV3UIManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSettingsOpened; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0040
    TMap<void*, void*> CachedFriendsAvatars; // 0x0058 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0xE0]; // 0x0068
    std::uint8_t CareerScreenClass[0x20]; // 0x0148 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> LeaderboardEntries; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    void* LeaderboardLocalPlayerEntry; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCareerV3UIManager, OnSettingsOpened) == 48, "Offset mismatch for UFortCareerV3UIManager::OnSettingsOpened");
static_assert(offsetof(UFortCareerV3UIManager, CachedFriendsAvatars) == 88, "Offset mismatch for UFortCareerV3UIManager::CachedFriendsAvatars");
static_assert(offsetof(UFortCareerV3UIManager, CareerScreenClass) == 328, "Offset mismatch for UFortCareerV3UIManager::CareerScreenClass");
static_assert(offsetof(UFortCareerV3UIManager, LeaderboardEntries) == 360, "Offset mismatch for UFortCareerV3UIManager::LeaderboardEntries");
static_assert(offsetof(UFortCareerV3UIManager, LeaderboardLocalPlayerEntry) == 376, "Offset mismatch for UFortCareerV3UIManager::LeaderboardLocalPlayerEntry");

// /Script/CareerV3UI.FortSocialLeaderboardBannerVM
// Kind: Class; super: FortPerUserViewModel
class UFortSocialLeaderboardBannerVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SocialLeaderboardEntryData; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSocialLeaderboardBannerVM, SocialLeaderboardEntryData) == 120, "Offset mismatch for UFortSocialLeaderboardBannerVM::SocialLeaderboardEntryData");

// /Script/CareerV3UI.FortSocialLeaderboardEntryData
// Kind: Class; super: FortTournamentLeaderboardEntryData
class UFortSocialLeaderboardEntryData
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::int32_t Rank; // 0x0110 (Size: 0x4, Type: IntProperty)
    std::int32_t MatchmakingRating; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPlayerPosition; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x011C
    std::uint8_t LastTimeHabaneroProgressUpdated[0x8]; // 0x0120 (Size: 0x8, Type: StructProperty)
    float ProgressToNextRank; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GameMode[0x4]; // 0x012C (Size: 0x4, Type: NameProperty)
    FString SeasonId; // 0x0130 (Size: 0x10, Type: StrProperty)
    FString FlagName; // 0x0140 (Size: 0x10, Type: StrProperty)
    std::uint8_t IsFriend; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowFlareEffect; // 0x0151 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortSocialLeaderboardEntryData, Rank) == 272, "Offset mismatch for UFortSocialLeaderboardEntryData::Rank");
static_assert(offsetof(UFortSocialLeaderboardEntryData, MatchmakingRating) == 276, "Offset mismatch for UFortSocialLeaderboardEntryData::MatchmakingRating");
static_assert(offsetof(UFortSocialLeaderboardEntryData, CurrentPlayerPosition) == 280, "Offset mismatch for UFortSocialLeaderboardEntryData::CurrentPlayerPosition");
static_assert(offsetof(UFortSocialLeaderboardEntryData, LastTimeHabaneroProgressUpdated) == 288, "Offset mismatch for UFortSocialLeaderboardEntryData::LastTimeHabaneroProgressUpdated");
static_assert(offsetof(UFortSocialLeaderboardEntryData, ProgressToNextRank) == 296, "Offset mismatch for UFortSocialLeaderboardEntryData::ProgressToNextRank");
static_assert(offsetof(UFortSocialLeaderboardEntryData, GameMode) == 300, "Offset mismatch for UFortSocialLeaderboardEntryData::GameMode");
static_assert(offsetof(UFortSocialLeaderboardEntryData, SeasonId) == 304, "Offset mismatch for UFortSocialLeaderboardEntryData::SeasonId");
static_assert(offsetof(UFortSocialLeaderboardEntryData, FlagName) == 320, "Offset mismatch for UFortSocialLeaderboardEntryData::FlagName");
static_assert(offsetof(UFortSocialLeaderboardEntryData, IsFriend) == 336, "Offset mismatch for UFortSocialLeaderboardEntryData::IsFriend");
static_assert(offsetof(UFortSocialLeaderboardEntryData, bShowFlareEffect) == 337, "Offset mismatch for UFortSocialLeaderboardEntryData::bShowFlareEffect");

// /Script/CareerV3UI.FortUIGameFeatureAction_CareerV3
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_CareerV3
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> CareerScreenClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_CareerV3, CareerScreenClass) == 40, "Offset mismatch for UFortUIGameFeatureAction_CareerV3::CareerScreenClass");

// /Script/CareerV3UI.FortUIGameFeatureAction_CompeteTab
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_CompeteTab
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CareerStatsScreenClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> CareerShowCaseStatsScreenClass; // 0x0048 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_CompeteTab, CareerStatsScreenClass) == 40, "Offset mismatch for UFortUIGameFeatureAction_CompeteTab::CareerStatsScreenClass");
static_assert(offsetof(UFortUIGameFeatureAction_CompeteTab, CareerShowCaseStatsScreenClass) == 72, "Offset mismatch for UFortUIGameFeatureAction_CompeteTab::CareerShowCaseStatsScreenClass");
