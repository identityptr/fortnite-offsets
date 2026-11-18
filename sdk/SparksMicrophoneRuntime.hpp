#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksMicrophoneRuntime
{
    struct FortAthenaMutator_SparksVocalChannel
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SparksVocalChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct SparksAudioCaptureComponent
    {
        static constexpr std::string_view Name = "SparksAudioCaptureComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPitchesDetected = 0xC0;
            static constexpr std::uintptr_t AutoCorrelationSettings = 0xD0;
            static constexpr std::uintptr_t YINPitchDetectorSettings = 0xE0;
            static constexpr std::uintptr_t EnvelopeFollowerSettings = 0xF0;
            static constexpr std::uintptr_t UserPreferredAudioCaptureDeviceId = 0x108;
            static constexpr std::uintptr_t UserPreferredAudioCaptureDeviceName = 0x118;
            static constexpr std::uintptr_t MicSensitivity = 0x128;
            static constexpr std::uintptr_t MusicClockComponent = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnPitchesDetected", 0xC0, "MulticastInlineDelegateProperty"},
            {"AutoCorrelationSettings", 0xD0, "StructProperty"},
            {"YINPitchDetectorSettings", 0xE0, "StructProperty"},
            {"EnvelopeFollowerSettings", 0xF0, "StructProperty"},
            {"UserPreferredAudioCaptureDeviceId", 0x108, "StrProperty"},
            {"UserPreferredAudioCaptureDeviceName", 0x118, "StrProperty"},
            {"MicSensitivity", 0x128, "FloatProperty"},
            {"MusicClockComponent", 0x148, "ObjectProperty"},
        }};
    };

}
