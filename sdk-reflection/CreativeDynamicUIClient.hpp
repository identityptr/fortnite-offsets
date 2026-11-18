#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeDynamicUIClient
{
    struct CreativeDynamicUIDirectorComponent
    {
        static constexpr std::string_view Name = "CreativeDynamicUIDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CreativeScenesMap = 0xC0;
            static constexpr std::uintptr_t MinigameStateScenes = 0xE0;
            static constexpr std::uintptr_t ActiveScenesMap = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CreativeScenesMap", 0xC0, "MapProperty"},
            {"MinigameStateScenes", 0xE0, "ArrayProperty"},
            {"ActiveScenesMap", 0xF0, "MapProperty"},
        }};
    };

    struct CreativeDynamicUILibrary
    {
        static constexpr std::string_view Name = "CreativeDynamicUILibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
