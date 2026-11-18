#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FN1UEFNFrameworkRuntime
{
    struct FortUserOptionComponent_TickRate
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_TickRate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredTickRate = 0x158;
            static constexpr std::uintptr_t DesiredPhysicsTickRate = 0x159;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DesiredTickRate", 0x158, "EnumProperty"},
            {"DesiredPhysicsTickRate", 0x159, "EnumProperty"},
        }};
    };

}
