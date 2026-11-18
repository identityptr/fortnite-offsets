#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MoonFlaxWarBusUI
{
    struct MoonFlaxWarBusActionWidget
    {
        static constexpr std::string_view Name = "MoonFlaxWarBusActionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionActiveTag = 0x348;
            static constexpr std::uintptr_t ActionCooldownTag = 0x34C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActionActiveTag", 0x348, "StructProperty"},
            {"ActionCooldownTag", 0x34C, "StructProperty"},
        }};
    };

}
