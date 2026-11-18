#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MorningBellItemsManagerRuntime
{
    struct MorningBellItemsCheatManagerExtension
    {
        static constexpr std::string_view Name = "MorningBellItemsCheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MorningBellItemsSubsystem
    {
        static constexpr std::string_view Name = "MorningBellItemsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActiveItemsChanged = 0x68;
            static constexpr std::uintptr_t ActiveItems = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnActiveItemsChanged", 0x68, "MulticastInlineDelegateProperty"},
            {"ActiveItems", 0x98, "ArrayProperty"},
        }};
    };

}
