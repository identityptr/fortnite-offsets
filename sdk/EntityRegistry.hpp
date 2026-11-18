#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntityRegistry
{
    struct EntityContainer
    {
        static constexpr std::string_view Name = "EntityContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityRegistry
    {
        static constexpr std::string_view Name = "EntityRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityRegistryBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
