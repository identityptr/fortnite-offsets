#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteMusic
{
    struct FortGameFeatureAction_RegisterMusicItemType
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_RegisterMusicItemType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicItemType = 0x28;
            static constexpr std::uintptr_t ItemHandlerClass = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MusicItemType", 0x28, "ClassProperty"},
            {"ItemHandlerClass", 0x30, "ClassProperty"},
        }};
    };

    struct FortMusicHandler
    {
        static constexpr std::string_view Name = "FortMusicHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMusicItem
    {
        static constexpr std::string_view Name = "FortMusicItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetArtist",
            "GetTitle",
        }};
    };

    struct FortMusicPlaybackState
    {
        static constexpr std::string_view Name = "FortMusicPlaybackState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentItem = 0x0;
            static constexpr std::uintptr_t PlayParams = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentItem", 0x0, "InterfaceProperty"},
            {"PlayParams", 0x10, "StructProperty"},
        }};
    };

    struct FortMusicPlayer
    {
        static constexpr std::string_view Name = "FortMusicPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicHandlers = 0xD8;
            static constexpr std::uintptr_t CurrentItem = 0x118;
            static constexpr std::uintptr_t CurrentItemPlayParams = 0x128;
            static constexpr std::uintptr_t EmptySound = 0x1C0;
            static constexpr std::uintptr_t CurrentMusicEvent = 0x1C8;
            static constexpr std::uintptr_t CurrentAudioComponent = 0x1D0;
            static constexpr std::uintptr_t CurrentMusicClock = 0x1E0;
            static constexpr std::uintptr_t AnalyticsOptOutCategories = 0x218;
            static constexpr std::uintptr_t bTrackRemotePlayerRequests = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MusicHandlers", 0xD8, "ArrayProperty"},
            {"CurrentItem", 0x118, "InterfaceProperty"},
            {"CurrentItemPlayParams", 0x128, "StructProperty"},
            {"EmptySound", 0x1C0, "ObjectProperty"},
            {"CurrentMusicEvent", 0x1C8, "ObjectProperty"},
            {"CurrentAudioComponent", 0x1D0, "ObjectProperty"},
            {"CurrentMusicClock", 0x1E0, "ObjectProperty"},
            {"AnalyticsOptOutCategories", 0x218, "ArrayProperty"},
            {"bTrackRemotePlayerRequests", 0x228, "BoolProperty"},
        }};
    };

    struct FortMusicPlayerParams
    {
        static constexpr std::string_view Name = "FortMusicPlayerParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackType = 0x0;
            static constexpr std::uintptr_t StartTimeOffset = 0x4;
            static constexpr std::uintptr_t bSkipCountIn = 0x8;
            static constexpr std::uintptr_t bLooping = 0x9;
            static constexpr std::uintptr_t bAutoPlay = 0xA;
            static constexpr std::uintptr_t bPauseWhileInaudible = 0xB;
            static constexpr std::uintptr_t bPersistAcrossLevelTransition = 0xC;
            static constexpr std::uintptr_t AudioComponent = 0x14;
            static constexpr std::uintptr_t MetaSoundSource = 0x1C;
            static constexpr std::uintptr_t MusicClock = 0x24;
            static constexpr std::uintptr_t MusicEventTag = 0x2C;
            static constexpr std::uintptr_t MusicEventGroup = 0x30;
            static constexpr std::uintptr_t MusicEventBehaviorTags = 0x38;
            static constexpr std::uintptr_t AnalyticsCategory = 0x58;
            static constexpr std::uintptr_t InitiatingPlayer = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PlaybackType", 0x0, "EnumProperty"},
            {"StartTimeOffset", 0x4, "FloatProperty"},
            {"bSkipCountIn", 0x8, "BoolProperty"},
            {"bLooping", 0x9, "BoolProperty"},
            {"bAutoPlay", 0xA, "BoolProperty"},
            {"bPauseWhileInaudible", 0xB, "BoolProperty"},
            {"bPersistAcrossLevelTransition", 0xC, "BoolProperty"},
            {"AudioComponent", 0x14, "WeakObjectProperty"},
            {"MetaSoundSource", 0x1C, "WeakObjectProperty"},
            {"MusicClock", 0x24, "WeakObjectProperty"},
            {"MusicEventTag", 0x2C, "StructProperty"},
            {"MusicEventGroup", 0x30, "NameProperty"},
            {"MusicEventBehaviorTags", 0x38, "StructProperty"},
            {"AnalyticsCategory", 0x58, "NameProperty"},
            {"InitiatingPlayer", 0x60, "StructProperty"},
        }};
    };

    struct FortMusicPlayerRegistry
    {
        static constexpr std::string_view Name = "FortMusicPlayerRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalMusicPlayer = 0x50;
            static constexpr std::uintptr_t MusicPlayersToPersist = 0x68;
            static constexpr std::uintptr_t MusicPlayersToPersistByTag = 0x78;
            static constexpr std::uintptr_t PersistedMusicPlayersFadingOut = 0x88;
            static constexpr std::uintptr_t EmptySoundPath = 0xB8;
            static constexpr std::uintptr_t EmptySoundLoaded = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GlobalMusicPlayer", 0x50, "ObjectProperty"},
            {"MusicPlayersToPersist", 0x68, "ArrayProperty"},
            {"MusicPlayersToPersistByTag", 0x78, "MapProperty"},
            {"PersistedMusicPlayersFadingOut", 0x88, "ArrayProperty"},
            {"EmptySoundPath", 0xB8, "SoftObjectProperty"},
            {"EmptySoundLoaded", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortMusicPlayer_HandlerInstanceInfo
    {
        static constexpr std::string_view Name = "FortMusicPlayer_HandlerInstanceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemTypeClass = 0x0;
            static constexpr std::uintptr_t MusicHandler = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemTypeClass", 0x0, "ClassProperty"},
            {"MusicHandler", 0x8, "InterfaceProperty"},
        }};
    };

    struct FortMusicPlaylist
    {
        static constexpr std::string_view Name = "FortMusicPlaylist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x58, "ArrayProperty"},
        }};
    };

    struct FortMusicPlaylistController
    {
        static constexpr std::string_view Name = "FortMusicPlaylistController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicPlayer = 0x40;
            static constexpr std::uintptr_t CurrentPlaylist = 0x48;
            static constexpr std::uintptr_t PlaylistParams = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MusicPlayer", 0x40, "ObjectProperty"},
            {"CurrentPlaylist", 0x48, "ObjectProperty"},
            {"PlaylistParams", 0x58, "StructProperty"},
        }};
    };

    struct FortSimpleMusicItem
    {
        static constexpr std::string_view Name = "FortSimpleMusicItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicAsset = 0x30;
            static constexpr std::uintptr_t CoverArtImage = 0x50;
            static constexpr std::uintptr_t Title = 0x70;
            static constexpr std::uintptr_t Artist = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MusicAsset", 0x30, "SoftObjectProperty"},
            {"CoverArtImage", 0x50, "SoftObjectProperty"},
            {"Title", 0x70, "TextProperty"},
            {"Artist", 0x80, "TextProperty"},
        }};
    };

}
