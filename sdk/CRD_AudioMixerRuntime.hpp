#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_AudioMixerRuntime
{
    struct CreativeAudioMixerDevice
    {
        static constexpr std::string_view Name = "CreativeAudioMixerDevice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCreativeDeviceProp";
        struct Offsets
        {
            static constexpr std::uintptr_t Mix = 0xB60;
            static constexpr std::uintptr_t Bus = 0xB68;
            static constexpr std::uintptr_t FaderValue = 0xB70;
            static constexpr std::uintptr_t CanBeHeardBy = 0xB74;
            static constexpr std::uintptr_t bActivateInEditMode = 0xB75;
            static constexpr std::uintptr_t bActivateOnGameStart = 0xB76;
            static constexpr std::uintptr_t CreativeProxyManagerComponent = 0xB78;
            static constexpr std::uintptr_t FortMinigameProgressComponent = 0xB80;
            static constexpr std::uintptr_t CreativeRegisteredPlayersManagerComponent = 0xB88;
            static constexpr std::uintptr_t FortActorOptionsComponent = 0xB90;
            static constexpr std::uintptr_t bCachedIsActive = 0xB98;
            static constexpr std::uintptr_t CachedInstigator = 0xBA0;
            static constexpr std::uintptr_t ClientCachedProxy = 0xBA8;
            static constexpr std::uintptr_t CachedBusMix = 0xBB0;
            static constexpr std::uintptr_t CachedBusMixName = 0xBB8;
            static constexpr std::uintptr_t RegisteredPlayerIds = 0xBC0;
            static constexpr std::uintptr_t NonRegisteredPlayerIds = 0xBD0;
            static constexpr std::uintptr_t bHasUpdatedStateInEditMode = 0xBE0;
            static constexpr std::uintptr_t bHasUpdatedStateInGameplay = 0xBE1;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"Mix", 0xB60, "ObjectProperty"},
            {"Bus", 0xB68, "ObjectProperty"},
            {"FaderValue", 0xB70, "FloatProperty"},
            {"CanBeHeardBy", 0xB74, "EnumProperty"},
            {"bActivateInEditMode", 0xB75, "BoolProperty"},
            {"bActivateOnGameStart", 0xB76, "BoolProperty"},
            {"CreativeProxyManagerComponent", 0xB78, "ObjectProperty"},
            {"FortMinigameProgressComponent", 0xB80, "ObjectProperty"},
            {"CreativeRegisteredPlayersManagerComponent", 0xB88, "ObjectProperty"},
            {"FortActorOptionsComponent", 0xB90, "ObjectProperty"},
            {"bCachedIsActive", 0xB98, "BoolProperty"},
            {"CachedInstigator", 0xBA0, "ObjectProperty"},
            {"ClientCachedProxy", 0xBA8, "ObjectProperty"},
            {"CachedBusMix", 0xBB0, "ObjectProperty"},
            {"CachedBusMixName", 0xBB8, "NameProperty"},
            {"RegisteredPlayerIds", 0xBC0, "ArrayProperty"},
            {"NonRegisteredPlayerIds", 0xBD0, "ArrayProperty"},
            {"bHasUpdatedStateInEditMode", 0xBE0, "BoolProperty"},
            {"bHasUpdatedStateInGameplay", 0xBE1, "BoolProperty"},
        }};
    };

    struct CreativeAudioMixerReplicationProxy
    {
        static constexpr std::string_view Name = "CreativeAudioMixerReplicationProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativePlayerReplicationProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsActive = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsActive", 0x288, "BoolProperty"},
        }};
    };

}
