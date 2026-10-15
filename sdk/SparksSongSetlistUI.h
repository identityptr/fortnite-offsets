/**
 * decamp dumper generated SDK
 * Package: /Script/SparksSongSetlistUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksSongSetlistUI.SparksSetlistItemVM
// Kind: Class; super: SparksSongItemVM
class USparksSetlistItemVM
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t AddedByPlayer[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsBlankItem; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSetlistItemVM, AddedByPlayer) == 232, "Offset mismatch for USparksSetlistItemVM::AddedByPlayer");
static_assert(offsetof(USparksSetlistItemVM, bIsBlankItem) == 264, "Offset mismatch for USparksSetlistItemVM::bIsBlankItem");

// /Script/SparksSongSetlistUI.SparksSetlistVM
// Kind: Class; super: MVVMViewModelBase
class USparksSetlistVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> SetlistItems; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0078
    void* LockerConfig; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* ItemClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> OwningController; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SparksCustomSetlist; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USparksSetlistVM, SetlistItems) == 104, "Offset mismatch for USparksSetlistVM::SetlistItems");
static_assert(offsetof(USparksSetlistVM, LockerConfig) == 128, "Offset mismatch for USparksSetlistVM::LockerConfig");
static_assert(offsetof(USparksSetlistVM, ItemClass) == 136, "Offset mismatch for USparksSetlistVM::ItemClass");
static_assert(offsetof(USparksSetlistVM, OwningController) == 144, "Offset mismatch for USparksSetlistVM::OwningController");
static_assert(offsetof(USparksSetlistVM, SparksCustomSetlist) == 152, "Offset mismatch for USparksSetlistVM::SparksCustomSetlist");

// /Script/SparksSongSetlistUI.SparksSongEntry
// Kind: Class; super: CommonButtonBase
class USparksSongEntry
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

static_assert(offsetof(USparksSongEntry, ClickEvent) == 816, "Offset mismatch for USparksSongEntry::ClickEvent");
static_assert(offsetof(USparksSongEntry, MinWidth) == 820, "Offset mismatch for USparksSongEntry::MinWidth");
static_assert(offsetof(USparksSongEntry, MinHeight) == 824, "Offset mismatch for USparksSongEntry::MinHeight");
static_assert(offsetof(USparksSongEntry, MaxWidth) == 828, "Offset mismatch for USparksSongEntry::MaxWidth");
static_assert(offsetof(USparksSongEntry, MaxHeight) == 832, "Offset mismatch for USparksSongEntry::MaxHeight");
static_assert(offsetof(USparksSongEntry, Style) == 840, "Offset mismatch for USparksSongEntry::Style");
static_assert(offsetof(USparksSongEntry, bHideInputAction) == 848, "Offset mismatch for USparksSongEntry::bHideInputAction");
static_assert(offsetof(USparksSongEntry, PressedSlateSoundOverride) == 856, "Offset mismatch for USparksSongEntry::PressedSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, ClickedSlateSoundOverride) == 880, "Offset mismatch for USparksSongEntry::ClickedSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, HoveredSlateSoundOverride) == 904, "Offset mismatch for USparksSongEntry::HoveredSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for USparksSongEntry::SelectedPressedSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for USparksSongEntry::SelectedClickedSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for USparksSongEntry::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for USparksSongEntry::LockedPressedSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for USparksSongEntry::LockedClickedSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for USparksSongEntry::LockedHoveredSlateSoundOverride");
static_assert(offsetof(USparksSongEntry, bApplyAlphaOnDisable) == 1072, "Offset mismatch for USparksSongEntry::bApplyAlphaOnDisable");
static_assert(offsetof(USparksSongEntry, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for USparksSongEntry::bHideInputActionWithKeyboard");
static_assert(offsetof(USparksSongEntry, HoldData) == 1080, "Offset mismatch for USparksSongEntry::HoldData");
static_assert(offsetof(USparksSongEntry, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for USparksSongEntry::bSimulateHoverOnTouchInput");
static_assert(offsetof(USparksSongEntry, ClickMethod) == 1091, "Offset mismatch for USparksSongEntry::ClickMethod");
static_assert(offsetof(USparksSongEntry, TouchMethod) == 1092, "Offset mismatch for USparksSongEntry::TouchMethod");
static_assert(offsetof(USparksSongEntry, PressMethod) == 1093, "Offset mismatch for USparksSongEntry::PressMethod");
static_assert(offsetof(USparksSongEntry, InputPriority) == 1096, "Offset mismatch for USparksSongEntry::InputPriority");
static_assert(offsetof(USparksSongEntry, TriggeringInputAction) == 1104, "Offset mismatch for USparksSongEntry::TriggeringInputAction");
static_assert(offsetof(USparksSongEntry, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for USparksSongEntry::TriggeringEnhancedInputAction");
static_assert(offsetof(USparksSongEntry, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for USparksSongEntry::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(USparksSongEntry, OnSelectedChangedBase) == 1152, "Offset mismatch for USparksSongEntry::OnSelectedChangedBase");
static_assert(offsetof(USparksSongEntry, OnButtonBaseClicked) == 1168, "Offset mismatch for USparksSongEntry::OnButtonBaseClicked");
static_assert(offsetof(USparksSongEntry, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for USparksSongEntry::OnButtonBaseDoubleClicked");
static_assert(offsetof(USparksSongEntry, OnButtonBaseHovered) == 1200, "Offset mismatch for USparksSongEntry::OnButtonBaseHovered");
static_assert(offsetof(USparksSongEntry, OnButtonBaseUnhovered) == 1216, "Offset mismatch for USparksSongEntry::OnButtonBaseUnhovered");
static_assert(offsetof(USparksSongEntry, OnButtonBaseFocused) == 1232, "Offset mismatch for USparksSongEntry::OnButtonBaseFocused");
static_assert(offsetof(USparksSongEntry, OnButtonBaseUnfocused) == 1248, "Offset mismatch for USparksSongEntry::OnButtonBaseUnfocused");
static_assert(offsetof(USparksSongEntry, OnButtonBaseLockClicked) == 1264, "Offset mismatch for USparksSongEntry::OnButtonBaseLockClicked");
static_assert(offsetof(USparksSongEntry, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for USparksSongEntry::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(USparksSongEntry, OnButtonBaseSelected) == 1296, "Offset mismatch for USparksSongEntry::OnButtonBaseSelected");
static_assert(offsetof(USparksSongEntry, OnButtonBaseUnselected) == 1312, "Offset mismatch for USparksSongEntry::OnButtonBaseUnselected");
static_assert(offsetof(USparksSongEntry, OnButtonBaseDragDetected) == 1328, "Offset mismatch for USparksSongEntry::OnButtonBaseDragDetected");
static_assert(offsetof(USparksSongEntry, OnButtonBaseDragEnter) == 1344, "Offset mismatch for USparksSongEntry::OnButtonBaseDragEnter");
static_assert(offsetof(USparksSongEntry, OnButtonBaseDragLeave) == 1360, "Offset mismatch for USparksSongEntry::OnButtonBaseDragLeave");
static_assert(offsetof(USparksSongEntry, OnButtonBaseDragOver) == 1376, "Offset mismatch for USparksSongEntry::OnButtonBaseDragOver");
static_assert(offsetof(USparksSongEntry, OnButtonBaseDrop) == 1392, "Offset mismatch for USparksSongEntry::OnButtonBaseDrop");
static_assert(offsetof(USparksSongEntry, bIsPersistentBinding) == 1464, "Offset mismatch for USparksSongEntry::bIsPersistentBinding");
static_assert(offsetof(USparksSongEntry, InputModeOverride) == 1465, "Offset mismatch for USparksSongEntry::InputModeOverride");
static_assert(offsetof(USparksSongEntry, SingleMaterialStyleMID) == 1504, "Offset mismatch for USparksSongEntry::SingleMaterialStyleMID");
static_assert(offsetof(USparksSongEntry, NormalStyle) == 1520, "Offset mismatch for USparksSongEntry::NormalStyle");
static_assert(offsetof(USparksSongEntry, SelectedStyle) == 2432, "Offset mismatch for USparksSongEntry::SelectedStyle");
static_assert(offsetof(USparksSongEntry, DisabledStyle) == 3344, "Offset mismatch for USparksSongEntry::DisabledStyle");
static_assert(offsetof(USparksSongEntry, LockedStyle) == 4256, "Offset mismatch for USparksSongEntry::LockedStyle");
static_assert(offsetof(USparksSongEntry, bStopDoubleClickPropagation) == 5168, "Offset mismatch for USparksSongEntry::bStopDoubleClickPropagation");
static_assert(offsetof(USparksSongEntry, InputActionWidget) == 5528, "Offset mismatch for USparksSongEntry::InputActionWidget");
