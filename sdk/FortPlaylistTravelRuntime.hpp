#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortPlaylistTravelRuntime
{
    struct FortControllerComponent_PlaylistTravel
    {
        static constexpr std::string_view Name = "FortControllerComponent_PlaylistTravel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentGameTravelInfo = 0xC0;
            static constexpr std::uintptr_t SquadTravelInputIMC = 0x180;
            static constexpr std::uintptr_t SquadTravelInputPriority = 0x188;
            static constexpr std::uintptr_t SquadTravelOptOutInputAction = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentGameTravelInfo", 0xC0, "StructProperty"},
            {"SquadTravelInputIMC", 0x180, "ObjectProperty"},
            {"SquadTravelInputPriority", 0x188, "StructProperty"},
            {"SquadTravelOptOutInputAction", 0x1B0, "ObjectProperty"},
        }};
    };

    struct FortPlaylistTravelCheatManager
    {
        static constexpr std::string_view Name = "FortPlaylistTravelCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlaylistTravelFunctionLibrary
    {
        static constexpr std::string_view Name = "FortPlaylistTravelFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
