#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WinDualShock
{
    struct DualShockExternalEndpointSettings
    {
        static constexpr std::string_view Name = "DualShockExternalEndpointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEndpointSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControllerIndex", 0x28, "IntProperty"},
        }};
    };

    struct DualShockSoundfieldEndpointSettings
    {
        static constexpr std::string_view Name = "DualShockSoundfieldEndpointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundfieldEndpointSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerIndex = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControllerIndex", 0x28, "IntProperty"},
        }};
    };

    struct DualShockSpatializationSettings
    {
        static constexpr std::string_view Name = "DualShockSpatializationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundfieldEncodingSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Spread = 0x28;
            static constexpr std::uintptr_t Priority = 0x2C;
            static constexpr std::uintptr_t Passthrough = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Spread", 0x28, "FloatProperty"},
            {"Priority", 0x2C, "IntProperty"},
            {"Passthrough", 0x30, "BoolProperty"},
        }};
    };

}
