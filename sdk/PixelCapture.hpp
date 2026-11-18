#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PixelCapture
{
    struct PixelCaptureMediaCapture
    {
        static constexpr std::string_view Name = "PixelCaptureMediaCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaCapture";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChanged = 0x28;
            static constexpr std::uintptr_t MediaOutput = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStateChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"MediaOutput", 0x60, "ObjectProperty"},
        }};
    };

    struct PixelCaptureMediaOuput
    {
        static constexpr std::string_view Name = "PixelCaptureMediaOuput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfTextureBuffers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumberOfTextureBuffers", 0x28, "IntProperty"},
        }};
    };

}
