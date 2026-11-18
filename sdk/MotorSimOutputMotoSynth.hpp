#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotorSimOutputMotoSynth
{
    struct MotorSimOutputMotoSynth
    {
        static constexpr std::string_view Name = "MotorSimOutputMotoSynth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponentMoto";
        struct Offsets
        {
            static constexpr std::uintptr_t MotoSynthPreset = 0x620;
            static constexpr std::uintptr_t RPM = 0x628;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MotoSynthPreset", 0x620, "ObjectProperty"},
            {"RPM", 0x628, "FloatProperty"},
        }};
    };

}
