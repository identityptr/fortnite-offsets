#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortFrontendUI
{
    struct FortFrontendDynamicUIDirector
    {
        static constexpr std::string_view Name = "FortFrontendDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDynamicUIDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedSceneRegistryType = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TaggedSceneRegistryType", 0x2B0, "StructProperty"},
        }};
    };

}
