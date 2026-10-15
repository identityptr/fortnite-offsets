/**
 * decamp dumper generated SDK
 * Package: /Script/SqueegeeUI
 */
#pragma once
#include "Basic.h"

// /Script/SqueegeeUI.SqueegeeInjectionData
// Kind: ScriptStruct; super: none
struct FSqueegeeInjectionData
{
public:
    std::uint8_t WidgetType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TSoftClassPtr<void> WidgetClass; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FSqueegeeInjectionData, WidgetType) == 0, "Offset mismatch for FSqueegeeInjectionData::WidgetType");
static_assert(offsetof(FSqueegeeInjectionData, WidgetClass) == 8, "Offset mismatch for FSqueegeeInjectionData::WidgetClass");

// /Script/SqueegeeUI.SqueegeeTextData
// Kind: ScriptStruct; super: none
struct FSqueegeeTextData
{
public:
    std::uint8_t TextType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FText DesiredText; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSqueegeeTextData, TextType) == 0, "Offset mismatch for FSqueegeeTextData::TextType");
static_assert(offsetof(FSqueegeeTextData, DesiredText) == 8, "Offset mismatch for FSqueegeeTextData::DesiredText");

// /Script/SqueegeeUI.FortContentGateDetailsWidget
// Kind: Class; super: FortSqueegeeWidget
class UFortContentGateDetailsWidget
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    void* ContentGateRatingWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContentGateDetailsWidget, ContentGateRatingWidget) == 848, "Offset mismatch for UFortContentGateDetailsWidget::ContentGateRatingWidget");

// /Script/SqueegeeUI.FortContentGateRatingWidget
// Kind: Class; super: FortSqueegeeWidget
class UFortContentGateRatingWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortContentGateRatingWidget, bDisplayInActionBar) == 776, "Offset mismatch for UFortContentGateRatingWidget::bDisplayInActionBar");
static_assert(offsetof(UFortContentGateRatingWidget, bConsumePointerInput) == 777, "Offset mismatch for UFortContentGateRatingWidget::bConsumePointerInput");

// /Script/SqueegeeUI.FortContentManagementButton
// Kind: Class; super: CommonButtonBase
class UFortContentManagementButton
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t ClickEvent[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::int32_t MinWidth; // 0x0334 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x033C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0344
    void* Style; // 0x0348 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bHideInputAction; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0351
    std::uint8_t PressedSlateSoundOverride[0x18]; // 0x0358 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSoundOverride[0x18]; // 0x0370 (Size: 0x18, Type: StructProperty)
    std::uint8_t HoveredSlateSoundOverride[0x18]; // 0x0388 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedPressedSlateSoundOverride[0x18]; // 0x03A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedClickedSlateSoundOverride[0x18]; // 0x03B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedHoveredSlateSoundOverride[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedPressedSlateSoundOverride[0x18]; // 0x03E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedClickedSlateSoundOverride[0x18]; // 0x0400 (Size: 0x18, Type: StructProperty)
    std::uint8_t LockedHoveredSlateSoundOverride[0x18]; // 0x0418 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyAlphaOnDisable; // 0x0430 (Size: 0x1, Type: BoolProperty)
    // 0x0430 BoolProperty bDisplayInputActionWhenNotInteractable (shared storage)
    // 0x0430 BoolProperty bInteractableWhenSelected (shared storage)
    // 0x0430 BoolProperty bLocked (shared storage)
    // 0x0430 BoolProperty bSelectable (shared storage)
    // 0x0430 BoolProperty bShouldSelectUponReceivingFocus (shared storage)
    // 0x0430 BoolProperty bToggleable (shared storage)
    // 0x0430 BoolProperty bTriggerClickedAfterSelection (shared storage)
    std::uint8_t bHideInputActionWithKeyboard; // 0x0431 (Size: 0x1, Type: BoolProperty)
    // 0x0431 BoolProperty bRequiresHold (shared storage)
    // 0x0431 BoolProperty bShouldUseFallbackDefaultInputAction (shared storage)
    std::uint8_t Pad_0003[0x6]; // 0x0432
    void* HoldData; // 0x0438 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bSimulateHoverOnTouchInput; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0441
    std::uint8_t ClickMethod; // 0x0443 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TouchMethod; // 0x0444 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PressMethod; // 0x0445 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0446
    std::int32_t InputPriority; // 0x0448 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x4]; // 0x044C
    std::uint8_t TriggeringInputAction[0x10]; // 0x0450 (Size: 0x10, Type: StructProperty)
    void* TriggeringEnhancedInputAction; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x10]; // 0x0468
    std::uint8_t bNavigateToNextWidgetOnDisable; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0479
    FMulticastInlineDelegate OnSelectedChangedBase; // 0x0480 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseClicked; // 0x0490 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x04A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseHovered; // 0x04B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x04C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseFocused; // 0x04D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnfocused; // 0x04E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x04F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x0500 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseSelected; // 0x0510 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseUnselected; // 0x0520 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragDetected; // 0x0530 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragEnter; // 0x0540 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragLeave; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDragOver; // 0x0560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonBaseDrop; // 0x0570 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x38]; // 0x0580
    std::uint8_t bIsPersistentBinding; // 0x05B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputModeOverride; // 0x05B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x26]; // 0x05BA
    void* SingleMaterialStyleMID; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x8]; // 0x05E8
    std::uint8_t NormalStyle[0x390]; // 0x05F0 (Size: 0x390, Type: StructProperty)
    std::uint8_t SelectedStyle[0x390]; // 0x0980 (Size: 0x390, Type: StructProperty)
    std::uint8_t DisabledStyle[0x390]; // 0x0D10 (Size: 0x390, Type: StructProperty)
    std::uint8_t LockedStyle[0x390]; // 0x10A0 (Size: 0x390, Type: StructProperty)
    std::uint8_t bStopDoubleClickPropagation; // 0x1430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x167]; // 0x1431
    void* InputActionWidget; // 0x1598 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContentManagementButton, ClickEvent) == 816, "Offset mismatch for UFortContentManagementButton::ClickEvent");
static_assert(offsetof(UFortContentManagementButton, MinWidth) == 820, "Offset mismatch for UFortContentManagementButton::MinWidth");
static_assert(offsetof(UFortContentManagementButton, MinHeight) == 824, "Offset mismatch for UFortContentManagementButton::MinHeight");
static_assert(offsetof(UFortContentManagementButton, MaxWidth) == 828, "Offset mismatch for UFortContentManagementButton::MaxWidth");
static_assert(offsetof(UFortContentManagementButton, MaxHeight) == 832, "Offset mismatch for UFortContentManagementButton::MaxHeight");
static_assert(offsetof(UFortContentManagementButton, Style) == 840, "Offset mismatch for UFortContentManagementButton::Style");
static_assert(offsetof(UFortContentManagementButton, bHideInputAction) == 848, "Offset mismatch for UFortContentManagementButton::bHideInputAction");
static_assert(offsetof(UFortContentManagementButton, PressedSlateSoundOverride) == 856, "Offset mismatch for UFortContentManagementButton::PressedSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, ClickedSlateSoundOverride) == 880, "Offset mismatch for UFortContentManagementButton::ClickedSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, HoveredSlateSoundOverride) == 904, "Offset mismatch for UFortContentManagementButton::HoveredSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UFortContentManagementButton::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UFortContentManagementButton::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UFortContentManagementButton::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UFortContentManagementButton::LockedPressedSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UFortContentManagementButton::LockedClickedSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UFortContentManagementButton::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UFortContentManagementButton, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UFortContentManagementButton::bApplyAlphaOnDisable");
static_assert(offsetof(UFortContentManagementButton, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UFortContentManagementButton::bHideInputActionWithKeyboard");
static_assert(offsetof(UFortContentManagementButton, HoldData) == 1080, "Offset mismatch for UFortContentManagementButton::HoldData");
static_assert(offsetof(UFortContentManagementButton, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UFortContentManagementButton::bSimulateHoverOnTouchInput");
static_assert(offsetof(UFortContentManagementButton, ClickMethod) == 1091, "Offset mismatch for UFortContentManagementButton::ClickMethod");
static_assert(offsetof(UFortContentManagementButton, TouchMethod) == 1092, "Offset mismatch for UFortContentManagementButton::TouchMethod");
static_assert(offsetof(UFortContentManagementButton, PressMethod) == 1093, "Offset mismatch for UFortContentManagementButton::PressMethod");
static_assert(offsetof(UFortContentManagementButton, InputPriority) == 1096, "Offset mismatch for UFortContentManagementButton::InputPriority");
static_assert(offsetof(UFortContentManagementButton, TriggeringInputAction) == 1104, "Offset mismatch for UFortContentManagementButton::TriggeringInputAction");
static_assert(offsetof(UFortContentManagementButton, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UFortContentManagementButton::TriggeringEnhancedInputAction");
static_assert(offsetof(UFortContentManagementButton, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UFortContentManagementButton::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UFortContentManagementButton, OnSelectedChangedBase) == 1152, "Offset mismatch for UFortContentManagementButton::OnSelectedChangedBase");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseClicked) == 1168, "Offset mismatch for UFortContentManagementButton::OnButtonBaseClicked");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UFortContentManagementButton::OnButtonBaseDoubleClicked");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseHovered) == 1200, "Offset mismatch for UFortContentManagementButton::OnButtonBaseHovered");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UFortContentManagementButton::OnButtonBaseUnhovered");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseFocused) == 1232, "Offset mismatch for UFortContentManagementButton::OnButtonBaseFocused");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UFortContentManagementButton::OnButtonBaseUnfocused");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UFortContentManagementButton::OnButtonBaseLockClicked");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UFortContentManagementButton::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseSelected) == 1296, "Offset mismatch for UFortContentManagementButton::OnButtonBaseSelected");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseUnselected) == 1312, "Offset mismatch for UFortContentManagementButton::OnButtonBaseUnselected");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UFortContentManagementButton::OnButtonBaseDragDetected");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UFortContentManagementButton::OnButtonBaseDragEnter");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UFortContentManagementButton::OnButtonBaseDragLeave");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseDragOver) == 1376, "Offset mismatch for UFortContentManagementButton::OnButtonBaseDragOver");
static_assert(offsetof(UFortContentManagementButton, OnButtonBaseDrop) == 1392, "Offset mismatch for UFortContentManagementButton::OnButtonBaseDrop");
static_assert(offsetof(UFortContentManagementButton, bIsPersistentBinding) == 1464, "Offset mismatch for UFortContentManagementButton::bIsPersistentBinding");
static_assert(offsetof(UFortContentManagementButton, InputModeOverride) == 1465, "Offset mismatch for UFortContentManagementButton::InputModeOverride");
static_assert(offsetof(UFortContentManagementButton, SingleMaterialStyleMID) == 1504, "Offset mismatch for UFortContentManagementButton::SingleMaterialStyleMID");
static_assert(offsetof(UFortContentManagementButton, NormalStyle) == 1520, "Offset mismatch for UFortContentManagementButton::NormalStyle");
static_assert(offsetof(UFortContentManagementButton, SelectedStyle) == 2432, "Offset mismatch for UFortContentManagementButton::SelectedStyle");
static_assert(offsetof(UFortContentManagementButton, DisabledStyle) == 3344, "Offset mismatch for UFortContentManagementButton::DisabledStyle");
static_assert(offsetof(UFortContentManagementButton, LockedStyle) == 4256, "Offset mismatch for UFortContentManagementButton::LockedStyle");
static_assert(offsetof(UFortContentManagementButton, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UFortContentManagementButton::bStopDoubleClickPropagation");
static_assert(offsetof(UFortContentManagementButton, InputActionWidget) == 5528, "Offset mismatch for UFortContentManagementButton::InputActionWidget");

// /Script/SqueegeeUI.FortContentManagementDetails
// Kind: Class; super: FortSqueegeeWidget
class UFortContentManagementDetails
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    void* ContentGateRatingWidget; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContentManagementDetails, ContentGateRatingWidget) == 848, "Offset mismatch for UFortContentManagementDetails::ContentGateRatingWidget");

// /Script/SqueegeeUI.FortContentManagementEntryDataObject
// Kind: Class; super: Object
class UFortContentManagementEntryDataObject
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t LockState; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortContentManagementEntryDataObject, LockState) == 96, "Offset mismatch for UFortContentManagementEntryDataObject::LockState");

// /Script/SqueegeeUI.FortContentManagementEntryLabelObject
// Kind: Class; super: Object
class UFortContentManagementEntryLabelObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SqueegeeUI.FortContentManagementLabelWidget
// Kind: Class; super: UserWidget
class UFortContentManagementLabelWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortContentManagementLabelWidget, ColorAndOpacity) == 416, "Offset mismatch for UFortContentManagementLabelWidget::ColorAndOpacity");
static_assert(offsetof(UFortContentManagementLabelWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for UFortContentManagementLabelWidget::ColorAndOpacityDelegate");
static_assert(offsetof(UFortContentManagementLabelWidget, ForegroundColor) == 444, "Offset mismatch for UFortContentManagementLabelWidget::ForegroundColor");
static_assert(offsetof(UFortContentManagementLabelWidget, ForegroundColorDelegate) == 464, "Offset mismatch for UFortContentManagementLabelWidget::ForegroundColorDelegate");
static_assert(offsetof(UFortContentManagementLabelWidget, OnVisibilityChanged) == 480, "Offset mismatch for UFortContentManagementLabelWidget::OnVisibilityChanged");
static_assert(offsetof(UFortContentManagementLabelWidget, Padding) == 544, "Offset mismatch for UFortContentManagementLabelWidget::Padding");
static_assert(offsetof(UFortContentManagementLabelWidget, Priority) == 560, "Offset mismatch for UFortContentManagementLabelWidget::Priority");
static_assert(offsetof(UFortContentManagementLabelWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UFortContentManagementLabelWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UFortContentManagementLabelWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UFortContentManagementLabelWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UFortContentManagementLabelWidget, ActiveSequencePlayers) == 584, "Offset mismatch for UFortContentManagementLabelWidget::ActiveSequencePlayers");
static_assert(offsetof(UFortContentManagementLabelWidget, AnimationTickManager) == 600, "Offset mismatch for UFortContentManagementLabelWidget::AnimationTickManager");
static_assert(offsetof(UFortContentManagementLabelWidget, StoppedSequencePlayers) == 608, "Offset mismatch for UFortContentManagementLabelWidget::StoppedSequencePlayers");
static_assert(offsetof(UFortContentManagementLabelWidget, NamedSlotBindings) == 648, "Offset mismatch for UFortContentManagementLabelWidget::NamedSlotBindings");
static_assert(offsetof(UFortContentManagementLabelWidget, Extensions) == 664, "Offset mismatch for UFortContentManagementLabelWidget::Extensions");
static_assert(offsetof(UFortContentManagementLabelWidget, WidgetTree) == 680, "Offset mismatch for UFortContentManagementLabelWidget::WidgetTree");
static_assert(offsetof(UFortContentManagementLabelWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for UFortContentManagementLabelWidget::bHasScriptImplementedPaint");
static_assert(offsetof(UFortContentManagementLabelWidget, TickFrequency) == 712, "Offset mismatch for UFortContentManagementLabelWidget::TickFrequency");
static_assert(offsetof(UFortContentManagementLabelWidget, DesiredFocusWidget) == 716, "Offset mismatch for UFortContentManagementLabelWidget::DesiredFocusWidget");
static_assert(offsetof(UFortContentManagementLabelWidget, InputComponent) == 728, "Offset mismatch for UFortContentManagementLabelWidget::InputComponent");
static_assert(offsetof(UFortContentManagementLabelWidget, AnimationCallbacks) == 736, "Offset mismatch for UFortContentManagementLabelWidget::AnimationCallbacks");

// /Script/SqueegeeUI.FortContentManagementList
// Kind: Class; super: FortSqueegeeWidget
class UFortContentManagementList
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::uint8_t WeaponLabelText[0x10]; // 0x0350 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameModeLabelText[0x10]; // 0x0360 (Size: 0x10, Type: TextProperty)
    void* ContentManagementListView; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0378
    TArray<void*> CachedActivities; // 0x0390 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortContentManagementList, WeaponLabelText) == 848, "Offset mismatch for UFortContentManagementList::WeaponLabelText");
static_assert(offsetof(UFortContentManagementList, GameModeLabelText) == 864, "Offset mismatch for UFortContentManagementList::GameModeLabelText");
static_assert(offsetof(UFortContentManagementList, ContentManagementListView) == 880, "Offset mismatch for UFortContentManagementList::ContentManagementListView");
static_assert(offsetof(UFortContentManagementList, CachedActivities) == 912, "Offset mismatch for UFortContentManagementList::CachedActivities");

// /Script/SqueegeeUI.FortContentManagementListView
// Kind: Class; super: CommonListView
class UFortContentManagementListView
{
public:
    std::uint8_t Pad_0000[0xFE0]; // 0x0000
    void* LabelWidget; // 0x0FE0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortContentManagementListView, LabelWidget) == 4064, "Offset mismatch for UFortContentManagementListView::LabelWidget");

// /Script/SqueegeeUI.FortContentManagementScreen
// Kind: Class; super: FortPinScreen
class UFortContentManagementScreen
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* ContentManagementList; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* ContentManagementDetails; // 0x0578 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortContentManagementScreen, ContentManagementList) == 1392, "Offset mismatch for UFortContentManagementScreen::ContentManagementList");
static_assert(offsetof(UFortContentManagementScreen, ContentManagementDetails) == 1400, "Offset mismatch for UFortContentManagementScreen::ContentManagementDetails");

// /Script/SqueegeeUI.FortContentManagementVM
// Kind: Class; super: MVVMViewModelBase
class UFortContentManagementVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* SelectedButton; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* SelectedData; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectedLockState; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortContentManagementVM, SelectedButton) == 104, "Offset mismatch for UFortContentManagementVM::SelectedButton");
static_assert(offsetof(UFortContentManagementVM, SelectedData) == 112, "Offset mismatch for UFortContentManagementVM::SelectedData");
static_assert(offsetof(UFortContentManagementVM, SelectedLockState) == 120, "Offset mismatch for UFortContentManagementVM::SelectedLockState");

// /Script/SqueegeeUI.SqueegeeUIGameFeatureAction
// Kind: Class; super: FortUIGameFeatureAction
class USqueegeeUIGameFeatureAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SqueegeTexts; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TSoftClassPtr<void> SqueegeeIntroModalClass; // 0x0038 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USqueegeeUIGameFeatureAction, SqueegeTexts) == 40, "Offset mismatch for USqueegeeUIGameFeatureAction::SqueegeTexts");
static_assert(offsetof(USqueegeeUIGameFeatureAction, SqueegeeIntroModalClass) == 56, "Offset mismatch for USqueegeeUIGameFeatureAction::SqueegeeIntroModalClass");
