#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixStems
{
    struct StemConfiguration
    {
        static constexpr std::string_view Name = "StemConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Stems = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Stems", 0x28, "ArrayProperty"},
        }};
    };

    struct StemmedMediaStreamAsset
    {
        static constexpr std::string_view Name = "StemmedMediaStreamAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StemmedMusicAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaPlayer = 0x40;
            static constexpr std::uintptr_t StreamStems = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MediaPlayer", 0x40, "ObjectProperty"},
            {"StreamStems", 0x48, "ArrayProperty"},
        }};
    };

    struct StemmedMusicAsset
    {
        static constexpr std::string_view Name = "StemmedMusicAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiFile = 0x30;
            static constexpr std::uintptr_t StemConfiguration = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MidiFile", 0x30, "ObjectProperty"},
            {"StemConfiguration", 0x38, "ObjectProperty"},
        }};
    };

    struct StemmedWavesAsset
    {
        static constexpr std::string_view Name = "StemmedWavesAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StemmedMusicAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t WavesStems = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WavesStems", 0x48, "ArrayProperty"},
        }};
    };

}
