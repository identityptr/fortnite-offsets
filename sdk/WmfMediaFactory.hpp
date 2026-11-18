#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WmfMediaFactory
{
    struct WmfMediaSettings
    {
        static constexpr std::string_view Name = "WmfMediaSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowNonStandardCodecs = 0x28;
            static constexpr std::uintptr_t LowLatency = 0x29;
            static constexpr std::uintptr_t NativeAudioOut = 0x2A;
            static constexpr std::uintptr_t HardwareAcceleratedVideoDecoding = 0x2B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AllowNonStandardCodecs", 0x28, "BoolProperty"},
            {"LowLatency", 0x29, "BoolProperty"},
            {"NativeAudioOut", 0x2A, "BoolProperty"},
            {"HardwareAcceleratedVideoDecoding", 0x2B, "BoolProperty"},
        }};
    };

}
