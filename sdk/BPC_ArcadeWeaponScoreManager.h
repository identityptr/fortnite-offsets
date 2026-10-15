/**
 * decamp dumper generated SDK
 * Package: /ArcadeWeaponGameplay/Gameplay/BPC_ArcadeWeaponScoreManager
 */
#pragma once
#include "Basic.h"

// /ArcadeWeaponGameplay/Gameplay/BPC_ArcadeWeaponScoreManager.BPC_ArcadeWeaponScoreManager_C
// Kind: BlueprintGeneratedClass; super: FortPlayerStateComponent_ArcadeWeaponPersistence
class UBPC_ArcadeWeaponScoreManager_C
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    FMulticastInlineDelegate OnNewHighScore; // 0x0188 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnScoreDataChanged; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t ReplicatedHighScoreBuild; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::int32_t ReplicatedHighScoreZeroBuild; // 0x01AC (Size: 0x4, Type: IntProperty)
    std::uint8_t LeaderboardDisabledPlaylistTags[0x20]; // 0x01B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t StreakThreshold[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpriteStreakThreshold[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpriteLevelComboScalarCurve[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t RequiredSpriteTag[0x8]; // 0x0248 (Size: 0x8, Type: StructProperty)
    std::uint8_t UseMinigameScore[0x30]; // 0x0250 (Size: 0x30, Type: StructProperty)
    void* MinigameScoreStatFilter; // 0x0280 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BotHighScoreAverageMultiplier[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t BotHighScoreFallbackMax[0x78]; // 0x02B0 (Size: 0x78, Type: StructProperty)
    std::uint8_t CurrentScoreData[0x1]; // 0x0328 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, OnNewHighScore) == 392, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::OnNewHighScore");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, OnScoreDataChanged) == 408, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::OnScoreDataChanged");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, ReplicatedHighScoreBuild) == 424, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::ReplicatedHighScoreBuild");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, ReplicatedHighScoreZeroBuild) == 428, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::ReplicatedHighScoreZeroBuild");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, LeaderboardDisabledPlaylistTags) == 432, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::LeaderboardDisabledPlaylistTags");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, StreakThreshold) == 464, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::StreakThreshold");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, MaxSpriteStreakThreshold) == 504, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::MaxSpriteStreakThreshold");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, SpriteLevelComboScalarCurve) == 544, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::SpriteLevelComboScalarCurve");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, RequiredSpriteTag) == 584, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::RequiredSpriteTag");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, UseMinigameScore) == 592, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::UseMinigameScore");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, MinigameScoreStatFilter) == 640, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::MinigameScoreStatFilter");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, BotHighScoreAverageMultiplier) == 648, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::BotHighScoreAverageMultiplier");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, BotHighScoreFallbackMax) == 688, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::BotHighScoreFallbackMax");
static_assert(offsetof(UBPC_ArcadeWeaponScoreManager_C, CurrentScoreData) == 808, "Offset mismatch for UBPC_ArcadeWeaponScoreManager_C::CurrentScoreData");
