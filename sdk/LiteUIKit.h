/**
 * decamp dumper generated SDK
 * Package: /Script/LiteUIKit
 */
#pragma once
#include "Basic.h"

// /Script/LiteUIKit.LiteImageParameterDownloadSlot
// Kind: ScriptStruct; super: none
struct FLiteImageParameterDownloadSlot
{
public:
    FName TextureParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString ImageUrl; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t DownloadState; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    void* DownloadedTexture; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::int32_t DownloadAttemptCount; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t DownloadGeneration; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiteImageParameterDownloadSlot, TextureParameterName) == 0, "Offset mismatch for FLiteImageParameterDownloadSlot::TextureParameterName");
static_assert(offsetof(FLiteImageParameterDownloadSlot, ImageUrl) == 8, "Offset mismatch for FLiteImageParameterDownloadSlot::ImageUrl");
static_assert(offsetof(FLiteImageParameterDownloadSlot, DownloadState) == 24, "Offset mismatch for FLiteImageParameterDownloadSlot::DownloadState");
static_assert(offsetof(FLiteImageParameterDownloadSlot, DownloadedTexture) == 32, "Offset mismatch for FLiteImageParameterDownloadSlot::DownloadedTexture");
static_assert(offsetof(FLiteImageParameterDownloadSlot, DownloadAttemptCount) == 40, "Offset mismatch for FLiteImageParameterDownloadSlot::DownloadAttemptCount");
static_assert(offsetof(FLiteImageParameterDownloadSlot, DownloadGeneration) == 44, "Offset mismatch for FLiteImageParameterDownloadSlot::DownloadGeneration");

// /Script/LiteUIKit.LiteImageParameterURL
// Kind: ScriptStruct; super: none
struct FLiteImageParameterURL
{
public:
    FName TextureParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString ImageUrl; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FLiteImageParameterURL, TextureParameterName) == 0, "Offset mismatch for FLiteImageParameterURL::TextureParameterName");
static_assert(offsetof(FLiteImageParameterURL, ImageUrl) == 8, "Offset mismatch for FLiteImageParameterURL::ImageUrl");

// /Script/LiteUIKit.LiteWrapBoxLayout
// Kind: ScriptStruct; super: none
struct FLiteWrapBoxLayout
{
public:
    std::uint8_t Size[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceNewLine; // 0x000A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLiteWrapBoxLayout, Size) == 0, "Offset mismatch for FLiteWrapBoxLayout::Size");
static_assert(offsetof(FLiteWrapBoxLayout, HorizontalAlignment) == 8, "Offset mismatch for FLiteWrapBoxLayout::HorizontalAlignment");
static_assert(offsetof(FLiteWrapBoxLayout, VerticalAlignment) == 9, "Offset mismatch for FLiteWrapBoxLayout::VerticalAlignment");
static_assert(offsetof(FLiteWrapBoxLayout, bForceNewLine) == 10, "Offset mismatch for FLiteWrapBoxLayout::bForceNewLine");

// /Script/LiteUIKit.LiteActionWidget
// Kind: Class; super: UserWidget
class ULiteActionWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    void* EnhancedInputAction; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* Key; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0318
    FMulticastInlineDelegate OnInputMethodChanged; // 0x0320 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStart; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProgress; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnComplete; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancel; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKeyUpdated; // 0x0370 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULiteActionWidget, EnhancedInputAction) == 776, "Offset mismatch for ULiteActionWidget::EnhancedInputAction");
static_assert(offsetof(ULiteActionWidget, Key) == 784, "Offset mismatch for ULiteActionWidget::Key");
static_assert(offsetof(ULiteActionWidget, OnInputMethodChanged) == 800, "Offset mismatch for ULiteActionWidget::OnInputMethodChanged");
static_assert(offsetof(ULiteActionWidget, OnStart) == 816, "Offset mismatch for ULiteActionWidget::OnStart");
static_assert(offsetof(ULiteActionWidget, OnProgress) == 832, "Offset mismatch for ULiteActionWidget::OnProgress");
static_assert(offsetof(ULiteActionWidget, OnComplete) == 848, "Offset mismatch for ULiteActionWidget::OnComplete");
static_assert(offsetof(ULiteActionWidget, OnCancel) == 864, "Offset mismatch for ULiteActionWidget::OnCancel");
static_assert(offsetof(ULiteActionWidget, OnKeyUpdated) == 880, "Offset mismatch for ULiteActionWidget::OnKeyUpdated");

// /Script/LiteUIKit.LiteButtonBase
// Kind: Class; super: CommonButtonBase
class ULiteButtonBase
{
public:
    std::uint8_t Pad_0000[0x15A0]; // 0x0000
    std::uint8_t bIgnoreStyleDefaults; // 0x15A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x15A1
    void* LiteInputActionWidget; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULiteButtonBase, bIgnoreStyleDefaults) == 5536, "Offset mismatch for ULiteButtonBase::bIgnoreStyleDefaults");
static_assert(offsetof(ULiteButtonBase, LiteInputActionWidget) == 5544, "Offset mismatch for ULiteButtonBase::LiteInputActionWidget");

// /Script/LiteUIKit.LiteEmptyButtonStyle
// Kind: Class; super: CommonButtonStyle
class ULiteEmptyButtonStyle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSingleMaterial; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t SingleMaterialBrush[0xB0]; // 0x0030 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalBase[0xB0]; // 0x00E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalHovered[0xB0]; // 0x0190 (Size: 0xB0, Type: StructProperty)
    std::uint8_t NormalPressed[0xB0]; // 0x0240 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedBase[0xB0]; // 0x02F0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedHovered[0xB0]; // 0x03A0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t SelectedPressed[0xB0]; // 0x0450 (Size: 0xB0, Type: StructProperty)
    std::uint8_t Disabled[0xB0]; // 0x0500 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ButtonPadding[0x10]; // 0x05B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPadding[0x10]; // 0x05C0 (Size: 0x10, Type: StructProperty)
    std::int32_t MinWidth; // 0x05D0 (Size: 0x4, Type: IntProperty)
    std::int32_t MinHeight; // 0x05D4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxHeight; // 0x05DC (Size: 0x4, Type: IntProperty)
    void* NormalTextStyle; // 0x05E0 (Size: 0x8, Type: ClassProperty)
    void* NormalHoveredTextStyle; // 0x05E8 (Size: 0x8, Type: ClassProperty)
    void* SelectedTextStyle; // 0x05F0 (Size: 0x8, Type: ClassProperty)
    void* SelectedHoveredTextStyle; // 0x05F8 (Size: 0x8, Type: ClassProperty)
    void* DisabledTextStyle; // 0x0600 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PressedSlateSound[0x18]; // 0x0608 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClickedSlateSound[0x18]; // 0x0620 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedPressedSlateSound[0x20]; // 0x0638 (Size: 0x20, Type: StructProperty)
    std::uint8_t SelectedClickedSlateSound[0x20]; // 0x0658 (Size: 0x20, Type: StructProperty)
    std::uint8_t LockedPressedSlateSound[0x20]; // 0x0678 (Size: 0x20, Type: StructProperty)
    std::uint8_t LockedClickedSlateSound[0x20]; // 0x0698 (Size: 0x20, Type: StructProperty)
    std::uint8_t HoveredSlateSound[0x18]; // 0x06B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectedHoveredSlateSound[0x20]; // 0x06D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t LockedHoveredSlateSound[0x1]; // 0x06F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULiteEmptyButtonStyle, bSingleMaterial) == 40, "Offset mismatch for ULiteEmptyButtonStyle::bSingleMaterial");
static_assert(offsetof(ULiteEmptyButtonStyle, SingleMaterialBrush) == 48, "Offset mismatch for ULiteEmptyButtonStyle::SingleMaterialBrush");
static_assert(offsetof(ULiteEmptyButtonStyle, NormalBase) == 224, "Offset mismatch for ULiteEmptyButtonStyle::NormalBase");
static_assert(offsetof(ULiteEmptyButtonStyle, NormalHovered) == 400, "Offset mismatch for ULiteEmptyButtonStyle::NormalHovered");
static_assert(offsetof(ULiteEmptyButtonStyle, NormalPressed) == 576, "Offset mismatch for ULiteEmptyButtonStyle::NormalPressed");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedBase) == 752, "Offset mismatch for ULiteEmptyButtonStyle::SelectedBase");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedHovered) == 928, "Offset mismatch for ULiteEmptyButtonStyle::SelectedHovered");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedPressed) == 1104, "Offset mismatch for ULiteEmptyButtonStyle::SelectedPressed");
static_assert(offsetof(ULiteEmptyButtonStyle, Disabled) == 1280, "Offset mismatch for ULiteEmptyButtonStyle::Disabled");
static_assert(offsetof(ULiteEmptyButtonStyle, ButtonPadding) == 1456, "Offset mismatch for ULiteEmptyButtonStyle::ButtonPadding");
static_assert(offsetof(ULiteEmptyButtonStyle, CustomPadding) == 1472, "Offset mismatch for ULiteEmptyButtonStyle::CustomPadding");
static_assert(offsetof(ULiteEmptyButtonStyle, MinWidth) == 1488, "Offset mismatch for ULiteEmptyButtonStyle::MinWidth");
static_assert(offsetof(ULiteEmptyButtonStyle, MinHeight) == 1492, "Offset mismatch for ULiteEmptyButtonStyle::MinHeight");
static_assert(offsetof(ULiteEmptyButtonStyle, MaxWidth) == 1496, "Offset mismatch for ULiteEmptyButtonStyle::MaxWidth");
static_assert(offsetof(ULiteEmptyButtonStyle, MaxHeight) == 1500, "Offset mismatch for ULiteEmptyButtonStyle::MaxHeight");
static_assert(offsetof(ULiteEmptyButtonStyle, NormalTextStyle) == 1504, "Offset mismatch for ULiteEmptyButtonStyle::NormalTextStyle");
static_assert(offsetof(ULiteEmptyButtonStyle, NormalHoveredTextStyle) == 1512, "Offset mismatch for ULiteEmptyButtonStyle::NormalHoveredTextStyle");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedTextStyle) == 1520, "Offset mismatch for ULiteEmptyButtonStyle::SelectedTextStyle");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedHoveredTextStyle) == 1528, "Offset mismatch for ULiteEmptyButtonStyle::SelectedHoveredTextStyle");
static_assert(offsetof(ULiteEmptyButtonStyle, DisabledTextStyle) == 1536, "Offset mismatch for ULiteEmptyButtonStyle::DisabledTextStyle");
static_assert(offsetof(ULiteEmptyButtonStyle, PressedSlateSound) == 1544, "Offset mismatch for ULiteEmptyButtonStyle::PressedSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, ClickedSlateSound) == 1568, "Offset mismatch for ULiteEmptyButtonStyle::ClickedSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedPressedSlateSound) == 1592, "Offset mismatch for ULiteEmptyButtonStyle::SelectedPressedSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedClickedSlateSound) == 1624, "Offset mismatch for ULiteEmptyButtonStyle::SelectedClickedSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, LockedPressedSlateSound) == 1656, "Offset mismatch for ULiteEmptyButtonStyle::LockedPressedSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, LockedClickedSlateSound) == 1688, "Offset mismatch for ULiteEmptyButtonStyle::LockedClickedSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, HoveredSlateSound) == 1720, "Offset mismatch for ULiteEmptyButtonStyle::HoveredSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, SelectedHoveredSlateSound) == 1744, "Offset mismatch for ULiteEmptyButtonStyle::SelectedHoveredSlateSound");
static_assert(offsetof(ULiteEmptyButtonStyle, LockedHoveredSlateSound) == 1776, "Offset mismatch for ULiteEmptyButtonStyle::LockedHoveredSlateSound");

// /Script/LiteUIKit.LiteImageDownloadComponent
// Kind: Class; super: UIComponent
class ULiteImageDownloadComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    FMulticastInlineDelegate OnParameterDownloadStateChanged; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString ImageUrl; // 0x0068 (Size: 0x10, Type: StrProperty)
    TArray<void*> AdditionalTextureParameters; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoSetBrushOnDownload; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    void* DownloadedTexture; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DownloadState; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0099
    std::uint8_t ImageReference[0x70]; // 0x00A0 (Size: 0x70, Type: StructProperty)
    TArray<void*> ParameterDownloadSlots; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULiteImageDownloadComponent, OnParameterDownloadStateChanged) == 88, "Offset mismatch for ULiteImageDownloadComponent::OnParameterDownloadStateChanged");
static_assert(offsetof(ULiteImageDownloadComponent, ImageUrl) == 104, "Offset mismatch for ULiteImageDownloadComponent::ImageUrl");
static_assert(offsetof(ULiteImageDownloadComponent, AdditionalTextureParameters) == 120, "Offset mismatch for ULiteImageDownloadComponent::AdditionalTextureParameters");
static_assert(offsetof(ULiteImageDownloadComponent, bAutoSetBrushOnDownload) == 136, "Offset mismatch for ULiteImageDownloadComponent::bAutoSetBrushOnDownload");
static_assert(offsetof(ULiteImageDownloadComponent, DownloadedTexture) == 144, "Offset mismatch for ULiteImageDownloadComponent::DownloadedTexture");
static_assert(offsetof(ULiteImageDownloadComponent, DownloadState) == 152, "Offset mismatch for ULiteImageDownloadComponent::DownloadState");
static_assert(offsetof(ULiteImageDownloadComponent, ImageReference) == 160, "Offset mismatch for ULiteImageDownloadComponent::ImageReference");
static_assert(offsetof(ULiteImageDownloadComponent, ParameterDownloadSlots) == 272, "Offset mismatch for ULiteImageDownloadComponent::ParameterDownloadSlots");

// /Script/LiteUIKit.LiteInputFieldBase
// Kind: Class; super: LiteButtonBase
class ULiteInputFieldBase
{
public:
    std::uint8_t Pad_0000[0x15C0]; // 0x0000
    void* EditableText; // 0x15C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Text[0x10]; // 0x15C8 (Size: 0x10, Type: TextProperty)
    std::uint8_t HintText[0x10]; // 0x15D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t IsReadOnly; // 0x15E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPassword; // 0x15E9 (Size: 0x1, Type: BoolProperty)
    std::uint16_t MaxTextCharacters; // 0x15EA (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(ULiteInputFieldBase, EditableText) == 5568, "Offset mismatch for ULiteInputFieldBase::EditableText");
static_assert(offsetof(ULiteInputFieldBase, Text) == 5576, "Offset mismatch for ULiteInputFieldBase::Text");
static_assert(offsetof(ULiteInputFieldBase, HintText) == 5592, "Offset mismatch for ULiteInputFieldBase::HintText");
static_assert(offsetof(ULiteInputFieldBase, IsReadOnly) == 5608, "Offset mismatch for ULiteInputFieldBase::IsReadOnly");
static_assert(offsetof(ULiteInputFieldBase, IsPassword) == 5609, "Offset mismatch for ULiteInputFieldBase::IsPassword");
static_assert(offsetof(ULiteInputFieldBase, MaxTextCharacters) == 5610, "Offset mismatch for ULiteInputFieldBase::MaxTextCharacters");

// /Script/LiteUIKit.LiteLazyImage
// Kind: Class; super: Image
class ULiteLazyImage
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    FMulticastInlineDelegate OnDownloadStarted; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDownloadFinished; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsWaitingForImageDownload; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMatchDownloadImageSize; // 0x02B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetBrushAfterDownload; // 0x02B2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiteLazyImage, OnDownloadStarted) == 656, "Offset mismatch for ULiteLazyImage::OnDownloadStarted");
static_assert(offsetof(ULiteLazyImage, OnDownloadFinished) == 672, "Offset mismatch for ULiteLazyImage::OnDownloadFinished");
static_assert(offsetof(ULiteLazyImage, bIsWaitingForImageDownload) == 688, "Offset mismatch for ULiteLazyImage::bIsWaitingForImageDownload");
static_assert(offsetof(ULiteLazyImage, bMatchDownloadImageSize) == 689, "Offset mismatch for ULiteLazyImage::bMatchDownloadImageSize");
static_assert(offsetof(ULiteLazyImage, bSetBrushAfterDownload) == 690, "Offset mismatch for ULiteLazyImage::bSetBrushAfterDownload");

// /Script/LiteUIKit.LiteUIKitLayoutLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULiteUIKitLayoutLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiteUIKit.LiteWrapBox
// Kind: Class; super: PanelWidget
class ULiteWrapBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    FMulticastInlineDelegate OnWrappedContentChanged; // 0x0180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t orientation; // 0x0190 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0191
    std::uint8_t InnerSlotPadding[0x10]; // 0x0198 (Size: 0x10, Type: StructProperty)
    std::uint8_t JustifyContent; // 0x01A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AlignContent; // 0x01A9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULiteWrapBox, OnWrappedContentChanged) == 384, "Offset mismatch for ULiteWrapBox::OnWrappedContentChanged");
static_assert(offsetof(ULiteWrapBox, orientation) == 400, "Offset mismatch for ULiteWrapBox::orientation");
static_assert(offsetof(ULiteWrapBox, InnerSlotPadding) == 408, "Offset mismatch for ULiteWrapBox::InnerSlotPadding");
static_assert(offsetof(ULiteWrapBox, JustifyContent) == 424, "Offset mismatch for ULiteWrapBox::JustifyContent");
static_assert(offsetof(ULiteWrapBox, AlignContent) == 425, "Offset mismatch for ULiteWrapBox::AlignContent");

// /Script/LiteUIKit.LiteWrapBoxSlot
// Kind: Class; super: PanelSlot
class ULiteWrapBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnwrappedLayout[0xC]; // 0x0048 (Size: 0xC, Type: StructProperty)
    std::uint8_t WrappedLayout[0xC]; // 0x0054 (Size: 0xC, Type: StructProperty)
    float WrapLayoutLessThan; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::int32_t Order; // 0x0064 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(ULiteWrapBoxSlot, Padding) == 56, "Offset mismatch for ULiteWrapBoxSlot::Padding");
static_assert(offsetof(ULiteWrapBoxSlot, UnwrappedLayout) == 72, "Offset mismatch for ULiteWrapBoxSlot::UnwrappedLayout");
static_assert(offsetof(ULiteWrapBoxSlot, WrappedLayout) == 84, "Offset mismatch for ULiteWrapBoxSlot::WrappedLayout");
static_assert(offsetof(ULiteWrapBoxSlot, WrapLayoutLessThan) == 96, "Offset mismatch for ULiteWrapBoxSlot::WrapLayoutLessThan");
static_assert(offsetof(ULiteWrapBoxSlot, Order) == 100, "Offset mismatch for ULiteWrapBoxSlot::Order");
