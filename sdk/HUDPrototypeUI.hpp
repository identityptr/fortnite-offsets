#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HUDPrototypeUI
{
    struct HUDPrototypeUIDirector
    {
        static constexpr std::string_view Name = "HUDPrototypeUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PrototypeScenes = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrototypeScenes", 0x2A8, "ArrayProperty"},
        }};
    };

}
