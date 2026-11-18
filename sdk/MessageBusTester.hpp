#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MessageBusTester
{
    struct MessageBusTesterSettings
    {
        static constexpr std::string_view Name = "MessageBusTesterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseSessionId = 0x30;
            static constexpr std::uintptr_t SessionID = 0x34;
            static constexpr std::uintptr_t TimeoutInterval = 0x38;
            static constexpr std::uintptr_t DiscoveryMessageInterval = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseSessionId", 0x30, "BoolProperty"},
            {"SessionID", 0x34, "IntProperty"},
            {"TimeoutInterval", 0x38, "FloatProperty"},
            {"DiscoveryMessageInterval", 0x3C, "FloatProperty"},
        }};
    };

}
