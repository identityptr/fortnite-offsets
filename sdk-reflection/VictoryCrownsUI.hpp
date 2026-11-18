#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VictoryCrownsUI
{
    struct FortUIManagerComponent_VictoryCrowns
    {
        static constexpr std::string_view Name = "FortUIManagerComponent_VictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VictoryCrownsIndicatorClass = 0xC8;
            static constexpr std::uintptr_t IndicatorPool = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VictoryCrownsIndicatorClass", 0xC8, "ClassProperty"},
            {"IndicatorPool", 0xD0, "StructProperty"},
        }};
    };

    struct PlacementOverlayCondition_VictoryCrowns
    {
        static constexpr std::string_view Name = "PlacementOverlayCondition_VictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlacementOverlayCondition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VictoryCrownsBearerInfoBase
    {
        static constexpr std::string_view Name = "VictoryCrownsBearerInfoBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakPSA = 0x330;
            static constexpr std::uintptr_t Text_PlayerName = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeakPSA", 0x330, "WeakObjectProperty"},
            {"Text_PlayerName", 0x338, "ObjectProperty"},
        }};
    };

    struct VictoryCrownsIndicator
    {
        static constexpr std::string_view Name = "VictoryCrownsIndicator";
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

    struct VictoryCrownsPlacementOverlay
    {
        static constexpr std::string_view Name = "VictoryCrownsPlacementOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PostGamePlacementOverlay";
        struct Offsets
        {
            static constexpr std::uintptr_t MutatorClassToWaitFor = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MutatorClassToWaitFor", 0x3C8, "ClassProperty"},
        }};
    };

    struct VictoryCrownsPlayerInfoWidget
    {
        static constexpr std::string_view Name = "VictoryCrownsPlayerInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct VictoryCrownsPreGameWidget
    {
        static constexpr std::string_view Name = "VictoryCrownsPreGameWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBox_BearerList = 0x4A0;
            static constexpr std::uintptr_t TipActionWidget = 0x4A8;
            static constexpr std::uintptr_t CloseObjectInputAction = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntryBox_BearerList", 0x4A0, "ObjectProperty"},
            {"TipActionWidget", 0x4A8, "ObjectProperty"},
            {"CloseObjectInputAction", 0x4B0, "StructProperty"},
        }};
    };

}
