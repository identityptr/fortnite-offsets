#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ForwardingChannels
{
    struct ForwardingChannelFactory
    {
        static constexpr std::string_view Name = "ForwardingChannelFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ForwardingChannelsSubsystem
    {
        static constexpr std::string_view Name = "ForwardingChannelsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardingChannelFactories = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ForwardingChannelFactories", 0x30, "ArrayProperty"},
        }};
    };

}
