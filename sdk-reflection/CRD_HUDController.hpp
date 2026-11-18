#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_HUDController
{
    struct CustomHUDLayoutComponent
    {
        static constexpr std::string_view Name = "CustomHUDLayoutComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicUISceneLayerID = 0xC0;
            static constexpr std::uintptr_t LayoutChangeListenerHandle = 0x110;
            static constexpr std::uintptr_t CachedScene = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DynamicUISceneLayerID", 0xC0, "ByteProperty"},
            {"LayoutChangeListenerHandle", 0x110, "StructProperty"},
            {"CachedScene", 0x130, "ObjectProperty"},
        }};
    };

    struct DeveloperLayoutButtonProxy
    {
        static constexpr std::string_view Name = "DeveloperLayoutButtonProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Action = 0x168;
            static constexpr std::uintptr_t bHideFromLayout = 0x169;
            static constexpr std::uintptr_t bOverrideIcon = 0x16A;
            static constexpr std::uintptr_t IconBrush = 0x170;
            static constexpr std::uintptr_t bApplyCanvasTransform = 0x220;
            static constexpr std::uintptr_t bRespectPlayerTransform = 0x221;
            static constexpr std::uintptr_t BackgroundBrush = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Action", 0x168, "EnumProperty"},
            {"bHideFromLayout", 0x169, "BoolProperty"},
            {"bOverrideIcon", 0x16A, "BoolProperty"},
            {"IconBrush", 0x170, "StructProperty"},
            {"bApplyCanvasTransform", 0x220, "BoolProperty"},
            {"bRespectPlayerTransform", 0x221, "BoolProperty"},
            {"BackgroundBrush", 0x230, "StructProperty"},
        }};
    };

}
