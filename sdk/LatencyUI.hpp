#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LatencyUI
{
    struct LatencyGraph
    {
        static constexpr std::string_view Name = "LatencyGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalLatencyLineColor = 0x308;
            static constexpr std::uintptr_t GameLatencyLineColor = 0x30C;
            static constexpr std::uintptr_t RenderLatencyLineColor = 0x310;
            static constexpr std::uintptr_t DriverLatencyLineColor = 0x314;
            static constexpr std::uintptr_t OSWorkQueueLatencyLineColor = 0x318;
            static constexpr std::uintptr_t GPURenderLatencyLineColor = 0x31C;
            static constexpr std::uintptr_t BackgroundColor = 0x320;
            static constexpr std::uintptr_t MaxLatencyToGraph = 0x324;
            static constexpr std::uintptr_t DesiredSize = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TotalLatencyLineColor", 0x308, "StructProperty"},
            {"GameLatencyLineColor", 0x30C, "StructProperty"},
            {"RenderLatencyLineColor", 0x310, "StructProperty"},
            {"DriverLatencyLineColor", 0x314, "StructProperty"},
            {"OSWorkQueueLatencyLineColor", 0x318, "StructProperty"},
            {"GPURenderLatencyLineColor", 0x31C, "StructProperty"},
            {"BackgroundColor", 0x320, "StructProperty"},
            {"MaxLatencyToGraph", 0x324, "FloatProperty"},
            {"DesiredSize", 0x328, "StructProperty"},
        }};
    };

    struct LatencyWidget
    {
        static constexpr std::string_view Name = "LatencyWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalLatencyUI = 0x310;
            static constexpr std::uintptr_t GameLatencyUI = 0x318;
            static constexpr std::uintptr_t RenderLatencyUI = 0x320;
            static constexpr std::uintptr_t OSWorkLatencyUI = 0x328;
            static constexpr std::uintptr_t DriverLatencyUI = 0x330;
            static constexpr std::uintptr_t GPURenderLatencyUI = 0x338;
            static constexpr std::uintptr_t TweakLatencyUI = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TotalLatencyUI", 0x310, "ObjectProperty"},
            {"GameLatencyUI", 0x318, "ObjectProperty"},
            {"RenderLatencyUI", 0x320, "ObjectProperty"},
            {"OSWorkLatencyUI", 0x328, "ObjectProperty"},
            {"DriverLatencyUI", 0x330, "ObjectProperty"},
            {"GPURenderLatencyUI", 0x338, "ObjectProperty"},
            {"TweakLatencyUI", 0x340, "ObjectProperty"},
        }};
    };

}
