#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteEarlyPreloadWidgets
{
    struct FortniteBootUpBackground
    {
        static constexpr std::string_view Name = "FortniteBootUpBackground";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x30;
            static constexpr std::uintptr_t bIsEnabledDelegate = 0x38;
            static constexpr std::uintptr_t ToolTipTextDelegate = 0x44;
            static constexpr std::uintptr_t ToolTipText = 0x50;
            static constexpr std::uintptr_t ToolTipWidget = 0x60;
            static constexpr std::uintptr_t ToolTipWidgetDelegate = 0x68;
            static constexpr std::uintptr_t VisibilityDelegate = 0x74;
            static constexpr std::uintptr_t RenderTransform = 0x80;
            static constexpr std::uintptr_t RenderTransformPivot = 0xB8;
            static constexpr std::uintptr_t FlowDirectionPreference = 0xC8;
            static constexpr std::uintptr_t bCreatedByConstructionScript = 0xC9;
            static constexpr std::uintptr_t bIsEnabled = 0xC9;
            static constexpr std::uintptr_t bIsVariable = 0xC9;
            static constexpr std::uintptr_t bIsVolatile = 0xC9;
            static constexpr std::uintptr_t bOverride_Cursor = 0xC9;
            static constexpr std::uintptr_t bWrappedByComponent = 0xCA;
            static constexpr std::uintptr_t Cursor = 0xCB;
            static constexpr std::uintptr_t Clipping = 0xCC;
            static constexpr std::uintptr_t Visibility = 0xCD;
            static constexpr std::uintptr_t PixelSnapping = 0xCE;
            static constexpr std::uintptr_t RenderOpacity = 0xD0;
            static constexpr std::uintptr_t AccessibleWidgetData = 0xD8;
            static constexpr std::uintptr_t Navigation = 0xE0;
            static constexpr std::uintptr_t NativeBindings = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Slot", 0x30, "ObjectProperty"},
            {"bIsEnabledDelegate", 0x38, "DelegateProperty"},
            {"ToolTipTextDelegate", 0x44, "DelegateProperty"},
            {"ToolTipText", 0x50, "TextProperty"},
            {"ToolTipWidget", 0x60, "ObjectProperty"},
            {"ToolTipWidgetDelegate", 0x68, "DelegateProperty"},
            {"VisibilityDelegate", 0x74, "DelegateProperty"},
            {"RenderTransform", 0x80, "StructProperty"},
            {"RenderTransformPivot", 0xB8, "StructProperty"},
            {"FlowDirectionPreference", 0xC8, "EnumProperty"},
            {"bCreatedByConstructionScript", 0xC9, "BoolProperty"},
            {"bIsEnabled", 0xC9, "BoolProperty"},
            {"bIsVariable", 0xC9, "BoolProperty"},
            {"bIsVolatile", 0xC9, "BoolProperty"},
            {"bOverride_Cursor", 0xC9, "BoolProperty"},
            {"bWrappedByComponent", 0xCA, "BoolProperty"},
            {"Cursor", 0xCB, "ByteProperty"},
            {"Clipping", 0xCC, "EnumProperty"},
            {"Visibility", 0xCD, "EnumProperty"},
            {"PixelSnapping", 0xCE, "EnumProperty"},
            {"RenderOpacity", 0xD0, "FloatProperty"},
            {"AccessibleWidgetData", 0xD8, "ObjectProperty"},
            {"Navigation", 0xE0, "ObjectProperty"},
            {"NativeBindings", 0x138, "ArrayProperty"},
        }};
    };

}
