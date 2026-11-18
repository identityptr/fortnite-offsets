#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StreamingRadio
{
    struct StreamingRadioManagerNative
    {
        static constexpr std::string_view Name = "StreamingRadioManagerNative";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamMediaSource = 0x278;
            static constexpr std::uintptr_t MediaPlayer = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StreamMediaSource", 0x278, "ObjectProperty"},
            {"MediaPlayer", 0x280, "ObjectProperty"},
        }};
    };

}
