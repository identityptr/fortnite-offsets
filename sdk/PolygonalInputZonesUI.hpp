#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PolygonalInputZonesUI
{
    struct PolygonalInputZoneControllerBase
    {
        static constexpr std::string_view Name = "PolygonalInputZoneControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionMode = 0x330;
            static constexpr std::uintptr_t InputZones = 0x338;
            static constexpr std::uintptr_t SwipeAction = 0x348;
            static constexpr std::uintptr_t SwipeMinDistance = 0x350;
            static constexpr std::uintptr_t SwipeMaxTime = 0x358;
            static constexpr std::uintptr_t SwipeMinTime = 0x360;
            static constexpr std::uintptr_t bEndCurrentInteractionIfDragOutsideWidget = 0x368;
            static constexpr std::uintptr_t bAllowInteractionWhenDragBetweenZones = 0x369;
            static constexpr std::uintptr_t bUseContinuousInputInjectionForAction = 0x36A;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"InteractionMode", 0x330, "EnumProperty"},
            {"InputZones", 0x338, "ArrayProperty"},
            {"SwipeAction", 0x348, "ObjectProperty"},
            {"SwipeMinDistance", 0x350, "FloatProperty"},
            {"SwipeMaxTime", 0x358, "DoubleProperty"},
            {"SwipeMinTime", 0x360, "DoubleProperty"},
            {"bEndCurrentInteractionIfDragOutsideWidget", 0x368, "BoolProperty"},
            {"bAllowInteractionWhenDragBetweenZones", 0x369, "BoolProperty"},
            {"bUseContinuousInputInjectionForAction", 0x36A, "BoolProperty"},
        }};
    };

    struct PolygonalInputZoneInterface
    {
        static constexpr std::string_view Name = "PolygonalInputZoneInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
