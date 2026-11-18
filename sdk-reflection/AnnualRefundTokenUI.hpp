#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnnualRefundTokenUI
{
    struct FortAnnualRefundTicket
    {
        static constexpr std::string_view Name = "FortAnnualRefundTicket";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_AvailableDate = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text_AvailableDate", 0x308, "ObjectProperty"},
        }};
    };

    struct FortAnnualRefundTokenData
    {
        static constexpr std::string_view Name = "FortAnnualRefundTokenData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t PurchaseHistoryScreenClass = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PurchaseHistoryScreenClass", 0x448, "SoftClassProperty"},
        }};
    };

    struct FortPurchaseHistoryBundleEntry
    {
        static constexpr std::string_view Name = "FortPurchaseHistoryBundleEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPurchaseHistoryEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsExpanded = 0x16B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsExpanded", 0x16B0, "BoolProperty"},
        }};
    };

    struct FortPurchaseHistoryEntry
    {
        static constexpr std::string_view Name = "FortPurchaseHistoryEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPurchaseHistoryEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemCardClass = 0x1678;
            static constexpr std::uintptr_t CardWidthOverride = 0x1680;
            static constexpr std::uintptr_t Text_Name = 0x1688;
            static constexpr std::uintptr_t LootEntryItemTypesToExclude = 0x1690;
            static constexpr std::uintptr_t LootEntryItemTypesToCombine = 0x16A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemCardClass", 0x1678, "ClassProperty"},
            {"CardWidthOverride", 0x1680, "FloatProperty"},
            {"Text_Name", 0x1688, "ObjectProperty"},
            {"LootEntryItemTypesToExclude", 0x1690, "ArrayProperty"},
            {"LootEntryItemTypesToCombine", 0x16A0, "ArrayProperty"},
        }};
    };

    struct FortPurchaseHistoryEntryBase
    {
        static constexpr std::string_view Name = "FortPurchaseHistoryEntryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHoldableButton";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemCardClass = 0x1678;
            static constexpr std::uintptr_t CardWidthOverride = 0x1680;
            static constexpr std::uintptr_t Text_Name = 0x1688;
            static constexpr std::uintptr_t LootEntryItemTypesToExclude = 0x1690;
            static constexpr std::uintptr_t LootEntryItemTypesToCombine = 0x16A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemCardClass", 0x1678, "ClassProperty"},
            {"CardWidthOverride", 0x1680, "FloatProperty"},
            {"Text_Name", 0x1688, "ObjectProperty"},
            {"LootEntryItemTypesToExclude", 0x1690, "ArrayProperty"},
            {"LootEntryItemTypesToCombine", 0x16A0, "ArrayProperty"},
        }};
    };

    struct FortPurchaseHistoryListView
    {
        static constexpr std::string_view Name = "FortPurchaseHistoryListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnEntryGenerated = 0x168;
            static constexpr std::uintptr_t BP_OnEntriesGenerated = 0x178;
            static constexpr std::uintptr_t EntryWidgetClass = 0x198;
            static constexpr std::uintptr_t bPaintSelectedEntriesOnTop = 0x1A0;
            static constexpr std::uintptr_t bPaintHoveredEntriesOnTop = 0x1A1;
            static constexpr std::uintptr_t bEnableScrolling = 0x1A2;
            static constexpr std::uintptr_t WheelScrollMultiplier = 0x1A4;
            static constexpr std::uintptr_t bEnableScrollAnimation = 0x1A8;
            static constexpr std::uintptr_t ScrollingAnimationInterpolationSpeed = 0x1AC;
            static constexpr std::uintptr_t bInEnableTouchAnimatedScrolling = 0x1B0;
            static constexpr std::uintptr_t AllowOverscroll = 0x1B1;
            static constexpr std::uintptr_t bEnableRightClickScrolling = 0x1B2;
            static constexpr std::uintptr_t bEnableTouchScrolling = 0x1B3;
            static constexpr std::uintptr_t bIsPointerScrollingEnabled = 0x1B4;
            static constexpr std::uintptr_t bIsGamepadScrollingEnabled = 0x1B5;
            static constexpr std::uintptr_t bEnableFixedLineOffset = 0x1B6;
            static constexpr std::uintptr_t FixedLineScrollOffset = 0x1B8;
            static constexpr std::uintptr_t bAllowDragging = 0x1BC;
            static constexpr std::uintptr_t bAllowDragDrop = 0x1BD;
            static constexpr std::uintptr_t DragDropVisualPivot = 0x1BE;
            static constexpr std::uintptr_t DragDropVisualOffset = 0x1C0;
            static constexpr std::uintptr_t DragDropVisualEntryClass = 0x1D0;
            static constexpr std::uintptr_t DragDropOperationClass = 0x1D8;
            static constexpr std::uintptr_t DragVisualWidget = 0x1E0;
            static constexpr std::uintptr_t bIsDragging = 0x1E8;
            static constexpr std::uintptr_t bSelectItemOnNavigation = 0x1E9;
            static constexpr std::uintptr_t bAllowKeepPreselectedItems = 0x1EA;
            static constexpr std::uintptr_t BP_OnEntryReleased = 0x1F0;
            static constexpr std::uintptr_t EntryWidgetPool = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"BP_OnEntryGenerated", 0x168, "MulticastInlineDelegateProperty"},
            {"BP_OnEntriesGenerated", 0x178, "MulticastInlineDelegateProperty"},
            {"EntryWidgetClass", 0x198, "ClassProperty"},
            {"bPaintSelectedEntriesOnTop", 0x1A0, "BoolProperty"},
            {"bPaintHoveredEntriesOnTop", 0x1A1, "BoolProperty"},
            {"bEnableScrolling", 0x1A2, "BoolProperty"},
            {"WheelScrollMultiplier", 0x1A4, "FloatProperty"},
            {"bEnableScrollAnimation", 0x1A8, "BoolProperty"},
            {"ScrollingAnimationInterpolationSpeed", 0x1AC, "FloatProperty"},
            {"bInEnableTouchAnimatedScrolling", 0x1B0, "BoolProperty"},
            {"AllowOverscroll", 0x1B1, "BoolProperty"},
            {"bEnableRightClickScrolling", 0x1B2, "BoolProperty"},
            {"bEnableTouchScrolling", 0x1B3, "BoolProperty"},
            {"bIsPointerScrollingEnabled", 0x1B4, "BoolProperty"},
            {"bIsGamepadScrollingEnabled", 0x1B5, "BoolProperty"},
            {"bEnableFixedLineOffset", 0x1B6, "BoolProperty"},
            {"FixedLineScrollOffset", 0x1B8, "FloatProperty"},
            {"bAllowDragging", 0x1BC, "BoolProperty"},
            {"bAllowDragDrop", 0x1BD, "BoolProperty"},
            {"DragDropVisualPivot", 0x1BE, "EnumProperty"},
            {"DragDropVisualOffset", 0x1C0, "StructProperty"},
            {"DragDropVisualEntryClass", 0x1D0, "ClassProperty"},
            {"DragDropOperationClass", 0x1D8, "ClassProperty"},
            {"DragVisualWidget", 0x1E0, "ObjectProperty"},
            {"bIsDragging", 0x1E8, "BoolProperty"},
            {"bSelectItemOnNavigation", 0x1E9, "BoolProperty"},
            {"bAllowKeepPreselectedItems", 0x1EA, "BoolProperty"},
            {"BP_OnEntryReleased", 0x1F0, "MulticastInlineDelegateProperty"},
            {"EntryWidgetPool", 0x200, "StructProperty"},
        }};
    };

    struct FortPurchaseHistoryScreen
    {
        static constexpr std::string_view Name = "FortPurchaseHistoryScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t BackAction = 0x580;
            static constexpr std::uintptr_t RefundConfirmationClass = 0x5A8;
            static constexpr std::uintptr_t DirectPurchaseInfoModalClass = 0x5C8;
            static constexpr std::uintptr_t Switcher_MainContent = 0x5E8;
            static constexpr std::uintptr_t TreeView_Purchases = 0x5F0;
            static constexpr std::uintptr_t Button_PostApproval = 0x5F8;
            static constexpr std::uintptr_t ScrollBox_ReturnTypeInfo = 0x600;
            static constexpr std::uintptr_t Text_Desc = 0x608;
            static constexpr std::uintptr_t Text_RefundCount = 0x610;
            static constexpr std::uintptr_t Text_ResultHeader = 0x618;
            static constexpr std::uintptr_t Text_ResultTitle = 0x620;
            static constexpr std::uintptr_t Text_ResultDesc = 0x628;
            static constexpr std::uintptr_t RefundTicket_Left = 0x630;
            static constexpr std::uintptr_t RefundTicket_Center = 0x638;
            static constexpr std::uintptr_t RefundTicket_Right = 0x640;
            static constexpr std::uintptr_t Widget_CancelPurchaseInfo = 0x648;
            static constexpr std::uintptr_t Widget_ReturnTicketInfo = 0x650;
            static constexpr std::uintptr_t Widget_TokenlessRefundInfo = 0x658;
            static constexpr std::uintptr_t Widget_NonRefundableInfo = 0x660;
            static constexpr std::uintptr_t Widget_BundledPurchaseInfo = 0x668;
            static constexpr std::uintptr_t Widget_BundledPurchaseTokenlessRefundInfo = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"BackAction", 0x580, "StructProperty"},
            {"RefundConfirmationClass", 0x5A8, "SoftClassProperty"},
            {"DirectPurchaseInfoModalClass", 0x5C8, "SoftClassProperty"},
            {"Switcher_MainContent", 0x5E8, "ObjectProperty"},
            {"TreeView_Purchases", 0x5F0, "ObjectProperty"},
            {"Button_PostApproval", 0x5F8, "ObjectProperty"},
            {"ScrollBox_ReturnTypeInfo", 0x600, "ObjectProperty"},
            {"Text_Desc", 0x608, "ObjectProperty"},
            {"Text_RefundCount", 0x610, "ObjectProperty"},
            {"Text_ResultHeader", 0x618, "ObjectProperty"},
            {"Text_ResultTitle", 0x620, "ObjectProperty"},
            {"Text_ResultDesc", 0x628, "ObjectProperty"},
            {"RefundTicket_Left", 0x630, "ObjectProperty"},
            {"RefundTicket_Center", 0x638, "ObjectProperty"},
            {"RefundTicket_Right", 0x640, "ObjectProperty"},
            {"Widget_CancelPurchaseInfo", 0x648, "ObjectProperty"},
            {"Widget_ReturnTicketInfo", 0x650, "ObjectProperty"},
            {"Widget_TokenlessRefundInfo", 0x658, "ObjectProperty"},
            {"Widget_NonRefundableInfo", 0x660, "ObjectProperty"},
            {"Widget_BundledPurchaseInfo", 0x668, "ObjectProperty"},
            {"Widget_BundledPurchaseTokenlessRefundInfo", 0x670, "ObjectProperty"},
        }};
    };

    struct FortPurchaseHistoryTreeView
    {
        static constexpr std::string_view Name = "FortPurchaseHistoryTreeView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPurchaseHistoryListView";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderEntryWidgetClass = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HeaderEntryWidgetClass", 0x4A0, "ClassProperty"},
        }};
    };

    struct FortRefundConfirmation
    {
        static constexpr std::string_view Name = "FortRefundConfirmation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_RefundsRemaining = 0x590;
            static constexpr std::uintptr_t Text_RefundCount = 0x598;
            static constexpr std::uintptr_t Text_AreYouSure = 0x5A0;
            static constexpr std::uintptr_t Button_Yes = 0x5A8;
            static constexpr std::uintptr_t Button_No = 0x5B0;
            static constexpr std::uintptr_t Button_CloseTouch = 0x5B8;
            static constexpr std::uintptr_t RefundTicket_Left = 0x5C0;
            static constexpr std::uintptr_t RefundTicket_Center = 0x5C8;
            static constexpr std::uintptr_t RefundTicket_Right = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Text_RefundsRemaining", 0x590, "ObjectProperty"},
            {"Text_RefundCount", 0x598, "ObjectProperty"},
            {"Text_AreYouSure", 0x5A0, "ObjectProperty"},
            {"Button_Yes", 0x5A8, "ObjectProperty"},
            {"Button_No", 0x5B0, "ObjectProperty"},
            {"Button_CloseTouch", 0x5B8, "ObjectProperty"},
            {"RefundTicket_Left", 0x5C0, "ObjectProperty"},
            {"RefundTicket_Center", 0x5C8, "ObjectProperty"},
            {"RefundTicket_Right", 0x5D0, "ObjectProperty"},
        }};
    };

}
