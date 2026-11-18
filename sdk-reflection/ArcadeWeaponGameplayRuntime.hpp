#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ArcadeWeaponGameplayRuntime
{
    struct FortArcadeWeaponAnimInstance
    {
        static constexpr std::string_view Name = "FortArcadeWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftHandIKCorrection = 0x260;
            static constexpr std::uintptr_t LeftHandIKCorrectionAlpha = 0x278;
            static constexpr std::uintptr_t FortPlayerPawn = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LeftHandIKCorrection", 0x260, "StructProperty"},
            {"LeftHandIKCorrectionAlpha", 0x278, "FloatProperty"},
            {"FortPlayerPawn", 0x280, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_ArcadeWeaponPersistence
    {
        static constexpr std::string_view Name = "FortCheatManager_ArcadeWeaponPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortControllerComponent_ArcadeWeaponLeaderboard
    {
        static constexpr std::string_view Name = "FortControllerComponent_ArcadeWeaponLeaderboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLeaderboardModeChanged = 0xC8;
            static constexpr std::uintptr_t OnFriendsLeaderboardChanged = 0xD8;
            static constexpr std::uintptr_t OnGlobalLeaderboardChanged = 0xE8;
            static constexpr std::uintptr_t RankedEntries = 0xF8;
            static constexpr std::uintptr_t RankedFriendsEntries = 0x108;
            static constexpr std::uintptr_t RankedGlobalEntries = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnLeaderboardModeChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnFriendsLeaderboardChanged", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnGlobalLeaderboardChanged", 0xE8, "MulticastInlineDelegateProperty"},
            {"RankedEntries", 0xF8, "ArrayProperty"},
            {"RankedFriendsEntries", 0x108, "ArrayProperty"},
            {"RankedGlobalEntries", 0x118, "ArrayProperty"},
        }};
    };

    struct FortPlayerStateComponent_ArcadeWeaponPersistence
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_ArcadeWeaponPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent_SaveFrameworkPersistence";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNewHighScore = 0x198;
            static constexpr std::uintptr_t OnScoreDataChanged = 0x1A8;
            static constexpr std::uintptr_t ReplicatedHighScoreBuild = 0x1B8;
            static constexpr std::uintptr_t ReplicatedHighScoreZeroBuild = 0x1BC;
            static constexpr std::uintptr_t LeaderboardDisabledPlaylistTags = 0x1C0;
            static constexpr std::uintptr_t StreakThreshold = 0x1E0;
            static constexpr std::uintptr_t MaxSpriteStreakThreshold = 0x208;
            static constexpr std::uintptr_t SpriteLevelComboScalarCurve = 0x230;
            static constexpr std::uintptr_t RequiredSpriteTag = 0x258;
            static constexpr std::uintptr_t UseMinigameScore = 0x260;
            static constexpr std::uintptr_t MinigameScoreStatFilter = 0x290;
            static constexpr std::uintptr_t BotHighScoreAverageMultiplier = 0x298;
            static constexpr std::uintptr_t BotHighScoreFallbackMax = 0x2C0;
            static constexpr std::uintptr_t CurrentScoreData = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnNewHighScore", 0x198, "MulticastInlineDelegateProperty"},
            {"OnScoreDataChanged", 0x1A8, "MulticastInlineDelegateProperty"},
            {"ReplicatedHighScoreBuild", 0x1B8, "IntProperty"},
            {"ReplicatedHighScoreZeroBuild", 0x1BC, "IntProperty"},
            {"LeaderboardDisabledPlaylistTags", 0x1C0, "StructProperty"},
            {"StreakThreshold", 0x1E0, "StructProperty"},
            {"MaxSpriteStreakThreshold", 0x208, "StructProperty"},
            {"SpriteLevelComboScalarCurve", 0x230, "StructProperty"},
            {"RequiredSpriteTag", 0x258, "StructProperty"},
            {"UseMinigameScore", 0x260, "StructProperty"},
            {"MinigameScoreStatFilter", 0x290, "ClassProperty"},
            {"BotHighScoreAverageMultiplier", 0x298, "StructProperty"},
            {"BotHighScoreFallbackMax", 0x2C0, "StructProperty"},
            {"CurrentScoreData", 0x340, "StructProperty"},
        }};
    };

    struct FortWeaponComponent_ArcadeWeapon
    {
        static constexpr std::string_view Name = "FortWeaponComponent_ArcadeWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponRef = 0xC8;
            static constexpr std::uintptr_t TrickShotConfigs = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeaponRef", 0xC8, "WeakObjectProperty"},
            {"TrickShotConfigs", 0xD0, "ArrayProperty"},
        }};
    };

}
