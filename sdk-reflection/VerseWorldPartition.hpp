#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseWorldPartition
{
    struct VerseWorldPartitionHelperBase
    {
        static constexpr std::string_view Name = "VerseWorldPartitionHelperBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamingSubscriptionObjs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StreamingSubscriptionObjs", 0x28, "ArrayProperty"},
        }};
    };

}
