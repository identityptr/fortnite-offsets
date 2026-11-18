#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TakeRecorderNamingTokens
{
    struct TakeRecorderNamingTokens
    {
        static constexpr std::string_view Name = "TakeRecorderNamingTokens";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NamingTokens";
        struct Offsets
        {
            static constexpr std::uintptr_t TakeMetaData = 0xD0;
            static constexpr std::uintptr_t Context = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TakeMetaData", 0xD0, "WeakObjectProperty"},
            {"Context", 0xD8, "ObjectProperty"},
        }};
    };

}
