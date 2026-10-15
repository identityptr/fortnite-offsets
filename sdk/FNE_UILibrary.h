/**
 * decamp dumper generated SDK
 * Package: /Script/FNE_UILibrary
 */
#pragma once
#include "Basic.h"

// /Script/FNE_UILibrary.FNE_UIBlockTiming
// Kind: ScriptStruct; super: none
struct FFNE_UIBlockTiming
{
public:
    float Hovering; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Unhovering; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Focusing; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Unfocusing; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Pressing; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Releasing; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Disabling; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Enabling; // 0x001C (Size: 0x4, Type: FloatProperty)
    float Selecting; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float DeselectingIdle; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float DeselectingFocused; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFNE_UIBlockTiming, Hovering) == 0, "Offset mismatch for FFNE_UIBlockTiming::Hovering");
static_assert(offsetof(FFNE_UIBlockTiming, Unhovering) == 4, "Offset mismatch for FFNE_UIBlockTiming::Unhovering");
static_assert(offsetof(FFNE_UIBlockTiming, Focusing) == 8, "Offset mismatch for FFNE_UIBlockTiming::Focusing");
static_assert(offsetof(FFNE_UIBlockTiming, Unfocusing) == 12, "Offset mismatch for FFNE_UIBlockTiming::Unfocusing");
static_assert(offsetof(FFNE_UIBlockTiming, Pressing) == 16, "Offset mismatch for FFNE_UIBlockTiming::Pressing");
static_assert(offsetof(FFNE_UIBlockTiming, Releasing) == 20, "Offset mismatch for FFNE_UIBlockTiming::Releasing");
static_assert(offsetof(FFNE_UIBlockTiming, Disabling) == 24, "Offset mismatch for FFNE_UIBlockTiming::Disabling");
static_assert(offsetof(FFNE_UIBlockTiming, Enabling) == 28, "Offset mismatch for FFNE_UIBlockTiming::Enabling");
static_assert(offsetof(FFNE_UIBlockTiming, Selecting) == 32, "Offset mismatch for FFNE_UIBlockTiming::Selecting");
static_assert(offsetof(FFNE_UIBlockTiming, DeselectingIdle) == 36, "Offset mismatch for FFNE_UIBlockTiming::DeselectingIdle");
static_assert(offsetof(FFNE_UIBlockTiming, DeselectingFocused) == 40, "Offset mismatch for FFNE_UIBlockTiming::DeselectingFocused");

// /Script/FNE_UILibrary.ActionWidget
// Kind: Class; super: CommonActionWidget
class UActionWidget
{
public:
    std::uint8_t Pad_0000[0x440]; // 0x0000
    std::uint8_t DisplayType; // 0x0440 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0441
    void* UEFNKeybindWidget; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> KeybindWidgetClass; // 0x0450 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UActionWidget, DisplayType) == 1088, "Offset mismatch for UActionWidget::DisplayType");
static_assert(offsetof(UActionWidget, UEFNKeybindWidget) == 1096, "Offset mismatch for UActionWidget::UEFNKeybindWidget");
static_assert(offsetof(UActionWidget, KeybindWidgetClass) == 1104, "Offset mismatch for UActionWidget::KeybindWidgetClass");

// /Script/FNE_UILibrary.FNE_CTAButton
// Kind: Class; super: FNE_ModularButton
class UFNE_CTAButton
{
public:
    std::uint8_t Pad_0000[0x15B0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x15B0 (Size: 0x10, Type: TextProperty)
    FText SecondaryText; // 0x15C0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFNE_CTAButton, Text) == 5552, "Offset mismatch for UFNE_CTAButton::Text");
static_assert(offsetof(UFNE_CTAButton, SecondaryText) == 5568, "Offset mismatch for UFNE_CTAButton::SecondaryText");

// /Script/FNE_UILibrary.FNE_ModularButton
// Kind: Class; super: CommonButtonBase
class UFNE_ModularButton
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    TArray<void*> ModularBlocks; // 0x15A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFNE_ModularButton, ModularBlocks) == 5536, "Offset mismatch for UFNE_ModularButton::ModularBlocks");

// /Script/FNE_UILibrary.FNE_StylableButton
// Kind: Class; super: FNE_ModularButton
class UFNE_StylableButton
{
public:
    std::uint8_t Pad_0000[0x15B0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x15B0 (Size: 0x10, Type: TextProperty)
    FText SecondaryText; // 0x15C0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFNE_StylableButton, Text) == 5552, "Offset mismatch for UFNE_StylableButton::Text");
static_assert(offsetof(UFNE_StylableButton, SecondaryText) == 5568, "Offset mismatch for UFNE_StylableButton::SecondaryText");

// /Script/FNE_UILibrary.FNE_UIBlock
// Kind: Class; super: UserWidget
class UFNE_UIBlock
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    FMulticastInlineDelegate ViewportResizedEvent; // 0x0308 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TransitionTiming[0x1]; // 0x0318 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFNE_UIBlock, ViewportResizedEvent) == 776, "Offset mismatch for UFNE_UIBlock::ViewportResizedEvent");
static_assert(offsetof(UFNE_UIBlock, TransitionTiming) == 792, "Offset mismatch for UFNE_UIBlock::TransitionTiming");

// /Script/FNE_UILibrary.FNE_UIBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFNE_UIBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
