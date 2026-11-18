#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ViewportWidgetOverlay
{
    struct ViewportWidgetOverlay
    {
        static constexpr std::string_view Name = "ViewportWidgetOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetClass = 0x28;
            static constexpr std::uintptr_t EditorDisplayType = 0x30;
            static constexpr std::uintptr_t GameDisplayType = 0x31;
            static constexpr std::uintptr_t PIEDisplayType = 0x32;
            static constexpr std::uintptr_t ViewportDisplayType = 0x38;
            static constexpr std::uintptr_t PostProcessDisplayTypeWithBlendMaterial = 0x48;
            static constexpr std::uintptr_t PostProcessWithSceneViewExtensions = 0xF0;
            static constexpr std::uintptr_t Widget = 0x1A0;
            static constexpr std::uintptr_t World = 0x1A8;
            static constexpr std::uintptr_t CurrentDisplayType = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"WidgetClass", 0x28, "ClassProperty"},
            {"EditorDisplayType", 0x30, "EnumProperty"},
            {"GameDisplayType", 0x31, "EnumProperty"},
            {"PIEDisplayType", 0x32, "EnumProperty"},
            {"ViewportDisplayType", 0x38, "StructProperty"},
            {"PostProcessDisplayTypeWithBlendMaterial", 0x48, "StructProperty"},
            {"PostProcessWithSceneViewExtensions", 0xF0, "StructProperty"},
            {"Widget", 0x1A0, "ObjectProperty"},
            {"World", 0x1A8, "WeakObjectProperty"},
            {"CurrentDisplayType", 0x1B0, "EnumProperty"},
        }};
    };

    struct ViewportWidgetOverlay_PostProcess
    {
        static constexpr std::string_view Name = "ViewportWidgetOverlay_PostProcess";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ViewportWidgetOverlay_PostProcessBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PostProcessComponent = 0x90;
            static constexpr std::uintptr_t PostProcessMaterialInstance = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PostProcessComponent", 0x90, "ObjectProperty"},
            {"PostProcessMaterialInstance", 0x98, "ObjectProperty"},
        }};
    };

    struct ViewportWidgetOverlay_PostProcessBase
    {
        static constexpr std::string_view Name = "ViewportWidgetOverlay_PostProcessBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PostProcessMaterial = 0x8;
            static constexpr std::uintptr_t PostProcessTintColorAndOpacity = 0x10;
            static constexpr std::uintptr_t PostProcessOpacityFromTexture = 0x20;
            static constexpr std::uintptr_t bUseWidgetDrawSize = 0x24;
            static constexpr std::uintptr_t WidgetDrawSize = 0x28;
            static constexpr std::uintptr_t bWindowFocusable = 0x30;
            static constexpr std::uintptr_t WindowVisibility = 0x31;
            static constexpr std::uintptr_t bReceiveHardwareInput = 0x32;
            static constexpr std::uintptr_t RenderTargetBackgroundColor = 0x34;
            static constexpr std::uintptr_t RenderTargetBlendMode = 0x44;
            static constexpr std::uintptr_t WidgetRenderTarget = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PostProcessMaterial", 0x8, "ObjectProperty"},
            {"PostProcessTintColorAndOpacity", 0x10, "StructProperty"},
            {"PostProcessOpacityFromTexture", 0x20, "FloatProperty"},
            {"bUseWidgetDrawSize", 0x24, "BoolProperty"},
            {"WidgetDrawSize", 0x28, "StructProperty"},
            {"bWindowFocusable", 0x30, "BoolProperty"},
            {"WindowVisibility", 0x31, "EnumProperty"},
            {"bReceiveHardwareInput", 0x32, "BoolProperty"},
            {"RenderTargetBackgroundColor", 0x34, "StructProperty"},
            {"RenderTargetBlendMode", 0x44, "EnumProperty"},
            {"WidgetRenderTarget", 0x48, "ObjectProperty"},
        }};
    };

    struct ViewportWidgetOverlay_PostProcessWithSVE
    {
        static constexpr std::string_view Name = "ViewportWidgetOverlay_PostProcessWithSVE";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ViewportWidgetOverlay_PostProcessBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PostProcessMaterial = 0x8;
            static constexpr std::uintptr_t PostProcessTintColorAndOpacity = 0x10;
            static constexpr std::uintptr_t PostProcessOpacityFromTexture = 0x20;
            static constexpr std::uintptr_t bUseWidgetDrawSize = 0x24;
            static constexpr std::uintptr_t WidgetDrawSize = 0x28;
            static constexpr std::uintptr_t bWindowFocusable = 0x30;
            static constexpr std::uintptr_t WindowVisibility = 0x31;
            static constexpr std::uintptr_t bReceiveHardwareInput = 0x32;
            static constexpr std::uintptr_t RenderTargetBackgroundColor = 0x34;
            static constexpr std::uintptr_t RenderTargetBlendMode = 0x44;
            static constexpr std::uintptr_t WidgetRenderTarget = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PostProcessMaterial", 0x8, "ObjectProperty"},
            {"PostProcessTintColorAndOpacity", 0x10, "StructProperty"},
            {"PostProcessOpacityFromTexture", 0x20, "FloatProperty"},
            {"bUseWidgetDrawSize", 0x24, "BoolProperty"},
            {"WidgetDrawSize", 0x28, "StructProperty"},
            {"bWindowFocusable", 0x30, "BoolProperty"},
            {"WindowVisibility", 0x31, "EnumProperty"},
            {"bReceiveHardwareInput", 0x32, "BoolProperty"},
            {"RenderTargetBackgroundColor", 0x34, "StructProperty"},
            {"RenderTargetBlendMode", 0x44, "EnumProperty"},
            {"WidgetRenderTarget", 0x48, "ObjectProperty"},
        }};
    };

    struct ViewportWidgetOverlay_Viewport
    {
        static constexpr std::string_view Name = "ViewportWidgetOverlay_Viewport";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
