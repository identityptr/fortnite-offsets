#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CsvMetrics
{
    struct CsvActorCountMetric
    {
        static constexpr std::string_view Name = "CsvActorCountMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMetricInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CsvMetricsSubsystem
    {
        static constexpr std::string_view Name = "CsvMetricsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t MetricClasses = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetricClasses", 0x38, "ArrayProperty"},
        }};
    };

}
