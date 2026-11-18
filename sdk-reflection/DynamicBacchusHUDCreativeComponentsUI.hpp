#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicBacchusHUDCreativeComponentsUI
{
    struct DynamicBacchusHUDDirectorComponent_EquippedItemOverride
    {
        static constexpr std::string_view Name = "DynamicBacchusHUDDirectorComponent_EquippedItemOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBacchusHUDDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedItemTags = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EquippedItemTags", 0xE0, "StructProperty"},
        }};
    };

    struct DynamicBacchusHUDDirectorComponent_PlayerInfoOverride
    {
        static constexpr std::string_view Name = "DynamicBacchusHUDDirectorComponent_PlayerInfoOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBacchusHUDDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPlayerInfoTags = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocalPlayerInfoTags", 0xE0, "StructProperty"},
        }};
    };

    struct DynamicBacchusHUDDirectorComponent_QuickbarOverride
    {
        static constexpr std::string_view Name = "DynamicBacchusHUDDirectorComponent_QuickbarOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBacchusHUDDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuickbarTags = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuickbarTags", 0xE0, "StructProperty"},
        }};
    };

}
