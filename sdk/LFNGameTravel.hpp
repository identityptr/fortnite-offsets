#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNGameTravel
{
    struct LFNControllerComponent_GameTravel
    {
        static constexpr std::string_view Name = "LFNControllerComponent_GameTravel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentGameTravelInfo = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentGameTravelInfo", 0xC0, "StructProperty"},
        }};
    };

}
