#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamCatalogRuntime
{
    struct FMJamLoop
    {
        static constexpr std::string_view Name = "FMJamLoop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiFileMajor = 0x28;
            static constexpr std::uintptr_t MidiFileMinor = 0x48;
            static constexpr std::uintptr_t FusionPatchMajor = 0x68;
            static constexpr std::uintptr_t FusionPatchMinor = 0x88;
            static constexpr std::uintptr_t bOverrideDefaultTransposition = 0xA8;
            static constexpr std::uintptr_t Transposes = 0xB0;
            static constexpr std::uintptr_t Song = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MidiFileMajor", 0x28, "SoftObjectProperty"},
            {"MidiFileMinor", 0x48, "SoftObjectProperty"},
            {"FusionPatchMajor", 0x68, "SoftObjectProperty"},
            {"FusionPatchMinor", 0x88, "SoftObjectProperty"},
            {"bOverrideDefaultTransposition", 0xA8, "BoolProperty"},
            {"Transposes", 0xB0, "MapProperty"},
            {"Song", 0xC0, "SoftObjectProperty"},
        }};
    };

    struct FMJamSong
    {
        static constexpr std::string_view Name = "FMJamSong";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongData";
        struct Offsets
        {
            static constexpr std::uintptr_t Tempo = 0xB8;
            static constexpr std::uintptr_t Lead = 0xC0;
            static constexpr std::uintptr_t Misc = 0xC8;
            static constexpr std::uintptr_t bass = 0xD0;
            static constexpr std::uintptr_t Beat = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Tempo", 0xB8, "IntProperty"},
            {"Lead", 0xC0, "ObjectProperty"},
            {"Misc", 0xC8, "ObjectProperty"},
            {"bass", 0xD0, "ObjectProperty"},
            {"Beat", 0xD8, "ObjectProperty"},
        }};
    };

    struct FMJamSongCatalog
    {
        static constexpr std::string_view Name = "FMJamSongCatalog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SongsByShortName = 0x108;
            static constexpr std::uintptr_t CachedCMSCatalog = 0x128;
            static constexpr std::uintptr_t NumCMSRetries = 0x130;
            static constexpr std::uintptr_t bIsInitialScanComplete = 0x134;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SongsByShortName", 0x108, "MapProperty"},
            {"CachedCMSCatalog", 0x128, "ObjectProperty"},
            {"NumCMSRetries", 0x130, "IntProperty"},
            {"bIsInitialScanComplete", 0x134, "BoolProperty"},
        }};
    };

}
