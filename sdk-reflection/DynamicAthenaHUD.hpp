#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicAthenaHUD
{
    struct DynamicAthenaHUDDirector
    {
        static constexpr std::string_view Name = "DynamicAthenaHUDDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameDynamicUIDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleHUDScene = 0x308;
            static constexpr std::uintptr_t CreativeQuickbarScene = 0x310;
            static constexpr std::uintptr_t PlayerMessagesScene = 0x318;
            static constexpr std::uintptr_t TournamentScene = 0x320;
            static constexpr std::uintptr_t ArenaTournamentScene = 0x328;
            static constexpr std::uintptr_t BuildWatermarkScene = 0x330;
            static constexpr std::uintptr_t LoadingMessageScene = 0x338;
            static constexpr std::uintptr_t LocalPlayerInfoScene = 0x340;
            static constexpr std::uintptr_t BusReticleScene = 0x348;
            static constexpr std::uintptr_t AddedScenes = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"VehicleHUDScene", 0x308, "ObjectProperty"},
            {"CreativeQuickbarScene", 0x310, "ObjectProperty"},
            {"PlayerMessagesScene", 0x318, "ObjectProperty"},
            {"TournamentScene", 0x320, "ObjectProperty"},
            {"ArenaTournamentScene", 0x328, "ObjectProperty"},
            {"BuildWatermarkScene", 0x330, "ObjectProperty"},
            {"LoadingMessageScene", 0x338, "ObjectProperty"},
            {"LocalPlayerInfoScene", 0x340, "ObjectProperty"},
            {"BusReticleScene", 0x348, "ObjectProperty"},
            {"AddedScenes", 0x350, "ArrayProperty"},
        }};
    };

}
