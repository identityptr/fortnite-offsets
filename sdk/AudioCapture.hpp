#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioCapture
{
    struct AudioCapture
    {
        static constexpr std::string_view Name = "AudioCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGenerator";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioCaptureBlueprintLibrary
    {
        static constexpr std::string_view Name = "AudioCaptureBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioCaptureComponent
    {
        static constexpr std::string_view Name = "AudioCaptureComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JitterLatencyFrames = 0x620;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JitterLatencyFrames", 0x620, "IntProperty"},
        }};
    };

    struct AudioCaptureFunctionLibrary
    {
        static constexpr std::string_view Name = "AudioCaptureFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
