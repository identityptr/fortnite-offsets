#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Overlay
{
    struct BasicOverlays
    {
        static constexpr std::string_view Name = "BasicOverlays";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Overlays";
        struct Offsets
        {
            static constexpr std::uintptr_t Overlays = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overlays", 0x28, "ArrayProperty"},
        }};
    };

    struct LocalizedOverlays
    {
        static constexpr std::string_view Name = "LocalizedOverlays";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Overlays";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultOverlays = 0x28;
            static constexpr std::uintptr_t LocaleToOverlaysMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultOverlays", 0x28, "ObjectProperty"},
            {"LocaleToOverlaysMap", 0x30, "MapProperty"},
        }};
    };

    struct OverlayItem
    {
        static constexpr std::string_view Name = "OverlayItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartTime = 0x0;
            static constexpr std::uintptr_t EndTime = 0x8;
            static constexpr std::uintptr_t Text = 0x10;
            static constexpr std::uintptr_t Position = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StartTime", 0x0, "StructProperty"},
            {"EndTime", 0x8, "StructProperty"},
            {"Text", 0x10, "StrProperty"},
            {"Position", 0x20, "StructProperty"},
        }};
    };

    struct Overlays
    {
        static constexpr std::string_view Name = "Overlays";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
