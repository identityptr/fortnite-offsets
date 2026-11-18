#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NewtonTelekineticonRuntime
{
    struct NewtonTelekineticon
    {
        static constexpr std::string_view Name = "NewtonTelekineticon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InterpolationSpeed = 0xC0;
            static constexpr std::uintptr_t DrawDebug = 0x564;
            static constexpr std::uintptr_t OnComponentGrabbed = 0x568;
            static constexpr std::uintptr_t OnComponentReleased = 0x578;
            static constexpr std::uintptr_t OnVerseControlVarsChanged = 0x588;
            static constexpr std::uintptr_t OnTelekineticonTick = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InterpolationSpeed", 0xC0, "FloatProperty"},
            {"DrawDebug", 0x564, "BoolProperty"},
            {"OnComponentGrabbed", 0x568, "MulticastInlineDelegateProperty"},
            {"OnComponentReleased", 0x578, "MulticastInlineDelegateProperty"},
            {"OnVerseControlVarsChanged", 0x588, "MulticastInlineDelegateProperty"},
            {"OnTelekineticonTick", 0x598, "MulticastInlineDelegateProperty"},
        }};
    };

}
