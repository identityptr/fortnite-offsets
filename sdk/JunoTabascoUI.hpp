#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoTabascoUI
{
    struct JunoTabascoPOIAnnouncementViewModel
    {
        static constexpr std::string_view Name = "JunoTabascoPOIAnnouncementViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Level = 0x80;
            static constexpr std::uintptr_t Material = 0x88;
            static constexpr std::uintptr_t Name = 0xA8;
            static constexpr std::uintptr_t SubtitleText = 0xB8;
            static constexpr std::uintptr_t BadgeTexture = 0xC8;
            static constexpr std::uintptr_t BadgeColor = 0xE8;
            static constexpr std::uintptr_t TypeTag = 0xEC;
            static constexpr std::uintptr_t HUDBadgeIconMaterial = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Level", 0x80, "IntProperty"},
            {"Material", 0x88, "SoftObjectProperty"},
            {"Name", 0xA8, "TextProperty"},
            {"SubtitleText", 0xB8, "TextProperty"},
            {"BadgeTexture", 0xC8, "SoftObjectProperty"},
            {"BadgeColor", 0xE8, "StructProperty"},
            {"TypeTag", 0xEC, "StructProperty"},
            {"HUDBadgeIconMaterial", 0xF0, "SoftObjectProperty"},
        }};
    };

    struct JunoTabascoUICheatManager
    {
        static constexpr std::string_view Name = "JunoTabascoUICheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
