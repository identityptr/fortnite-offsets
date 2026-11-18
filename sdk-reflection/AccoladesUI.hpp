#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AccoladesUI
{
    struct AthenaAccoladeListEntryWidget
    {
        static constexpr std::string_view Name = "AthenaAccoladeListEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};
    };

    struct AthenaAccoladeListWidget
    {
        static constexpr std::string_view Name = "AthenaAccoladeListWidget";
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

    struct AthenaAccoladeWrapper
    {
        static constexpr std::string_view Name = "AthenaAccoladeWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AccoladeRowName = 0x28;
            static constexpr std::uintptr_t AccoladeData = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AccoladeRowName", 0x28, "NameProperty"},
            {"AccoladeData", 0x2C, "StructProperty"},
        }};
    };

}
