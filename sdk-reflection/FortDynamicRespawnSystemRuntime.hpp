#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDynamicRespawnSystemRuntime
{
    struct FortDynamicRespawnConfig
    {
        static constexpr std::string_view Name = "FortDynamicRespawnConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemVerticalOffset = 0x28;
            static constexpr std::uintptr_t EnemyVerticalOffset = 0x2C;
            static constexpr std::uintptr_t Weight_Distance = 0x30;
            static constexpr std::uintptr_t MinSpawnDistFromEnemy = 0x34;
            static constexpr std::uintptr_t MaxSpawnDistToConsiderEnemy = 0x38;
            static constexpr std::uintptr_t Weight_LOS = 0x3C;
            static constexpr std::uintptr_t MaxDistToConsiderLOS = 0x40;
            static constexpr std::uintptr_t bDisallowDirectLOS = 0x44;
            static constexpr std::uintptr_t DirectLOSFOV = 0x48;
            static constexpr std::uintptr_t bPreferTeamLocation = 0x4C;
            static constexpr std::uintptr_t Weight_TeamLocation = 0x50;
            static constexpr std::uintptr_t MinSpawnDistFromTeammate = 0x54;
            static constexpr std::uintptr_t MaxDistForTeammateInfluence = 0x58;
            static constexpr std::uintptr_t bPreferQuerierLocation = 0x5C;
            static constexpr std::uintptr_t Weight_QuerierLocation = 0x60;
            static constexpr std::uintptr_t MaxInfluenceDistFromQuerier = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ItemVerticalOffset", 0x28, "FloatProperty"},
            {"EnemyVerticalOffset", 0x2C, "FloatProperty"},
            {"Weight_Distance", 0x30, "FloatProperty"},
            {"MinSpawnDistFromEnemy", 0x34, "FloatProperty"},
            {"MaxSpawnDistToConsiderEnemy", 0x38, "FloatProperty"},
            {"Weight_LOS", 0x3C, "FloatProperty"},
            {"MaxDistToConsiderLOS", 0x40, "FloatProperty"},
            {"bDisallowDirectLOS", 0x44, "BoolProperty"},
            {"DirectLOSFOV", 0x48, "FloatProperty"},
            {"bPreferTeamLocation", 0x4C, "BoolProperty"},
            {"Weight_TeamLocation", 0x50, "FloatProperty"},
            {"MinSpawnDistFromTeammate", 0x54, "FloatProperty"},
            {"MaxDistForTeammateInfluence", 0x58, "FloatProperty"},
            {"bPreferQuerierLocation", 0x5C, "BoolProperty"},
            {"Weight_QuerierLocation", 0x60, "FloatProperty"},
            {"MaxInfluenceDistFromQuerier", 0x64, "FloatProperty"},
        }};
    };

}
