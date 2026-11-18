#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksSongSetlistRuntime
{
    struct SparksCustomSetlist
    {
        static constexpr std::string_view Name = "SparksCustomSetlist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSetlistChanged = 0xC8;
            static constexpr std::uintptr_t SetlistEntries = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSetlistChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"SetlistEntries", 0xD8, "ArrayProperty"},
        }};
    };

    struct SparksPremadeSetlist
    {
        static constexpr std::string_view Name = "SparksPremadeSetlist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SongShortNameList = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SongShortNameList", 0x30, "ArrayProperty"},
        }};
    };

    struct SparksSetlistInterface
    {
        static constexpr std::string_view Name = "SparksSetlistInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
