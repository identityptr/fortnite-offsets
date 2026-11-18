#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseUISceneGraph
{
    struct UMGImageWidgetImplementation
    {
        static constexpr std::string_view Name = "UMGImageWidgetImplementation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UMGWidgetComponentImplementation";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetName", 0x30, "StrProperty"},
        }};
    };

    struct UMGTextWidgetImplementation
    {
        static constexpr std::string_view Name = "UMGTextWidgetImplementation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UMGWidgetComponentImplementation";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetName", 0x30, "StrProperty"},
        }};
    };

    struct UMGWidgetComponentImplementation
    {
        static constexpr std::string_view Name = "UMGWidgetComponentImplementation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetComponentImplementation";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetName", 0x30, "StrProperty"},
        }};
    };

    struct VerseUISceneGraphPlayerComponent
    {
        static constexpr std::string_view Name = "VerseUISceneGraphPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewportRoot = 0xC0;
            static constexpr std::uintptr_t PlatformViewportRoot = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ViewportRoot", 0xC0, "StructProperty"},
            {"PlatformViewportRoot", 0xD8, "StructProperty"},
        }};
    };

    struct VerseUISceneGraphWorldPreview
    {
        static constexpr std::string_view Name = "VerseUISceneGraphWorldPreview";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetActorProxyActor
    {
        static constexpr std::string_view Name = "WidgetActorProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetComponent = 0x280;
            static constexpr std::uintptr_t RawSize = 0x288;
            static constexpr std::uintptr_t RawScale = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WidgetComponent", 0x280, "ObjectProperty"},
            {"RawSize", 0x288, "StructProperty"},
            {"RawScale", 0x298, "StructProperty"},
        }};
    };

    struct WidgetComponentImplementation
    {
        static constexpr std::string_view Name = "WidgetComponentImplementation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetName", 0x30, "StrProperty"},
        }};
    };

}
