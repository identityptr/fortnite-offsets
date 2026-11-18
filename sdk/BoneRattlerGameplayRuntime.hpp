#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BoneRattlerGameplayRuntime
{
    struct FortGameStateComponent_BoneRattler
    {
        static constexpr std::string_view Name = "FortGameStateComponent_BoneRattler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WallRevealInstigatorTargetsMap = 0xC0;
            static constexpr std::uintptr_t TrackedPawns = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WallRevealInstigatorTargetsMap", 0xC0, "MapProperty"},
            {"TrackedPawns", 0xF0, "SetProperty"},
        }};
    };

    struct FortPawnComponent_BoneRattler
    {
        static constexpr std::string_view Name = "FortPawnComponent_BoneRattler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWallRevealTargetPlayerPawnsUpdated = 0xC8;
            static constexpr std::uintptr_t WallRevealTargetPlayerPawns = 0xD8;
            static constexpr std::uintptr_t Hotfix_WallRevealApplyTeammates = 0xE8;
            static constexpr std::uintptr_t WallRevealMaxDistance = 0x118;
            static constexpr std::uintptr_t WallRevealSquadToInstigatorDistance = 0x148;
            static constexpr std::uintptr_t WallRevealSquadPosAngleDegreesThreshold = 0x178;
            static constexpr std::uintptr_t WallRevealSquadProjectedMaxWidth = 0x1A8;
            static constexpr std::uintptr_t WallRevealSquadProjectedAngleDegreesThreshold = 0x1D8;
            static constexpr std::uintptr_t WallRevealSquadImpactPosMaxAngleDegreesThreshold = 0x208;
            static constexpr std::uintptr_t PlayerPawnsBlockLOS = 0x238;
            static constexpr std::uintptr_t VehiclesBlockLOS = 0x268;
            static constexpr std::uintptr_t LOSTraceComplex = 0x298;
            static constexpr std::uintptr_t LOSTraceChannel = 0x2C8;
            static constexpr std::uintptr_t CrouchedTraceOffsets = 0x2D0;
            static constexpr std::uintptr_t NormalTraceOffsets = 0x2E0;
            static constexpr std::uintptr_t WallRevealedHostilePlayerEventTag = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"OnWallRevealTargetPlayerPawnsUpdated", 0xC8, "MulticastInlineDelegateProperty"},
            {"WallRevealTargetPlayerPawns", 0xD8, "ArrayProperty"},
            {"Hotfix_WallRevealApplyTeammates", 0xE8, "StructProperty"},
            {"WallRevealMaxDistance", 0x118, "StructProperty"},
            {"WallRevealSquadToInstigatorDistance", 0x148, "StructProperty"},
            {"WallRevealSquadPosAngleDegreesThreshold", 0x178, "StructProperty"},
            {"WallRevealSquadProjectedMaxWidth", 0x1A8, "StructProperty"},
            {"WallRevealSquadProjectedAngleDegreesThreshold", 0x1D8, "StructProperty"},
            {"WallRevealSquadImpactPosMaxAngleDegreesThreshold", 0x208, "StructProperty"},
            {"PlayerPawnsBlockLOS", 0x238, "StructProperty"},
            {"VehiclesBlockLOS", 0x268, "StructProperty"},
            {"LOSTraceComplex", 0x298, "StructProperty"},
            {"LOSTraceChannel", 0x2C8, "ByteProperty"},
            {"CrouchedTraceOffsets", 0x2D0, "ArrayProperty"},
            {"NormalTraceOffsets", 0x2E0, "ArrayProperty"},
            {"WallRevealedHostilePlayerEventTag", 0x2F0, "StructProperty"},
        }};
    };

    struct TargetingSelectionTask_BoneRattlerLight
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_BoneRattlerLight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_AOE_FromCamera";
        struct Offsets
        {
            static constexpr std::uintptr_t RarityToTraceDistance = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RarityToTraceDistance", 0x1C8, "MapProperty"},
        }};
    };

}
