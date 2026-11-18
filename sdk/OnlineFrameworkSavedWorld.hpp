#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineFrameworkSavedWorld
{
    struct SavedWorldGameInstanceSubsystem
    {
        static constexpr std::string_view Name = "SavedWorldGameInstanceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SavedWorldWorldSubsystem
    {
        static constexpr std::string_view Name = "SavedWorldWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
