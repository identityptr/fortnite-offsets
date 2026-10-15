/**
 * decamp dumper generated SDK
 * Package: /Script/PlaytimeRewardsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PlaytimeRewardsRuntime.FortGameStateComponent_PlaytimeRewards
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_PlaytimeRewards
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* PlaytimeRewardsTable; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_PlaytimeRewards, PlaytimeRewardsTable) == 216, "Offset mismatch for UFortGameStateComponent_PlaytimeRewards::PlaytimeRewardsTable");

// /Script/PlaytimeRewardsRuntime.FortPlayerStateComponent_PlaytimeRewards
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_PlaytimeRewards
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float DisplayIntervalInSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::int32_t AccumulatedXpRewardedThisSession; // 0x00C4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x70]; // 0x00C8
    void* XpItemDefinition; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_PlaytimeRewards, DisplayIntervalInSeconds) == 192, "Offset mismatch for UFortPlayerStateComponent_PlaytimeRewards::DisplayIntervalInSeconds");
static_assert(offsetof(UFortPlayerStateComponent_PlaytimeRewards, AccumulatedXpRewardedThisSession) == 196, "Offset mismatch for UFortPlayerStateComponent_PlaytimeRewards::AccumulatedXpRewardedThisSession");
static_assert(offsetof(UFortPlayerStateComponent_PlaytimeRewards, XpItemDefinition) == 312, "Offset mismatch for UFortPlayerStateComponent_PlaytimeRewards::XpItemDefinition");

// /Script/PlaytimeRewardsRuntime.PlaytimeRewardsCheatManager
// Kind: Class; super: ChildCheatManager
class UPlaytimeRewardsCheatManager
{
public:
    std::uint8_t Opaque[1];
};
