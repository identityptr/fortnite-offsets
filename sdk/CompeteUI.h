/**
 * decamp dumper generated SDK
 * Package: /Script/CompeteUI
 */
#pragma once
#include "Basic.h"

// /Script/CompeteUI.BackgroundColors
// Kind: ScriptStruct; super: none
struct FBackgroundColors
{
public:
    std::uint8_t Main[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Sub[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBackgroundColors, Main) == 0, "Offset mismatch for FBackgroundColors::Main");
static_assert(offsetof(FBackgroundColors, Sub) == 16, "Offset mismatch for FBackgroundColors::Sub");

// /Script/CompeteUI.CalendarTilesData
// Kind: ScriptStruct; super: none
struct FCalendarTilesData
{
public:
    TArray<void*> DayTiles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t FirstDayOfWeekForCurrentMonth; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCalendarTilesData, DayTiles) == 0, "Offset mismatch for FCalendarTilesData::DayTiles");
static_assert(offsetof(FCalendarTilesData, FirstDayOfWeekForCurrentMonth) == 16, "Offset mismatch for FCalendarTilesData::FirstDayOfWeekForCurrentMonth");

// /Script/CompeteUI.FortCompeteFrontendNotificationData
// Kind: ScriptStruct; super: none
struct FFortCompeteFrontendNotificationData
{
public:
    FString EventId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString EventWindowId; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortCompeteFrontendNotificationData, EventId) == 0, "Offset mismatch for FFortCompeteFrontendNotificationData::EventId");
static_assert(offsetof(FFortCompeteFrontendNotificationData, EventWindowId) == 16, "Offset mismatch for FFortCompeteFrontendNotificationData::EventWindowId");

// /Script/CompeteUI.FortCompeteTournamentDisplayInfo
// Kind: ScriptStruct; super: TableRowBase
struct FFortCompeteTournamentDisplayInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TitleLine1[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t TitleLine2[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t ScheduleInfo[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t FlavorDescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t DetailsDescription[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortFormatTitle[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::uint8_t LongFormatTitle[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t BackgroundTitle[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::int32_t PinScoreRequirement; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    std::uint8_t PinEarnedText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t BaseColor[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PrimaryColor[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SecondaryColor[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t HighlightColor[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t TitleColor[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowColor[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundLeftColor[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundRightColor[0x10]; // 0x0110 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundTextColor[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t PosterFadeColor[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t AlertText[0x10]; // 0x0140 (Size: 0x10, Type: TextProperty)
    std::uint8_t SeriesPointLeaderboardName[0x10]; // 0x0150 (Size: 0x10, Type: TextProperty)
    std::uint8_t AlertType; // 0x0160 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0161
    TArray<void*> RoundDisplayNames; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortCompeteTournamentDisplayInfo, TitleLine1) == 8, "Offset mismatch for FFortCompeteTournamentDisplayInfo::TitleLine1");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, TitleLine2) == 24, "Offset mismatch for FFortCompeteTournamentDisplayInfo::TitleLine2");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, ScheduleInfo) == 40, "Offset mismatch for FFortCompeteTournamentDisplayInfo::ScheduleInfo");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, FlavorDescription) == 56, "Offset mismatch for FFortCompeteTournamentDisplayInfo::FlavorDescription");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, DetailsDescription) == 72, "Offset mismatch for FFortCompeteTournamentDisplayInfo::DetailsDescription");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, ShortFormatTitle) == 88, "Offset mismatch for FFortCompeteTournamentDisplayInfo::ShortFormatTitle");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, LongFormatTitle) == 104, "Offset mismatch for FFortCompeteTournamentDisplayInfo::LongFormatTitle");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, BackgroundTitle) == 120, "Offset mismatch for FFortCompeteTournamentDisplayInfo::BackgroundTitle");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, PinScoreRequirement) == 136, "Offset mismatch for FFortCompeteTournamentDisplayInfo::PinScoreRequirement");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, PinEarnedText) == 144, "Offset mismatch for FFortCompeteTournamentDisplayInfo::PinEarnedText");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, BaseColor) == 160, "Offset mismatch for FFortCompeteTournamentDisplayInfo::BaseColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, PrimaryColor) == 176, "Offset mismatch for FFortCompeteTournamentDisplayInfo::PrimaryColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, SecondaryColor) == 192, "Offset mismatch for FFortCompeteTournamentDisplayInfo::SecondaryColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, HighlightColor) == 208, "Offset mismatch for FFortCompeteTournamentDisplayInfo::HighlightColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, TitleColor) == 224, "Offset mismatch for FFortCompeteTournamentDisplayInfo::TitleColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, ShadowColor) == 240, "Offset mismatch for FFortCompeteTournamentDisplayInfo::ShadowColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, BackgroundLeftColor) == 256, "Offset mismatch for FFortCompeteTournamentDisplayInfo::BackgroundLeftColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, BackgroundRightColor) == 272, "Offset mismatch for FFortCompeteTournamentDisplayInfo::BackgroundRightColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, BackgroundTextColor) == 288, "Offset mismatch for FFortCompeteTournamentDisplayInfo::BackgroundTextColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, PosterFadeColor) == 304, "Offset mismatch for FFortCompeteTournamentDisplayInfo::PosterFadeColor");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, AlertText) == 320, "Offset mismatch for FFortCompeteTournamentDisplayInfo::AlertText");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, SeriesPointLeaderboardName) == 336, "Offset mismatch for FFortCompeteTournamentDisplayInfo::SeriesPointLeaderboardName");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, AlertType) == 352, "Offset mismatch for FFortCompeteTournamentDisplayInfo::AlertType");
static_assert(offsetof(FFortCompeteTournamentDisplayInfo, RoundDisplayNames) == 360, "Offset mismatch for FFortCompeteTournamentDisplayInfo::RoundDisplayNames");

// /Script/CompeteUI.FortCompeteTournamentStyleInfo
// Kind: ScriptStruct; super: TableRowBase
struct FFortCompeteTournamentStyleInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t BaseColor[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t PrimaryColor[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t SecondaryColor[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t HighlightColor[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t TitleColor[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowColor[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundLeftColor[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundRightColor[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundTextColor[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t PosterFadeColor[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortCompeteTournamentStyleInfo, BaseColor) == 8, "Offset mismatch for FFortCompeteTournamentStyleInfo::BaseColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, PrimaryColor) == 24, "Offset mismatch for FFortCompeteTournamentStyleInfo::PrimaryColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, SecondaryColor) == 40, "Offset mismatch for FFortCompeteTournamentStyleInfo::SecondaryColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, HighlightColor) == 56, "Offset mismatch for FFortCompeteTournamentStyleInfo::HighlightColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, TitleColor) == 72, "Offset mismatch for FFortCompeteTournamentStyleInfo::TitleColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, ShadowColor) == 88, "Offset mismatch for FFortCompeteTournamentStyleInfo::ShadowColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, BackgroundLeftColor) == 104, "Offset mismatch for FFortCompeteTournamentStyleInfo::BackgroundLeftColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, BackgroundRightColor) == 120, "Offset mismatch for FFortCompeteTournamentStyleInfo::BackgroundRightColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, BackgroundTextColor) == 136, "Offset mismatch for FFortCompeteTournamentStyleInfo::BackgroundTextColor");
static_assert(offsetof(FFortCompeteTournamentStyleInfo, PosterFadeColor) == 152, "Offset mismatch for FFortCompeteTournamentStyleInfo::PosterFadeColor");

// /Script/CompeteUI.FortCompeteTournamentsFilterElement
// Kind: ScriptStruct; super: none
struct FFortCompeteTournamentsFilterElement
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t bValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortCompeteTournamentsFilterElement, Name) == 0, "Offset mismatch for FFortCompeteTournamentsFilterElement::Name");
static_assert(offsetof(FFortCompeteTournamentsFilterElement, bValue) == 16, "Offset mismatch for FFortCompeteTournamentsFilterElement::bValue");

// /Script/CompeteUI.FortCompeteUILeaderboardCategory
// Kind: ScriptStruct; super: none
struct FFortCompeteUILeaderboardCategory
{
public:
    std::uint8_t LeaderboardName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString GroupingKey; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString InstanceID; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortCompeteUILeaderboardCategory, LeaderboardName) == 0, "Offset mismatch for FFortCompeteUILeaderboardCategory::LeaderboardName");
static_assert(offsetof(FFortCompeteUILeaderboardCategory, GroupingKey) == 16, "Offset mismatch for FFortCompeteUILeaderboardCategory::GroupingKey");
static_assert(offsetof(FFortCompeteUILeaderboardCategory, InstanceID) == 32, "Offset mismatch for FFortCompeteUILeaderboardCategory::InstanceID");

// /Script/CompeteUI.FortCompeteUILeaderboardRequestParams
// Kind: ScriptStruct; super: none
struct FFortCompeteUILeaderboardRequestParams
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* LeaderboardClassPtr; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortCompeteUILeaderboardRequestParams, LeaderboardClassPtr) == 80, "Offset mismatch for FFortCompeteUILeaderboardRequestParams::LeaderboardClassPtr");

// /Script/CompeteUI.FortCompeteUIVMFakeData
// Kind: ScriptStruct; super: none
struct FFortCompeteUIVMFakeData
{
public:
    void* TournamentSeriesContainer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortCompeteUIVMFakeData, TournamentSeriesContainer) == 0, "Offset mismatch for FFortCompeteUIVMFakeData::TournamentSeriesContainer");

// /Script/CompeteUI.FortTournamentLeaderboardViewState
// Kind: ScriptStruct; super: none
struct FFortTournamentLeaderboardViewState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Entries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilteredEntries; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> LocalPlayerEntry; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FFortTournamentLeaderboardViewState, Entries) == 8, "Offset mismatch for FFortTournamentLeaderboardViewState::Entries");
static_assert(offsetof(FFortTournamentLeaderboardViewState, FilteredEntries) == 24, "Offset mismatch for FFortTournamentLeaderboardViewState::FilteredEntries");
static_assert(offsetof(FFortTournamentLeaderboardViewState, LocalPlayerEntry) == 40, "Offset mismatch for FFortTournamentLeaderboardViewState::LocalPlayerEntry");

// /Script/CompeteUI.FortTournamentRequirementsModalVMFakeData
// Kind: ScriptStruct; super: none
struct FFortTournamentRequirementsModalVMFakeData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompeteUI.FortTournamentSeriesContainerVMFakeData
// Kind: ScriptStruct; super: none
struct FFortTournamentSeriesContainerVMFakeData
{
public:
    TArray<void*> TournamentSeriesCache; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortTournamentSeriesContainerVMFakeData, TournamentSeriesCache) == 0, "Offset mismatch for FFortTournamentSeriesContainerVMFakeData::TournamentSeriesCache");

// /Script/CompeteUI.FortTournamentSeriesVMFakeData
// Kind: ScriptStruct; super: none
struct FFortTournamentSeriesVMFakeData
{
public:
    TArray<void*> CachedTournaments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortTournamentSeriesVMFakeData, CachedTournaments) == 0, "Offset mismatch for FFortTournamentSeriesVMFakeData::CachedTournaments");

// /Script/CompeteUI.FortTournamentVMFakeData
// Kind: ScriptStruct; super: none
struct FFortTournamentVMFakeData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompeteUI.RankRequirementLineDisplay
// Kind: ScriptStruct; super: none
struct FRankRequirementLineDisplay
{
public:
    std::uint8_t GameModeDisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t RankKey[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsMinRank; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0039
    FText SeasonName; // 0x0040 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FRankRequirementLineDisplay, GameModeDisplayName) == 0, "Offset mismatch for FRankRequirementLineDisplay::GameModeDisplayName");
static_assert(offsetof(FRankRequirementLineDisplay, RankKey) == 16, "Offset mismatch for FRankRequirementLineDisplay::RankKey");
static_assert(offsetof(FRankRequirementLineDisplay, bIsMinRank) == 56, "Offset mismatch for FRankRequirementLineDisplay::bIsMinRank");
static_assert(offsetof(FRankRequirementLineDisplay, SeasonName) == 64, "Offset mismatch for FRankRequirementLineDisplay::SeasonName");

// /Script/CompeteUI.RankedSplashModalParams
// Kind: ScriptStruct; super: none
struct FRankedSplashModalParams
{
public:
    void* ContextPC; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MessageType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    FText CurrentActivityName; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FRankedSplashModalParams, ContextPC) == 0, "Offset mismatch for FRankedSplashModalParams::ContextPC");
static_assert(offsetof(FRankedSplashModalParams, MessageType) == 8, "Offset mismatch for FRankedSplashModalParams::MessageType");
static_assert(offsetof(FRankedSplashModalParams, CurrentActivityName) == 16, "Offset mismatch for FRankedSplashModalParams::CurrentActivityName");

// /Script/CompeteUI.SetTournamentLeaderboardType
// Kind: ScriptStruct; super: none
struct FSetTournamentLeaderboardType
{
public:
    std::uint8_t bIsTournamentSeriesPointLeaderboard; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* TournamentWatchLiveVM; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* TournamentHeaderVM; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PayoutDisplayData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSetTournamentLeaderboardType, bIsTournamentSeriesPointLeaderboard) == 0, "Offset mismatch for FSetTournamentLeaderboardType::bIsTournamentSeriesPointLeaderboard");
static_assert(offsetof(FSetTournamentLeaderboardType, TournamentWatchLiveVM) == 8, "Offset mismatch for FSetTournamentLeaderboardType::TournamentWatchLiveVM");
static_assert(offsetof(FSetTournamentLeaderboardType, TournamentHeaderVM) == 16, "Offset mismatch for FSetTournamentLeaderboardType::TournamentHeaderVM");
static_assert(offsetof(FSetTournamentLeaderboardType, PayoutDisplayData) == 24, "Offset mismatch for FSetTournamentLeaderboardType::PayoutDisplayData");

// /Script/CompeteUI.TournamentConditionalModeRequirement
// Kind: ScriptStruct; super: none
struct FTournamentConditionalModeRequirement
{
public:
    FString Type; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Mode; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Level; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTournamentConditionalModeRequirement, Type) == 0, "Offset mismatch for FTournamentConditionalModeRequirement::Type");
static_assert(offsetof(FTournamentConditionalModeRequirement, Mode) == 16, "Offset mismatch for FTournamentConditionalModeRequirement::Mode");
static_assert(offsetof(FTournamentConditionalModeRequirement, Level) == 32, "Offset mismatch for FTournamentConditionalModeRequirement::Level");

// /Script/CompeteUI.TournamentLeaderboardScreenParams
// Kind: ScriptStruct; super: none
struct FTournamentLeaderboardScreenParams
{
public:
    void* ContextPC; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FString TournamentID; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString TournamentWindowId; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsTournamentSeriesPointLeaderboard; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    void* TournamentWatchLiveEntryVM; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* TournamentHeaderVM; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PayoutDisplayData; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTournamentLeaderboardScreenParams, ContextPC) == 0, "Offset mismatch for FTournamentLeaderboardScreenParams::ContextPC");
static_assert(offsetof(FTournamentLeaderboardScreenParams, TournamentID) == 8, "Offset mismatch for FTournamentLeaderboardScreenParams::TournamentID");
static_assert(offsetof(FTournamentLeaderboardScreenParams, TournamentWindowId) == 24, "Offset mismatch for FTournamentLeaderboardScreenParams::TournamentWindowId");
static_assert(offsetof(FTournamentLeaderboardScreenParams, bIsTournamentSeriesPointLeaderboard) == 40, "Offset mismatch for FTournamentLeaderboardScreenParams::bIsTournamentSeriesPointLeaderboard");
static_assert(offsetof(FTournamentLeaderboardScreenParams, TournamentWatchLiveEntryVM) == 48, "Offset mismatch for FTournamentLeaderboardScreenParams::TournamentWatchLiveEntryVM");
static_assert(offsetof(FTournamentLeaderboardScreenParams, TournamentHeaderVM) == 56, "Offset mismatch for FTournamentLeaderboardScreenParams::TournamentHeaderVM");
static_assert(offsetof(FTournamentLeaderboardScreenParams, PayoutDisplayData) == 64, "Offset mismatch for FTournamentLeaderboardScreenParams::PayoutDisplayData");

// /Script/CompeteUI.TournamentRankRequirements
// Kind: ScriptStruct; super: none
struct FTournamentRankRequirements
{
public:
    TArray<void*> ConditionalModes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTournamentRankRequirements, ConditionalModes) == 0, "Offset mismatch for FTournamentRankRequirements::ConditionalModes");

// /Script/CompeteUI.TournamentRequirementItem
// Kind: ScriptStruct; super: none
struct FTournamentRequirementItem
{
public:
    std::uint8_t RequirementType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasPassed; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSatisfiedByAlternative; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t Arguments[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTournamentRequirementItem, RequirementType) == 0, "Offset mismatch for FTournamentRequirementItem::RequirementType");
static_assert(offsetof(FTournamentRequirementItem, bHasPassed) == 1, "Offset mismatch for FTournamentRequirementItem::bHasPassed");
static_assert(offsetof(FTournamentRequirementItem, bSatisfiedByAlternative) == 2, "Offset mismatch for FTournamentRequirementItem::bSatisfiedByAlternative");
static_assert(offsetof(FTournamentRequirementItem, Arguments) == 8, "Offset mismatch for FTournamentRequirementItem::Arguments");

// /Script/CompeteUI.TournamentRequirementItemArguments
// Kind: ScriptStruct; super: none
struct FTournamentRequirementItemArguments
{
public:
    std::uint8_t HabaneroRankCheckResult; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString EulaKey; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t MinimumAccountLevel; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t TimeAlive; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t TimeNeedToBeAlive; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t ValidInputTypes; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::int32_t NumberMatchesPlayed; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfMatchesNeedToBePlayed; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t SeasonNumber; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDoesHaveAlternativesCheck; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    float PowerRankingThreshold; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTournamentRequirementItemArguments, HabaneroRankCheckResult) == 0, "Offset mismatch for FTournamentRequirementItemArguments::HabaneroRankCheckResult");
static_assert(offsetof(FTournamentRequirementItemArguments, EulaKey) == 8, "Offset mismatch for FTournamentRequirementItemArguments::EulaKey");
static_assert(offsetof(FTournamentRequirementItemArguments, MinimumAccountLevel) == 24, "Offset mismatch for FTournamentRequirementItemArguments::MinimumAccountLevel");
static_assert(offsetof(FTournamentRequirementItemArguments, TimeAlive) == 28, "Offset mismatch for FTournamentRequirementItemArguments::TimeAlive");
static_assert(offsetof(FTournamentRequirementItemArguments, TimeNeedToBeAlive) == 32, "Offset mismatch for FTournamentRequirementItemArguments::TimeNeedToBeAlive");
static_assert(offsetof(FTournamentRequirementItemArguments, ValidInputTypes) == 36, "Offset mismatch for FTournamentRequirementItemArguments::ValidInputTypes");
static_assert(offsetof(FTournamentRequirementItemArguments, NumberMatchesPlayed) == 40, "Offset mismatch for FTournamentRequirementItemArguments::NumberMatchesPlayed");
static_assert(offsetof(FTournamentRequirementItemArguments, NumberOfMatchesNeedToBePlayed) == 44, "Offset mismatch for FTournamentRequirementItemArguments::NumberOfMatchesNeedToBePlayed");
static_assert(offsetof(FTournamentRequirementItemArguments, SeasonNumber) == 48, "Offset mismatch for FTournamentRequirementItemArguments::SeasonNumber");
static_assert(offsetof(FTournamentRequirementItemArguments, bDoesHaveAlternativesCheck) == 52, "Offset mismatch for FTournamentRequirementItemArguments::bDoesHaveAlternativesCheck");
static_assert(offsetof(FTournamentRequirementItemArguments, PowerRankingThreshold) == 56, "Offset mismatch for FTournamentRequirementItemArguments::PowerRankingThreshold");

// /Script/CompeteUI.TournamentTypeWithName
// Kind: ScriptStruct; super: none
struct FTournamentTypeWithName
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTournamentTypeWithName, Name) == 0, "Offset mismatch for FTournamentTypeWithName::Name");
static_assert(offsetof(FTournamentTypeWithName, Type) == 16, "Offset mismatch for FTournamentTypeWithName::Type");

// /Script/CompeteUI.TournamentsFilterSection
// Kind: ScriptStruct; super: none
struct FTournamentsFilterSection
{
public:
    std::uint8_t SectionName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    TArray<void*> FilterOptions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRadioType; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTournamentsFilterSection, SectionName) == 0, "Offset mismatch for FTournamentsFilterSection::SectionName");
static_assert(offsetof(FTournamentsFilterSection, FilterOptions) == 16, "Offset mismatch for FTournamentsFilterSection::FilterOptions");
static_assert(offsetof(FTournamentsFilterSection, bRadioType) == 32, "Offset mismatch for FTournamentsFilterSection::bRadioType");

// /Script/CompeteUI.TournamentsTilesData
// Kind: ScriptStruct; super: none
struct FTournamentsTilesData
{
public:
    TArray<void*> TournamentTiles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PreviouslySelectedEvent; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t FirstUpcomingEvent; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t FirstLiveEvent; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t FirstCurrentDateEvent; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t ClosestEvent; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsLoadingTournaments; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTournamentsTilesData, TournamentTiles) == 0, "Offset mismatch for FTournamentsTilesData::TournamentTiles");
static_assert(offsetof(FTournamentsTilesData, PreviouslySelectedEvent) == 16, "Offset mismatch for FTournamentsTilesData::PreviouslySelectedEvent");
static_assert(offsetof(FTournamentsTilesData, FirstUpcomingEvent) == 20, "Offset mismatch for FTournamentsTilesData::FirstUpcomingEvent");
static_assert(offsetof(FTournamentsTilesData, FirstLiveEvent) == 24, "Offset mismatch for FTournamentsTilesData::FirstLiveEvent");
static_assert(offsetof(FTournamentsTilesData, FirstCurrentDateEvent) == 28, "Offset mismatch for FTournamentsTilesData::FirstCurrentDateEvent");
static_assert(offsetof(FTournamentsTilesData, ClosestEvent) == 32, "Offset mismatch for FTournamentsTilesData::ClosestEvent");
static_assert(offsetof(FTournamentsTilesData, bIsLoadingTournaments) == 36, "Offset mismatch for FTournamentsTilesData::bIsLoadingTournaments");

// /Script/CompeteUI.FortCompeteBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortCompeteBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompeteUI.FortCompeteBookmarksSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteBookmarksSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* BookmarksVM; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CompeteGameUserSettings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCompeteBookmarksSubsystem, BookmarksVM) == 48, "Offset mismatch for UFortCompeteBookmarksSubsystem::BookmarksVM");
static_assert(offsetof(UFortCompeteBookmarksSubsystem, CompeteGameUserSettings) == 56, "Offset mismatch for UFortCompeteBookmarksSubsystem::CompeteGameUserSettings");

// /Script/CompeteUI.FortCompeteDisplaySubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteDisplaySubsystem
{
public:
    std::uint8_t Pad_0000[0x3BC]; // 0x0000
    TWeakObjectPtr<void> HabaneroModeAnimatedMessage; // 0x03BC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortCompeteDisplaySubsystem, HabaneroModeAnimatedMessage) == 956, "Offset mismatch for UFortCompeteDisplaySubsystem::HabaneroModeAnimatedMessage");

// /Script/CompeteUI.FortCompeteEligibilitySubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteEligibilitySubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompeteUI.FortCompeteGameUserSettings
// Kind: Class; super: Object
class UFortCompeteGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> SerializedEventBookmarks; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCompeteGameUserSettings, SerializedEventBookmarks) == 104, "Offset mismatch for UFortCompeteGameUserSettings::SerializedEventBookmarks");

// /Script/CompeteUI.FortCompeteLandingPageData
// Kind: Class; super: DataAsset
class UFortCompeteLandingPageData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* FirstPriorityFilter; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SecondPriorityFilter; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* ThirdPriorityFilter; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Tile2GameModeName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    FName Tile3GameModeName; // 0x0044 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortCompeteLandingPageData, FirstPriorityFilter) == 40, "Offset mismatch for UFortCompeteLandingPageData::FirstPriorityFilter");
static_assert(offsetof(UFortCompeteLandingPageData, SecondPriorityFilter) == 48, "Offset mismatch for UFortCompeteLandingPageData::SecondPriorityFilter");
static_assert(offsetof(UFortCompeteLandingPageData, ThirdPriorityFilter) == 56, "Offset mismatch for UFortCompeteLandingPageData::ThirdPriorityFilter");
static_assert(offsetof(UFortCompeteLandingPageData, Tile2GameModeName) == 64, "Offset mismatch for UFortCompeteLandingPageData::Tile2GameModeName");
static_assert(offsetof(UFortCompeteLandingPageData, Tile3GameModeName) == 68, "Offset mismatch for UFortCompeteLandingPageData::Tile3GameModeName");

// /Script/CompeteUI.FortCompeteLeaderboardSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteLeaderboardSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> LeaderboardEntries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* LeaderboardLocalPlayerEntry; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* LeaderboardScreenSelectedEntry; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeaderboardClass[0x20]; // 0x0050 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> PlayersProfiles; // 0x0070 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0xA0]; // 0x0080
    FMulticastInlineDelegate OnSetTournamentLeaderboardScreenSelectedEntry; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortCompeteLeaderboardSubsystem, LeaderboardEntries) == 48, "Offset mismatch for UFortCompeteLeaderboardSubsystem::LeaderboardEntries");
static_assert(offsetof(UFortCompeteLeaderboardSubsystem, LeaderboardLocalPlayerEntry) == 64, "Offset mismatch for UFortCompeteLeaderboardSubsystem::LeaderboardLocalPlayerEntry");
static_assert(offsetof(UFortCompeteLeaderboardSubsystem, LeaderboardScreenSelectedEntry) == 72, "Offset mismatch for UFortCompeteLeaderboardSubsystem::LeaderboardScreenSelectedEntry");
static_assert(offsetof(UFortCompeteLeaderboardSubsystem, LeaderboardClass) == 80, "Offset mismatch for UFortCompeteLeaderboardSubsystem::LeaderboardClass");
static_assert(offsetof(UFortCompeteLeaderboardSubsystem, PlayersProfiles) == 112, "Offset mismatch for UFortCompeteLeaderboardSubsystem::PlayersProfiles");
static_assert(offsetof(UFortCompeteLeaderboardSubsystem, OnSetTournamentLeaderboardScreenSelectedEntry) == 288, "Offset mismatch for UFortCompeteLeaderboardSubsystem::OnSetTournamentLeaderboardScreenSelectedEntry");

// /Script/CompeteUI.FortCompeteRegionSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteRegionSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompeteUI.FortCompeteScoreSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteScoreSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> SubscribedEventObjects; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCompeteScoreSubsystem, SubscribedEventObjects) == 72, "Offset mismatch for UFortCompeteScoreSubsystem::SubscribedEventObjects");

// /Script/CompeteUI.FortCompeteTournamentDataSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteTournamentDataSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompeteUI.FortCompeteTournamentsFilter
// Kind: Class; super: Object
class UFortCompeteTournamentsFilter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExperienceTypeTitle[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> ExperienceTypeParams; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t TeamSizeTitle[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> TeamSizeParams; // 0x0058 (Size: 0x10, Type: MapProperty)
    std::uint8_t RegionTitle[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> RegionParams; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t TournamentTypeTitle[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> TournamentTypeParams; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::uint8_t TournamentStatusTitle[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> TournamentStatusParams; // 0x00B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t EligibilityTitle[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> EligibilityParams; // 0x00D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t BookmarksTitle[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> BookmarksParams; // 0x00F8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortCompeteTournamentsFilter, ExperienceTypeTitle) == 40, "Offset mismatch for UFortCompeteTournamentsFilter::ExperienceTypeTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, ExperienceTypeParams) == 56, "Offset mismatch for UFortCompeteTournamentsFilter::ExperienceTypeParams");
static_assert(offsetof(UFortCompeteTournamentsFilter, TeamSizeTitle) == 72, "Offset mismatch for UFortCompeteTournamentsFilter::TeamSizeTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, TeamSizeParams) == 88, "Offset mismatch for UFortCompeteTournamentsFilter::TeamSizeParams");
static_assert(offsetof(UFortCompeteTournamentsFilter, RegionTitle) == 104, "Offset mismatch for UFortCompeteTournamentsFilter::RegionTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, RegionParams) == 120, "Offset mismatch for UFortCompeteTournamentsFilter::RegionParams");
static_assert(offsetof(UFortCompeteTournamentsFilter, TournamentTypeTitle) == 136, "Offset mismatch for UFortCompeteTournamentsFilter::TournamentTypeTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, TournamentTypeParams) == 152, "Offset mismatch for UFortCompeteTournamentsFilter::TournamentTypeParams");
static_assert(offsetof(UFortCompeteTournamentsFilter, TournamentStatusTitle) == 168, "Offset mismatch for UFortCompeteTournamentsFilter::TournamentStatusTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, TournamentStatusParams) == 184, "Offset mismatch for UFortCompeteTournamentsFilter::TournamentStatusParams");
static_assert(offsetof(UFortCompeteTournamentsFilter, EligibilityTitle) == 200, "Offset mismatch for UFortCompeteTournamentsFilter::EligibilityTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, EligibilityParams) == 216, "Offset mismatch for UFortCompeteTournamentsFilter::EligibilityParams");
static_assert(offsetof(UFortCompeteTournamentsFilter, BookmarksTitle) == 232, "Offset mismatch for UFortCompeteTournamentsFilter::BookmarksTitle");
static_assert(offsetof(UFortCompeteTournamentsFilter, BookmarksParams) == 248, "Offset mismatch for UFortCompeteTournamentsFilter::BookmarksParams");

// /Script/CompeteUI.FortCompeteUIManager
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteUIManager
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TMap<void*, void*> FrontendNotificationDataMap; // 0x0050 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0060
    void* CalendarVM; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* CalendarFilterVM; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x00B8
    std::uint8_t bShowDebugInfo; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCompeteUIManager, FrontendNotificationDataMap) == 80, "Offset mismatch for UFortCompeteUIManager::FrontendNotificationDataMap");
static_assert(offsetof(UFortCompeteUIManager, CalendarVM) == 168, "Offset mismatch for UFortCompeteUIManager::CalendarVM");
static_assert(offsetof(UFortCompeteUIManager, CalendarFilterVM) == 176, "Offset mismatch for UFortCompeteUIManager::CalendarFilterVM");
static_assert(offsetof(UFortCompeteUIManager, bShowDebugInfo) == 208, "Offset mismatch for UFortCompeteUIManager::bShowDebugInfo");

// /Script/CompeteUI.FortCompeteUIVM
// Kind: Class; super: FortPerUserViewModel
class UFortCompeteUIVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t FakeData[0x10]; // 0x0078 (Size: 0x10, Type: OptionalProperty)
    void* TournamentSeriesContainer; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCompeteUIVM, FakeData) == 120, "Offset mismatch for UFortCompeteUIVM::FakeData");
static_assert(offsetof(UFortCompeteUIVM, TournamentSeriesContainer) == 136, "Offset mismatch for UFortCompeteUIVM::TournamentSeriesContainer");

// /Script/CompeteUI.FortCompeteWatchSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortCompeteWatchSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> LiveGames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCompeteWatchSubsystem, LiveGames) == 56, "Offset mismatch for UFortCompeteWatchSubsystem::LiveGames");

// /Script/CompeteUI.FortPoblanoTournamentsCalendarDayTileVM
// Kind: Class; super: MVVMViewModelBase
class UFortPoblanoTournamentsCalendarDayTileVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CashCups; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShopCups; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FNCS; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t VictoryCups; // 0x006B (Size: 0x1, Type: EnumProperty)
    std::uint8_t RankedCups; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t OtherCups; // 0x006D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1A]; // 0x006E
    TArray<void*> BookmarkedTournaments; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, CashCups) == 104, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::CashCups");
static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, ShopCups) == 105, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::ShopCups");
static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, FNCS) == 106, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::FNCS");
static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, VictoryCups) == 107, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::VictoryCups");
static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, RankedCups) == 108, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::RankedCups");
static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, OtherCups) == 109, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::OtherCups");
static_assert(offsetof(UFortPoblanoTournamentsCalendarDayTileVM, BookmarkedTournaments) == 136, "Offset mismatch for UFortPoblanoTournamentsCalendarDayTileVM::BookmarkedTournaments");

// /Script/CompeteUI.FortPoblanoTournamentsCalendarFilterVM
// Kind: Class; super: MVVMViewModelBase
class UFortPoblanoTournamentsCalendarFilterVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SectionExperienceFilter[0x38]; // 0x0068 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionTeamSizeFilter[0x38]; // 0x00A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionRegionFilter[0x38]; // 0x00D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionTournamentTypeFilter[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionTournamentStatusFilter[0x38]; // 0x0148 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionElegibilityFilter[0x38]; // 0x0180 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionBookmarksFilter[0x40]; // 0x01B8 (Size: 0x40, Type: StructProperty)
    void* CompeteUIManager; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionExperienceFilter) == 104, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionExperienceFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionTeamSizeFilter) == 160, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionTeamSizeFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionRegionFilter) == 216, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionRegionFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionTournamentTypeFilter) == 272, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionTournamentTypeFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionTournamentStatusFilter) == 328, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionTournamentStatusFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionElegibilityFilter) == 384, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionElegibilityFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, SectionBookmarksFilter) == 440, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::SectionBookmarksFilter");
static_assert(offsetof(UFortPoblanoTournamentsCalendarFilterVM, CompeteUIManager) == 504, "Offset mismatch for UFortPoblanoTournamentsCalendarFilterVM::CompeteUIManager");

// /Script/CompeteUI.FortPoblanoTournamentsCalendarTournamentTileVM
// Kind: Class; super: MVVMViewModelBase
class UFortPoblanoTournamentsCalendarTournamentTileVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* EligibilityRequirementsModalVM; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Date[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t TextDate[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t Region; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RankRequirementCheckResult; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TournamentEligibility; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMeetsTournamentSystemRequirements; // 0x008B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsRequiresQualifyingRound; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsTimeAliveRequirement; // 0x008D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x008E
    std::int32_t TimeAliveSeconds; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMeetsCheckTournamentLocksRequirement; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsEventsNumberHistoryRequirement; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsAgeRequirement; // 0x0096 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsAccountLevelRequirement; // 0x0097 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsPermanentTournamentBanRequirement; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMeetsInputTypeRequirement; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TournamentState; // 0x009A (Size: 0x1, Type: EnumProperty)
    std::uint8_t TournamentTag; // 0x009B (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExperienceType; // 0x009C (Size: 0x1, Type: EnumProperty)
    std::uint8_t TeamSize; // 0x009D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x009E
    std::uint8_t TournamentTitle[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsLive; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBookmarked; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x00B2
    void* PosterTexture; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoundDateTime[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t BookmarksAmount[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t BackgroundCalendarColors[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    FString TournamentID; // 0x0100 (Size: 0x10, Type: StrProperty)
    FString TournamentWindowId; // 0x0110 (Size: 0x10, Type: StrProperty)
    std::uint8_t GameType; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0121
    std::uint8_t AllTournamentLocks[0x20]; // 0x0128 (Size: 0x20, Type: StructProperty)
    std::int32_t EligibilityRequirementCount; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::int32_t EligibilityRequirementScore; // 0x014C (Size: 0x4, Type: IntProperty)
    void* Poster; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* CompeteUIManager; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x20]; // 0x0160
    std::uint8_t RankInfo[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, EligibilityRequirementsModalVM) == 104, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::EligibilityRequirementsModalVM");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, Date) == 112, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::Date");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TextDate) == 120, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TextDate");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, Region) == 136, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::Region");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, RankRequirementCheckResult) == 137, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::RankRequirementCheckResult");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TournamentEligibility) == 138, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TournamentEligibility");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsTournamentSystemRequirements) == 139, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsTournamentSystemRequirements");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsRequiresQualifyingRound) == 140, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsRequiresQualifyingRound");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsTimeAliveRequirement) == 141, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsTimeAliveRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TimeAliveSeconds) == 144, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TimeAliveSeconds");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsCheckTournamentLocksRequirement) == 148, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsCheckTournamentLocksRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsEventsNumberHistoryRequirement) == 149, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsEventsNumberHistoryRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsAgeRequirement) == 150, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsAgeRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsAccountLevelRequirement) == 151, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsAccountLevelRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsPermanentTournamentBanRequirement) == 152, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsPermanentTournamentBanRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bMeetsInputTypeRequirement) == 153, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bMeetsInputTypeRequirement");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TournamentState) == 154, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TournamentState");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TournamentTag) == 155, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TournamentTag");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, ExperienceType) == 156, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::ExperienceType");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TeamSize) == 157, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TeamSize");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TournamentTitle) == 160, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TournamentTitle");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bIsLive) == 176, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bIsLive");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, bIsBookmarked) == 177, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::bIsBookmarked");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, PosterTexture) == 184, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::PosterTexture");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, RoundDateTime) == 192, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::RoundDateTime");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, BookmarksAmount) == 208, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::BookmarksAmount");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, BackgroundCalendarColors) == 224, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::BackgroundCalendarColors");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TournamentID) == 256, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TournamentID");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, TournamentWindowId) == 272, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::TournamentWindowId");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, GameType) == 288, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::GameType");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, AllTournamentLocks) == 296, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::AllTournamentLocks");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, EligibilityRequirementCount) == 328, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::EligibilityRequirementCount");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, EligibilityRequirementScore) == 332, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::EligibilityRequirementScore");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, Poster) == 336, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::Poster");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, CompeteUIManager) == 344, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::CompeteUIManager");
static_assert(offsetof(UFortPoblanoTournamentsCalendarTournamentTileVM, RankInfo) == 384, "Offset mismatch for UFortPoblanoTournamentsCalendarTournamentTileVM::RankInfo");

// /Script/CompeteUI.FortPoblanoTournamentsCalendarVM
// Kind: Class; super: MVVMViewModelBase
class UFortPoblanoTournamentsCalendarVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TournamentsTilesData[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t CalendarTilesData[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentTime[0x8]; // 0x00A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayMonthDate[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    TArray<void*> MonthTournamentsIDs; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    void* CompeteUIManager; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPoblanoTournamentsCalendarVM, TournamentsTilesData) == 104, "Offset mismatch for UFortPoblanoTournamentsCalendarVM::TournamentsTilesData");
static_assert(offsetof(UFortPoblanoTournamentsCalendarVM, CalendarTilesData) == 144, "Offset mismatch for UFortPoblanoTournamentsCalendarVM::CalendarTilesData");
static_assert(offsetof(UFortPoblanoTournamentsCalendarVM, CurrentTime) == 168, "Offset mismatch for UFortPoblanoTournamentsCalendarVM::CurrentTime");
static_assert(offsetof(UFortPoblanoTournamentsCalendarVM, DisplayMonthDate) == 176, "Offset mismatch for UFortPoblanoTournamentsCalendarVM::DisplayMonthDate");
static_assert(offsetof(UFortPoblanoTournamentsCalendarVM, MonthTournamentsIDs) == 184, "Offset mismatch for UFortPoblanoTournamentsCalendarVM::MonthTournamentsIDs");
static_assert(offsetof(UFortPoblanoTournamentsCalendarVM, CompeteUIManager) == 200, "Offset mismatch for UFortPoblanoTournamentsCalendarVM::CompeteUIManager");

// /Script/CompeteUI.FortPoblanoTournamentsCarouselVM
// Kind: Class; super: MVVMViewModelBase
class UFortPoblanoTournamentsCarouselVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TournamentDetailsScreenParams[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPoblanoTournamentsCarouselVM, TournamentDetailsScreenParams) == 104, "Offset mismatch for UFortPoblanoTournamentsCarouselVM::TournamentDetailsScreenParams");

// /Script/CompeteUI.FortTournamentBackgroundVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentBackgroundVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* TournamentTexture; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackgroundLeftColor[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundRightColor[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTournamentBackgroundVM, TournamentTexture) == 104, "Offset mismatch for UFortTournamentBackgroundVM::TournamentTexture");
static_assert(offsetof(UFortTournamentBackgroundVM, BackgroundLeftColor) == 112, "Offset mismatch for UFortTournamentBackgroundVM::BackgroundLeftColor");
static_assert(offsetof(UFortTournamentBackgroundVM, BackgroundRightColor) == 128, "Offset mismatch for UFortTournamentBackgroundVM::BackgroundRightColor");

// /Script/CompeteUI.FortTournamentBaseEntryVM
// Kind: Class; super: FortPerUserViewModel
class UFortTournamentBaseEntryVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString LiveSessionId; // 0x0078 (Size: 0x10, Type: StrProperty)
    TArray<void*> TeammatesAccountIds; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayersProfiles; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::int32_t AdjustedRank; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t MatchesPlayed; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPoints; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    double Percentile; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFortTournamentBaseEntryVM, LiveSessionId) == 120, "Offset mismatch for UFortTournamentBaseEntryVM::LiveSessionId");
static_assert(offsetof(UFortTournamentBaseEntryVM, TeammatesAccountIds) == 136, "Offset mismatch for UFortTournamentBaseEntryVM::TeammatesAccountIds");
static_assert(offsetof(UFortTournamentBaseEntryVM, PlayersProfiles) == 152, "Offset mismatch for UFortTournamentBaseEntryVM::PlayersProfiles");
static_assert(offsetof(UFortTournamentBaseEntryVM, AdjustedRank) == 168, "Offset mismatch for UFortTournamentBaseEntryVM::AdjustedRank");
static_assert(offsetof(UFortTournamentBaseEntryVM, MatchesPlayed) == 172, "Offset mismatch for UFortTournamentBaseEntryVM::MatchesPlayed");
static_assert(offsetof(UFortTournamentBaseEntryVM, TotalPoints) == 176, "Offset mismatch for UFortTournamentBaseEntryVM::TotalPoints");
static_assert(offsetof(UFortTournamentBaseEntryVM, Percentile) == 184, "Offset mismatch for UFortTournamentBaseEntryVM::Percentile");

// /Script/CompeteUI.FortTournamentBookmarksVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentBookmarksVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> UpcomingTournaments; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsTournamentLobby; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortTournamentBookmarksVM, UpcomingTournaments) == 104, "Offset mismatch for UFortTournamentBookmarksVM::UpcomingTournaments");
static_assert(offsetof(UFortTournamentBookmarksVM, bIsTournamentLobby) == 120, "Offset mismatch for UFortTournamentBookmarksVM::bIsTournamentLobby");

// /Script/CompeteUI.FortTournamentHeaderVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentHeaderVM
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t TournamentName[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t WindowRoundText[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t WindowTimeText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExperienceType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MatchType; // 0x00A1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TournamentType; // 0x00A2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsWindowLive; // 0x00A3 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortTournamentHeaderVM, TournamentName) == 112, "Offset mismatch for UFortTournamentHeaderVM::TournamentName");
static_assert(offsetof(UFortTournamentHeaderVM, WindowRoundText) == 128, "Offset mismatch for UFortTournamentHeaderVM::WindowRoundText");
static_assert(offsetof(UFortTournamentHeaderVM, WindowTimeText) == 144, "Offset mismatch for UFortTournamentHeaderVM::WindowTimeText");
static_assert(offsetof(UFortTournamentHeaderVM, ExperienceType) == 160, "Offset mismatch for UFortTournamentHeaderVM::ExperienceType");
static_assert(offsetof(UFortTournamentHeaderVM, MatchType) == 161, "Offset mismatch for UFortTournamentHeaderVM::MatchType");
static_assert(offsetof(UFortTournamentHeaderVM, TournamentType) == 162, "Offset mismatch for UFortTournamentHeaderVM::TournamentType");
static_assert(offsetof(UFortTournamentHeaderVM, bIsWindowLive) == 163, "Offset mismatch for UFortTournamentHeaderVM::bIsWindowLive");

// /Script/CompeteUI.FortTournamentLeaderboardEntryData
// Kind: Class; super: FortTournamentBaseEntryVM
class UFortTournamentLeaderboardEntryData
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t DisplayIndex; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::int32_t EntryIndex; // 0x00C4 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> TrackedStatsTimesAchieved; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TrackedStatsPoints; // 0x00D8 (Size: 0x10, Type: MapProperty)
    std::int32_t TotalVictoryRoyales; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPlacements_Top5; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t TotalPlacements_Top10; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalEliminations; // 0x00F4 (Size: 0x4, Type: IntProperty)
    float AveragePlacement; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseQualifiedIcons; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTeamQualified; // 0x00FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMatchPointWinner; // 0x00FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSeriesPointLeaderboards; // 0x00FF (Size: 0x1, Type: BoolProperty)
    TArray<void*> SessionsTeamEntries; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortTournamentLeaderboardEntryData, DisplayIndex) == 192, "Offset mismatch for UFortTournamentLeaderboardEntryData::DisplayIndex");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, EntryIndex) == 196, "Offset mismatch for UFortTournamentLeaderboardEntryData::EntryIndex");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, TrackedStatsTimesAchieved) == 200, "Offset mismatch for UFortTournamentLeaderboardEntryData::TrackedStatsTimesAchieved");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, TrackedStatsPoints) == 216, "Offset mismatch for UFortTournamentLeaderboardEntryData::TrackedStatsPoints");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, TotalVictoryRoyales) == 232, "Offset mismatch for UFortTournamentLeaderboardEntryData::TotalVictoryRoyales");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, TotalPlacements_Top5) == 236, "Offset mismatch for UFortTournamentLeaderboardEntryData::TotalPlacements_Top5");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, TotalPlacements_Top10) == 240, "Offset mismatch for UFortTournamentLeaderboardEntryData::TotalPlacements_Top10");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, TotalEliminations) == 244, "Offset mismatch for UFortTournamentLeaderboardEntryData::TotalEliminations");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, AveragePlacement) == 248, "Offset mismatch for UFortTournamentLeaderboardEntryData::AveragePlacement");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, bUseQualifiedIcons) == 252, "Offset mismatch for UFortTournamentLeaderboardEntryData::bUseQualifiedIcons");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, bIsTeamQualified) == 253, "Offset mismatch for UFortTournamentLeaderboardEntryData::bIsTeamQualified");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, bIsMatchPointWinner) == 254, "Offset mismatch for UFortTournamentLeaderboardEntryData::bIsMatchPointWinner");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, bIsSeriesPointLeaderboards) == 255, "Offset mismatch for UFortTournamentLeaderboardEntryData::bIsSeriesPointLeaderboards");
static_assert(offsetof(UFortTournamentLeaderboardEntryData, SessionsTeamEntries) == 256, "Offset mismatch for UFortTournamentLeaderboardEntryData::SessionsTeamEntries");

// /Script/CompeteUI.FortTournamentLeaderboardSessionTeamEntryVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentLeaderboardSessionTeamEntryVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString SessionID; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::int32_t SessionNumber; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    TMap<void*, void*> TrackedStatsTimesAchieved; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::int32_t CreativeScore; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowCreativeScore; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowEliminations; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsScoreContributor; // 0x0096 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, SessionID) == 104, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::SessionID");
static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, SessionNumber) == 120, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::SessionNumber");
static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, TrackedStatsTimesAchieved) == 128, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::TrackedStatsTimesAchieved");
static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, CreativeScore) == 144, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::CreativeScore");
static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, bShowCreativeScore) == 148, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::bShowCreativeScore");
static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, bShowEliminations) == 149, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::bShowEliminations");
static_assert(offsetof(UFortTournamentLeaderboardSessionTeamEntryVM, bIsScoreContributor) == 150, "Offset mismatch for UFortTournamentLeaderboardSessionTeamEntryVM::bIsScoreContributor");

// /Script/CompeteUI.FortTournamentLeaderboardVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> ViewStates; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0078
    void* CompeteUIManager; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LeaderboardCategories; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentLeaderboardCategoryIndex; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowFriendsOnly; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B5
    std::uint8_t TournamentName[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegionName[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    TArray<void*> EventWindowsList; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsModelInitialized; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00E9
    std::int32_t QualifierScore; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::uint8_t TokenData[0x80]; // 0x00F0 (Size: 0x80, Type: StructProperty)
    std::uint8_t LeaderboardUpdateTime[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    void* MatchHistoryDialogVM; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTournamentLeaderboardVM, ViewStates) == 104, "Offset mismatch for UFortTournamentLeaderboardVM::ViewStates");
static_assert(offsetof(UFortTournamentLeaderboardVM, CompeteUIManager) == 152, "Offset mismatch for UFortTournamentLeaderboardVM::CompeteUIManager");
static_assert(offsetof(UFortTournamentLeaderboardVM, LeaderboardCategories) == 160, "Offset mismatch for UFortTournamentLeaderboardVM::LeaderboardCategories");
static_assert(offsetof(UFortTournamentLeaderboardVM, CurrentLeaderboardCategoryIndex) == 176, "Offset mismatch for UFortTournamentLeaderboardVM::CurrentLeaderboardCategoryIndex");
static_assert(offsetof(UFortTournamentLeaderboardVM, bShowFriendsOnly) == 180, "Offset mismatch for UFortTournamentLeaderboardVM::bShowFriendsOnly");
static_assert(offsetof(UFortTournamentLeaderboardVM, TournamentName) == 184, "Offset mismatch for UFortTournamentLeaderboardVM::TournamentName");
static_assert(offsetof(UFortTournamentLeaderboardVM, RegionName) == 200, "Offset mismatch for UFortTournamentLeaderboardVM::RegionName");
static_assert(offsetof(UFortTournamentLeaderboardVM, EventWindowsList) == 216, "Offset mismatch for UFortTournamentLeaderboardVM::EventWindowsList");
static_assert(offsetof(UFortTournamentLeaderboardVM, bIsModelInitialized) == 232, "Offset mismatch for UFortTournamentLeaderboardVM::bIsModelInitialized");
static_assert(offsetof(UFortTournamentLeaderboardVM, QualifierScore) == 236, "Offset mismatch for UFortTournamentLeaderboardVM::QualifierScore");
static_assert(offsetof(UFortTournamentLeaderboardVM, TokenData) == 240, "Offset mismatch for UFortTournamentLeaderboardVM::TokenData");
static_assert(offsetof(UFortTournamentLeaderboardVM, LeaderboardUpdateTime) == 368, "Offset mismatch for UFortTournamentLeaderboardVM::LeaderboardUpdateTime");
static_assert(offsetof(UFortTournamentLeaderboardVM, MatchHistoryDialogVM) == 376, "Offset mismatch for UFortTournamentLeaderboardVM::MatchHistoryDialogVM");

// /Script/CompeteUI.FortTournamentLoadingStatsVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentLoadingStatsVM
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t TotalScore; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t MatchesPlayed; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t NumVictoryRoyales; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t PlacementPoints; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t EliminationPoints; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsValidSummary; // 0x0084 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortTournamentLoadingStatsVM, TotalScore) == 112, "Offset mismatch for UFortTournamentLoadingStatsVM::TotalScore");
static_assert(offsetof(UFortTournamentLoadingStatsVM, MatchesPlayed) == 116, "Offset mismatch for UFortTournamentLoadingStatsVM::MatchesPlayed");
static_assert(offsetof(UFortTournamentLoadingStatsVM, NumVictoryRoyales) == 120, "Offset mismatch for UFortTournamentLoadingStatsVM::NumVictoryRoyales");
static_assert(offsetof(UFortTournamentLoadingStatsVM, PlacementPoints) == 124, "Offset mismatch for UFortTournamentLoadingStatsVM::PlacementPoints");
static_assert(offsetof(UFortTournamentLoadingStatsVM, EliminationPoints) == 128, "Offset mismatch for UFortTournamentLoadingStatsVM::EliminationPoints");
static_assert(offsetof(UFortTournamentLoadingStatsVM, bIsValidSummary) == 132, "Offset mismatch for UFortTournamentLoadingStatsVM::bIsValidSummary");

// /Script/CompeteUI.FortTournamentPlayerProfileVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentPlayerProfileVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString AccountID; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString DisplayName; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString FlagName; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortTournamentPlayerProfileVM, AccountID) == 104, "Offset mismatch for UFortTournamentPlayerProfileVM::AccountID");
static_assert(offsetof(UFortTournamentPlayerProfileVM, DisplayName) == 120, "Offset mismatch for UFortTournamentPlayerProfileVM::DisplayName");
static_assert(offsetof(UFortTournamentPlayerProfileVM, FlagName) == 136, "Offset mismatch for UFortTournamentPlayerProfileVM::FlagName");

// /Script/CompeteUI.FortTournamentRequirementsModalVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentRequirementsModalVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> RequirementsList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllChecksPassed; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    void* CompeteUIManager; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x00A0
    std::uint8_t RankInfo[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastCheckRankResult; // 0x00D0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortTournamentRequirementsModalVM, RequirementsList) == 128, "Offset mismatch for UFortTournamentRequirementsModalVM::RequirementsList");
static_assert(offsetof(UFortTournamentRequirementsModalVM, bAllChecksPassed) == 144, "Offset mismatch for UFortTournamentRequirementsModalVM::bAllChecksPassed");
static_assert(offsetof(UFortTournamentRequirementsModalVM, CompeteUIManager) == 152, "Offset mismatch for UFortTournamentRequirementsModalVM::CompeteUIManager");
static_assert(offsetof(UFortTournamentRequirementsModalVM, RankInfo) == 192, "Offset mismatch for UFortTournamentRequirementsModalVM::RankInfo");
static_assert(offsetof(UFortTournamentRequirementsModalVM, LastCheckRankResult) == 208, "Offset mismatch for UFortTournamentRequirementsModalVM::LastCheckRankResult");

// /Script/CompeteUI.FortTournamentRequirementsPrerequisiteDataHandler
// Kind: Class; super: Object
class UFortTournamentRequirementsPrerequisiteDataHandler
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* Tournament; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* CompeteUIManager; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTournamentRequirementsPrerequisiteDataHandler, Tournament) == 88, "Offset mismatch for UFortTournamentRequirementsPrerequisiteDataHandler::Tournament");
static_assert(offsetof(UFortTournamentRequirementsPrerequisiteDataHandler, CompeteUIManager) == 96, "Offset mismatch for UFortTournamentRequirementsPrerequisiteDataHandler::CompeteUIManager");

// /Script/CompeteUI.FortTournamentRequirementsVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentRequirementsVM
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> RequirementsList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllChecksPassed; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0091
    void* PrerequisiteDataHandler; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* TournamentSeries; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* Tournament; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* CompeteUIManager; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTournamentRequirementsVM, RequirementsList) == 128, "Offset mismatch for UFortTournamentRequirementsVM::RequirementsList");
static_assert(offsetof(UFortTournamentRequirementsVM, bAllChecksPassed) == 144, "Offset mismatch for UFortTournamentRequirementsVM::bAllChecksPassed");
static_assert(offsetof(UFortTournamentRequirementsVM, PrerequisiteDataHandler) == 160, "Offset mismatch for UFortTournamentRequirementsVM::PrerequisiteDataHandler");
static_assert(offsetof(UFortTournamentRequirementsVM, TournamentSeries) == 168, "Offset mismatch for UFortTournamentRequirementsVM::TournamentSeries");
static_assert(offsetof(UFortTournamentRequirementsVM, Tournament) == 176, "Offset mismatch for UFortTournamentRequirementsVM::Tournament");
static_assert(offsetof(UFortTournamentRequirementsVM, CompeteUIManager) == 184, "Offset mismatch for UFortTournamentRequirementsVM::CompeteUIManager");

// /Script/CompeteUI.FortTournamentRewardItemVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentRewardItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ItemVM; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsGreyedOut; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortTournamentRewardItemVM, ItemVM) == 104, "Offset mismatch for UFortTournamentRewardItemVM::ItemVM");
static_assert(offsetof(UFortTournamentRewardItemVM, bIsGreyedOut) == 112, "Offset mismatch for UFortTournamentRewardItemVM::bIsGreyedOut");

// /Script/CompeteUI.FortTournamentSeriesContainerVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentSeriesContainerVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnTournamentBookmarksUpdate; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> TournamentSeriesCache; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FakeData[0x1]; // 0x0088 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UFortTournamentSeriesContainerVM, OnTournamentBookmarksUpdate) == 104, "Offset mismatch for UFortTournamentSeriesContainerVM::OnTournamentBookmarksUpdate");
static_assert(offsetof(UFortTournamentSeriesContainerVM, TournamentSeriesCache) == 120, "Offset mismatch for UFortTournamentSeriesContainerVM::TournamentSeriesCache");
static_assert(offsetof(UFortTournamentSeriesContainerVM, FakeData) == 136, "Offset mismatch for UFortTournamentSeriesContainerVM::FakeData");

// /Script/CompeteUI.FortTournamentSeriesPointLeaderboardVM
// Kind: Class; super: FortTournamentLeaderboardVM
class UFortTournamentSeriesPointLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> ViewStates; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0078
    void* CompeteUIManager; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LeaderboardCategories; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentLeaderboardCategoryIndex; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowFriendsOnly; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B5
    std::uint8_t TournamentName[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegionName[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    TArray<void*> EventWindowsList; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsModelInitialized; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00E9
    std::int32_t QualifierScore; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::uint8_t TokenData[0x80]; // 0x00F0 (Size: 0x80, Type: StructProperty)
    std::uint8_t LeaderboardUpdateTime[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    void* MatchHistoryDialogVM; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, ViewStates) == 104, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::ViewStates");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, CompeteUIManager) == 152, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::CompeteUIManager");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, LeaderboardCategories) == 160, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::LeaderboardCategories");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, CurrentLeaderboardCategoryIndex) == 176, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::CurrentLeaderboardCategoryIndex");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, bShowFriendsOnly) == 180, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::bShowFriendsOnly");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, TournamentName) == 184, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::TournamentName");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, RegionName) == 200, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::RegionName");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, EventWindowsList) == 216, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::EventWindowsList");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, bIsModelInitialized) == 232, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::bIsModelInitialized");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, QualifierScore) == 236, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::QualifierScore");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, TokenData) == 240, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::TokenData");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, LeaderboardUpdateTime) == 368, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::LeaderboardUpdateTime");
static_assert(offsetof(UFortTournamentSeriesPointLeaderboardVM, MatchHistoryDialogVM) == 376, "Offset mismatch for UFortTournamentSeriesPointLeaderboardVM::MatchHistoryDialogVM");

// /Script/CompeteUI.FortTournamentSeriesVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentSeriesVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> CachedTournaments; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0078
    std::uint8_t FakeData[0x1]; // 0x0088 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UFortTournamentSeriesVM, CachedTournaments) == 104, "Offset mismatch for UFortTournamentSeriesVM::CachedTournaments");
static_assert(offsetof(UFortTournamentSeriesVM, FakeData) == 136, "Offset mismatch for UFortTournamentSeriesVM::FakeData");

// /Script/CompeteUI.FortTournamentSessionLeaderboardVM
// Kind: Class; super: FortTournamentLeaderboardVM
class UFortTournamentSessionLeaderboardVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> ViewStates; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0078
    void* CompeteUIManager; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LeaderboardCategories; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentLeaderboardCategoryIndex; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowFriendsOnly; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B5
    std::uint8_t TournamentName[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegionName[0x10]; // 0x00C8 (Size: 0x10, Type: TextProperty)
    TArray<void*> EventWindowsList; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsModelInitialized; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00E9
    std::int32_t QualifierScore; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::uint8_t TokenData[0x80]; // 0x00F0 (Size: 0x80, Type: StructProperty)
    std::uint8_t LeaderboardUpdateTime[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    void* MatchHistoryDialogVM; // 0x0178 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTournamentSessionLeaderboardVM, ViewStates) == 104, "Offset mismatch for UFortTournamentSessionLeaderboardVM::ViewStates");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, CompeteUIManager) == 152, "Offset mismatch for UFortTournamentSessionLeaderboardVM::CompeteUIManager");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, LeaderboardCategories) == 160, "Offset mismatch for UFortTournamentSessionLeaderboardVM::LeaderboardCategories");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, CurrentLeaderboardCategoryIndex) == 176, "Offset mismatch for UFortTournamentSessionLeaderboardVM::CurrentLeaderboardCategoryIndex");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, bShowFriendsOnly) == 180, "Offset mismatch for UFortTournamentSessionLeaderboardVM::bShowFriendsOnly");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, TournamentName) == 184, "Offset mismatch for UFortTournamentSessionLeaderboardVM::TournamentName");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, RegionName) == 200, "Offset mismatch for UFortTournamentSessionLeaderboardVM::RegionName");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, EventWindowsList) == 216, "Offset mismatch for UFortTournamentSessionLeaderboardVM::EventWindowsList");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, bIsModelInitialized) == 232, "Offset mismatch for UFortTournamentSessionLeaderboardVM::bIsModelInitialized");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, QualifierScore) == 236, "Offset mismatch for UFortTournamentSessionLeaderboardVM::QualifierScore");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, TokenData) == 240, "Offset mismatch for UFortTournamentSessionLeaderboardVM::TokenData");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, LeaderboardUpdateTime) == 368, "Offset mismatch for UFortTournamentSessionLeaderboardVM::LeaderboardUpdateTime");
static_assert(offsetof(UFortTournamentSessionLeaderboardVM, MatchHistoryDialogVM) == 376, "Offset mismatch for UFortTournamentSessionLeaderboardVM::MatchHistoryDialogVM");

// /Script/CompeteUI.FortTournamentVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* TournamentSeries; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* Requirements; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0078
    void* PosterTexture; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* Poster; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* CompeteLandingPagePosterTexture; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* CompeteLandingPagePoster; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* CompeteUIManager; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FakeData[0x1]; // 0x00B0 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UFortTournamentVM, TournamentSeries) == 104, "Offset mismatch for UFortTournamentVM::TournamentSeries");
static_assert(offsetof(UFortTournamentVM, Requirements) == 112, "Offset mismatch for UFortTournamentVM::Requirements");
static_assert(offsetof(UFortTournamentVM, PosterTexture) == 136, "Offset mismatch for UFortTournamentVM::PosterTexture");
static_assert(offsetof(UFortTournamentVM, Poster) == 144, "Offset mismatch for UFortTournamentVM::Poster");
static_assert(offsetof(UFortTournamentVM, CompeteLandingPagePosterTexture) == 152, "Offset mismatch for UFortTournamentVM::CompeteLandingPagePosterTexture");
static_assert(offsetof(UFortTournamentVM, CompeteLandingPagePoster) == 160, "Offset mismatch for UFortTournamentVM::CompeteLandingPagePoster");
static_assert(offsetof(UFortTournamentVM, CompeteUIManager) == 168, "Offset mismatch for UFortTournamentVM::CompeteUIManager");
static_assert(offsetof(UFortTournamentVM, FakeData) == 176, "Offset mismatch for UFortTournamentVM::FakeData");

// /Script/CompeteUI.FortTournamentViewVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentViewVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* EligibilityRequirementsModalVM; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* WatchLiveVM; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* TournamentHeaderVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0080
    std::uint8_t TournamentDescription[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t SeriesPointLeaderboardName[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegionName[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    TArray<void*> ScoringRules; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventWindowsList; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Payouts; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HeaderPayoutThresholdData[0x80]; // 0x00F0 (Size: 0x80, Type: StructProperty)
    std::uint8_t HeaderPayoutItemData[0x30]; // 0x0170 (Size: 0x30, Type: StructProperty)
    std::uint8_t bIsPlayerEligibleForWindow; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerMeetsRankRequirement; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWindowLive; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLeaderboardAvailable; // 0x01A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCurrentWindowBookmarked; // 0x01A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAreAllWindowsBookmarked; // 0x01A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnyBookmarkableWindows; // 0x01A6 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortTournamentViewVM, EligibilityRequirementsModalVM) == 104, "Offset mismatch for UFortTournamentViewVM::EligibilityRequirementsModalVM");
static_assert(offsetof(UFortTournamentViewVM, WatchLiveVM) == 112, "Offset mismatch for UFortTournamentViewVM::WatchLiveVM");
static_assert(offsetof(UFortTournamentViewVM, TournamentHeaderVM) == 120, "Offset mismatch for UFortTournamentViewVM::TournamentHeaderVM");
static_assert(offsetof(UFortTournamentViewVM, TournamentDescription) == 144, "Offset mismatch for UFortTournamentViewVM::TournamentDescription");
static_assert(offsetof(UFortTournamentViewVM, SeriesPointLeaderboardName) == 160, "Offset mismatch for UFortTournamentViewVM::SeriesPointLeaderboardName");
static_assert(offsetof(UFortTournamentViewVM, RegionName) == 176, "Offset mismatch for UFortTournamentViewVM::RegionName");
static_assert(offsetof(UFortTournamentViewVM, ScoringRules) == 192, "Offset mismatch for UFortTournamentViewVM::ScoringRules");
static_assert(offsetof(UFortTournamentViewVM, EventWindowsList) == 208, "Offset mismatch for UFortTournamentViewVM::EventWindowsList");
static_assert(offsetof(UFortTournamentViewVM, Payouts) == 224, "Offset mismatch for UFortTournamentViewVM::Payouts");
static_assert(offsetof(UFortTournamentViewVM, HeaderPayoutThresholdData) == 240, "Offset mismatch for UFortTournamentViewVM::HeaderPayoutThresholdData");
static_assert(offsetof(UFortTournamentViewVM, HeaderPayoutItemData) == 368, "Offset mismatch for UFortTournamentViewVM::HeaderPayoutItemData");
static_assert(offsetof(UFortTournamentViewVM, bIsPlayerEligibleForWindow) == 416, "Offset mismatch for UFortTournamentViewVM::bIsPlayerEligibleForWindow");
static_assert(offsetof(UFortTournamentViewVM, bPlayerMeetsRankRequirement) == 417, "Offset mismatch for UFortTournamentViewVM::bPlayerMeetsRankRequirement");
static_assert(offsetof(UFortTournamentViewVM, bIsWindowLive) == 418, "Offset mismatch for UFortTournamentViewVM::bIsWindowLive");
static_assert(offsetof(UFortTournamentViewVM, bIsLeaderboardAvailable) == 419, "Offset mismatch for UFortTournamentViewVM::bIsLeaderboardAvailable");
static_assert(offsetof(UFortTournamentViewVM, bIsCurrentWindowBookmarked) == 420, "Offset mismatch for UFortTournamentViewVM::bIsCurrentWindowBookmarked");
static_assert(offsetof(UFortTournamentViewVM, bAreAllWindowsBookmarked) == 421, "Offset mismatch for UFortTournamentViewVM::bAreAllWindowsBookmarked");
static_assert(offsetof(UFortTournamentViewVM, bAnyBookmarkableWindows) == 422, "Offset mismatch for UFortTournamentViewVM::bAnyBookmarkableWindows");

// /Script/CompeteUI.FortTournamentWatchLiveEntryVM
// Kind: Class; super: FortTournamentBaseEntryVM
class UFortTournamentWatchLiveEntryVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FText TimeSinceGameStart; // 0x00C0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortTournamentWatchLiveEntryVM, TimeSinceGameStart) == 192, "Offset mismatch for UFortTournamentWatchLiveEntryVM::TimeSinceGameStart");

// /Script/CompeteUI.FortTournamentWatchLiveVM
// Kind: Class; super: MVVMViewModelBase
class UFortTournamentWatchLiveVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsModelInitialized; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0069
    void* CompeteUIManager; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TournamentName[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    TArray<void*> LiveGames; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortTournamentWatchLiveVM, bIsModelInitialized) == 104, "Offset mismatch for UFortTournamentWatchLiveVM::bIsModelInitialized");
static_assert(offsetof(UFortTournamentWatchLiveVM, CompeteUIManager) == 120, "Offset mismatch for UFortTournamentWatchLiveVM::CompeteUIManager");
static_assert(offsetof(UFortTournamentWatchLiveVM, TournamentName) == 128, "Offset mismatch for UFortTournamentWatchLiveVM::TournamentName");
static_assert(offsetof(UFortTournamentWatchLiveVM, LiveGames) == 144, "Offset mismatch for UFortTournamentWatchLiveVM::LiveGames");

// /Script/CompeteUI.FortTournmentLoadingVM
// Kind: Class; super: FortPerUserViewModel
class UFortTournmentLoadingVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* TournamentHeaderVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* TournamentBackgroundVM; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* LoadingStatsVM; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTournmentLoadingVM, TournamentHeaderVM) == 120, "Offset mismatch for UFortTournmentLoadingVM::TournamentHeaderVM");
static_assert(offsetof(UFortTournmentLoadingVM, TournamentBackgroundVM) == 128, "Offset mismatch for UFortTournmentLoadingVM::TournamentBackgroundVM");
static_assert(offsetof(UFortTournmentLoadingVM, LoadingStatsVM) == 136, "Offset mismatch for UFortTournmentLoadingVM::LoadingStatsVM");

// /Script/CompeteUI.FortUIGameFeatureAction_CompeteUI
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_CompeteUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TournamentDetailsScreenClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TournamentLeaderboardScreenClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t RankedSplashModalClass[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> TournamentLoadingScreenWidget; // 0x0088 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_CompeteUI, TournamentDetailsScreenClass) == 40, "Offset mismatch for UFortUIGameFeatureAction_CompeteUI::TournamentDetailsScreenClass");
static_assert(offsetof(UFortUIGameFeatureAction_CompeteUI, TournamentLeaderboardScreenClass) == 72, "Offset mismatch for UFortUIGameFeatureAction_CompeteUI::TournamentLeaderboardScreenClass");
static_assert(offsetof(UFortUIGameFeatureAction_CompeteUI, RankedSplashModalClass) == 104, "Offset mismatch for UFortUIGameFeatureAction_CompeteUI::RankedSplashModalClass");
static_assert(offsetof(UFortUIGameFeatureAction_CompeteUI, TournamentLoadingScreenWidget) == 136, "Offset mismatch for UFortUIGameFeatureAction_CompeteUI::TournamentLoadingScreenWidget");
