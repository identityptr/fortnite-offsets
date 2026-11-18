#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VictoryCrownsReadRuntime
{
    struct FortCosmeticStatObject_HasCrown
    {
        static constexpr std::string_view Name = "FortCosmeticStatObject_HasCrown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStatObject";
        struct Offsets
        {
            static constexpr std::uintptr_t VictoryCrownAccountItemDefinition = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VictoryCrownAccountItemDefinition", 0x48, "ObjectProperty"},
        }};
    };

    struct FortCosmeticStatObject_TotalRoyalRoyales
    {
        static constexpr std::string_view Name = "FortCosmeticStatObject_TotalRoyalRoyales";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStatObject";
        struct Offsets
        {
            static constexpr std::uintptr_t VictoryCrownAccountItemDefinition = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VictoryCrownAccountItemDefinition", 0x48, "ObjectProperty"},
        }};
    };

    struct FortCosmeticStatObject_TotalVictoryCrowns
    {
        static constexpr std::string_view Name = "FortCosmeticStatObject_TotalVictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStatObject";
        struct Offsets
        {
            static constexpr std::uintptr_t VictoryCrownAccountItemDefinition = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VictoryCrownAccountItemDefinition", 0x48, "ObjectProperty"},
        }};
    };

    struct FortCosmeticStatObject_UsePremiumColors
    {
        static constexpr std::string_view Name = "FortCosmeticStatObject_UsePremiumColors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStatObject";
        struct Offsets
        {
            static constexpr std::uintptr_t StatName = 0x28;
            static constexpr std::uintptr_t CachedStatValues = 0x30;
            static constexpr std::uintptr_t OwningSubsystem = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StatName", 0x28, "NameProperty"},
            {"CachedStatValues", 0x30, "MapProperty"},
            {"OwningSubsystem", 0x40, "ObjectProperty"},
        }};
    };

    struct FortVictoryCrownInterface
    {
        static constexpr std::string_view Name = "FortVictoryCrownInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
