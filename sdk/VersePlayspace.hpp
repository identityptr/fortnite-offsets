#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VersePlayspace
{
    struct EntityPlayspaceRegistry
    {
        static constexpr std::string_view Name = "EntityPlayspaceRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityPlayspaceRegistryBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
