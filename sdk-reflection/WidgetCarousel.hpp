#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WidgetCarousel
{
    struct WidgetCarouselNavigationBarStyle
    {
        static constexpr std::string_view Name = "WidgetCarouselNavigationBarStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t HighlightBrush = 0x10;
            static constexpr std::uintptr_t LeftButtonStyle = 0xC0;
            static constexpr std::uintptr_t CenterButtonStyle = 0x450;
            static constexpr std::uintptr_t RightButtonStyle = 0x7E0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HighlightBrush", 0x10, "StructProperty"},
            {"LeftButtonStyle", 0xC0, "StructProperty"},
            {"CenterButtonStyle", 0x450, "StructProperty"},
            {"RightButtonStyle", 0x7E0, "StructProperty"},
        }};
    };

    struct WidgetCarouselNavigationButtonStyle
    {
        static constexpr std::string_view Name = "WidgetCarouselNavigationButtonStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerButtonStyle = 0x10;
            static constexpr std::uintptr_t NavigationButtonLeftImage = 0x3A0;
            static constexpr std::uintptr_t NavigationButtonRightImage = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InnerButtonStyle", 0x10, "StructProperty"},
            {"NavigationButtonLeftImage", 0x3A0, "StructProperty"},
            {"NavigationButtonRightImage", 0x450, "StructProperty"},
        }};
    };

}
