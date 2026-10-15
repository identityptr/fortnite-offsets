/**
 * decamp dumper generated SDK
 * Package: /Script/MoviePlayer
 */
#pragma once
#include "Basic.h"

// /Script/MoviePlayer.MoviePlayerSettings
// Kind: Class; super: Object
class UMoviePlayerSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bWaitForMoviesToComplete; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMoviesAreSkippable; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    TArray<void*> StartupMovies; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMoviePlayerSettings, bWaitForMoviesToComplete) == 40, "Offset mismatch for UMoviePlayerSettings::bWaitForMoviesToComplete");
static_assert(offsetof(UMoviePlayerSettings, bMoviesAreSkippable) == 41, "Offset mismatch for UMoviePlayerSettings::bMoviesAreSkippable");
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 48, "Offset mismatch for UMoviePlayerSettings::StartupMovies");
