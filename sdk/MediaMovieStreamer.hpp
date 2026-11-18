#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MediaMovieStreamer
{
    struct MediaMovieAssets
    {
        static constexpr std::string_view Name = "MediaMovieAssets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaPlayer = 0x28;
            static constexpr std::uintptr_t MediaSoundComponent = 0x30;
            static constexpr std::uintptr_t MediaSource = 0x38;
            static constexpr std::uintptr_t MediaTexture = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MediaPlayer", 0x28, "ObjectProperty"},
            {"MediaSoundComponent", 0x30, "ObjectProperty"},
            {"MediaSource", 0x38, "ObjectProperty"},
            {"MediaTexture", 0x40, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnMediaEnd",
        }};
    };

}
