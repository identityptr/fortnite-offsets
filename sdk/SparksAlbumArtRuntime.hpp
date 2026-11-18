#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksAlbumArtRuntime
{
    struct SparksAlbumArtData
    {
        static constexpr std::string_view Name = "SparksAlbumArtData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BakedAlbumArt = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BakedAlbumArt", 0x28, "ObjectProperty"},
        }};
    };

    struct SparksAlbumArtManager
    {
        static constexpr std::string_view Name = "SparksAlbumArtManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAlbumArtData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedAlbumArtData", 0x30, "ObjectProperty"},
        }};
    };

}
