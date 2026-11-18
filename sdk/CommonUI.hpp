#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CommonUI
{
    struct AnalogSlider
    {
        static constexpr std::string_view Name = "AnalogSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Slider";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAnalogCapture = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnAnalogCapture", 0x650, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ButtonEventComponent
    {
        static constexpr std::string_view Name = "ButtonEventComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnParentClicked = 0x58;
            static constexpr std::uintptr_t OnParentDoubleClicked = 0x68;
            static constexpr std::uintptr_t OnParentPressed = 0x78;
            static constexpr std::uintptr_t OnParentReleased = 0x88;
            static constexpr std::uintptr_t OnParentHovered = 0x98;
            static constexpr std::uintptr_t OnParentUnhovered = 0xA8;
            static constexpr std::uintptr_t OnParentFocusReceived = 0xB8;
            static constexpr std::uintptr_t OnParentFocusLost = 0xC8;
            static constexpr std::uintptr_t OnParentLockClicked = 0xD8;
            static constexpr std::uintptr_t OnParentLockDoubleClicked = 0xE8;
            static constexpr std::uintptr_t OnParentEnabled = 0xF8;
            static constexpr std::uintptr_t OnParentDisabled = 0x108;
            static constexpr std::uintptr_t OnParentSelectedChanged = 0x118;
            static constexpr std::uintptr_t OnParentEntryReleased = 0x128;
            static constexpr std::uintptr_t OnParentItemSelectionChanged = 0x138;
            static constexpr std::uintptr_t OnParentItemExpansionChanged = 0x148;
            static constexpr std::uintptr_t OnParentListItemObjectSet = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"OnParentClicked", 0x58, "MulticastInlineDelegateProperty"},
            {"OnParentDoubleClicked", 0x68, "MulticastInlineDelegateProperty"},
            {"OnParentPressed", 0x78, "MulticastInlineDelegateProperty"},
            {"OnParentReleased", 0x88, "MulticastInlineDelegateProperty"},
            {"OnParentHovered", 0x98, "MulticastInlineDelegateProperty"},
            {"OnParentUnhovered", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnParentFocusReceived", 0xB8, "MulticastInlineDelegateProperty"},
            {"OnParentFocusLost", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnParentLockClicked", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnParentLockDoubleClicked", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnParentEnabled", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnParentDisabled", 0x108, "MulticastInlineDelegateProperty"},
            {"OnParentSelectedChanged", 0x118, "MulticastInlineDelegateProperty"},
            {"OnParentEntryReleased", 0x128, "MulticastInlineDelegateProperty"},
            {"OnParentItemSelectionChanged", 0x138, "MulticastInlineDelegateProperty"},
            {"OnParentItemExpansionChanged", 0x148, "MulticastInlineDelegateProperty"},
            {"OnParentListItemObjectSet", 0x158, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetParentButton",
            "IsEnabled",
            "IsFocused",
            "IsHovered",
            "IsInteractionEnabled",
            "IsLocked",
            "IsPressed",
            "IsSelected",
        }};
    };

    struct CommonActionHandlerInterface
    {
        static constexpr std::string_view Name = "CommonActionHandlerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonActionWidget
    {
        static constexpr std::string_view Name = "CommonActionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInputMethodChanged = 0x168;
            static constexpr std::uintptr_t OnInputIconUpdated = 0x178;
            static constexpr std::uintptr_t ProgressMaterialBrush = 0x190;
            static constexpr std::uintptr_t ProgressMaterialParam = 0x240;
            static constexpr std::uintptr_t IconRimBrush = 0x250;
            static constexpr std::uintptr_t InputIconOverrideSize = 0x300;
            static constexpr std::uintptr_t InputActions = 0x310;
            static constexpr std::uintptr_t EnhancedInputAction = 0x320;
            static constexpr std::uintptr_t ProgressDynamicMaterial = 0x330;
            static constexpr std::uintptr_t Icon = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnInputMethodChanged", 0x168, "MulticastInlineDelegateProperty"},
            {"OnInputIconUpdated", 0x178, "MulticastInlineDelegateProperty"},
            {"ProgressMaterialBrush", 0x190, "StructProperty"},
            {"ProgressMaterialParam", 0x240, "NameProperty"},
            {"IconRimBrush", 0x250, "StructProperty"},
            {"InputIconOverrideSize", 0x300, "StructProperty"},
            {"InputActions", 0x310, "ArrayProperty"},
            {"EnhancedInputAction", 0x320, "ObjectProperty"},
            {"ProgressDynamicMaterial", 0x330, "ObjectProperty"},
            {"Icon", 0x380, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "GetDisplayText",
            "GetEnhancedInputAction",
            "GetIcon",
            "GetIconDynamicMaterial",
            "IsHeldAction",
            "OnEnhancedInputMappingsRebuilt",
            "SetEnhancedInputAction",
            "SetIconRimBrush",
            "SetInputAction",
            "SetInputActionBinding",
            "SetInputActions",
        }};
    };

    struct CommonActivatableWidget
    {
        static constexpr std::string_view Name = "CommonActivatableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
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

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "ActivateWidget",
            "BP_GetDesiredFocusTarget",
            "BP_GetDesiredInputConfig",
            "BP_OnActivated",
            "BP_OnDeactivated",
            "BP_OnHandleBackAction",
            "BindVisibilityToActivation",
            "ClearFocusRestorationTarget",
            "DeactivateWidget",
            "GetDesiredFocusTarget",
            "HandleEnhancedInputMappingsRebuilt",
            "IsActivated",
            "RequestRefreshFocus",
            "SetBindVisibilities",
        }};
    };

    struct CommonActivatableWidgetContainerBase
    {
        static constexpr std::string_view Name = "CommonActivatableWidgetContainerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionType = 0x180;
            static constexpr std::uintptr_t TransitionCurveType = 0x181;
            static constexpr std::uintptr_t TransitionDuration = 0x184;
            static constexpr std::uintptr_t bResetPoolWhenReleasingSlateResources = 0x188;
            static constexpr std::uintptr_t TransitionFallbackStrategy = 0x189;
            static constexpr std::uintptr_t WidgetList = 0x190;
            static constexpr std::uintptr_t DisplayedWidget = 0x1A0;
            static constexpr std::uintptr_t GeneratedWidgetsPool = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TransitionType", 0x180, "EnumProperty"},
            {"TransitionCurveType", 0x181, "EnumProperty"},
            {"TransitionDuration", 0x184, "FloatProperty"},
            {"bResetPoolWhenReleasingSlateResources", 0x188, "BoolProperty"},
            {"TransitionFallbackStrategy", 0x189, "EnumProperty"},
            {"WidgetList", 0x190, "ArrayProperty"},
            {"DisplayedWidget", 0x1A0, "ObjectProperty"},
            {"GeneratedWidgetsPool", 0x1A8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "BP_AddWidget",
            "ClearWidgets",
            "GetActiveWidget",
            "GetTransitionDuration",
            "RemoveWidget",
            "SetTransitionDuration",
        }};
    };

    struct CommonActivatableWidgetQueue
    {
        static constexpr std::string_view Name = "CommonActivatableWidgetQueue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidgetContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionType = 0x180;
            static constexpr std::uintptr_t TransitionCurveType = 0x181;
            static constexpr std::uintptr_t TransitionDuration = 0x184;
            static constexpr std::uintptr_t bResetPoolWhenReleasingSlateResources = 0x188;
            static constexpr std::uintptr_t TransitionFallbackStrategy = 0x189;
            static constexpr std::uintptr_t WidgetList = 0x190;
            static constexpr std::uintptr_t DisplayedWidget = 0x1A0;
            static constexpr std::uintptr_t GeneratedWidgetsPool = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TransitionType", 0x180, "EnumProperty"},
            {"TransitionCurveType", 0x181, "EnumProperty"},
            {"TransitionDuration", 0x184, "FloatProperty"},
            {"bResetPoolWhenReleasingSlateResources", 0x188, "BoolProperty"},
            {"TransitionFallbackStrategy", 0x189, "EnumProperty"},
            {"WidgetList", 0x190, "ArrayProperty"},
            {"DisplayedWidget", 0x1A0, "ObjectProperty"},
            {"GeneratedWidgetsPool", 0x1A8, "StructProperty"},
        }};
    };

    struct CommonActivatableWidgetStack
    {
        static constexpr std::string_view Name = "CommonActivatableWidgetStack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidgetContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RootContentWidgetClass = 0x250;
            static constexpr std::uintptr_t RootContentWidget = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootContentWidgetClass", 0x250, "ClassProperty"},
            {"RootContentWidget", 0x258, "ObjectProperty"},
        }};
    };

    struct CommonActivatableWidgetSwitcher
    {
        static constexpr std::string_view Name = "CommonActivatableWidgetSwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonAnimatedSwitcher";
        struct Offsets
        {
            static constexpr std::uintptr_t bClearFocusRestorationTargetOfDeactivatedWidgets = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bClearFocusRestorationTargetOfDeactivatedWidgets", 0x220, "BoolProperty"},
        }};
    };

    struct CommonAnalogCursorSettings
    {
        static constexpr std::string_view Name = "CommonAnalogCursorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreprocessorPriority = 0x0;
            static constexpr std::uintptr_t PreprocessorRegistrationInfo = 0x4;
            static constexpr std::uintptr_t bEnableCursorAcceleration = 0xC;
            static constexpr std::uintptr_t CursorAcceleration = 0x10;
            static constexpr std::uintptr_t CursorMaxSpeed = 0x14;
            static constexpr std::uintptr_t CursorDeadZone = 0x18;
            static constexpr std::uintptr_t HoverSlowdownFactor = 0x1C;
            static constexpr std::uintptr_t ScrollDeadZone = 0x20;
            static constexpr std::uintptr_t ScrollUpdatePeriod = 0x24;
            static constexpr std::uintptr_t ScrollMultiplier = 0x28;
            static constexpr std::uintptr_t MaxHoldDuration = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PreprocessorPriority", 0x0, "IntProperty"},
            {"PreprocessorRegistrationInfo", 0x4, "StructProperty"},
            {"bEnableCursorAcceleration", 0xC, "BoolProperty"},
            {"CursorAcceleration", 0x10, "FloatProperty"},
            {"CursorMaxSpeed", 0x14, "FloatProperty"},
            {"CursorDeadZone", 0x18, "FloatProperty"},
            {"HoverSlowdownFactor", 0x1C, "FloatProperty"},
            {"ScrollDeadZone", 0x20, "FloatProperty"},
            {"ScrollUpdatePeriod", 0x24, "FloatProperty"},
            {"ScrollMultiplier", 0x28, "FloatProperty"},
            {"MaxHoldDuration", 0x2C, "FloatProperty"},
        }};
    };

    struct CommonAnimatedSwitcher
    {
        static constexpr std::string_view Name = "CommonAnimatedSwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetSwitcher";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActiveWidgetIndexChangedBP = 0x1C8;
            static constexpr std::uintptr_t TransitionType = 0x1D8;
            static constexpr std::uintptr_t TransitionCurveType = 0x1D9;
            static constexpr std::uintptr_t TransitionDuration = 0x1DC;
            static constexpr std::uintptr_t TransitionFallbackStrategy = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnActiveWidgetIndexChangedBP", 0x1C8, "MulticastInlineDelegateProperty"},
            {"TransitionType", 0x1D8, "EnumProperty"},
            {"TransitionCurveType", 0x1D9, "EnumProperty"},
            {"TransitionDuration", 0x1DC, "FloatProperty"},
            {"TransitionFallbackStrategy", 0x1E0, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ActivateNextWidget",
            "ActivatePreviousWidget",
            "HasWidgets",
            "IsCurrentlySwitching",
            "IsTransitionPlaying",
            "SetDisableTransitionAnimation",
        }};
    };

    struct CommonBorder
    {
        static constexpr std::string_view Name = "CommonBorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Border";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x2E0;
            static constexpr std::uintptr_t bReducePaddingBySafezone = 0x2E8;
            static constexpr std::uintptr_t MinimumPadding = 0x2EC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Style", 0x2E0, "ClassProperty"},
            {"bReducePaddingBySafezone", 0x2E8, "BoolProperty"},
            {"MinimumPadding", 0x2EC, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetStyle",
        }};
    };

    struct CommonBorderStyle
    {
        static constexpr std::string_view Name = "CommonBorderStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Background = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Background", 0x30, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetBackgroundBrush",
        }};
    };

    struct CommonBoundActionBar
    {
        static constexpr std::string_view Name = "CommonBoundActionBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicEntryBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionButtonClass = 0x208;
            static constexpr std::uintptr_t bDisplayOwningPlayerActionsOnly = 0x210;
            static constexpr std::uintptr_t bIgnoreDuplicateActions = 0x211;
            static constexpr std::uintptr_t OnActionBarUpdated = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionButtonClass", 0x208, "ClassProperty"},
            {"bDisplayOwningPlayerActionsOnly", 0x210, "BoolProperty"},
            {"bIgnoreDuplicateActions", 0x211, "BoolProperty"},
            {"OnActionBarUpdated", 0x218, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "HandleInputMappingsRebuiltUpdated",
            "SetDisplayOwningPlayerActionsOnly",
        }};
    };

    struct CommonBoundActionButton
    {
        static constexpr std::string_view Name = "CommonBoundActionButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_ActionName = 0x15D8;
            static constexpr std::uintptr_t bLinkRequiresHoldToBindingHold = 0x15E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Text_ActionName", 0x15D8, "ObjectProperty"},
            {"bLinkRequiresHoldToBindingHold", 0x15E0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnUpdateInputAction",
        }};
    };

    struct CommonBoundActionButtonInterface
    {
        static constexpr std::string_view Name = "CommonBoundActionButtonInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonButtonBase
    {
        static constexpr std::string_view Name = "CommonButtonBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
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

        inline static constexpr std::array<std::string_view, 93> FunctionNames{{
            "BP_OnClicked",
            "BP_OnDeselected",
            "BP_OnDisabled",
            "BP_OnDoubleClicked",
            "BP_OnEnabled",
            "BP_OnFocusLost",
            "BP_OnFocusReceived",
            "BP_OnHovered",
            "BP_OnInputActionTriggered",
            "BP_OnInputMethodChanged",
            "BP_OnLockClicked",
            "BP_OnLockDoubleClicked",
            "BP_OnLockedChanged",
            "BP_OnPressed",
            "BP_OnReleased",
            "BP_OnRequiresHoldChanged",
            "BP_OnSelected",
            "BP_OnUnhovered",
            "ClearSelection",
            "DisableButtonWithReason",
            "GetConvertInputActionToHold",
            "GetCurrentButtonPadding",
            "GetCurrentCustomPadding",
            "GetCurrentTextStyle",
            "GetCurrentTextStyleClass",
            "GetEnhancedInputAction",
            "GetInputAction",
            "GetIsFocusable",
            "GetLocked",
            "GetRequiredHoldTime",
            "GetRequiresHold",
            "GetSelected",
            "GetShouldSelectUponReceivingFocus",
            "GetSingleMaterialStyleMID",
            "GetStyle",
            "HandleButtonClicked",
            "HandleButtonPressed",
            "HandleButtonReleased",
            "HandleFocusLost",
            "HandleFocusReceived",
            "HandleTriggeringActionCommited",
            "HoldReset",
            "IsHoverSimulationOnTouchAvailable",
            "IsInteractionEnabled",
            "IsPressed",
            "NativeOnActionComplete",
            "NativeOnActionProgress",
            "NativeOnHoldProgress",
            "NativeOnHoldProgressRollback",
            "OnActionComplete",
            "OnActionProgress",
            "OnCurrentTextStyleChanged",
            "OnInputMethodChanged",
            "OnTriggeredInputActionChanged",
            "OnTriggeringEnhancedInputActionChanged",
            "OnTriggeringInputActionChanged",
            "SetActionDisplayName",
            "SetAllowDragDrop",
            "SetClickMethod",
            "SetClickedSoundOverride",
            "SetHideInputAction",
            "SetHideInputActionWithKeyboard",
            "SetHoldData",
            "SetHoveredSoundOverride",
            "SetInputActionProgressMaterial",
            "SetIsFocusable",
            "SetIsInteractableWhenSelected",
            "SetIsInteractionEnabled",
            "SetIsLocked",
            "SetIsSelectable",
            "SetIsSelected",
            "SetIsToggleable",
            "SetLockedClickedSoundOverride",
            "SetLockedHoveredSoundOverride",
            "SetLockedPressedSoundOverride",
            "SetMaxDimensions",
            "SetMinDimensions",
            "SetPressMethod",
            "SetPressedSoundOverride",
            "SetRequiresHold",
            "SetSelectedClickedSoundOverride",
            "SetSelectedHoveredSoundOverride",
            "SetSelectedInternal",
            "SetSelectedPressedSoundOverride",
            "SetShouldSelectUponReceivingFocus",
            "SetShouldUseFallbackDefaultInputAction",
            "SetStyle",
            "SetTouchMethod",
            "SetTriggeredInputAction",
            "SetTriggeringEnhancedInputAction",
            "SetTriggeringInputAction",
            "StopDoubleClickPropagation",
            "UpdateHoldData",
        }};
    };

    struct CommonButtonGroupBase
    {
        static constexpr std::string_view Name = "CommonButtonGroupBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonWidgetGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSelectedButtonLostSelection = 0x28;
            static constexpr std::uintptr_t OnSelectedButtonBaseChanged = 0x38;
            static constexpr std::uintptr_t OnHoveredButtonBaseChanged = 0x60;
            static constexpr std::uintptr_t OnButtonBaseClicked = 0x88;
            static constexpr std::uintptr_t OnButtonBaseDoubleClicked = 0xB0;
            static constexpr std::uintptr_t OnSelectionCleared = 0xD8;
            static constexpr std::uintptr_t OnButtonBaseLockClicked = 0x100;
            static constexpr std::uintptr_t OnButtonBaseLockDoubleClicked = 0x128;
            static constexpr std::uintptr_t bSelectionRequired = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnSelectedButtonLostSelection", 0x28, "MulticastInlineDelegateProperty"},
            {"OnSelectedButtonBaseChanged", 0x38, "MulticastInlineDelegateProperty"},
            {"OnHoveredButtonBaseChanged", 0x60, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseClicked", 0x88, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDoubleClicked", 0xB0, "MulticastInlineDelegateProperty"},
            {"OnSelectionCleared", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockClicked", 0x100, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockDoubleClicked", 0x128, "MulticastInlineDelegateProperty"},
            {"bSelectionRequired", 0x150, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 19> FunctionNames{{
            "DeselectAll",
            "FindButtonIndex",
            "GetButtonBaseAtIndex",
            "GetButtonCount",
            "GetHoveredButtonIndex",
            "GetSelectedButtonBase",
            "GetSelectedButtonIndex",
            "HasAnyButtons",
            "OnButtonBaseHovered",
            "OnButtonBaseUnhovered",
            "OnHandleButtonBaseClicked",
            "OnHandleButtonBaseDoubleClicked",
            "OnHandleButtonBaseLockClicked",
            "OnHandleButtonBaseLockDoubleClicked",
            "OnSelectionStateChangedBase",
            "SelectButtonAtIndex",
            "SelectNextButton",
            "SelectPreviousButton",
            "SetSelectionRequired",
        }};
    };

    struct CommonButtonInternalBase
    {
        static constexpr std::string_view Name = "CommonButtonInternalBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "button";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDoubleClicked = 0x620;
            static constexpr std::uintptr_t MinWidth = 0x630;
            static constexpr std::uintptr_t MinHeight = 0x634;
            static constexpr std::uintptr_t MaxWidth = 0x638;
            static constexpr std::uintptr_t MaxHeight = 0x63C;
            static constexpr std::uintptr_t bButtonEnabled = 0x640;
            static constexpr std::uintptr_t bInteractionEnabled = 0x641;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnDoubleClicked", 0x620, "MulticastInlineDelegateProperty"},
            {"MinWidth", 0x630, "IntProperty"},
            {"MinHeight", 0x634, "IntProperty"},
            {"MaxWidth", 0x638, "IntProperty"},
            {"MaxHeight", 0x63C, "IntProperty"},
            {"bButtonEnabled", 0x640, "BoolProperty"},
            {"bInteractionEnabled", 0x641, "BoolProperty"},
        }};
    };

    struct CommonButtonStyle
    {
        static constexpr std::string_view Name = "CommonButtonStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bSingleMaterial = 0x28;
            static constexpr std::uintptr_t SingleMaterialBrush = 0x30;
            static constexpr std::uintptr_t NormalBase = 0xE0;
            static constexpr std::uintptr_t NormalHovered = 0x190;
            static constexpr std::uintptr_t NormalPressed = 0x240;
            static constexpr std::uintptr_t SelectedBase = 0x2F0;
            static constexpr std::uintptr_t SelectedHovered = 0x3A0;
            static constexpr std::uintptr_t SelectedPressed = 0x450;
            static constexpr std::uintptr_t Disabled = 0x500;
            static constexpr std::uintptr_t ButtonPadding = 0x5B0;
            static constexpr std::uintptr_t CustomPadding = 0x5C0;
            static constexpr std::uintptr_t MinWidth = 0x5D0;
            static constexpr std::uintptr_t MinHeight = 0x5D4;
            static constexpr std::uintptr_t MaxWidth = 0x5D8;
            static constexpr std::uintptr_t MaxHeight = 0x5DC;
            static constexpr std::uintptr_t NormalTextStyle = 0x5E0;
            static constexpr std::uintptr_t NormalHoveredTextStyle = 0x5E8;
            static constexpr std::uintptr_t SelectedTextStyle = 0x5F0;
            static constexpr std::uintptr_t SelectedHoveredTextStyle = 0x5F8;
            static constexpr std::uintptr_t DisabledTextStyle = 0x600;
            static constexpr std::uintptr_t PressedSlateSound = 0x608;
            static constexpr std::uintptr_t ClickedSlateSound = 0x620;
            static constexpr std::uintptr_t SelectedPressedSlateSound = 0x638;
            static constexpr std::uintptr_t SelectedClickedSlateSound = 0x658;
            static constexpr std::uintptr_t LockedPressedSlateSound = 0x678;
            static constexpr std::uintptr_t LockedClickedSlateSound = 0x698;
            static constexpr std::uintptr_t HoveredSlateSound = 0x6B8;
            static constexpr std::uintptr_t SelectedHoveredSlateSound = 0x6D0;
            static constexpr std::uintptr_t LockedHoveredSlateSound = 0x6F0;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"bSingleMaterial", 0x28, "BoolProperty"},
            {"SingleMaterialBrush", 0x30, "StructProperty"},
            {"NormalBase", 0xE0, "StructProperty"},
            {"NormalHovered", 0x190, "StructProperty"},
            {"NormalPressed", 0x240, "StructProperty"},
            {"SelectedBase", 0x2F0, "StructProperty"},
            {"SelectedHovered", 0x3A0, "StructProperty"},
            {"SelectedPressed", 0x450, "StructProperty"},
            {"Disabled", 0x500, "StructProperty"},
            {"ButtonPadding", 0x5B0, "StructProperty"},
            {"CustomPadding", 0x5C0, "StructProperty"},
            {"MinWidth", 0x5D0, "IntProperty"},
            {"MinHeight", 0x5D4, "IntProperty"},
            {"MaxWidth", 0x5D8, "IntProperty"},
            {"MaxHeight", 0x5DC, "IntProperty"},
            {"NormalTextStyle", 0x5E0, "ClassProperty"},
            {"NormalHoveredTextStyle", 0x5E8, "ClassProperty"},
            {"SelectedTextStyle", 0x5F0, "ClassProperty"},
            {"SelectedHoveredTextStyle", 0x5F8, "ClassProperty"},
            {"DisabledTextStyle", 0x600, "ClassProperty"},
            {"PressedSlateSound", 0x608, "StructProperty"},
            {"ClickedSlateSound", 0x620, "StructProperty"},
            {"SelectedPressedSlateSound", 0x638, "StructProperty"},
            {"SelectedClickedSlateSound", 0x658, "StructProperty"},
            {"LockedPressedSlateSound", 0x678, "StructProperty"},
            {"LockedClickedSlateSound", 0x698, "StructProperty"},
            {"HoveredSlateSound", 0x6B8, "StructProperty"},
            {"SelectedHoveredSlateSound", 0x6D0, "StructProperty"},
            {"LockedHoveredSlateSound", 0x6F0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "GetButtonPadding",
            "GetCustomPadding",
            "GetDisabledBrush",
            "GetDisabledTextStyle",
            "GetMaterialBrush",
            "GetNormalBaseBrush",
            "GetNormalHoveredBrush",
            "GetNormalHoveredTextStyle",
            "GetNormalPressedBrush",
            "GetNormalTextStyle",
            "GetSelectedBaseBrush",
            "GetSelectedHoveredBrush",
            "GetSelectedHoveredTextStyle",
            "GetSelectedPressedBrush",
            "GetSelectedTextStyle",
        }};
    };

    struct CommonButtonStyleOptionalSlateSound
    {
        static constexpr std::string_view Name = "CommonButtonStyleOptionalSlateSound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasSound = 0x0;
            static constexpr std::uintptr_t Sound = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHasSound", 0x0, "BoolProperty"},
            {"Sound", 0x8, "StructProperty"},
        }};
    };

    struct CommonCustomNavigation
    {
        static constexpr std::string_view Name = "CommonCustomNavigation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Border";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNavigationEvent = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnNavigationEvent", 0x2E0, "DelegateProperty"},
        }};
    };

    struct CommonDateTimeTextBlock
    {
        static constexpr std::string_view Name = "CommonDateTimeTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonTextBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomTimespanFormat = 0x350;
            static constexpr std::uintptr_t bCustomTimespanLeadingZeros = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CustomTimespanFormat", 0x350, "TextProperty"},
            {"bCustomTimespanLeadingZeros", 0x360, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetDateTime",
            "SetCountDownCompletionText",
            "SetDateTimeValue",
            "SetTimespanValue",
        }};
    };

    struct CommonGameViewportClient
    {
        static constexpr std::string_view Name = "CommonGameViewportClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameViewportClient";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewportConsole = 0x40;
            static constexpr std::uintptr_t DebugProperties = 0x48;
            static constexpr std::uintptr_t MaxSplitscreenPlayers = 0x68;
            static constexpr std::uintptr_t World = 0x78;
            static constexpr std::uintptr_t GameInstance = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ViewportConsole", 0x40, "ObjectProperty"},
            {"DebugProperties", 0x48, "ArrayProperty"},
            {"MaxSplitscreenPlayers", 0x68, "IntProperty"},
            {"World", 0x78, "ObjectProperty"},
            {"GameInstance", 0x80, "ObjectProperty"},
        }};
    };

    struct CommonGenericInputActionDataTable
    {
        static constexpr std::string_view Name = "CommonGenericInputActionDataTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataTable";
        struct Offsets
        {
            static constexpr std::uintptr_t RowStruct = 0x28;
            static constexpr std::uintptr_t bIgnoreExtraFields = 0x40;
            static constexpr std::uintptr_t bIgnoreMissingFields = 0x40;
            static constexpr std::uintptr_t bPreserveExistingValues = 0x40;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0x40;
            static constexpr std::uintptr_t ImportKeyField = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RowStruct", 0x28, "ObjectProperty"},
            {"bIgnoreExtraFields", 0x40, "BoolProperty"},
            {"bIgnoreMissingFields", 0x40, "BoolProperty"},
            {"bPreserveExistingValues", 0x40, "BoolProperty"},
            {"bStripFromClientBuilds", 0x40, "BoolProperty"},
            {"ImportKeyField", 0x48, "StrProperty"},
        }};
    };

    struct CommonHardwareVisibilityBorder
    {
        static constexpr std::string_view Name = "CommonHardwareVisibilityBorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonBorder";
        struct Offsets
        {
            static constexpr std::uintptr_t VisibilityQuery = 0x300;
            static constexpr std::uintptr_t VisibleType = 0x348;
            static constexpr std::uintptr_t HiddenType = 0x349;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VisibilityQuery", 0x300, "StructProperty"},
            {"VisibleType", 0x348, "EnumProperty"},
            {"HiddenType", 0x349, "EnumProperty"},
        }};
    };

    struct CommonHierarchicalScrollBox
    {
        static constexpr std::string_view Name = "CommonHierarchicalScrollBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ScrollBox";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollAnimationInterpolationSpeed = 0x180;
            static constexpr std::uintptr_t bEnableTouchScrolling = 0x184;
            static constexpr std::uintptr_t bConsumePointerInput = 0x185;
            static constexpr std::uintptr_t AnalogMouseWheelKey = 0x188;
            static constexpr std::uintptr_t bIsFocusable = 0x1A0;
            static constexpr std::uintptr_t WidgetStyle = 0x1B0;
            static constexpr std::uintptr_t WidgetBarStyle = 0x4A0;
            static constexpr std::uintptr_t orientation = 0xAF0;
            static constexpr std::uintptr_t ScrollBarVisibility = 0xAF1;
            static constexpr std::uintptr_t ConsumeMouseWheel = 0xAF2;
            static constexpr std::uintptr_t ScrollbarThickness = 0xAF8;
            static constexpr std::uintptr_t ScrollBarPadding = 0xB08;
            static constexpr std::uintptr_t AlwaysShowScrollbar = 0xB18;
            static constexpr std::uintptr_t AlwaysShowScrollbarTrack = 0xB19;
            static constexpr std::uintptr_t AllowOverscroll = 0xB1A;
            static constexpr std::uintptr_t BackPadScrolling = 0xB1B;
            static constexpr std::uintptr_t FrontPadScrolling = 0xB1C;
            static constexpr std::uintptr_t bAnimateWheelScrolling = 0xB1D;
            static constexpr std::uintptr_t NavigationDestination = 0xB1E;
            static constexpr std::uintptr_t NavigationScrollPadding = 0xB20;
            static constexpr std::uintptr_t ScrollWhenFocusChanges = 0xB24;
            static constexpr std::uintptr_t bAllowRightClickDragScrolling = 0xB25;
            static constexpr std::uintptr_t WheelScrollMultiplier = 0xB28;
            static constexpr std::uintptr_t OnUserScrolled = 0xB30;
            static constexpr std::uintptr_t OnScrollBarVisibilityChanged = 0xB40;
            static constexpr std::uintptr_t OnFocusReceived = 0xB50;
            static constexpr std::uintptr_t OnFocusLost = 0xB60;
            static constexpr std::uintptr_t OnFocusUpdated = 0xB70;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"ScrollAnimationInterpolationSpeed", 0x180, "FloatProperty"},
            {"bEnableTouchScrolling", 0x184, "BoolProperty"},
            {"bConsumePointerInput", 0x185, "BoolProperty"},
            {"AnalogMouseWheelKey", 0x188, "StructProperty"},
            {"bIsFocusable", 0x1A0, "BoolProperty"},
            {"WidgetStyle", 0x1B0, "StructProperty"},
            {"WidgetBarStyle", 0x4A0, "StructProperty"},
            {"orientation", 0xAF0, "ByteProperty"},
            {"ScrollBarVisibility", 0xAF1, "EnumProperty"},
            {"ConsumeMouseWheel", 0xAF2, "EnumProperty"},
            {"ScrollbarThickness", 0xAF8, "StructProperty"},
            {"ScrollBarPadding", 0xB08, "StructProperty"},
            {"AlwaysShowScrollbar", 0xB18, "BoolProperty"},
            {"AlwaysShowScrollbarTrack", 0xB19, "BoolProperty"},
            {"AllowOverscroll", 0xB1A, "BoolProperty"},
            {"BackPadScrolling", 0xB1B, "BoolProperty"},
            {"FrontPadScrolling", 0xB1C, "BoolProperty"},
            {"bAnimateWheelScrolling", 0xB1D, "BoolProperty"},
            {"NavigationDestination", 0xB1E, "EnumProperty"},
            {"NavigationScrollPadding", 0xB20, "FloatProperty"},
            {"ScrollWhenFocusChanges", 0xB24, "EnumProperty"},
            {"bAllowRightClickDragScrolling", 0xB25, "BoolProperty"},
            {"WheelScrollMultiplier", 0xB28, "FloatProperty"},
            {"OnUserScrolled", 0xB30, "MulticastInlineDelegateProperty"},
            {"OnScrollBarVisibilityChanged", 0xB40, "MulticastInlineDelegateProperty"},
            {"OnFocusReceived", 0xB50, "MulticastInlineDelegateProperty"},
            {"OnFocusLost", 0xB60, "MulticastInlineDelegateProperty"},
            {"OnFocusUpdated", 0xB70, "MulticastInlineDelegateProperty"},
        }};
    };

    struct CommonInputActionDataBase
    {
        static constexpr std::string_view Name = "CommonInputActionDataBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t HoldDisplayName = 0x18;
            static constexpr std::uintptr_t NavBarPriority = 0x28;
            static constexpr std::uintptr_t KeyboardInputTypeInfo = 0x30;
            static constexpr std::uintptr_t DefaultGamepadInputTypeInfo = 0x120;
            static constexpr std::uintptr_t GamepadInputOverrides = 0x210;
            static constexpr std::uintptr_t TouchInputTypeInfo = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DisplayName", 0x8, "TextProperty"},
            {"HoldDisplayName", 0x18, "TextProperty"},
            {"NavBarPriority", 0x28, "IntProperty"},
            {"KeyboardInputTypeInfo", 0x30, "StructProperty"},
            {"DefaultGamepadInputTypeInfo", 0x120, "StructProperty"},
            {"GamepadInputOverrides", 0x210, "MapProperty"},
            {"TouchInputTypeInfo", 0x220, "StructProperty"},
        }};
    };

    struct CommonInputActionDataProcessor
    {
        static constexpr std::string_view Name = "CommonInputActionDataProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonInputActionHandlerData
    {
        static constexpr std::string_view Name = "CommonInputActionHandlerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputActionRow = 0x0;
            static constexpr std::uintptr_t State = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputActionRow", 0x0, "StructProperty"},
            {"State", 0x10, "EnumProperty"},
        }};
    };

    struct CommonInputMetadata
    {
        static constexpr std::string_view Name = "CommonInputMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NavBarPriority = 0x28;
            static constexpr std::uintptr_t bIsGenericInputAction = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NavBarPriority", 0x28, "IntProperty"},
            {"bIsGenericInputAction", 0x2C, "BoolProperty"},
        }};
    };

    struct CommonInputTypeInfo
    {
        static constexpr std::string_view Name = "CommonInputTypeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t AdditionalKeys = 0x18;
            static constexpr std::uintptr_t OverrrideState = 0x28;
            static constexpr std::uintptr_t bActionRequiresHold = 0x29;
            static constexpr std::uintptr_t HoldTime = 0x2C;
            static constexpr std::uintptr_t HoldRollbackTime = 0x30;
            static constexpr std::uintptr_t OverrideBrush = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"AdditionalKeys", 0x18, "ArrayProperty"},
            {"OverrrideState", 0x28, "EnumProperty"},
            {"bActionRequiresHold", 0x29, "BoolProperty"},
            {"HoldTime", 0x2C, "FloatProperty"},
            {"HoldRollbackTime", 0x30, "FloatProperty"},
            {"OverrideBrush", 0x40, "StructProperty"},
        }};
    };

    struct CommonLazyImage
    {
        static constexpr std::string_view Name = "CommonLazyImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Image";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadingBackgroundBrush = 0x290;
            static constexpr std::uintptr_t LoadingThrobberBrush = 0x340;
            static constexpr std::uintptr_t MaterialTextureParamName = 0x3F0;
            static constexpr std::uintptr_t BP_OnLoadingStateChanged = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LoadingBackgroundBrush", 0x290, "StructProperty"},
            {"LoadingThrobberBrush", 0x340, "StructProperty"},
            {"MaterialTextureParamName", 0x3F0, "NameProperty"},
            {"BP_OnLoadingStateChanged", 0x3F8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "IsLoading",
            "SetBrushFromLazyDisplayAsset",
            "SetBrushFromLazyMaterial",
            "SetBrushFromLazyTexture",
            "SetMaterialTextureParamName",
        }};
    };

    struct CommonLazyWidget
    {
        static constexpr std::string_view Name = "CommonLazyWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetClass = 0x168;
            static constexpr std::uintptr_t LoadingThrobberBrush = 0x190;
            static constexpr std::uintptr_t LoadingBackgroundBrush = 0x240;
            static constexpr std::uintptr_t Content = 0x2F0;
            static constexpr std::uintptr_t BP_OnLoadingStateChanged = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WidgetClass", 0x168, "SoftClassProperty"},
            {"LoadingThrobberBrush", 0x190, "StructProperty"},
            {"LoadingBackgroundBrush", 0x240, "StructProperty"},
            {"Content", 0x2F0, "ObjectProperty"},
            {"BP_OnLoadingStateChanged", 0x320, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetContent",
            "IsLoading",
            "LoadLazyContent",
            "SetLazyContent",
            "SetLazyContentWithCallback",
        }};
    };

    struct CommonListView
    {
        static constexpr std::string_view Name = "CommonListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListView";
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

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetEntrySpacing",
        }};
    };

    struct CommonLoadGuard
    {
        static constexpr std::string_view Name = "CommonLoadGuard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadingBackgroundBrush = 0x180;
            static constexpr std::uintptr_t LoadingThrobberBrush = 0x230;
            static constexpr std::uintptr_t ThrobberAlignment = 0x2E0;
            static constexpr std::uintptr_t ThrobberPadding = 0x2E4;
            static constexpr std::uintptr_t LoadingText = 0x2F8;
            static constexpr std::uintptr_t TextStyle = 0x308;
            static constexpr std::uintptr_t BP_OnLoadingStateChanged = 0x310;
            static constexpr std::uintptr_t SpinnerMaterialPath = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"LoadingBackgroundBrush", 0x180, "StructProperty"},
            {"LoadingThrobberBrush", 0x230, "StructProperty"},
            {"ThrobberAlignment", 0x2E0, "ByteProperty"},
            {"ThrobberPadding", 0x2E4, "StructProperty"},
            {"LoadingText", 0x2F8, "TextProperty"},
            {"TextStyle", 0x308, "ClassProperty"},
            {"BP_OnLoadingStateChanged", 0x310, "MulticastInlineDelegateProperty"},
            {"SpinnerMaterialPath", 0x320, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BP_GuardAndLoadAsset",
            "IsLoading",
            "SetIsLoading",
            "SetLoadingText",
        }};
    };

    struct CommonMappingContextMetadata
    {
        static constexpr std::string_view Name = "CommonMappingContextMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t EnhancedInputMetadata = 0x30;
            static constexpr std::uintptr_t PerActionEnhancedInputMetadata = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnhancedInputMetadata", 0x30, "ObjectProperty"},
            {"PerActionEnhancedInputMetadata", 0x38, "MapProperty"},
        }};
    };

    struct CommonMappingContextMetadataInterface
    {
        static constexpr std::string_view Name = "CommonMappingContextMetadataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonNumberFormattingOptions
    {
        static constexpr std::string_view Name = "CommonNumberFormattingOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RoundingMode = 0x0;
            static constexpr std::uintptr_t AlwaysSign = 0x1;
            static constexpr std::uintptr_t UseGrouping = 0x2;
            static constexpr std::uintptr_t MinimumIntegralDigits = 0x4;
            static constexpr std::uintptr_t MaximumIntegralDigits = 0x8;
            static constexpr std::uintptr_t MinimumFractionalDigits = 0xC;
            static constexpr std::uintptr_t MaximumFractionalDigits = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RoundingMode", 0x0, "ByteProperty"},
            {"AlwaysSign", 0x1, "BoolProperty"},
            {"UseGrouping", 0x2, "BoolProperty"},
            {"MinimumIntegralDigits", 0x4, "IntProperty"},
            {"MaximumIntegralDigits", 0x8, "IntProperty"},
            {"MinimumFractionalDigits", 0xC, "IntProperty"},
            {"MaximumFractionalDigits", 0x10, "IntProperty"},
        }};
    };

    struct CommonNumericTextBlock
    {
        static constexpr std::string_view Name = "CommonNumericTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonTextBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInterpolationStartedEvent = 0x350;
            static constexpr std::uintptr_t OnInterpolationUpdatedEvent = 0x360;
            static constexpr std::uintptr_t OnOutroEvent = 0x370;
            static constexpr std::uintptr_t OnInterpolationEndedEvent = 0x380;
            static constexpr std::uintptr_t CurrentNumericValue = 0x390;
            static constexpr std::uintptr_t NumericType = 0x394;
            static constexpr std::uintptr_t FormattingSpecification = 0x398;
            static constexpr std::uintptr_t EaseOutInterpolationExponent = 0x3AC;
            static constexpr std::uintptr_t InterpolationUpdateInterval = 0x3B0;
            static constexpr std::uintptr_t PostInterpolationShrinkDuration = 0x3B4;
            static constexpr std::uintptr_t PerformSizeInterpolation = 0x3B8;
            static constexpr std::uintptr_t IsPercentage = 0x3B9;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnInterpolationStartedEvent", 0x350, "MulticastInlineDelegateProperty"},
            {"OnInterpolationUpdatedEvent", 0x360, "MulticastInlineDelegateProperty"},
            {"OnOutroEvent", 0x370, "MulticastInlineDelegateProperty"},
            {"OnInterpolationEndedEvent", 0x380, "MulticastInlineDelegateProperty"},
            {"CurrentNumericValue", 0x390, "FloatProperty"},
            {"NumericType", 0x394, "EnumProperty"},
            {"FormattingSpecification", 0x398, "StructProperty"},
            {"EaseOutInterpolationExponent", 0x3AC, "FloatProperty"},
            {"InterpolationUpdateInterval", 0x3B0, "FloatProperty"},
            {"PostInterpolationShrinkDuration", 0x3B4, "FloatProperty"},
            {"PerformSizeInterpolation", 0x3B8, "BoolProperty"},
            {"IsPercentage", 0x3B9, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetTargetValue",
            "InterpolateToValue",
            "IsInterpolatingNumericValue",
            "SetCurrentValue",
            "SetNumericType",
        }};
    };

    struct CommonPoolableWidgetInterface
    {
        static constexpr std::string_view Name = "CommonPoolableWidgetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnAcquireFromPool",
            "OnReleaseToPool",
        }};
    };

    struct CommonRegisteredTabInfo
    {
        static constexpr std::string_view Name = "CommonRegisteredTabInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TabIndex = 0x0;
            static constexpr std::uintptr_t TabButtonClass = 0x8;
            static constexpr std::uintptr_t TabButton = 0x10;
            static constexpr std::uintptr_t ContentInstance = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TabIndex", 0x0, "IntProperty"},
            {"TabButtonClass", 0x8, "ClassProperty"},
            {"TabButton", 0x10, "ObjectProperty"},
            {"ContentInstance", 0x18, "ObjectProperty"},
        }};
    };

    struct CommonRichTextBlock
    {
        static constexpr std::string_view Name = "CommonRichTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RichTextBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t InlineIconDisplayMode = 0x7C0;
            static constexpr std::uintptr_t bTintInlineIcon = 0x7C1;
            static constexpr std::uintptr_t MobileTextBlockScale = 0x7C4;
            static constexpr std::uintptr_t DefaultTextStyleOverrideClass = 0x7C8;
            static constexpr std::uintptr_t ScrollStyle = 0x7D0;
            static constexpr std::uintptr_t ScrollOrientation = 0x7D8;
            static constexpr std::uintptr_t bIsScrollingEnabled = 0x7D9;
            static constexpr std::uintptr_t bDisplayAllCaps = 0x7DA;
            static constexpr std::uintptr_t bAutoCollapseWithEmptyText = 0x7DB;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"InlineIconDisplayMode", 0x7C0, "EnumProperty"},
            {"bTintInlineIcon", 0x7C1, "BoolProperty"},
            {"MobileTextBlockScale", 0x7C4, "FloatProperty"},
            {"DefaultTextStyleOverrideClass", 0x7C8, "ClassProperty"},
            {"ScrollStyle", 0x7D0, "ClassProperty"},
            {"ScrollOrientation", 0x7D8, "ByteProperty"},
            {"bIsScrollingEnabled", 0x7D9, "BoolProperty"},
            {"bDisplayAllCaps", 0x7DA, "BoolProperty"},
            {"bAutoCollapseWithEmptyText", 0x7DB, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetScrollingEnabled",
            "SetStyle",
        }};
    };

    struct CommonRotator
    {
        static constexpr std::string_view Name = "CommonRotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRotatedWithDirection = 0x15E0;
            static constexpr std::uintptr_t OnRotated = 0x15F0;
            static constexpr std::uintptr_t MyText = 0x1618;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnRotatedWithDirection", 0x15E0, "MulticastInlineDelegateProperty"},
            {"OnRotated", 0x15F0, "MulticastInlineDelegateProperty"},
            {"MyText", 0x1618, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "BP_OnOptionSelected",
            "BP_OnOptionsPopulated",
            "GetSelectedIndex",
            "GetSelectedText",
            "PopulateTextLabels",
            "SetSelectedItem",
            "ShiftTextLeft",
            "ShiftTextRight",
        }};
    };

    struct CommonTabListWidgetBase
    {
        static constexpr std::string_view Name = "CommonTabListWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTabSelected = 0x330;
            static constexpr std::uintptr_t OnTabButtonCreation = 0x340;
            static constexpr std::uintptr_t OnTabButtonRemoval = 0x350;
            static constexpr std::uintptr_t OnTabListRebuilt = 0x360;
            static constexpr std::uintptr_t NextTabInputActionData = 0x370;
            static constexpr std::uintptr_t PreviousTabInputActionData = 0x380;
            static constexpr std::uintptr_t NextTabEnhancedInputAction = 0x390;
            static constexpr std::uintptr_t PreviousTabEnhancedInputAction = 0x398;
            static constexpr std::uintptr_t bAutoListenForInput = 0x3A0;
            static constexpr std::uintptr_t bShouldWrapNavigation = 0x3A1;
            static constexpr std::uintptr_t bDeferRebuildingTabList = 0x3A2;
            static constexpr std::uintptr_t LinkedSwitcher = 0x3A4;
            static constexpr std::uintptr_t TabButtonGroup = 0x3B0;
            static constexpr std::uintptr_t RegisteredTabsByID = 0x3C0;
            static constexpr std::uintptr_t TabButtonWidgetPool = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"OnTabSelected", 0x330, "MulticastInlineDelegateProperty"},
            {"OnTabButtonCreation", 0x340, "MulticastInlineDelegateProperty"},
            {"OnTabButtonRemoval", 0x350, "MulticastInlineDelegateProperty"},
            {"OnTabListRebuilt", 0x360, "MulticastInlineDelegateProperty"},
            {"NextTabInputActionData", 0x370, "StructProperty"},
            {"PreviousTabInputActionData", 0x380, "StructProperty"},
            {"NextTabEnhancedInputAction", 0x390, "ObjectProperty"},
            {"PreviousTabEnhancedInputAction", 0x398, "ObjectProperty"},
            {"bAutoListenForInput", 0x3A0, "BoolProperty"},
            {"bShouldWrapNavigation", 0x3A1, "BoolProperty"},
            {"bDeferRebuildingTabList", 0x3A2, "BoolProperty"},
            {"LinkedSwitcher", 0x3A4, "WeakObjectProperty"},
            {"TabButtonGroup", 0x3B0, "ObjectProperty"},
            {"RegisteredTabsByID", 0x3C0, "MapProperty"},
            {"TabButtonWidgetPool", 0x3D0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 25> FunctionNames{{
            "DisableTabWithReason",
            "GetActiveTab",
            "GetLinkedSwitcher",
            "GetSelectedTabId",
            "GetTabButtonBaseByID",
            "GetTabCount",
            "GetTabIdAtIndex",
            "HandleNextTabInputAction",
            "HandlePostLinkedSwitcherChanged_BP",
            "HandlePreLinkedSwitcherChanged_BP",
            "HandlePreviousTabInputAction",
            "HandleTabButtonSelected",
            "HandleTabCreation",
            "HandleTabRemoval",
            "HasTabContentWidget",
            "RegisterTab",
            "RegisterTabContentWidget",
            "RemoveAllTabs",
            "RemoveTab",
            "SelectTabByID",
            "SetLinkedSwitcher",
            "SetListeningForInput",
            "SetTabEnabled",
            "SetTabInteractionEnabled",
            "SetTabVisibility",
        }};
    };

    struct CommonTextBlock
    {
        static constexpr std::string_view Name = "CommonTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t MobileFontSizeMultiplier = 0x320;
            static constexpr std::uintptr_t bIsScrollingEnabled = 0x324;
            static constexpr std::uintptr_t bDisplayAllCaps = 0x325;
            static constexpr std::uintptr_t bAutoCollapseWithEmptyText = 0x326;
            static constexpr std::uintptr_t Style = 0x328;
            static constexpr std::uintptr_t ScrollStyle = 0x330;
            static constexpr std::uintptr_t ScrollOrientation = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MobileFontSizeMultiplier", 0x320, "FloatProperty"},
            {"bIsScrollingEnabled", 0x324, "BoolProperty"},
            {"bDisplayAllCaps", 0x325, "BoolProperty"},
            {"bAutoCollapseWithEmptyText", 0x326, "BoolProperty"},
            {"Style", 0x328, "ClassProperty"},
            {"ScrollStyle", 0x330, "ClassProperty"},
            {"ScrollOrientation", 0x338, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetMargin",
            "GetMobileFontSizeMultiplier",
            "ResetScrollState",
            "SetApplyLineHeightToBottomLine",
            "SetLineHeightPercentage",
            "SetMargin",
            "SetMobileFontSizeMultiplier",
            "SetScrollOrientation",
            "SetScrollingEnabled",
            "SetStyle",
            "SetTextCase",
            "SetWrapTextWidth",
        }};
    };

    struct CommonTextScrollStyle
    {
        static constexpr std::string_view Name = "CommonTextScrollStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Speed = 0x28;
            static constexpr std::uintptr_t StartDelay = 0x2C;
            static constexpr std::uintptr_t EndDelay = 0x30;
            static constexpr std::uintptr_t FadeInDelay = 0x34;
            static constexpr std::uintptr_t FadeOutDelay = 0x38;
            static constexpr std::uintptr_t Clipping = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Speed", 0x28, "FloatProperty"},
            {"StartDelay", 0x2C, "FloatProperty"},
            {"EndDelay", 0x30, "FloatProperty"},
            {"FadeInDelay", 0x34, "FloatProperty"},
            {"FadeOutDelay", 0x38, "FloatProperty"},
            {"Clipping", 0x3C, "EnumProperty"},
        }};
    };

    struct CommonTextStyle
    {
        static constexpr std::string_view Name = "CommonTextStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Font = 0x28;
            static constexpr std::uintptr_t Color = 0x80;
            static constexpr std::uintptr_t bUsesDropShadow = 0x90;
            static constexpr std::uintptr_t ShadowOffset = 0x98;
            static constexpr std::uintptr_t ShadowColor = 0xA8;
            static constexpr std::uintptr_t Margin = 0xB8;
            static constexpr std::uintptr_t StrikeBrush = 0xD0;
            static constexpr std::uintptr_t LineHeightPercentage = 0x180;
            static constexpr std::uintptr_t ApplyLineHeightToBottomLine = 0x184;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Font", 0x28, "StructProperty"},
            {"Color", 0x80, "StructProperty"},
            {"bUsesDropShadow", 0x90, "BoolProperty"},
            {"ShadowOffset", 0x98, "StructProperty"},
            {"ShadowColor", 0xA8, "StructProperty"},
            {"Margin", 0xB8, "StructProperty"},
            {"StrikeBrush", 0xD0, "StructProperty"},
            {"LineHeightPercentage", 0x180, "FloatProperty"},
            {"ApplyLineHeightToBottomLine", 0x184, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetApplyLineHeightToBottomLine",
            "GetColor",
            "GetFont",
            "GetLineHeightPercentage",
            "GetMargin",
            "GetShadowColor",
            "GetShadowOffset",
            "GetStrikeBrush",
        }};
    };

    struct CommonTileView
    {
        static constexpr std::string_view Name = "CommonTileView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TileView";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryHeight = 0xFE0;
            static constexpr std::uintptr_t EntryWidth = 0xFE4;
            static constexpr std::uintptr_t TileAlignment = 0xFE8;
            static constexpr std::uintptr_t bOverrideNumItemsPerLine = 0xFE9;
            static constexpr std::uintptr_t NumItemsPerLine = 0xFEC;
            static constexpr std::uintptr_t bWrapHorizontalNavigation = 0xFF0;
            static constexpr std::uintptr_t ScrollbarDisabledVisibility = 0xFF1;
            static constexpr std::uintptr_t bEntrySizeIncludesEntrySpacing = 0x1008;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EntryHeight", 0xFE0, "FloatProperty"},
            {"EntryWidth", 0xFE4, "FloatProperty"},
            {"TileAlignment", 0xFE8, "EnumProperty"},
            {"bOverrideNumItemsPerLine", 0xFE9, "BoolProperty"},
            {"NumItemsPerLine", 0xFEC, "IntProperty"},
            {"bWrapHorizontalNavigation", 0xFF0, "BoolProperty"},
            {"ScrollbarDisabledVisibility", 0xFF1, "EnumProperty"},
            {"bEntrySizeIncludesEntrySpacing", 0x1008, "BoolProperty"},
        }};
    };

    struct CommonTreeView
    {
        static constexpr std::string_view Name = "CommonTreeView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TreeView";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnGetItemChildren = 0xFF0;
            static constexpr std::uintptr_t BP_OnItemExpansionChanged = 0x1000;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BP_OnGetItemChildren", 0xFF0, "DelegateProperty"},
            {"BP_OnItemExpansionChanged", 0x1000, "MulticastInlineDelegateProperty"},
        }};
    };

    struct CommonUIActionRouterBase
    {
        static constexpr std::string_view Name = "CommonUIActionRouterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonUIEditorSettings
    {
        static constexpr std::string_view Name = "CommonUIEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateTextStyle = 0x28;
            static constexpr std::uintptr_t TemplateButtonStyle = 0x48;
            static constexpr std::uintptr_t TemplateBorderStyle = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TemplateTextStyle", 0x28, "SoftClassProperty"},
            {"TemplateButtonStyle", 0x48, "SoftClassProperty"},
            {"TemplateBorderStyle", 0x68, "SoftClassProperty"},
        }};
    };

    struct CommonUIInputSettings
    {
        static constexpr std::string_view Name = "CommonUIInputSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bLinkCursorToGamepadFocus = 0x28;
            static constexpr std::uintptr_t UIActionProcessingPriority = 0x2C;
            static constexpr std::uintptr_t InputActions = 0x30;
            static constexpr std::uintptr_t ActionOverrides = 0x40;
            static constexpr std::uintptr_t AnalogCursorSettings = 0x50;
            static constexpr std::uintptr_t DefaultVirtualPointerClass = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bLinkCursorToGamepadFocus", 0x28, "BoolProperty"},
            {"UIActionProcessingPriority", 0x2C, "IntProperty"},
            {"InputActions", 0x30, "ArrayProperty"},
            {"ActionOverrides", 0x40, "ArrayProperty"},
            {"AnalogCursorSettings", 0x50, "StructProperty"},
            {"DefaultVirtualPointerClass", 0x80, "SoftClassProperty"},
        }};
    };

    struct CommonUILibrary
    {
        static constexpr std::string_view Name = "CommonUILibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "Conv_UIActionTagToGameplayTag",
            "Conv_UITagToGameplayTag",
            "FindParentWidgetImplementingInterface",
            "FindParentWidgetOfType",
            "RefreshFocusIfLeafmostDescendant",
        }};
    };

    struct CommonUIRichTextData
    {
        static constexpr std::string_view Name = "CommonUIRichTextData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InlineIconSet = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InlineIconSet", 0x28, "ObjectProperty"},
        }};
    };

    struct CommonUISettings
    {
        static constexpr std::string_view Name = "CommonUISettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoLoadData = 0x28;
            static constexpr std::uintptr_t DefaultImageResourceObject = 0x30;
            static constexpr std::uintptr_t DefaultThrobberMaterial = 0x50;
            static constexpr std::uintptr_t DefaultRichTextDataClass = 0x70;
            static constexpr std::uintptr_t PlatformTraits = 0x90;
            static constexpr std::uintptr_t CommonButtonAcceptKeyHandling = 0xA0;
            static constexpr std::uintptr_t DefaultImageResourceObjectInstance = 0xC8;
            static constexpr std::uintptr_t DefaultThrobberMaterialInstance = 0xD0;
            static constexpr std::uintptr_t DefaultThrobberBrush = 0xE0;
            static constexpr std::uintptr_t RichTextDataInstance = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bAutoLoadData", 0x28, "BoolProperty"},
            {"DefaultImageResourceObject", 0x30, "SoftObjectProperty"},
            {"DefaultThrobberMaterial", 0x50, "SoftObjectProperty"},
            {"DefaultRichTextDataClass", 0x70, "SoftClassProperty"},
            {"PlatformTraits", 0x90, "ArrayProperty"},
            {"CommonButtonAcceptKeyHandling", 0xA0, "EnumProperty"},
            {"DefaultImageResourceObjectInstance", 0xC8, "ObjectProperty"},
            {"DefaultThrobberMaterialInstance", 0xD0, "ObjectProperty"},
            {"DefaultThrobberBrush", 0xE0, "StructProperty"},
            {"RichTextDataInstance", 0x190, "ObjectProperty"},
        }};
    };

    struct CommonUISubsystemBase
    {
        static constexpr std::string_view Name = "CommonUISubsystemBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetEnhancedInputActionButtonIcon",
            "GetInputActionButtonIcon",
        }};
    };

    struct CommonUIVisibilitySubsystem
    {
        static constexpr std::string_view Name = "CommonUIVisibilitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonUserWidget
    {
        static constexpr std::string_view Name = "CommonUserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplayInActionBar = 0x308;
            static constexpr std::uintptr_t bConsumePointerInput = 0x309;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bDisplayInActionBar", 0x308, "BoolProperty"},
            {"bConsumePointerInput", 0x309, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "RegisterScrollRecipientExternal",
            "RegisterUIAction",
            "RegisterUIActionsFromMappingContext",
            "RemoveAllUIActionBinding",
            "RemoveUIAction",
            "SetConsumePointerInput",
            "UnregisterScrollRecipientExternal",
        }};
    };

    struct CommonVideoPlayer
    {
        static constexpr std::string_view Name = "CommonVideoPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Video = 0x168;
            static constexpr std::uintptr_t bMatchSize = 0x170;
            static constexpr std::uintptr_t MediaPlayer = 0x178;
            static constexpr std::uintptr_t MediaTexture = 0x180;
            static constexpr std::uintptr_t VideoMaterial = 0x188;
            static constexpr std::uintptr_t SoundComponent = 0x190;
            static constexpr std::uintptr_t VideoBrush = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Video", 0x168, "ObjectProperty"},
            {"bMatchSize", 0x170, "BoolProperty"},
            {"MediaPlayer", 0x178, "ObjectProperty"},
            {"MediaTexture", 0x180, "ObjectProperty"},
            {"VideoMaterial", 0x188, "ObjectProperty"},
            {"SoundComponent", 0x190, "ObjectProperty"},
            {"VideoBrush", 0x1A0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "Close",
            "GetPlaybackRate",
            "GetPlaybackTime",
            "GetVideoDuration",
            "IsLooping",
            "IsMuted",
            "IsPaused",
            "IsPlaying",
            "Pause",
            "Play",
            "PlayFromStart",
            "Reverse",
            "Seek",
            "SetIsMuted",
            "SetLooping",
            "SetPlaybackRate",
            "SetShouldMatchSize",
            "SetVideo",
        }};
    };

    struct CommonVisibilitySwitcher
    {
        static constexpr std::string_view Name = "CommonVisibilitySwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Overlay";
        struct Offsets
        {
            static constexpr std::uintptr_t ShownVisibility = 0x190;
            static constexpr std::uintptr_t ActiveWidgetIndex = 0x194;
            static constexpr std::uintptr_t bAutoActivateSlot = 0x198;
            static constexpr std::uintptr_t bActivateFirstSlotOnAdding = 0x199;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShownVisibility", 0x190, "EnumProperty"},
            {"ActiveWidgetIndex", 0x194, "IntProperty"},
            {"bAutoActivateSlot", 0x198, "BoolProperty"},
            {"bActivateFirstSlotOnAdding", 0x199, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "ActivateVisibleSlot",
            "DeactivateVisibleSlot",
            "DecrementActiveWidgetIndex",
            "GetActiveWidget",
            "GetActiveWidgetIndex",
            "IncrementActiveWidgetIndex",
            "IsCurrentlySwitching",
            "SetActiveWidget",
            "SetActiveWidgetIndex",
        }};
    };

    struct CommonVisibilitySwitcherSlot
    {
        static constexpr std::string_view Name = "CommonVisibilitySwitcherSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OverlaySlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x40;
            static constexpr std::uintptr_t HorizontalAlignment = 0x50;
            static constexpr std::uintptr_t VerticalAlignment = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x40, "StructProperty"},
            {"HorizontalAlignment", 0x50, "ByteProperty"},
            {"VerticalAlignment", 0x51, "ByteProperty"},
        }};
    };

    struct CommonVisualAttachment
    {
        static constexpr std::string_view Name = "CommonVisualAttachment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SizeBox";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentAnchor = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContentAnchor", 0x1B8, "StructProperty"},
        }};
    };

    struct CommonWidgetCarousel
    {
        static constexpr std::string_view Name = "CommonWidgetCarousel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveWidgetIndex = 0x180;
            static constexpr std::uintptr_t MoveSpeed = 0x184;
            static constexpr std::uintptr_t bCacheChildren = 0x188;
            static constexpr std::uintptr_t OnCurrentPageIndexChanged = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActiveWidgetIndex", 0x180, "IntProperty"},
            {"MoveSpeed", 0x184, "FloatProperty"},
            {"bCacheChildren", 0x188, "BoolProperty"},
            {"OnCurrentPageIndexChanged", 0x190, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "BeginAutoScrolling",
            "EndAutoScrolling",
            "GetActiveWidgetIndex",
            "GetCacheChildren",
            "GetMoveSpeed",
            "GetWidgetAtIndex",
            "NextPage",
            "PreviousPage",
            "SetActiveWidget",
            "SetActiveWidgetIndex",
            "SetCacheChildren",
            "SetMoveSpeed",
        }};
    };

    struct CommonWidgetCarouselNavBar
    {
        static constexpr std::string_view Name = "CommonWidgetCarouselNavBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonWidgetType = 0x168;
            static constexpr std::uintptr_t ButtonPadding = 0x170;
            static constexpr std::uintptr_t LinkedCarousel = 0x190;
            static constexpr std::uintptr_t ButtonGroup = 0x198;
            static constexpr std::uintptr_t Buttons = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ButtonWidgetType", 0x168, "ClassProperty"},
            {"ButtonPadding", 0x170, "StructProperty"},
            {"LinkedCarousel", 0x190, "ObjectProperty"},
            {"ButtonGroup", 0x198, "ObjectProperty"},
            {"Buttons", 0x1A0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "HandleButtonClicked",
            "HandlePageChanged",
            "SetLinkedCarousel",
        }};
    };

    struct CommonWidgetGroupBase
    {
        static constexpr std::string_view Name = "CommonWidgetGroupBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddWidget",
            "AddWidgets",
            "RemoveAll",
            "RemoveWidget",
        }};
    };

    struct LoadGuardSlot
    {
        static constexpr std::string_view Name = "LoadGuardSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x48;
            static constexpr std::uintptr_t VerticalAlignment = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x48, "ByteProperty"},
            {"VerticalAlignment", 0x49, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct RichTextIconData
    {
        static constexpr std::string_view Name = "RichTextIconData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t ResourceObject = 0x18;
            static constexpr std::uintptr_t ImageSize = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0x8, "TextProperty"},
            {"ResourceObject", 0x18, "SoftObjectProperty"},
            {"ImageSize", 0x38, "StructProperty"},
        }};
    };

    struct UCommonVisibilityWidgetBase
    {
        static constexpr std::string_view Name = "UCommonVisibilityWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonBorder";
        struct Offsets
        {
            static constexpr std::uintptr_t VisibilityControls = 0x300;
            static constexpr std::uintptr_t bShowForGamepad = 0x310;
            static constexpr std::uintptr_t bShowForMouseAndKeyboard = 0x311;
            static constexpr std::uintptr_t bShowForTouch = 0x312;
            static constexpr std::uintptr_t VisibleType = 0x313;
            static constexpr std::uintptr_t HiddenType = 0x314;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VisibilityControls", 0x300, "MapProperty"},
            {"bShowForGamepad", 0x310, "BoolProperty"},
            {"bShowForMouseAndKeyboard", 0x311, "BoolProperty"},
            {"bShowForTouch", 0x312, "BoolProperty"},
            {"VisibleType", 0x313, "EnumProperty"},
            {"HiddenType", 0x314, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetRegisteredPlatforms",
        }};
    };

    struct UIActionBindingHandle
    {
        static constexpr std::string_view Name = "UIActionBindingHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIActionKeyMapping
    {
        static constexpr std::string_view Name = "UIActionKeyMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t HoldTime = 0x18;
            static constexpr std::uintptr_t HoldRollbackTime = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"HoldTime", 0x18, "FloatProperty"},
            {"HoldRollbackTime", 0x1C, "FloatProperty"},
        }};
    };

    struct UIActionTag
    {
        static constexpr std::string_view Name = "UIActionTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UITag";
        struct Offsets
        {
            static constexpr std::uintptr_t TagName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagName", 0x0, "NameProperty"},
        }};
    };

    struct UIInputAction
    {
        static constexpr std::string_view Name = "UIInputAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionTag = 0x0;
            static constexpr std::uintptr_t DefaultDisplayName = 0x8;
            static constexpr std::uintptr_t KeyMappings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActionTag", 0x0, "StructProperty"},
            {"DefaultDisplayName", 0x8, "TextProperty"},
            {"KeyMappings", 0x18, "ArrayProperty"},
        }};
    };

    struct UIInputConfig
    {
        static constexpr std::string_view Name = "UIInputConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreMoveInput = 0x0;
            static constexpr std::uintptr_t bIgnoreLookInput = 0x1;
            static constexpr std::uintptr_t InputMode = 0x2;
            static constexpr std::uintptr_t MouseCaptureMode = 0x3;
            static constexpr std::uintptr_t MouseLockMode = 0x4;
            static constexpr std::uintptr_t bHideCursorDuringViewportCapture = 0x5;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIgnoreMoveInput", 0x0, "BoolProperty"},
            {"bIgnoreLookInput", 0x1, "BoolProperty"},
            {"InputMode", 0x2, "EnumProperty"},
            {"MouseCaptureMode", 0x3, "EnumProperty"},
            {"MouseLockMode", 0x4, "EnumProperty"},
            {"bHideCursorDuringViewportCapture", 0x5, "BoolProperty"},
        }};
    };

    struct UITag
    {
        static constexpr std::string_view Name = "UITag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t TagName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagName", 0x0, "NameProperty"},
        }};
    };

    struct VirtualPointerVisualStateInterface
    {
        static constexpr std::string_view Name = "VirtualPointerVisualStateInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnVirtualPointerHoldProgress",
            "OnVirtualPointerVisualStateChanged",
        }};
    };

    struct WidgetLockedStateRegistration
    {
        static constexpr std::string_view Name = "WidgetLockedStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBinaryStateRegistration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
