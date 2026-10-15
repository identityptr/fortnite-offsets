/**
 * decamp dumper generated SDK
 * Package: /Script/FortnitePlaytimeRewardsTypes
 */
#pragma once
#include "Basic.h"

// /Script/FortnitePlaytimeRewardsTypes.PlaytimeRewardsTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FPlaytimeRewardsTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ProductTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t XpPayout; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t RestedXpUsage[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    float CompletionTimeMinutes; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float DisplayTimeIntervalMinutes; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableIfDynamicDistributorsAreActive; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDynamicXpCircuitBreaker; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0022
    std::int32_t WeeklyXpThreshold; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t DiminishedXpPayout; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPlaytimeRewardsTableRow, ProductTag) == 8, "Offset mismatch for FPlaytimeRewardsTableRow::ProductTag");
static_assert(offsetof(FPlaytimeRewardsTableRow, XpPayout) == 12, "Offset mismatch for FPlaytimeRewardsTableRow::XpPayout");
static_assert(offsetof(FPlaytimeRewardsTableRow, RestedXpUsage) == 16, "Offset mismatch for FPlaytimeRewardsTableRow::RestedXpUsage");
static_assert(offsetof(FPlaytimeRewardsTableRow, CompletionTimeMinutes) == 24, "Offset mismatch for FPlaytimeRewardsTableRow::CompletionTimeMinutes");
static_assert(offsetof(FPlaytimeRewardsTableRow, DisplayTimeIntervalMinutes) == 28, "Offset mismatch for FPlaytimeRewardsTableRow::DisplayTimeIntervalMinutes");
static_assert(offsetof(FPlaytimeRewardsTableRow, bDisableIfDynamicDistributorsAreActive) == 32, "Offset mismatch for FPlaytimeRewardsTableRow::bDisableIfDynamicDistributorsAreActive");
static_assert(offsetof(FPlaytimeRewardsTableRow, bUseDynamicXpCircuitBreaker) == 33, "Offset mismatch for FPlaytimeRewardsTableRow::bUseDynamicXpCircuitBreaker");
static_assert(offsetof(FPlaytimeRewardsTableRow, WeeklyXpThreshold) == 36, "Offset mismatch for FPlaytimeRewardsTableRow::WeeklyXpThreshold");
static_assert(offsetof(FPlaytimeRewardsTableRow, DiminishedXpPayout) == 40, "Offset mismatch for FPlaytimeRewardsTableRow::DiminishedXpPayout");

// /Script/FortnitePlaytimeRewardsTypes.PlaytimeXpProfileStat
// Kind: ScriptStruct; super: none
struct FPlaytimeXpProfileStat
{
public:
    std::int32_t CurrentWeekXp; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentWeek; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPlaytimeXpProfileStat, CurrentWeekXp) == 0, "Offset mismatch for FPlaytimeXpProfileStat::CurrentWeekXp");
static_assert(offsetof(FPlaytimeXpProfileStat, CurrentWeek) == 4, "Offset mismatch for FPlaytimeXpProfileStat::CurrentWeek");
