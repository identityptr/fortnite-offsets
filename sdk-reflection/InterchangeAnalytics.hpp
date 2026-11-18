#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InterchangeAnalytics
{
    struct InterchangeAnalyticsHandlerDefault
    {
        static constexpr std::string_view Name = "InterchangeAnalyticsHandlerDefault";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InterchangeAnalyticsHandlerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
