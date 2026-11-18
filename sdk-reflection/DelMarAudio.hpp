#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarAudio
{
    struct DelMarAudioAudioCookSettings
    {
        static constexpr std::string_view Name = "DelMarAudioAudioCookSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWaveChannelThreshold = 0x28;
            static constexpr std::uintptr_t PathsToScan = 0x30;
            static constexpr std::uintptr_t PlatformQualitySettingsToExclude = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SoundWaveChannelThreshold", 0x28, "IntProperty"},
            {"PathsToScan", 0x30, "ArrayProperty"},
            {"PlatformQualitySettingsToExclude", 0x40, "ArrayProperty"},
        }};
    };

    struct DelMarAudioCheatManager
    {
        static constexpr std::string_view Name = "DelMarAudioCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarAudioPassbyComponent
    {
        static constexpr std::string_view Name = "DelMarAudioPassbyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarAudioProximityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PassbySound = 0x118;
            static constexpr std::uintptr_t PassbyComponent = 0x120;
            static constexpr std::uintptr_t OnPassbyStart = 0x128;
            static constexpr std::uintptr_t OnPassbyStop = 0x138;
            static constexpr std::uintptr_t MinRelativeSpeed = 0x148;
            static constexpr std::uintptr_t MinSpeedStopThresholdOffset = 0x14C;
            static constexpr std::uintptr_t PassbyStartRadiusMax = 0x150;
            static constexpr std::uintptr_t PassbyStartRadiusMin = 0x154;
            static constexpr std::uintptr_t MinRelativeDirection = 0x158;
            static constexpr std::uintptr_t PassbyCooldown = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PassbySound", 0x118, "ObjectProperty"},
            {"PassbyComponent", 0x120, "ObjectProperty"},
            {"OnPassbyStart", 0x128, "MulticastInlineDelegateProperty"},
            {"OnPassbyStop", 0x138, "MulticastInlineDelegateProperty"},
            {"MinRelativeSpeed", 0x148, "FloatProperty"},
            {"MinSpeedStopThresholdOffset", 0x14C, "FloatProperty"},
            {"PassbyStartRadiusMax", 0x150, "FloatProperty"},
            {"PassbyStartRadiusMin", 0x154, "FloatProperty"},
            {"MinRelativeDirection", 0x158, "FloatProperty"},
            {"PassbyCooldown", 0x15C, "FloatProperty"},
        }};
    };

    struct DelMarAudioProximityComponent
    {
        static constexpr std::string_view Name = "DelMarAudioProximityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarAudioProximityComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProximitySound = 0xF8;
            static constexpr std::uintptr_t ProximityComponent = 0x100;
            static constexpr std::uintptr_t ObjectScaleAttenuationModifier = 0x108;
            static constexpr std::uintptr_t FadeOutDuration = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProximitySound", 0xF8, "ObjectProperty"},
            {"ProximityComponent", 0x100, "ObjectProperty"},
            {"ObjectScaleAttenuationModifier", 0x108, "FloatProperty"},
            {"FadeOutDuration", 0x10C, "FloatProperty"},
        }};
    };

    struct DelMarAudioProximityComponentBase
    {
        static constexpr std::string_view Name = "DelMarAudioProximityComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnProximityStart = 0xC0;
            static constexpr std::uintptr_t OnProximityStop = 0xD0;
            static constexpr std::uintptr_t bProximityActive = 0xE0;
            static constexpr std::uintptr_t Subsystem = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnProximityStart", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnProximityStop", 0xD0, "MulticastInlineDelegateProperty"},
            {"bProximityActive", 0xE0, "BoolProperty"},
            {"Subsystem", 0xF0, "ObjectProperty"},
        }};
    };

    struct DelMarAudioProximitySubsystem
    {
        static constexpr std::string_view Name = "DelMarAudioProximitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarAudioStateMixerSubsystem
    {
        static constexpr std::string_view Name = "DelMarAudioStateMixerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailableMixes = 0x48;
            static constexpr std::uintptr_t ActiveMixes = 0x58;
            static constexpr std::uintptr_t TemporaryMixes = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AvailableMixes", 0x48, "ArrayProperty"},
            {"ActiveMixes", 0x58, "MapProperty"},
            {"TemporaryMixes", 0x68, "MapProperty"},
        }};
    };

    struct DelMarAudioStatePlayspaceComponent
    {
        static constexpr std::string_view Name = "DelMarAudioStatePlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MixGroupName = 0x180;
            static constexpr std::uintptr_t Mixes = 0x188;
            static constexpr std::uintptr_t CloseVehicleDistanceThreshold = 0x198;
            static constexpr std::uintptr_t CloseVehiclesPackRacingThreshold = 0x19C;
            static constexpr std::uintptr_t UserMusicSettingBus = 0x1A0;
            static constexpr std::uintptr_t UserMusicMix = 0x1A8;
            static constexpr std::uintptr_t MixSubsystem = 0x1B8;
            static constexpr std::uintptr_t VehicleManager = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MixGroupName", 0x180, "NameProperty"},
            {"Mixes", 0x188, "ArrayProperty"},
            {"CloseVehicleDistanceThreshold", 0x198, "FloatProperty"},
            {"CloseVehiclesPackRacingThreshold", 0x19C, "IntProperty"},
            {"UserMusicSettingBus", 0x1A0, "ObjectProperty"},
            {"UserMusicMix", 0x1A8, "ObjectProperty"},
            {"MixSubsystem", 0x1B8, "ObjectProperty"},
            {"VehicleManager", 0x1C0, "ObjectProperty"},
        }};
    };

    struct DelMarAudioVirtualizationSubsystem
    {
        static constexpr std::string_view Name = "DelMarAudioVirtualizationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerNumMap = 0x58;
            static constexpr std::uintptr_t MaxNumPlayers = 0x68;
            static constexpr std::uintptr_t MaxDistantPlayers = 0x6C;
            static constexpr std::uintptr_t DistantPlayerThreshold = 0x70;
            static constexpr std::uintptr_t VehicleManager = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PlayerNumMap", 0x58, "MapProperty"},
            {"MaxNumPlayers", 0x68, "IntProperty"},
            {"MaxDistantPlayers", 0x6C, "IntProperty"},
            {"DistantPlayerThreshold", 0x70, "IntProperty"},
            {"VehicleManager", 0x78, "ObjectProperty"},
        }};
    };

    struct DelMarCrowdAudioManager
    {
        static constexpr std::string_view Name = "DelMarCrowdAudioManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedStateComponent = 0xC0;
            static constexpr std::uintptr_t RaceModeTag = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedStateComponent", 0xC0, "ObjectProperty"},
            {"RaceModeTag", 0xC8, "StructProperty"},
        }};
    };

    struct DelMarRaceMusicManager
    {
        static constexpr std::string_view Name = "DelMarRaceMusicManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RaceModeTag = 0xC0;
            static constexpr std::uintptr_t MusicPlayer = 0xC8;
            static constexpr std::uintptr_t MusicPlayer_LowSpec = 0xD0;
            static constexpr std::uintptr_t MusicEventSystemTag = 0xD8;
            static constexpr std::uintptr_t FadeInDuration = 0xDC;
            static constexpr std::uintptr_t FadeOutDuration = 0xE0;
            static constexpr std::uintptr_t StartLineFadeOutDurtation = 0xE4;
            static constexpr std::uintptr_t PreRaceMusic = 0xE8;
            static constexpr std::uintptr_t PostRaceMusic = 0xF0;
            static constexpr std::uintptr_t MainMusicComponent = 0xF8;
            static constexpr std::uintptr_t StartLineComponent = 0x100;
            static constexpr std::uintptr_t DefaultPlaylist = 0x108;
            static constexpr std::uintptr_t Playlist = 0x128;
            static constexpr std::uintptr_t Songs = 0x130;
            static constexpr std::uintptr_t PlayingSong = 0x140;
            static constexpr std::uintptr_t CachedStateComponent = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"RaceModeTag", 0xC0, "StructProperty"},
            {"MusicPlayer", 0xC8, "ObjectProperty"},
            {"MusicPlayer_LowSpec", 0xD0, "ObjectProperty"},
            {"MusicEventSystemTag", 0xD8, "StructProperty"},
            {"FadeInDuration", 0xDC, "FloatProperty"},
            {"FadeOutDuration", 0xE0, "FloatProperty"},
            {"StartLineFadeOutDurtation", 0xE4, "FloatProperty"},
            {"PreRaceMusic", 0xE8, "ObjectProperty"},
            {"PostRaceMusic", 0xF0, "ObjectProperty"},
            {"MainMusicComponent", 0xF8, "ObjectProperty"},
            {"StartLineComponent", 0x100, "ObjectProperty"},
            {"DefaultPlaylist", 0x108, "SoftObjectProperty"},
            {"Playlist", 0x128, "ObjectProperty"},
            {"Songs", 0x130, "ArrayProperty"},
            {"PlayingSong", 0x140, "StructProperty"},
            {"CachedStateComponent", 0x160, "ObjectProperty"},
        }};
    };

    struct DelMarRaceMusicSettingsActor
    {
        static constexpr std::string_view Name = "DelMarRaceMusicSettingsActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Playlist = 0x278;
            static constexpr std::uintptr_t PreRaceMusic = 0x280;
            static constexpr std::uintptr_t PostRaceMusic = 0x288;
            static constexpr std::uintptr_t bEnableMusic = 0x290;
            static constexpr std::uintptr_t bEnableAudioAnalysis = 0x291;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Playlist", 0x278, "ObjectProperty"},
            {"PreRaceMusic", 0x280, "ObjectProperty"},
            {"PostRaceMusic", 0x288, "ObjectProperty"},
            {"bEnableMusic", 0x290, "BoolProperty"},
            {"bEnableAudioAnalysis", 0x291, "BoolProperty"},
        }};
    };

}
