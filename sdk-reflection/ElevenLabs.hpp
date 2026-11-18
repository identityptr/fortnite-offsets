#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ElevenLabs
{
    struct ElevenLabsFunctionLibrary
    {
        static constexpr std::string_view Name = "ElevenLabsFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ElevenLabsSettings
    {
        static constexpr std::string_view Name = "ElevenLabsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VoiceRegistryType = 0x28;
            static constexpr std::uintptr_t TextToSpeechEndpoint = 0x30;
            static constexpr std::uintptr_t MusicEndpoint = 0x40;
            static constexpr std::uintptr_t DialogueEndpoint = 0x50;
            static constexpr std::uintptr_t SoundEffectEndpoint = 0x60;
            static constexpr std::uintptr_t SpeechToTextEndpoint = 0x70;
            static constexpr std::uintptr_t Location = 0x80;
            static constexpr std::uintptr_t MusicRequestTimeoutSeconds = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VoiceRegistryType", 0x28, "StructProperty"},
            {"TextToSpeechEndpoint", 0x30, "StrProperty"},
            {"MusicEndpoint", 0x40, "StrProperty"},
            {"DialogueEndpoint", 0x50, "StrProperty"},
            {"SoundEffectEndpoint", 0x60, "StrProperty"},
            {"SpeechToTextEndpoint", 0x70, "StrProperty"},
            {"Location", 0x80, "StrProperty"},
            {"MusicRequestTimeoutSeconds", 0x90, "FloatProperty"},
        }};
    };

    struct ElevenLabsSubsystem
    {
        static constexpr std::string_view Name = "ElevenLabsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalyticsEventNamespace = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnalyticsEventNamespace", 0x38, "StrProperty"},
        }};
    };

}
