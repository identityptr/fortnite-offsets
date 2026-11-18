#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksMusicPlaylists
{
    struct FortMusicPlaylistFactory
    {
        static constexpr std::string_view Name = "FortMusicPlaylistFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMusicPlaylist_CalendarEvent
    {
        static constexpr std::string_view Name = "FortMusicPlaylist_CalendarEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMusicPlaylist_WithItemLoading";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x58, "ArrayProperty"},
        }};
    };

    struct FortMusicPlaylist_Featured
    {
        static constexpr std::string_view Name = "FortMusicPlaylist_Featured";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMusicPlaylist_WithItemLoading";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x58, "ArrayProperty"},
        }};
    };

    struct FortMusicPlaylist_WithItemLoading
    {
        static constexpr std::string_view Name = "FortMusicPlaylist_WithItemLoading";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMusicPlaylist";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x58, "ArrayProperty"},
        }};
    };

}
