#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaBasePlayer
{
    struct EpicBaseStreamingVideo
    {
        static constexpr std::string_view Name = "EpicBaseStreamingVideo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VideoOnTerminalError = 0x30;
            static constexpr std::uintptr_t VideoOnSuccess = 0x40;
            static constexpr std::uintptr_t VideoOnClosed = 0x50;
            static constexpr std::uintptr_t VideoOnEndReached = 0x60;
            static constexpr std::uintptr_t VideoOnOpened = 0x70;
            static constexpr std::uintptr_t VideoOnOpenTimeout = 0x80;
            static constexpr std::uintptr_t VideoOnResumed = 0x90;
            static constexpr std::uintptr_t MediaSource = 0xA0;
            static constexpr std::uintptr_t MediaPlayer = 0xA8;
            static constexpr std::uintptr_t VideoSize = 0xB0;
            static constexpr std::uintptr_t PriorityInfo = 0xB8;
            static constexpr std::uintptr_t ShareBlockedMediaSource = 0xD0;
            static constexpr std::uintptr_t DefaultSubmix = 0xD8;
            static constexpr std::uintptr_t LicensedSubmix = 0xE0;
            static constexpr std::uintptr_t MediaSoundComponent = 0xE8;
            static constexpr std::uintptr_t PendingMediaTexture = 0x158;
            static constexpr std::uintptr_t bAwaitingRetry = 0x160;
            static constexpr std::uintptr_t RetryDelayElapsed = 0x164;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"VideoOnTerminalError", 0x30, "MulticastInlineDelegateProperty"},
            {"VideoOnSuccess", 0x40, "MulticastInlineDelegateProperty"},
            {"VideoOnClosed", 0x50, "MulticastInlineDelegateProperty"},
            {"VideoOnEndReached", 0x60, "MulticastInlineDelegateProperty"},
            {"VideoOnOpened", 0x70, "MulticastInlineDelegateProperty"},
            {"VideoOnOpenTimeout", 0x80, "MulticastInlineDelegateProperty"},
            {"VideoOnResumed", 0x90, "MulticastInlineDelegateProperty"},
            {"MediaSource", 0xA0, "ObjectProperty"},
            {"MediaPlayer", 0xA8, "ObjectProperty"},
            {"VideoSize", 0xB0, "StructProperty"},
            {"PriorityInfo", 0xB8, "StructProperty"},
            {"ShareBlockedMediaSource", 0xD0, "ObjectProperty"},
            {"DefaultSubmix", 0xD8, "ObjectProperty"},
            {"LicensedSubmix", 0xE0, "ObjectProperty"},
            {"MediaSoundComponent", 0xE8, "ObjectProperty"},
            {"PendingMediaTexture", 0x158, "ObjectProperty"},
            {"bAwaitingRetry", 0x160, "BoolProperty"},
            {"RetryDelayElapsed", 0x164, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 30> FunctionNames{{
            "ClearSyncTimes",
            "GetLicensedAudio",
            "GetMediaPlayer",
            "GetMediaPlayerOptions",
            "GetMediaSource",
            "GetPriorityInfo",
            "GetSoundComponent",
            "HandleLicensedAudioTreatmentChanged",
            "HandleMediaClosed",
            "HandleMediaEndReached",
            "HandleMediaOpened",
            "HandleMediaOpenedFailed",
            "HandleMediaResumed",
            "Init",
            "IsSyncStartTimeSet",
            "MethodDebounce",
            "OnFailedURL",
            "OnSuccessfulURL",
            "Open",
            "Release",
            "RetryOnError",
            "SetCreateAudioComponent",
            "SetEnableExternalCloseCallback",
            "SetOpenTimeout",
            "SetPriorityInfo",
            "SetSoundSubmixes",
            "SetSyncTimes",
            "SetVideoSize",
            "Start",
            "Stop",
        }};
    };

    struct EpicMediaPriorityInfo
    {
        static constexpr std::string_view Name = "EpicMediaPriorityInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanBeInterrupted = 0x0;
            static constexpr std::uintptr_t bCanInterruptOtherAndHold = 0x1;
            static constexpr std::uintptr_t Type = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bCanBeInterrupted", 0x0, "BoolProperty"},
            {"bCanInterruptOtherAndHold", 0x1, "BoolProperty"},
            {"Type", 0x2, "EnumProperty"},
        }};
    };

    struct EpicMediaPriorityPendingInfo
    {
        static constexpr std::string_view Name = "EpicMediaPriorityPendingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaTexture = 0x10;
            static constexpr std::uintptr_t MediaOptions = 0x28;
            static constexpr std::uintptr_t PriorityInfo = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MediaTexture", 0x10, "ObjectProperty"},
            {"MediaOptions", 0x28, "StructProperty"},
            {"PriorityInfo", 0xB0, "StructProperty"},
        }};
    };

    struct EpicMediaPrioritySystem
    {
        static constexpr std::string_view Name = "EpicMediaPrioritySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
