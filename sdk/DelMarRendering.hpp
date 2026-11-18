#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarRendering
{
    struct DelMarMaterialFXSubsystem
    {
        static constexpr std::string_view Name = "DelMarMaterialFXSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayMPC = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayMPC", 0x48, "ObjectProperty"},
        }};
    };

}
