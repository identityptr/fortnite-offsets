#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MetasoundPolyphonyInternal
{
    struct MetaSoundEffectsContainer
    {
        static constexpr std::string_view Name = "MetaSoundEffectsContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x30, "ArrayProperty"},
        }};
    };

    struct SoundWaveContainer
    {
        static constexpr std::string_view Name = "SoundWaveContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x30;
            static constexpr std::uintptr_t Properties = 0x38;
            static constexpr std::uintptr_t Entries = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Type", 0x30, "EnumProperty"},
            {"Properties", 0x38, "StructProperty"},
            {"Entries", 0x48, "ArrayProperty"},
        }};
    };

}
