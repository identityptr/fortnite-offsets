#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OratorElevenLabsRuntime
{
    struct OratorElevenLabsDialogueProvider
    {
        static constexpr std::string_view Name = "OratorElevenLabsDialogueProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorDialogueProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogueAudioFormat = 0x28;
            static constexpr std::uintptr_t AvailableVoices = 0x30;
            static constexpr std::uintptr_t MinAudioToStreamSeconds = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DialogueAudioFormat", 0x28, "EnumProperty"},
            {"AvailableVoices", 0x30, "MapProperty"},
            {"MinAudioToStreamSeconds", 0x40, "FloatProperty"},
        }};
    };

    struct OratorElevenLabsMusicProvider
    {
        static constexpr std::string_view Name = "OratorElevenLabsMusicProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorMusicProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicAudioFormat = 0x28;
            static constexpr std::uintptr_t MusicAudioModel = 0x29;
            static constexpr std::uintptr_t bForceInstrumental = 0x2A;
            static constexpr std::uintptr_t MinAudioToStreamSeconds = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MusicAudioFormat", 0x28, "EnumProperty"},
            {"MusicAudioModel", 0x29, "EnumProperty"},
            {"bForceInstrumental", 0x2A, "BoolProperty"},
            {"MinAudioToStreamSeconds", 0x2C, "FloatProperty"},
        }};
    };

    struct OratorElevenLabsSpeechProvider
    {
        static constexpr std::string_view Name = "OratorElevenLabsSpeechProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorTextToSpeechProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Voice = 0x28;
            static constexpr std::uintptr_t SpeechAudioFormat = 0x30;
            static constexpr std::uintptr_t SpeechAudioModel = 0x31;
            static constexpr std::uintptr_t SpeechStreamingConfig = 0x38;
            static constexpr std::uintptr_t VoiceModifiers = 0x50;
            static constexpr std::uintptr_t MinAudioToStreamSeconds = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Voice", 0x28, "StructProperty"},
            {"SpeechAudioFormat", 0x30, "EnumProperty"},
            {"SpeechAudioModel", 0x31, "EnumProperty"},
            {"SpeechStreamingConfig", 0x38, "StructProperty"},
            {"VoiceModifiers", 0x50, "StructProperty"},
            {"MinAudioToStreamSeconds", 0x68, "FloatProperty"},
        }};
    };

    struct OratorElevenLabsTranscriptionProvider
    {
        static constexpr std::string_view Name = "OratorElevenLabsTranscriptionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OratorTranscriptionProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Model = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Model", 0x28, "EnumProperty"},
        }};
    };

}
