#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteEngineLoadingScreen
{
    struct FortniteUserInterfaceSettings
    {
        static constexpr std::string_view Name = "FortniteUserInterfaceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t WidthScaleCurve = 0x30;
            static constexpr std::uintptr_t HeightScaleCurve = 0x78;
            static constexpr std::uintptr_t WidthScaleCurve_iOS_InGame = 0xC0;
            static constexpr std::uintptr_t HeightScaleCurve_iOS_InGame = 0x108;
            static constexpr std::uintptr_t WidthScaleCurve_iOS_FrontEnd = 0x150;
            static constexpr std::uintptr_t HeightScaleCurve_iOS_FrontEnd = 0x198;
            static constexpr std::uintptr_t WidthScaleCurve_Android_InGame = 0x1E0;
            static constexpr std::uintptr_t HeightScaleCurve_Android_InGame = 0x228;
            static constexpr std::uintptr_t WidthScaleCurve_Android_FrontEnd = 0x270;
            static constexpr std::uintptr_t HeightScaleCurve_Android_FrontEnd = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"WidthScaleCurve", 0x30, "StructProperty"},
            {"HeightScaleCurve", 0x78, "StructProperty"},
            {"WidthScaleCurve_iOS_InGame", 0xC0, "StructProperty"},
            {"HeightScaleCurve_iOS_InGame", 0x108, "StructProperty"},
            {"WidthScaleCurve_iOS_FrontEnd", 0x150, "StructProperty"},
            {"HeightScaleCurve_iOS_FrontEnd", 0x198, "StructProperty"},
            {"WidthScaleCurve_Android_InGame", 0x1E0, "StructProperty"},
            {"HeightScaleCurve_Android_InGame", 0x228, "StructProperty"},
            {"WidthScaleCurve_Android_FrontEnd", 0x270, "StructProperty"},
            {"HeightScaleCurve_Android_FrontEnd", 0x2B8, "StructProperty"},
        }};
    };

}
