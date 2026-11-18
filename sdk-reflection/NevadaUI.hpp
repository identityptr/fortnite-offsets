#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NevadaUI
{
    struct FortNevadaVehicleReticle
    {
        static constexpr std::string_view Name = "FortNevadaVehicleReticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleDashboardWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NevadaTargetIndicatorClass = 0x480;
            static constexpr std::uintptr_t TargetIndicator = 0x488;
            static constexpr std::uintptr_t OwningNevadaVehicle = 0x490;
            static constexpr std::uintptr_t IndicatorPool = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NevadaTargetIndicatorClass", 0x480, "ClassProperty"},
            {"TargetIndicator", 0x488, "ObjectProperty"},
            {"OwningNevadaVehicle", 0x490, "ObjectProperty"},
            {"IndicatorPool", 0x4A0, "StructProperty"},
        }};
    };

    struct NevadaTargetIndicator
    {
        static constexpr std::string_view Name = "NevadaTargetIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorIndicatorWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IndicatedActor = 0x378;
            static constexpr std::uintptr_t IndicatedActorComponent = 0x380;
            static constexpr std::uintptr_t RelativeLocation = 0x388;
            static constexpr std::uintptr_t MaxDistance = 0x3A0;
            static constexpr std::uintptr_t bClampOnScreen = 0x3A4;
            static constexpr std::uintptr_t bShowClampToScreenArrow = 0x3A5;
            static constexpr std::uintptr_t ElevationArrowData = 0x3A8;
            static constexpr std::uintptr_t bUseScreenSpacePosition = 0x3C4;
            static constexpr std::uintptr_t ScreenSpaceRelativeOffset = 0x3C8;
            static constexpr std::uintptr_t ScreenPriority = 0x3D8;
            static constexpr std::uintptr_t TurnToMarkerTouchTarget = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"IndicatedActor", 0x378, "WeakObjectProperty"},
            {"IndicatedActorComponent", 0x380, "WeakObjectProperty"},
            {"RelativeLocation", 0x388, "StructProperty"},
            {"MaxDistance", 0x3A0, "FloatProperty"},
            {"bClampOnScreen", 0x3A4, "BoolProperty"},
            {"bShowClampToScreenArrow", 0x3A5, "BoolProperty"},
            {"ElevationArrowData", 0x3A8, "StructProperty"},
            {"bUseScreenSpacePosition", 0x3C4, "BoolProperty"},
            {"ScreenSpaceRelativeOffset", 0x3C8, "StructProperty"},
            {"ScreenPriority", 0x3D8, "IntProperty"},
            {"TurnToMarkerTouchTarget", 0x4B0, "ObjectProperty"},
        }};
    };

}
