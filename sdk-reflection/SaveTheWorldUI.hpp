#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SaveTheWorldUI
{
    struct BottomBar_STW
    {
        static constexpr std::string_view Name = "BottomBar_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundActionBar_STW = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoundActionBar_STW", 0x330, "ObjectProperty"},
        }};
    };

    struct BoundActionBarSTW
    {
        static constexpr std::string_view Name = "BoundActionBarSTW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoundActionBarWithSecondaryBar";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondaryActionBar = 0x230;
            static constexpr std::uintptr_t SecondaryActionBarInputActions = 0x238;
            static constexpr std::uintptr_t SecondaryActionBarEnhancedInputActions = 0x248;
            static constexpr std::uintptr_t SecondaryActionBarButtonClassOverride = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SecondaryActionBar", 0x230, "ObjectProperty"},
            {"SecondaryActionBarInputActions", 0x238, "ArrayProperty"},
            {"SecondaryActionBarEnhancedInputActions", 0x248, "ArrayProperty"},
            {"SecondaryActionBarButtonClassOverride", 0x258, "ClassProperty"},
        }};
    };

    struct BoundActionBarWithSecondaryBar
    {
        static constexpr std::string_view Name = "BoundActionBarWithSecondaryBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonBoundActionBar";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondaryActionBar = 0x230;
            static constexpr std::uintptr_t SecondaryActionBarInputActions = 0x238;
            static constexpr std::uintptr_t SecondaryActionBarEnhancedInputActions = 0x248;
            static constexpr std::uintptr_t SecondaryActionBarButtonClassOverride = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SecondaryActionBar", 0x230, "ObjectProperty"},
            {"SecondaryActionBarInputActions", 0x238, "ArrayProperty"},
            {"SecondaryActionBarEnhancedInputActions", 0x248, "ArrayProperty"},
            {"SecondaryActionBarButtonClassOverride", 0x258, "ClassProperty"},
        }};
    };

    struct CountdownManagerSubsystem
    {
        static constexpr std::string_view Name = "CountdownManagerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTimerSecondPassed = 0x30;
            static constexpr std::uintptr_t TimerUpdateRate = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnTimerSecondPassed", 0x30, "MulticastInlineDelegateProperty"},
            {"TimerUpdateRate", 0x40, "FloatProperty"},
        }};
    };

    struct FortAbilitySystemContext
    {
        static constexpr std::string_view Name = "FortAbilitySystemContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAlterationModOptinScreenBase
    {
        static constexpr std::string_view Name = "FortAlterationModOptinScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemToOptin = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemToOptin", 0x560, "ObjectProperty"},
        }};
    };

    struct FortAlterationModScreenBase
    {
        static constexpr std::string_view Name = "FortAlterationModScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t AlterationsToEdit = 0x580;
            static constexpr std::uintptr_t AlterationSlotOptions = 0x588;
            static constexpr std::uintptr_t ItemInspectionMainItemDetailsHostPanel = 0x590;
            static constexpr std::uintptr_t AlterationsExtraDetailsPanel = 0x598;
            static constexpr std::uintptr_t AlterationModOptinScreenClass = 0x5A0;
            static constexpr std::uintptr_t BackInputAction = 0x5A8;
            static constexpr std::uintptr_t AlterableItem = 0x5B8;
            static constexpr std::uintptr_t CurrentAlterationOptionInternal = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AlterationsToEdit", 0x580, "ObjectProperty"},
            {"AlterationSlotOptions", 0x588, "ObjectProperty"},
            {"ItemInspectionMainItemDetailsHostPanel", 0x590, "ObjectProperty"},
            {"AlterationsExtraDetailsPanel", 0x598, "ObjectProperty"},
            {"AlterationModOptinScreenClass", 0x5A0, "ClassProperty"},
            {"BackInputAction", 0x5A8, "StructProperty"},
            {"AlterableItem", 0x5B8, "WeakObjectProperty"},
            {"CurrentAlterationOptionInternal", 0x5C0, "ObjectProperty"},
        }};
    };

    struct FortAlterationOption
    {
        static constexpr std::string_view Name = "FortAlterationOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t AlterationOption = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AlterationOption", 0x1628, "StructProperty"},
        }};
    };

    struct FortAlterationOptionsBase
    {
        static constexpr std::string_view Name = "FortAlterationOptionsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AlterationOptionClass = 0x340;
            static constexpr std::uintptr_t AlterationOptionButtons = 0x348;
            static constexpr std::uintptr_t Item = 0x370;
            static constexpr std::uintptr_t SlotIndex = 0x378;
            static constexpr std::uintptr_t bUpgradeOptionExists = 0x37C;
            static constexpr std::uintptr_t UpgradeOption = 0x380;
            static constexpr std::uintptr_t RespecOptions = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AlterationOptionClass", 0x340, "ClassProperty"},
            {"AlterationOptionButtons", 0x348, "ObjectProperty"},
            {"Item", 0x370, "ObjectProperty"},
            {"SlotIndex", 0x378, "IntProperty"},
            {"bUpgradeOptionExists", 0x37C, "BoolProperty"},
            {"UpgradeOption", 0x380, "StructProperty"},
            {"RespecOptions", 0x3B0, "ArrayProperty"},
        }};
    };

    struct FortArmoryScreen
    {
        static constexpr std::string_view Name = "FortArmoryScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMainTab = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsMainTab", 0x4A8, "BoolProperty"},
        }};
    };

    struct FortBackActionOwner
    {
        static constexpr std::string_view Name = "FortBackActionOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortBangWrapperContentButton
    {
        static constexpr std::string_view Name = "FortBangWrapperContentButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClickEvent = 0x330;
            static constexpr std::uintptr_t MinWidth = 0x334;
            static constexpr std::uintptr_t MinHeight = 0x338;
            static constexpr std::uintptr_t MaxWidth = 0x33C;
            static constexpr std::uintptr_t MaxHeight = 0x340;
            static constexpr std::uintptr_t Style = 0x348;
            static constexpr std::uintptr_t bHideInputAction = 0x350;
            static constexpr std::uintptr_t PressedSlateSoundOverride = 0x358;
            static constexpr std::uintptr_t ClickedSlateSoundOverride = 0x370;
            static constexpr std::uintptr_t HoveredSlateSoundOverride = 0x388;
            static constexpr std::uintptr_t SelectedPressedSlateSoundOverride = 0x3A0;
            static constexpr std::uintptr_t SelectedClickedSlateSoundOverride = 0x3B8;
            static constexpr std::uintptr_t SelectedHoveredSlateSoundOverride = 0x3D0;
            static constexpr std::uintptr_t LockedPressedSlateSoundOverride = 0x3E8;
            static constexpr std::uintptr_t LockedClickedSlateSoundOverride = 0x400;
            static constexpr std::uintptr_t LockedHoveredSlateSoundOverride = 0x418;
            static constexpr std::uintptr_t bApplyAlphaOnDisable = 0x430;
            static constexpr std::uintptr_t bDisplayInputActionWhenNotInteractable = 0x430;
            static constexpr std::uintptr_t bInteractableWhenSelected = 0x430;
            static constexpr std::uintptr_t bLocked = 0x430;
            static constexpr std::uintptr_t bSelectable = 0x430;
            static constexpr std::uintptr_t bShouldSelectUponReceivingFocus = 0x430;
            static constexpr std::uintptr_t bToggleable = 0x430;
            static constexpr std::uintptr_t bTriggerClickedAfterSelection = 0x430;
            static constexpr std::uintptr_t bHideInputActionWithKeyboard = 0x431;
            static constexpr std::uintptr_t bRequiresHold = 0x431;
            static constexpr std::uintptr_t bShouldUseFallbackDefaultInputAction = 0x431;
            static constexpr std::uintptr_t HoldData = 0x438;
            static constexpr std::uintptr_t bSimulateHoverOnTouchInput = 0x440;
            static constexpr std::uintptr_t ClickMethod = 0x443;
            static constexpr std::uintptr_t TouchMethod = 0x444;
            static constexpr std::uintptr_t PressMethod = 0x445;
            static constexpr std::uintptr_t InputPriority = 0x448;
            static constexpr std::uintptr_t TriggeringInputAction = 0x450;
            static constexpr std::uintptr_t TriggeringEnhancedInputAction = 0x460;
            static constexpr std::uintptr_t bNavigateToNextWidgetOnDisable = 0x478;
            static constexpr std::uintptr_t OnSelectedChangedBase = 0x480;
            static constexpr std::uintptr_t OnButtonBaseClicked = 0x490;
            static constexpr std::uintptr_t OnButtonBaseDoubleClicked = 0x4A0;
            static constexpr std::uintptr_t OnButtonBaseHovered = 0x4B0;
            static constexpr std::uintptr_t OnButtonBaseUnhovered = 0x4C0;
            static constexpr std::uintptr_t OnButtonBaseFocused = 0x4D0;
            static constexpr std::uintptr_t OnButtonBaseUnfocused = 0x4E0;
            static constexpr std::uintptr_t OnButtonBaseLockClicked = 0x4F0;
            static constexpr std::uintptr_t OnButtonBaseLockDoubleClicked = 0x500;
            static constexpr std::uintptr_t OnButtonBaseSelected = 0x510;
            static constexpr std::uintptr_t OnButtonBaseUnselected = 0x520;
            static constexpr std::uintptr_t OnButtonBaseDragDetected = 0x530;
            static constexpr std::uintptr_t OnButtonBaseDragEnter = 0x540;
            static constexpr std::uintptr_t OnButtonBaseDragLeave = 0x550;
            static constexpr std::uintptr_t OnButtonBaseDragOver = 0x560;
            static constexpr std::uintptr_t OnButtonBaseDrop = 0x570;
            static constexpr std::uintptr_t bIsPersistentBinding = 0x5B8;
            static constexpr std::uintptr_t InputModeOverride = 0x5B9;
            static constexpr std::uintptr_t SingleMaterialStyleMID = 0x5E0;
            static constexpr std::uintptr_t NormalStyle = 0x5F0;
            static constexpr std::uintptr_t SelectedStyle = 0x980;
            static constexpr std::uintptr_t DisabledStyle = 0xD10;
            static constexpr std::uintptr_t LockedStyle = 0x10A0;
            static constexpr std::uintptr_t bStopDoubleClickPropagation = 0x1430;
            static constexpr std::uintptr_t InputActionWidget = 0x15C8;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"ClickEvent", 0x330, "StructProperty"},
            {"MinWidth", 0x334, "IntProperty"},
            {"MinHeight", 0x338, "IntProperty"},
            {"MaxWidth", 0x33C, "IntProperty"},
            {"MaxHeight", 0x340, "IntProperty"},
            {"Style", 0x348, "ClassProperty"},
            {"bHideInputAction", 0x350, "BoolProperty"},
            {"PressedSlateSoundOverride", 0x358, "StructProperty"},
            {"ClickedSlateSoundOverride", 0x370, "StructProperty"},
            {"HoveredSlateSoundOverride", 0x388, "StructProperty"},
            {"SelectedPressedSlateSoundOverride", 0x3A0, "StructProperty"},
            {"SelectedClickedSlateSoundOverride", 0x3B8, "StructProperty"},
            {"SelectedHoveredSlateSoundOverride", 0x3D0, "StructProperty"},
            {"LockedPressedSlateSoundOverride", 0x3E8, "StructProperty"},
            {"LockedClickedSlateSoundOverride", 0x400, "StructProperty"},
            {"LockedHoveredSlateSoundOverride", 0x418, "StructProperty"},
            {"bApplyAlphaOnDisable", 0x430, "BoolProperty"},
            {"bDisplayInputActionWhenNotInteractable", 0x430, "BoolProperty"},
            {"bInteractableWhenSelected", 0x430, "BoolProperty"},
            {"bLocked", 0x430, "BoolProperty"},
            {"bSelectable", 0x430, "BoolProperty"},
            {"bShouldSelectUponReceivingFocus", 0x430, "BoolProperty"},
            {"bToggleable", 0x430, "BoolProperty"},
            {"bTriggerClickedAfterSelection", 0x430, "BoolProperty"},
            {"bHideInputActionWithKeyboard", 0x431, "BoolProperty"},
            {"bRequiresHold", 0x431, "BoolProperty"},
            {"bShouldUseFallbackDefaultInputAction", 0x431, "BoolProperty"},
            {"HoldData", 0x438, "ClassProperty"},
            {"bSimulateHoverOnTouchInput", 0x440, "BoolProperty"},
            {"ClickMethod", 0x443, "ByteProperty"},
            {"TouchMethod", 0x444, "ByteProperty"},
            {"PressMethod", 0x445, "ByteProperty"},
            {"InputPriority", 0x448, "IntProperty"},
            {"TriggeringInputAction", 0x450, "StructProperty"},
            {"TriggeringEnhancedInputAction", 0x460, "ObjectProperty"},
            {"bNavigateToNextWidgetOnDisable", 0x478, "BoolProperty"},
            {"OnSelectedChangedBase", 0x480, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseClicked", 0x490, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDoubleClicked", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseHovered", 0x4B0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnhovered", 0x4C0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseFocused", 0x4D0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnfocused", 0x4E0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockClicked", 0x4F0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockDoubleClicked", 0x500, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseSelected", 0x510, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnselected", 0x520, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragDetected", 0x530, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragEnter", 0x540, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragLeave", 0x550, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragOver", 0x560, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDrop", 0x570, "MulticastInlineDelegateProperty"},
            {"bIsPersistentBinding", 0x5B8, "BoolProperty"},
            {"InputModeOverride", 0x5B9, "EnumProperty"},
            {"SingleMaterialStyleMID", 0x5E0, "ObjectProperty"},
            {"NormalStyle", 0x5F0, "StructProperty"},
            {"SelectedStyle", 0x980, "StructProperty"},
            {"DisabledStyle", 0xD10, "StructProperty"},
            {"LockedStyle", 0x10A0, "StructProperty"},
            {"bStopDoubleClickPropagation", 0x1430, "BoolProperty"},
            {"InputActionWidget", 0x15C8, "ObjectProperty"},
        }};
    };

    struct FortBangWrapperContentWidget
    {
        static constexpr std::string_view Name = "FortBangWrapperContentWidget";
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

    struct FortCampaignPlayFlow
    {
        static constexpr std::string_view Name = "FortCampaignPlayFlow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ChangeLeaderInputActionRowHandle = 0x4A8;
            static constexpr std::uintptr_t BackInputActionRowHandle = 0x4B8;
            static constexpr std::uintptr_t Switcher = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChangeLeaderInputActionRowHandle", 0x4A8, "StructProperty"},
            {"BackInputActionRowHandle", 0x4B8, "StructProperty"},
            {"Switcher", 0x4C8, "ObjectProperty"},
        }};
    };

    struct FortCampaignTabsScreenBase
    {
        static constexpr std::string_view Name = "FortCampaignTabsScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t FeaturesTabsMap = 0x4B0;
            static constexpr std::uintptr_t TopTabContainer = 0x4C0;
            static constexpr std::uintptr_t TopTabList = 0x4C8;
            static constexpr std::uintptr_t MainTabSet = 0x4D0;
            static constexpr std::uintptr_t TabsLockedBehindQuestObjective = 0x4D8;
            static constexpr std::uintptr_t Switcher_TabContent = 0x4F0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FeaturesTabsMap", 0x4B0, "MapProperty"},
            {"TopTabContainer", 0x4C0, "ObjectProperty"},
            {"TopTabList", 0x4C8, "ObjectProperty"},
            {"MainTabSet", 0x4D0, "ClassProperty"},
            {"TabsLockedBehindQuestObjective", 0x4D8, "MapProperty"},
            {"Switcher_TabContent", 0x4F0, "ObjectProperty"},
        }};
    };

    struct FortChangeLeaderModal
    {
        static constexpr std::string_view Name = "FortChangeLeaderModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MemberButtonClass = 0x4A0;
            static constexpr std::uintptr_t Panel_PartyMembers = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MemberButtonClass", 0x4A0, "ClassProperty"},
            {"Panel_PartyMembers", 0x4A8, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookGenericRewardWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookGenericRewardWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdateVisibilityBasedOnRewardExistence = 0x330;
            static constexpr std::uintptr_t VisibilityWhenNoRewardSpecified = 0x334;
            static constexpr std::uintptr_t VisibilityWhenRewardSpecified = 0x335;
            static constexpr std::uintptr_t RewardCardWidget = 0x338;
            static constexpr std::uintptr_t RewardStatus = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUpdateVisibilityBasedOnRewardExistence", 0x330, "BoolProperty"},
            {"VisibilityWhenNoRewardSpecified", 0x334, "EnumProperty"},
            {"VisibilityWhenRewardSpecified", 0x335, "EnumProperty"},
            {"RewardCardWidget", 0x338, "ObjectProperty"},
            {"RewardStatus", 0x340, "EnumProperty"},
        }};
    };

    struct FortCollectionBookHelpWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookHelpWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPushedOnToContentPanelStack = 0x568;
            static constexpr std::uintptr_t bIsAlreadyOnContentPanelStack = 0x569;
            static constexpr std::uintptr_t InputPriority = 0x56A;
            static constexpr std::uintptr_t bIsClosableByPlayerInput = 0x56B;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsPushedOnToContentPanelStack", 0x568, "BoolProperty"},
            {"bIsAlreadyOnContentPanelStack", 0x569, "BoolProperty"},
            {"InputPriority", 0x56A, "EnumProperty"},
            {"bIsClosableByPlayerInput", 0x56B, "BoolProperty"},
            {"PrimaryContentSetup", 0x56C, "StructProperty"},
        }};
    };

    struct FortCollectionBookItemPopupMenu
    {
        static constexpr std::string_view Name = "FortCollectionBookItemPopupMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPopupMenu_Legacy";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInputStack = 0x560;
            static constexpr std::uintptr_t OwningMenuAnchor = 0x564;
            static constexpr std::uintptr_t ContextProvidingObject = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseInputStack", 0x560, "BoolProperty"},
            {"OwningMenuAnchor", 0x564, "WeakObjectProperty"},
            {"ContextProvidingObject", 0x56C, "WeakObjectProperty"},
        }};
    };

    struct FortCollectionBookOverviewWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookOverviewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCollectionBookPageSelected = 0x330;
            static constexpr std::uintptr_t OnCollectionBookPageClicked = 0x340;
            static constexpr std::uintptr_t LastSelectedPage = 0x350;
            static constexpr std::uintptr_t LastSelectedCategory = 0x358;
            static constexpr std::uintptr_t CategoryObjectPool = 0x360;
            static constexpr std::uintptr_t PageTreeViewWidget = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnCollectionBookPageSelected", 0x330, "MulticastInlineDelegateProperty"},
            {"OnCollectionBookPageClicked", 0x340, "MulticastInlineDelegateProperty"},
            {"LastSelectedPage", 0x350, "ObjectProperty"},
            {"LastSelectedCategory", 0x358, "ObjectProperty"},
            {"CategoryObjectPool", 0x360, "ArrayProperty"},
            {"PageTreeViewWidget", 0x370, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookPageCompletionRewardWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookPageCompletionRewardWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCollectionBookGenericRewardWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdateVisibilityBasedOnRewardExistence = 0x330;
            static constexpr std::uintptr_t VisibilityWhenNoRewardSpecified = 0x334;
            static constexpr std::uintptr_t VisibilityWhenRewardSpecified = 0x335;
            static constexpr std::uintptr_t RewardCardWidget = 0x338;
            static constexpr std::uintptr_t RewardStatus = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUpdateVisibilityBasedOnRewardExistence", 0x330, "BoolProperty"},
            {"VisibilityWhenNoRewardSpecified", 0x334, "EnumProperty"},
            {"VisibilityWhenRewardSpecified", 0x335, "EnumProperty"},
            {"RewardCardWidget", 0x338, "ObjectProperty"},
            {"RewardStatus", 0x340, "EnumProperty"},
        }};
    };

    struct FortCollectionBookPageDetailsWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookPageDetailsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PageCompletionText = 0x330;
            static constexpr std::uintptr_t ProgressBar = 0x338;
            static constexpr std::uintptr_t PageRewardWidget = 0x340;
            static constexpr std::uintptr_t RewardDetailsButton = 0x348;
            static constexpr std::uintptr_t DetailsPage = 0x350;
            static constexpr std::uintptr_t RewardDetailsModalWidgetClass = 0x358;
            static constexpr std::uintptr_t ModalTitle = 0x378;
            static constexpr std::uintptr_t RewardDetailsModalWidget = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PageCompletionText", 0x330, "ObjectProperty"},
            {"ProgressBar", 0x338, "ObjectProperty"},
            {"PageRewardWidget", 0x340, "ObjectProperty"},
            {"RewardDetailsButton", 0x348, "ObjectProperty"},
            {"DetailsPage", 0x350, "ObjectProperty"},
            {"RewardDetailsModalWidgetClass", 0x358, "SoftClassProperty"},
            {"ModalTitle", 0x378, "TextProperty"},
            {"RewardDetailsModalWidget", 0x388, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookPageListWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookPageListWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PageNameWidget = 0x15D8;
            static constexpr std::uintptr_t AvailableSlotsWidget = 0x15E0;
            static constexpr std::uintptr_t PageCompletionWidget = 0x15E8;
            static constexpr std::uintptr_t AssociatedPageOrCategory = 0x15F0;
            static constexpr std::uintptr_t bIsExpanded = 0x15F8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PageNameWidget", 0x15D8, "ObjectProperty"},
            {"AvailableSlotsWidget", 0x15E0, "ObjectProperty"},
            {"PageCompletionWidget", 0x15E8, "ObjectProperty"},
            {"AssociatedPageOrCategory", 0x15F0, "WeakObjectProperty"},
            {"bIsExpanded", 0x15F8, "BoolProperty"},
        }};
    };

    struct FortCollectionBookPicker
    {
        static constexpr std::string_view Name = "FortCollectionBookPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPickerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MulchConfirmationModalClass = 0x470;
            static constexpr std::uintptr_t CurrentSlottedItem = 0x480;
            static constexpr std::uintptr_t MulchConfirmationModal = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MulchConfirmationModalClass", 0x470, "ClassProperty"},
            {"CurrentSlottedItem", 0x480, "ObjectProperty"},
            {"MulchConfirmationModal", 0x488, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookPrimaryPanel
    {
        static constexpr std::string_view Name = "FortCollectionBookPrimaryPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCollectionBookPageSelectedDelegate = 0x4A8;
            static constexpr std::uintptr_t OnCollectionBookPageClickedDelegate = 0x4B8;
            static constexpr std::uintptr_t OnCollectionBookSectionClickedDelegate = 0x4C8;
            static constexpr std::uintptr_t BackActionRowHandle = 0x4D8;
            static constexpr std::uintptr_t SummonInfoPanelActionRowHandle = 0x4E8;
            static constexpr std::uintptr_t OverviewWidget = 0x4F8;
            static constexpr std::uintptr_t SectionTileViewWidget = 0x500;
            static constexpr std::uintptr_t CurrentNavTarget = 0x508;
            static constexpr std::uintptr_t LastClickedSection = 0x510;
            static constexpr std::uintptr_t LastSelectedWidget = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnCollectionBookPageSelectedDelegate", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnCollectionBookPageClickedDelegate", 0x4B8, "MulticastInlineDelegateProperty"},
            {"OnCollectionBookSectionClickedDelegate", 0x4C8, "MulticastInlineDelegateProperty"},
            {"BackActionRowHandle", 0x4D8, "StructProperty"},
            {"SummonInfoPanelActionRowHandle", 0x4E8, "StructProperty"},
            {"OverviewWidget", 0x4F8, "ObjectProperty"},
            {"SectionTileViewWidget", 0x500, "ObjectProperty"},
            {"CurrentNavTarget", 0x508, "EnumProperty"},
            {"LastClickedSection", 0x510, "ObjectProperty"},
            {"LastSelectedWidget", 0x518, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookProgressWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookProgressWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedXPLevel = 0x330;
            static constexpr std::uintptr_t CachedXPCompletionPct = 0x334;
            static constexpr std::uintptr_t RewardDetailsModalWidgetClass = 0x338;
            static constexpr std::uintptr_t ProgressionRewardsPreviewWidget = 0x358;
            static constexpr std::uintptr_t XPTextWidget = 0x360;
            static constexpr std::uintptr_t LevelTextWidget = 0x368;
            static constexpr std::uintptr_t DetailsButtonWidget = 0x370;
            static constexpr std::uintptr_t PageDetailsWidget = 0x378;
            static constexpr std::uintptr_t DetailsModalWidget = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CachedXPLevel", 0x330, "IntProperty"},
            {"CachedXPCompletionPct", 0x334, "FloatProperty"},
            {"RewardDetailsModalWidgetClass", 0x338, "SoftClassProperty"},
            {"ProgressionRewardsPreviewWidget", 0x358, "ObjectProperty"},
            {"XPTextWidget", 0x360, "ObjectProperty"},
            {"LevelTextWidget", 0x368, "ObjectProperty"},
            {"DetailsButtonWidget", 0x370, "ObjectProperty"},
            {"PageDetailsWidget", 0x378, "ObjectProperty"},
            {"DetailsModalWidget", 0x380, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookProgressionRewardDetailInspectWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookProgressionRewardDetailInspectWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelTextWidget = 0x330;
            static constexpr std::uintptr_t RewardWidget = 0x338;
            static constexpr std::uintptr_t CheckmarkImage = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LevelTextWidget", 0x330, "ObjectProperty"},
            {"RewardWidget", 0x338, "ObjectProperty"},
            {"CheckmarkImage", 0x340, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookProgressionRewardWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookProgressionRewardWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCollectionBookGenericRewardWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelTextWidget = 0x348;
            static constexpr std::uintptr_t DisplayNameWidget = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LevelTextWidget", 0x348, "ObjectProperty"},
            {"DisplayNameWidget", 0x350, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookProgressionRewardsModalWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookProgressionRewardsModalWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardWidgetClass = 0x560;
            static constexpr std::uintptr_t RewardWidgetPadding = 0x580;
            static constexpr std::uintptr_t NumRewardsToShow = 0x590;
            static constexpr std::uintptr_t RewardBoxWidget = 0x598;
            static constexpr std::uintptr_t MajorRewardBoxWidget = 0x5A0;
            static constexpr std::uintptr_t XPTextWidget = 0x5A8;
            static constexpr std::uintptr_t LevelTextWidget = 0x5B0;
            static constexpr std::uintptr_t ButtonGroup = 0x5B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RewardWidgetClass", 0x560, "SoftClassProperty"},
            {"RewardWidgetPadding", 0x580, "StructProperty"},
            {"NumRewardsToShow", 0x590, "IntProperty"},
            {"RewardBoxWidget", 0x598, "ObjectProperty"},
            {"MajorRewardBoxWidget", 0x5A0, "ObjectProperty"},
            {"XPTextWidget", 0x5A8, "ObjectProperty"},
            {"LevelTextWidget", 0x5B0, "ObjectProperty"},
            {"ButtonGroup", 0x5B8, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookProgressionRewardsPreviewWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookProgressionRewardsPreviewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NextRewardWidget = 0x330;
            static constexpr std::uintptr_t NextMajorRewardWidget = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NextRewardWidget", 0x330, "ObjectProperty"},
            {"NextMajorRewardWidget", 0x338, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookRecycleSlotResultsWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookRecycleSlotResultsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RecycleResultsWidget = 0x330;
            static constexpr std::uintptr_t ItemCardSize = 0x338;
            static constexpr std::uintptr_t ItemToRecycle = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RecycleResultsWidget", 0x330, "ObjectProperty"},
            {"ItemCardSize", 0x338, "EnumProperty"},
            {"ItemToRecycle", 0x340, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookRewardCardWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookRewardCardWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDisplayedItemChangedEvent = 0x330;
            static constexpr std::uintptr_t ItemCardWidget = 0x340;
            static constexpr std::uintptr_t MultiItemRewardOverlay = 0x348;
            static constexpr std::uintptr_t ChoiceRewardOverlay = 0x350;
            static constexpr std::uintptr_t CheckmarkImage = 0x358;
            static constexpr std::uintptr_t UpdateCardInterval = 0x360;
            static constexpr std::uintptr_t ItemCardSize = 0x364;
            static constexpr std::uintptr_t bDisplayAsRewardCard = 0x365;
            static constexpr std::uintptr_t RepresentedRewards = 0x368;
            static constexpr std::uintptr_t DummyItems = 0x3A8;
            static constexpr std::uintptr_t UpdateCardTimer = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnDisplayedItemChangedEvent", 0x330, "MulticastInlineDelegateProperty"},
            {"ItemCardWidget", 0x340, "ObjectProperty"},
            {"MultiItemRewardOverlay", 0x348, "ObjectProperty"},
            {"ChoiceRewardOverlay", 0x350, "ObjectProperty"},
            {"CheckmarkImage", 0x358, "ObjectProperty"},
            {"UpdateCardInterval", 0x360, "FloatProperty"},
            {"ItemCardSize", 0x364, "EnumProperty"},
            {"bDisplayAsRewardCard", 0x365, "BoolProperty"},
            {"RepresentedRewards", 0x368, "StructProperty"},
            {"DummyItems", 0x3A8, "ArrayProperty"},
            {"UpdateCardTimer", 0x3B8, "StructProperty"},
        }};
    };

    struct FortCollectionBookRewardModalWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookRewardModalWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t TitleWidget = 0x560;
            static constexpr std::uintptr_t RewardWidget = 0x568;
            static constexpr std::uintptr_t ProgressBar = 0x570;
            static constexpr std::uintptr_t ProgressTextWidget = 0x578;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TitleWidget", 0x560, "ObjectProperty"},
            {"RewardWidget", 0x568, "ObjectProperty"},
            {"ProgressBar", 0x570, "ObjectProperty"},
            {"ProgressTextWidget", 0x578, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookSectionCompletionRewardWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookSectionCompletionRewardWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCollectionBookGenericRewardWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardDetailsButton = 0x348;
            static constexpr std::uintptr_t RewardDetailsModalWidgetClass = 0x350;
            static constexpr std::uintptr_t ModalTitle = 0x370;
            static constexpr std::uintptr_t RewardDetailsModalWidget = 0x380;
            static constexpr std::uintptr_t Section = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RewardDetailsButton", 0x348, "ObjectProperty"},
            {"RewardDetailsModalWidgetClass", 0x350, "SoftClassProperty"},
            {"ModalTitle", 0x370, "TextProperty"},
            {"RewardDetailsModalWidget", 0x380, "ObjectProperty"},
            {"Section", 0x388, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookSectionPanel
    {
        static constexpr std::string_view Name = "FortCollectionBookSectionPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSectionCloseRequest = 0x4A0;
            static constexpr std::uintptr_t OnPreviewXPChangeEvent = 0x4B0;
            static constexpr std::uintptr_t SectionNameTextWidget = 0x4C0;
            static constexpr std::uintptr_t SlotViewWidget = 0x4C8;
            static constexpr std::uintptr_t SlotItemPicker = 0x4D0;
            static constexpr std::uintptr_t ContextOverlayWidget = 0x4D8;
            static constexpr std::uintptr_t ContextTextWidget = 0x4E0;
            static constexpr std::uintptr_t SectionRewardWidget = 0x4E8;
            static constexpr std::uintptr_t ItemAcquisitionSourceContainerWidget = 0x4F0;
            static constexpr std::uintptr_t ItemAcquisitionSourceDescWidget = 0x4F8;
            static constexpr std::uintptr_t ItemAcquisitionSourceDesc2Widget = 0x500;
            static constexpr std::uintptr_t ResearchRecruitUnslotContainerWidget = 0x508;
            static constexpr std::uintptr_t PersonRecruitUnavailableMessageWidget = 0x510;
            static constexpr std::uintptr_t ItemResearchUnavailableMessageWidget = 0x518;
            static constexpr std::uintptr_t UnslotUnavailableMessageWidget = 0x520;
            static constexpr std::uintptr_t BackActionRowHandle = 0x528;
            static constexpr std::uintptr_t CloseActionRowHandle = 0x538;
            static constexpr std::uintptr_t SlotItemActionRowHandle = 0x548;
            static constexpr std::uintptr_t InspectItemActionRowHandle = 0x558;
            static constexpr std::uintptr_t InspectCollectionBookItemActionRowHandle = 0x568;
            static constexpr std::uintptr_t InspectPreviewItemActionRowHandle = 0x578;
            static constexpr std::uintptr_t OpenPickerActionRowHandle = 0x588;
            static constexpr std::uintptr_t LogAllowedItemsActionRowHandle = 0x598;
            static constexpr std::uintptr_t ResearchItemActionRowHandle = 0x5A8;
            static constexpr std::uintptr_t RecruitActionRowHandle = 0x5B8;
            static constexpr std::uintptr_t UnslotItemActionRowHandle = 0x5C8;
            static constexpr std::uintptr_t CurrentNavTarget = 0x5D8;
            static constexpr std::uintptr_t AssociatedSection = 0x5E0;
            static constexpr std::uintptr_t bHasSummonedPanel = 0x5E8;
            static constexpr std::uintptr_t SlotConfirmationDialogLatentHandle = 0x5EC;
            static constexpr std::uintptr_t OnShowItemDetailEvent = 0x5F0;
            static constexpr std::uintptr_t OnSlotItemConfirmEvent = 0x600;
            static constexpr std::uintptr_t OnResearchItemConfirmEvent = 0x610;
            static constexpr std::uintptr_t OnUnslotItemConfirmEvent = 0x620;
            static constexpr std::uintptr_t OnInspectItemEvent = 0x630;
            static constexpr std::uintptr_t SlotConfirmationModalClass = 0x668;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"OnSectionCloseRequest", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnPreviewXPChangeEvent", 0x4B0, "MulticastInlineDelegateProperty"},
            {"SectionNameTextWidget", 0x4C0, "ObjectProperty"},
            {"SlotViewWidget", 0x4C8, "ObjectProperty"},
            {"SlotItemPicker", 0x4D0, "ObjectProperty"},
            {"ContextOverlayWidget", 0x4D8, "ObjectProperty"},
            {"ContextTextWidget", 0x4E0, "ObjectProperty"},
            {"SectionRewardWidget", 0x4E8, "ObjectProperty"},
            {"ItemAcquisitionSourceContainerWidget", 0x4F0, "ObjectProperty"},
            {"ItemAcquisitionSourceDescWidget", 0x4F8, "ObjectProperty"},
            {"ItemAcquisitionSourceDesc2Widget", 0x500, "ObjectProperty"},
            {"ResearchRecruitUnslotContainerWidget", 0x508, "ObjectProperty"},
            {"PersonRecruitUnavailableMessageWidget", 0x510, "ObjectProperty"},
            {"ItemResearchUnavailableMessageWidget", 0x518, "ObjectProperty"},
            {"UnslotUnavailableMessageWidget", 0x520, "ObjectProperty"},
            {"BackActionRowHandle", 0x528, "StructProperty"},
            {"CloseActionRowHandle", 0x538, "StructProperty"},
            {"SlotItemActionRowHandle", 0x548, "StructProperty"},
            {"InspectItemActionRowHandle", 0x558, "StructProperty"},
            {"InspectCollectionBookItemActionRowHandle", 0x568, "StructProperty"},
            {"InspectPreviewItemActionRowHandle", 0x578, "StructProperty"},
            {"OpenPickerActionRowHandle", 0x588, "StructProperty"},
            {"LogAllowedItemsActionRowHandle", 0x598, "StructProperty"},
            {"ResearchItemActionRowHandle", 0x5A8, "StructProperty"},
            {"RecruitActionRowHandle", 0x5B8, "StructProperty"},
            {"UnslotItemActionRowHandle", 0x5C8, "StructProperty"},
            {"CurrentNavTarget", 0x5D8, "EnumProperty"},
            {"AssociatedSection", 0x5E0, "ObjectProperty"},
            {"bHasSummonedPanel", 0x5E8, "BoolProperty"},
            {"SlotConfirmationDialogLatentHandle", 0x5EC, "StructProperty"},
            {"OnShowItemDetailEvent", 0x5F0, "MulticastInlineDelegateProperty"},
            {"OnSlotItemConfirmEvent", 0x600, "MulticastInlineDelegateProperty"},
            {"OnResearchItemConfirmEvent", 0x610, "MulticastInlineDelegateProperty"},
            {"OnUnslotItemConfirmEvent", 0x620, "MulticastInlineDelegateProperty"},
            {"OnInspectItemEvent", 0x630, "MulticastInlineDelegateProperty"},
            {"SlotConfirmationModalClass", 0x668, "ClassProperty"},
        }};
    };

    struct FortCollectionBookSectionTileWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookSectionTileWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotWidgetClass = 0x15D8;
            static constexpr std::uintptr_t SlotWidgetPadding = 0x15F8;
            static constexpr std::uintptr_t SlotWidgetHorizontalAlignment = 0x1608;
            static constexpr std::uintptr_t SlotWidgetVerticalAlignment = 0x1609;
            static constexpr std::uintptr_t MaxNumSlotsSupported = 0x160C;
            static constexpr std::uintptr_t SlotBoxWidget = 0x1610;
            static constexpr std::uintptr_t SectionNameWidget = 0x1618;
            static constexpr std::uintptr_t SectionRewardWidget = 0x1620;
            static constexpr std::uintptr_t AssociatedSection = 0x1628;
            static constexpr std::uintptr_t SlotWidgets = 0x1630;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SlotWidgetClass", 0x15D8, "SoftClassProperty"},
            {"SlotWidgetPadding", 0x15F8, "StructProperty"},
            {"SlotWidgetHorizontalAlignment", 0x1608, "ByteProperty"},
            {"SlotWidgetVerticalAlignment", 0x1609, "ByteProperty"},
            {"MaxNumSlotsSupported", 0x160C, "IntProperty"},
            {"SlotBoxWidget", 0x1610, "ObjectProperty"},
            {"SectionNameWidget", 0x1618, "ObjectProperty"},
            {"SectionRewardWidget", 0x1620, "ObjectProperty"},
            {"AssociatedSection", 0x1628, "ObjectProperty"},
            {"SlotWidgets", 0x1630, "ArrayProperty"},
        }};
    };

    struct FortCollectionBookSlotButton
    {
        static constexpr std::string_view Name = "FortCollectionBookSlotButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionBookSlotWidget = 0x15D0;
            static constexpr std::uintptr_t PopupMenuAnchor = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollectionBookSlotWidget", 0x15D0, "ObjectProperty"},
            {"PopupMenuAnchor", 0x15D8, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookSlotConfirmationModal
    {
        static constexpr std::string_view Name = "FortCollectionBookSlotConfirmationModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentlySlottedItem = 0x588;
            static constexpr std::uintptr_t NewItemToSlot = 0x590;
            static constexpr std::uintptr_t Text_SlottingDescription = 0x598;
            static constexpr std::uintptr_t ItemCard_NewlySlottedItem = 0x5A0;
            static constexpr std::uintptr_t RecycleSlotResultsWidget = 0x5A8;
            static constexpr std::uintptr_t Button_SlotItem = 0x5B0;
            static constexpr std::uintptr_t Button_Back = 0x5B8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CurrentlySlottedItem", 0x588, "ObjectProperty"},
            {"NewItemToSlot", 0x590, "ObjectProperty"},
            {"Text_SlottingDescription", 0x598, "ObjectProperty"},
            {"ItemCard_NewlySlottedItem", 0x5A0, "ObjectProperty"},
            {"RecycleSlotResultsWidget", 0x5A8, "ObjectProperty"},
            {"Button_SlotItem", 0x5B0, "ObjectProperty"},
            {"Button_Back", 0x5B8, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookSlotDetailsWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookSlotDetailsWidget";
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

    struct FortCollectionBookSlotView
    {
        static constexpr std::string_view Name = "FortCollectionBookSlotView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionBookButtonClass = 0x330;
            static constexpr std::uintptr_t CollectionBookButtonBox = 0x350;
            static constexpr std::uintptr_t CollectionBookSlotButtonGroup = 0x358;
            static constexpr std::uintptr_t CollectionBookSlotButtons = 0x360;
            static constexpr std::uintptr_t AssociatedSection = 0x370;
            static constexpr std::uintptr_t PopupMenu = 0x3C0;
            static constexpr std::uintptr_t PreviousSelectedButtonIdx = 0x3C8;
            static constexpr std::uintptr_t CurrentSelectedButtonIdx = 0x3CC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CollectionBookButtonClass", 0x330, "SoftClassProperty"},
            {"CollectionBookButtonBox", 0x350, "ObjectProperty"},
            {"CollectionBookSlotButtonGroup", 0x358, "ObjectProperty"},
            {"CollectionBookSlotButtons", 0x360, "ArrayProperty"},
            {"AssociatedSection", 0x370, "ObjectProperty"},
            {"PopupMenu", 0x3C0, "ObjectProperty"},
            {"PreviousSelectedButtonIdx", 0x3C8, "IntProperty"},
            {"CurrentSelectedButtonIdx", 0x3CC, "IntProperty"},
        }};
    };

    struct FortCollectionBookSlotWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookSlotWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemCardSize = 0x340;
            static constexpr std::uintptr_t bIsRewardCard = 0x341;
            static constexpr std::uintptr_t ItemCardWidget = 0x348;
            static constexpr std::uintptr_t UnslottedOverlayWidget = 0x350;
            static constexpr std::uintptr_t ReadyToSlotOverlayWidget = 0x358;
            static constexpr std::uintptr_t UnslottedButReadyOverlayWidget = 0x360;
            static constexpr std::uintptr_t SlotRowName = 0x368;
            static constexpr std::uintptr_t ItemAvailableToSlotText = 0x370;
            static constexpr std::uintptr_t NoItemsAvailableToSlotText = 0x380;
            static constexpr std::uintptr_t HigherQualityItemsAvailableToSlotAndUpgradeAvailableText = 0x390;
            static constexpr std::uintptr_t HigherQualityItemsAvailableToSlotAndEvolveAvailableText = 0x3A0;
            static constexpr std::uintptr_t HigherQualityItemsAvailableToSlotText = 0x3B0;
            static constexpr std::uintptr_t ItemInSlotFullyUpgradedText = 0x3C0;
            static constexpr std::uintptr_t ItemInSlotCanBeUpgradedText = 0x3D0;
            static constexpr std::uintptr_t ItemInSlotCanBeEvolvedText = 0x3E0;
            static constexpr std::uintptr_t SlottedItemRepresentation = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ItemCardSize", 0x340, "EnumProperty"},
            {"bIsRewardCard", 0x341, "BoolProperty"},
            {"ItemCardWidget", 0x348, "ObjectProperty"},
            {"UnslottedOverlayWidget", 0x350, "ObjectProperty"},
            {"ReadyToSlotOverlayWidget", 0x358, "ObjectProperty"},
            {"UnslottedButReadyOverlayWidget", 0x360, "ObjectProperty"},
            {"SlotRowName", 0x368, "NameProperty"},
            {"ItemAvailableToSlotText", 0x370, "TextProperty"},
            {"NoItemsAvailableToSlotText", 0x380, "TextProperty"},
            {"HigherQualityItemsAvailableToSlotAndUpgradeAvailableText", 0x390, "TextProperty"},
            {"HigherQualityItemsAvailableToSlotAndEvolveAvailableText", 0x3A0, "TextProperty"},
            {"HigherQualityItemsAvailableToSlotText", 0x3B0, "TextProperty"},
            {"ItemInSlotFullyUpgradedText", 0x3C0, "TextProperty"},
            {"ItemInSlotCanBeUpgradedText", 0x3D0, "TextProperty"},
            {"ItemInSlotCanBeEvolvedText", 0x3E0, "TextProperty"},
            {"SlottedItemRepresentation", 0x3F0, "ObjectProperty"},
        }};
    };

    struct FortCollectionBookWidget
    {
        static constexpr std::string_view Name = "FortCollectionBookWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ProgressWidget = 0x4B0;
            static constexpr std::uintptr_t MainWidgetSwitcher = 0x4B8;
            static constexpr std::uintptr_t PrimaryPanelWidget = 0x4C0;
            static constexpr std::uintptr_t SectionPanelWidget = 0x4C8;
            static constexpr std::uintptr_t PrimaryPanelIdx = 0x4D0;
            static constexpr std::uintptr_t SectionPanelIdx = 0x4D4;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x4D9;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ProgressWidget", 0x4B0, "ObjectProperty"},
            {"MainWidgetSwitcher", 0x4B8, "ObjectProperty"},
            {"PrimaryPanelWidget", 0x4C0, "ObjectProperty"},
            {"SectionPanelWidget", 0x4C8, "ObjectProperty"},
            {"PrimaryPanelIdx", 0x4D0, "IntProperty"},
            {"SectionPanelIdx", 0x4D4, "IntProperty"},
            {"PrimaryContentSetup", 0x4D9, "StructProperty"},
        }};
    };

    struct FortCommandScreen
    {
        static constexpr std::string_view Name = "FortCommandScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ShowAllStatsActionData = 0x4A0;
            static constexpr std::uintptr_t InspectHeroActionData = 0x4B0;
            static constexpr std::uintptr_t ProfileScreenClass = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShowAllStatsActionData", 0x4A0, "StructProperty"},
            {"InspectHeroActionData", 0x4B0, "StructProperty"},
            {"ProfileScreenClass", 0x4C0, "SoftClassProperty"},
        }};
    };

    struct FortCraftingBarWidget
    {
        static constexpr std::string_view Name = "FortCraftingBarWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingText = 0x370;
            static constexpr std::uintptr_t CraftingProgressBar = 0x378;
            static constexpr std::uintptr_t CompletedRemainVisibleTime = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CraftingText", 0x370, "ObjectProperty"},
            {"CraftingProgressBar", 0x378, "ObjectProperty"},
            {"CompletedRemainVisibleTime", 0x380, "FloatProperty"},
        }};
    };

    struct FortDefenderLoadoutHelpers
    {
        static constexpr std::string_view Name = "FortDefenderLoadoutHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDefenderSquadSelectorButton
    {
        static constexpr std::string_view Name = "FortDefenderSquadSelectorButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadSelectorButton";
        struct Offsets
        {
            static constexpr std::uintptr_t SquadSlotIndex = 0x1630;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SquadSlotIndex", 0x1630, "IntProperty"},
        }};
    };

    struct FortDifficultySelectModal
    {
        static constexpr std::string_view Name = "FortDifficultySelectModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MenuAnchor_TheaterList = 0x4A0;
            static constexpr std::uintptr_t PopupMenuCache = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MenuAnchor_TheaterList", 0x4A0, "ObjectProperty"},
            {"PopupMenuCache", 0x4A8, "ObjectProperty"},
        }};
    };

    struct FortDirectAcquisitionWidgetBase
    {
        static constexpr std::string_view Name = "FortDirectAcquisitionWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMtxStoreRootBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowIneligible = 0x520;
            static constexpr std::uintptr_t FirstOfferGenerated = 0x528;
            static constexpr std::uintptr_t HorizontalBox_LargeTile = 0x540;
            static constexpr std::uintptr_t GridPanel_SmallTile = 0x548;
            static constexpr std::uintptr_t HorizontalBox_ReorderedItems = 0x550;
            static constexpr std::uintptr_t VerticalBox_FeatureItems = 0x558;
            static constexpr std::uintptr_t VerticalBox_DailyItems = 0x560;
            static constexpr std::uintptr_t ScaleBox_Main = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bShowIneligible", 0x520, "BoolProperty"},
            {"FirstOfferGenerated", 0x528, "ObjectProperty"},
            {"HorizontalBox_LargeTile", 0x540, "ObjectProperty"},
            {"GridPanel_SmallTile", 0x548, "ObjectProperty"},
            {"HorizontalBox_ReorderedItems", 0x550, "ObjectProperty"},
            {"VerticalBox_FeatureItems", 0x558, "ObjectProperty"},
            {"VerticalBox_DailyItems", 0x560, "ObjectProperty"},
            {"ScaleBox_Main", 0x568, "ObjectProperty"},
        }};
    };

    struct FortEventStoreOfferDetailsScreen
    {
        static constexpr std::string_view Name = "FortEventStoreOfferDetailsScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStoreFrontOfferDetailsWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BackAction = 0x840;
            static constexpr std::uintptr_t UndoAction = 0x850;
            static constexpr std::uintptr_t bIsPurchasing = 0x860;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BackAction", 0x840, "StructProperty"},
            {"UndoAction", 0x850, "StructProperty"},
            {"bIsPurchasing", 0x860, "BoolProperty"},
        }};
    };

    struct FortExpeditionBuildSquadWidget
    {
        static constexpr std::string_view Name = "FortExpeditionBuildSquadWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x568;
            static constexpr std::uintptr_t CurrentSquadId = 0x570;
            static constexpr std::uintptr_t ExpeditionSquadSlotsView = 0x578;
            static constexpr std::uintptr_t ExpeditionSquadSlotDetails = 0x580;
            static constexpr std::uintptr_t ExpeditionSquadSlotPicker = 0x588;
            static constexpr std::uintptr_t MasterWidget = 0x590;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x598;
            static constexpr std::uintptr_t ItemViewContext_ExpeditionSlotsView = 0x5A0;
            static constexpr std::uintptr_t ItemViewContext_ExpeditionSlotItemPicker = 0x5A8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Item", 0x568, "WeakObjectProperty"},
            {"CurrentSquadId", 0x570, "NameProperty"},
            {"ExpeditionSquadSlotsView", 0x578, "ObjectProperty"},
            {"ExpeditionSquadSlotDetails", 0x580, "ObjectProperty"},
            {"ExpeditionSquadSlotPicker", 0x588, "ObjectProperty"},
            {"MasterWidget", 0x590, "ObjectProperty"},
            {"PrimaryContentSetup", 0x598, "StructProperty"},
            {"ItemViewContext_ExpeditionSlotsView", 0x5A0, "ObjectProperty"},
            {"ItemViewContext_ExpeditionSlotItemPicker", 0x5A8, "ObjectProperty"},
        }};
    };

    struct FortExpeditionDetailsWidget
    {
        static constexpr std::string_view Name = "FortExpeditionDetailsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x330;
            static constexpr std::uintptr_t ExpeditionSquadSlotsView = 0x338;
            static constexpr std::uintptr_t CurrentSquadId = 0x340;
            static constexpr std::uintptr_t ItemViewContext_ExpeditionSlotsView = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Item", 0x330, "WeakObjectProperty"},
            {"ExpeditionSquadSlotsView", 0x338, "ObjectProperty"},
            {"CurrentSquadId", 0x340, "NameProperty"},
            {"ItemViewContext_ExpeditionSlotsView", 0x348, "ObjectProperty"},
        }};
    };

    struct FortExpeditionExpiresWidget
    {
        static constexpr std::string_view Name = "FortExpeditionExpiresWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Item", 0x330, "WeakObjectProperty"},
        }};
    };

    struct FortExpeditionListItemWidget
    {
        static constexpr std::string_view Name = "FortExpeditionListItemWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Item", 0x1628, "WeakObjectProperty"},
        }};
    };

    struct FortExpeditionListViewWidget
    {
        static constexpr std::string_view Name = "FortExpeditionListViewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnExpeditionSelected = 0x330;
            static constexpr std::uintptr_t OnExpeditionListViewRefreshed = 0x340;
            static constexpr std::uintptr_t ExpeditionListView = 0x350;
            static constexpr std::uintptr_t CurrentTabNameId = 0x358;
            static constexpr std::uintptr_t SortType = 0x35C;
            static constexpr std::uintptr_t CurrentSelectedItem = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnExpeditionSelected", 0x330, "MulticastInlineDelegateProperty"},
            {"OnExpeditionListViewRefreshed", 0x340, "MulticastInlineDelegateProperty"},
            {"ExpeditionListView", 0x350, "ObjectProperty"},
            {"CurrentTabNameId", 0x358, "NameProperty"},
            {"SortType", 0x35C, "EnumProperty"},
            {"CurrentSelectedItem", 0x360, "ObjectProperty"},
        }};
    };

    struct FortExpeditionMasterWidget
    {
        static constexpr std::string_view Name = "FortExpeditionMasterWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t BackInputAction = 0x568;
            static constexpr std::uintptr_t BuildExpeditionInputAction = 0x578;
            static constexpr std::uintptr_t AbandonExpeditionInputAction = 0x588;
            static constexpr std::uintptr_t CollectExpeditionInputAction = 0x598;
            static constexpr std::uintptr_t SortInputAction = 0x5A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BackInputAction", 0x568, "StructProperty"},
            {"BuildExpeditionInputAction", 0x578, "StructProperty"},
            {"AbandonExpeditionInputAction", 0x588, "StructProperty"},
            {"CollectExpeditionInputAction", 0x598, "StructProperty"},
            {"SortInputAction", 0x5A8, "StructProperty"},
        }};
    };

    struct FortExpeditionOverviewWidget
    {
        static constexpr std::string_view Name = "FortExpeditionOverviewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TabButtonType = 0x330;
            static constexpr std::uintptr_t TabListRegistrationInfo = 0x338;
            static constexpr std::uintptr_t ExpeditionTabList = 0x348;
            static constexpr std::uintptr_t ExpeditionListView = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TabButtonType", 0x330, "ClassProperty"},
            {"TabListRegistrationInfo", 0x338, "ArrayProperty"},
            {"ExpeditionTabList", 0x348, "ObjectProperty"},
            {"ExpeditionListView", 0x350, "ObjectProperty"},
        }};
    };

    struct FortExpeditionPickVehicleWidget
    {
        static constexpr std::string_view Name = "FortExpeditionPickVehicleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t BackInputAction = 0x568;
            static constexpr std::uintptr_t Item = 0x578;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BackInputAction", 0x568, "StructProperty"},
            {"Item", 0x578, "WeakObjectProperty"},
            {"PrimaryContentSetup", 0x580, "StructProperty"},
        }};
    };

    struct FortExpeditionReturnsWidget
    {
        static constexpr std::string_view Name = "FortExpeditionReturnsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Item", 0x330, "WeakObjectProperty"},
        }};
    };

    struct FortExpeditionRewardsWidget
    {
        static constexpr std::string_view Name = "FortExpeditionRewardsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAllExpeditionsCollected = 0x330;
            static constexpr std::uintptr_t RewardsTileView = 0x340;
            static constexpr std::uintptr_t bPendingCollection = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnAllExpeditionsCollected", 0x330, "MulticastInlineDelegateProperty"},
            {"RewardsTileView", 0x340, "ObjectProperty"},
            {"bPendingCollection", 0x348, "BoolProperty"},
        }};
    };

    struct FortExpeditionSummaryWidget
    {
        static constexpr std::string_view Name = "FortExpeditionSummaryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailableExpeditions = 0x330;
            static constexpr std::uintptr_t CompletedExpeditions = 0x334;
            static constexpr std::uintptr_t LandVehiclesTotal = 0x338;
            static constexpr std::uintptr_t LandVehiclesAvailable = 0x33C;
            static constexpr std::uintptr_t AirVehiclesTotal = 0x340;
            static constexpr std::uintptr_t AirVehiclesAvailable = 0x344;
            static constexpr std::uintptr_t SeaVehiclesTotal = 0x348;
            static constexpr std::uintptr_t SeaVehiclesAvailable = 0x34C;
            static constexpr std::uintptr_t LandExpeditionsTotal = 0x350;
            static constexpr std::uintptr_t LandExpeditionsAvailable = 0x354;
            static constexpr std::uintptr_t AirExpeditionsTotal = 0x358;
            static constexpr std::uintptr_t AirExpeditionsAvailable = 0x35C;
            static constexpr std::uintptr_t SeaExpeditionsTotal = 0x360;
            static constexpr std::uintptr_t SeaExpeditionsAvailable = 0x364;
            static constexpr std::uintptr_t InProgressExpeditions = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AvailableExpeditions", 0x330, "IntProperty"},
            {"CompletedExpeditions", 0x334, "IntProperty"},
            {"LandVehiclesTotal", 0x338, "IntProperty"},
            {"LandVehiclesAvailable", 0x33C, "IntProperty"},
            {"AirVehiclesTotal", 0x340, "IntProperty"},
            {"AirVehiclesAvailable", 0x344, "IntProperty"},
            {"SeaVehiclesTotal", 0x348, "IntProperty"},
            {"SeaVehiclesAvailable", 0x34C, "IntProperty"},
            {"LandExpeditionsTotal", 0x350, "IntProperty"},
            {"LandExpeditionsAvailable", 0x354, "IntProperty"},
            {"AirExpeditionsTotal", 0x358, "IntProperty"},
            {"AirExpeditionsAvailable", 0x35C, "IntProperty"},
            {"SeaExpeditionsTotal", 0x360, "IntProperty"},
            {"SeaExpeditionsAvailable", 0x364, "IntProperty"},
            {"InProgressExpeditions", 0x368, "ArrayProperty"},
        }};
    };

    struct FortExpeditionUtilities
    {
        static constexpr std::string_view Name = "FortExpeditionUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortExpeditionVehicleTileItemWidget
    {
        static constexpr std::string_view Name = "FortExpeditionVehicleTileItemWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t SquadId = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SquadId", 0x1628, "WeakObjectProperty"},
        }};
    };

    struct FortFeatureUnlockWidget
    {
        static constexpr std::string_view Name = "FortFeatureUnlockWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaSwitcher = 0x580;
            static constexpr std::uintptr_t VideoContent = 0x588;
            static constexpr std::uintptr_t ImageContent = 0x590;
            static constexpr std::uintptr_t VideoWidget = 0x598;
            static constexpr std::uintptr_t ImageWidget = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MediaSwitcher", 0x580, "ObjectProperty"},
            {"VideoContent", 0x588, "ObjectProperty"},
            {"ImageContent", 0x590, "ObjectProperty"},
            {"VideoWidget", 0x598, "ObjectProperty"},
            {"ImageWidget", 0x5A0, "ObjectProperty"},
        }};
    };

    struct FortHBHUD
    {
        static constexpr std::string_view Name = "FortHBHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickerData = 0x4A0;
            static constexpr std::uintptr_t PersistentHUDScaleBox = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PickerData", 0x4A0, "ObjectProperty"},
            {"PersistentHUDScaleBox", 0x4B0, "ObjectProperty"},
        }};
    };

    struct FortHeroLoadoutGadgetPicker
    {
        static constexpr std::string_view Name = "FortHeroLoadoutGadgetPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPickerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLoadoutItem = 0x47C;
            static constexpr std::uintptr_t TargetSlotIndex = 0x484;
            static constexpr std::uintptr_t TemporaryGadgetItemInstances = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetLoadoutItem", 0x47C, "WeakObjectProperty"},
            {"TargetSlotIndex", 0x484, "IntProperty"},
            {"TemporaryGadgetItemInstances", 0x488, "ArrayProperty"},
        }};
    };

    struct FortHeroLoadoutGadgetTileBase
    {
        static constexpr std::string_view Name = "FortHeroLoadoutGadgetTileBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_GadgetName = 0x330;
            static constexpr std::uintptr_t Image_Icon = 0x338;
            static constexpr std::uintptr_t RichText_Description = 0x340;
            static constexpr std::uintptr_t GadgetToRepresent = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text_GadgetName", 0x330, "ObjectProperty"},
            {"Image_Icon", 0x338, "ObjectProperty"},
            {"RichText_Description", 0x340, "ObjectProperty"},
            {"GadgetToRepresent", 0x348, "ObjectProperty"},
        }};
    };

    struct FortHeroLoadoutHeroPicker
    {
        static constexpr std::string_view Name = "FortHeroLoadoutHeroPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPickerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalFilterTabList = 0x480;
            static constexpr std::uintptr_t ExternalSubFilterTabList = 0x488;
            static constexpr std::uintptr_t TargetLoadoutItem = 0x490;
            static constexpr std::uintptr_t TargetSlotName = 0x498;
            static constexpr std::uintptr_t FilterTabButtonType = 0x4A0;
            static constexpr std::uintptr_t TabButtonLabelInfoMap = 0x4A8;
            static constexpr std::uintptr_t AbilitiesLabelInfoMap = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ExternalFilterTabList", 0x480, "ObjectProperty"},
            {"ExternalSubFilterTabList", 0x488, "ObjectProperty"},
            {"TargetLoadoutItem", 0x490, "WeakObjectProperty"},
            {"TargetSlotName", 0x498, "NameProperty"},
            {"FilterTabButtonType", 0x4A0, "ClassProperty"},
            {"TabButtonLabelInfoMap", 0x4A8, "MapProperty"},
            {"AbilitiesLabelInfoMap", 0x4B8, "MapProperty"},
        }};
    };

    struct FortHeroLoadoutHeroPickerFunctionLibrary
    {
        static constexpr std::string_view Name = "FortHeroLoadoutHeroPickerFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortHeroLoadoutInGameScreenBase
    {
        static constexpr std::string_view Name = "FortHeroLoadoutInGameScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t PerksDisplayData = 0x560;
            static constexpr std::uintptr_t TileClass = 0x570;
            static constexpr std::uintptr_t ScrollBox_Content = 0x578;
            static constexpr std::uintptr_t ItemDetailsHostPanel_Header = 0x580;
            static constexpr std::uintptr_t GridPanel_Perks = 0x588;
            static constexpr std::uintptr_t GadgetTile_Gadget1 = 0x590;
            static constexpr std::uintptr_t GadgetTile_Gadget2 = 0x598;
            static constexpr std::uintptr_t GadgetTiles = 0x5A0;
            static constexpr std::uintptr_t ShowStatsInputHandle = 0x5B0;
            static constexpr std::uintptr_t BackInputHandle = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PerksDisplayData", 0x560, "ArrayProperty"},
            {"TileClass", 0x570, "ClassProperty"},
            {"ScrollBox_Content", 0x578, "ObjectProperty"},
            {"ItemDetailsHostPanel_Header", 0x580, "ObjectProperty"},
            {"GridPanel_Perks", 0x588, "ObjectProperty"},
            {"GadgetTile_Gadget1", 0x590, "ObjectProperty"},
            {"GadgetTile_Gadget2", 0x598, "ObjectProperty"},
            {"GadgetTiles", 0x5A0, "ArrayProperty"},
            {"ShowStatsInputHandle", 0x5B0, "StructProperty"},
            {"BackInputHandle", 0x5C0, "StructProperty"},
        }};
    };

    struct FortHeroLoadoutPerkTileBase
    {
        static constexpr std::string_view Name = "FortHeroLoadoutPerkTileBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushSize = 0x330;
            static constexpr std::uintptr_t bShowSummaryDescription = 0x331;
            static constexpr std::uintptr_t Text_PerkName = 0x338;
            static constexpr std::uintptr_t Text_Description = 0x340;
            static constexpr std::uintptr_t Image_PerkIcon = 0x348;
            static constexpr std::uintptr_t Hbox_PerkDetails = 0x350;
            static constexpr std::uintptr_t ActiveText = 0x358;
            static constexpr std::uintptr_t InactiveText = 0x368;
            static constexpr std::uintptr_t InactiveOpacity = 0x378;
            static constexpr std::uintptr_t ActiveOpacity = 0x37C;
            static constexpr std::uintptr_t AbilityKit = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BrushSize", 0x330, "ByteProperty"},
            {"bShowSummaryDescription", 0x331, "BoolProperty"},
            {"Text_PerkName", 0x338, "ObjectProperty"},
            {"Text_Description", 0x340, "ObjectProperty"},
            {"Image_PerkIcon", 0x348, "ObjectProperty"},
            {"Hbox_PerkDetails", 0x350, "ObjectProperty"},
            {"ActiveText", 0x358, "TextProperty"},
            {"InactiveText", 0x368, "TextProperty"},
            {"InactiveOpacity", 0x378, "FloatProperty"},
            {"ActiveOpacity", 0x37C, "FloatProperty"},
            {"AbilityKit", 0x380, "ObjectProperty"},
        }};
    };

    struct FortHeroLoadoutScreenBase
    {
        static constexpr std::string_view Name = "FortHeroLoadoutScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemViewObject = 0x4B8;
            static constexpr std::uintptr_t BackInputAction = 0x4C0;
            static constexpr std::uintptr_t HelpInputAction = 0x4D0;
            static constexpr std::uintptr_t CancelInputAction = 0x4E0;
            static constexpr std::uintptr_t ToggleDetailInputAction = 0x4F0;
            static constexpr std::uintptr_t ClearAllInputAction = 0x500;
            static constexpr std::uintptr_t ShowAllStatsInputAction = 0x510;
            static constexpr std::uintptr_t InspectRootSlotsInputAction = 0x520;
            static constexpr std::uintptr_t CyclePickerSortModeInputAction = 0x530;
            static constexpr std::uintptr_t InspectPickerInputAction = 0x540;
            static constexpr std::uintptr_t ToggleDescInputAction = 0x550;
            static constexpr std::uintptr_t AllowItemRotation = 0x5C0;
            static constexpr std::uintptr_t AllowItemZooming = 0x5C1;
            static constexpr std::uintptr_t AutomaticallyRegisterCameraView = 0x5C2;
            static constexpr std::uintptr_t OverrideFixedCameras = 0x5C3;
            static constexpr std::uintptr_t ActionDataTable = 0x5C8;
            static constexpr std::uintptr_t AnimationToHideItemInfo = 0x5D0;
            static constexpr std::uintptr_t bAutoShowDetails = 0x5D8;
            static constexpr std::uintptr_t bItemDetailsHidden = 0x5D9;
            static constexpr std::uintptr_t HideItemInfoHeaderDurationSecs = 0x5DC;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ItemViewObject", 0x4B8, "ObjectProperty"},
            {"BackInputAction", 0x4C0, "StructProperty"},
            {"HelpInputAction", 0x4D0, "StructProperty"},
            {"CancelInputAction", 0x4E0, "StructProperty"},
            {"ToggleDetailInputAction", 0x4F0, "StructProperty"},
            {"ClearAllInputAction", 0x500, "StructProperty"},
            {"ShowAllStatsInputAction", 0x510, "StructProperty"},
            {"InspectRootSlotsInputAction", 0x520, "StructProperty"},
            {"CyclePickerSortModeInputAction", 0x530, "StructProperty"},
            {"InspectPickerInputAction", 0x540, "StructProperty"},
            {"ToggleDescInputAction", 0x550, "StructProperty"},
            {"AllowItemRotation", 0x5C0, "BoolProperty"},
            {"AllowItemZooming", 0x5C1, "BoolProperty"},
            {"AutomaticallyRegisterCameraView", 0x5C2, "BoolProperty"},
            {"OverrideFixedCameras", 0x5C3, "BoolProperty"},
            {"ActionDataTable", 0x5C8, "ObjectProperty"},
            {"AnimationToHideItemInfo", 0x5D0, "ObjectProperty"},
            {"bAutoShowDetails", 0x5D8, "BoolProperty"},
            {"bItemDetailsHidden", 0x5D9, "BoolProperty"},
            {"HideItemInfoHeaderDurationSecs", 0x5DC, "FloatProperty"},
        }};
    };

    struct FortHeroLoadoutSlotButton
    {
        static constexpr std::string_view Name = "FortHeroLoadoutSlotButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotName = 0x1620;
            static constexpr std::uintptr_t SlotIndex = 0x1624;
            static constexpr std::uintptr_t SlotType = 0x1628;
            static constexpr std::uintptr_t OnRequestChangeHero = 0x1630;
            static constexpr std::uintptr_t OnContextMenuOpenChanged = 0x1640;
            static constexpr std::uintptr_t ContextMenuAnchor = 0x1650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SlotName", 0x1620, "NameProperty"},
            {"SlotIndex", 0x1624, "IntProperty"},
            {"SlotType", 0x1628, "EnumProperty"},
            {"OnRequestChangeHero", 0x1630, "MulticastInlineDelegateProperty"},
            {"OnContextMenuOpenChanged", 0x1640, "MulticastInlineDelegateProperty"},
            {"ContextMenuAnchor", 0x1650, "ObjectProperty"},
        }};
    };

    struct FortHeroLoadoutTeamPerkPicker
    {
        static constexpr std::string_view Name = "FortHeroLoadoutTeamPerkPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPickerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLoadoutItem = 0x47C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetLoadoutItem", 0x47C, "WeakObjectProperty"},
        }};
    };

    struct FortHomebaseNodeItemTooltip
    {
        static constexpr std::string_view Name = "FortHomebaseNodeItemTooltip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTooltip";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "TextProperty"},
        }};
    };

    struct FortIronCityContentScreen
    {
        static constexpr std::string_view Name = "FortIronCityContentScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOutpostSubscreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BackActionInputRowHandle = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackActionInputRowHandle", 0x4A0, "StructProperty"},
        }};
    };

    struct FortItemAutoMulchActivatablePanel_STW
    {
        static constexpr std::string_view Name = "FortItemAutoMulchActivatablePanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct FortItemCardSTW
    {
        static constexpr std::string_view Name = "FortItemCardSTW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SizeConstraintBox = 0x338;
            static constexpr std::uintptr_t CardBackground = 0x340;
            static constexpr std::uintptr_t LayoutSwitcher = 0x348;
            static constexpr std::uintptr_t GenericLayout = 0x350;
            static constexpr std::uintptr_t DetailedLayout = 0x358;
            static constexpr std::uintptr_t ItemName = 0x360;
            static constexpr std::uintptr_t TypeNameText = 0x368;
            static constexpr std::uintptr_t RarityText = 0x370;
            static constexpr std::uintptr_t QuantityTextBlock = 0x378;
            static constexpr std::uintptr_t ClassIconRow = 0x380;
            static constexpr std::uintptr_t ClassIcon = 0x388;
            static constexpr std::uintptr_t ClassIconGeneric = 0x390;
            static constexpr std::uintptr_t Nameplate = 0x398;
            static constexpr std::uintptr_t NameplateContentSwitcher = 0x3A0;
            static constexpr std::uintptr_t NameplateIconBox = 0x3A8;
            static constexpr std::uintptr_t NameplateLeftIcon = 0x3B0;
            static constexpr std::uintptr_t NameplateRightSlotBox = 0x3B8;
            static constexpr std::uintptr_t NameplateRightIconA = 0x3C0;
            static constexpr std::uintptr_t NameplateRightIconB = 0x3C8;
            static constexpr std::uintptr_t Details = 0x3D0;
            static constexpr std::uintptr_t DetailsSizeBox = 0x3D8;
            static constexpr std::uintptr_t TierMeterBox = 0x3E0;
            static constexpr std::uintptr_t TierMeterBoxGeneric = 0x3E8;
            static constexpr std::uintptr_t LevelMeterBox = 0x3F0;
            static constexpr std::uintptr_t LevelMeterBorder = 0x3F8;
            static constexpr std::uintptr_t LevelMeterImage = 0x400;
            static constexpr std::uintptr_t PowerRatingPill = 0x408;
            static constexpr std::uintptr_t PowerRatingText = 0x410;
            static constexpr std::uintptr_t SchematicSubtypeIcon = 0x418;
            static constexpr std::uintptr_t TraitBox = 0x420;
            static constexpr std::uintptr_t FavoriteBookmarkImage = 0x428;
            static constexpr std::uintptr_t ItemToRepresent = 0x430;
            static constexpr std::uintptr_t ItemViewContext = 0x438;
            static constexpr std::uintptr_t QuantityOverride = 0x448;
            static constexpr std::uintptr_t RarityOverride = 0x44C;
            static constexpr std::uintptr_t bShouldDisplayItemAsReward = 0x44D;
            static constexpr std::uintptr_t CardSize = 0x44E;
            static constexpr std::uintptr_t CardSizeData = 0x450;
            static constexpr std::uintptr_t PromotedTierPipMaterial = 0x460;
            static constexpr std::uintptr_t EarnedTierPipMaterial = 0x480;
            static constexpr std::uintptr_t AvailableTierPipMaterial = 0x4A0;
            static constexpr std::uintptr_t UnearnedTierPipMaterial = 0x4C0;
            static constexpr std::uintptr_t LevelMeterMaterial = 0x4E0;
            static constexpr std::uintptr_t TraitIconMaterial = 0x500;
            static constexpr std::uintptr_t LeadSurvivorIconBrush = 0x520;
            static constexpr std::uintptr_t DefenderClassIconBrush = 0x540;
            static constexpr std::uintptr_t SurvivorClassIconBrush = 0x560;
            static constexpr std::uintptr_t TrapClassIconBrush = 0x580;
            static constexpr std::uintptr_t FavoriteBookmarkBrush = 0x5A0;
            static constexpr std::uintptr_t DefenderWeaponTextures = 0x5C0;
            static constexpr std::uintptr_t LoadingCardTexture = 0x5D0;
            static constexpr std::uintptr_t FaceSliceImageSize = 0x5F0;
            static constexpr std::uintptr_t FaceSliceMargin = 0x600;
            static constexpr std::uintptr_t ImageReplacesBackgroundItemTypes = 0x610;
            static constexpr std::uintptr_t ItemTypesToHideCountOfOne = 0x620;
            static constexpr std::uintptr_t NameplateAlphaOverride = 0x630;
            static constexpr std::uintptr_t CardMID = 0x638;
            static constexpr std::uintptr_t TierPipImages = 0x640;
            static constexpr std::uintptr_t TierPipImagesGeneric = 0x650;
            static constexpr std::uintptr_t LeftIconSlotMID = 0x660;
            static constexpr std::uintptr_t RightIconASlotMID = 0x668;
            static constexpr std::uintptr_t RightIconBSlotMID = 0x670;
            static constexpr std::uintptr_t LevelMeterMID = 0x678;
            static constexpr std::uintptr_t DetailAreaMID = 0x680;
        };

        inline static constexpr std::array<PropertyInfo, 64> Properties{{
            {"SizeConstraintBox", 0x338, "ObjectProperty"},
            {"CardBackground", 0x340, "ObjectProperty"},
            {"LayoutSwitcher", 0x348, "ObjectProperty"},
            {"GenericLayout", 0x350, "ObjectProperty"},
            {"DetailedLayout", 0x358, "ObjectProperty"},
            {"ItemName", 0x360, "ObjectProperty"},
            {"TypeNameText", 0x368, "ObjectProperty"},
            {"RarityText", 0x370, "ObjectProperty"},
            {"QuantityTextBlock", 0x378, "ObjectProperty"},
            {"ClassIconRow", 0x380, "ObjectProperty"},
            {"ClassIcon", 0x388, "ObjectProperty"},
            {"ClassIconGeneric", 0x390, "ObjectProperty"},
            {"Nameplate", 0x398, "ObjectProperty"},
            {"NameplateContentSwitcher", 0x3A0, "ObjectProperty"},
            {"NameplateIconBox", 0x3A8, "ObjectProperty"},
            {"NameplateLeftIcon", 0x3B0, "ObjectProperty"},
            {"NameplateRightSlotBox", 0x3B8, "ObjectProperty"},
            {"NameplateRightIconA", 0x3C0, "ObjectProperty"},
            {"NameplateRightIconB", 0x3C8, "ObjectProperty"},
            {"Details", 0x3D0, "ObjectProperty"},
            {"DetailsSizeBox", 0x3D8, "ObjectProperty"},
            {"TierMeterBox", 0x3E0, "ObjectProperty"},
            {"TierMeterBoxGeneric", 0x3E8, "ObjectProperty"},
            {"LevelMeterBox", 0x3F0, "ObjectProperty"},
            {"LevelMeterBorder", 0x3F8, "ObjectProperty"},
            {"LevelMeterImage", 0x400, "ObjectProperty"},
            {"PowerRatingPill", 0x408, "ObjectProperty"},
            {"PowerRatingText", 0x410, "ObjectProperty"},
            {"SchematicSubtypeIcon", 0x418, "ObjectProperty"},
            {"TraitBox", 0x420, "ObjectProperty"},
            {"FavoriteBookmarkImage", 0x428, "ObjectProperty"},
            {"ItemToRepresent", 0x430, "ObjectProperty"},
            {"ItemViewContext", 0x438, "InterfaceProperty"},
            {"QuantityOverride", 0x448, "IntProperty"},
            {"RarityOverride", 0x44C, "EnumProperty"},
            {"bShouldDisplayItemAsReward", 0x44D, "BoolProperty"},
            {"CardSize", 0x44E, "EnumProperty"},
            {"CardSizeData", 0x450, "MapProperty"},
            {"PromotedTierPipMaterial", 0x460, "SoftObjectProperty"},
            {"EarnedTierPipMaterial", 0x480, "SoftObjectProperty"},
            {"AvailableTierPipMaterial", 0x4A0, "SoftObjectProperty"},
            {"UnearnedTierPipMaterial", 0x4C0, "SoftObjectProperty"},
            {"LevelMeterMaterial", 0x4E0, "SoftObjectProperty"},
            {"TraitIconMaterial", 0x500, "SoftObjectProperty"},
            {"LeadSurvivorIconBrush", 0x520, "SoftObjectProperty"},
            {"DefenderClassIconBrush", 0x540, "SoftObjectProperty"},
            {"SurvivorClassIconBrush", 0x560, "SoftObjectProperty"},
            {"TrapClassIconBrush", 0x580, "SoftObjectProperty"},
            {"FavoriteBookmarkBrush", 0x5A0, "SoftObjectProperty"},
            {"DefenderWeaponTextures", 0x5C0, "MapProperty"},
            {"LoadingCardTexture", 0x5D0, "SoftObjectProperty"},
            {"FaceSliceImageSize", 0x5F0, "StructProperty"},
            {"FaceSliceMargin", 0x600, "StructProperty"},
            {"ImageReplacesBackgroundItemTypes", 0x610, "ArrayProperty"},
            {"ItemTypesToHideCountOfOne", 0x620, "ArrayProperty"},
            {"NameplateAlphaOverride", 0x630, "FloatProperty"},
            {"CardMID", 0x638, "ObjectProperty"},
            {"TierPipImages", 0x640, "ArrayProperty"},
            {"TierPipImagesGeneric", 0x650, "ArrayProperty"},
            {"LeftIconSlotMID", 0x660, "ObjectProperty"},
            {"RightIconASlotMID", 0x668, "ObjectProperty"},
            {"RightIconBSlotMID", 0x670, "ObjectProperty"},
            {"LevelMeterMID", 0x678, "ObjectProperty"},
            {"DetailAreaMID", 0x680, "ObjectProperty"},
        }};
    };

    struct FortItemCompareModeActivatablePanel_STW
    {
        static constexpr std::string_view Name = "FortItemCompareModeActivatablePanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDetailsActivatablePanel_STW";
        struct Offsets
        {
            static constexpr std::uintptr_t ComparisonModeLeftItemDetailsPanel_STW = 0x508;
            static constexpr std::uintptr_t ComparisonModeRightItemDetailsPanel_STW = 0x510;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComparisonModeLeftItemDetailsPanel_STW", 0x508, "ObjectProperty"},
            {"ComparisonModeRightItemDetailsPanel_STW", 0x510, "ObjectProperty"},
        }};
    };

    struct FortItemCraftingOptionsActivatablePanel_STW
    {
        static constexpr std::string_view Name = "FortItemCraftingOptionsActivatablePanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseItem = 0x4A0;
            static constexpr std::uintptr_t TargetItem = 0x4A8;
            static constexpr std::uintptr_t MaxCraftingTierIndex = 0x4B0;
            static constexpr std::uintptr_t TargetCraftingTierIndex = 0x4B4;
            static constexpr std::uintptr_t TargetPromotionTierIndex = 0x4B8;
            static constexpr std::uintptr_t MaxQuantity = 0x4BC;
            static constexpr std::uintptr_t SelectedQuantity = 0x4C0;
            static constexpr std::uintptr_t CanCraftTargetItem = 0x4C4;
            static constexpr std::uintptr_t TierImageParent = 0x4C8;
            static constexpr std::uintptr_t TierImage = 0x4F0;
            static constexpr std::uintptr_t BackInputActionRowHandle = 0x518;
            static constexpr std::uintptr_t TierImageParentList = 0x530;
            static constexpr std::uintptr_t TierImageList = 0x540;
            static constexpr std::uintptr_t LoadedTierPipAssets = 0x558;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"BaseItem", 0x4A0, "ObjectProperty"},
            {"TargetItem", 0x4A8, "ObjectProperty"},
            {"MaxCraftingTierIndex", 0x4B0, "IntProperty"},
            {"TargetCraftingTierIndex", 0x4B4, "IntProperty"},
            {"TargetPromotionTierIndex", 0x4B8, "IntProperty"},
            {"MaxQuantity", 0x4BC, "IntProperty"},
            {"SelectedQuantity", 0x4C0, "IntProperty"},
            {"CanCraftTargetItem", 0x4C4, "BoolProperty"},
            {"TierImageParent", 0x4C8, "ObjectProperty"},
            {"TierImage", 0x4F0, "ObjectProperty"},
            {"BackInputActionRowHandle", 0x518, "StructProperty"},
            {"TierImageParentList", 0x530, "ArrayProperty"},
            {"TierImageList", 0x540, "ArrayProperty"},
            {"LoadedTierPipAssets", 0x558, "ArrayProperty"},
        }};
    };

    struct FortItemDetailsActivatablePanel_STW
    {
        static constexpr std::string_view Name = "FortItemDetailsActivatablePanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemToDetailLoadGuard = 0x4A0;
            static constexpr std::uintptr_t ItemToDetailLoadingWrapper = 0x4B0;
            static constexpr std::uintptr_t BackInputActionHandle = 0x4D0;
            static constexpr std::uintptr_t ItemToDetail = 0x4E0;
            static constexpr std::uintptr_t ItemToCompareWith = 0x4E8;
            static constexpr std::uintptr_t HostItemManagementScreen = 0x4F0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemToDetailLoadGuard", 0x4A0, "ObjectProperty"},
            {"ItemToDetailLoadingWrapper", 0x4B0, "ObjectProperty"},
            {"BackInputActionHandle", 0x4D0, "StructProperty"},
            {"ItemToDetail", 0x4E0, "WeakObjectProperty"},
            {"ItemToCompareWith", 0x4E8, "WeakObjectProperty"},
            {"HostItemManagementScreen", 0x4F0, "WeakObjectProperty"},
        }};
    };

    struct FortItemDetailsModeActivatablePanel_STW
    {
        static constexpr std::string_view Name = "FortItemDetailsModeActivatablePanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDetailsActivatablePanel_STW";
        struct Offsets
        {
            static constexpr std::uintptr_t DetailPanelWidgetSwitcher = 0x508;
            static constexpr std::uintptr_t SortInputActionHandle = 0x510;
            static constexpr std::uintptr_t SortInGameInputActionHandle = 0x520;
            static constexpr std::uintptr_t DropInputActionHandle = 0x530;
            static constexpr std::uintptr_t DestroyInputActionHandle = 0x540;
            static constexpr std::uintptr_t LeaveInventoryInputActionHandle = 0x550;
            static constexpr std::uintptr_t CraftingOptionsInputActionHandle = 0x560;
            static constexpr std::uintptr_t CraftInputActionHandle = 0x570;
            static constexpr std::uintptr_t MulchInputActionHandle = 0x580;
            static constexpr std::uintptr_t RetireInputActionHandle = 0x590;
            static constexpr std::uintptr_t InspectInputActionHandle = 0x5A0;
            static constexpr std::uintptr_t InventoryInspectInputActionHandle = 0x5B0;
            static constexpr std::uintptr_t UnequipInputActionHandle = 0x5C0;
            static constexpr std::uintptr_t EquipInputActionHandle = 0x5D0;
            static constexpr std::uintptr_t MoreInfoInputActionHandle = 0x5E0;
            static constexpr std::uintptr_t WithdrawAllInputActionHandle = 0x5F0;
            static constexpr std::uintptr_t SwitchPanelInputActionHandle = 0x600;
            static constexpr std::uintptr_t TransferInputActionHandle = 0x610;
            static constexpr std::uintptr_t ConsumeItemInputActionHandle = 0x620;
            static constexpr std::uintptr_t CompareInputActionHandle = 0x630;
            static constexpr std::uintptr_t OpenCustomFilterInputActionHandle = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"DetailPanelWidgetSwitcher", 0x508, "ObjectProperty"},
            {"SortInputActionHandle", 0x510, "StructProperty"},
            {"SortInGameInputActionHandle", 0x520, "StructProperty"},
            {"DropInputActionHandle", 0x530, "StructProperty"},
            {"DestroyInputActionHandle", 0x540, "StructProperty"},
            {"LeaveInventoryInputActionHandle", 0x550, "StructProperty"},
            {"CraftingOptionsInputActionHandle", 0x560, "StructProperty"},
            {"CraftInputActionHandle", 0x570, "StructProperty"},
            {"MulchInputActionHandle", 0x580, "StructProperty"},
            {"RetireInputActionHandle", 0x590, "StructProperty"},
            {"InspectInputActionHandle", 0x5A0, "StructProperty"},
            {"InventoryInspectInputActionHandle", 0x5B0, "StructProperty"},
            {"UnequipInputActionHandle", 0x5C0, "StructProperty"},
            {"EquipInputActionHandle", 0x5D0, "StructProperty"},
            {"MoreInfoInputActionHandle", 0x5E0, "StructProperty"},
            {"WithdrawAllInputActionHandle", 0x5F0, "StructProperty"},
            {"SwitchPanelInputActionHandle", 0x600, "StructProperty"},
            {"TransferInputActionHandle", 0x610, "StructProperty"},
            {"ConsumeItemInputActionHandle", 0x620, "StructProperty"},
            {"CompareInputActionHandle", 0x630, "StructProperty"},
            {"OpenCustomFilterInputActionHandle", 0x640, "StructProperty"},
        }};
    };

    struct FortItemInspectCycleWidget
    {
        static constexpr std::string_view Name = "FortItemInspectCycleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemToRepresentChanged = 0x330;
            static constexpr std::uintptr_t ItemTileView = 0x340;
            static constexpr std::uintptr_t ItemToRepresent = 0x348;
            static constexpr std::uintptr_t PreviousItemActionRowHandle = 0x350;
            static constexpr std::uintptr_t NextItemActionRowHandle = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnItemToRepresentChanged", 0x330, "MulticastInlineDelegateProperty"},
            {"ItemTileView", 0x340, "WeakObjectProperty"},
            {"ItemToRepresent", 0x348, "WeakObjectProperty"},
            {"PreviousItemActionRowHandle", 0x350, "StructProperty"},
            {"NextItemActionRowHandle", 0x360, "StructProperty"},
        }};
    };

    struct FortItemInspectionScreen
    {
        static constexpr std::string_view Name = "FortItemInspectionScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanelWithItemPreview";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentInspectMode = 0x698;
            static constexpr std::uintptr_t InspectedItem = 0x69C;
            static constexpr std::uintptr_t UpgradeAllowed = 0x6A4;
            static constexpr std::uintptr_t EvolveAllowed = 0x6A5;
            static constexpr std::uintptr_t FavoriteAllowed = 0x6A6;
            static constexpr std::uintptr_t RarityUpgradingAllowed = 0x6A7;
            static constexpr std::uintptr_t IsPreviewing = 0x6A8;
            static constexpr std::uintptr_t bHasSeenRefundHelpPrompt = 0x6A9;
            static constexpr std::uintptr_t CycleWidget = 0x6B0;
            static constexpr std::uintptr_t InspectAnimationTag = 0x6B8;
            static constexpr std::uintptr_t AlterationModOptinScreenClass = 0x700;
            static constexpr std::uintptr_t AlterationModScreenClass = 0x708;
            static constexpr std::uintptr_t RefundDescriptionsDataTable = 0x710;
            static constexpr std::uintptr_t ScrollBoxDetails = 0x730;
            static constexpr std::uintptr_t CachedTutorialNameUpdate = 0x79C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"CurrentInspectMode", 0x698, "EnumProperty"},
            {"InspectedItem", 0x69C, "WeakObjectProperty"},
            {"UpgradeAllowed", 0x6A4, "BoolProperty"},
            {"EvolveAllowed", 0x6A5, "BoolProperty"},
            {"FavoriteAllowed", 0x6A6, "BoolProperty"},
            {"RarityUpgradingAllowed", 0x6A7, "BoolProperty"},
            {"IsPreviewing", 0x6A8, "BoolProperty"},
            {"bHasSeenRefundHelpPrompt", 0x6A9, "BoolProperty"},
            {"CycleWidget", 0x6B0, "ObjectProperty"},
            {"InspectAnimationTag", 0x6B8, "StructProperty"},
            {"AlterationModOptinScreenClass", 0x700, "ClassProperty"},
            {"AlterationModScreenClass", 0x708, "ClassProperty"},
            {"RefundDescriptionsDataTable", 0x710, "SoftObjectProperty"},
            {"ScrollBoxDetails", 0x730, "ObjectProperty"},
            {"CachedTutorialNameUpdate", 0x79C, "NameProperty"},
        }};
    };

    struct FortItemManagementCustomFilterModalWidget_STW
    {
        static constexpr std::string_view Name = "FortItemManagementCustomFilterModalWidget_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t HostItemManagementScreen = 0x580;
            static constexpr std::uintptr_t AvailableFilters = 0x588;
            static constexpr std::uintptr_t LocalCustomFilterSet = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HostItemManagementScreen", 0x580, "WeakObjectProperty"},
            {"AvailableFilters", 0x588, "ArrayProperty"},
            {"LocalCustomFilterSet", 0x598, "SetProperty"},
        }};
    };

    struct FortItemManagementInventoryPanel_STW
    {
        static constexpr std::string_view Name = "FortItemManagementInventoryPanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentFilterName = 0x4A0;
            static constexpr std::uintptr_t CurrentSortType = 0x4A5;
            static constexpr std::uintptr_t FilterTabButtonType = 0x4A8;
            static constexpr std::uintptr_t FilterTabButtonStyle = 0x4B0;
            static constexpr std::uintptr_t FilterTabLabelInfoArray = 0x4B8;
            static constexpr std::uintptr_t FilterTabList = 0x4C8;
            static constexpr std::uintptr_t TileViewLoadGuard = 0x4D0;
            static constexpr std::uintptr_t TileView = 0x4D8;
            static constexpr std::uintptr_t CraftingPanel = 0x4E0;
            static constexpr std::uintptr_t CraftingTileViewLoadGuard = 0x4E8;
            static constexpr std::uintptr_t CraftingTileView = 0x4F0;
            static constexpr std::uintptr_t StoragePanel = 0x4F8;
            static constexpr std::uintptr_t StorageTileViewLoadGuard = 0x500;
            static constexpr std::uintptr_t StorageTileView = 0x508;
            static constexpr std::uintptr_t MulchRestrictionReasonText = 0x510;
            static constexpr std::uintptr_t SmallTileSize = 0x518;
            static constexpr std::uintptr_t LargeTileSize = 0x519;
            static constexpr std::uintptr_t HostItemManagementScreen = 0x51C;
            static constexpr std::uintptr_t bCanDragItems = 0x524;
            static constexpr std::uintptr_t DefaultQuickbarEquipSlotIndicesConfigs = 0x528;
            static constexpr std::uintptr_t QuickbarEquipSlotIndices = 0x538;
            static constexpr std::uintptr_t InventoryContext = 0x5E8;
            static constexpr std::uintptr_t WidgetToCenter = 0x5F0;
            static constexpr std::uintptr_t bFirstActivation = 0x5F8;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"CurrentFilterName", 0x4A0, "NameProperty"},
            {"CurrentSortType", 0x4A5, "EnumProperty"},
            {"FilterTabButtonType", 0x4A8, "ClassProperty"},
            {"FilterTabButtonStyle", 0x4B0, "ClassProperty"},
            {"FilterTabLabelInfoArray", 0x4B8, "ArrayProperty"},
            {"FilterTabList", 0x4C8, "ObjectProperty"},
            {"TileViewLoadGuard", 0x4D0, "ObjectProperty"},
            {"TileView", 0x4D8, "ObjectProperty"},
            {"CraftingPanel", 0x4E0, "ObjectProperty"},
            {"CraftingTileViewLoadGuard", 0x4E8, "ObjectProperty"},
            {"CraftingTileView", 0x4F0, "ObjectProperty"},
            {"StoragePanel", 0x4F8, "ObjectProperty"},
            {"StorageTileViewLoadGuard", 0x500, "ObjectProperty"},
            {"StorageTileView", 0x508, "ObjectProperty"},
            {"MulchRestrictionReasonText", 0x510, "ObjectProperty"},
            {"SmallTileSize", 0x518, "EnumProperty"},
            {"LargeTileSize", 0x519, "EnumProperty"},
            {"HostItemManagementScreen", 0x51C, "WeakObjectProperty"},
            {"bCanDragItems", 0x524, "BoolProperty"},
            {"DefaultQuickbarEquipSlotIndicesConfigs", 0x528, "ArrayProperty"},
            {"QuickbarEquipSlotIndices", 0x538, "MapProperty"},
            {"InventoryContext", 0x5E8, "ObjectProperty"},
            {"WidgetToCenter", 0x5F0, "ObjectProperty"},
            {"bFirstActivation", 0x5F8, "BoolProperty"},
        }};
    };

    struct FortItemManagementItemDetailsPanel_STW
    {
        static constexpr std::string_view Name = "FortItemManagementItemDetailsPanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDetailsHostPanel";
        struct Offsets
        {
            static constexpr std::uintptr_t HasItemMarkedForMulching = 0x418;
            static constexpr std::uintptr_t HostItemManagementScreen = 0x41C;
            static constexpr std::uintptr_t InventoryContext = 0x430;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HasItemMarkedForMulching", 0x418, "BoolProperty"},
            {"HostItemManagementScreen", 0x41C, "WeakObjectProperty"},
            {"InventoryContext", 0x430, "ObjectProperty"},
        }};
    };

    struct FortItemManagementItemPopupMenu_STW
    {
        static constexpr std::string_view Name = "FortItemManagementItemPopupMenu_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPopupMenu_Legacy";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInputStack = 0x560;
            static constexpr std::uintptr_t OwningMenuAnchor = 0x564;
            static constexpr std::uintptr_t ContextProvidingObject = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseInputStack", 0x560, "BoolProperty"},
            {"OwningMenuAnchor", 0x564, "WeakObjectProperty"},
            {"ContextProvidingObject", 0x56C, "WeakObjectProperty"},
        }};
    };

    struct FortItemManagementItemTileButton_STW
    {
        static constexpr std::string_view Name = "FortItemManagementItemTileButton_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTileButton";
        struct Offsets
        {
            static constexpr std::uintptr_t HostItemManagementScreen = 0x1660;
            static constexpr std::uintptr_t HasTheItemToDetail = 0x1668;
            static constexpr std::uintptr_t HasTheItemToCompareDetailsWith = 0x1669;
            static constexpr std::uintptr_t HasAnItemMarkedForMulching = 0x166A;
            static constexpr std::uintptr_t MulchCount = 0x166C;
            static constexpr std::uintptr_t NotCraftableOverlay = 0x1670;
            static constexpr std::uintptr_t EquipSlotOverlay = 0x1678;
            static constexpr std::uintptr_t PopupMenuAnchor = 0x1680;
            static constexpr std::uintptr_t ShowCollectionBookIndicator = 0x1688;
            static constexpr std::uintptr_t ShowRefundIndicator = 0x1689;
            static constexpr std::uintptr_t InventoryContext = 0x16D0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"HostItemManagementScreen", 0x1660, "WeakObjectProperty"},
            {"HasTheItemToDetail", 0x1668, "BoolProperty"},
            {"HasTheItemToCompareDetailsWith", 0x1669, "BoolProperty"},
            {"HasAnItemMarkedForMulching", 0x166A, "BoolProperty"},
            {"MulchCount", 0x166C, "IntProperty"},
            {"NotCraftableOverlay", 0x1670, "ObjectProperty"},
            {"EquipSlotOverlay", 0x1678, "ObjectProperty"},
            {"PopupMenuAnchor", 0x1680, "ObjectProperty"},
            {"ShowCollectionBookIndicator", 0x1688, "BoolProperty"},
            {"ShowRefundIndicator", 0x1689, "BoolProperty"},
            {"InventoryContext", 0x16D0, "ObjectProperty"},
        }};
    };

    struct FortItemManagementModeDetailsPanel_STW
    {
        static constexpr std::string_view Name = "FortItemManagementModeDetailsPanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ModeWidgetSwitcher = 0x330;
            static constexpr std::uintptr_t DetailsModeItemDetailsPanel = 0x338;
            static constexpr std::uintptr_t ComparisonModeItemDetailsPanel = 0x340;
            static constexpr std::uintptr_t MulchModeItemDetailsPanel = 0x348;
            static constexpr std::uintptr_t HostItemManagementScreen = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ModeWidgetSwitcher", 0x330, "ObjectProperty"},
            {"DetailsModeItemDetailsPanel", 0x338, "ObjectProperty"},
            {"ComparisonModeItemDetailsPanel", 0x340, "ObjectProperty"},
            {"MulchModeItemDetailsPanel", 0x348, "ObjectProperty"},
            {"HostItemManagementScreen", 0x350, "WeakObjectProperty"},
        }};
    };

    struct FortItemManagementMulchDetailsPanel_STW
    {
        static constexpr std::string_view Name = "FortItemManagementMulchDetailsPanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceList = 0x330;
            static constexpr std::uintptr_t HostItemManagementMulchPanel = 0x338;
            static constexpr std::uintptr_t InventoryContext = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceList", 0x330, "ObjectProperty"},
            {"HostItemManagementMulchPanel", 0x338, "InterfaceProperty"},
            {"InventoryContext", 0x350, "ObjectProperty"},
        }};
    };

    struct FortItemManagementScreen_STW
    {
        static constexpr std::string_view Name = "FortItemManagementScreen_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemViewRefreshed = 0x4B8;
            static constexpr std::uintptr_t Mode = 0x588;
            static constexpr std::uintptr_t FrontendInventoryFilter = 0x589;
            static constexpr std::uintptr_t bReadOnlyModeWIFE = 0x58A;
            static constexpr std::uintptr_t ConsumeItemRequestInProgress = 0x58B;
            static constexpr std::uintptr_t MoreMenuClass = 0x590;
            static constexpr std::uintptr_t InventoryPanel = 0x598;
            static constexpr std::uintptr_t ModeDetailsPanel = 0x5A0;
            static constexpr std::uintptr_t ItemToDetail = 0x5A8;
            static constexpr std::uintptr_t MulchConfirmationModalClass = 0x5B8;
            static constexpr std::uintptr_t CustomFilterModalClass = 0x5C0;
            static constexpr std::uintptr_t MulchConfirmationModal = 0x5D8;
            static constexpr std::uintptr_t CustomFilterModal = 0x5E0;
            static constexpr std::uintptr_t SortLabels = 0x5E8;
            static constexpr std::uintptr_t MoreLabels = 0x5F8;
            static constexpr std::uintptr_t InventoryContext = 0x610;
            static constexpr std::uintptr_t PopupMenuCache = 0x618;
            static constexpr std::uintptr_t DelayBeforeCommitingFavorites = 0x650;
            static constexpr std::uintptr_t MaxFavoritesCommitRetryAttempts = 0x654;
            static constexpr std::uintptr_t CachedTutorialNameUpdate = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"OnItemViewRefreshed", 0x4B8, "MulticastInlineDelegateProperty"},
            {"Mode", 0x588, "EnumProperty"},
            {"FrontendInventoryFilter", 0x589, "EnumProperty"},
            {"bReadOnlyModeWIFE", 0x58A, "BoolProperty"},
            {"ConsumeItemRequestInProgress", 0x58B, "BoolProperty"},
            {"MoreMenuClass", 0x590, "ClassProperty"},
            {"InventoryPanel", 0x598, "ObjectProperty"},
            {"ModeDetailsPanel", 0x5A0, "ObjectProperty"},
            {"ItemToDetail", 0x5A8, "WeakObjectProperty"},
            {"MulchConfirmationModalClass", 0x5B8, "ClassProperty"},
            {"CustomFilterModalClass", 0x5C0, "ClassProperty"},
            {"MulchConfirmationModal", 0x5D8, "ObjectProperty"},
            {"CustomFilterModal", 0x5E0, "ObjectProperty"},
            {"SortLabels", 0x5E8, "MapProperty"},
            {"MoreLabels", 0x5F8, "MapProperty"},
            {"InventoryContext", 0x610, "ObjectProperty"},
            {"PopupMenuCache", 0x618, "ObjectProperty"},
            {"DelayBeforeCommitingFavorites", 0x650, "FloatProperty"},
            {"MaxFavoritesCommitRetryAttempts", 0x654, "IntProperty"},
            {"CachedTutorialNameUpdate", 0x670, "NameProperty"},
        }};
    };

    struct FortItemMulchModeActivatablePanel_STW
    {
        static constexpr std::string_view Name = "FortItemMulchModeActivatablePanel_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDetailsActivatablePanel_STW";
        struct Offsets
        {
            static constexpr std::uintptr_t MulchModeItemDetailsPanel_STW = 0x508;
            static constexpr std::uintptr_t MulchDetailsPanel_STW = 0x510;
            static constexpr std::uintptr_t AutoRecycleActionHandle = 0x518;
            static constexpr std::uintptr_t AutoRetireInputActionHandle = 0x528;
            static constexpr std::uintptr_t DetailsInputActionHandle = 0x538;
            static constexpr std::uintptr_t LeaveInventoryInputActionHandle = 0x548;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MulchModeItemDetailsPanel_STW", 0x508, "ObjectProperty"},
            {"MulchDetailsPanel_STW", 0x510, "ObjectProperty"},
            {"AutoRecycleActionHandle", 0x518, "StructProperty"},
            {"AutoRetireInputActionHandle", 0x528, "StructProperty"},
            {"DetailsInputActionHandle", 0x538, "StructProperty"},
            {"LeaveInventoryInputActionHandle", 0x548, "StructProperty"},
        }};
    };

    struct FortItemViewContext_ExpeditionSquadSlotItemPicker
    {
        static constexpr std::string_view Name = "FortItemViewContext_ExpeditionSquadSlotItemPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemViewContext_SquadSlotItemPicker";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortItemViewContext_ExpeditionSquadSlotsView
    {
        static constexpr std::string_view Name = "FortItemViewContext_ExpeditionSquadSlotsView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemViewContext_SquadSlotsView";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortItemViewContext_SquadSlotItemPicker
    {
        static constexpr std::string_view Name = "FortItemViewContext_SquadSlotItemPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadManagementItemViewContextBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortItemViewContext_SquadSlotsView
    {
        static constexpr std::string_view Name = "FortItemViewContext_SquadSlotsView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadManagementItemViewContextBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortJournalQuestDetails
    {
        static constexpr std::string_view Name = "FortJournalQuestDetails";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentQuest = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentQuest", 0x330, "ObjectProperty"},
        }};
    };

    struct FortJournalQuestProgressBar
    {
        static constexpr std::string_view Name = "FortJournalQuestProgressBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestObjectiveInfo = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestObjectiveInfo", 0x338, "WeakObjectProperty"},
        }};
    };

    struct FortLayoutQuestNode
    {
        static constexpr std::string_view Name = "FortLayoutQuestNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestTile = 0x330;
            static constexpr std::uintptr_t QuestNodeIndex = 0x338;
            static constexpr std::uintptr_t QuestMapNode = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuestTile", 0x330, "ObjectProperty"},
            {"QuestNodeIndex", 0x338, "IntProperty"},
            {"QuestMapNode", 0x340, "StructProperty"},
        }};
    };

    struct FortLayoutQuestNode_Legacy
    {
        static constexpr std::string_view Name = "FortLayoutQuestNode_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestTile = 0x330;
            static constexpr std::uintptr_t QuestNodeIndex = 0x338;
            static constexpr std::uintptr_t QuestMapNode = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuestTile", 0x330, "ObjectProperty"},
            {"QuestNodeIndex", 0x338, "IntProperty"},
            {"QuestMapNode", 0x340, "StructProperty"},
        }};
    };

    struct FortLlamaStoreBase
    {
        static constexpr std::string_view Name = "FortLlamaStoreBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDirectAcquisitionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferCategoriesToDisplay = 0x570;
            static constexpr std::uintptr_t TencentDetailsActionData = 0x580;
            static constexpr std::uintptr_t AddVBucksActionData = 0x590;
            static constexpr std::uintptr_t bShouldShowAddVBucksAction = 0x5A0;
            static constexpr std::uintptr_t OfferEntryBox = 0x5A8;
            static constexpr std::uintptr_t OfferButtonGroup = 0x5B0;
            static constexpr std::uintptr_t OfferDetails = 0x5B8;
            static constexpr std::uintptr_t StoreData = 0x5C0;
            static constexpr std::uintptr_t PendingPurchaseOffer = 0x5C8;
            static constexpr std::uintptr_t bHideSoldOffers = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OfferCategoriesToDisplay", 0x570, "ArrayProperty"},
            {"TencentDetailsActionData", 0x580, "StructProperty"},
            {"AddVBucksActionData", 0x590, "StructProperty"},
            {"bShouldShowAddVBucksAction", 0x5A0, "BoolProperty"},
            {"OfferEntryBox", 0x5A8, "ObjectProperty"},
            {"OfferButtonGroup", 0x5B0, "ObjectProperty"},
            {"OfferDetails", 0x5B8, "ObjectProperty"},
            {"StoreData", 0x5C0, "ObjectProperty"},
            {"PendingPurchaseOffer", 0x5C8, "ObjectProperty"},
            {"bHideSoldOffers", 0x5D0, "BoolProperty"},
        }};
    };

    struct FortLlamaStoreData
    {
        static constexpr std::string_view Name = "FortLlamaStoreData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomLoadingTexts = 0x28;
            static constexpr std::uintptr_t NotEnoughCurrencyDialogCloseAction = 0x38;
            static constexpr std::uintptr_t InspectWidgetClass = 0x40;
            static constexpr std::uintptr_t ShowOfferDelay = 0x48;
            static constexpr std::uintptr_t StoreOpeningCardPackClass = 0x50;
            static constexpr std::uintptr_t StoreOpeningCardPackClass_Legacy = 0x58;
            static constexpr std::uintptr_t UnopenedCardpacksModalClass = 0x60;
            static constexpr std::uintptr_t OwnedLlamasScreenClass = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RandomLoadingTexts", 0x28, "ArrayProperty"},
            {"NotEnoughCurrencyDialogCloseAction", 0x38, "NameProperty"},
            {"InspectWidgetClass", 0x40, "ClassProperty"},
            {"ShowOfferDelay", 0x48, "FloatProperty"},
            {"StoreOpeningCardPackClass", 0x50, "ClassProperty"},
            {"StoreOpeningCardPackClass_Legacy", 0x58, "ClassProperty"},
            {"UnopenedCardpacksModalClass", 0x60, "ClassProperty"},
            {"OwnedLlamasScreenClass", 0x68, "SoftClassProperty"},
        }};
    };

    struct FortLlamaStoreDetailsBase
    {
        static constexpr std::string_view Name = "FortLlamaStoreDetailsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferInfo = 0x330;
            static constexpr std::uintptr_t ItemTileView = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OfferInfo", 0x330, "ObjectProperty"},
            {"ItemTileView", 0x338, "ObjectProperty"},
        }};
    };

    struct FortLlamaStoreInspectionScreen
    {
        static constexpr std::string_view Name = "FortLlamaStoreInspectionScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStoreFrontOfferDetailsWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantedItemTileView = 0x840;
            static constexpr std::uintptr_t ChoiceTileView = 0x848;
            static constexpr std::uintptr_t bIsInChoiceViewMode = 0x850;
            static constexpr std::uintptr_t bIsPurchasing = 0x851;
            static constexpr std::uintptr_t InspectChoiceInputAction = 0x858;
            static constexpr std::uintptr_t BackInputAction = 0x868;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GrantedItemTileView", 0x840, "ObjectProperty"},
            {"ChoiceTileView", 0x848, "ObjectProperty"},
            {"bIsInChoiceViewMode", 0x850, "BoolProperty"},
            {"bIsPurchasing", 0x851, "BoolProperty"},
            {"InspectChoiceInputAction", 0x858, "StructProperty"},
            {"BackInputAction", 0x868, "StructProperty"},
        }};
    };

    struct FortMissionActivationInfoSTW
    {
        static constexpr std::string_view Name = "FortMissionActivationInfoSTW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMultiplayer = 0x28;
            static constexpr std::uintptr_t FortPC = 0xA0;
            static constexpr std::uintptr_t GameStateZone = 0xA8;
            static constexpr std::uintptr_t DifficultyIncreaseBluGloCurve = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsMultiplayer", 0x28, "BoolProperty"},
            {"FortPC", 0xA0, "ObjectProperty"},
            {"GameStateZone", 0xA8, "ObjectProperty"},
            {"DifficultyIncreaseBluGloCurve", 0xB0, "ObjectProperty"},
        }};
    };

    struct FortMissionActivationWidgetSTW
    {
        static constexpr std::string_view Name = "FortMissionActivationWidgetSTW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InfoObject = 0x4A0;
            static constexpr std::uintptr_t ReadyUpObjectiveHandle = 0x4A8;
            static constexpr std::uintptr_t DifficultyIncreaseBluGloCurve = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InfoObject", 0x4A0, "ObjectProperty"},
            {"ReadyUpObjectiveHandle", 0x4A8, "StructProperty"},
            {"DifficultyIncreaseBluGloCurve", 0x4C8, "ObjectProperty"},
        }};
    };

    struct FortMissionActivationWidgetSTWPanel
    {
        static constexpr std::string_view Name = "FortMissionActivationWidgetSTWPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InfoObject = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InfoObject", 0x330, "ObjectProperty"},
        }};
    };

    struct FortMissionSelect_STW
    {
        static constexpr std::string_view Name = "FortMissionSelect_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNavigation = 0x4B8;
            static constexpr std::uintptr_t FindPinnedQuestInputAction = 0x4C8;
            static constexpr std::uintptr_t RewardsInfoInputAction = 0x4D8;
            static constexpr std::uintptr_t MissionInfoInputAction = 0x4E8;
            static constexpr std::uintptr_t BackInputAction = 0x4F8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnNavigation", 0x4B8, "MulticastInlineDelegateProperty"},
            {"FindPinnedQuestInputAction", 0x4C8, "StructProperty"},
            {"RewardsInfoInputAction", 0x4D8, "StructProperty"},
            {"MissionInfoInputAction", 0x4E8, "StructProperty"},
            {"BackInputAction", 0x4F8, "StructProperty"},
        }};
    };

    struct FortModalMenu_STW
    {
        static constexpr std::string_view Name = "FortModalMenu_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextProvidingObject = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextProvidingObject", 0x4A0, "WeakObjectProperty"},
        }};
    };

    struct FortOpenCardPackModal
    {
        static constexpr std::string_view Name = "FortOpenCardPackModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CardPackList = 0x4A0;
            static constexpr std::uintptr_t OpenAllButton = 0x4A8;
            static constexpr std::uintptr_t CancelButton = 0x4B0;
            static constexpr std::uintptr_t BPOnRequestOpenCardPack = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CardPackList", 0x4A0, "ObjectProperty"},
            {"OpenAllButton", 0x4A8, "ObjectProperty"},
            {"CancelButton", 0x4B0, "ObjectProperty"},
            {"BPOnRequestOpenCardPack", 0x4B8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortOutpostPermissionsScreen
    {
        static constexpr std::string_view Name = "FortOutpostPermissionsScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOutpostSubscreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BackActionInputRowHandle = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackActionInputRowHandle", 0x4A0, "StructProperty"},
        }};
    };

    struct FortOutpostScreen
    {
        static constexpr std::string_view Name = "FortOutpostScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct FortOutpostScreenStormShieldBase
    {
        static constexpr std::string_view Name = "FortOutpostScreenStormShieldBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortOutpostSubscreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BackActionInputRowHandle = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackActionInputRowHandle", 0x4A0, "StructProperty"},
        }};
    };

    struct FortOutpostSubscreenBase
    {
        static constexpr std::string_view Name = "FortOutpostSubscreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BackActionInputRowHandle = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackActionInputRowHandle", 0x4A0, "StructProperty"},
        }};
    };

    struct FortOwnedLlamasBase
    {
        static constexpr std::string_view Name = "FortOwnedLlamasBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferEntryBox = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OfferEntryBox", 0x4A8, "ObjectProperty"},
        }};
    };

    struct FortProgressArrowButton
    {
        static constexpr std::string_view Name = "FortProgressArrowButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrowColor = 0x15D0;
            static constexpr std::uintptr_t HoverColor = 0x15E4;
            static constexpr std::uintptr_t ShadowColor = 0x15F8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ArrowColor", 0x15D0, "StructProperty"},
            {"HoverColor", 0x15E4, "StructProperty"},
            {"ShadowColor", 0x15F8, "StructProperty"},
        }};
    };

    struct FortProgressArrowButton_Legacy
    {
        static constexpr std::string_view Name = "FortProgressArrowButton_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrowColor = 0x1620;
            static constexpr std::uintptr_t HoverColor = 0x1634;
            static constexpr std::uintptr_t ShadowColor = 0x1648;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ArrowColor", 0x1620, "StructProperty"},
            {"HoverColor", 0x1634, "StructProperty"},
            {"ShadowColor", 0x1648, "StructProperty"},
        }};
    };

    struct FortQuestExpiresWidget
    {
        static constexpr std::string_view Name = "FortQuestExpiresWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Item = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Item", 0x330, "WeakObjectProperty"},
        }};
    };

    struct FortQuestMapCosmeticListWidget
    {
        static constexpr std::string_view Name = "FortQuestMapCosmeticListWidget";
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

    struct FortQuestMapDetailsPanel
    {
        static constexpr std::string_view Name = "FortQuestMapDetailsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestMapDetailsPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayButtonTriggeringAction = 0x350;
            static constexpr std::uintptr_t PriorityActivatableWidgetClassList = 0x360;
            static constexpr std::uintptr_t CurrentQuestBorder = 0x370;
            static constexpr std::uintptr_t CompletedQuestBorder = 0x378;
            static constexpr std::uintptr_t Panel_JournalDetails = 0x380;
            static constexpr std::uintptr_t Text_QuestTitle = 0x388;
            static constexpr std::uintptr_t Text_QuestDescription = 0x390;
            static constexpr std::uintptr_t Text_Header = 0x398;
            static constexpr std::uintptr_t Text_NotOwnedHeader = 0x3A0;
            static constexpr std::uintptr_t Text_InactiveQuestName = 0x3A8;
            static constexpr std::uintptr_t Image_QuestIcon = 0x3B0;
            static constexpr std::uintptr_t List_Tasks = 0x3B8;
            static constexpr std::uintptr_t Border_Header = 0x3C0;
            static constexpr std::uintptr_t Switcher_Body = 0x3C8;
            static constexpr std::uintptr_t Widget_FutureQuestRewardInfo = 0x3D0;
            static constexpr std::uintptr_t ScrollBox_Quest = 0x3D8;
            static constexpr std::uintptr_t ScrollBox_NoQuest = 0x3E0;
            static constexpr std::uintptr_t VisibleObjectives = 0x3E8;
            static constexpr std::uintptr_t CurrentQuestItem = 0x3F8;
            static constexpr std::uintptr_t PlayDialogIfRequiredHandle = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"PlayButtonTriggeringAction", 0x350, "StructProperty"},
            {"PriorityActivatableWidgetClassList", 0x360, "ArrayProperty"},
            {"CurrentQuestBorder", 0x370, "ClassProperty"},
            {"CompletedQuestBorder", 0x378, "ClassProperty"},
            {"Panel_JournalDetails", 0x380, "ObjectProperty"},
            {"Text_QuestTitle", 0x388, "ObjectProperty"},
            {"Text_QuestDescription", 0x390, "ObjectProperty"},
            {"Text_Header", 0x398, "ObjectProperty"},
            {"Text_NotOwnedHeader", 0x3A0, "ObjectProperty"},
            {"Text_InactiveQuestName", 0x3A8, "ObjectProperty"},
            {"Image_QuestIcon", 0x3B0, "ObjectProperty"},
            {"List_Tasks", 0x3B8, "ObjectProperty"},
            {"Border_Header", 0x3C0, "ObjectProperty"},
            {"Switcher_Body", 0x3C8, "ObjectProperty"},
            {"Widget_FutureQuestRewardInfo", 0x3D0, "ObjectProperty"},
            {"ScrollBox_Quest", 0x3D8, "ObjectProperty"},
            {"ScrollBox_NoQuest", 0x3E0, "ObjectProperty"},
            {"VisibleObjectives", 0x3E8, "ArrayProperty"},
            {"CurrentQuestItem", 0x3F8, "ObjectProperty"},
            {"PlayDialogIfRequiredHandle", 0x400, "StructProperty"},
        }};
    };

    struct FortQuestMapDetailsPanelBase
    {
        static constexpr std::string_view Name = "FortQuestMapDetailsPanelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestConversationClass = 0x330;
            static constexpr std::uintptr_t QuestUpdateDelayTime = 0x338;
            static constexpr std::uintptr_t QuestUpdateTimerHandle = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QuestConversationClass", 0x330, "ClassProperty"},
            {"QuestUpdateDelayTime", 0x338, "FloatProperty"},
            {"QuestUpdateTimerHandle", 0x340, "StructProperty"},
        }};
    };

    struct FortQuestMapDetailsPanel_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapDetailsPanel_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestMapDetailsPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayButtonTriggeringAction = 0x350;
            static constexpr std::uintptr_t PriorityActivatablePanelClassList = 0x360;
            static constexpr std::uintptr_t CurrentQuestBorder = 0x370;
            static constexpr std::uintptr_t CompletedQuestBorder = 0x378;
            static constexpr std::uintptr_t Panel_JournalDetails = 0x380;
            static constexpr std::uintptr_t Text_QuestTitle = 0x388;
            static constexpr std::uintptr_t Text_QuestDescription = 0x390;
            static constexpr std::uintptr_t Text_Header = 0x398;
            static constexpr std::uintptr_t Text_NotOwnedHeader = 0x3A0;
            static constexpr std::uintptr_t Text_InactiveQuestName = 0x3A8;
            static constexpr std::uintptr_t Image_QuestIcon = 0x3B0;
            static constexpr std::uintptr_t List_Tasks = 0x3B8;
            static constexpr std::uintptr_t Border_Header = 0x3C0;
            static constexpr std::uintptr_t Switcher_Body = 0x3C8;
            static constexpr std::uintptr_t Widget_FutureQuestRewardInfo = 0x3D0;
            static constexpr std::uintptr_t ScrollBox_Quest = 0x3D8;
            static constexpr std::uintptr_t ScrollBox_NoQuest = 0x3E0;
            static constexpr std::uintptr_t VisibleObjectives = 0x3E8;
            static constexpr std::uintptr_t CurrentQuestItem = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"PlayButtonTriggeringAction", 0x350, "StructProperty"},
            {"PriorityActivatablePanelClassList", 0x360, "ArrayProperty"},
            {"CurrentQuestBorder", 0x370, "ClassProperty"},
            {"CompletedQuestBorder", 0x378, "ClassProperty"},
            {"Panel_JournalDetails", 0x380, "ObjectProperty"},
            {"Text_QuestTitle", 0x388, "ObjectProperty"},
            {"Text_QuestDescription", 0x390, "ObjectProperty"},
            {"Text_Header", 0x398, "ObjectProperty"},
            {"Text_NotOwnedHeader", 0x3A0, "ObjectProperty"},
            {"Text_InactiveQuestName", 0x3A8, "ObjectProperty"},
            {"Image_QuestIcon", 0x3B0, "ObjectProperty"},
            {"List_Tasks", 0x3B8, "ObjectProperty"},
            {"Border_Header", 0x3C0, "ObjectProperty"},
            {"Switcher_Body", 0x3C8, "ObjectProperty"},
            {"Widget_FutureQuestRewardInfo", 0x3D0, "ObjectProperty"},
            {"ScrollBox_Quest", 0x3D8, "ObjectProperty"},
            {"ScrollBox_NoQuest", 0x3E0, "ObjectProperty"},
            {"VisibleObjectives", 0x3E8, "ArrayProperty"},
            {"CurrentQuestItem", 0x3F8, "ObjectProperty"},
        }};
    };

    struct FortQuestMapEventCallout
    {
        static constexpr std::string_view Name = "FortQuestMapEventCallout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BangWrapper_GoButton = 0x4E8;
            static constexpr std::uintptr_t OverrideSound = 0x4F0;
            static constexpr std::uintptr_t Button_LeftNav = 0x4F8;
            static constexpr std::uintptr_t Button_RightNav = 0x500;
            static constexpr std::uintptr_t Button_SwitchMode = 0x508;
            static constexpr std::uintptr_t BangWrapper_Arrow = 0x510;
            static constexpr std::uintptr_t Sequence_EventProgress = 0x518;
            static constexpr std::uintptr_t HorizontalBox_NavButtons = 0x520;
            static constexpr std::uintptr_t Text_Header = 0x528;
            static constexpr std::uintptr_t Text_Body = 0x530;
            static constexpr std::uintptr_t Image_Callout = 0x538;
            static constexpr std::uintptr_t BangWrapper_UnHover = 0x540;
            static constexpr std::uintptr_t DefaultSound = 0x548;
            static constexpr std::uintptr_t DefaultRequiredCompletedQuest = 0x550;
            static constexpr std::uintptr_t SoundLoop = 0x558;
            static constexpr std::uintptr_t QuestMapData = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"BangWrapper_GoButton", 0x4E8, "ObjectProperty"},
            {"OverrideSound", 0x4F0, "ObjectProperty"},
            {"Button_LeftNav", 0x4F8, "ObjectProperty"},
            {"Button_RightNav", 0x500, "ObjectProperty"},
            {"Button_SwitchMode", 0x508, "ObjectProperty"},
            {"BangWrapper_Arrow", 0x510, "ObjectProperty"},
            {"Sequence_EventProgress", 0x518, "ObjectProperty"},
            {"HorizontalBox_NavButtons", 0x520, "ObjectProperty"},
            {"Text_Header", 0x528, "ObjectProperty"},
            {"Text_Body", 0x530, "ObjectProperty"},
            {"Image_Callout", 0x538, "ObjectProperty"},
            {"BangWrapper_UnHover", 0x540, "ObjectProperty"},
            {"DefaultSound", 0x548, "ObjectProperty"},
            {"DefaultRequiredCompletedQuest", 0x550, "ObjectProperty"},
            {"SoundLoop", 0x558, "ObjectProperty"},
            {"QuestMapData", 0x560, "ObjectProperty"},
        }};
    };

    struct FortQuestMapEventCallout_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapEventCallout_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t BangWrapper_GoButton = 0x5C8;
            static constexpr std::uintptr_t OverrideSound = 0x5D0;
            static constexpr std::uintptr_t Button_LeftNav = 0x5D8;
            static constexpr std::uintptr_t Button_RightNav = 0x5E0;
            static constexpr std::uintptr_t Button_SwitchMode = 0x5E8;
            static constexpr std::uintptr_t BangWrapper_Arrow = 0x5F0;
            static constexpr std::uintptr_t Sequence_EventProgress = 0x5F8;
            static constexpr std::uintptr_t HorizontalBox_NavButtons = 0x600;
            static constexpr std::uintptr_t Text_Header = 0x608;
            static constexpr std::uintptr_t Text_Body = 0x610;
            static constexpr std::uintptr_t Image_Callout = 0x618;
            static constexpr std::uintptr_t BangWrapper_UnHover = 0x620;
            static constexpr std::uintptr_t DefaultSound = 0x628;
            static constexpr std::uintptr_t DefaultRequiredCompletedQuest = 0x630;
            static constexpr std::uintptr_t SoundLoop = 0x638;
            static constexpr std::uintptr_t QuestMapData = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"BangWrapper_GoButton", 0x5C8, "ObjectProperty"},
            {"OverrideSound", 0x5D0, "ObjectProperty"},
            {"Button_LeftNav", 0x5D8, "ObjectProperty"},
            {"Button_RightNav", 0x5E0, "ObjectProperty"},
            {"Button_SwitchMode", 0x5E8, "ObjectProperty"},
            {"BangWrapper_Arrow", 0x5F0, "ObjectProperty"},
            {"Sequence_EventProgress", 0x5F8, "ObjectProperty"},
            {"HorizontalBox_NavButtons", 0x600, "ObjectProperty"},
            {"Text_Header", 0x608, "ObjectProperty"},
            {"Text_Body", 0x610, "ObjectProperty"},
            {"Image_Callout", 0x618, "ObjectProperty"},
            {"BangWrapper_UnHover", 0x620, "ObjectProperty"},
            {"DefaultSound", 0x628, "ObjectProperty"},
            {"DefaultRequiredCompletedQuest", 0x630, "ObjectProperty"},
            {"SoundLoop", 0x638, "ObjectProperty"},
            {"QuestMapData", 0x640, "ObjectProperty"},
        }};
    };

    struct FortQuestMapEventDetailsPanel
    {
        static constexpr std::string_view Name = "FortQuestMapEventDetailsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestMapDetailsPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentQuestBorder = 0x350;
            static constexpr std::uintptr_t CompletedQuestBorder = 0x358;
            static constexpr std::uintptr_t FutureQuestBorder = 0x360;
            static constexpr std::uintptr_t VBox_QuestContainer = 0x368;
            static constexpr std::uintptr_t VBox_CompletedQuestContainer = 0x370;
            static constexpr std::uintptr_t Switcher_Quests = 0x378;
            static constexpr std::uintptr_t Border_NextQuest = 0x380;
            static constexpr std::uintptr_t Text_QuestName = 0x388;
            static constexpr std::uintptr_t Text_QuestDescription = 0x390;
            static constexpr std::uintptr_t Text_Title = 0x398;
            static constexpr std::uintptr_t List_Tasks = 0x3A0;
            static constexpr std::uintptr_t Image_QuestIcon = 0x3A8;
            static constexpr std::uintptr_t ScrollBox_SideBar = 0x3B0;
            static constexpr std::uintptr_t EventQuestTable = 0x3B8;
            static constexpr std::uintptr_t SideBarEntryClass = 0x3C0;
            static constexpr std::uintptr_t UnlockEventQuestDefinition = 0x3C8;
            static constexpr std::uintptr_t CurrentQuestDef = 0x3D0;
            static constexpr std::uintptr_t VisibleObjectives = 0x3D8;
            static constexpr std::uintptr_t PlayDialogIfRequiredHandle = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"CurrentQuestBorder", 0x350, "ClassProperty"},
            {"CompletedQuestBorder", 0x358, "ClassProperty"},
            {"FutureQuestBorder", 0x360, "ClassProperty"},
            {"VBox_QuestContainer", 0x368, "ObjectProperty"},
            {"VBox_CompletedQuestContainer", 0x370, "ObjectProperty"},
            {"Switcher_Quests", 0x378, "ObjectProperty"},
            {"Border_NextQuest", 0x380, "ObjectProperty"},
            {"Text_QuestName", 0x388, "ObjectProperty"},
            {"Text_QuestDescription", 0x390, "ObjectProperty"},
            {"Text_Title", 0x398, "ObjectProperty"},
            {"List_Tasks", 0x3A0, "ObjectProperty"},
            {"Image_QuestIcon", 0x3A8, "ObjectProperty"},
            {"ScrollBox_SideBar", 0x3B0, "ObjectProperty"},
            {"EventQuestTable", 0x3B8, "ObjectProperty"},
            {"SideBarEntryClass", 0x3C0, "ClassProperty"},
            {"UnlockEventQuestDefinition", 0x3C8, "ObjectProperty"},
            {"CurrentQuestDef", 0x3D0, "ObjectProperty"},
            {"VisibleObjectives", 0x3D8, "ArrayProperty"},
            {"PlayDialogIfRequiredHandle", 0x3E8, "StructProperty"},
        }};
    };

    struct FortQuestMapEventDetailsPanel_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapEventDetailsPanel_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestMapDetailsPanelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentQuestBorder = 0x350;
            static constexpr std::uintptr_t CompletedQuestBorder = 0x358;
            static constexpr std::uintptr_t FutureQuestBorder = 0x360;
            static constexpr std::uintptr_t VBox_QuestContainer = 0x368;
            static constexpr std::uintptr_t VBox_CompletedQuestContainer = 0x370;
            static constexpr std::uintptr_t Switcher_Quests = 0x378;
            static constexpr std::uintptr_t Border_NextQuest = 0x380;
            static constexpr std::uintptr_t Text_QuestName = 0x388;
            static constexpr std::uintptr_t Text_QuestDescription = 0x390;
            static constexpr std::uintptr_t Text_Title = 0x398;
            static constexpr std::uintptr_t List_Tasks = 0x3A0;
            static constexpr std::uintptr_t Image_QuestIcon = 0x3A8;
            static constexpr std::uintptr_t ScrollBox_SideBar = 0x3B0;
            static constexpr std::uintptr_t EventQuestTable = 0x3B8;
            static constexpr std::uintptr_t SideBarEntryClass = 0x3C0;
            static constexpr std::uintptr_t UnlockEventQuestDefinition = 0x3C8;
            static constexpr std::uintptr_t CurrentQuestDef = 0x3D0;
            static constexpr std::uintptr_t VisibleObjectives = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CurrentQuestBorder", 0x350, "ClassProperty"},
            {"CompletedQuestBorder", 0x358, "ClassProperty"},
            {"FutureQuestBorder", 0x360, "ClassProperty"},
            {"VBox_QuestContainer", 0x368, "ObjectProperty"},
            {"VBox_CompletedQuestContainer", 0x370, "ObjectProperty"},
            {"Switcher_Quests", 0x378, "ObjectProperty"},
            {"Border_NextQuest", 0x380, "ObjectProperty"},
            {"Text_QuestName", 0x388, "ObjectProperty"},
            {"Text_QuestDescription", 0x390, "ObjectProperty"},
            {"Text_Title", 0x398, "ObjectProperty"},
            {"List_Tasks", 0x3A0, "ObjectProperty"},
            {"Image_QuestIcon", 0x3A8, "ObjectProperty"},
            {"ScrollBox_SideBar", 0x3B0, "ObjectProperty"},
            {"EventQuestTable", 0x3B8, "ObjectProperty"},
            {"SideBarEntryClass", 0x3C0, "ClassProperty"},
            {"UnlockEventQuestDefinition", 0x3C8, "ObjectProperty"},
            {"CurrentQuestDef", 0x3D0, "ObjectProperty"},
            {"VisibleObjectives", 0x3D8, "ArrayProperty"},
        }};
    };

    struct FortQuestMapEventDot
    {
        static constexpr std::string_view Name = "FortQuestMapEventDot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_ActiveDot = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Image_ActiveDot", 0x330, "ObjectProperty"},
        }};
    };

    struct FortQuestMapEventSequence
    {
        static constexpr std::string_view Name = "FortQuestMapEventSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalBox_DotBox = 0x330;
            static constexpr std::uintptr_t DotWidgetClass = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HorizontalBox_DotBox", 0x330, "ObjectProperty"},
            {"DotWidgetClass", 0x338, "ClassProperty"},
        }};
    };

    struct FortQuestMapEventSideEntry
    {
        static constexpr std::string_view Name = "FortQuestMapEventSideEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_Rewards = 0x330;
            static constexpr std::uintptr_t List_SideTasks = 0x338;
            static constexpr std::uintptr_t Text_SideQuestTitle = 0x340;
            static constexpr std::uintptr_t Image_Arrow = 0x348;
            static constexpr std::uintptr_t Image_QuestComplete = 0x350;
            static constexpr std::uintptr_t RewardPadding = 0x358;
            static constexpr std::uintptr_t CurrentQuestItemDef = 0x368;
            static constexpr std::uintptr_t CurrentQuestItem = 0x370;
            static constexpr std::uintptr_t RewardAnimationTimer = 0x378;
            static constexpr std::uintptr_t SideQuestObjectives = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Switcher_Rewards", 0x330, "ObjectProperty"},
            {"List_SideTasks", 0x338, "ObjectProperty"},
            {"Text_SideQuestTitle", 0x340, "ObjectProperty"},
            {"Image_Arrow", 0x348, "ObjectProperty"},
            {"Image_QuestComplete", 0x350, "ObjectProperty"},
            {"RewardPadding", 0x358, "StructProperty"},
            {"CurrentQuestItemDef", 0x368, "ObjectProperty"},
            {"CurrentQuestItem", 0x370, "ObjectProperty"},
            {"RewardAnimationTimer", 0x378, "StructProperty"},
            {"SideQuestObjectives", 0x388, "ArrayProperty"},
        }};
    };

    struct FortQuestMapEventSideEntry_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapEventSideEntry_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_Rewards = 0x330;
            static constexpr std::uintptr_t List_SideTasks = 0x338;
            static constexpr std::uintptr_t Text_SideQuestTitle = 0x340;
            static constexpr std::uintptr_t Image_Arrow = 0x348;
            static constexpr std::uintptr_t Image_QuestComplete = 0x350;
            static constexpr std::uintptr_t RewardPadding = 0x358;
            static constexpr std::uintptr_t CurrentQuestItemDef = 0x368;
            static constexpr std::uintptr_t CurrentQuestItem = 0x370;
            static constexpr std::uintptr_t RewardSwitchers = 0x378;
            static constexpr std::uintptr_t RewardAnimationTimer = 0x388;
            static constexpr std::uintptr_t SideQuestObjectives = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Switcher_Rewards", 0x330, "ObjectProperty"},
            {"List_SideTasks", 0x338, "ObjectProperty"},
            {"Text_SideQuestTitle", 0x340, "ObjectProperty"},
            {"Image_Arrow", 0x348, "ObjectProperty"},
            {"Image_QuestComplete", 0x350, "ObjectProperty"},
            {"RewardPadding", 0x358, "StructProperty"},
            {"CurrentQuestItemDef", 0x368, "ObjectProperty"},
            {"CurrentQuestItem", 0x370, "ObjectProperty"},
            {"RewardSwitchers", 0x378, "ArrayProperty"},
            {"RewardAnimationTimer", 0x388, "StructProperty"},
            {"SideQuestObjectives", 0x398, "ArrayProperty"},
        }};
    };

    struct FortQuestMapNewBangWrapper
    {
        static constexpr std::string_view Name = "FortQuestMapNewBangWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBangWrapper_NUI";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_Bangs = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Switcher_Bangs", 0x348, "ObjectProperty"},
        }};
    };

    struct FortQuestMapNewBangWrapper_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapNewBangWrapper_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBangWrapper_NUI";
        struct Offsets
        {
            static constexpr std::uintptr_t Switcher_Bangs = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Switcher_Bangs", 0x348, "ObjectProperty"},
        }};
    };

    struct FortQuestMapNodeLayout
    {
        static constexpr std::string_view Name = "FortQuestMapNodeLayout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Panel_NodeLayout = 0x308;
            static constexpr std::uintptr_t ButtonPrevious = 0x310;
            static constexpr std::uintptr_t ButtonNext = 0x318;
            static constexpr std::uintptr_t StartArrow = 0x320;
            static constexpr std::uintptr_t EndArrow = 0x328;
            static constexpr std::uintptr_t QuestButtonGroup = 0x330;
            static constexpr std::uintptr_t ParentScreen = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Panel_NodeLayout", 0x308, "ObjectProperty"},
            {"ButtonPrevious", 0x310, "ObjectProperty"},
            {"ButtonNext", 0x318, "ObjectProperty"},
            {"StartArrow", 0x320, "ObjectProperty"},
            {"EndArrow", 0x328, "ObjectProperty"},
            {"QuestButtonGroup", 0x330, "ObjectProperty"},
            {"ParentScreen", 0x338, "ObjectProperty"},
        }};
    };

    struct FortQuestMapNodeLayout_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapNodeLayout_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Panel_NodeLayout = 0x308;
            static constexpr std::uintptr_t ButtonPrevious = 0x310;
            static constexpr std::uintptr_t ButtonNext = 0x318;
            static constexpr std::uintptr_t StartArrow = 0x320;
            static constexpr std::uintptr_t EndArrow = 0x328;
            static constexpr std::uintptr_t QuestButtonGroup = 0x330;
            static constexpr std::uintptr_t ParentScreen = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Panel_NodeLayout", 0x308, "ObjectProperty"},
            {"ButtonPrevious", 0x310, "ObjectProperty"},
            {"ButtonNext", 0x318, "ObjectProperty"},
            {"StartArrow", 0x320, "ObjectProperty"},
            {"EndArrow", 0x328, "ObjectProperty"},
            {"QuestButtonGroup", 0x330, "ObjectProperty"},
            {"ParentScreen", 0x338, "ObjectProperty"},
        }};
    };

    struct FortQuestMapQuestTile
    {
        static constexpr std::string_view Name = "FortQuestMapQuestTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestButton = 0x330;
            static constexpr std::uintptr_t QuestNodeData = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestButton", 0x330, "ObjectProperty"},
            {"QuestNodeData", 0x338, "StructProperty"},
        }};
    };

    struct FortQuestMapQuestTile_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapQuestTile_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestButton = 0x330;
            static constexpr std::uintptr_t QuestNodeData = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestButton", 0x330, "ObjectProperty"},
            {"QuestNodeData", 0x338, "StructProperty"},
        }};
    };

    struct FortQuestMapScreen
    {
        static constexpr std::string_view Name = "FortQuestMapScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CampaignDetailsPanel = 0x4A8;
            static constexpr std::uintptr_t EventDetailsPanel = 0x4B0;
            static constexpr std::uintptr_t EventCalloutPanel = 0x4B8;
            static constexpr std::uintptr_t QuestMapViewer = 0x4C0;
            static constexpr std::uintptr_t CurrentMode = 0x4C8;
            static constexpr std::uintptr_t bEventsActive = 0x4C9;
            static constexpr std::uintptr_t CampaignQuestMapDataTable = 0x4D0;
            static constexpr std::uintptr_t CutoffQuest = 0x4D8;
            static constexpr std::uintptr_t CurrentQuestMapDataTable = 0x4E0;
            static constexpr std::uintptr_t CampaignNewsModalClass = 0x510;
            static constexpr std::uintptr_t QuestLogScreenClass = 0x518;
            static constexpr std::uintptr_t CurrentQuestAction = 0x520;
            static constexpr std::uintptr_t STWNewsAction = 0x530;
            static constexpr std::uintptr_t BackAction = 0x540;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CampaignDetailsPanel", 0x4A8, "ObjectProperty"},
            {"EventDetailsPanel", 0x4B0, "ObjectProperty"},
            {"EventCalloutPanel", 0x4B8, "ObjectProperty"},
            {"QuestMapViewer", 0x4C0, "ObjectProperty"},
            {"CurrentMode", 0x4C8, "EnumProperty"},
            {"bEventsActive", 0x4C9, "BoolProperty"},
            {"CampaignQuestMapDataTable", 0x4D0, "ObjectProperty"},
            {"CutoffQuest", 0x4D8, "ObjectProperty"},
            {"CurrentQuestMapDataTable", 0x4E0, "ObjectProperty"},
            {"CampaignNewsModalClass", 0x510, "ClassProperty"},
            {"QuestLogScreenClass", 0x518, "ClassProperty"},
            {"CurrentQuestAction", 0x520, "StructProperty"},
            {"STWNewsAction", 0x530, "StructProperty"},
            {"BackAction", 0x540, "StructProperty"},
        }};
    };

    struct FortQuestMapScreen_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapScreen_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t CampaignDetailsPanel = 0x560;
            static constexpr std::uintptr_t EventDetailsPanel = 0x568;
            static constexpr std::uintptr_t EventCalloutPanel = 0x570;
            static constexpr std::uintptr_t QuestMapViewer = 0x578;
            static constexpr std::uintptr_t CurrentMode = 0x580;
            static constexpr std::uintptr_t bEventsActive = 0x581;
            static constexpr std::uintptr_t CampaignQuestMapDataTable = 0x588;
            static constexpr std::uintptr_t CutoffQuest = 0x590;
            static constexpr std::uintptr_t CurrentQuestMapDataTable = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CampaignDetailsPanel", 0x560, "ObjectProperty"},
            {"EventDetailsPanel", 0x568, "ObjectProperty"},
            {"EventCalloutPanel", 0x570, "ObjectProperty"},
            {"QuestMapViewer", 0x578, "ObjectProperty"},
            {"CurrentMode", 0x580, "EnumProperty"},
            {"bEventsActive", 0x581, "BoolProperty"},
            {"CampaignQuestMapDataTable", 0x588, "ObjectProperty"},
            {"CutoffQuest", 0x590, "ObjectProperty"},
            {"CurrentQuestMapDataTable", 0x598, "ObjectProperty"},
        }};
    };

    struct FortQuestMapViewer
    {
        static constexpr std::string_view Name = "FortQuestMapViewer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_PageRight = 0x340;
            static constexpr std::uintptr_t Button_PageLeft = 0x348;
            static constexpr std::uintptr_t Text_Title = 0x350;
            static constexpr std::uintptr_t Text_Page = 0x358;
            static constexpr std::uintptr_t SizeBox_Viewer = 0x360;
            static constexpr std::uintptr_t CanvasPanel_Cosmetic = 0x368;
            static constexpr std::uintptr_t ParentScreen = 0x370;
            static constexpr std::uintptr_t NodeLayout = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Button_PageRight", 0x340, "ObjectProperty"},
            {"Button_PageLeft", 0x348, "ObjectProperty"},
            {"Text_Title", 0x350, "ObjectProperty"},
            {"Text_Page", 0x358, "ObjectProperty"},
            {"SizeBox_Viewer", 0x360, "ObjectProperty"},
            {"CanvasPanel_Cosmetic", 0x368, "ObjectProperty"},
            {"ParentScreen", 0x370, "ObjectProperty"},
            {"NodeLayout", 0x378, "ObjectProperty"},
        }};
    };

    struct FortQuestMapViewer_Legacy
    {
        static constexpr std::string_view Name = "FortQuestMapViewer_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Button_PageRight = 0x340;
            static constexpr std::uintptr_t Button_PageLeft = 0x348;
            static constexpr std::uintptr_t Text_Title = 0x350;
            static constexpr std::uintptr_t Text_Page = 0x358;
            static constexpr std::uintptr_t SizeBox_Viewer = 0x360;
            static constexpr std::uintptr_t CanvasPanel_Cosmetic = 0x368;
            static constexpr std::uintptr_t ParentScreen = 0x370;
            static constexpr std::uintptr_t NodeLayout = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Button_PageRight", 0x340, "ObjectProperty"},
            {"Button_PageLeft", 0x348, "ObjectProperty"},
            {"Text_Title", 0x350, "ObjectProperty"},
            {"Text_Page", 0x358, "ObjectProperty"},
            {"SizeBox_Viewer", 0x360, "ObjectProperty"},
            {"CanvasPanel_Cosmetic", 0x368, "ObjectProperty"},
            {"ParentScreen", 0x370, "ObjectProperty"},
            {"NodeLayout", 0x378, "ObjectProperty"},
        }};
    };

    struct FortQuestPlayButton
    {
        static constexpr std::string_view Name = "FortQuestPlayButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestItem = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestItem", 0x330, "ObjectProperty"},
        }};
    };

    struct FortQuestPlayNextQuestButton
    {
        static constexpr std::string_view Name = "FortQuestPlayNextQuestButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCurrentQuestUpdated = 0x330;
            static constexpr std::uintptr_t QuestItem = 0x340;
            static constexpr std::uintptr_t CampaignQuestMapDataTable = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnCurrentQuestUpdated", 0x330, "MulticastInlineDelegateProperty"},
            {"QuestItem", 0x340, "ObjectProperty"},
            {"CampaignQuestMapDataTable", 0x348, "ObjectProperty"},
        }};
    };

    struct FortQuestScreen
    {
        static constexpr std::string_view Name = "FortQuestScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TreeView_Quests = 0x4A8;
            static constexpr std::uintptr_t ScrollBox_QuestDetails = 0x4B0;
            static constexpr std::uintptr_t QuestManagerComponentClass = 0x4B8;
            static constexpr std::uintptr_t BackAction = 0x4C0;
            static constexpr std::uintptr_t LeaveInventoryAction = 0x4D0;
            static constexpr std::uintptr_t PlayQuestAction = 0x4E0;
            static constexpr std::uintptr_t AbandonQuestAction = 0x4F0;
            static constexpr std::uintptr_t ClaimRewardAction = 0x500;
            static constexpr std::uintptr_t ReplayIntroAction = 0x510;
            static constexpr std::uintptr_t ReplayOutroAction = 0x520;
            static constexpr std::uintptr_t PinQuestAction = 0x530;
            static constexpr std::uintptr_t UnpinQuestAction = 0x540;
            static constexpr std::uintptr_t StopConversationAction = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TreeView_Quests", 0x4A8, "ObjectProperty"},
            {"ScrollBox_QuestDetails", 0x4B0, "ObjectProperty"},
            {"QuestManagerComponentClass", 0x4B8, "ClassProperty"},
            {"BackAction", 0x4C0, "StructProperty"},
            {"LeaveInventoryAction", 0x4D0, "StructProperty"},
            {"PlayQuestAction", 0x4E0, "StructProperty"},
            {"AbandonQuestAction", 0x4F0, "StructProperty"},
            {"ClaimRewardAction", 0x500, "StructProperty"},
            {"ReplayIntroAction", 0x510, "StructProperty"},
            {"ReplayOutroAction", 0x520, "StructProperty"},
            {"PinQuestAction", 0x530, "StructProperty"},
            {"UnpinQuestAction", 0x540, "StructProperty"},
            {"StopConversationAction", 0x550, "StructProperty"},
        }};
    };

    struct FortQuestScreen_Legacy
    {
        static constexpr std::string_view Name = "FortQuestScreen_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPushedOnToContentPanelStack = 0x568;
            static constexpr std::uintptr_t bIsAlreadyOnContentPanelStack = 0x569;
            static constexpr std::uintptr_t InputPriority = 0x56A;
            static constexpr std::uintptr_t bIsClosableByPlayerInput = 0x56B;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsPushedOnToContentPanelStack", 0x568, "BoolProperty"},
            {"bIsAlreadyOnContentPanelStack", 0x569, "BoolProperty"},
            {"InputPriority", 0x56A, "EnumProperty"},
            {"bIsClosableByPlayerInput", 0x56B, "BoolProperty"},
            {"PrimaryContentSetup", 0x56C, "StructProperty"},
        }};
    };

    struct FortQuestTreeItemWidget
    {
        static constexpr std::string_view Name = "FortQuestTreeItemWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestOrCategory = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestOrCategory", 0x15D8, "WeakObjectProperty"},
        }};
    };

    struct FortQuestTreeItemWidget_Legacy
    {
        static constexpr std::string_view Name = "FortQuestTreeItemWidget_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestOrCategory = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestOrCategory", 0x1628, "WeakObjectProperty"},
        }};
    };

    struct FortResearchMenuBase
    {
        static constexpr std::string_view Name = "FortResearchMenuBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ResearchRespecToken = 0x4A0;
            static constexpr std::uintptr_t RespecInputAction = 0x4A8;
            static constexpr std::uintptr_t ResearchDetailsInputAction = 0x4C0;
            static constexpr std::uintptr_t BackInputAction = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ResearchRespecToken", 0x4A0, "ObjectProperty"},
            {"RespecInputAction", 0x4A8, "StructProperty"},
            {"ResearchDetailsInputAction", 0x4C0, "StructProperty"},
            {"BackInputAction", 0x4D8, "StructProperty"},
        }};
    };

    struct FortResearchSchematicsHelper
    {
        static constexpr std::string_view Name = "FortResearchSchematicsHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortResearchStatTileWidget
    {
        static constexpr std::string_view Name = "FortResearchStatTileWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PersonalStatItemDefinition = 0x308;
            static constexpr std::uintptr_t TeamStatItemDefinition = 0x310;
            static constexpr std::uintptr_t StatCostCurveName = 0x318;
            static constexpr std::uintptr_t StatPersonalDeltaCurveName = 0x31C;
            static constexpr std::uintptr_t StatPersonalCumulativeCurveName = 0x320;
            static constexpr std::uintptr_t StatTeamDeltaCurveName = 0x324;
            static constexpr std::uintptr_t StatTeamCumulativeCurveName = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PersonalStatItemDefinition", 0x308, "ObjectProperty"},
            {"TeamStatItemDefinition", 0x310, "ObjectProperty"},
            {"StatCostCurveName", 0x318, "NameProperty"},
            {"StatPersonalDeltaCurveName", 0x31C, "NameProperty"},
            {"StatPersonalCumulativeCurveName", 0x320, "NameProperty"},
            {"StatTeamDeltaCurveName", 0x324, "NameProperty"},
            {"StatTeamCumulativeCurveName", 0x328, "NameProperty"},
        }};
    };

    struct FortResultsWidgetSTW
    {
        static constexpr std::string_view Name = "FortResultsWidgetSTW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SkipInputAction = 0x4B0;
            static constexpr std::uintptr_t EmoteInputAction = 0x4C8;
            static constexpr std::uintptr_t NewEmoteWheelInputAction = 0x4E0;
            static constexpr std::uintptr_t PickerCancelInputAction = 0x4F8;
            static constexpr std::uintptr_t AdditionalGrantedMissionPoints = 0x588;
            static constexpr std::uintptr_t RewardedBadges = 0x590;
            static constexpr std::uintptr_t MissedBadges = 0x5A0;
            static constexpr std::uintptr_t RewardedItems = 0x5B0;
            static constexpr std::uintptr_t RewardedAccountItems = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SkipInputAction", 0x4B0, "StructProperty"},
            {"EmoteInputAction", 0x4C8, "StructProperty"},
            {"NewEmoteWheelInputAction", 0x4E0, "StructProperty"},
            {"PickerCancelInputAction", 0x4F8, "StructProperty"},
            {"AdditionalGrantedMissionPoints", 0x588, "IntProperty"},
            {"RewardedBadges", 0x590, "ArrayProperty"},
            {"MissedBadges", 0x5A0, "ArrayProperty"},
            {"RewardedItems", 0x5B0, "ArrayProperty"},
            {"RewardedAccountItems", 0x5C0, "ArrayProperty"},
        }};
    };

    struct FortRewardCollectionBookData
    {
        static constexpr std::string_view Name = "FortRewardCollectionBookData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionBookRewards = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CollectionBookRewards", 0x30, "StructProperty"},
        }};
    };

    struct FortRewardConversationWidget
    {
        static constexpr std::string_view Name = "FortRewardConversationWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationSubWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTransitionInComplete = 0x330;
            static constexpr std::uintptr_t OnTransitionOutComplete = 0x340;
            static constexpr std::uintptr_t ParentWidget = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTransitionInComplete", 0x330, "MulticastInlineDelegateProperty"},
            {"OnTransitionOutComplete", 0x340, "MulticastInlineDelegateProperty"},
            {"ParentWidget", 0x350, "ObjectProperty"},
        }};
    };

    struct FortRewardDifficultyIncrease
    {
        static constexpr std::string_view Name = "FortRewardDifficultyIncrease";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RewardType", 0x28, "EnumProperty"},
        }};
    };

    struct FortRewardEpicQuestData
    {
        static constexpr std::string_view Name = "FortRewardEpicQuestData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t Quest = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quest", 0x30, "ObjectProperty"},
        }};
    };

    struct FortRewardExpeditionData
    {
        static constexpr std::string_view Name = "FortRewardExpeditionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t Expedition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Expedition", 0x30, "ObjectProperty"},
        }};
    };

    struct FortRewardExpeditionWidget
    {
        static constexpr std::string_view Name = "FortRewardExpeditionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationSubWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMcpError = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnMcpError", 0x358, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortRewardGiftBoxData
    {
        static constexpr std::string_view Name = "FortRewardGiftBoxData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftBox = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GiftBox", 0x30, "ObjectProperty"},
        }};
    };

    struct FortRewardInfoButton
    {
        static constexpr std::string_view Name = "FortRewardInfoButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemCardPanel = 0x15D8;
            static constexpr std::uintptr_t ItemCardSize = 0x15E0;
            static constexpr std::uintptr_t bDisplayAsRewardCard = 0x15E1;
            static constexpr std::uintptr_t ItemInstance = 0x15E8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ItemCardPanel", 0x15D8, "ObjectProperty"},
            {"ItemCardSize", 0x15E0, "EnumProperty"},
            {"bDisplayAsRewardCard", 0x15E1, "BoolProperty"},
            {"ItemInstance", 0x15E8, "ObjectProperty"},
        }};
    };

    struct FortRewardInfoWidget
    {
        static constexpr std::string_view Name = "FortRewardInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardListWidget = 0x330;
            static constexpr std::uintptr_t RewardWidgetPadding = 0x338;
            static constexpr std::uintptr_t HorizontalAlignment = 0x348;
            static constexpr std::uintptr_t VerticalAlignment = 0x349;
            static constexpr std::uintptr_t bShowDescription = 0x34A;
            static constexpr std::uintptr_t bAllowItemInteraction = 0x34B;
            static constexpr std::uintptr_t MaxNumRewardsShown = 0x34C;
            static constexpr std::uintptr_t OrWidgetType = 0x350;
            static constexpr std::uintptr_t RewardInfoButtonType = 0x358;
            static constexpr std::uintptr_t ButtonGroup = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"RewardListWidget", 0x330, "ObjectProperty"},
            {"RewardWidgetPadding", 0x338, "StructProperty"},
            {"HorizontalAlignment", 0x348, "ByteProperty"},
            {"VerticalAlignment", 0x349, "ByteProperty"},
            {"bShowDescription", 0x34A, "BoolProperty"},
            {"bAllowItemInteraction", 0x34B, "BoolProperty"},
            {"MaxNumRewardsShown", 0x34C, "IntProperty"},
            {"OrWidgetType", 0x350, "ClassProperty"},
            {"RewardInfoButtonType", 0x358, "ClassProperty"},
            {"ButtonGroup", 0x380, "ObjectProperty"},
        }};
    };

    struct FortRewardItemCacheData
    {
        static constexpr std::string_view Name = "FortRewardItemCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemCache = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemCache", 0x30, "ObjectProperty"},
        }};
    };

    struct FortRewardMissionAlertData
    {
        static constexpr std::string_view Name = "FortRewardMissionAlertData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RewardType", 0x28, "EnumProperty"},
        }};
    };

    struct FortRewardMissionData
    {
        static constexpr std::string_view Name = "FortRewardMissionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RewardType", 0x28, "EnumProperty"},
        }};
    };

    struct FortRewardNewQuestWidget
    {
        static constexpr std::string_view Name = "FortRewardNewQuestWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationSubWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTransitionInComplete = 0x330;
            static constexpr std::uintptr_t OnTransitionOutComplete = 0x340;
            static constexpr std::uintptr_t ParentWidget = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTransitionInComplete", 0x330, "MulticastInlineDelegateProperty"},
            {"OnTransitionOutComplete", 0x340, "MulticastInlineDelegateProperty"},
            {"ParentWidget", 0x350, "ObjectProperty"},
        }};
    };

    struct FortRewardNotificationData
    {
        static constexpr std::string_view Name = "FortRewardNotificationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RewardType", 0x28, "EnumProperty"},
        }};
    };

    struct FortRewardNotificationSubWidget
    {
        static constexpr std::string_view Name = "FortRewardNotificationSubWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTransitionInComplete = 0x330;
            static constexpr std::uintptr_t OnTransitionOutComplete = 0x340;
            static constexpr std::uintptr_t ParentWidget = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTransitionInComplete", 0x330, "MulticastInlineDelegateProperty"},
            {"OnTransitionOutComplete", 0x340, "MulticastInlineDelegateProperty"},
            {"ParentWidget", 0x350, "ObjectProperty"},
        }};
    };

    struct FortRewardNotificationWidget
    {
        static constexpr std::string_view Name = "FortRewardNotificationWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t MulchConfirmationModalClass = 0x570;
            static constexpr std::uintptr_t MulchConfirmationModal = 0x590;
            static constexpr std::uintptr_t OverlayMain = 0x598;
            static constexpr std::uintptr_t SwipeDetector = 0x5A0;
            static constexpr std::uintptr_t NotificationDataList = 0x648;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x67C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MulchConfirmationModalClass", 0x570, "SoftClassProperty"},
            {"MulchConfirmationModal", 0x590, "ObjectProperty"},
            {"OverlayMain", 0x598, "ObjectProperty"},
            {"SwipeDetector", 0x5A0, "StructProperty"},
            {"NotificationDataList", 0x648, "ArrayProperty"},
            {"PrimaryContentSetup", 0x67C, "StructProperty"},
        }};
    };

    struct FortRewardPeopleXPDistributionData
    {
        static constexpr std::string_view Name = "FortRewardPeopleXPDistributionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RewardType", 0x28, "EnumProperty"},
        }};
    };

    struct FortRewardPhoenixLevelUpData
    {
        static constexpr std::string_view Name = "FortRewardPhoenixLevelUpData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t PhoenixLevel = 0x30;
            static constexpr std::uintptr_t Rewards = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PhoenixLevel", 0x30, "IntProperty"},
            {"Rewards", 0x38, "ArrayProperty"},
        }};
    };

    struct FortRewardQuestData
    {
        static constexpr std::string_view Name = "FortRewardQuestData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRewardNotificationData";
        struct Offsets
        {
            static constexpr std::uintptr_t Quest = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quest", 0x30, "ObjectProperty"},
        }};
    };

    struct FortRootViewportLayout_STW
    {
        static constexpr std::string_view Name = "FortRootViewportLayout_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRootViewportLayout";
        struct Offsets
        {
            static constexpr std::uintptr_t TalkingHead = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TalkingHead", 0x5B0, "ObjectProperty"},
        }};
    };

    struct FortSTWUIData
    {
        static constexpr std::string_view Name = "FortSTWUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSTWUIDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UpgradesDisplayDataTable = 0x28;
            static constexpr std::uintptr_t UnlockedSquadSlotBorderMultiSizeBrush = 0x48;
            static constexpr std::uintptr_t LockedSquadSlotBorderMultiSizeBrush = 0x68;
            static constexpr std::uintptr_t ReadOnlySquadSlotBorderMultiSizeBrush = 0x88;
            static constexpr std::uintptr_t GamepadConflictDialogIcon = 0xB0;
            static constexpr std::uintptr_t KeyboardConflictDialogIcon = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UpgradesDisplayDataTable", 0x28, "SoftObjectProperty"},
            {"UnlockedSquadSlotBorderMultiSizeBrush", 0x48, "SoftObjectProperty"},
            {"LockedSquadSlotBorderMultiSizeBrush", 0x68, "SoftObjectProperty"},
            {"ReadOnlySquadSlotBorderMultiSizeBrush", 0x88, "SoftObjectProperty"},
            {"GamepadConflictDialogIcon", 0xB0, "StructProperty"},
            {"KeyboardConflictDialogIcon", 0x160, "StructProperty"},
        }};
    };

    struct FortScaleboxUpdater
    {
        static constexpr std::string_view Name = "FortScaleboxUpdater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleBox = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScaleBox", 0x330, "ObjectProperty"},
        }};
    };

    struct FortSelectableAttributeListItem
    {
        static constexpr std::string_view Name = "FortSelectableAttributeListItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeListItem = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeListItem", 0x15D8, "ObjectProperty"},
        }};
    };

    struct FortSquadCommsPicker_STW
    {
        static constexpr std::string_view Name = "FortSquadCommsPicker_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PickerOverlaySquadComms = 0x4A8;
            static constexpr std::uintptr_t Text_Label = 0x4B0;
            static constexpr std::uintptr_t Text_QuickActions = 0x4B8;
            static constexpr std::uintptr_t Button_Send = 0x4C0;
            static constexpr std::uintptr_t Ordering = 0x4D8;
            static constexpr std::uintptr_t OnReleaseSelectInputAction = 0x4E8;
            static constexpr std::uintptr_t CloseInputAction = 0x4F8;
            static constexpr std::uintptr_t ConfirmSound = 0x508;
            static constexpr std::uintptr_t SquadCommsBank = 0x528;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x530;
            static constexpr std::uintptr_t QuickSelectBindings = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PickerOverlaySquadComms", 0x4A8, "ObjectProperty"},
            {"Text_Label", 0x4B0, "ObjectProperty"},
            {"Text_QuickActions", 0x4B8, "ObjectProperty"},
            {"Button_Send", 0x4C0, "ObjectProperty"},
            {"Ordering", 0x4D8, "ArrayProperty"},
            {"OnReleaseSelectInputAction", 0x4E8, "StructProperty"},
            {"CloseInputAction", 0x4F8, "StructProperty"},
            {"ConfirmSound", 0x508, "SoftObjectProperty"},
            {"SquadCommsBank", 0x528, "ObjectProperty"},
            {"PrimaryContentSetup", 0x530, "StructProperty"},
            {"QuickSelectBindings", 0x538, "ArrayProperty"},
        }};
    };

    struct FortSquadIcon
    {
        static constexpr std::string_view Name = "FortSquadIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x330;
            static constexpr std::uintptr_t ImageSize = 0x334;
            static constexpr std::uintptr_t Icon = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x330, "NameProperty"},
            {"ImageSize", 0x334, "ByteProperty"},
            {"Icon", 0x338, "ObjectProperty"},
        }};
    };

    struct FortSquadLandingPageDefenderSquadDetails
    {
        static constexpr std::string_view Name = "FortSquadLandingPageDefenderSquadDetails";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OutpostName = 0x330;
            static constexpr std::uintptr_t PowerRating = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OutpostName", 0x330, "ObjectProperty"},
            {"PowerRating", 0x338, "ObjectProperty"},
        }};
    };

    struct FortSquadLandingPageDefenderSquadDetailsLocked
    {
        static constexpr std::string_view Name = "FortSquadLandingPageDefenderSquadDetailsLocked";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OutpostName = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutpostName", 0x330, "ObjectProperty"},
        }};
    };

    struct FortSquadLandingPageDefenderSummary
    {
        static constexpr std::string_view Name = "FortSquadLandingPageDefenderSummary";
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

    struct FortSquadLandingPageSurvivorSummary
    {
        static constexpr std::string_view Name = "FortSquadLandingPageSurvivorSummary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t FortitudeStatValue = 0x330;
            static constexpr std::uintptr_t OffenseStatValue = 0x338;
            static constexpr std::uintptr_t ResistanceStatValue = 0x340;
            static constexpr std::uintptr_t TechStatValue = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FortitudeStatValue", 0x330, "ObjectProperty"},
            {"OffenseStatValue", 0x338, "ObjectProperty"},
            {"ResistanceStatValue", 0x340, "ObjectProperty"},
            {"TechStatValue", 0x348, "ObjectProperty"},
        }};
    };

    struct FortSquadManagementItemViewContextBase
    {
        static constexpr std::string_view Name = "FortSquadManagementItemViewContextBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSquadManagementScreenBase
    {
        static constexpr std::string_view Name = "FortSquadManagementScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t bReadOnlyModeWIFE = 0x590;
            static constexpr std::uintptr_t SquadStatsWidget = 0x598;
            static constexpr std::uintptr_t SquadSlotsView = 0x5A0;
            static constexpr std::uintptr_t SelectedSlotDetailsPanel = 0x5A8;
            static constexpr std::uintptr_t SelectedSlotItemPicker = 0x5B0;
            static constexpr std::uintptr_t InspectInputActionRowHandle = 0x5B8;
            static constexpr std::uintptr_t ManageInputActionRowHandle = 0x5C8;
            static constexpr std::uintptr_t BackInputActionRowHandle = 0x5D8;
            static constexpr std::uintptr_t InventoryInputActionRowHandle = 0x5E8;
            static constexpr std::uintptr_t InventoryCloseInputActionRowHandle = 0x5F8;
            static constexpr std::uintptr_t ClosePickerInputActionRowHandle = 0x608;
            static constexpr std::uintptr_t SelectPickerSlotActionRowHandle = 0x618;
            static constexpr std::uintptr_t CyclePickerSortActionRowHandle = 0x628;
            static constexpr std::uintptr_t PreviousSquadActionRowHandle = 0x638;
            static constexpr std::uintptr_t NextSquadActionRowHandle = 0x648;
            static constexpr std::uintptr_t ClearAllActionRowHandle = 0x658;
            static constexpr std::uintptr_t HelpScreenActionRowHandle = 0x668;
            static constexpr std::uintptr_t DisableAutoSlottingToClearSquadPromptAction = 0x678;
            static constexpr std::uintptr_t ItemViewContext_SquadSlotsView = 0x690;
            static constexpr std::uintptr_t ItemViewContext_SquadSlotItemPicker = 0x698;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"bReadOnlyModeWIFE", 0x590, "BoolProperty"},
            {"SquadStatsWidget", 0x598, "ObjectProperty"},
            {"SquadSlotsView", 0x5A0, "ObjectProperty"},
            {"SelectedSlotDetailsPanel", 0x5A8, "ObjectProperty"},
            {"SelectedSlotItemPicker", 0x5B0, "ObjectProperty"},
            {"InspectInputActionRowHandle", 0x5B8, "StructProperty"},
            {"ManageInputActionRowHandle", 0x5C8, "StructProperty"},
            {"BackInputActionRowHandle", 0x5D8, "StructProperty"},
            {"InventoryInputActionRowHandle", 0x5E8, "StructProperty"},
            {"InventoryCloseInputActionRowHandle", 0x5F8, "StructProperty"},
            {"ClosePickerInputActionRowHandle", 0x608, "StructProperty"},
            {"SelectPickerSlotActionRowHandle", 0x618, "StructProperty"},
            {"CyclePickerSortActionRowHandle", 0x628, "StructProperty"},
            {"PreviousSquadActionRowHandle", 0x638, "StructProperty"},
            {"NextSquadActionRowHandle", 0x648, "StructProperty"},
            {"ClearAllActionRowHandle", 0x658, "StructProperty"},
            {"HelpScreenActionRowHandle", 0x668, "StructProperty"},
            {"DisableAutoSlottingToClearSquadPromptAction", 0x678, "ClassProperty"},
            {"ItemViewContext_SquadSlotsView", 0x690, "ObjectProperty"},
            {"ItemViewContext_SquadSlotItemPicker", 0x698, "ObjectProperty"},
        }};
    };

    struct FortSquadSelectorButton
    {
        static constexpr std::string_view Name = "FortSquadSelectorButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t SquadSlotIndex = 0x1630;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SquadSlotIndex", 0x1630, "IntProperty"},
        }};
    };

    struct FortSquadSlotDetailsPanel
    {
        static constexpr std::string_view Name = "FortSquadSlotDetailsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDetailsPanel = 0x350;
            static constexpr std::uintptr_t ItemViewContext = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemDetailsPanel", 0x350, "ObjectProperty"},
            {"ItemViewContext", 0x358, "InterfaceProperty"},
        }};
    };

    struct FortSquadSlotItemDetailElementWidget
    {
        static constexpr std::string_view Name = "FortSquadSlotItemDetailElementWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDetailElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemToDetail = 0x330;
            static constexpr std::uintptr_t ItemToCompareWith = 0x338;
            static constexpr std::uintptr_t bShouldPreviewUpgradingItem = 0x340;
            static constexpr std::uintptr_t UpgradeLevelDelta = 0x344;
            static constexpr std::uintptr_t ItemViewContext = 0x348;
            static constexpr std::uintptr_t CurrentInspectMode = 0x358;
            static constexpr std::uintptr_t QuantityOverride = 0x35C;
            static constexpr std::uintptr_t bIsUpdatingSuspended = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ItemToDetail", 0x330, "WeakObjectProperty"},
            {"ItemToCompareWith", 0x338, "WeakObjectProperty"},
            {"bShouldPreviewUpgradingItem", 0x340, "BoolProperty"},
            {"UpgradeLevelDelta", 0x344, "IntProperty"},
            {"ItemViewContext", 0x348, "InterfaceProperty"},
            {"CurrentInspectMode", 0x358, "EnumProperty"},
            {"QuantityOverride", 0x35C, "IntProperty"},
            {"bIsUpdatingSuspended", 0x360, "BoolProperty"},
        }};
    };

    struct FortSquadSlotItemDetailsHostPanel
    {
        static constexpr std::string_view Name = "FortSquadSlotItemDetailsHostPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemDetailsHostPanel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemChanged = 0x330;
            static constexpr std::uintptr_t ItemToDetail = 0x340;
            static constexpr std::uintptr_t ItemToCompareWith = 0x358;
            static constexpr std::uintptr_t bShouldPreviewUpgradingItem = 0x370;
            static constexpr std::uintptr_t UpgradeLevelDelta = 0x374;
            static constexpr std::uintptr_t ScrollBox = 0x378;
            static constexpr std::uintptr_t DetailsContainerSlotWidget = 0x380;
            static constexpr std::uintptr_t HighRarityBorder = 0x388;
            static constexpr std::uintptr_t ItemViewContext = 0x390;
            static constexpr std::uintptr_t CurrentInspectMode = 0x3A0;
            static constexpr std::uintptr_t QuantityOverride = 0x3C8;
            static constexpr std::uintptr_t ItemToDetailLoadingWrapper = 0x3D0;
            static constexpr std::uintptr_t ItemToCompareLoadingWrapper = 0x3D8;
            static constexpr std::uintptr_t ItemToDetailLoadGuard = 0x3E0;
            static constexpr std::uintptr_t ItemToCompareLoadGuard = 0x3E8;
            static constexpr std::uintptr_t Border_Details = 0x3F0;
            static constexpr std::uintptr_t Image_RechargeableIcon = 0x3F8;
            static constexpr std::uintptr_t bAsyncLoadTooltipData = 0x400;
            static constexpr std::uintptr_t bIsUpdatingSuspended = 0x401;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"OnItemChanged", 0x330, "MulticastInlineDelegateProperty"},
            {"ItemToDetail", 0x340, "WeakObjectProperty"},
            {"ItemToCompareWith", 0x358, "WeakObjectProperty"},
            {"bShouldPreviewUpgradingItem", 0x370, "BoolProperty"},
            {"UpgradeLevelDelta", 0x374, "IntProperty"},
            {"ScrollBox", 0x378, "ObjectProperty"},
            {"DetailsContainerSlotWidget", 0x380, "ObjectProperty"},
            {"HighRarityBorder", 0x388, "ObjectProperty"},
            {"ItemViewContext", 0x390, "InterfaceProperty"},
            {"CurrentInspectMode", 0x3A0, "EnumProperty"},
            {"QuantityOverride", 0x3C8, "IntProperty"},
            {"ItemToDetailLoadingWrapper", 0x3D0, "ObjectProperty"},
            {"ItemToCompareLoadingWrapper", 0x3D8, "ObjectProperty"},
            {"ItemToDetailLoadGuard", 0x3E0, "ObjectProperty"},
            {"ItemToCompareLoadGuard", 0x3E8, "ObjectProperty"},
            {"Border_Details", 0x3F0, "ObjectProperty"},
            {"Image_RechargeableIcon", 0x3F8, "ObjectProperty"},
            {"bAsyncLoadTooltipData", 0x400, "BoolProperty"},
            {"bIsUpdatingSuspended", 0x401, "BoolProperty"},
        }};
    };

    struct FortSquadSlotItemPicker
    {
        static constexpr std::string_view Name = "FortSquadSlotItemPicker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPickerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSortChanged = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnSortChanged", 0x4A0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortSquadSlotItemPickerTileButton
    {
        static constexpr std::string_view Name = "FortSquadSlotItemPickerTileButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemTileButton";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemWidget = 0x1630;
            static constexpr std::uintptr_t ItemWidgetSTW = 0x1638;
            static constexpr std::uintptr_t Item = 0x1640;
            static constexpr std::uintptr_t ItemCardSize = 0x1648;
            static constexpr std::uintptr_t IsRewardCard = 0x1649;
            static constexpr std::uintptr_t ItemViewContext = 0x1650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemWidget", 0x1630, "ObjectProperty"},
            {"ItemWidgetSTW", 0x1638, "ObjectProperty"},
            {"Item", 0x1640, "WeakObjectProperty"},
            {"ItemCardSize", 0x1648, "EnumProperty"},
            {"IsRewardCard", 0x1649, "BoolProperty"},
            {"ItemViewContext", 0x1650, "InterfaceProperty"},
        }};
    };

    struct FortSquadSlotSelectorButton
    {
        static constexpr std::string_view Name = "FortSquadSlotSelectorButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequestOpenSquadSlotEvent = 0x1640;
            static constexpr std::uintptr_t OnRequestViewInAllEvent = 0x1650;
            static constexpr std::uintptr_t SquadSlotWidget = 0x1660;
            static constexpr std::uintptr_t PopupMenuAnchor = 0x1668;
            static constexpr std::uintptr_t ItemViewContext = 0x1670;
            static constexpr std::uintptr_t PopupMenu = 0x1698;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnRequestOpenSquadSlotEvent", 0x1640, "MulticastInlineDelegateProperty"},
            {"OnRequestViewInAllEvent", 0x1650, "MulticastInlineDelegateProperty"},
            {"SquadSlotWidget", 0x1660, "ObjectProperty"},
            {"PopupMenuAnchor", 0x1668, "ObjectProperty"},
            {"ItemViewContext", 0x1670, "InterfaceProperty"},
            {"PopupMenu", 0x1698, "ObjectProperty"},
        }};
    };

    struct FortSquadSlotSelectorPopupMenu
    {
        static constexpr std::string_view Name = "FortSquadSlotSelectorPopupMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPopupMenu_Legacy";
        struct Offsets
        {
            static constexpr std::uintptr_t bReadOnlyModeWIFE = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bReadOnlyModeWIFE", 0x580, "BoolProperty"},
        }};
    };

    struct FortSquadSlotSurvivorTraitMatchesDetailWidget
    {
        static constexpr std::string_view Name = "FortSquadSlotSurvivorTraitMatchesDetailWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadSlotItemDetailElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IsSquadLeaderSlot = 0x3A8;
            static constexpr std::uintptr_t LeaderMatchesSquadType = 0x3A9;
            static constexpr std::uintptr_t SubordinatePersonalityMatchCount = 0x3AC;
            static constexpr std::uintptr_t MatchesLeaderPersonality = 0x3B0;
            static constexpr std::uintptr_t MatchingSetBonusCount = 0x3B4;
            static constexpr std::uintptr_t SetBonusSize = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"IsSquadLeaderSlot", 0x3A8, "BoolProperty"},
            {"LeaderMatchesSquadType", 0x3A9, "BoolProperty"},
            {"SubordinatePersonalityMatchCount", 0x3AC, "IntProperty"},
            {"MatchesLeaderPersonality", 0x3B0, "BoolProperty"},
            {"MatchingSetBonusCount", 0x3B4, "IntProperty"},
            {"SetBonusSize", 0x3B8, "IntProperty"},
        }};
    };

    struct FortSquadSlotWidget
    {
        static constexpr std::string_view Name = "FortSquadSlotWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemCardSize = 0x188;
            static constexpr std::uintptr_t SlottedItemCard = 0x1C8;
            static constexpr std::uintptr_t ItemViewContext = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemCardSize", 0x188, "EnumProperty"},
            {"SlottedItemCard", 0x1C8, "ObjectProperty"},
            {"ItemViewContext", 0x1D8, "InterfaceProperty"},
        }};
    };

    struct FortSquadSlotsView
    {
        static constexpr std::string_view Name = "FortSquadSlotsView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDifferentSquadSlotSelectedEvent = 0x340;
            static constexpr std::uintptr_t OnRequestOpenSquadSlotEvent = 0x350;
            static constexpr std::uintptr_t OnRequestViewInAllEvent = 0x360;
            static constexpr std::uintptr_t bReadOnlyModeWIFE = 0x370;
            static constexpr std::uintptr_t IndexOfSelectedSquadSlot = 0x374;
            static constexpr std::uintptr_t bSlotButtonsRequireSelection = 0x378;
            static constexpr std::uintptr_t bInPreviewMode = 0x379;
            static constexpr std::uintptr_t SquadSlotSortTypesMap = 0x380;
            static constexpr std::uintptr_t DisableAutoSlottingToOpenSquadSlotPromptAction = 0x390;
            static constexpr std::uintptr_t SquadSlotButtonGroup = 0x398;
            static constexpr std::uintptr_t ItemViewContext = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnDifferentSquadSlotSelectedEvent", 0x340, "MulticastInlineDelegateProperty"},
            {"OnRequestOpenSquadSlotEvent", 0x350, "MulticastInlineDelegateProperty"},
            {"OnRequestViewInAllEvent", 0x360, "MulticastInlineDelegateProperty"},
            {"bReadOnlyModeWIFE", 0x370, "BoolProperty"},
            {"IndexOfSelectedSquadSlot", 0x374, "IntProperty"},
            {"bSlotButtonsRequireSelection", 0x378, "BoolProperty"},
            {"bInPreviewMode", 0x379, "BoolProperty"},
            {"SquadSlotSortTypesMap", 0x380, "MapProperty"},
            {"DisableAutoSlottingToOpenSquadSlotPromptAction", 0x390, "ClassProperty"},
            {"SquadSlotButtonGroup", 0x398, "ObjectProperty"},
            {"ItemViewContext", 0x3D0, "InterfaceProperty"},
        }};
    };

    struct FortSquadStatDetailsWidget
    {
        static constexpr std::string_view Name = "FortSquadStatDetailsWidget";
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

    struct FortSquadStatValueWithIcon
    {
        static constexpr std::string_view Name = "FortSquadStatValueWithIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Attribute = 0x330;
            static constexpr std::uintptr_t TeamAttribute = 0x368;
            static constexpr std::uintptr_t ImageSize = 0x3A0;
            static constexpr std::uintptr_t Value = 0x3A8;
            static constexpr std::uintptr_t Icon = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Attribute", 0x330, "StructProperty"},
            {"TeamAttribute", 0x368, "StructProperty"},
            {"ImageSize", 0x3A0, "ByteProperty"},
            {"Value", 0x3A8, "ObjectProperty"},
            {"Icon", 0x3B0, "ObjectProperty"},
        }};
    };

    struct FortSquadStatsWidgetBase
    {
        static constexpr std::string_view Name = "FortSquadStatsWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OverviewStats = 0x330;
            static constexpr std::uintptr_t DetailedStats = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverviewStats", 0x330, "ArrayProperty"},
            {"DetailedStats", 0x340, "ObjectProperty"},
        }};
    };

    struct FortSquadTypeLandingPageBase
    {
        static constexpr std::string_view Name = "FortSquadTypeLandingPageBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActivatablePanel";
        struct Offsets
        {
            static constexpr std::uintptr_t bReadOnlyModeWIFE = 0x580;
            static constexpr std::uintptr_t SquadType = 0x581;
            static constexpr std::uintptr_t BackInputActionRowHandle = 0x588;
            static constexpr std::uintptr_t ItemManagementScreenFilter = 0x598;
            static constexpr std::uintptr_t SquadSelectorButtons = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bReadOnlyModeWIFE", 0x580, "BoolProperty"},
            {"SquadType", 0x581, "EnumProperty"},
            {"BackInputActionRowHandle", 0x588, "StructProperty"},
            {"ItemManagementScreenFilter", 0x598, "EnumProperty"},
            {"SquadSelectorButtons", 0x5A0, "ArrayProperty"},
        }};
    };

    struct FortStatIcon
    {
        static constexpr std::string_view Name = "FortStatIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Attribute = 0x330;
            static constexpr std::uintptr_t ImageSize = 0x368;
            static constexpr std::uintptr_t Icon = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Attribute", 0x330, "StructProperty"},
            {"ImageSize", 0x368, "ByteProperty"},
            {"Icon", 0x370, "ObjectProperty"},
        }};
    };

    struct FortStatsOverviewDetailsBase
    {
        static constexpr std::string_view Name = "FortStatsOverviewDetailsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OverviewStats = 0x330;
            static constexpr std::uintptr_t DetailedStats = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverviewStats", 0x330, "ArrayProperty"},
            {"DetailedStats", 0x340, "ObjectProperty"},
        }};
    };

    struct FortStoreOpeningCardPack
    {
        static constexpr std::string_view Name = "FortStoreOpeningCardPack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedStoreState = 0x4A8;
            static constexpr std::uintptr_t Store_Summary = 0x4B0;
            static constexpr std::uintptr_t CachedCards = 0x4B8;
            static constexpr std::uintptr_t CardItemWidgetType = 0x4C8;
            static constexpr std::uintptr_t CardItemWidgetStyle = 0x4D0;
            static constexpr std::uintptr_t CachedCardArraySinglePack = 0x4D8;
            static constexpr std::uintptr_t CachedCardArrayMultiplePacks = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CachedStoreState", 0x4A8, "EnumProperty"},
            {"Store_Summary", 0x4B0, "ObjectProperty"},
            {"CachedCards", 0x4B8, "ArrayProperty"},
            {"CardItemWidgetType", 0x4C8, "ClassProperty"},
            {"CardItemWidgetStyle", 0x4D0, "ClassProperty"},
            {"CachedCardArraySinglePack", 0x4D8, "ArrayProperty"},
            {"CachedCardArrayMultiplePacks", 0x4E8, "ArrayProperty"},
        }};
    };

    struct FortStoreRootTabs
    {
        static constexpr std::string_view Name = "FortStoreRootTabs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t StoreTabsMap = 0x4A0;
            static constexpr std::uintptr_t TabsLoot = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StoreTabsMap", 0x4A0, "MapProperty"},
            {"TabsLoot", 0x4B0, "ObjectProperty"},
        }};
    };

    struct FortStoreSummary
    {
        static constexpr std::string_view Name = "FortStoreSummary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MulchConfirmationModalClass = 0x4A8;
            static constexpr std::uintptr_t StoreCardObjects = 0x4B0;
            static constexpr std::uintptr_t TileView = 0x4C0;
            static constexpr std::uintptr_t MulchConfirmationModal = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MulchConfirmationModalClass", 0x4A8, "ClassProperty"},
            {"StoreCardObjects", 0x4B0, "ArrayProperty"},
            {"TileView", 0x4C0, "ObjectProperty"},
            {"MulchConfirmationModal", 0x4E0, "ObjectProperty"},
        }};
    };

    struct FortStoreSummaryItemButton
    {
        static constexpr std::string_view Name = "FortStoreSummaryItemButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HasAnItemMarkedForMulching = 0x15D0;
            static constexpr std::uintptr_t PopupMenuAnchor = 0x1600;
            static constexpr std::uintptr_t CachedCard = 0x1608;
            static constexpr std::uintptr_t StoreCardObject = 0x1620;
            static constexpr std::uintptr_t InventoryContext = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HasAnItemMarkedForMulching", 0x15D0, "BoolProperty"},
            {"PopupMenuAnchor", 0x1600, "ObjectProperty"},
            {"CachedCard", 0x1608, "StructProperty"},
            {"StoreCardObject", 0x1620, "ObjectProperty"},
            {"InventoryContext", 0x1628, "ObjectProperty"},
        }};
    };

    struct FortStoreSummaryItemPopupMenu
    {
        static constexpr std::string_view Name = "FortStoreSummaryItemPopupMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPopupMenu";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInputStack = 0x560;
            static constexpr std::uintptr_t OwningMenuAnchor = 0x564;
            static constexpr std::uintptr_t ContextProvidingObject = 0x56C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseInputStack", 0x560, "BoolProperty"},
            {"OwningMenuAnchor", 0x564, "WeakObjectProperty"},
            {"ContextProvidingObject", 0x56C, "WeakObjectProperty"},
        }};
    };

    struct FortSurvivorSquadManagementScreen
    {
        static constexpr std::string_view Name = "FortSurvivorSquadManagementScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadManagementScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StatMatchesWidget = 0x6A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StatMatchesWidget", 0x6A0, "ObjectProperty"},
        }};
    };

    struct FortSurvivorSquadSelectorButton
    {
        static constexpr std::string_view Name = "FortSurvivorSquadSelectorButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadSelectorButton";
        struct Offsets
        {
            static constexpr std::uintptr_t FortStatAttributes = 0x1640;
            static constexpr std::uintptr_t FortTeamStatAttributes = 0x1650;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FortStatAttributes", 0x1640, "ArrayProperty"},
            {"FortTeamStatAttributes", 0x1650, "ArrayProperty"},
        }};
    };

    struct FortSurvivorSquadStatMatchBase
    {
        static constexpr std::string_view Name = "FortSurvivorSquadStatMatchBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t StatMatch = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StatMatch", 0x340, "StructProperty"},
        }};
    };

    struct FortSurvivorSquadStatMatchesBase
    {
        static constexpr std::string_view Name = "FortSurvivorSquadStatMatchesBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSquadStatDetailsWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t StatMatchClass = 0x360;
            static constexpr std::uintptr_t bSummaryView = 0x368;
            static constexpr std::uintptr_t StatMatches = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StatMatchClass", 0x360, "ClassProperty"},
            {"bSummaryView", 0x368, "BoolProperty"},
            {"StatMatches", 0x370, "ArrayProperty"},
        }};
    };

    struct FortSurvivorSquadSummaryStatItem
    {
        static constexpr std::string_view Name = "FortSurvivorSquadSummaryStatItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ImageSize = 0x330;
            static constexpr std::uintptr_t Icon = 0x338;
            static constexpr std::uintptr_t Value = 0x340;
            static constexpr std::uintptr_t Name = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ImageSize", 0x330, "ByteProperty"},
            {"Icon", 0x338, "ObjectProperty"},
            {"Value", 0x340, "ObjectProperty"},
            {"Name", 0x348, "ObjectProperty"},
        }};
    };

    struct FortTheaterSelect
    {
        static constexpr std::string_view Name = "FortTheaterSelect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlayMain = 0x4B0;
            static constexpr std::uintptr_t DefaultRequiredCompletedQuest = 0x4C8;
            static constexpr std::uintptr_t bIsMainTab = 0x4D0;
            static constexpr std::uintptr_t BackInputActionRowHandle = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OverlayMain", 0x4B0, "ObjectProperty"},
            {"DefaultRequiredCompletedQuest", 0x4C8, "ObjectProperty"},
            {"bIsMainTab", 0x4D0, "BoolProperty"},
            {"BackInputActionRowHandle", 0x4D8, "StructProperty"},
        }};
    };

    struct FortUISTWNavigationLibrary
    {
        static constexpr std::string_view Name = "FortUISTWNavigationLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortUISTWScreenData
    {
        static constexpr std::string_view Name = "FortUISTWScreenData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ScreenData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScreenData", 0x28, "MapProperty"},
        }};
    };

    struct FortUIStateWidget_Cinematic
    {
        static constexpr std::string_view Name = "FortUIStateWidget_Cinematic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIStateWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStack_PrimaryContent = 0x4B0;
            static constexpr std::uintptr_t bUseDynamicUI = 0x4B8;
            static constexpr std::uintptr_t bForceUseDynamicUI = 0x4B9;
            static constexpr std::uintptr_t DynamicUILayer = 0x4C0;
            static constexpr std::uintptr_t ScenesStack = 0x4D0;
            static constexpr std::uintptr_t StackUnallowScene = 0x4E0;
            static constexpr std::uintptr_t ActionDomain = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WidgetStack_PrimaryContent", 0x4B0, "ObjectProperty"},
            {"bUseDynamicUI", 0x4B8, "BoolProperty"},
            {"bForceUseDynamicUI", 0x4B9, "BoolProperty"},
            {"DynamicUILayer", 0x4C0, "StrProperty"},
            {"ScenesStack", 0x4D0, "ArrayProperty"},
            {"StackUnallowScene", 0x4E0, "ObjectProperty"},
            {"ActionDomain", 0x4E8, "SoftObjectProperty"},
        }};
    };

    struct FortUIStateWidget_STW
    {
        static constexpr std::string_view Name = "FortUIStateWidget_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIStateWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SideMenu_STW = 0x528;
            static constexpr std::uintptr_t OnSideMenuOpenSound = 0x530;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SideMenu_STW", 0x528, "ObjectProperty"},
            {"OnSideMenuOpenSound", 0x530, "ObjectProperty"},
        }};
    };

    struct FortUIStateWidget_STWFrontend
    {
        static constexpr std::string_view Name = "FortUIStateWidget_STWFrontend";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIStateWidget_STW";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatWidget_V3 = 0x560;
            static constexpr std::uintptr_t BottomBar_STW = 0x568;
            static constexpr std::uintptr_t TopBar_STW = 0x570;
            static constexpr std::uintptr_t MainTabsScreen = 0x578;
            static constexpr std::uintptr_t ActiveGuardScreen = 0x580;
            static constexpr std::uintptr_t ActiveWidgetSlotWrapper = 0x588;
            static constexpr std::uintptr_t bShowFrontendOnLoad = 0x590;
            static constexpr std::uintptr_t PlayerBannedScreenClass = 0x598;
            static constexpr std::uintptr_t ScriptedActionsToRegister = 0x5A0;
            static constexpr std::uintptr_t DeferredSquadAutoSlottingStoreStates = 0x5B0;
            static constexpr std::uintptr_t PendingRemovalGiftBoxes = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ChatWidget_V3", 0x560, "ObjectProperty"},
            {"BottomBar_STW", 0x568, "ObjectProperty"},
            {"TopBar_STW", 0x570, "ObjectProperty"},
            {"MainTabsScreen", 0x578, "WeakObjectProperty"},
            {"ActiveGuardScreen", 0x580, "ObjectProperty"},
            {"ActiveWidgetSlotWrapper", 0x588, "ObjectProperty"},
            {"bShowFrontendOnLoad", 0x590, "BoolProperty"},
            {"PlayerBannedScreenClass", 0x598, "ClassProperty"},
            {"ScriptedActionsToRegister", 0x5A0, "ArrayProperty"},
            {"DeferredSquadAutoSlottingStoreStates", 0x5B0, "ArrayProperty"},
            {"PendingRemovalGiftBoxes", 0x608, "ArrayProperty"},
        }};
    };

    struct FortUIStateWidget_STWJoinServer
    {
        static constexpr std::string_view Name = "FortUIStateWidget_STWJoinServer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIStateWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RejoinWindow = 0x520;
            static constexpr std::uintptr_t RejoinWindowClass = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RejoinWindow", 0x520, "ObjectProperty"},
            {"RejoinWindowClass", 0x528, "ClassProperty"},
        }};
    };

    struct FortUpgradeDetailsBase
    {
        static constexpr std::string_view Name = "FortUpgradeDetailsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t VideoPlayer = 0x330;
            static constexpr std::uintptr_t UpgradeInfo = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VideoPlayer", 0x330, "ObjectProperty"},
            {"UpgradeInfo", 0x338, "ObjectProperty"},
        }};
    };

    struct FortUpgradeInfo
    {
        static constexpr std::string_view Name = "FortUpgradeInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeItemDef = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NodeItemDef", 0x48, "ObjectProperty"},
        }};
    };

    struct FortUpgradeScreenBase
    {
        static constexpr std::string_view Name = "FortUpgradeScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t UpgradesTileView = 0x570;
            static constexpr std::uintptr_t UpgradeTileViewLoadGuard = 0x578;
            static constexpr std::uintptr_t Details = 0x580;
            static constexpr std::uintptr_t TabToNodeTypeMap = 0x588;
            static constexpr std::uintptr_t UpgradesRespecToken = 0x598;
            static constexpr std::uintptr_t RespecInputAction = 0x5B0;
            static constexpr std::uintptr_t StartPreviewUpgradesInputAction = 0x5C0;
            static constexpr std::uintptr_t StopPreviewUpgradesInputAction = 0x5D0;
            static constexpr std::uintptr_t BackInputAction = 0x5E0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UpgradesTileView", 0x570, "ObjectProperty"},
            {"UpgradeTileViewLoadGuard", 0x578, "ObjectProperty"},
            {"Details", 0x580, "ObjectProperty"},
            {"TabToNodeTypeMap", 0x588, "MapProperty"},
            {"UpgradesRespecToken", 0x598, "ObjectProperty"},
            {"RespecInputAction", 0x5B0, "StructProperty"},
            {"StartPreviewUpgradesInputAction", 0x5C0, "StructProperty"},
            {"StopPreviewUpgradesInputAction", 0x5D0, "StructProperty"},
            {"BackInputAction", 0x5E0, "StructProperty"},
        }};
    };

    struct FortUpgradeScreenBase_Legacy
    {
        static constexpr std::string_view Name = "FortUpgradeScreenBase_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t UpgradesTabSelector = 0x560;
            static constexpr std::uintptr_t UpgradesTileView = 0x568;
            static constexpr std::uintptr_t UpgradeTileViewLoadGuard = 0x570;
            static constexpr std::uintptr_t Details = 0x578;
            static constexpr std::uintptr_t TabToNodeTypeMap = 0x580;
            static constexpr std::uintptr_t UpgradesRespecToken = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UpgradesTabSelector", 0x560, "ObjectProperty"},
            {"UpgradesTileView", 0x568, "ObjectProperty"},
            {"UpgradeTileViewLoadGuard", 0x570, "ObjectProperty"},
            {"Details", 0x578, "ObjectProperty"},
            {"TabToNodeTypeMap", 0x580, "MapProperty"},
            {"UpgradesRespecToken", 0x590, "ObjectProperty"},
        }};
    };

    struct FortUpgradeTileBase
    {
        static constexpr std::string_view Name = "FortUpgradeTileBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t UpgradeInfo = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpgradeInfo", 0x1628, "ObjectProperty"},
        }};
    };

    struct FortWorkerSetBonusIcon
    {
        static constexpr std::string_view Name = "FortWorkerSetBonusIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTag = 0x330;
            static constexpr std::uintptr_t ImageSize = 0x334;
            static constexpr std::uintptr_t Icon = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayTag", 0x330, "StructProperty"},
            {"ImageSize", 0x334, "ByteProperty"},
            {"Icon", 0x338, "ObjectProperty"},
        }};
    };

    struct InspectScreenInitData
    {
        static constexpr std::string_view Name = "InspectScreenInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InitParams = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InitParams", 0x28, "StructProperty"},
        }};
    };

    struct MgmtTabsScreen_STW
    {
        static constexpr std::string_view Name = "MgmtTabsScreen_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnMgmtTabsScreenDestroyed = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BP_OnMgmtTabsScreenDestroyed", 0x4A8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ObjectivesPage
    {
        static constexpr std::string_view Name = "ObjectivesPage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t LeaveInventoryInputHandle = 0x560;
            static constexpr std::uintptr_t BackInputHandle = 0x570;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LeaveInventoryInputHandle", 0x560, "StructProperty"},
            {"BackInputHandle", 0x570, "StructProperty"},
        }};
    };

    struct ResultsSkipInterface
    {
        static constexpr std::string_view Name = "ResultsSkipInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReticleWidgetsContainer
    {
        static constexpr std::string_view Name = "ReticleWidgetsContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IndicatorContent = 0x330;
            static constexpr std::uintptr_t WeaponReticleExtensionList = 0x338;
            static constexpr std::uintptr_t CurrentCustomReticleExtension = 0x348;
            static constexpr std::uintptr_t RecentReticleExtensions = 0x350;
            static constexpr std::uintptr_t ReticleExtensionSize = 0x364;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IndicatorContent", 0x330, "ObjectProperty"},
            {"WeaponReticleExtensionList", 0x338, "ArrayProperty"},
            {"CurrentCustomReticleExtension", 0x348, "ObjectProperty"},
            {"RecentReticleExtensions", 0x350, "ArrayProperty"},
            {"ReticleExtensionSize", 0x364, "IntProperty"},
        }};
    };

    struct STWDeathWidget
    {
        static constexpr std::string_view Name = "STWDeathWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousTeammateActionRowHandle = 0x4A0;
            static constexpr std::uintptr_t NextTeammateActionRowHandle = 0x4B0;
            static constexpr std::uintptr_t SpectatingPlayerBanner = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PreviousTeammateActionRowHandle", 0x4A0, "StructProperty"},
            {"NextTeammateActionRowHandle", 0x4B0, "StructProperty"},
            {"SpectatingPlayerBanner", 0x4C8, "ObjectProperty"},
        }};
    };

    struct STWDynUIDirectorInterface
    {
        static constexpr std::string_view Name = "STWDynUIDirectorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct STWEventRouterLibrary
    {
        static constexpr std::string_view Name = "STWEventRouterLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct STWFortPickupManagerWidget
    {
        static constexpr std::string_view Name = "STWFortPickupManagerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupManagerWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Panel_AllResources = 0x370;
            static constexpr std::uintptr_t CurrentSpendableVisibleWidget = 0x378;
            static constexpr std::uintptr_t GoldSpendablesActorTags = 0x380;
            static constexpr std::uintptr_t OverlapGoldSpendableSphereRadius = 0x3A0;
            static constexpr std::uintptr_t ResourceWidgets = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Panel_AllResources", 0x370, "ObjectProperty"},
            {"CurrentSpendableVisibleWidget", 0x378, "WeakObjectProperty"},
            {"GoldSpendablesActorTags", 0x380, "StructProperty"},
            {"OverlapGoldSpendableSphereRadius", 0x3A0, "FloatProperty"},
            {"ResourceWidgets", 0x3A8, "ArrayProperty"},
        }};
    };

    struct STWHUDDynUIConv
    {
        static constexpr std::string_view Name = "STWHUDDynUIConv";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BottomBar_STW = 0x330;
            static constexpr std::uintptr_t PersistentHUDContent = 0x338;
            static constexpr std::uintptr_t PersistentHUDScaleBox = 0x340;
            static constexpr std::uintptr_t ChatScaleBox = 0x348;
            static constexpr std::uintptr_t ChatSpacer = 0x350;
            static constexpr std::uintptr_t SafeZone_CameraModeContent = 0x358;
            static constexpr std::uintptr_t DeathWidget = 0x360;
            static constexpr std::uintptr_t PickerData = 0x368;
            static constexpr std::uintptr_t LegacyRadialPickerClass = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"BottomBar_STW", 0x330, "ObjectProperty"},
            {"PersistentHUDContent", 0x338, "ObjectProperty"},
            {"PersistentHUDScaleBox", 0x340, "ObjectProperty"},
            {"ChatScaleBox", 0x348, "ObjectProperty"},
            {"ChatSpacer", 0x350, "ObjectProperty"},
            {"SafeZone_CameraModeContent", 0x358, "ObjectProperty"},
            {"DeathWidget", 0x360, "ObjectProperty"},
            {"PickerData", 0x368, "ObjectProperty"},
            {"LegacyRadialPickerClass", 0x370, "SoftClassProperty"},
        }};
    };

    struct STWPowerHourAlert
    {
        static constexpr std::string_view Name = "STWPowerHourAlert";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x330;
            static constexpr std::uintptr_t Body = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Title", 0x330, "TextProperty"},
            {"Body", 0x340, "TextProperty"},
        }};
    };

    struct STWPowerHourSubsystem
    {
        static constexpr std::string_view Name = "STWPowerHourSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCountdownActiveChanged = 0x30;
            static constexpr std::uintptr_t OnCountdownUpdated = 0x40;
            static constexpr std::uintptr_t OnPowerHourStarted = 0x50;
            static constexpr std::uintptr_t OnPowerHourEnded = 0x60;
            static constexpr std::uintptr_t EventSyncRate = 0xE0;
            static constexpr std::uintptr_t TimeUntilPowerHourDurationSeconds = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnCountdownActiveChanged", 0x30, "MulticastInlineDelegateProperty"},
            {"OnCountdownUpdated", 0x40, "MulticastInlineDelegateProperty"},
            {"OnPowerHourStarted", 0x50, "MulticastInlineDelegateProperty"},
            {"OnPowerHourEnded", 0x60, "MulticastInlineDelegateProperty"},
            {"EventSyncRate", 0xE0, "FloatProperty"},
            {"TimeUntilPowerHourDurationSeconds", 0xE4, "FloatProperty"},
        }};
    };

    struct STWRollbacksBP
    {
        static constexpr std::string_view Name = "STWRollbacksBP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SaveTheWorldRegisterUIManager
    {
        static constexpr std::string_view Name = "SaveTheWorldRegisterUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SaveTheWorldRequestsFeatureAction
    {
        static constexpr std::string_view Name = "SaveTheWorldRequestsFeatureAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemManagementScreenClass_STW = 0x28;
            static constexpr std::uintptr_t ItemInspectionScreenClass = 0x48;
            static constexpr std::uintptr_t HeroLoadoutScreenClass = 0x68;
            static constexpr std::uintptr_t SurvivorSquadManagementScreenClass = 0x88;
            static constexpr std::uintptr_t ItemManagementScreenClass = 0xA8;
            static constexpr std::uintptr_t HelpScreenData = 0xC8;
            static constexpr std::uintptr_t HelpPanelClass = 0xE8;
            static constexpr std::uintptr_t BoostsClass = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ItemManagementScreenClass_STW", 0x28, "SoftClassProperty"},
            {"ItemInspectionScreenClass", 0x48, "SoftClassProperty"},
            {"HeroLoadoutScreenClass", 0x68, "SoftClassProperty"},
            {"SurvivorSquadManagementScreenClass", 0x88, "SoftClassProperty"},
            {"ItemManagementScreenClass", 0xA8, "SoftClassProperty"},
            {"HelpScreenData", 0xC8, "SoftObjectProperty"},
            {"HelpPanelClass", 0xE8, "SoftClassProperty"},
            {"BoostsClass", 0x108, "SoftClassProperty"},
        }};
    };

    struct SaveTheWorldStatsHelpers
    {
        static constexpr std::string_view Name = "SaveTheWorldStatsHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SquadCommsEmoteWheelCategoryConfig_STW
    {
        static constexpr std::string_view Name = "SquadCommsEmoteWheelCategoryConfig_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t SquadCommsBank = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SquadCommsBank", 0xA8, "SoftObjectProperty"},
        }};
    };

    struct SquadCommsEmoteWheelCategoryVM_STW
    {
        static constexpr std::string_view Name = "SquadCommsEmoteWheelCategoryVM_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelCategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x78;
            static constexpr std::uintptr_t EquippedItems = 0x80;
            static constexpr std::uintptr_t SubTabs = 0x90;
            static constexpr std::uintptr_t ActiveSubTab = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Config", 0x78, "ObjectProperty"},
            {"EquippedItems", 0x80, "ArrayProperty"},
            {"SubTabs", 0x90, "ArrayProperty"},
            {"ActiveSubTab", 0xA0, "ObjectProperty"},
        }};
    };

    struct SquadCommsEmoteWheelItemVM_STW
    {
        static constexpr std::string_view Name = "SquadCommsEmoteWheelItemVM_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EmoteWheelItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t Entry = 0xB0;
            static constexpr std::uintptr_t QuickChatActiveEntry = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entry", 0xB0, "StructProperty"},
            {"QuickChatActiveEntry", 0x190, "StructProperty"},
        }};
    };

    struct StWHUD
    {
        static constexpr std::string_view Name = "StWHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUIStateWidget_STW";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSTWHUDMenuStackChanged = 0x558;
            static constexpr std::uintptr_t GeneralIndicators = 0x568;
            static constexpr std::uintptr_t ManagementTabsScreenClass = 0x570;
            static constexpr std::uintptr_t PostGameScreenClass = 0x5A0;
            static constexpr std::uintptr_t DefenderConfigPanelClass = 0x5C0;
            static constexpr std::uintptr_t DynUIConvertedWidget = 0x5E8;
            static constexpr std::uintptr_t STWDynUIDirector = 0x5F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnSTWHUDMenuStackChanged", 0x558, "MulticastInlineDelegateProperty"},
            {"GeneralIndicators", 0x568, "ObjectProperty"},
            {"ManagementTabsScreenClass", 0x570, "SoftClassProperty"},
            {"PostGameScreenClass", 0x5A0, "SoftClassProperty"},
            {"DefenderConfigPanelClass", 0x5C0, "SoftClassProperty"},
            {"DynUIConvertedWidget", 0x5E8, "ObjectProperty"},
            {"STWDynUIDirector", 0x5F0, "ObjectProperty"},
        }};
    };

    struct StoreCardObject
    {
        static constexpr std::string_view Name = "StoreCardObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Card = 0x28;
            static constexpr std::uintptr_t OriginalIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Card", 0x28, "StructProperty"},
            {"OriginalIndex", 0x40, "IntProperty"},
        }};
    };

    struct TopBar_STW
    {
        static constexpr std::string_view Name = "TopBar_STW";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PhoenixSeasonDisplayInfoMap = 0x4A0;
            static constexpr std::uintptr_t Image_ActiveInvitesNotification = 0x4A8;
            static constexpr std::uintptr_t Button_Social = 0x4B0;
            static constexpr std::uintptr_t Button_SidebarAvatar = 0x4B8;
            static constexpr std::uintptr_t MiniPartyBar = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PhoenixSeasonDisplayInfoMap", 0x4A0, "ObjectProperty"},
            {"Image_ActiveInvitesNotification", 0x4A8, "ObjectProperty"},
            {"Button_Social", 0x4B0, "ObjectProperty"},
            {"Button_SidebarAvatar", 0x4B8, "ObjectProperty"},
            {"MiniPartyBar", 0x4C0, "ObjectProperty"},
        }};
    };

    struct XpBoostsRootWidget
    {
        static constexpr std::string_view Name = "XpBoostsRootWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t BackInputActionRowHandle = 0x568;
            static constexpr std::uintptr_t ShowLeaderboardInputActionRowHandle = 0x578;
            static constexpr std::uintptr_t bCanShowLeaderboard = 0x588;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BackInputActionRowHandle", 0x568, "StructProperty"},
            {"ShowLeaderboardInputActionRowHandle", 0x578, "StructProperty"},
            {"bCanShowLeaderboard", 0x588, "BoolProperty"},
        }};
    };

}
