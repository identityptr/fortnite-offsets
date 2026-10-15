/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Input/KeybindWidgetDark_Small
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Input/KeybindWidgetDark_Small.KeybindWidgetDark_Small_C
// Kind: WidgetBlueprintGeneratedClass; super: FortKeyBindWidget
class UKeybindWidgetDark_Small_C
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FName BoundAction; // 0x0330 (Size: 0x8, Type: NameProperty)
    void* BoundInputAction; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* InputContextOverride; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoundActionFallbacks; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    float AxisScale; // 0x0358 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x035C
    std::uint8_t BoundKeyFallback[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShowSecondaryBoundKey; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputTypeOverride; // 0x0379 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GamepadTypeOverride; // 0x037A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x037B
    std::uint8_t PresetNameOverride[0x4]; // 0x037C (Size: 0x4, Type: NameProperty)
    std::uint8_t bForcedHoldKeybind; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ForcedHoldKeybindStatus; // 0x0381 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsHoldKeybind; // 0x0382 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowKeybindBorder; // 0x0383 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0384
    std::uint8_t FrameSize[0x10]; // 0x0388 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowTimeCountDown; // 0x0398 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0399
    std::uint8_t BoundKey[0x20]; // 0x03A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t HoldProgressBrush[0xB0]; // 0x03C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t KeyBindTextBorder[0xB0]; // 0x0470 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bShowUnboundStatus; // 0x0520 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUnboundStatusOnTouch; // 0x0521 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseKeyboardTextureForKeys; // 0x0522 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x5]; // 0x0523
    std::uint8_t KeyBindTextFont[0x58]; // 0x0528 (Size: 0x58, Type: StructProperty)
    std::uint8_t KeyBindTextInnerPadding[0x10]; // 0x0580 (Size: 0x10, Type: StructProperty)
    std::uint8_t CountdownTextFont[0x58]; // 0x0590 (Size: 0x58, Type: StructProperty)
    std::uint8_t CountdownText[0x28]; // 0x05E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t KeybindText[0x28]; // 0x0610 (Size: 0x28, Type: StructProperty)
    std::uint8_t KeybindTextPadding[0x10]; // 0x0638 (Size: 0x10, Type: StructProperty)
    std::uint8_t KeybindFrameMinimumSize[0x10]; // 0x0648 (Size: 0x10, Type: StructProperty)
    FName PercentageMaterialParameterName; // 0x0658 (Size: 0x8, Type: NameProperty)
    void* ProgressPercentageMID; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BrushSize; // 0x0668 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0669
    std::uint8_t FrameMultiBrush[0x470]; // 0x0670 (Size: 0x470, Type: StructProperty)
    std::uint8_t CachedKeyBrush[0xB0]; // 0x0AE0 (Size: 0xB0, Type: StructProperty)
    TWeakObjectPtr<void> CachedTriggerHoldOverride; // 0x0B90 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t TouchOverrideImageSet[0x24]; // 0x0B98 (Size: 0x24, Type: StructProperty)
    std::uint8_t TouchButtonViewModelTag[0x4]; // 0x0BBC (Size: 0x4, Type: StructProperty)
    void* TouchButtonViewModel; // 0x0BC0 (Size: 0x8, Type: ObjectProperty)
    void* TouchButtonIconTexture; // 0x0BC8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UKeybindWidgetDark_Small_C, BoundAction) == 816, "Offset mismatch for UKeybindWidgetDark_Small_C::BoundAction");
static_assert(offsetof(UKeybindWidgetDark_Small_C, BoundInputAction) == 824, "Offset mismatch for UKeybindWidgetDark_Small_C::BoundInputAction");
static_assert(offsetof(UKeybindWidgetDark_Small_C, InputContextOverride) == 832, "Offset mismatch for UKeybindWidgetDark_Small_C::InputContextOverride");
static_assert(offsetof(UKeybindWidgetDark_Small_C, BoundActionFallbacks) == 840, "Offset mismatch for UKeybindWidgetDark_Small_C::BoundActionFallbacks");
static_assert(offsetof(UKeybindWidgetDark_Small_C, AxisScale) == 856, "Offset mismatch for UKeybindWidgetDark_Small_C::AxisScale");
static_assert(offsetof(UKeybindWidgetDark_Small_C, BoundKeyFallback) == 864, "Offset mismatch for UKeybindWidgetDark_Small_C::BoundKeyFallback");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bShowSecondaryBoundKey) == 888, "Offset mismatch for UKeybindWidgetDark_Small_C::bShowSecondaryBoundKey");
static_assert(offsetof(UKeybindWidgetDark_Small_C, InputTypeOverride) == 889, "Offset mismatch for UKeybindWidgetDark_Small_C::InputTypeOverride");
static_assert(offsetof(UKeybindWidgetDark_Small_C, GamepadTypeOverride) == 890, "Offset mismatch for UKeybindWidgetDark_Small_C::GamepadTypeOverride");
static_assert(offsetof(UKeybindWidgetDark_Small_C, PresetNameOverride) == 892, "Offset mismatch for UKeybindWidgetDark_Small_C::PresetNameOverride");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bForcedHoldKeybind) == 896, "Offset mismatch for UKeybindWidgetDark_Small_C::bForcedHoldKeybind");
static_assert(offsetof(UKeybindWidgetDark_Small_C, ForcedHoldKeybindStatus) == 897, "Offset mismatch for UKeybindWidgetDark_Small_C::ForcedHoldKeybindStatus");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bIsHoldKeybind) == 898, "Offset mismatch for UKeybindWidgetDark_Small_C::bIsHoldKeybind");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bShowKeybindBorder) == 899, "Offset mismatch for UKeybindWidgetDark_Small_C::bShowKeybindBorder");
static_assert(offsetof(UKeybindWidgetDark_Small_C, FrameSize) == 904, "Offset mismatch for UKeybindWidgetDark_Small_C::FrameSize");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bShowTimeCountDown) == 920, "Offset mismatch for UKeybindWidgetDark_Small_C::bShowTimeCountDown");
static_assert(offsetof(UKeybindWidgetDark_Small_C, BoundKey) == 928, "Offset mismatch for UKeybindWidgetDark_Small_C::BoundKey");
static_assert(offsetof(UKeybindWidgetDark_Small_C, HoldProgressBrush) == 960, "Offset mismatch for UKeybindWidgetDark_Small_C::HoldProgressBrush");
static_assert(offsetof(UKeybindWidgetDark_Small_C, KeyBindTextBorder) == 1136, "Offset mismatch for UKeybindWidgetDark_Small_C::KeyBindTextBorder");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bShowUnboundStatus) == 1312, "Offset mismatch for UKeybindWidgetDark_Small_C::bShowUnboundStatus");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bShowUnboundStatusOnTouch) == 1313, "Offset mismatch for UKeybindWidgetDark_Small_C::bShowUnboundStatusOnTouch");
static_assert(offsetof(UKeybindWidgetDark_Small_C, bUseKeyboardTextureForKeys) == 1314, "Offset mismatch for UKeybindWidgetDark_Small_C::bUseKeyboardTextureForKeys");
static_assert(offsetof(UKeybindWidgetDark_Small_C, KeyBindTextFont) == 1320, "Offset mismatch for UKeybindWidgetDark_Small_C::KeyBindTextFont");
static_assert(offsetof(UKeybindWidgetDark_Small_C, KeyBindTextInnerPadding) == 1408, "Offset mismatch for UKeybindWidgetDark_Small_C::KeyBindTextInnerPadding");
static_assert(offsetof(UKeybindWidgetDark_Small_C, CountdownTextFont) == 1424, "Offset mismatch for UKeybindWidgetDark_Small_C::CountdownTextFont");
static_assert(offsetof(UKeybindWidgetDark_Small_C, CountdownText) == 1512, "Offset mismatch for UKeybindWidgetDark_Small_C::CountdownText");
static_assert(offsetof(UKeybindWidgetDark_Small_C, KeybindText) == 1552, "Offset mismatch for UKeybindWidgetDark_Small_C::KeybindText");
static_assert(offsetof(UKeybindWidgetDark_Small_C, KeybindTextPadding) == 1592, "Offset mismatch for UKeybindWidgetDark_Small_C::KeybindTextPadding");
static_assert(offsetof(UKeybindWidgetDark_Small_C, KeybindFrameMinimumSize) == 1608, "Offset mismatch for UKeybindWidgetDark_Small_C::KeybindFrameMinimumSize");
static_assert(offsetof(UKeybindWidgetDark_Small_C, PercentageMaterialParameterName) == 1624, "Offset mismatch for UKeybindWidgetDark_Small_C::PercentageMaterialParameterName");
static_assert(offsetof(UKeybindWidgetDark_Small_C, ProgressPercentageMID) == 1632, "Offset mismatch for UKeybindWidgetDark_Small_C::ProgressPercentageMID");
static_assert(offsetof(UKeybindWidgetDark_Small_C, BrushSize) == 1640, "Offset mismatch for UKeybindWidgetDark_Small_C::BrushSize");
static_assert(offsetof(UKeybindWidgetDark_Small_C, FrameMultiBrush) == 1648, "Offset mismatch for UKeybindWidgetDark_Small_C::FrameMultiBrush");
static_assert(offsetof(UKeybindWidgetDark_Small_C, CachedKeyBrush) == 2784, "Offset mismatch for UKeybindWidgetDark_Small_C::CachedKeyBrush");
static_assert(offsetof(UKeybindWidgetDark_Small_C, CachedTriggerHoldOverride) == 2960, "Offset mismatch for UKeybindWidgetDark_Small_C::CachedTriggerHoldOverride");
static_assert(offsetof(UKeybindWidgetDark_Small_C, TouchOverrideImageSet) == 2968, "Offset mismatch for UKeybindWidgetDark_Small_C::TouchOverrideImageSet");
static_assert(offsetof(UKeybindWidgetDark_Small_C, TouchButtonViewModelTag) == 3004, "Offset mismatch for UKeybindWidgetDark_Small_C::TouchButtonViewModelTag");
static_assert(offsetof(UKeybindWidgetDark_Small_C, TouchButtonViewModel) == 3008, "Offset mismatch for UKeybindWidgetDark_Small_C::TouchButtonViewModel");
static_assert(offsetof(UKeybindWidgetDark_Small_C, TouchButtonIconTexture) == 3016, "Offset mismatch for UKeybindWidgetDark_Small_C::TouchButtonIconTexture");
