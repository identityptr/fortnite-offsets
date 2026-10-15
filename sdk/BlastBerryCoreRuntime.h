/**
 * decamp dumper generated SDK
 * Package: /Script/BlastBerryCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BlastBerryCoreRuntime.BlastBerryRespawnReward
// Kind: ScriptStruct; super: none
struct FBlastBerryRespawnReward
{
public:
    float RewardTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MessageTableId[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName MessageKey; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBlastBerryRespawnReward, RewardTime) == 0, "Offset mismatch for FBlastBerryRespawnReward::RewardTime");
static_assert(offsetof(FBlastBerryRespawnReward, MessageTableId) == 4, "Offset mismatch for FBlastBerryRespawnReward::MessageTableId");
static_assert(offsetof(FBlastBerryRespawnReward, MessageKey) == 8, "Offset mismatch for FBlastBerryRespawnReward::MessageKey");

// /Script/BlastBerryCoreRuntime.ReloadRemainingTeamLives
// Kind: ScriptStruct; super: none
struct FReloadRemainingTeamLives
{
public:
    std::uint8_t TeamLives; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FReloadRemainingTeamLives, TeamLives) == 0, "Offset mismatch for FReloadRemainingTeamLives::TeamLives");
