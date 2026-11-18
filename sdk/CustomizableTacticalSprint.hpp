#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomizableTacticalSprint
{
    struct CustomizableTacticalSprintDirector
    {
        static constexpr std::string_view Name = "CustomizableTacticalSprintDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultScenes = 0x278;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x288;
            static constexpr std::uintptr_t bEnabledDuringReplay = 0x290;
            static constexpr std::uintptr_t ScenesManuallyAdded = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultScenes", 0x278, "ArrayProperty"},
            {"OwningLocalPlayer", 0x288, "WeakObjectProperty"},
            {"bEnabledDuringReplay", 0x290, "BoolProperty"},
            {"ScenesManuallyAdded", 0x298, "ArrayProperty"},
        }};
    };

}
