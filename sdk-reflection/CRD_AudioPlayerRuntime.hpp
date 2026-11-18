#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_AudioPlayerRuntime
{
    struct CreativeAudioComponent
    {
        static constexpr std::string_view Name = "CreativeAudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StereoSpreadScaleFactor = 0xC8;
            static constexpr std::uintptr_t OnAudioFinished = 0xD0;
            static constexpr std::uintptr_t FadeInDuration = 0x100;
            static constexpr std::uintptr_t FadeOutDuration = 0x104;
            static constexpr std::uintptr_t bSyncPlayerAudio = 0x108;
            static constexpr std::uintptr_t bRestartAudioOnPlay = 0x109;
            static constexpr std::uintptr_t bLoopAudio = 0x10A;
            static constexpr std::uintptr_t CanBeHeardBy = 0x10B;
            static constexpr std::uintptr_t PlayLocation = 0x10C;
            static constexpr std::uintptr_t AutoplayOptions = 0x10D;
            static constexpr std::uintptr_t FortMinigameProgressComponent = 0x138;
            static constexpr std::uintptr_t CreativeProxyManager = 0x140;
            static constexpr std::uintptr_t CreativeRegisteredPlayersManagerComponent = 0x148;
            static constexpr std::uintptr_t AudioComponent = 0x150;
            static constexpr std::uintptr_t MusicClockComponent = 0x158;
            static constexpr std::uintptr_t PlayerAudioComponents = 0x160;
            static constexpr std::uintptr_t ClientCachedProxy = 0x170;
            static constexpr std::uintptr_t LastSoundPlayed = 0x178;
            static constexpr std::uintptr_t ServerInstigatorData = 0x180;
            static constexpr std::uintptr_t bEnabled = 0x1C0;
            static constexpr std::uintptr_t bAudioLoaded = 0x1E8;
            static constexpr std::uintptr_t CachedInstigatorData = 0x1F0;
            static constexpr std::uintptr_t RegisteredPlayerIds = 0x230;
            static constexpr std::uintptr_t NonRegisteredPlayerIds = 0x240;
            static constexpr std::uintptr_t CurrentAutoplayState = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"StereoSpreadScaleFactor", 0xC8, "FloatProperty"},
            {"OnAudioFinished", 0xD0, "MulticastInlineDelegateProperty"},
            {"FadeInDuration", 0x100, "FloatProperty"},
            {"FadeOutDuration", 0x104, "FloatProperty"},
            {"bSyncPlayerAudio", 0x108, "BoolProperty"},
            {"bRestartAudioOnPlay", 0x109, "BoolProperty"},
            {"bLoopAudio", 0x10A, "BoolProperty"},
            {"CanBeHeardBy", 0x10B, "EnumProperty"},
            {"PlayLocation", 0x10C, "EnumProperty"},
            {"AutoplayOptions", 0x10D, "EnumProperty"},
            {"FortMinigameProgressComponent", 0x138, "ObjectProperty"},
            {"CreativeProxyManager", 0x140, "ObjectProperty"},
            {"CreativeRegisteredPlayersManagerComponent", 0x148, "ObjectProperty"},
            {"AudioComponent", 0x150, "ObjectProperty"},
            {"MusicClockComponent", 0x158, "ObjectProperty"},
            {"PlayerAudioComponents", 0x160, "MapProperty"},
            {"ClientCachedProxy", 0x170, "ObjectProperty"},
            {"LastSoundPlayed", 0x178, "ObjectProperty"},
            {"ServerInstigatorData", 0x180, "StructProperty"},
            {"bEnabled", 0x1C0, "BoolProperty"},
            {"bAudioLoaded", 0x1E8, "BoolProperty"},
            {"CachedInstigatorData", 0x1F0, "StructProperty"},
            {"RegisteredPlayerIds", 0x230, "ArrayProperty"},
            {"NonRegisteredPlayerIds", 0x240, "ArrayProperty"},
            {"CurrentAutoplayState", 0x250, "EnumProperty"},
        }};
    };

    struct CreativeAudioPlayerReplicationProxy
    {
        static constexpr std::string_view Name = "CreativeAudioPlayerReplicationProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativePlayerReplicationProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t InstigatorData = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstigatorData", 0x288, "StructProperty"},
        }};
    };

}
