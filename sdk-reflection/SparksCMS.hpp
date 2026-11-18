#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCMS
{
    struct CatalogData
    {
        static constexpr std::string_view Name = "CatalogData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bFromHotfix = 0x28;
            static constexpr std::uintptr_t DataEntry = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bFromHotfix", 0x28, "BoolProperty"},
            {"DataEntry", 0x30, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_SparksSongOwnership
    {
        static constexpr std::string_view Name = "PlayspaceComponent_SparksSongOwnership";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAvailableSongsChanged = 0xC0;
            static constexpr std::uintptr_t AvailableSongs = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnAvailableSongsChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"AvailableSongs", 0xE0, "ArrayProperty"},
        }};
    };

    struct SparksCMSFunctionLibrary
    {
        static constexpr std::string_view Name = "SparksCMSFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksFeaturedSongRotation
    {
        static constexpr std::string_view Name = "SparksFeaturedSongRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FeaturedSongArray = 0xE8;
            static constexpr std::uintptr_t SpotlightSongArray = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FeaturedSongArray", 0xE8, "ArrayProperty"},
            {"SpotlightSongArray", 0xF8, "ArrayProperty"},
        }};
    };

    struct SparksSongCatalog
    {
        static constexpr std::string_view Name = "SparksSongCatalog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CatalogByUid = 0x70;
            static constexpr std::uintptr_t CatalogByShortName = 0x80;
            static constexpr std::uintptr_t CatalogByTemplateId = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CatalogByUid", 0x70, "MapProperty"},
            {"CatalogByShortName", 0x80, "MapProperty"},
            {"CatalogByTemplateId", 0x90, "MapProperty"},
        }};
    };

    struct SparksSongData
    {
        static constexpr std::string_view Name = "SparksSongData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ShortName = 0x28;
            static constexpr std::uintptr_t Title = 0x30;
            static constexpr std::uintptr_t Artist = 0x40;
            static constexpr std::uintptr_t Key = 0x50;
            static constexpr std::uintptr_t Mode = 0x51;
            static constexpr std::uintptr_t AdditionalTags = 0x58;
            static constexpr std::uintptr_t AnimGenreTag = 0x78;
            static constexpr std::uintptr_t SongUID = 0x7C;
            static constexpr std::uintptr_t LipSyncAnimAsset = 0x90;
            static constexpr std::uintptr_t SparksCatalogData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ShortName", 0x28, "NameProperty"},
            {"Title", 0x30, "StrProperty"},
            {"Artist", 0x40, "StrProperty"},
            {"Key", 0x50, "EnumProperty"},
            {"Mode", 0x51, "EnumProperty"},
            {"AdditionalTags", 0x58, "StructProperty"},
            {"AnimGenreTag", 0x78, "StructProperty"},
            {"SongUID", 0x7C, "StructProperty"},
            {"LipSyncAnimAsset", 0x90, "SoftObjectProperty"},
            {"SparksCatalogData", 0xB0, "ObjectProperty"},
        }};
    };

    struct SparksSongDataDownloadManager
    {
        static constexpr std::string_view Name = "SparksSongDataDownloadManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t EmptyLipSyncData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmptyLipSyncData", 0x60, "ArrayProperty"},
        }};
    };

    struct SparksSongOwnershipControllerComponent
    {
        static constexpr std::string_view Name = "SparksSongOwnershipControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedSongs = 0xD8;
            static constexpr std::uintptr_t OwnedSongsTemp = 0xE8;
            static constexpr std::uintptr_t bHasUpdatedOwnedSongs = 0xF8;
            static constexpr std::uintptr_t bIsUpdatingOwnedSongs = 0xF9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OwnedSongs", 0xD8, "ArrayProperty"},
            {"OwnedSongsTemp", 0xE8, "ArrayProperty"},
            {"bHasUpdatedOwnedSongs", 0xF8, "BoolProperty"},
            {"bIsUpdatingOwnedSongs", 0xF9, "BoolProperty"},
        }};
    };

    struct SparksWaitForMidiDataAction
    {
        static constexpr std::string_view Name = "SparksWaitForMidiDataAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMidiDataAvailable = 0x30;
            static constexpr std::uintptr_t OnMidiFailedToPrepare = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnMidiDataAvailable", 0x30, "MulticastInlineDelegateProperty"},
            {"OnMidiFailedToPrepare", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

    struct SparksWaitForSongDataAction
    {
        static constexpr std::string_view Name = "SparksWaitForSongDataAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSongDataAvailable = 0x30;
            static constexpr std::uintptr_t OnSongFailedToPrepare = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSongDataAvailable", 0x30, "MulticastInlineDelegateProperty"},
            {"OnSongFailedToPrepare", 0x40, "MulticastInlineDelegateProperty"},
        }};
    };

}
