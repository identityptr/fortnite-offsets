#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MoviePlayer
{
    struct MoviePlayerSettings
    {
        static constexpr std::string_view Name = "MoviePlayerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bWaitForMoviesToComplete = 0x28;
            static constexpr std::uintptr_t bMoviesAreSkippable = 0x29;
            static constexpr std::uintptr_t StartupMovies = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bWaitForMoviesToComplete", 0x28, "BoolProperty"},
            {"bMoviesAreSkippable", 0x29, "BoolProperty"},
            {"StartupMovies", 0x30, "ArrayProperty"},
        }};
    };

}
