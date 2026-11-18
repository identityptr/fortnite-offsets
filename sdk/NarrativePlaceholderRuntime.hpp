#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NarrativePlaceholderRuntime
{
    struct NarrativePlaceholderComponent
    {
        static constexpr std::string_view Name = "NarrativePlaceholderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsStatic = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsStatic", 0xC0, "BoolProperty"},
        }};
    };

}
