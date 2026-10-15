/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMusicPlaylists
 */
#pragma once
#include "Basic.h"

// /Script/SparksMusicPlaylists.FortMusicPlaylistFactory
// Kind: Class; super: GameInstanceSubsystem
class UFortMusicPlaylistFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMusicPlaylists.FortMusicPlaylist_CalendarEvent
// Kind: Class; super: FortMusicPlaylist_WithItemLoading
class UFortMusicPlaylist_CalendarEvent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Items; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMusicPlaylist_CalendarEvent, Items) == 88, "Offset mismatch for UFortMusicPlaylist_CalendarEvent::Items");

// /Script/SparksMusicPlaylists.FortMusicPlaylist_Featured
// Kind: Class; super: FortMusicPlaylist_WithItemLoading
class UFortMusicPlaylist_Featured
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Items; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMusicPlaylist_Featured, Items) == 88, "Offset mismatch for UFortMusicPlaylist_Featured::Items");

// /Script/SparksMusicPlaylists.FortMusicPlaylist_WithItemLoading
// Kind: Class; super: FortMusicPlaylist
class UFortMusicPlaylist_WithItemLoading
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Items; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMusicPlaylist_WithItemLoading, Items) == 88, "Offset mismatch for UFortMusicPlaylist_WithItemLoading::Items");
