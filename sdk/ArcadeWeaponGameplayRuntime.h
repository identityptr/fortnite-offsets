/**
 * decamp dumper generated SDK
 * Package: /Script/ArcadeWeaponGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ArcadeWeaponGameplayRuntime.ArcadeWeaponLeaderboardEntry
// Kind: ScriptStruct; super: none
struct FArcadeWeaponLeaderboardEntry
{
public:
    FString PlayerAccountId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PlayerName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Highscore; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentMatchScore; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t Rank; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsLocalPlayer; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x002D
    std::uint8_t PlayerID[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FArcadeWeaponLeaderboardEntry, PlayerAccountId) == 0, "Offset mismatch for FArcadeWeaponLeaderboardEntry::PlayerAccountId");
static_assert(offsetof(FArcadeWeaponLeaderboardEntry, PlayerName) == 16, "Offset mismatch for FArcadeWeaponLeaderboardEntry::PlayerName");
static_assert(offsetof(FArcadeWeaponLeaderboardEntry, Highscore) == 32, "Offset mismatch for FArcadeWeaponLeaderboardEntry::Highscore");
static_assert(offsetof(FArcadeWeaponLeaderboardEntry, CurrentMatchScore) == 36, "Offset mismatch for FArcadeWeaponLeaderboardEntry::CurrentMatchScore");
static_assert(offsetof(FArcadeWeaponLeaderboardEntry, Rank) == 40, "Offset mismatch for FArcadeWeaponLeaderboardEntry::Rank");
static_assert(offsetof(FArcadeWeaponLeaderboardEntry, bIsLocalPlayer) == 44, "Offset mismatch for FArcadeWeaponLeaderboardEntry::bIsLocalPlayer");
static_assert(offsetof(FArcadeWeaponLeaderboardEntry, PlayerID) == 48, "Offset mismatch for FArcadeWeaponLeaderboardEntry::PlayerID");

// /Script/ArcadeWeaponGameplayRuntime.ArcadeWeaponPersistenceData
// Kind: ScriptStruct; super: none
struct FArcadeWeaponPersistenceData
{
public:
    std::int32_t HighScoreBuild; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t HighScoreZeroBuild; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FArcadeWeaponPersistenceData, HighScoreBuild) == 0, "Offset mismatch for FArcadeWeaponPersistenceData::HighScoreBuild");
static_assert(offsetof(FArcadeWeaponPersistenceData, HighScoreZeroBuild) == 4, "Offset mismatch for FArcadeWeaponPersistenceData::HighScoreZeroBuild");

// /Script/ArcadeWeaponGameplayRuntime.ArcadeWeaponScoreData
// Kind: ScriptStruct; super: none
struct FArcadeWeaponScoreData
{
public:
    std::int32_t Score; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Streak; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t LastDamageAmount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t LastScoreAmount; // 0x000C (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> LastDamagedFortPawn; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TrickShotData[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FArcadeWeaponScoreData, Score) == 0, "Offset mismatch for FArcadeWeaponScoreData::Score");
static_assert(offsetof(FArcadeWeaponScoreData, Streak) == 4, "Offset mismatch for FArcadeWeaponScoreData::Streak");
static_assert(offsetof(FArcadeWeaponScoreData, LastDamageAmount) == 8, "Offset mismatch for FArcadeWeaponScoreData::LastDamageAmount");
static_assert(offsetof(FArcadeWeaponScoreData, LastScoreAmount) == 12, "Offset mismatch for FArcadeWeaponScoreData::LastScoreAmount");
static_assert(offsetof(FArcadeWeaponScoreData, LastDamagedFortPawn) == 16, "Offset mismatch for FArcadeWeaponScoreData::LastDamagedFortPawn");
static_assert(offsetof(FArcadeWeaponScoreData, TrickShotData) == 24, "Offset mismatch for FArcadeWeaponScoreData::TrickShotData");

// /Script/ArcadeWeaponGameplayRuntime.TrickShotConfig
// Kind: ScriptStruct; super: none
struct FTrickShotConfig
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Tag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Points[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTrickShotConfig, Type) == 0, "Offset mismatch for FTrickShotConfig::Type");
static_assert(offsetof(FTrickShotConfig, Tag) == 4, "Offset mismatch for FTrickShotConfig::Tag");
static_assert(offsetof(FTrickShotConfig, Points) == 8, "Offset mismatch for FTrickShotConfig::Points");

// /Script/ArcadeWeaponGameplayRuntime.FortArcadeWeaponAnimInstance
// Kind: Class; super: AnimInstance
class UFortArcadeWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t LeftHandIKCorrection[0x18]; // 0x0260 (Size: 0x18, Type: StructProperty)
    float LeftHandIKCorrectionAlpha; // 0x0278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x027C
    void* FortPlayerPawn; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortArcadeWeaponAnimInstance, LeftHandIKCorrection) == 608, "Offset mismatch for UFortArcadeWeaponAnimInstance::LeftHandIKCorrection");
static_assert(offsetof(UFortArcadeWeaponAnimInstance, LeftHandIKCorrectionAlpha) == 632, "Offset mismatch for UFortArcadeWeaponAnimInstance::LeftHandIKCorrectionAlpha");
static_assert(offsetof(UFortArcadeWeaponAnimInstance, FortPlayerPawn) == 640, "Offset mismatch for UFortArcadeWeaponAnimInstance::FortPlayerPawn");

// /Script/ArcadeWeaponGameplayRuntime.FortCheatManager_ArcadeWeaponPersistence
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_ArcadeWeaponPersistence
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ArcadeWeaponGameplayRuntime.FortControllerComponent_ArcadeWeaponLeaderboard
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_ArcadeWeaponLeaderboard
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLeaderboardModeChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFriendsLeaderboardChanged; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGlobalLeaderboardChanged; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> RankedEntries; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RankedFriendsEntries; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RankedGlobalEntries; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_ArcadeWeaponLeaderboard, OnLeaderboardModeChanged) == 200, "Offset mismatch for UFortControllerComponent_ArcadeWeaponLeaderboard::OnLeaderboardModeChanged");
static_assert(offsetof(UFortControllerComponent_ArcadeWeaponLeaderboard, OnFriendsLeaderboardChanged) == 216, "Offset mismatch for UFortControllerComponent_ArcadeWeaponLeaderboard::OnFriendsLeaderboardChanged");
static_assert(offsetof(UFortControllerComponent_ArcadeWeaponLeaderboard, OnGlobalLeaderboardChanged) == 232, "Offset mismatch for UFortControllerComponent_ArcadeWeaponLeaderboard::OnGlobalLeaderboardChanged");
static_assert(offsetof(UFortControllerComponent_ArcadeWeaponLeaderboard, RankedEntries) == 248, "Offset mismatch for UFortControllerComponent_ArcadeWeaponLeaderboard::RankedEntries");
static_assert(offsetof(UFortControllerComponent_ArcadeWeaponLeaderboard, RankedFriendsEntries) == 264, "Offset mismatch for UFortControllerComponent_ArcadeWeaponLeaderboard::RankedFriendsEntries");
static_assert(offsetof(UFortControllerComponent_ArcadeWeaponLeaderboard, RankedGlobalEntries) == 280, "Offset mismatch for UFortControllerComponent_ArcadeWeaponLeaderboard::RankedGlobalEntries");

// /Script/ArcadeWeaponGameplayRuntime.FortPlayerStateComponent_ArcadeWeaponPersistence
// Kind: Class; super: FortPlayerStateComponent_SaveFrameworkPersistence
class UFortPlayerStateComponent_ArcadeWeaponPersistence
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

static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, OnNewHighScore) == 392, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::OnNewHighScore");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, OnScoreDataChanged) == 408, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::OnScoreDataChanged");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, ReplicatedHighScoreBuild) == 424, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::ReplicatedHighScoreBuild");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, ReplicatedHighScoreZeroBuild) == 428, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::ReplicatedHighScoreZeroBuild");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, LeaderboardDisabledPlaylistTags) == 432, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::LeaderboardDisabledPlaylistTags");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, StreakThreshold) == 464, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::StreakThreshold");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, MaxSpriteStreakThreshold) == 504, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::MaxSpriteStreakThreshold");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, SpriteLevelComboScalarCurve) == 544, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::SpriteLevelComboScalarCurve");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, RequiredSpriteTag) == 584, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::RequiredSpriteTag");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, UseMinigameScore) == 592, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::UseMinigameScore");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, MinigameScoreStatFilter) == 640, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::MinigameScoreStatFilter");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, BotHighScoreAverageMultiplier) == 648, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::BotHighScoreAverageMultiplier");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, BotHighScoreFallbackMax) == 688, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::BotHighScoreFallbackMax");
static_assert(offsetof(UFortPlayerStateComponent_ArcadeWeaponPersistence, CurrentScoreData) == 808, "Offset mismatch for UFortPlayerStateComponent_ArcadeWeaponPersistence::CurrentScoreData");

// /Script/ArcadeWeaponGameplayRuntime.FortWeaponComponent_ArcadeWeapon
// Kind: Class; super: FortWeaponComponent
class UFortWeaponComponent_ArcadeWeapon
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> WeaponRef; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> TrickShotConfigs; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortWeaponComponent_ArcadeWeapon, WeaponRef) == 200, "Offset mismatch for UFortWeaponComponent_ArcadeWeapon::WeaponRef");
static_assert(offsetof(UFortWeaponComponent_ArcadeWeapon, TrickShotConfigs) == 208, "Offset mismatch for UFortWeaponComponent_ArcadeWeapon::TrickShotConfigs");
