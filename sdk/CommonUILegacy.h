/**
 * decamp dumper generated SDK
 * Package: /Script/CommonUILegacy
 */
#pragma once
#include "Basic.h"

// /Script/CommonUILegacy.CommonInputActionData
// Kind: ScriptStruct; super: CommonInputActionDataBase
struct FCommonInputActionData
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    TMap<void*, void*> GamepadInputTypeInfoOverrides; // 0x0310 (Size: 0x10, Type: MapProperty)
    std::uint8_t GamepadInputTypeInfos[0x1]; // 0x0320 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonInputActionData, GamepadInputTypeInfoOverrides) == 784, "Offset mismatch for FCommonInputActionData::GamepadInputTypeInfoOverrides");
static_assert(offsetof(FCommonInputActionData, GamepadInputTypeInfos) == 800, "Offset mismatch for FCommonInputActionData::GamepadInputTypeInfos");

// /Script/CommonUILegacy.Operation
// Kind: ScriptStruct; super: none
struct FOperation
{
public:
    std::uint8_t Operation; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Panel; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIntroPanel; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivatePanel; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutroPanelBelow; // 0x0012 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FOperation, Operation) == 0, "Offset mismatch for FOperation::Operation");
static_assert(offsetof(FOperation, Panel) == 8, "Offset mismatch for FOperation::Panel");
static_assert(offsetof(FOperation, bIntroPanel) == 16, "Offset mismatch for FOperation::bIntroPanel");
static_assert(offsetof(FOperation, bActivatePanel) == 17, "Offset mismatch for FOperation::bActivatePanel");
static_assert(offsetof(FOperation, bOutroPanelBelow) == 18, "Offset mismatch for FOperation::bOutroPanelBelow");

// /Script/CommonUILegacy.CommonActivatablePanelLegacy
// Kind: Class; super: CommonActivatableWidget
class UCommonActivatablePanelLegacy
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    FMulticastInlineDelegate OnWidgetActivated; // 0x04A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWidgetDeactivated; // 0x04B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bConsumeAllActions; // 0x04C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExposeActionsExternally; // 0x04C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldBypassStack; // 0x04CA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonActivatablePanelLegacy, OnWidgetActivated) == 1192, "Offset mismatch for UCommonActivatablePanelLegacy::OnWidgetActivated");
static_assert(offsetof(UCommonActivatablePanelLegacy, OnWidgetDeactivated) == 1208, "Offset mismatch for UCommonActivatablePanelLegacy::OnWidgetDeactivated");
static_assert(offsetof(UCommonActivatablePanelLegacy, bConsumeAllActions) == 1224, "Offset mismatch for UCommonActivatablePanelLegacy::bConsumeAllActions");
static_assert(offsetof(UCommonActivatablePanelLegacy, bExposeActionsExternally) == 1225, "Offset mismatch for UCommonActivatablePanelLegacy::bExposeActionsExternally");
static_assert(offsetof(UCommonActivatablePanelLegacy, bShouldBypassStack) == 1226, "Offset mismatch for UCommonActivatablePanelLegacy::bShouldBypassStack");

// /Script/CommonUILegacy.CommonButtonGroupLegacy
// Kind: Class; super: CommonButtonGroupBase
class UCommonButtonGroupLegacy
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    FMulticastInlineDelegate OnSelectedButtonChanged; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0180
    FMulticastInlineDelegate OnHoveredButtonChanged; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x01A8
    FMulticastInlineDelegate OnButtonClicked; // 0x01C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x01D0
    FMulticastInlineDelegate OnButtonDoubleClicked; // 0x01E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonButtonGroupLegacy, OnSelectedButtonChanged) == 368, "Offset mismatch for UCommonButtonGroupLegacy::OnSelectedButtonChanged");
static_assert(offsetof(UCommonButtonGroupLegacy, OnHoveredButtonChanged) == 408, "Offset mismatch for UCommonButtonGroupLegacy::OnHoveredButtonChanged");
static_assert(offsetof(UCommonButtonGroupLegacy, OnButtonClicked) == 448, "Offset mismatch for UCommonButtonGroupLegacy::OnButtonClicked");
static_assert(offsetof(UCommonButtonGroupLegacy, OnButtonDoubleClicked) == 488, "Offset mismatch for UCommonButtonGroupLegacy::OnButtonDoubleClicked");

// /Script/CommonUILegacy.CommonButtonInternalLegacy
// Kind: Class; super: CommonButtonInternalBase
class UCommonButtonInternalLegacy
{
public:
    std::uint8_t Pad_0000[0x620]; // 0x0000
    FMulticastInlineDelegate OnDoubleClicked; // 0x0620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t MinWidth; // 0x0630 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x0634 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x0638 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x063C (Size: 0x4, Type: IntProperty)
    std::uint8_t bButtonEnabled; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInteractionEnabled; // 0x0641 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonButtonInternalLegacy, OnDoubleClicked) == 1568, "Offset mismatch for UCommonButtonInternalLegacy::OnDoubleClicked");
static_assert(offsetof(UCommonButtonInternalLegacy, MinWidth) == 1584, "Offset mismatch for UCommonButtonInternalLegacy::MinWidth");
static_assert(offsetof(UCommonButtonInternalLegacy, MinHeight) == 1588, "Offset mismatch for UCommonButtonInternalLegacy::MinHeight");
static_assert(offsetof(UCommonButtonInternalLegacy, MaxWidth) == 1592, "Offset mismatch for UCommonButtonInternalLegacy::MaxWidth");
static_assert(offsetof(UCommonButtonInternalLegacy, MaxHeight) == 1596, "Offset mismatch for UCommonButtonInternalLegacy::MaxHeight");
static_assert(offsetof(UCommonButtonInternalLegacy, bButtonEnabled) == 1600, "Offset mismatch for UCommonButtonInternalLegacy::bButtonEnabled");
static_assert(offsetof(UCommonButtonInternalLegacy, bInteractionEnabled) == 1601, "Offset mismatch for UCommonButtonInternalLegacy::bInteractionEnabled");

// /Script/CommonUILegacy.CommonButtonLegacy
// Kind: Class; super: CommonButtonBase
class UCommonButtonLegacy
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    FMulticastInlineDelegate OnSelectedChanged; // 0x15A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonClicked; // 0x15B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonDoubleClicked; // 0x15C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonHovered; // 0x15D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonUnhovered; // 0x15E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonButtonLegacy, OnSelectedChanged) == 5536, "Offset mismatch for UCommonButtonLegacy::OnSelectedChanged");
static_assert(offsetof(UCommonButtonLegacy, OnButtonClicked) == 5552, "Offset mismatch for UCommonButtonLegacy::OnButtonClicked");
static_assert(offsetof(UCommonButtonLegacy, OnButtonDoubleClicked) == 5568, "Offset mismatch for UCommonButtonLegacy::OnButtonDoubleClicked");
static_assert(offsetof(UCommonButtonLegacy, OnButtonHovered) == 5584, "Offset mismatch for UCommonButtonLegacy::OnButtonHovered");
static_assert(offsetof(UCommonButtonLegacy, OnButtonUnhovered) == 5600, "Offset mismatch for UCommonButtonLegacy::OnButtonUnhovered");

// /Script/CommonUILegacy.CommonGlobalInputHandlerLegacy
// Kind: Class; super: Object
class UCommonGlobalInputHandlerLegacy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUILegacy.CommonInputManagerLegacy
// Kind: Class; super: Object
class UCommonInputManagerLegacy
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TScriptInterface<void> CurrentlyHeldActionInputHandler; // 0x00A8 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> ActivatablePanelStack; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    void* GlobalInputHandler; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D0
    TArray<void*> Operations; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCommonInputManagerLegacy, CurrentlyHeldActionInputHandler) == 168, "Offset mismatch for UCommonInputManagerLegacy::CurrentlyHeldActionInputHandler");
static_assert(offsetof(UCommonInputManagerLegacy, ActivatablePanelStack) == 184, "Offset mismatch for UCommonInputManagerLegacy::ActivatablePanelStack");
static_assert(offsetof(UCommonInputManagerLegacy, GlobalInputHandler) == 200, "Offset mismatch for UCommonInputManagerLegacy::GlobalInputHandler");
static_assert(offsetof(UCommonInputManagerLegacy, Operations) == 232, "Offset mismatch for UCommonInputManagerLegacy::Operations");

// /Script/CommonUILegacy.CommonInputReflectorLegacy
// Kind: Class; super: CommonUserWidget
class UCommonInputReflectorLegacy
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* ButtonType; // 0x0330 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ActiveButtons; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InactiveButtons; // 0x0348 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCommonInputReflectorLegacy, ButtonType) == 816, "Offset mismatch for UCommonInputReflectorLegacy::ButtonType");
static_assert(offsetof(UCommonInputReflectorLegacy, ActiveButtons) == 824, "Offset mismatch for UCommonInputReflectorLegacy::ActiveButtons");
static_assert(offsetof(UCommonInputReflectorLegacy, InactiveButtons) == 840, "Offset mismatch for UCommonInputReflectorLegacy::InactiveButtons");

// /Script/CommonUILegacy.CommonPopupButtonLegacy
// Kind: Class; super: CommonButtonLegacy
class UCommonPopupButtonLegacy
{
public:
    std::uint8_t Pad_0000[0x15F0]; // 0x0000
    void* PopupMenuAnchor; // 0x15F0 (Size: 0x8, Type: ObjectProperty)
    void* PopupMenu; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonPopupButtonLegacy, PopupMenuAnchor) == 5616, "Offset mismatch for UCommonPopupButtonLegacy::PopupMenuAnchor");
static_assert(offsetof(UCommonPopupButtonLegacy, PopupMenu) == 5624, "Offset mismatch for UCommonPopupButtonLegacy::PopupMenu");

// /Script/CommonUILegacy.CommonPopupMenuLegacy
// Kind: Class; super: CommonActivatablePanelLegacy
class UCommonPopupMenuLegacy
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    std::uint8_t bUseInputStack; // 0x0560 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0561
    TWeakObjectPtr<void> OwningMenuAnchor; // 0x0564 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ContextProvidingObject; // 0x056C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCommonPopupMenuLegacy, bUseInputStack) == 1376, "Offset mismatch for UCommonPopupMenuLegacy::bUseInputStack");
static_assert(offsetof(UCommonPopupMenuLegacy, OwningMenuAnchor) == 1380, "Offset mismatch for UCommonPopupMenuLegacy::OwningMenuAnchor");
static_assert(offsetof(UCommonPopupMenuLegacy, ContextProvidingObject) == 1388, "Offset mismatch for UCommonPopupMenuLegacy::ContextProvidingObject");

// /Script/CommonUILegacy.CommonTabListWidgetLegacy
// Kind: Class; super: CommonTabListWidgetBase
class UCommonTabListWidgetLegacy
{
public:
    std::uint8_t Pad_0000[0x428]; // 0x0000
    FMulticastInlineDelegate OnTabButtonCreated; // 0x0428 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTabButtonRemoved; // 0x0438 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonTabListWidgetLegacy, OnTabButtonCreated) == 1064, "Offset mismatch for UCommonTabListWidgetLegacy::OnTabButtonCreated");
static_assert(offsetof(UCommonTabListWidgetLegacy, OnTabButtonRemoved) == 1080, "Offset mismatch for UCommonTabListWidgetLegacy::OnTabButtonRemoved");

// /Script/CommonUILegacy.CommonUIActionRouterLegacy
// Kind: Class; super: CommonUIActionRouterBase
class UCommonUIActionRouterLegacy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUILegacy.CommonUISubsystemLegacy
// Kind: Class; super: CommonUISubsystemBase
class UCommonUISubsystemLegacy
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FMulticastInlineDelegate OnInputSuspensionChanged; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CommonInputManager; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonUISubsystemLegacy, OnInputSuspensionChanged) == 64, "Offset mismatch for UCommonUISubsystemLegacy::OnInputSuspensionChanged");
static_assert(offsetof(UCommonUISubsystemLegacy, CommonInputManager) == 80, "Offset mismatch for UCommonUISubsystemLegacy::CommonInputManager");

// /Script/CommonUILegacy.CommonVisibilityWidgetLegacy
// Kind: Class; super: CommonBorder
class UCommonVisibilityWidgetLegacy
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    std::uint8_t bShowForGamepad; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForMouseAndKeyboard; // 0x0301 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForTouch; // 0x0302 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForPC; // 0x0303 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForMac; // 0x0304 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForPS4; // 0x0305 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForPS5; // 0x0306 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForXBox; // 0x0307 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForXSX; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForIOS; // 0x0309 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForAndroid; // 0x030A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForErebus; // 0x030B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForSwitch2; // 0x030C (Size: 0x1, Type: BoolProperty)
    std::uint8_t VisibleType; // 0x030D (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenType; // 0x030E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForGamepad) == 768, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForGamepad");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForMouseAndKeyboard) == 769, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForMouseAndKeyboard");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForTouch) == 770, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForTouch");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForPC) == 771, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForPC");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForMac) == 772, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForMac");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForPS4) == 773, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForPS4");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForPS5) == 774, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForPS5");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForXBox) == 775, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForXBox");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForXSX) == 776, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForXSX");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForIOS) == 777, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForIOS");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForAndroid) == 778, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForAndroid");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForErebus) == 779, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForErebus");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForSwitch2) == 780, "Offset mismatch for UCommonVisibilityWidgetLegacy::bShowForSwitch2");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, VisibleType) == 781, "Offset mismatch for UCommonVisibilityWidgetLegacy::VisibleType");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, HiddenType) == 782, "Offset mismatch for UCommonVisibilityWidgetLegacy::HiddenType");

// /Script/CommonUILegacy.CommonWidgetStackLegacy
// Kind: Class; super: CommonVisibilitySwitcher
class UCommonWidgetStackLegacy
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    FMulticastInlineDelegate OnActiveWidgetChangedLegacyEvent; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonWidgetStackLegacy, OnActiveWidgetChangedLegacyEvent) == 440, "Offset mismatch for UCommonWidgetStackLegacy::OnActiveWidgetChangedLegacyEvent");

// /Script/CommonUILegacy.CommonWidgetSwitcherLegacy
// Kind: Class; super: CommonAnimatedSwitcher
class UCommonWidgetSwitcherLegacy
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    FMulticastInlineDelegate OnActiveWidgetDeactivated; // 0x0220 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActiveWidgetChanged; // 0x0230 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bWidgetActivationEnabled; // 0x0240 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutroPanelBelow; // 0x0241 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonWidgetSwitcherLegacy, OnActiveWidgetDeactivated) == 544, "Offset mismatch for UCommonWidgetSwitcherLegacy::OnActiveWidgetDeactivated");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, OnActiveWidgetChanged) == 560, "Offset mismatch for UCommonWidgetSwitcherLegacy::OnActiveWidgetChanged");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, bWidgetActivationEnabled) == 576, "Offset mismatch for UCommonWidgetSwitcherLegacy::bWidgetActivationEnabled");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, bOutroPanelBelow) == 577, "Offset mismatch for UCommonWidgetSwitcherLegacy::bOutroPanelBelow");
