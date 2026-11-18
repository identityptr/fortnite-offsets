#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNGameTravelUI
{
    struct LFNGameTravelEntryViewModel
    {
        static constexpr std::string_view Name = "LFNGameTravelEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GameTravelPlaylistRegistryType = 0x80;
            static constexpr std::uintptr_t GameTravelUIDataRegistryType = 0x84;
            static constexpr std::uintptr_t ActivityViewModel = 0xB0;
            static constexpr std::uintptr_t CanInitiateGameTravel = 0xB8;
            static constexpr std::uintptr_t GameTravelLockedReason = 0xB9;
            static constexpr std::uintptr_t SmallPreviewImage = 0xC0;
            static constexpr std::uintptr_t PreviewImage = 0xE0;
            static constexpr std::uintptr_t PlaylistPtr = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameTravelPlaylistRegistryType", 0x80, "StructProperty"},
            {"GameTravelUIDataRegistryType", 0x84, "StructProperty"},
            {"ActivityViewModel", 0xB0, "ObjectProperty"},
            {"CanInitiateGameTravel", 0xB8, "BoolProperty"},
            {"GameTravelLockedReason", 0xB9, "EnumProperty"},
            {"SmallPreviewImage", 0xC0, "SoftObjectProperty"},
            {"PreviewImage", 0xE0, "SoftObjectProperty"},
            {"PlaylistPtr", 0x108, "ObjectProperty"},
        }};
    };

    struct LFNGameTravelViewModel
    {
        static constexpr std::string_view Name = "LFNGameTravelViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GameTravelUIDataRegistryType = 0x78;
            static constexpr std::uintptr_t GameTravelPrepTime = 0x80;
            static constexpr std::uintptr_t GameTravelEntries = 0x88;
            static constexpr std::uintptr_t CurrentGameTravelDestinationViewModel = 0x98;
            static constexpr std::uintptr_t GameTravelEntryViewModelClass = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GameTravelUIDataRegistryType", 0x78, "StructProperty"},
            {"GameTravelPrepTime", 0x80, "FloatProperty"},
            {"GameTravelEntries", 0x88, "ArrayProperty"},
            {"CurrentGameTravelDestinationViewModel", 0x98, "ObjectProperty"},
            {"GameTravelEntryViewModelClass", 0xA0, "ClassProperty"},
        }};
    };

}
