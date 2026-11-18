#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ShootersFTUERuntime
{
    struct FortAthenaMutator_ShootersFTUE
    {
        static constexpr std::string_view Name = "FortAthenaMutator_ShootersFTUE";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggerBoxTag = 0x410;
            static constexpr std::uintptr_t BoundTriggerBoxes = 0x418;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TriggerBoxTag", 0x410, "NameProperty"},
            {"BoundTriggerBoxes", 0x418, "ArrayProperty"},
        }};
    };

}
