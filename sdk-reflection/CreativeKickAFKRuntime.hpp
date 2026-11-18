#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeKickAFKRuntime
{
    struct FortCreativeKickAFKComponent
    {
        static constexpr std::string_view Name = "FortCreativeKickAFKComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInputBasedAFKComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AFKTableRowEntry = 0x1E8;
            static constexpr std::uintptr_t KickAFKDetectionParameters = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AFKTableRowEntry", 0x1E8, "StructProperty"},
            {"KickAFKDetectionParameters", 0x1F8, "StructProperty"},
        }};
    };

}
