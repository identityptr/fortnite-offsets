#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MemoryUsageQueries
{
    struct MemoryUsageQueriesConfig
    {
        static constexpr std::string_view Name = "MemoryUsageQueriesConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Collections = 0x28;
            static constexpr std::uintptr_t SavingsPresets = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Collections", 0x28, "ArrayProperty"},
            {"SavingsPresets", 0x38, "MapProperty"},
        }};
    };

}
