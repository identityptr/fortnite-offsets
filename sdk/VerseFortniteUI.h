/**
 * decamp dumper generated SDK
 * Package: /Script/VerseFortniteUI
 */
#pragma once
#include "Basic.h"

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
// Kind: ScriptStruct; super: none
struct FVerseFortniteUIFrameworkSliderValue
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t ClientID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ServerID; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVerseFortniteUIFrameworkSliderValue, Value) == 0, "Offset mismatch for FVerseFortniteUIFrameworkSliderValue::Value");
static_assert(offsetof(FVerseFortniteUIFrameworkSliderValue, ClientID) == 4, "Offset mismatch for FVerseFortniteUIFrameworkSliderValue::ClientID");
static_assert(offsetof(FVerseFortniteUIFrameworkSliderValue, ServerID) == 8, "Offset mismatch for FVerseFortniteUIFrameworkSliderValue::ServerID");

// /Script/VerseFortniteUI.VerseFortniteUIPresenterElement
// Kind: ScriptStruct; super: none
struct FVerseFortniteUIPresenterElement
{
public:
    void* SlotWidget; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* UMGWidget; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseFortniteUIPresenterElement, SlotWidget) == 0, "Offset mismatch for FVerseFortniteUIPresenterElement::SlotWidget");
static_assert(offsetof(FVerseFortniteUIPresenterElement, UMGWidget) == 8, "Offset mismatch for FVerseFortniteUIPresenterElement::UMGWidget");

// /Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController
// Kind: Class; super: VerseFortnitePlayspaceExtensionBase
class UVerseFortnitePlayspaceHUDController
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> ClientVisibilityOverrides; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t VisibilityData[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseFortnitePlayspaceHUDController, ClientVisibilityOverrides) == 56, "Offset mismatch for UVerseFortnitePlayspaceHUDController::ClientVisibilityOverrides");
static_assert(offsetof(UVerseFortnitePlayspaceHUDController, VisibilityData) == 72, "Offset mismatch for UVerseFortnitePlayspaceHUDController::VisibilityData");

// /Script/VerseFortniteUI.VerseFortniteUIActivableWidgetBase
// Kind: Class; super: CommonActivatableWidget
class UVerseFortniteUIActivableWidgetBase
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* MainSlot; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> UIFrameworkPlayerComponent; // 0x04B0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04B8
    TWeakObjectPtr<void> ProxyActivatableWidget; // 0x04BC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x04C4
    std::uint8_t MainMenuInputRowHandle[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    TArray<void*> HudToDeactivateOnInitialization; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t UIMappingPriority; // 0x04E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x04EC
    std::uint8_t UIInputMappingContext[0x20]; // 0x04F0 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> CachedMainSlotContent; // 0x0510 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, MainSlot) == 1192, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::MainSlot");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, UIFrameworkPlayerComponent) == 1200, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::UIFrameworkPlayerComponent");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, ProxyActivatableWidget) == 1212, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::ProxyActivatableWidget");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, MainMenuInputRowHandle) == 1224, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::MainMenuInputRowHandle");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, HudToDeactivateOnInitialization) == 1240, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::HudToDeactivateOnInitialization");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, UIMappingPriority) == 1256, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::UIMappingPriority");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, UIInputMappingContext) == 1264, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::UIInputMappingContext");
static_assert(offsetof(UVerseFortniteUIActivableWidgetBase, CachedMainSlotContent) == 1296, "Offset mismatch for UVerseFortniteUIActivableWidgetBase::CachedMainSlotContent");

// /Script/VerseFortniteUI.VerseFortniteUIAllowedConversionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UVerseFortniteUIAllowedConversionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteUI.VerseFortniteUIConversionLibrary
// Kind: Class; super: VerseFortniteUIAllowedConversionLibrary
class UVerseFortniteUIConversionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
// Kind: Class; super: UIFrameworkWidget
class UVerseFortniteUIFrameworkButton_Base
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TSoftObjectPtr<void> TriggeringInputAction; // 0x0120 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkButton_Base, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkButton_Base::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Base, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkButton_Base::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Base, TriggeringInputAction) == 288, "Offset mismatch for UVerseFortniteUIFrameworkButton_Base::TriggeringInputAction");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
// Kind: Class; super: VerseFortniteUIFrameworkButton_Base
class UVerseFortniteUIFrameworkButton_Loud
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TSoftObjectPtr<void> TriggeringInputAction; // 0x0120 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkButton_Loud, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkButton_Loud::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Loud, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkButton_Loud::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Loud, TriggeringInputAction) == 288, "Offset mismatch for UVerseFortniteUIFrameworkButton_Loud::TriggeringInputAction");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
// Kind: Class; super: VerseFortniteUIFrameworkButton_Base
class UVerseFortniteUIFrameworkButton_Quiet
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TSoftObjectPtr<void> TriggeringInputAction; // 0x0120 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkButton_Quiet, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkButton_Quiet::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Quiet, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkButton_Quiet::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Quiet, TriggeringInputAction) == 288, "Offset mismatch for UVerseFortniteUIFrameworkButton_Quiet::TriggeringInputAction");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
// Kind: Class; super: VerseFortniteUIFrameworkButton_Base
class UVerseFortniteUIFrameworkButton_Regular
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    TSoftObjectPtr<void> TriggeringInputAction; // 0x0120 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkButton_Regular, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkButton_Regular::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Regular, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkButton_Regular::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkButton_Regular, TriggeringInputAction) == 288, "Offset mismatch for UVerseFortniteUIFrameworkButton_Regular::TriggeringInputAction");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableText
// Kind: Class; super: VerseFortniteUIFrameworkText_Base
class UVerseFortniteUIFrameworkEditableText
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TextColor[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    float TextSize; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoWrap; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    float WrapWidth; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WrappingPolicy; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Justification; // 0x013D (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverflowPolicy; // 0x013E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, TextColor) == 288, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::TextColor");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, TextSize) == 304, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::TextSize");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, AutoWrap) == 308, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::AutoWrap");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, WrapWidth) == 312, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::WrapWidth");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, WrappingPolicy) == 316, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::WrappingPolicy");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, Justification) == 317, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::Justification");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableText, OverflowPolicy) == 318, "Offset mismatch for UVerseFortniteUIFrameworkEditableText::OverflowPolicy");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
// Kind: Class; super: VerseFortniteUIFrameworkText_Base
class UVerseFortniteUIFrameworkEditableTextBox
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TextColor[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    float TextSize; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoWrap; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    float WrapWidth; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WrappingPolicy; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Justification; // 0x013D (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverflowPolicy; // 0x013E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, TextColor) == 288, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::TextColor");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, TextSize) == 304, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::TextSize");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, AutoWrap) == 308, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::AutoWrap");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, WrapWidth) == 312, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::WrapWidth");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, WrappingPolicy) == 316, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::WrappingPolicy");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, Justification) == 317, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::Justification");
static_assert(offsetof(UVerseFortniteUIFrameworkEditableTextBox, OverflowPolicy) == 318, "Offset mismatch for UVerseFortniteUIFrameworkEditableTextBox::OverflowPolicy");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider
// Kind: Class; super: UIFrameworkWidget
class UVerseFortniteUIFrameworkSlider
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Value[0xC]; // 0x00E0 (Size: 0xC, Type: StructProperty)
    float MinValue; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float StepSize; // 0x00F4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkSlider, Value) == 224, "Offset mismatch for UVerseFortniteUIFrameworkSlider::Value");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, MinValue) == 236, "Offset mismatch for UVerseFortniteUIFrameworkSlider::MinValue");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, MaxValue) == 240, "Offset mismatch for UVerseFortniteUIFrameworkSlider::MaxValue");
static_assert(offsetof(UVerseFortniteUIFrameworkSlider, StepSize) == 244, "Offset mismatch for UVerseFortniteUIFrameworkSlider::StepSize");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
// Kind: Class; super: UIFrameworkTextBlock
class UVerseFortniteUIFrameworkTextBlock
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t ShadowOffset[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShadowColor[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkTextBlock, ShadowOffset) == 320, "Offset mismatch for UVerseFortniteUIFrameworkTextBlock::ShadowOffset");
static_assert(offsetof(UVerseFortniteUIFrameworkTextBlock, ShadowColor) == 328, "Offset mismatch for UVerseFortniteUIFrameworkTextBlock::ShadowColor");

// /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base
// Kind: Class; super: UIFrameworkTextBase
class UVerseFortniteUIFrameworkText_Base
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TextColor[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    float TextSize; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoWrap; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    float WrapWidth; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WrappingPolicy; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Justification; // 0x013D (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverflowPolicy; // 0x013E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, Text) == 224, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::Text");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, Message) == 240, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::Message");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, TextColor) == 288, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::TextColor");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, TextSize) == 304, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::TextSize");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, AutoWrap) == 308, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::AutoWrap");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, WrapWidth) == 312, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::WrapWidth");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, WrappingPolicy) == 316, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::WrappingPolicy");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, Justification) == 317, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::Justification");
static_assert(offsetof(UVerseFortniteUIFrameworkText_Base, OverflowPolicy) == 318, "Offset mismatch for UVerseFortniteUIFrameworkText_Base::OverflowPolicy");

// /Script/VerseFortniteUI.VerseFortniteUINamedSlot
// Kind: Class; super: NamedSlot
class UVerseFortniteUINamedSlot
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseFortniteUINamedSlot, Slots) == 360, "Offset mismatch for UVerseFortniteUINamedSlot::Slots");

// /Script/VerseFortniteUI.VerseFortniteUIOverlay
// Kind: Class; super: Overlay
class UVerseFortniteUIOverlay
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseFortniteUIOverlay, Slots) == 360, "Offset mismatch for UVerseFortniteUIOverlay::Slots");

// /Script/VerseFortniteUI.VerseFortniteUIOverlaySlot
// Kind: Class; super: OverlaySlot
class UVerseFortniteUIOverlaySlot
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UVerseFortniteUIOverlaySlot, Padding) == 64, "Offset mismatch for UVerseFortniteUIOverlaySlot::Padding");
static_assert(offsetof(UVerseFortniteUIOverlaySlot, HorizontalAlignment) == 80, "Offset mismatch for UVerseFortniteUIOverlaySlot::HorizontalAlignment");
static_assert(offsetof(UVerseFortniteUIOverlaySlot, VerticalAlignment) == 81, "Offset mismatch for UVerseFortniteUIOverlaySlot::VerticalAlignment");

// /Script/VerseFortniteUI.VerseFortniteUIPresenter
// Kind: Class; super: UIFrameworkGameViewportPresenter
class UVerseFortniteUIPresenter
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> Pending; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Created; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* PlayerGameViewport; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* ContentGameViewport; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* PopupContainer; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0070
    std::uint8_t WidgetForDynamicUI[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ActionDomainForDynamicUI[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    void* ProxyActivatableWidget; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* VerseUIScene; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIPresenter, Pending) == 56, "Offset mismatch for UVerseFortniteUIPresenter::Pending");
static_assert(offsetof(UVerseFortniteUIPresenter, Created) == 72, "Offset mismatch for UVerseFortniteUIPresenter::Created");
static_assert(offsetof(UVerseFortniteUIPresenter, PlayerGameViewport) == 88, "Offset mismatch for UVerseFortniteUIPresenter::PlayerGameViewport");
static_assert(offsetof(UVerseFortniteUIPresenter, ContentGameViewport) == 96, "Offset mismatch for UVerseFortniteUIPresenter::ContentGameViewport");
static_assert(offsetof(UVerseFortniteUIPresenter, PopupContainer) == 104, "Offset mismatch for UVerseFortniteUIPresenter::PopupContainer");
static_assert(offsetof(UVerseFortniteUIPresenter, WidgetForDynamicUI) == 120, "Offset mismatch for UVerseFortniteUIPresenter::WidgetForDynamicUI");
static_assert(offsetof(UVerseFortniteUIPresenter, ActionDomainForDynamicUI) == 152, "Offset mismatch for UVerseFortniteUIPresenter::ActionDomainForDynamicUI");
static_assert(offsetof(UVerseFortniteUIPresenter, ProxyActivatableWidget) == 184, "Offset mismatch for UVerseFortniteUIPresenter::ProxyActivatableWidget");
static_assert(offsetof(UVerseFortniteUIPresenter, VerseUIScene) == 192, "Offset mismatch for UVerseFortniteUIPresenter::VerseUIScene");

// /Script/VerseFortniteUI.VerseFortniteUIProxyActivatableWidget
// Kind: Class; super: CommonActivatableWidget
class UVerseFortniteUIProxyActivatableWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    TWeakObjectPtr<void> MainActivatableWidget; // 0x04A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedMainSlotContent; // 0x04B0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UVerseFortniteUIProxyActivatableWidget, MainActivatableWidget) == 1192, "Offset mismatch for UVerseFortniteUIProxyActivatableWidget::MainActivatableWidget");
static_assert(offsetof(UVerseFortniteUIProxyActivatableWidget, CachedMainSlotContent) == 1200, "Offset mismatch for UVerseFortniteUIProxyActivatableWidget::CachedMainSlotContent");

// /Script/VerseFortniteUI.VerseFortniteWidgetViewmodel
// Kind: Class; super: Object
class UVerseFortniteWidgetViewmodel
{
public:
    std::uint8_t Opaque[1];
};
