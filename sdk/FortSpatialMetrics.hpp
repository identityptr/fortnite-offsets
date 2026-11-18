#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortSpatialMetrics
{
    struct FortSpatialMetricsActorCount
    {
        static constexpr std::string_view Name = "FortSpatialMetricsActorCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricsQuantityMetric";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct FortSpatialMetricsBuildingCount
    {
        static constexpr std::string_view Name = "FortSpatialMetricsBuildingCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSpatialMetricsActorCount";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct FortSpatialMetricsLootContainerCount
    {
        static constexpr std::string_view Name = "FortSpatialMetricsLootContainerCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSpatialMetricsActorCount";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

    struct FortSpatialMetricsPickupCount
    {
        static constexpr std::string_view Name = "FortSpatialMetricsPickupCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSpatialMetricsActorCount";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantityProperties = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuantityProperties", 0x490, "StructProperty"},
        }};
    };

}
