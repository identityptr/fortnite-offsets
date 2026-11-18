#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamQuickMixRuntime
{
    struct JamQuickMixControllerComponent
    {
        static constexpr std::string_view Name = "JamQuickMixControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bNeedToInitializeUI = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bNeedToInitializeUI", 0xD8, "BoolProperty"},
        }};
    };

}
