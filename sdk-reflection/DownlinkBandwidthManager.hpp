#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DownlinkBandwidthManager
{
    struct DownlinkBandwidthManagerConfig
    {
        static constexpr std::string_view Name = "DownlinkBandwidthManagerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumGameplayReservedBandwidthInKbps = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MinimumGameplayReservedBandwidthInKbps", 0x28, "IntProperty"},
        }};
    };

}
