#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimInverseUI
{
    struct PIBacchusHUDDirectorComponent
    {
        static constexpr std::string_view Name = "PIBacchusHUDDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBacchusHUDDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPawnRevived = 0xC0;
            static constexpr std::uintptr_t OnPlayerPawnRespawned = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPlayerPawnRevived", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPawnRespawned", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PilgrimInverseAnimationSwipePanel
    {
        static constexpr std::string_view Name = "PilgrimInverseAnimationSwipePanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTargetChanged = 0x180;
            static constexpr std::uintptr_t TravelSpan = 0x190;
            static constexpr std::uintptr_t bExpandedTarget = 0x194;
            static constexpr std::uintptr_t DragSlop = 0x198;
            static constexpr std::uintptr_t FlickVelocity = 0x19C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnTargetChanged", 0x180, "MulticastInlineDelegateProperty"},
            {"TravelSpan", 0x190, "FloatProperty"},
            {"bExpandedTarget", 0x194, "BoolProperty"},
            {"DragSlop", 0x198, "FloatProperty"},
            {"FlickVelocity", 0x19C, "FloatProperty"},
        }};
    };

    struct PilgrimInverseDrawerPanel
    {
        static constexpr std::string_view Name = "PilgrimInverseDrawerPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDismissed = 0x180;
            static constexpr std::uintptr_t OnProgressChanged = 0x190;
            static constexpr std::uintptr_t DragSlop = 0x1A0;
            static constexpr std::uintptr_t DismissFraction = 0x1A4;
            static constexpr std::uintptr_t DismissVelocity = 0x1A8;
            static constexpr std::uintptr_t SettleDuration = 0x1AC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnDismissed", 0x180, "MulticastInlineDelegateProperty"},
            {"OnProgressChanged", 0x190, "MulticastInlineDelegateProperty"},
            {"DragSlop", 0x1A0, "FloatProperty"},
            {"DismissFraction", 0x1A4, "FloatProperty"},
            {"DismissVelocity", 0x1A8, "FloatProperty"},
            {"SettleDuration", 0x1AC, "FloatProperty"},
        }};
    };

    struct PilgrimInverseHomeSongSelectionLibrary
    {
        static constexpr std::string_view Name = "PilgrimInverseHomeSongSelectionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PilgrimInversePostBufferBlurController
    {
        static constexpr std::string_view Name = "PilgrimInversePostBufferBlurController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Updater = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Updater", 0x30, "ObjectProperty"},
        }};
    };

    struct PilgrimInverseTouchListView
    {
        static constexpr std::string_view Name = "PilgrimInverseTouchListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonListView";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x460;
            static constexpr std::uintptr_t ScrollBarStyle = 0x520;
            static constexpr std::uintptr_t bEnableShadowBrush = 0xB70;
            static constexpr std::uintptr_t ShadowBrushStyle = 0xB80;
            static constexpr std::uintptr_t orientation = 0xE70;
            static constexpr std::uintptr_t ScrollBarPosition = 0xE71;
            static constexpr std::uintptr_t SelectionMode = 0xE72;
            static constexpr std::uintptr_t ConsumeMouseWheel = 0xE73;
            static constexpr std::uintptr_t bClearSelectionOnClick = 0xE74;
            static constexpr std::uintptr_t bIsFocusable = 0xE75;
            static constexpr std::uintptr_t bClearScrollVelocityOnSelection = 0xE76;
            static constexpr std::uintptr_t bReturnFocusToSelection = 0xE77;
            static constexpr std::uintptr_t bEnableProximateEntryNavigation = 0xE78;
            static constexpr std::uintptr_t ScrollIntoViewAlignment = 0xE79;
            static constexpr std::uintptr_t ListItems = 0xE80;
            static constexpr std::uintptr_t HorizontalEntrySpacing = 0xEA0;
            static constexpr std::uintptr_t VerticalEntrySpacing = 0xEA4;
            static constexpr std::uintptr_t ScrollBarPadding = 0xEA8;
            static constexpr std::uintptr_t BP_OnEntryInitialized = 0xEB8;
            static constexpr std::uintptr_t BP_OnItemClicked = 0xEC8;
            static constexpr std::uintptr_t BP_OnItemDoubleClicked = 0xED8;
            static constexpr std::uintptr_t BP_OnItemDragDetected = 0xEE8;
            static constexpr std::uintptr_t BP_OnItemDragEnter = 0xEF8;
            static constexpr std::uintptr_t BP_OnItemDragLeave = 0xF08;
            static constexpr std::uintptr_t BP_OnItemAcceptDrop = 0xF18;
            static constexpr std::uintptr_t BP_OnItemDragCancelled = 0xF28;
            static constexpr std::uintptr_t BP_OnListViewDraggingStateChanged = 0xF38;
            static constexpr std::uintptr_t BP_OnItemIsHoveredChanged = 0xF48;
            static constexpr std::uintptr_t BP_OnItemSelectionChanged = 0xF58;
            static constexpr std::uintptr_t BP_OnItemScrolledIntoView = 0xF68;
            static constexpr std::uintptr_t BP_OnListViewScrolled = 0xF78;
            static constexpr std::uintptr_t BP_OnListViewFinishedScrolling = 0xF88;
            static constexpr std::uintptr_t BP_OnListViewTouchStart = 0xF98;
            static constexpr std::uintptr_t BP_OnListViewTouchMove = 0xFA8;
            static constexpr std::uintptr_t BP_OnListViewTouchEnd = 0xFB8;
            static constexpr std::uintptr_t BP_OnIsItemSelectableOrNavigable = 0xFC8;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"WidgetStyle", 0x460, "StructProperty"},
            {"ScrollBarStyle", 0x520, "StructProperty"},
            {"bEnableShadowBrush", 0xB70, "BoolProperty"},
            {"ShadowBrushStyle", 0xB80, "StructProperty"},
            {"orientation", 0xE70, "ByteProperty"},
            {"ScrollBarPosition", 0xE71, "ByteProperty"},
            {"SelectionMode", 0xE72, "ByteProperty"},
            {"ConsumeMouseWheel", 0xE73, "EnumProperty"},
            {"bClearSelectionOnClick", 0xE74, "BoolProperty"},
            {"bIsFocusable", 0xE75, "BoolProperty"},
            {"bClearScrollVelocityOnSelection", 0xE76, "BoolProperty"},
            {"bReturnFocusToSelection", 0xE77, "BoolProperty"},
            {"bEnableProximateEntryNavigation", 0xE78, "BoolProperty"},
            {"ScrollIntoViewAlignment", 0xE79, "EnumProperty"},
            {"ListItems", 0xE80, "ArrayProperty"},
            {"HorizontalEntrySpacing", 0xEA0, "FloatProperty"},
            {"VerticalEntrySpacing", 0xEA4, "FloatProperty"},
            {"ScrollBarPadding", 0xEA8, "StructProperty"},
            {"BP_OnEntryInitialized", 0xEB8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemClicked", 0xEC8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDoubleClicked", 0xED8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragDetected", 0xEE8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragEnter", 0xEF8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragLeave", 0xF08, "MulticastInlineDelegateProperty"},
            {"BP_OnItemAcceptDrop", 0xF18, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragCancelled", 0xF28, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewDraggingStateChanged", 0xF38, "MulticastInlineDelegateProperty"},
            {"BP_OnItemIsHoveredChanged", 0xF48, "MulticastInlineDelegateProperty"},
            {"BP_OnItemSelectionChanged", 0xF58, "MulticastInlineDelegateProperty"},
            {"BP_OnItemScrolledIntoView", 0xF68, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewScrolled", 0xF78, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewFinishedScrolling", 0xF88, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewTouchStart", 0xF98, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewTouchMove", 0xFA8, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewTouchEnd", 0xFB8, "MulticastInlineDelegateProperty"},
            {"BP_OnIsItemSelectableOrNavigable", 0xFC8, "DelegateProperty"},
        }};
    };

    struct PilgrimInverseTrackLayoutSettings
    {
        static constexpr std::string_view Name = "PilgrimInverseTrackLayoutSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutClassesByIndex = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LayoutClassesByIndex", 0x30, "ArrayProperty"},
        }};
    };

    struct PilgrimInverseTrackLayoutWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimInverseTrackLayoutWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutRoot = 0x308;
            static constexpr std::uintptr_t FourLaneRoot = 0x310;
            static constexpr std::uintptr_t FiveLaneRoot = 0x318;
            static constexpr std::uintptr_t FourLanePresentationAnchor = 0x320;
            static constexpr std::uintptr_t FiveLanePresentationAnchor = 0x328;
            static constexpr std::uintptr_t InputZoneController_FourLane = 0x330;
            static constexpr std::uintptr_t InputZoneController_FiveLane = 0x338;
            static constexpr std::uintptr_t HorizontalScaleCurve = 0x340;
            static constexpr std::uintptr_t VerticalScaleCurve = 0x348;
            static constexpr std::uintptr_t VerticalTranslationCurve = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"LayoutRoot", 0x308, "ObjectProperty"},
            {"FourLaneRoot", 0x310, "ObjectProperty"},
            {"FiveLaneRoot", 0x318, "ObjectProperty"},
            {"FourLanePresentationAnchor", 0x320, "ObjectProperty"},
            {"FiveLanePresentationAnchor", 0x328, "ObjectProperty"},
            {"InputZoneController_FourLane", 0x330, "ObjectProperty"},
            {"InputZoneController_FiveLane", 0x338, "ObjectProperty"},
            {"HorizontalScaleCurve", 0x340, "ObjectProperty"},
            {"VerticalScaleCurve", 0x348, "ObjectProperty"},
            {"VerticalTranslationCurve", 0x350, "ObjectProperty"},
        }};
    };

    struct PlayspaceComponent_PilgrimInverseUIManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_PilgrimInverseUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutDefinitions_Portrait = 0xC0;
            static constexpr std::uintptr_t LayoutDefinitions_Portrait_Presets = 0xC8;
            static constexpr std::uintptr_t GlobalControlsScene = 0xD8;
            static constexpr std::uintptr_t TiltOverdriveConfig = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LayoutDefinitions_Portrait", 0xC0, "ObjectProperty"},
            {"LayoutDefinitions_Portrait_Presets", 0xC8, "ArrayProperty"},
            {"GlobalControlsScene", 0xD8, "ObjectProperty"},
            {"TiltOverdriveConfig", 0x150, "StructProperty"},
        }};
    };

}
