#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CommonUILegacy
{
    struct CommonActivatablePanelLegacy
    {
        static constexpr std::string_view Name = "CommonActivatablePanelLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWidgetActivated = 0x4A8;
            static constexpr std::uintptr_t OnWidgetDeactivated = 0x4B8;
            static constexpr std::uintptr_t bConsumeAllActions = 0x4C8;
            static constexpr std::uintptr_t bExposeActionsExternally = 0x4C9;
            static constexpr std::uintptr_t bShouldBypassStack = 0x4CA;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnWidgetActivated", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnWidgetDeactivated", 0x4B8, "MulticastInlineDelegateProperty"},
            {"bConsumeAllActions", 0x4C8, "BoolProperty"},
            {"bExposeActionsExternally", 0x4C9, "BoolProperty"},
            {"bShouldBypassStack", 0x4CA, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 30> FunctionNames{{
            "AddInputActionHandler",
            "AddInputActionHandlerWithPopup",
            "AddInputActionHandlerWithProgress",
            "AddInputActionHandlerWithProgressPopup",
            "AddInputActionNoHandler",
            "BeginIntro",
            "BeginOutro",
            "EndIntro",
            "EndOutro",
            "GetInputActions",
            "HasInputActionHandler",
            "IsInActivationStack",
            "IsIntroed",
            "OnAddedToActivationStack",
            "OnBeginIntro",
            "OnBeginOutro",
            "OnInputModeChanged",
            "OnRemovedFromActivationStack",
            "OnTransitionedBySwitcher",
            "PopPanel",
            "RemoveAllInputActionHandlers",
            "RemoveInputActionHandler",
            "SetActionHandlerState",
            "SetActionHandlerStateFromHandle",
            "SetActionHandlerStateFromHandleWithDisabledCommitEvent",
            "SetActionHandlerStateWithDisabledCommitEvent",
            "SetInputActionHandler",
            "SetInputActionHandlerWithPopupMenu",
            "SetInputActionHandlerWithProgress",
            "SetInputActionHandlerWithProgressPopupMenu",
        }};
    };

    struct CommonButtonGroupLegacy
    {
        static constexpr std::string_view Name = "CommonButtonGroupLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSelectedButtonChanged = 0x170;
            static constexpr std::uintptr_t OnHoveredButtonChanged = 0x198;
            static constexpr std::uintptr_t OnButtonClicked = 0x1C0;
            static constexpr std::uintptr_t OnButtonDoubleClicked = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnSelectedButtonChanged", 0x170, "MulticastInlineDelegateProperty"},
            {"OnHoveredButtonChanged", 0x198, "MulticastInlineDelegateProperty"},
            {"OnButtonClicked", 0x1C0, "MulticastInlineDelegateProperty"},
            {"OnButtonDoubleClicked", 0x1E8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "CreateButtonGroup",
            "GetButtonAtIndex",
            "GetSelectedButton",
            "HandleNativeOnButtonClicked",
            "HandleNativeOnButtonDoubleClicked",
            "HandleNativeOnHoveredButtonChanged",
            "HandleNativeOnSelectedButtonChanged",
            "HandleOnButtonClicked",
            "HandleOnButtonDoubleClicked",
            "HandleOnHoveredButtonChanged",
            "HandleOnSelectedButtonChanged",
            "OnButtonHovered",
            "OnButtonUnhovered",
            "OnHandleButtonClicked",
            "OnHandleButtonDoubleClicked",
            "OnSelectionStateChanged",
        }};
    };

    struct CommonButtonInternalLegacy
    {
        static constexpr std::string_view Name = "CommonButtonInternalLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonInternalBase";
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

    struct CommonButtonLegacy
    {
        static constexpr std::string_view Name = "CommonButtonLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSelectedChanged = 0x15D0;
            static constexpr std::uintptr_t OnButtonClicked = 0x15E0;
            static constexpr std::uintptr_t OnButtonDoubleClicked = 0x15F0;
            static constexpr std::uintptr_t OnButtonHovered = 0x1600;
            static constexpr std::uintptr_t OnButtonUnhovered = 0x1610;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSelectedChanged", 0x15D0, "MulticastInlineDelegateProperty"},
            {"OnButtonClicked", 0x15E0, "MulticastInlineDelegateProperty"},
            {"OnButtonDoubleClicked", 0x15F0, "MulticastInlineDelegateProperty"},
            {"OnButtonHovered", 0x1600, "MulticastInlineDelegateProperty"},
            {"OnButtonUnhovered", 0x1610, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "HandleOnButtonClicked",
            "HandleOnButtonDoubleClicked",
            "HandleOnButtonHovered",
            "HandleOnButtonUnhovered",
            "HandleOnSelectedChanged",
            "SetTriggeredInputActionLegacy",
        }};
    };

    struct CommonGlobalInputHandlerLegacy
    {
        static constexpr std::string_view Name = "CommonGlobalInputHandlerLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonInputActionData
    {
        static constexpr std::string_view Name = "CommonInputActionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CommonInputActionDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GamepadInputTypeInfoOverrides = 0x310;
            static constexpr std::uintptr_t GamepadInputTypeInfos = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GamepadInputTypeInfoOverrides", 0x310, "MapProperty"},
            {"GamepadInputTypeInfos", 0x320, "StructProperty"},
        }};
    };

    struct CommonInputManagerLegacy
    {
        static constexpr std::string_view Name = "CommonInputManagerLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentlyHeldActionInputHandler = 0xA8;
            static constexpr std::uintptr_t ActivatablePanelStack = 0xB8;
            static constexpr std::uintptr_t GlobalInputHandler = 0xC8;
            static constexpr std::uintptr_t Operations = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentlyHeldActionInputHandler", 0xA8, "InterfaceProperty"},
            {"ActivatablePanelStack", 0xB8, "ArrayProperty"},
            {"GlobalInputHandler", 0xC8, "ObjectProperty"},
            {"Operations", 0xE8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetAvailableInputActions",
            "GetGlobalInputHandlerPriorityFilter",
            "GetTopPanel",
            "IsInputSuspended",
            "IsPanelOnStack",
            "PopActivatablePanel",
            "PushActivatablePanel",
            "ResumeStartingOperationProcessing",
            "SetGlobalInputHandlerPriorityFilter",
            "StartListeningForExistingHeldAction",
            "StopListeningForExistingHeldAction",
            "SuspendStartingOperationProcessing",
        }};
    };

    struct CommonInputReflectorLegacy
    {
        static constexpr std::string_view Name = "CommonInputReflectorLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonType = 0x330;
            static constexpr std::uintptr_t ActiveButtons = 0x338;
            static constexpr std::uintptr_t InactiveButtons = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ButtonType", 0x330, "ClassProperty"},
            {"ActiveButtons", 0x338, "ArrayProperty"},
            {"InactiveButtons", 0x348, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnButtonAdded",
        }};
    };

    struct CommonPopupButtonLegacy
    {
        static constexpr std::string_view Name = "CommonPopupButtonLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t PopupMenuAnchor = 0x1620;
            static constexpr std::uintptr_t PopupMenu = 0x1628;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PopupMenuAnchor", 0x1620, "ObjectProperty"},
            {"PopupMenu", 0x1628, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetMenuAnchorWidget",
        }};
    };

    struct CommonPopupMenuLegacy
    {
        static constexpr std::string_view Name = "CommonPopupMenuLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
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

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "HandlePostDifferentContextProviderSet",
            "HandlePreDifferentContextProviderSet",
            "OnIsOpenChanged",
            "RequestClose",
            "SetContextProvider",
            "SetOwningMenuAnchor",
        }};
    };

    struct CommonTabListWidgetLegacy
    {
        static constexpr std::string_view Name = "CommonTabListWidgetLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonTabListWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTabButtonCreated = 0x428;
            static constexpr std::uintptr_t OnTabButtonRemoved = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnTabButtonCreated", 0x428, "MulticastInlineDelegateProperty"},
            {"OnTabButtonRemoved", 0x438, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetTabButtonByID",
            "HandleOnTabButtonCreated",
            "HandleOnTabButtonRemoved",
            "HandleTabCreated",
            "HandleTabRemoved",
        }};
    };

    struct CommonUIActionRouterLegacy
    {
        static constexpr std::string_view Name = "CommonUIActionRouterLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUIActionRouterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CommonUISubsystemLegacy
    {
        static constexpr std::string_view Name = "CommonUISubsystemLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUISubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInputSuspensionChanged = 0x40;
            static constexpr std::uintptr_t CommonInputManager = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnInputSuspensionChanged", 0x40, "MulticastInlineDelegateProperty"},
            {"CommonInputManager", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetInputManager",
        }};
    };

    struct CommonVisibilityWidgetLegacy
    {
        static constexpr std::string_view Name = "CommonVisibilityWidgetLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonBorder";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowForGamepad = 0x300;
            static constexpr std::uintptr_t bShowForMouseAndKeyboard = 0x301;
            static constexpr std::uintptr_t bShowForTouch = 0x302;
            static constexpr std::uintptr_t bShowForPC = 0x303;
            static constexpr std::uintptr_t bShowForMac = 0x304;
            static constexpr std::uintptr_t bShowForPS4 = 0x305;
            static constexpr std::uintptr_t bShowForPS5 = 0x306;
            static constexpr std::uintptr_t bShowForXBox = 0x307;
            static constexpr std::uintptr_t bShowForXSX = 0x308;
            static constexpr std::uintptr_t bShowForIOS = 0x309;
            static constexpr std::uintptr_t bShowForAndroid = 0x30A;
            static constexpr std::uintptr_t bShowForErebus = 0x30B;
            static constexpr std::uintptr_t bShowForSwitch2 = 0x30C;
            static constexpr std::uintptr_t VisibleType = 0x30D;
            static constexpr std::uintptr_t HiddenType = 0x30E;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bShowForGamepad", 0x300, "BoolProperty"},
            {"bShowForMouseAndKeyboard", 0x301, "BoolProperty"},
            {"bShowForTouch", 0x302, "BoolProperty"},
            {"bShowForPC", 0x303, "BoolProperty"},
            {"bShowForMac", 0x304, "BoolProperty"},
            {"bShowForPS4", 0x305, "BoolProperty"},
            {"bShowForPS5", 0x306, "BoolProperty"},
            {"bShowForXBox", 0x307, "BoolProperty"},
            {"bShowForXSX", 0x308, "BoolProperty"},
            {"bShowForIOS", 0x309, "BoolProperty"},
            {"bShowForAndroid", 0x30A, "BoolProperty"},
            {"bShowForErebus", 0x30B, "BoolProperty"},
            {"bShowForSwitch2", 0x30C, "BoolProperty"},
            {"VisibleType", 0x30D, "EnumProperty"},
            {"HiddenType", 0x30E, "EnumProperty"},
        }};
    };

    struct CommonWidgetStackLegacy
    {
        static constexpr std::string_view Name = "CommonWidgetStackLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonVisibilitySwitcher";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActiveWidgetChangedLegacyEvent = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActiveWidgetChangedLegacyEvent", 0x1B8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ActivateWidget",
            "DeactivateWidget",
            "PopWidget",
            "PushWidget",
        }};
    };

    struct CommonWidgetSwitcherLegacy
    {
        static constexpr std::string_view Name = "CommonWidgetSwitcherLegacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonAnimatedSwitcher";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActiveWidgetDeactivated = 0x220;
            static constexpr std::uintptr_t OnActiveWidgetChanged = 0x230;
            static constexpr std::uintptr_t bWidgetActivationEnabled = 0x240;
            static constexpr std::uintptr_t bOutroPanelBelow = 0x241;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnActiveWidgetDeactivated", 0x220, "MulticastInlineDelegateProperty"},
            {"OnActiveWidgetChanged", 0x230, "MulticastInlineDelegateProperty"},
            {"bWidgetActivationEnabled", 0x240, "BoolProperty"},
            {"bOutroPanelBelow", 0x241, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "ActivateWidget",
            "DeactivateWidget",
            "HandleActiveWidgetDeactivated",
            "SetActiveWidgetIndex_Advanced",
            "SetActiveWidget_Advanced",
        }};
    };

    struct Operation
    {
        static constexpr std::string_view Name = "Operation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x0;
            static constexpr std::uintptr_t Panel = 0x8;
            static constexpr std::uintptr_t bIntroPanel = 0x10;
            static constexpr std::uintptr_t bActivatePanel = 0x11;
            static constexpr std::uintptr_t bOutroPanelBelow = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Operation", 0x0, "EnumProperty"},
            {"Panel", 0x8, "ObjectProperty"},
            {"bIntroPanel", 0x10, "BoolProperty"},
            {"bActivatePanel", 0x11, "BoolProperty"},
            {"bOutroPanelBelow", 0x12, "BoolProperty"},
        }};
    };

}
