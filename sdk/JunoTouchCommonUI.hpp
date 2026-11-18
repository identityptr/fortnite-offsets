#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoTouchCommonUI
{
    struct JunoInteractionTouchButtonsWidget
    {
        static constexpr std::string_view Name = "JunoInteractionTouchButtonsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHUDElement";
        struct Offsets
        {
            static constexpr std::uintptr_t SizePropertyTag = 0x378;
            static constexpr std::uintptr_t Image_Background = 0x390;
            static constexpr std::uintptr_t bUsesConfigBackgroundTheme = 0x398;
            static constexpr std::uintptr_t ButtonBehavior = 0x3A0;
            static constexpr std::uintptr_t DebugButtonBehavior = 0x3A8;
            static constexpr std::uintptr_t ForcedZOrder = 0x3B0;
            static constexpr std::uintptr_t bShouldFillParent = 0x3B4;
            static constexpr std::uintptr_t ContextSensitiveTagContainer = 0x3B8;
            static constexpr std::uintptr_t ScaleBox_HUDWidgetScale = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SizePropertyTag", 0x378, "StructProperty"},
            {"Image_Background", 0x390, "ObjectProperty"},
            {"bUsesConfigBackgroundTheme", 0x398, "BoolProperty"},
            {"ButtonBehavior", 0x3A0, "ObjectProperty"},
            {"DebugButtonBehavior", 0x3A8, "ObjectProperty"},
            {"ForcedZOrder", 0x3B0, "IntProperty"},
            {"bShouldFillParent", 0x3B4, "BoolProperty"},
            {"ContextSensitiveTagContainer", 0x3B8, "StructProperty"},
            {"ScaleBox_HUDWidgetScale", 0x3D8, "ObjectProperty"},
        }};
    };

    struct JunoTouchCommonUIDirector
    {
        static constexpr std::string_view Name = "JunoTouchCommonUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBacchusHUDDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoDynamicUIDirector = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoDynamicUIDirector", 0x438, "ObjectProperty"},
        }};
    };

    struct JunoTouchDynamicUIDirectorComponent
    {
        static constexpr std::string_view Name = "JunoTouchDynamicUIDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HUDContextVisibilityTagToScene = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HUDContextVisibilityTagToScene", 0x120, "MapProperty"},
        }};
    };

}
