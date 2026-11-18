#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AvfMediaFactory
{
    struct AvfMediaSettings
    {
        static constexpr std::string_view Name = "AvfMediaSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeAudioOut = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NativeAudioOut", 0x28, "BoolProperty"},
        }};
    };

}
