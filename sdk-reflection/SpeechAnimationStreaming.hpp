#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpeechAnimationStreaming
{
    struct LiveLinkSpeechAnimationRole
    {
        static constexpr std::string_view Name = "LiveLinkSpeechAnimationRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkAnimationRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpeechAnimationAudioCaptureSource
    {
        static constexpr std::string_view Name = "SpeechAnimationAudioCaptureSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordPackageName = 0x60;
            static constexpr std::uintptr_t RecordAssetName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RecordPackageName", 0x60, "StrProperty"},
            {"RecordAssetName", 0x70, "StrProperty"},
        }};
    };

    struct SpeechAnimationAudioComponent
    {
        static constexpr std::string_view Name = "SpeechAnimationAudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LiveLinkSubject = 0x620;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LiveLinkSubject", 0x620, "StructProperty"},
        }};
    };

    struct SpeechAnimationAudioSource
    {
        static constexpr std::string_view Name = "SpeechAnimationAudioSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpeechAnimationNNEModel
    {
        static constexpr std::string_view Name = "SpeechAnimationNNEModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpeechAnimationSequenceRecorder
    {
        static constexpr std::string_view Name = "SpeechAnimationSequenceRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRecorderStopped = 0x28;
            static constexpr std::uintptr_t ControlRigSection = 0x3C;
            static constexpr std::uintptr_t AudioSource = 0x48;
            static constexpr std::uintptr_t SolverHandle = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnRecorderStopped", 0x28, "MulticastInlineDelegateProperty"},
            {"ControlRigSection", 0x3C, "WeakObjectProperty"},
            {"AudioSource", 0x48, "InterfaceProperty"},
            {"SolverHandle", 0x58, "ObjectProperty"},
        }};
    };

    struct SpeechAnimationSolverHandle
    {
        static constexpr std::string_view Name = "SpeechAnimationSolverHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSolverStopped = 0x30;
            static constexpr std::uintptr_t OnFrameSolved = 0x40;
            static constexpr std::uintptr_t SolvedFramesToCache = 0x50;
            static constexpr std::uintptr_t SolverStopTimeout = 0x54;
            static constexpr std::uintptr_t CachedFrameData = 0x90;
            static constexpr std::uintptr_t NNESolverSettings = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnSolverStopped", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFrameSolved", 0x40, "MulticastInlineDelegateProperty"},
            {"SolvedFramesToCache", 0x50, "IntProperty"},
            {"SolverStopTimeout", 0x54, "FloatProperty"},
            {"CachedFrameData", 0x90, "ArrayProperty"},
            {"NNESolverSettings", 0xA0, "StructProperty"},
        }};
    };

    struct SpeechAnimationSoundWaveSource
    {
        static constexpr std::string_view Name = "SpeechAnimationSoundWaveSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpeechAnimationWaveAudioSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWave = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundWave", 0x50, "ObjectProperty"},
        }};
    };

    struct SpeechAnimationStreamingPipelineSettingsObject
    {
        static constexpr std::string_view Name = "SpeechAnimationStreamingPipelineSettingsObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "StructProperty"},
        }};
    };

    struct SpeechAnimationStreamingSubsystem
    {
        static constexpr std::string_view Name = "SpeechAnimationStreamingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SolverHandles = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SolverHandles", 0x30, "ArrayProperty"},
        }};
    };

    struct SpeechAnimationWavFileSource
    {
        static constexpr std::string_view Name = "SpeechAnimationWavFileSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpeechAnimationWaveAudioSourceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWave = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundWave", 0x50, "ObjectProperty"},
        }};
    };

    struct SpeechAnimationWaveAudioSourceBase
    {
        static constexpr std::string_view Name = "SpeechAnimationWaveAudioSourceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWave = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundWave", 0x50, "ObjectProperty"},
        }};
    };

}
