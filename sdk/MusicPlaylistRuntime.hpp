#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MusicPlaylistRuntime
{
    struct FortMusicPlayerDetailsVM
    {
        static constexpr std::string_view Name = "FortMusicPlayerDetailsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ArtCoverImageReference = 0x68;
            static constexpr std::uintptr_t CurrentMusicItem = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ArtCoverImageReference", 0x68, "StructProperty"},
            {"CurrentMusicItem", 0xA0, "InterfaceProperty"},
        }};
    };

    struct FortMusicPlayerVM
    {
        static constexpr std::string_view Name = "FortMusicPlayerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicPlayerDetails = 0x78;
            static constexpr std::uintptr_t CurrentPlayerState = 0x80;
            static constexpr std::uintptr_t bIsMusicPlaybackInteractionEnabled = 0x81;
            static constexpr std::uintptr_t bIsMusicPlayerAvailable = 0x82;
            static constexpr std::uintptr_t bIsPlayingPlayList = 0x83;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MusicPlayerDetails", 0x78, "ObjectProperty"},
            {"CurrentPlayerState", 0x80, "EnumProperty"},
            {"bIsMusicPlaybackInteractionEnabled", 0x81, "BoolProperty"},
            {"bIsMusicPlayerAvailable", 0x82, "BoolProperty"},
            {"bIsPlayingPlayList", 0x83, "BoolProperty"},
        }};
    };

    struct FortMusicPlaylistConfig
    {
        static constexpr std::string_view Name = "FortMusicPlaylistConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionSingletonAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeSettingDevName = 0x28;
            static constexpr std::uintptr_t LicenseAudioSettingDevName = 0x2C;
            static constexpr std::uintptr_t PlaylistDetailsTypesCollection = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VolumeSettingDevName", 0x28, "NameProperty"},
            {"LicenseAudioSettingDevName", 0x2C, "NameProperty"},
            {"PlaylistDetailsTypesCollection", 0x30, "MapProperty"},
        }};
    };

    struct SparksMusicPlayerDetailsVM
    {
        static constexpr std::string_view Name = "SparksMusicPlayerDetailsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMusicPlayerDetailsVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ArtCoverImageReference = 0x68;
            static constexpr std::uintptr_t CurrentMusicItem = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ArtCoverImageReference", 0x68, "StructProperty"},
            {"CurrentMusicItem", 0xA0, "InterfaceProperty"},
        }};
    };

}
