#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BlastBerryRuntime
{
    struct BlastBerryObjectiveProcessor_PlayerRespawned
    {
        static constexpr std::string_view Name = "BlastBerryObjectiveProcessor_PlayerRespawned";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct BlastBerryObjectiveProcessor_RespawnsDisabled
    {
        static constexpr std::string_view Name = "BlastBerryObjectiveProcessor_RespawnsDisabled";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct BlastBerryObjectiveProcessor_TeamEliminated
    {
        static constexpr std::string_view Name = "BlastBerryObjectiveProcessor_TeamEliminated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct BlastBerryVerseRespawnLogic
    {
        static constexpr std::string_view Name = "BlastBerryVerseRespawnLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaMutator_BlastBerry
    {
        static constexpr std::string_view Name = "FortAthenaMutator_BlastBerry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DBNOReviveTime = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DBNOReviveTime", 0x420, "StructProperty"},
        }};
    };

    struct FortBlastBerryNPCSpawner
    {
        static constexpr std::string_view Name = "FortBlastBerryNPCSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCSpawnerDataClass = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NPCSpawnerDataClass", 0x278, "SoftClassProperty"},
        }};
    };

    struct FortCheatManager_BlastBerry
    {
        static constexpr std::string_view Name = "FortCheatManager_BlastBerry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortControllerComponent_BlastBerry
    {
        static constexpr std::string_view Name = "FortControllerComponent_BlastBerry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNoRebootsRemaining = 0xC8;
            static constexpr std::uintptr_t OnTeammateRespawned = 0xD8;
            static constexpr std::uintptr_t OnTeammateRevived = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnNoRebootsRemaining", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnTeammateRespawned", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnTeammateRevived", 0xE8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortControllerComponent_BlastBerryUI
    {
        static constexpr std::string_view Name = "FortControllerComponent_BlastBerryUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DeathLocationIndicatorDuration = 0xC8;
            static constexpr std::uintptr_t DeathLocationIndicatorWidget = 0xF0;
            static constexpr std::uintptr_t DeathLocationIndicatorIconBrush = 0x110;
            static constexpr std::uintptr_t DeathLocationIndicatorClampedIconBrush = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DeathLocationIndicatorDuration", 0xC8, "StructProperty"},
            {"DeathLocationIndicatorWidget", 0xF0, "SoftClassProperty"},
            {"DeathLocationIndicatorIconBrush", 0x110, "StructProperty"},
            {"DeathLocationIndicatorClampedIconBrush", 0x1C0, "StructProperty"},
        }};
    };

    struct FortGameStateComponent_BlastBerryManager
    {
        static constexpr std::string_view Name = "FortGameStateComponent_BlastBerryManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPawnRespawned = 0xC0;
            static constexpr std::uintptr_t OnPlayerPawnDied = 0xD0;
            static constexpr std::uintptr_t OnTeamWon = 0xE0;
            static constexpr std::uintptr_t OnLocalTeamLivesChanged = 0xF0;
            static constexpr std::uintptr_t OnLocalTimeUntilTeamLivesRechargeChanged = 0x100;
            static constexpr std::uintptr_t OnRespawnsEnabled = 0x110;
            static constexpr std::uintptr_t OnRespawnsDisabled = 0x120;
            static constexpr std::uintptr_t OnTimeUntilRespawnsDisabledUpdated = 0x130;
            static constexpr std::uintptr_t OnConsumedRemainingTeamLives = 0x140;
            static constexpr std::uintptr_t OnHuntEnabledChanged = 0x150;
            static constexpr std::uintptr_t ServerTimeForRespawnsDisabled = 0x160;
            static constexpr std::uintptr_t RespawnPendingPlayerStates = 0x168;
            static constexpr std::uintptr_t bHuntEnabled = 0x178;
            static constexpr std::uintptr_t CurrentGamePhaseStep = 0x179;
            static constexpr std::uintptr_t CurrentSafeZonePhaseIndex = 0x17C;
            static constexpr std::uintptr_t MaxTeamLives = 0x180;
            static constexpr std::uintptr_t TeamLivesRechargeDuration = 0x1A8;
            static constexpr std::uintptr_t RespawnHeight = 0x1D0;
            static constexpr std::uintptr_t RespawnRange = 0x1F8;
            static constexpr std::uintptr_t RespawnCameraDistance = 0x220;
            static constexpr std::uintptr_t UseAdvancedSpawnBehavior = 0x248;
            static constexpr std::uintptr_t UseSoloSpawnEQS = 0x270;
            static constexpr std::uintptr_t SoloDisableEQSRadius = 0x298;
            static constexpr std::uintptr_t SoloSpawnMaxDistanceFromDeathLocation = 0x2C0;
            static constexpr std::uintptr_t AdvancedSpawnSafeZonePredictionTime = 0x2E8;
            static constexpr std::uintptr_t AdvancedSpawnSafeZoneRadiusBuffer = 0x310;
            static constexpr std::uintptr_t AdvancedSpawnGroupProximityDistance = 0x338;
            static constexpr std::uintptr_t WaveRespawnEnabled = 0x360;
            static constexpr std::uintptr_t WaveRespawnDelay = 0x388;
            static constexpr std::uintptr_t IndividualRespawnDelay = 0x3B0;
            static constexpr std::uintptr_t RespawnTimeLimitBuffer = 0x3D8;
            static constexpr std::uintptr_t RespawnRewards = 0x400;
            static constexpr std::uintptr_t SoloRespawnLocationQueryTemplate = 0x410;
            static constexpr std::uintptr_t TeamLives = 0x418;
            static constexpr std::uintptr_t PreviousTeamLives = 0x428;
            static constexpr std::uintptr_t ActiveViewTargetValidationTimersMap = 0x468;
            static constexpr std::uintptr_t RespawnTimeLimitTimersMap = 0x478;
            static constexpr std::uintptr_t SoloRespawnDataMap = 0x488;
            static constexpr std::uintptr_t RespawnLogicScript = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"OnPlayerPawnRespawned", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPawnDied", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnTeamWon", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnLocalTeamLivesChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnLocalTimeUntilTeamLivesRechargeChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"OnRespawnsEnabled", 0x110, "MulticastInlineDelegateProperty"},
            {"OnRespawnsDisabled", 0x120, "MulticastInlineDelegateProperty"},
            {"OnTimeUntilRespawnsDisabledUpdated", 0x130, "MulticastInlineDelegateProperty"},
            {"OnConsumedRemainingTeamLives", 0x140, "MulticastInlineDelegateProperty"},
            {"OnHuntEnabledChanged", 0x150, "MulticastInlineDelegateProperty"},
            {"ServerTimeForRespawnsDisabled", 0x160, "FloatProperty"},
            {"RespawnPendingPlayerStates", 0x168, "ArrayProperty"},
            {"bHuntEnabled", 0x178, "BoolProperty"},
            {"CurrentGamePhaseStep", 0x179, "EnumProperty"},
            {"CurrentSafeZonePhaseIndex", 0x17C, "IntProperty"},
            {"MaxTeamLives", 0x180, "StructProperty"},
            {"TeamLivesRechargeDuration", 0x1A8, "StructProperty"},
            {"RespawnHeight", 0x1D0, "StructProperty"},
            {"RespawnRange", 0x1F8, "StructProperty"},
            {"RespawnCameraDistance", 0x220, "StructProperty"},
            {"UseAdvancedSpawnBehavior", 0x248, "StructProperty"},
            {"UseSoloSpawnEQS", 0x270, "StructProperty"},
            {"SoloDisableEQSRadius", 0x298, "StructProperty"},
            {"SoloSpawnMaxDistanceFromDeathLocation", 0x2C0, "StructProperty"},
            {"AdvancedSpawnSafeZonePredictionTime", 0x2E8, "StructProperty"},
            {"AdvancedSpawnSafeZoneRadiusBuffer", 0x310, "StructProperty"},
            {"AdvancedSpawnGroupProximityDistance", 0x338, "StructProperty"},
            {"WaveRespawnEnabled", 0x360, "StructProperty"},
            {"WaveRespawnDelay", 0x388, "StructProperty"},
            {"IndividualRespawnDelay", 0x3B0, "StructProperty"},
            {"RespawnTimeLimitBuffer", 0x3D8, "StructProperty"},
            {"RespawnRewards", 0x400, "ArrayProperty"},
            {"SoloRespawnLocationQueryTemplate", 0x410, "ObjectProperty"},
            {"TeamLives", 0x418, "ArrayProperty"},
            {"PreviousTeamLives", 0x428, "ArrayProperty"},
            {"ActiveViewTargetValidationTimersMap", 0x468, "MapProperty"},
            {"RespawnTimeLimitTimersMap", 0x478, "MapProperty"},
            {"SoloRespawnDataMap", 0x488, "MapProperty"},
            {"RespawnLogicScript", 0x4A8, "ObjectProperty"},
        }};
    };

    struct FortQueryContext_BlastBerryAllEnemies
    {
        static constexpr std::string_view Name = "FortQueryContext_BlastBerryAllEnemies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_BlastBerryDeathLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_BlastBerryDeathLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_BlastBerryDefaultSpawnLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_BlastBerryDefaultSpawnLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
