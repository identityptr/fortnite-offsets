#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SubscribedVerseInputActionRuntime
{
    struct SubscribedVerseInputActionSubsystem
    {
        static constexpr std::string_view Name = "SubscribedVerseInputActionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
