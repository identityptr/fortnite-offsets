#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ClientPilot
{
    struct ClientPilotBlackboard
    {
        static constexpr std::string_view Name = "ClientPilotBlackboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClientPilotBlackboardManager
    {
        static constexpr std::string_view Name = "ClientPilotBlackboardManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PilotBlackboard = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PilotBlackboard", 0x28, "ObjectProperty"},
        }};
    };

    struct ClientPilotComponent
    {
        static constexpr std::string_view Name = "ClientPilotComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
