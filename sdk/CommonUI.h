/**
 * decamp dumper generated SDK
 * Package: /Script/CommonUI
 */
#pragma once
#include "Basic.h"

// /Script/CommonUI.CommonAnalogCursorSettings
// Kind: ScriptStruct; super: none
struct FCommonAnalogCursorSettings
{
public:
    std::int32_t PreprocessorPriority; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t PreprocessorRegistrationInfo[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t bEnableCursorAcceleration; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    float CursorAcceleration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float CursorMaxSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CursorDeadZone; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float HoverSlowdownFactor; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ScrollDeadZone; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ScrollUpdatePeriod; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float ScrollMultiplier; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MaxHoldDuration; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCommonAnalogCursorSettings, PreprocessorPriority) == 0, "Offset mismatch for FCommonAnalogCursorSettings::PreprocessorPriority");
static_assert(offsetof(FCommonAnalogCursorSettings, PreprocessorRegistrationInfo) == 4, "Offset mismatch for FCommonAnalogCursorSettings::PreprocessorRegistrationInfo");
static_assert(offsetof(FCommonAnalogCursorSettings, bEnableCursorAcceleration) == 12, "Offset mismatch for FCommonAnalogCursorSettings::bEnableCursorAcceleration");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorAcceleration) == 16, "Offset mismatch for FCommonAnalogCursorSettings::CursorAcceleration");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorMaxSpeed) == 20, "Offset mismatch for FCommonAnalogCursorSettings::CursorMaxSpeed");
static_assert(offsetof(FCommonAnalogCursorSettings, CursorDeadZone) == 24, "Offset mismatch for FCommonAnalogCursorSettings::CursorDeadZone");
static_assert(offsetof(FCommonAnalogCursorSettings, HoverSlowdownFactor) == 28, "Offset mismatch for FCommonAnalogCursorSettings::HoverSlowdownFactor");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollDeadZone) == 32, "Offset mismatch for FCommonAnalogCursorSettings::ScrollDeadZone");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollUpdatePeriod) == 36, "Offset mismatch for FCommonAnalogCursorSettings::ScrollUpdatePeriod");
static_assert(offsetof(FCommonAnalogCursorSettings, ScrollMultiplier) == 40, "Offset mismatch for FCommonAnalogCursorSettings::ScrollMultiplier");
static_assert(offsetof(FCommonAnalogCursorSettings, MaxHoldDuration) == 44, "Offset mismatch for FCommonAnalogCursorSettings::MaxHoldDuration");

// /Script/CommonUI.CommonButtonStyleOptionalSlateSound
// Kind: ScriptStruct; super: none
struct FCommonButtonStyleOptionalSlateSound
{
public:
    std::uint8_t bHasSound; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Sound[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, bHasSound) == 0, "Offset mismatch for FCommonButtonStyleOptionalSlateSound::bHasSound");
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, Sound) == 8, "Offset mismatch for FCommonButtonStyleOptionalSlateSound::Sound");

// /Script/CommonUI.CommonInputActionDataBase
// Kind: ScriptStruct; super: TableRowBase
struct FCommonInputActionDataBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t HoldDisplayName[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::int32_t NavBarPriority; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t KeyboardInputTypeInfo[0xF0]; // 0x0030 (Size: 0xF0, Type: StructProperty)
    std::uint8_t DefaultGamepadInputTypeInfo[0xF0]; // 0x0120 (Size: 0xF0, Type: StructProperty)
    TMap<void*, void*> GamepadInputOverrides; // 0x0210 (Size: 0x10, Type: MapProperty)
    std::uint8_t TouchInputTypeInfo[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonInputActionDataBase, DisplayName) == 8, "Offset mismatch for FCommonInputActionDataBase::DisplayName");
static_assert(offsetof(FCommonInputActionDataBase, HoldDisplayName) == 24, "Offset mismatch for FCommonInputActionDataBase::HoldDisplayName");
static_assert(offsetof(FCommonInputActionDataBase, NavBarPriority) == 40, "Offset mismatch for FCommonInputActionDataBase::NavBarPriority");
static_assert(offsetof(FCommonInputActionDataBase, KeyboardInputTypeInfo) == 48, "Offset mismatch for FCommonInputActionDataBase::KeyboardInputTypeInfo");
static_assert(offsetof(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo) == 288, "Offset mismatch for FCommonInputActionDataBase::DefaultGamepadInputTypeInfo");
static_assert(offsetof(FCommonInputActionDataBase, GamepadInputOverrides) == 528, "Offset mismatch for FCommonInputActionDataBase::GamepadInputOverrides");
static_assert(offsetof(FCommonInputActionDataBase, TouchInputTypeInfo) == 544, "Offset mismatch for FCommonInputActionDataBase::TouchInputTypeInfo");

// /Script/CommonUI.CommonInputActionHandlerData
// Kind: ScriptStruct; super: none
struct FCommonInputActionHandlerData
{
public:
    std::uint8_t InputActionRow[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t State; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCommonInputActionHandlerData, InputActionRow) == 0, "Offset mismatch for FCommonInputActionHandlerData::InputActionRow");
static_assert(offsetof(FCommonInputActionHandlerData, State) == 16, "Offset mismatch for FCommonInputActionHandlerData::State");

// /Script/CommonUI.CommonInputTypeInfo
// Kind: ScriptStruct; super: none
struct FCommonInputTypeInfo
{
public:
    std::uint8_t Key[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> AdditionalKeys; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OverrrideState; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bActionRequiresHold; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x002A
    float HoldTime; // 0x002C (Size: 0x4, Type: FloatProperty)
    float HoldRollbackTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0034
    std::uint8_t OverrideBrush[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonInputTypeInfo, Key) == 0, "Offset mismatch for FCommonInputTypeInfo::Key");
static_assert(offsetof(FCommonInputTypeInfo, AdditionalKeys) == 24, "Offset mismatch for FCommonInputTypeInfo::AdditionalKeys");
static_assert(offsetof(FCommonInputTypeInfo, OverrrideState) == 40, "Offset mismatch for FCommonInputTypeInfo::OverrrideState");
static_assert(offsetof(FCommonInputTypeInfo, bActionRequiresHold) == 41, "Offset mismatch for FCommonInputTypeInfo::bActionRequiresHold");
static_assert(offsetof(FCommonInputTypeInfo, HoldTime) == 44, "Offset mismatch for FCommonInputTypeInfo::HoldTime");
static_assert(offsetof(FCommonInputTypeInfo, HoldRollbackTime) == 48, "Offset mismatch for FCommonInputTypeInfo::HoldRollbackTime");
static_assert(offsetof(FCommonInputTypeInfo, OverrideBrush) == 64, "Offset mismatch for FCommonInputTypeInfo::OverrideBrush");

// /Script/CommonUI.CommonNumberFormattingOptions
// Kind: ScriptStruct; super: none
struct FCommonNumberFormattingOptions
{
public:
    std::uint8_t RoundingMode; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AlwaysSign; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseGrouping; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t MinimumIntegralDigits; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumIntegralDigits; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MinimumFractionalDigits; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumFractionalDigits; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCommonNumberFormattingOptions, RoundingMode) == 0, "Offset mismatch for FCommonNumberFormattingOptions::RoundingMode");
static_assert(offsetof(FCommonNumberFormattingOptions, AlwaysSign) == 1, "Offset mismatch for FCommonNumberFormattingOptions::AlwaysSign");
static_assert(offsetof(FCommonNumberFormattingOptions, UseGrouping) == 2, "Offset mismatch for FCommonNumberFormattingOptions::UseGrouping");
static_assert(offsetof(FCommonNumberFormattingOptions, MinimumIntegralDigits) == 4, "Offset mismatch for FCommonNumberFormattingOptions::MinimumIntegralDigits");
static_assert(offsetof(FCommonNumberFormattingOptions, MaximumIntegralDigits) == 8, "Offset mismatch for FCommonNumberFormattingOptions::MaximumIntegralDigits");
static_assert(offsetof(FCommonNumberFormattingOptions, MinimumFractionalDigits) == 12, "Offset mismatch for FCommonNumberFormattingOptions::MinimumFractionalDigits");
static_assert(offsetof(FCommonNumberFormattingOptions, MaximumFractionalDigits) == 16, "Offset mismatch for FCommonNumberFormattingOptions::MaximumFractionalDigits");

// /Script/CommonUI.CommonRegisteredTabInfo
// Kind: ScriptStruct; super: none
struct FCommonRegisteredTabInfo
{
public:
    std::int32_t TabIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* TabButtonClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* TabButton; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ContentInstance; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCommonRegisteredTabInfo, TabIndex) == 0, "Offset mismatch for FCommonRegisteredTabInfo::TabIndex");
static_assert(offsetof(FCommonRegisteredTabInfo, TabButtonClass) == 8, "Offset mismatch for FCommonRegisteredTabInfo::TabButtonClass");
static_assert(offsetof(FCommonRegisteredTabInfo, TabButton) == 16, "Offset mismatch for FCommonRegisteredTabInfo::TabButton");
static_assert(offsetof(FCommonRegisteredTabInfo, ContentInstance) == 24, "Offset mismatch for FCommonRegisteredTabInfo::ContentInstance");

// /Script/CommonUI.RichTextIconData
// Kind: ScriptStruct; super: TableRowBase
struct FRichTextIconData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t ResourceObject[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ImageSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRichTextIconData, DisplayName) == 8, "Offset mismatch for FRichTextIconData::DisplayName");
static_assert(offsetof(FRichTextIconData, ResourceObject) == 24, "Offset mismatch for FRichTextIconData::ResourceObject");
static_assert(offsetof(FRichTextIconData, ImageSize) == 56, "Offset mismatch for FRichTextIconData::ImageSize");

// /Script/CommonUI.UIActionBindingHandle
// Kind: ScriptStruct; super: none
struct FUIActionBindingHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.UIActionKeyMapping
// Kind: ScriptStruct; super: none
struct FUIActionKeyMapping
{
public:
    std::uint8_t Key[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float HoldTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float HoldRollbackTime; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FUIActionKeyMapping, Key) == 0, "Offset mismatch for FUIActionKeyMapping::Key");
static_assert(offsetof(FUIActionKeyMapping, HoldTime) == 24, "Offset mismatch for FUIActionKeyMapping::HoldTime");
static_assert(offsetof(FUIActionKeyMapping, HoldRollbackTime) == 28, "Offset mismatch for FUIActionKeyMapping::HoldRollbackTime");

// /Script/CommonUI.UIActionTag
// Kind: ScriptStruct; super: UITag
struct FUIActionTag
{
public:
    FName TagName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUIActionTag, TagName) == 0, "Offset mismatch for FUIActionTag::TagName");

// /Script/CommonUI.UIInputAction
// Kind: ScriptStruct; super: none
struct FUIInputAction
{
public:
    std::uint8_t ActionTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t DefaultDisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TArray<void*> KeyMappings; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIInputAction, ActionTag) == 0, "Offset mismatch for FUIInputAction::ActionTag");
static_assert(offsetof(FUIInputAction, DefaultDisplayName) == 8, "Offset mismatch for FUIInputAction::DefaultDisplayName");
static_assert(offsetof(FUIInputAction, KeyMappings) == 24, "Offset mismatch for FUIInputAction::KeyMappings");

// /Script/CommonUI.UIInputConfig
// Kind: ScriptStruct; super: none
struct FUIInputConfig
{
public:
    std::uint8_t bIgnoreMoveInput; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreLookInput; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MouseCaptureMode; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MouseLockMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHideCursorDuringViewportCapture; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIInputConfig, bIgnoreMoveInput) == 0, "Offset mismatch for FUIInputConfig::bIgnoreMoveInput");
static_assert(offsetof(FUIInputConfig, bIgnoreLookInput) == 1, "Offset mismatch for FUIInputConfig::bIgnoreLookInput");
static_assert(offsetof(FUIInputConfig, InputMode) == 2, "Offset mismatch for FUIInputConfig::InputMode");
static_assert(offsetof(FUIInputConfig, MouseCaptureMode) == 3, "Offset mismatch for FUIInputConfig::MouseCaptureMode");
static_assert(offsetof(FUIInputConfig, MouseLockMode) == 4, "Offset mismatch for FUIInputConfig::MouseLockMode");
static_assert(offsetof(FUIInputConfig, bHideCursorDuringViewportCapture) == 5, "Offset mismatch for FUIInputConfig::bHideCursorDuringViewportCapture");

// /Script/CommonUI.UITag
// Kind: ScriptStruct; super: GameplayTag
struct FUITag
{
public:
    FName TagName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUITag, TagName) == 0, "Offset mismatch for FUITag::TagName");

// /Script/CommonUI.AnalogSlider
// Kind: Class; super: Slider
class UAnalogSlider
{
public:
    std::uint8_t Pad_0000[0x650]; // 0x0000
    FMulticastInlineDelegate OnAnalogCapture; // 0x0650 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAnalogSlider, OnAnalogCapture) == 1616, "Offset mismatch for UAnalogSlider::OnAnalogCapture");

// /Script/CommonUI.CommonActionHandlerInterface
// Kind: Class; super: Interface
class UCommonActionHandlerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonActionWidget
// Kind: Class; super: Widget
class UCommonActionWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    FMulticastInlineDelegate OnInputMethodChanged; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInputIconUpdated; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0188
    std::uint8_t ProgressMaterialBrush[0xB0]; // 0x0190 (Size: 0xB0, Type: StructProperty)
    FName ProgressMaterialParam; // 0x0240 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0248
    std::uint8_t IconRimBrush[0xB0]; // 0x0250 (Size: 0xB0, Type: StructProperty)
    std::uint8_t InputIconOverrideSize[0x10]; // 0x0300 (Size: 0x10, Type: StructProperty)
    TArray<void*> InputActions; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    void* EnhancedInputAction; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0328
    void* ProgressDynamicMaterial; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x48]; // 0x0338
    std::uint8_t Icon[0x1]; // 0x0380 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonActionWidget, OnInputMethodChanged) == 360, "Offset mismatch for UCommonActionWidget::OnInputMethodChanged");
static_assert(offsetof(UCommonActionWidget, OnInputIconUpdated) == 376, "Offset mismatch for UCommonActionWidget::OnInputIconUpdated");
static_assert(offsetof(UCommonActionWidget, ProgressMaterialBrush) == 400, "Offset mismatch for UCommonActionWidget::ProgressMaterialBrush");
static_assert(offsetof(UCommonActionWidget, ProgressMaterialParam) == 576, "Offset mismatch for UCommonActionWidget::ProgressMaterialParam");
static_assert(offsetof(UCommonActionWidget, IconRimBrush) == 592, "Offset mismatch for UCommonActionWidget::IconRimBrush");
static_assert(offsetof(UCommonActionWidget, InputIconOverrideSize) == 768, "Offset mismatch for UCommonActionWidget::InputIconOverrideSize");
static_assert(offsetof(UCommonActionWidget, InputActions) == 784, "Offset mismatch for UCommonActionWidget::InputActions");
static_assert(offsetof(UCommonActionWidget, EnhancedInputAction) == 800, "Offset mismatch for UCommonActionWidget::EnhancedInputAction");
static_assert(offsetof(UCommonActionWidget, ProgressDynamicMaterial) == 816, "Offset mismatch for UCommonActionWidget::ProgressDynamicMaterial");
static_assert(offsetof(UCommonActionWidget, Icon) == 896, "Offset mismatch for UCommonActionWidget::Icon");

// /Script/CommonUI.CommonActivatableWidget
// Kind: Class; super: CommonUserWidget
class UCommonActivatableWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t bIsBackHandler; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBackActionDisplayedInActionBar; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0332
    std::uint8_t OverrideBackActionDisplayName[0x10]; // 0x0338 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAutoActivate; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsActivationFocus; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsModal; // 0x034A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoRestoreFocus; // 0x034B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideActionDomain; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    void* InputMapping; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x0358 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x035C
    std::uint8_t InputModeTagsToAdd[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputModeTagsToRemove[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionDomainOverride[0x20]; // 0x03A0 (Size: 0x20, Type: SoftObjectProperty)
    FMulticastInlineDelegate BP_OnWidgetActivated; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x03D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsActive; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03E1
    TArray<void*> VisibilityBoundWidgets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xA0]; // 0x03F8
    std::uint8_t bSetVisibilityOnActivated; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActivatedVisibility; // 0x0499 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetVisibilityOnDeactivated; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivatedVisibility; // 0x049B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCommonActivatableWidget, bIsBackHandler) == 816, "Offset mismatch for UCommonActivatableWidget::bIsBackHandler");
static_assert(offsetof(UCommonActivatableWidget, bIsBackActionDisplayedInActionBar) == 817, "Offset mismatch for UCommonActivatableWidget::bIsBackActionDisplayedInActionBar");
static_assert(offsetof(UCommonActivatableWidget, OverrideBackActionDisplayName) == 824, "Offset mismatch for UCommonActivatableWidget::OverrideBackActionDisplayName");
static_assert(offsetof(UCommonActivatableWidget, bAutoActivate) == 840, "Offset mismatch for UCommonActivatableWidget::bAutoActivate");
static_assert(offsetof(UCommonActivatableWidget, bSupportsActivationFocus) == 841, "Offset mismatch for UCommonActivatableWidget::bSupportsActivationFocus");
static_assert(offsetof(UCommonActivatableWidget, bIsModal) == 842, "Offset mismatch for UCommonActivatableWidget::bIsModal");
static_assert(offsetof(UCommonActivatableWidget, bAutoRestoreFocus) == 843, "Offset mismatch for UCommonActivatableWidget::bAutoRestoreFocus");
static_assert(offsetof(UCommonActivatableWidget, bOverrideActionDomain) == 844, "Offset mismatch for UCommonActivatableWidget::bOverrideActionDomain");
static_assert(offsetof(UCommonActivatableWidget, InputMapping) == 848, "Offset mismatch for UCommonActivatableWidget::InputMapping");
static_assert(offsetof(UCommonActivatableWidget, InputMappingPriority) == 856, "Offset mismatch for UCommonActivatableWidget::InputMappingPriority");
static_assert(offsetof(UCommonActivatableWidget, InputModeTagsToAdd) == 864, "Offset mismatch for UCommonActivatableWidget::InputModeTagsToAdd");
static_assert(offsetof(UCommonActivatableWidget, InputModeTagsToRemove) == 896, "Offset mismatch for UCommonActivatableWidget::InputModeTagsToRemove");
static_assert(offsetof(UCommonActivatableWidget, ActionDomainOverride) == 928, "Offset mismatch for UCommonActivatableWidget::ActionDomainOverride");
static_assert(offsetof(UCommonActivatableWidget, BP_OnWidgetActivated) == 960, "Offset mismatch for UCommonActivatableWidget::BP_OnWidgetActivated");
static_assert(offsetof(UCommonActivatableWidget, BP_OnWidgetDeactivated) == 976, "Offset mismatch for UCommonActivatableWidget::BP_OnWidgetDeactivated");
static_assert(offsetof(UCommonActivatableWidget, bIsActive) == 992, "Offset mismatch for UCommonActivatableWidget::bIsActive");
static_assert(offsetof(UCommonActivatableWidget, VisibilityBoundWidgets) == 1000, "Offset mismatch for UCommonActivatableWidget::VisibilityBoundWidgets");
static_assert(offsetof(UCommonActivatableWidget, bSetVisibilityOnActivated) == 1176, "Offset mismatch for UCommonActivatableWidget::bSetVisibilityOnActivated");
static_assert(offsetof(UCommonActivatableWidget, ActivatedVisibility) == 1177, "Offset mismatch for UCommonActivatableWidget::ActivatedVisibility");
static_assert(offsetof(UCommonActivatableWidget, bSetVisibilityOnDeactivated) == 1178, "Offset mismatch for UCommonActivatableWidget::bSetVisibilityOnDeactivated");
static_assert(offsetof(UCommonActivatableWidget, DeactivatedVisibility) == 1179, "Offset mismatch for UCommonActivatableWidget::DeactivatedVisibility");

// /Script/CommonUI.CommonActivatableWidgetContainerBase
// Kind: Class; super: Widget
class UCommonActivatableWidgetContainerBase
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t TransitionType; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransitionCurveType; // 0x0181 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0182
    float TransitionDuration; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetPoolWhenReleasingSlateResources; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionFallbackStrategy; // 0x0189 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x018A
    TArray<void*> WidgetList; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    void* DisplayedWidget; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeneratedWidgetsPool[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionType) == 384, "Offset mismatch for UCommonActivatableWidgetContainerBase::TransitionType");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionCurveType) == 385, "Offset mismatch for UCommonActivatableWidgetContainerBase::TransitionCurveType");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionDuration) == 388, "Offset mismatch for UCommonActivatableWidgetContainerBase::TransitionDuration");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, bResetPoolWhenReleasingSlateResources) == 392, "Offset mismatch for UCommonActivatableWidgetContainerBase::bResetPoolWhenReleasingSlateResources");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionFallbackStrategy) == 393, "Offset mismatch for UCommonActivatableWidgetContainerBase::TransitionFallbackStrategy");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, WidgetList) == 400, "Offset mismatch for UCommonActivatableWidgetContainerBase::WidgetList");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, DisplayedWidget) == 416, "Offset mismatch for UCommonActivatableWidgetContainerBase::DisplayedWidget");
static_assert(offsetof(UCommonActivatableWidgetContainerBase, GeneratedWidgetsPool) == 424, "Offset mismatch for UCommonActivatableWidgetContainerBase::GeneratedWidgetsPool");

// /Script/CommonUI.CommonActivatableWidgetQueue
// Kind: Class; super: CommonActivatableWidgetContainerBase
class UCommonActivatableWidgetQueue
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t TransitionType; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransitionCurveType; // 0x0181 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0182
    float TransitionDuration; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetPoolWhenReleasingSlateResources; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionFallbackStrategy; // 0x0189 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x018A
    TArray<void*> WidgetList; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    void* DisplayedWidget; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeneratedWidgetsPool[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonActivatableWidgetQueue, TransitionType) == 384, "Offset mismatch for UCommonActivatableWidgetQueue::TransitionType");
static_assert(offsetof(UCommonActivatableWidgetQueue, TransitionCurveType) == 385, "Offset mismatch for UCommonActivatableWidgetQueue::TransitionCurveType");
static_assert(offsetof(UCommonActivatableWidgetQueue, TransitionDuration) == 388, "Offset mismatch for UCommonActivatableWidgetQueue::TransitionDuration");
static_assert(offsetof(UCommonActivatableWidgetQueue, bResetPoolWhenReleasingSlateResources) == 392, "Offset mismatch for UCommonActivatableWidgetQueue::bResetPoolWhenReleasingSlateResources");
static_assert(offsetof(UCommonActivatableWidgetQueue, TransitionFallbackStrategy) == 393, "Offset mismatch for UCommonActivatableWidgetQueue::TransitionFallbackStrategy");
static_assert(offsetof(UCommonActivatableWidgetQueue, WidgetList) == 400, "Offset mismatch for UCommonActivatableWidgetQueue::WidgetList");
static_assert(offsetof(UCommonActivatableWidgetQueue, DisplayedWidget) == 416, "Offset mismatch for UCommonActivatableWidgetQueue::DisplayedWidget");
static_assert(offsetof(UCommonActivatableWidgetQueue, GeneratedWidgetsPool) == 424, "Offset mismatch for UCommonActivatableWidgetQueue::GeneratedWidgetsPool");

// /Script/CommonUI.CommonActivatableWidgetStack
// Kind: Class; super: CommonActivatableWidgetContainerBase
class UCommonActivatableWidgetStack
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    void* RootContentWidgetClass; // 0x0250 (Size: 0x8, Type: ClassProperty)
    void* RootContentWidget; // 0x0258 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidgetClass) == 592, "Offset mismatch for UCommonActivatableWidgetStack::RootContentWidgetClass");
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidget) == 600, "Offset mismatch for UCommonActivatableWidgetStack::RootContentWidget");

// /Script/CommonUI.CommonActivatableWidgetSwitcher
// Kind: Class; super: CommonAnimatedSwitcher
class UCommonActivatableWidgetSwitcher
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    std::uint8_t bClearFocusRestorationTargetOfDeactivatedWidgets; // 0x0220 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonActivatableWidgetSwitcher, bClearFocusRestorationTargetOfDeactivatedWidgets) == 544, "Offset mismatch for UCommonActivatableWidgetSwitcher::bClearFocusRestorationTargetOfDeactivatedWidgets");

// /Script/CommonUI.CommonAnimatedSwitcher
// Kind: Class; super: WidgetSwitcher
class UCommonAnimatedSwitcher
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    FMulticastInlineDelegate OnActiveWidgetIndexChangedBP; // 0x01C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TransitionType; // 0x01D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransitionCurveType; // 0x01D9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01DA
    float TransitionDuration; // 0x01DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t TransitionFallbackStrategy; // 0x01E0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCommonAnimatedSwitcher, OnActiveWidgetIndexChangedBP) == 456, "Offset mismatch for UCommonAnimatedSwitcher::OnActiveWidgetIndexChangedBP");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionType) == 472, "Offset mismatch for UCommonAnimatedSwitcher::TransitionType");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionCurveType) == 473, "Offset mismatch for UCommonAnimatedSwitcher::TransitionCurveType");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionDuration) == 476, "Offset mismatch for UCommonAnimatedSwitcher::TransitionDuration");
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionFallbackStrategy) == 480, "Offset mismatch for UCommonAnimatedSwitcher::TransitionFallbackStrategy");

// /Script/CommonUI.CommonBorder
// Kind: Class; super: Border
class UCommonBorder
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    void* Style; // 0x02E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bReducePaddingBySafezone; // 0x02E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02E9
    std::uint8_t MinimumPadding[0x1]; // 0x02EC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonBorder, Style) == 736, "Offset mismatch for UCommonBorder::Style");
static_assert(offsetof(UCommonBorder, bReducePaddingBySafezone) == 744, "Offset mismatch for UCommonBorder::bReducePaddingBySafezone");
static_assert(offsetof(UCommonBorder, MinimumPadding) == 748, "Offset mismatch for UCommonBorder::MinimumPadding");

// /Script/CommonUI.CommonBorderStyle
// Kind: Class; super: Object
class UCommonBorderStyle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Background[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonBorderStyle, Background) == 48, "Offset mismatch for UCommonBorderStyle::Background");

// /Script/CommonUI.CommonBoundActionBar
// Kind: Class; super: DynamicEntryBoxBase
class UCommonBoundActionBar
{
public:
    std::uint8_t Pad_0000[0x208]; // 0x0000
    void* ActionButtonClass; // 0x0208 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDisplayOwningPlayerActionsOnly; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreDuplicateActions; // 0x0211 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0212
    FMulticastInlineDelegate OnActionBarUpdated; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonBoundActionBar, ActionButtonClass) == 520, "Offset mismatch for UCommonBoundActionBar::ActionButtonClass");
static_assert(offsetof(UCommonBoundActionBar, bDisplayOwningPlayerActionsOnly) == 528, "Offset mismatch for UCommonBoundActionBar::bDisplayOwningPlayerActionsOnly");
static_assert(offsetof(UCommonBoundActionBar, bIgnoreDuplicateActions) == 529, "Offset mismatch for UCommonBoundActionBar::bIgnoreDuplicateActions");
static_assert(offsetof(UCommonBoundActionBar, OnActionBarUpdated) == 536, "Offset mismatch for UCommonBoundActionBar::OnActionBarUpdated");

// /Script/CommonUI.CommonBoundActionButton
// Kind: Class; super: CommonButtonBase
class UCommonBoundActionButton
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* Text_ActionName; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLinkRequiresHoldToBindingHold; // 0x15B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonBoundActionButton, Text_ActionName) == 5544, "Offset mismatch for UCommonBoundActionButton::Text_ActionName");
static_assert(offsetof(UCommonBoundActionButton, bLinkRequiresHoldToBindingHold) == 5552, "Offset mismatch for UCommonBoundActionButton::bLinkRequiresHoldToBindingHold");

// /Script/CommonUI.CommonBoundActionButtonInterface
// Kind: Class; super: Interface
class UCommonBoundActionButtonInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonButtonBase
// Kind: Class; super: CommonUserWidget
class UCommonButtonBase
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

static_assert(offsetof(UCommonButtonBase, ClickEvent) == 816, "Offset mismatch for UCommonButtonBase::ClickEvent");
static_assert(offsetof(UCommonButtonBase, MinWidth) == 820, "Offset mismatch for UCommonButtonBase::MinWidth");
static_assert(offsetof(UCommonButtonBase, MinHeight) == 824, "Offset mismatch for UCommonButtonBase::MinHeight");
static_assert(offsetof(UCommonButtonBase, MaxWidth) == 828, "Offset mismatch for UCommonButtonBase::MaxWidth");
static_assert(offsetof(UCommonButtonBase, MaxHeight) == 832, "Offset mismatch for UCommonButtonBase::MaxHeight");
static_assert(offsetof(UCommonButtonBase, Style) == 840, "Offset mismatch for UCommonButtonBase::Style");
static_assert(offsetof(UCommonButtonBase, bHideInputAction) == 848, "Offset mismatch for UCommonButtonBase::bHideInputAction");
static_assert(offsetof(UCommonButtonBase, PressedSlateSoundOverride) == 856, "Offset mismatch for UCommonButtonBase::PressedSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, ClickedSlateSoundOverride) == 880, "Offset mismatch for UCommonButtonBase::ClickedSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, HoveredSlateSoundOverride) == 904, "Offset mismatch for UCommonButtonBase::HoveredSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, SelectedPressedSlateSoundOverride) == 928, "Offset mismatch for UCommonButtonBase::SelectedPressedSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, SelectedClickedSlateSoundOverride) == 952, "Offset mismatch for UCommonButtonBase::SelectedClickedSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, SelectedHoveredSlateSoundOverride) == 976, "Offset mismatch for UCommonButtonBase::SelectedHoveredSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, LockedPressedSlateSoundOverride) == 1000, "Offset mismatch for UCommonButtonBase::LockedPressedSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, LockedClickedSlateSoundOverride) == 1024, "Offset mismatch for UCommonButtonBase::LockedClickedSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, LockedHoveredSlateSoundOverride) == 1048, "Offset mismatch for UCommonButtonBase::LockedHoveredSlateSoundOverride");
static_assert(offsetof(UCommonButtonBase, bApplyAlphaOnDisable) == 1072, "Offset mismatch for UCommonButtonBase::bApplyAlphaOnDisable");
static_assert(offsetof(UCommonButtonBase, bHideInputActionWithKeyboard) == 1073, "Offset mismatch for UCommonButtonBase::bHideInputActionWithKeyboard");
static_assert(offsetof(UCommonButtonBase, HoldData) == 1080, "Offset mismatch for UCommonButtonBase::HoldData");
static_assert(offsetof(UCommonButtonBase, bSimulateHoverOnTouchInput) == 1088, "Offset mismatch for UCommonButtonBase::bSimulateHoverOnTouchInput");
static_assert(offsetof(UCommonButtonBase, ClickMethod) == 1091, "Offset mismatch for UCommonButtonBase::ClickMethod");
static_assert(offsetof(UCommonButtonBase, TouchMethod) == 1092, "Offset mismatch for UCommonButtonBase::TouchMethod");
static_assert(offsetof(UCommonButtonBase, PressMethod) == 1093, "Offset mismatch for UCommonButtonBase::PressMethod");
static_assert(offsetof(UCommonButtonBase, InputPriority) == 1096, "Offset mismatch for UCommonButtonBase::InputPriority");
static_assert(offsetof(UCommonButtonBase, TriggeringInputAction) == 1104, "Offset mismatch for UCommonButtonBase::TriggeringInputAction");
static_assert(offsetof(UCommonButtonBase, TriggeringEnhancedInputAction) == 1120, "Offset mismatch for UCommonButtonBase::TriggeringEnhancedInputAction");
static_assert(offsetof(UCommonButtonBase, bNavigateToNextWidgetOnDisable) == 1144, "Offset mismatch for UCommonButtonBase::bNavigateToNextWidgetOnDisable");
static_assert(offsetof(UCommonButtonBase, OnSelectedChangedBase) == 1152, "Offset mismatch for UCommonButtonBase::OnSelectedChangedBase");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseClicked) == 1168, "Offset mismatch for UCommonButtonBase::OnButtonBaseClicked");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDoubleClicked) == 1184, "Offset mismatch for UCommonButtonBase::OnButtonBaseDoubleClicked");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseHovered) == 1200, "Offset mismatch for UCommonButtonBase::OnButtonBaseHovered");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseUnhovered) == 1216, "Offset mismatch for UCommonButtonBase::OnButtonBaseUnhovered");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseFocused) == 1232, "Offset mismatch for UCommonButtonBase::OnButtonBaseFocused");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseUnfocused) == 1248, "Offset mismatch for UCommonButtonBase::OnButtonBaseUnfocused");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseLockClicked) == 1264, "Offset mismatch for UCommonButtonBase::OnButtonBaseLockClicked");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseLockDoubleClicked) == 1280, "Offset mismatch for UCommonButtonBase::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseSelected) == 1296, "Offset mismatch for UCommonButtonBase::OnButtonBaseSelected");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseUnselected) == 1312, "Offset mismatch for UCommonButtonBase::OnButtonBaseUnselected");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDragDetected) == 1328, "Offset mismatch for UCommonButtonBase::OnButtonBaseDragDetected");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDragEnter) == 1344, "Offset mismatch for UCommonButtonBase::OnButtonBaseDragEnter");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDragLeave) == 1360, "Offset mismatch for UCommonButtonBase::OnButtonBaseDragLeave");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDragOver) == 1376, "Offset mismatch for UCommonButtonBase::OnButtonBaseDragOver");
static_assert(offsetof(UCommonButtonBase, OnButtonBaseDrop) == 1392, "Offset mismatch for UCommonButtonBase::OnButtonBaseDrop");
static_assert(offsetof(UCommonButtonBase, bIsPersistentBinding) == 1464, "Offset mismatch for UCommonButtonBase::bIsPersistentBinding");
static_assert(offsetof(UCommonButtonBase, InputModeOverride) == 1465, "Offset mismatch for UCommonButtonBase::InputModeOverride");
static_assert(offsetof(UCommonButtonBase, SingleMaterialStyleMID) == 1504, "Offset mismatch for UCommonButtonBase::SingleMaterialStyleMID");
static_assert(offsetof(UCommonButtonBase, NormalStyle) == 1520, "Offset mismatch for UCommonButtonBase::NormalStyle");
static_assert(offsetof(UCommonButtonBase, SelectedStyle) == 2432, "Offset mismatch for UCommonButtonBase::SelectedStyle");
static_assert(offsetof(UCommonButtonBase, DisabledStyle) == 3344, "Offset mismatch for UCommonButtonBase::DisabledStyle");
static_assert(offsetof(UCommonButtonBase, LockedStyle) == 4256, "Offset mismatch for UCommonButtonBase::LockedStyle");
static_assert(offsetof(UCommonButtonBase, bStopDoubleClickPropagation) == 5168, "Offset mismatch for UCommonButtonBase::bStopDoubleClickPropagation");
static_assert(offsetof(UCommonButtonBase, InputActionWidget) == 5528, "Offset mismatch for UCommonButtonBase::InputActionWidget");

// /Script/CommonUI.CommonButtonGroupBase
// Kind: Class; super: CommonWidgetGroupBase
class UCommonButtonGroupBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSelectedButtonLostSelection; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0048
    FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0070
    FMulticastInlineDelegate OnButtonBaseClicked; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0098
    FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x18]; // 0x00C0
    FMulticastInlineDelegate OnSelectionCleared; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x18]; // 0x00E8
    FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0006[0x18]; // 0x0110
    FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x0138
    std::uint8_t bSelectionRequired; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonButtonGroupBase, OnSelectedButtonLostSelection) == 40, "Offset mismatch for UCommonButtonGroupBase::OnSelectedButtonLostSelection");
static_assert(offsetof(UCommonButtonGroupBase, OnSelectedButtonBaseChanged) == 56, "Offset mismatch for UCommonButtonGroupBase::OnSelectedButtonBaseChanged");
static_assert(offsetof(UCommonButtonGroupBase, OnHoveredButtonBaseChanged) == 96, "Offset mismatch for UCommonButtonGroupBase::OnHoveredButtonBaseChanged");
static_assert(offsetof(UCommonButtonGroupBase, OnButtonBaseClicked) == 136, "Offset mismatch for UCommonButtonGroupBase::OnButtonBaseClicked");
static_assert(offsetof(UCommonButtonGroupBase, OnButtonBaseDoubleClicked) == 176, "Offset mismatch for UCommonButtonGroupBase::OnButtonBaseDoubleClicked");
static_assert(offsetof(UCommonButtonGroupBase, OnSelectionCleared) == 216, "Offset mismatch for UCommonButtonGroupBase::OnSelectionCleared");
static_assert(offsetof(UCommonButtonGroupBase, OnButtonBaseLockClicked) == 256, "Offset mismatch for UCommonButtonGroupBase::OnButtonBaseLockClicked");
static_assert(offsetof(UCommonButtonGroupBase, OnButtonBaseLockDoubleClicked) == 296, "Offset mismatch for UCommonButtonGroupBase::OnButtonBaseLockDoubleClicked");
static_assert(offsetof(UCommonButtonGroupBase, bSelectionRequired) == 336, "Offset mismatch for UCommonButtonGroupBase::bSelectionRequired");

// /Script/CommonUI.CommonButtonInternalBase
// Kind: Class; super: button
class UCommonButtonInternalBase
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

static_assert(offsetof(UCommonButtonInternalBase, OnDoubleClicked) == 1568, "Offset mismatch for UCommonButtonInternalBase::OnDoubleClicked");
static_assert(offsetof(UCommonButtonInternalBase, MinWidth) == 1584, "Offset mismatch for UCommonButtonInternalBase::MinWidth");
static_assert(offsetof(UCommonButtonInternalBase, MinHeight) == 1588, "Offset mismatch for UCommonButtonInternalBase::MinHeight");
static_assert(offsetof(UCommonButtonInternalBase, MaxWidth) == 1592, "Offset mismatch for UCommonButtonInternalBase::MaxWidth");
static_assert(offsetof(UCommonButtonInternalBase, MaxHeight) == 1596, "Offset mismatch for UCommonButtonInternalBase::MaxHeight");
static_assert(offsetof(UCommonButtonInternalBase, bButtonEnabled) == 1600, "Offset mismatch for UCommonButtonInternalBase::bButtonEnabled");
static_assert(offsetof(UCommonButtonInternalBase, bInteractionEnabled) == 1601, "Offset mismatch for UCommonButtonInternalBase::bInteractionEnabled");

// /Script/CommonUI.CommonButtonStyle
// Kind: Class; super: Object
class UCommonButtonStyle
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

static_assert(offsetof(UCommonButtonStyle, bSingleMaterial) == 40, "Offset mismatch for UCommonButtonStyle::bSingleMaterial");
static_assert(offsetof(UCommonButtonStyle, SingleMaterialBrush) == 48, "Offset mismatch for UCommonButtonStyle::SingleMaterialBrush");
static_assert(offsetof(UCommonButtonStyle, NormalBase) == 224, "Offset mismatch for UCommonButtonStyle::NormalBase");
static_assert(offsetof(UCommonButtonStyle, NormalHovered) == 400, "Offset mismatch for UCommonButtonStyle::NormalHovered");
static_assert(offsetof(UCommonButtonStyle, NormalPressed) == 576, "Offset mismatch for UCommonButtonStyle::NormalPressed");
static_assert(offsetof(UCommonButtonStyle, SelectedBase) == 752, "Offset mismatch for UCommonButtonStyle::SelectedBase");
static_assert(offsetof(UCommonButtonStyle, SelectedHovered) == 928, "Offset mismatch for UCommonButtonStyle::SelectedHovered");
static_assert(offsetof(UCommonButtonStyle, SelectedPressed) == 1104, "Offset mismatch for UCommonButtonStyle::SelectedPressed");
static_assert(offsetof(UCommonButtonStyle, Disabled) == 1280, "Offset mismatch for UCommonButtonStyle::Disabled");
static_assert(offsetof(UCommonButtonStyle, ButtonPadding) == 1456, "Offset mismatch for UCommonButtonStyle::ButtonPadding");
static_assert(offsetof(UCommonButtonStyle, CustomPadding) == 1472, "Offset mismatch for UCommonButtonStyle::CustomPadding");
static_assert(offsetof(UCommonButtonStyle, MinWidth) == 1488, "Offset mismatch for UCommonButtonStyle::MinWidth");
static_assert(offsetof(UCommonButtonStyle, MinHeight) == 1492, "Offset mismatch for UCommonButtonStyle::MinHeight");
static_assert(offsetof(UCommonButtonStyle, MaxWidth) == 1496, "Offset mismatch for UCommonButtonStyle::MaxWidth");
static_assert(offsetof(UCommonButtonStyle, MaxHeight) == 1500, "Offset mismatch for UCommonButtonStyle::MaxHeight");
static_assert(offsetof(UCommonButtonStyle, NormalTextStyle) == 1504, "Offset mismatch for UCommonButtonStyle::NormalTextStyle");
static_assert(offsetof(UCommonButtonStyle, NormalHoveredTextStyle) == 1512, "Offset mismatch for UCommonButtonStyle::NormalHoveredTextStyle");
static_assert(offsetof(UCommonButtonStyle, SelectedTextStyle) == 1520, "Offset mismatch for UCommonButtonStyle::SelectedTextStyle");
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredTextStyle) == 1528, "Offset mismatch for UCommonButtonStyle::SelectedHoveredTextStyle");
static_assert(offsetof(UCommonButtonStyle, DisabledTextStyle) == 1536, "Offset mismatch for UCommonButtonStyle::DisabledTextStyle");
static_assert(offsetof(UCommonButtonStyle, PressedSlateSound) == 1544, "Offset mismatch for UCommonButtonStyle::PressedSlateSound");
static_assert(offsetof(UCommonButtonStyle, ClickedSlateSound) == 1568, "Offset mismatch for UCommonButtonStyle::ClickedSlateSound");
static_assert(offsetof(UCommonButtonStyle, SelectedPressedSlateSound) == 1592, "Offset mismatch for UCommonButtonStyle::SelectedPressedSlateSound");
static_assert(offsetof(UCommonButtonStyle, SelectedClickedSlateSound) == 1624, "Offset mismatch for UCommonButtonStyle::SelectedClickedSlateSound");
static_assert(offsetof(UCommonButtonStyle, LockedPressedSlateSound) == 1656, "Offset mismatch for UCommonButtonStyle::LockedPressedSlateSound");
static_assert(offsetof(UCommonButtonStyle, LockedClickedSlateSound) == 1688, "Offset mismatch for UCommonButtonStyle::LockedClickedSlateSound");
static_assert(offsetof(UCommonButtonStyle, HoveredSlateSound) == 1720, "Offset mismatch for UCommonButtonStyle::HoveredSlateSound");
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredSlateSound) == 1744, "Offset mismatch for UCommonButtonStyle::SelectedHoveredSlateSound");
static_assert(offsetof(UCommonButtonStyle, LockedHoveredSlateSound) == 1776, "Offset mismatch for UCommonButtonStyle::LockedHoveredSlateSound");

// /Script/CommonUI.CommonCustomNavigation
// Kind: Class; super: Border
class UCommonCustomNavigation
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    FScriptDelegate OnNavigationEvent; // 0x02E0 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UCommonCustomNavigation, OnNavigationEvent) == 736, "Offset mismatch for UCommonCustomNavigation::OnNavigationEvent");

// /Script/CommonUI.CommonDateTimeTextBlock
// Kind: Class; super: CommonTextBlock
class UCommonDateTimeTextBlock
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    std::uint8_t CustomTimespanFormat[0x10]; // 0x0350 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCustomTimespanLeadingZeros; // 0x0360 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonDateTimeTextBlock, CustomTimespanFormat) == 848, "Offset mismatch for UCommonDateTimeTextBlock::CustomTimespanFormat");
static_assert(offsetof(UCommonDateTimeTextBlock, bCustomTimespanLeadingZeros) == 864, "Offset mismatch for UCommonDateTimeTextBlock::bCustomTimespanLeadingZeros");

// /Script/CommonUI.CommonGameViewportClient
// Kind: Class; super: GameViewportClient
class UCommonGameViewportClient
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* ViewportConsole; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DebugProperties; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    std::int32_t MaxSplitscreenPlayers; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x006C
    void* World; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* GameInstance; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonGameViewportClient, ViewportConsole) == 64, "Offset mismatch for UCommonGameViewportClient::ViewportConsole");
static_assert(offsetof(UCommonGameViewportClient, DebugProperties) == 72, "Offset mismatch for UCommonGameViewportClient::DebugProperties");
static_assert(offsetof(UCommonGameViewportClient, MaxSplitscreenPlayers) == 104, "Offset mismatch for UCommonGameViewportClient::MaxSplitscreenPlayers");
static_assert(offsetof(UCommonGameViewportClient, World) == 120, "Offset mismatch for UCommonGameViewportClient::World");
static_assert(offsetof(UCommonGameViewportClient, GameInstance) == 128, "Offset mismatch for UCommonGameViewportClient::GameInstance");

// /Script/CommonUI.CommonGenericInputActionDataTable
// Kind: Class; super: DataTable
class UCommonGenericInputActionDataTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RowStruct; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0030
    std::uint8_t bIgnoreExtraFields; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bIgnoreMissingFields (shared storage)
    // 0x0040 BoolProperty bPreserveExistingValues (shared storage)
    // 0x0040 BoolProperty bStripFromClientBuilds (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    FString ImportKeyField; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCommonGenericInputActionDataTable, RowStruct) == 40, "Offset mismatch for UCommonGenericInputActionDataTable::RowStruct");
static_assert(offsetof(UCommonGenericInputActionDataTable, bIgnoreExtraFields) == 64, "Offset mismatch for UCommonGenericInputActionDataTable::bIgnoreExtraFields");
static_assert(offsetof(UCommonGenericInputActionDataTable, ImportKeyField) == 72, "Offset mismatch for UCommonGenericInputActionDataTable::ImportKeyField");

// /Script/CommonUI.CommonHardwareVisibilityBorder
// Kind: Class; super: CommonBorder
class UCommonHardwareVisibilityBorder
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    std::uint8_t VisibilityQuery[0x48]; // 0x0300 (Size: 0x48, Type: StructProperty)
    std::uint8_t VisibleType; // 0x0348 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenType; // 0x0349 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibilityQuery) == 768, "Offset mismatch for UCommonHardwareVisibilityBorder::VisibilityQuery");
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibleType) == 840, "Offset mismatch for UCommonHardwareVisibilityBorder::VisibleType");
static_assert(offsetof(UCommonHardwareVisibilityBorder, HiddenType) == 841, "Offset mismatch for UCommonHardwareVisibilityBorder::HiddenType");

// /Script/CommonUI.CommonHierarchicalScrollBox
// Kind: Class; super: ScrollBox
class UCommonHierarchicalScrollBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    float ScrollAnimationInterpolationSpeed; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTouchScrolling; // 0x0184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0185 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0186
    std::uint8_t AnalogMouseWheelKey[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsFocusable; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xF]; // 0x01A1
    std::uint8_t WidgetStyle[0x2F0]; // 0x01B0 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t WidgetBarStyle[0x650]; // 0x04A0 (Size: 0x650, Type: StructProperty)
    std::uint8_t orientation; // 0x0AF0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ScrollBarVisibility; // 0x0AF1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ConsumeMouseWheel; // 0x0AF2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x5]; // 0x0AF3
    std::uint8_t ScrollbarThickness[0x10]; // 0x0AF8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScrollBarPadding[0x10]; // 0x0B08 (Size: 0x10, Type: StructProperty)
    std::uint8_t AlwaysShowScrollbar; // 0x0B18 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AlwaysShowScrollbarTrack; // 0x0B19 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowOverscroll; // 0x0B1A (Size: 0x1, Type: BoolProperty)
    std::uint8_t BackPadScrolling; // 0x0B1B (Size: 0x1, Type: BoolProperty)
    std::uint8_t FrontPadScrolling; // 0x0B1C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimateWheelScrolling; // 0x0B1D (Size: 0x1, Type: BoolProperty)
    std::uint8_t NavigationDestination; // 0x0B1E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0B1F
    float NavigationScrollPadding; // 0x0B20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScrollWhenFocusChanges; // 0x0B24 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowRightClickDragScrolling; // 0x0B25 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0B26
    float WheelScrollMultiplier; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0B2C
    FMulticastInlineDelegate OnUserScrolled; // 0x0B30 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnScrollBarVisibilityChanged; // 0x0B40 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusReceived; // 0x0B50 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusLost; // 0x0B60 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusUpdated; // 0x0B70 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonHierarchicalScrollBox, ScrollAnimationInterpolationSpeed) == 384, "Offset mismatch for UCommonHierarchicalScrollBox::ScrollAnimationInterpolationSpeed");
static_assert(offsetof(UCommonHierarchicalScrollBox, bEnableTouchScrolling) == 388, "Offset mismatch for UCommonHierarchicalScrollBox::bEnableTouchScrolling");
static_assert(offsetof(UCommonHierarchicalScrollBox, bConsumePointerInput) == 389, "Offset mismatch for UCommonHierarchicalScrollBox::bConsumePointerInput");
static_assert(offsetof(UCommonHierarchicalScrollBox, AnalogMouseWheelKey) == 392, "Offset mismatch for UCommonHierarchicalScrollBox::AnalogMouseWheelKey");
static_assert(offsetof(UCommonHierarchicalScrollBox, bIsFocusable) == 416, "Offset mismatch for UCommonHierarchicalScrollBox::bIsFocusable");
static_assert(offsetof(UCommonHierarchicalScrollBox, WidgetStyle) == 432, "Offset mismatch for UCommonHierarchicalScrollBox::WidgetStyle");
static_assert(offsetof(UCommonHierarchicalScrollBox, WidgetBarStyle) == 1184, "Offset mismatch for UCommonHierarchicalScrollBox::WidgetBarStyle");
static_assert(offsetof(UCommonHierarchicalScrollBox, orientation) == 2800, "Offset mismatch for UCommonHierarchicalScrollBox::orientation");
static_assert(offsetof(UCommonHierarchicalScrollBox, ScrollBarVisibility) == 2801, "Offset mismatch for UCommonHierarchicalScrollBox::ScrollBarVisibility");
static_assert(offsetof(UCommonHierarchicalScrollBox, ConsumeMouseWheel) == 2802, "Offset mismatch for UCommonHierarchicalScrollBox::ConsumeMouseWheel");
static_assert(offsetof(UCommonHierarchicalScrollBox, ScrollbarThickness) == 2808, "Offset mismatch for UCommonHierarchicalScrollBox::ScrollbarThickness");
static_assert(offsetof(UCommonHierarchicalScrollBox, ScrollBarPadding) == 2824, "Offset mismatch for UCommonHierarchicalScrollBox::ScrollBarPadding");
static_assert(offsetof(UCommonHierarchicalScrollBox, AlwaysShowScrollbar) == 2840, "Offset mismatch for UCommonHierarchicalScrollBox::AlwaysShowScrollbar");
static_assert(offsetof(UCommonHierarchicalScrollBox, AlwaysShowScrollbarTrack) == 2841, "Offset mismatch for UCommonHierarchicalScrollBox::AlwaysShowScrollbarTrack");
static_assert(offsetof(UCommonHierarchicalScrollBox, AllowOverscroll) == 2842, "Offset mismatch for UCommonHierarchicalScrollBox::AllowOverscroll");
static_assert(offsetof(UCommonHierarchicalScrollBox, BackPadScrolling) == 2843, "Offset mismatch for UCommonHierarchicalScrollBox::BackPadScrolling");
static_assert(offsetof(UCommonHierarchicalScrollBox, FrontPadScrolling) == 2844, "Offset mismatch for UCommonHierarchicalScrollBox::FrontPadScrolling");
static_assert(offsetof(UCommonHierarchicalScrollBox, bAnimateWheelScrolling) == 2845, "Offset mismatch for UCommonHierarchicalScrollBox::bAnimateWheelScrolling");
static_assert(offsetof(UCommonHierarchicalScrollBox, NavigationDestination) == 2846, "Offset mismatch for UCommonHierarchicalScrollBox::NavigationDestination");
static_assert(offsetof(UCommonHierarchicalScrollBox, NavigationScrollPadding) == 2848, "Offset mismatch for UCommonHierarchicalScrollBox::NavigationScrollPadding");
static_assert(offsetof(UCommonHierarchicalScrollBox, ScrollWhenFocusChanges) == 2852, "Offset mismatch for UCommonHierarchicalScrollBox::ScrollWhenFocusChanges");
static_assert(offsetof(UCommonHierarchicalScrollBox, bAllowRightClickDragScrolling) == 2853, "Offset mismatch for UCommonHierarchicalScrollBox::bAllowRightClickDragScrolling");
static_assert(offsetof(UCommonHierarchicalScrollBox, WheelScrollMultiplier) == 2856, "Offset mismatch for UCommonHierarchicalScrollBox::WheelScrollMultiplier");
static_assert(offsetof(UCommonHierarchicalScrollBox, OnUserScrolled) == 2864, "Offset mismatch for UCommonHierarchicalScrollBox::OnUserScrolled");
static_assert(offsetof(UCommonHierarchicalScrollBox, OnScrollBarVisibilityChanged) == 2880, "Offset mismatch for UCommonHierarchicalScrollBox::OnScrollBarVisibilityChanged");
static_assert(offsetof(UCommonHierarchicalScrollBox, OnFocusReceived) == 2896, "Offset mismatch for UCommonHierarchicalScrollBox::OnFocusReceived");
static_assert(offsetof(UCommonHierarchicalScrollBox, OnFocusLost) == 2912, "Offset mismatch for UCommonHierarchicalScrollBox::OnFocusLost");
static_assert(offsetof(UCommonHierarchicalScrollBox, OnFocusUpdated) == 2928, "Offset mismatch for UCommonHierarchicalScrollBox::OnFocusUpdated");

// /Script/CommonUI.CommonInputActionDataProcessor
// Kind: Class; super: Object
class UCommonInputActionDataProcessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonInputMetadata
// Kind: Class; super: Object
class UCommonInputMetadata
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NavBarPriority; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsGenericInputAction; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonInputMetadata, NavBarPriority) == 40, "Offset mismatch for UCommonInputMetadata::NavBarPriority");
static_assert(offsetof(UCommonInputMetadata, bIsGenericInputAction) == 44, "Offset mismatch for UCommonInputMetadata::bIsGenericInputAction");

// /Script/CommonUI.CommonLazyImage
// Kind: Class; super: Image
class UCommonLazyImage
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    std::uint8_t LoadingBackgroundBrush[0xB0]; // 0x0290 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LoadingThrobberBrush[0xB0]; // 0x0340 (Size: 0xB0, Type: StructProperty)
    FName MaterialTextureParamName; // 0x03F0 (Size: 0x8, Type: NameProperty)
    FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x03F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonLazyImage, LoadingBackgroundBrush) == 656, "Offset mismatch for UCommonLazyImage::LoadingBackgroundBrush");
static_assert(offsetof(UCommonLazyImage, LoadingThrobberBrush) == 832, "Offset mismatch for UCommonLazyImage::LoadingThrobberBrush");
static_assert(offsetof(UCommonLazyImage, MaterialTextureParamName) == 1008, "Offset mismatch for UCommonLazyImage::MaterialTextureParamName");
static_assert(offsetof(UCommonLazyImage, BP_OnLoadingStateChanged) == 1016, "Offset mismatch for UCommonLazyImage::BP_OnLoadingStateChanged");

// /Script/CommonUI.CommonLazyWidget
// Kind: Class; super: Widget
class UCommonLazyWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TSoftClassPtr<void> WidgetClass; // 0x0168 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t LoadingThrobberBrush[0xB0]; // 0x0190 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LoadingBackgroundBrush[0xB0]; // 0x0240 (Size: 0xB0, Type: StructProperty)
    void* Content; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x02F8
    FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x0320 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonLazyWidget, WidgetClass) == 360, "Offset mismatch for UCommonLazyWidget::WidgetClass");
static_assert(offsetof(UCommonLazyWidget, LoadingThrobberBrush) == 400, "Offset mismatch for UCommonLazyWidget::LoadingThrobberBrush");
static_assert(offsetof(UCommonLazyWidget, LoadingBackgroundBrush) == 576, "Offset mismatch for UCommonLazyWidget::LoadingBackgroundBrush");
static_assert(offsetof(UCommonLazyWidget, Content) == 752, "Offset mismatch for UCommonLazyWidget::Content");
static_assert(offsetof(UCommonLazyWidget, BP_OnLoadingStateChanged) == 800, "Offset mismatch for UCommonLazyWidget::BP_OnLoadingStateChanged");

// /Script/CommonUI.CommonListView
// Kind: Class; super: ListView
class UCommonListView
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    std::uint8_t WidgetStyle[0xC0]; // 0x0460 (Size: 0xC0, Type: StructProperty)
    std::uint8_t ScrollBarStyle[0x650]; // 0x0520 (Size: 0x650, Type: StructProperty)
    std::uint8_t bEnableShadowBrush; // 0x0B70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0B71
    std::uint8_t ShadowBrushStyle[0x2F0]; // 0x0B80 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t orientation; // 0x0E70 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SelectionMode; // 0x0E71 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ConsumeMouseWheel; // 0x0E72 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClearSelectionOnClick; // 0x0E73 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFocusable; // 0x0E74 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearScrollVelocityOnSelection; // 0x0E75 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReturnFocusToSelection; // 0x0E76 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableProximateEntryNavigation; // 0x0E77 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScrollIntoViewAlignment; // 0x0E78 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0E79
    TArray<void*> ListItems; // 0x0E80 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0E90
    float HorizontalEntrySpacing; // 0x0EA0 (Size: 0x4, Type: FloatProperty)
    float VerticalEntrySpacing; // 0x0EA4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScrollBarPadding[0x10]; // 0x0EA8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate BP_OnEntryInitialized; // 0x0EB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemClicked; // 0x0EC8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x0ED8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragDetected; // 0x0EE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragEnter; // 0x0EF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragLeave; // 0x0F08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemAcceptDrop; // 0x0F18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragCancelled; // 0x0F28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewDraggingStateChanged; // 0x0F38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x0F48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x0F58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x0F68 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewScrolled; // 0x0F78 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewFinishedScrolling; // 0x0F88 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchStart; // 0x0F98 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchMove; // 0x0FA8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchEnd; // 0x0FB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FScriptDelegate BP_OnIsItemSelectableOrNavigable; // 0x0FC8 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UCommonListView, WidgetStyle) == 1120, "Offset mismatch for UCommonListView::WidgetStyle");
static_assert(offsetof(UCommonListView, ScrollBarStyle) == 1312, "Offset mismatch for UCommonListView::ScrollBarStyle");
static_assert(offsetof(UCommonListView, bEnableShadowBrush) == 2928, "Offset mismatch for UCommonListView::bEnableShadowBrush");
static_assert(offsetof(UCommonListView, ShadowBrushStyle) == 2944, "Offset mismatch for UCommonListView::ShadowBrushStyle");
static_assert(offsetof(UCommonListView, orientation) == 3696, "Offset mismatch for UCommonListView::orientation");
static_assert(offsetof(UCommonListView, SelectionMode) == 3697, "Offset mismatch for UCommonListView::SelectionMode");
static_assert(offsetof(UCommonListView, ConsumeMouseWheel) == 3698, "Offset mismatch for UCommonListView::ConsumeMouseWheel");
static_assert(offsetof(UCommonListView, bClearSelectionOnClick) == 3699, "Offset mismatch for UCommonListView::bClearSelectionOnClick");
static_assert(offsetof(UCommonListView, bIsFocusable) == 3700, "Offset mismatch for UCommonListView::bIsFocusable");
static_assert(offsetof(UCommonListView, bClearScrollVelocityOnSelection) == 3701, "Offset mismatch for UCommonListView::bClearScrollVelocityOnSelection");
static_assert(offsetof(UCommonListView, bReturnFocusToSelection) == 3702, "Offset mismatch for UCommonListView::bReturnFocusToSelection");
static_assert(offsetof(UCommonListView, bEnableProximateEntryNavigation) == 3703, "Offset mismatch for UCommonListView::bEnableProximateEntryNavigation");
static_assert(offsetof(UCommonListView, ScrollIntoViewAlignment) == 3704, "Offset mismatch for UCommonListView::ScrollIntoViewAlignment");
static_assert(offsetof(UCommonListView, ListItems) == 3712, "Offset mismatch for UCommonListView::ListItems");
static_assert(offsetof(UCommonListView, HorizontalEntrySpacing) == 3744, "Offset mismatch for UCommonListView::HorizontalEntrySpacing");
static_assert(offsetof(UCommonListView, VerticalEntrySpacing) == 3748, "Offset mismatch for UCommonListView::VerticalEntrySpacing");
static_assert(offsetof(UCommonListView, ScrollBarPadding) == 3752, "Offset mismatch for UCommonListView::ScrollBarPadding");
static_assert(offsetof(UCommonListView, BP_OnEntryInitialized) == 3768, "Offset mismatch for UCommonListView::BP_OnEntryInitialized");
static_assert(offsetof(UCommonListView, BP_OnItemClicked) == 3784, "Offset mismatch for UCommonListView::BP_OnItemClicked");
static_assert(offsetof(UCommonListView, BP_OnItemDoubleClicked) == 3800, "Offset mismatch for UCommonListView::BP_OnItemDoubleClicked");
static_assert(offsetof(UCommonListView, BP_OnItemDragDetected) == 3816, "Offset mismatch for UCommonListView::BP_OnItemDragDetected");
static_assert(offsetof(UCommonListView, BP_OnItemDragEnter) == 3832, "Offset mismatch for UCommonListView::BP_OnItemDragEnter");
static_assert(offsetof(UCommonListView, BP_OnItemDragLeave) == 3848, "Offset mismatch for UCommonListView::BP_OnItemDragLeave");
static_assert(offsetof(UCommonListView, BP_OnItemAcceptDrop) == 3864, "Offset mismatch for UCommonListView::BP_OnItemAcceptDrop");
static_assert(offsetof(UCommonListView, BP_OnItemDragCancelled) == 3880, "Offset mismatch for UCommonListView::BP_OnItemDragCancelled");
static_assert(offsetof(UCommonListView, BP_OnListViewDraggingStateChanged) == 3896, "Offset mismatch for UCommonListView::BP_OnListViewDraggingStateChanged");
static_assert(offsetof(UCommonListView, BP_OnItemIsHoveredChanged) == 3912, "Offset mismatch for UCommonListView::BP_OnItemIsHoveredChanged");
static_assert(offsetof(UCommonListView, BP_OnItemSelectionChanged) == 3928, "Offset mismatch for UCommonListView::BP_OnItemSelectionChanged");
static_assert(offsetof(UCommonListView, BP_OnItemScrolledIntoView) == 3944, "Offset mismatch for UCommonListView::BP_OnItemScrolledIntoView");
static_assert(offsetof(UCommonListView, BP_OnListViewScrolled) == 3960, "Offset mismatch for UCommonListView::BP_OnListViewScrolled");
static_assert(offsetof(UCommonListView, BP_OnListViewFinishedScrolling) == 3976, "Offset mismatch for UCommonListView::BP_OnListViewFinishedScrolling");
static_assert(offsetof(UCommonListView, BP_OnListViewTouchStart) == 3992, "Offset mismatch for UCommonListView::BP_OnListViewTouchStart");
static_assert(offsetof(UCommonListView, BP_OnListViewTouchMove) == 4008, "Offset mismatch for UCommonListView::BP_OnListViewTouchMove");
static_assert(offsetof(UCommonListView, BP_OnListViewTouchEnd) == 4024, "Offset mismatch for UCommonListView::BP_OnListViewTouchEnd");
static_assert(offsetof(UCommonListView, BP_OnIsItemSelectableOrNavigable) == 4040, "Offset mismatch for UCommonListView::BP_OnIsItemSelectableOrNavigable");

// /Script/CommonUI.CommonLoadGuard
// Kind: Class; super: ContentWidget
class UCommonLoadGuard
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t LoadingBackgroundBrush[0xB0]; // 0x0180 (Size: 0xB0, Type: StructProperty)
    std::uint8_t LoadingThrobberBrush[0xB0]; // 0x0230 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ThrobberAlignment; // 0x02E0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02E1
    std::uint8_t ThrobberPadding[0x14]; // 0x02E4 (Size: 0x14, Type: StructProperty)
    std::uint8_t LoadingText[0x10]; // 0x02F8 (Size: 0x10, Type: TextProperty)
    void* TextStyle; // 0x0308 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SpinnerMaterialPath[0x1]; // 0x0320 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonLoadGuard, LoadingBackgroundBrush) == 384, "Offset mismatch for UCommonLoadGuard::LoadingBackgroundBrush");
static_assert(offsetof(UCommonLoadGuard, LoadingThrobberBrush) == 560, "Offset mismatch for UCommonLoadGuard::LoadingThrobberBrush");
static_assert(offsetof(UCommonLoadGuard, ThrobberAlignment) == 736, "Offset mismatch for UCommonLoadGuard::ThrobberAlignment");
static_assert(offsetof(UCommonLoadGuard, ThrobberPadding) == 740, "Offset mismatch for UCommonLoadGuard::ThrobberPadding");
static_assert(offsetof(UCommonLoadGuard, LoadingText) == 760, "Offset mismatch for UCommonLoadGuard::LoadingText");
static_assert(offsetof(UCommonLoadGuard, TextStyle) == 776, "Offset mismatch for UCommonLoadGuard::TextStyle");
static_assert(offsetof(UCommonLoadGuard, BP_OnLoadingStateChanged) == 784, "Offset mismatch for UCommonLoadGuard::BP_OnLoadingStateChanged");
static_assert(offsetof(UCommonLoadGuard, SpinnerMaterialPath) == 800, "Offset mismatch for UCommonLoadGuard::SpinnerMaterialPath");

// /Script/CommonUI.CommonMappingContextMetadata
// Kind: Class; super: DataAsset
class UCommonMappingContextMetadata
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* EnhancedInputMetadata; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PerActionEnhancedInputMetadata; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCommonMappingContextMetadata, EnhancedInputMetadata) == 48, "Offset mismatch for UCommonMappingContextMetadata::EnhancedInputMetadata");
static_assert(offsetof(UCommonMappingContextMetadata, PerActionEnhancedInputMetadata) == 56, "Offset mismatch for UCommonMappingContextMetadata::PerActionEnhancedInputMetadata");

// /Script/CommonUI.CommonMappingContextMetadataInterface
// Kind: Class; super: Interface
class UCommonMappingContextMetadataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonNumericTextBlock
// Kind: Class; super: CommonTextBlock
class UCommonNumericTextBlock
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOutroEvent; // 0x0370 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x0380 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float CurrentNumericValue; // 0x0390 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NumericType; // 0x0394 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0395
    std::uint8_t FormattingSpecification[0x14]; // 0x0398 (Size: 0x14, Type: StructProperty)
    float EaseOutInterpolationExponent; // 0x03AC (Size: 0x4, Type: FloatProperty)
    float InterpolationUpdateInterval; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    float PostInterpolationShrinkDuration; // 0x03B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PerformSizeInterpolation; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPercentage; // 0x03B9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonNumericTextBlock, OnInterpolationStartedEvent) == 848, "Offset mismatch for UCommonNumericTextBlock::OnInterpolationStartedEvent");
static_assert(offsetof(UCommonNumericTextBlock, OnInterpolationUpdatedEvent) == 864, "Offset mismatch for UCommonNumericTextBlock::OnInterpolationUpdatedEvent");
static_assert(offsetof(UCommonNumericTextBlock, OnOutroEvent) == 880, "Offset mismatch for UCommonNumericTextBlock::OnOutroEvent");
static_assert(offsetof(UCommonNumericTextBlock, OnInterpolationEndedEvent) == 896, "Offset mismatch for UCommonNumericTextBlock::OnInterpolationEndedEvent");
static_assert(offsetof(UCommonNumericTextBlock, CurrentNumericValue) == 912, "Offset mismatch for UCommonNumericTextBlock::CurrentNumericValue");
static_assert(offsetof(UCommonNumericTextBlock, NumericType) == 916, "Offset mismatch for UCommonNumericTextBlock::NumericType");
static_assert(offsetof(UCommonNumericTextBlock, FormattingSpecification) == 920, "Offset mismatch for UCommonNumericTextBlock::FormattingSpecification");
static_assert(offsetof(UCommonNumericTextBlock, EaseOutInterpolationExponent) == 940, "Offset mismatch for UCommonNumericTextBlock::EaseOutInterpolationExponent");
static_assert(offsetof(UCommonNumericTextBlock, InterpolationUpdateInterval) == 944, "Offset mismatch for UCommonNumericTextBlock::InterpolationUpdateInterval");
static_assert(offsetof(UCommonNumericTextBlock, PostInterpolationShrinkDuration) == 948, "Offset mismatch for UCommonNumericTextBlock::PostInterpolationShrinkDuration");
static_assert(offsetof(UCommonNumericTextBlock, PerformSizeInterpolation) == 952, "Offset mismatch for UCommonNumericTextBlock::PerformSizeInterpolation");
static_assert(offsetof(UCommonNumericTextBlock, IsPercentage) == 953, "Offset mismatch for UCommonNumericTextBlock::IsPercentage");

// /Script/CommonUI.CommonPoolableWidgetInterface
// Kind: Class; super: Interface
class UCommonPoolableWidgetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonRichTextBlock
// Kind: Class; super: RichTextBlock
class UCommonRichTextBlock
{
public:
    std::uint8_t Pad_0000[0x7C0]; // 0x0000
    std::uint8_t InlineIconDisplayMode; // 0x07C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTintInlineIcon; // 0x07C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x07C2
    float MobileTextBlockScale; // 0x07C4 (Size: 0x4, Type: FloatProperty)
    void* DefaultTextStyleOverrideClass; // 0x07C8 (Size: 0x8, Type: ClassProperty)
    void* ScrollStyle; // 0x07D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScrollOrientation; // 0x07D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsScrollingEnabled; // 0x07D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayAllCaps; // 0x07DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoCollapseWithEmptyText; // 0x07DB (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonRichTextBlock, InlineIconDisplayMode) == 1984, "Offset mismatch for UCommonRichTextBlock::InlineIconDisplayMode");
static_assert(offsetof(UCommonRichTextBlock, bTintInlineIcon) == 1985, "Offset mismatch for UCommonRichTextBlock::bTintInlineIcon");
static_assert(offsetof(UCommonRichTextBlock, MobileTextBlockScale) == 1988, "Offset mismatch for UCommonRichTextBlock::MobileTextBlockScale");
static_assert(offsetof(UCommonRichTextBlock, DefaultTextStyleOverrideClass) == 1992, "Offset mismatch for UCommonRichTextBlock::DefaultTextStyleOverrideClass");
static_assert(offsetof(UCommonRichTextBlock, ScrollStyle) == 2000, "Offset mismatch for UCommonRichTextBlock::ScrollStyle");
static_assert(offsetof(UCommonRichTextBlock, ScrollOrientation) == 2008, "Offset mismatch for UCommonRichTextBlock::ScrollOrientation");
static_assert(offsetof(UCommonRichTextBlock, bIsScrollingEnabled) == 2009, "Offset mismatch for UCommonRichTextBlock::bIsScrollingEnabled");
static_assert(offsetof(UCommonRichTextBlock, bDisplayAllCaps) == 2010, "Offset mismatch for UCommonRichTextBlock::bDisplayAllCaps");
static_assert(offsetof(UCommonRichTextBlock, bAutoCollapseWithEmptyText) == 2011, "Offset mismatch for UCommonRichTextBlock::bAutoCollapseWithEmptyText");

// /Script/CommonUI.CommonRotator
// Kind: Class; super: CommonButtonBase
class UCommonRotator
{
public:
    std::uint8_t Pad_0000[0x15B0]; // 0x0000
    FMulticastInlineDelegate OnRotatedWithDirection; // 0x15B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRotated; // 0x15C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x15D0
    void* MyText; // 0x15E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonRotator, OnRotatedWithDirection) == 5552, "Offset mismatch for UCommonRotator::OnRotatedWithDirection");
static_assert(offsetof(UCommonRotator, OnRotated) == 5568, "Offset mismatch for UCommonRotator::OnRotated");
static_assert(offsetof(UCommonRotator, MyText) == 5608, "Offset mismatch for UCommonRotator::MyText");

// /Script/CommonUI.CommonTabListWidgetBase
// Kind: Class; super: CommonUserWidget
class UCommonTabListWidgetBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FMulticastInlineDelegate OnTabSelected; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTabButtonCreation; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTabButtonRemoval; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTabListRebuilt; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t NextTabInputActionData[0x10]; // 0x0370 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreviousTabInputActionData[0x10]; // 0x0380 (Size: 0x10, Type: StructProperty)
    void* NextTabEnhancedInputAction; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* PreviousTabEnhancedInputAction; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoListenForInput; // 0x03A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldWrapNavigation; // 0x03A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeferRebuildingTabList; // 0x03A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x03A3
    TWeakObjectPtr<void> LinkedSwitcher; // 0x03A4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03AC
    void* TabButtonGroup; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x03B8
    TMap<void*, void*> RegisteredTabsByID; // 0x03C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t TabButtonWidgetPool[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonTabListWidgetBase, OnTabSelected) == 816, "Offset mismatch for UCommonTabListWidgetBase::OnTabSelected");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabButtonCreation) == 832, "Offset mismatch for UCommonTabListWidgetBase::OnTabButtonCreation");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabButtonRemoval) == 848, "Offset mismatch for UCommonTabListWidgetBase::OnTabButtonRemoval");
static_assert(offsetof(UCommonTabListWidgetBase, OnTabListRebuilt) == 864, "Offset mismatch for UCommonTabListWidgetBase::OnTabListRebuilt");
static_assert(offsetof(UCommonTabListWidgetBase, NextTabInputActionData) == 880, "Offset mismatch for UCommonTabListWidgetBase::NextTabInputActionData");
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabInputActionData) == 896, "Offset mismatch for UCommonTabListWidgetBase::PreviousTabInputActionData");
static_assert(offsetof(UCommonTabListWidgetBase, NextTabEnhancedInputAction) == 912, "Offset mismatch for UCommonTabListWidgetBase::NextTabEnhancedInputAction");
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabEnhancedInputAction) == 920, "Offset mismatch for UCommonTabListWidgetBase::PreviousTabEnhancedInputAction");
static_assert(offsetof(UCommonTabListWidgetBase, bAutoListenForInput) == 928, "Offset mismatch for UCommonTabListWidgetBase::bAutoListenForInput");
static_assert(offsetof(UCommonTabListWidgetBase, bShouldWrapNavigation) == 929, "Offset mismatch for UCommonTabListWidgetBase::bShouldWrapNavigation");
static_assert(offsetof(UCommonTabListWidgetBase, bDeferRebuildingTabList) == 930, "Offset mismatch for UCommonTabListWidgetBase::bDeferRebuildingTabList");
static_assert(offsetof(UCommonTabListWidgetBase, LinkedSwitcher) == 932, "Offset mismatch for UCommonTabListWidgetBase::LinkedSwitcher");
static_assert(offsetof(UCommonTabListWidgetBase, TabButtonGroup) == 944, "Offset mismatch for UCommonTabListWidgetBase::TabButtonGroup");
static_assert(offsetof(UCommonTabListWidgetBase, RegisteredTabsByID) == 960, "Offset mismatch for UCommonTabListWidgetBase::RegisteredTabsByID");
static_assert(offsetof(UCommonTabListWidgetBase, TabButtonWidgetPool) == 976, "Offset mismatch for UCommonTabListWidgetBase::TabButtonWidgetPool");

// /Script/CommonUI.CommonTextBlock
// Kind: Class; super: TextBlock
class UCommonTextBlock
{
public:
    std::uint8_t Pad_0000[0x320]; // 0x0000
    float MobileFontSizeMultiplier; // 0x0320 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsScrollingEnabled; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayAllCaps; // 0x0325 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoCollapseWithEmptyText; // 0x0326 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0327
    void* Style; // 0x0328 (Size: 0x8, Type: ClassProperty)
    void* ScrollStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScrollOrientation; // 0x0338 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UCommonTextBlock, MobileFontSizeMultiplier) == 800, "Offset mismatch for UCommonTextBlock::MobileFontSizeMultiplier");
static_assert(offsetof(UCommonTextBlock, bIsScrollingEnabled) == 804, "Offset mismatch for UCommonTextBlock::bIsScrollingEnabled");
static_assert(offsetof(UCommonTextBlock, bDisplayAllCaps) == 805, "Offset mismatch for UCommonTextBlock::bDisplayAllCaps");
static_assert(offsetof(UCommonTextBlock, bAutoCollapseWithEmptyText) == 806, "Offset mismatch for UCommonTextBlock::bAutoCollapseWithEmptyText");
static_assert(offsetof(UCommonTextBlock, Style) == 808, "Offset mismatch for UCommonTextBlock::Style");
static_assert(offsetof(UCommonTextBlock, ScrollStyle) == 816, "Offset mismatch for UCommonTextBlock::ScrollStyle");
static_assert(offsetof(UCommonTextBlock, ScrollOrientation) == 824, "Offset mismatch for UCommonTextBlock::ScrollOrientation");

// /Script/CommonUI.CommonTextScrollStyle
// Kind: Class; super: Object
class UCommonTextScrollStyle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Speed; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float StartDelay; // 0x002C (Size: 0x4, Type: FloatProperty)
    float EndDelay; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float FadeInDelay; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float FadeOutDelay; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Clipping; // 0x003C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCommonTextScrollStyle, Speed) == 40, "Offset mismatch for UCommonTextScrollStyle::Speed");
static_assert(offsetof(UCommonTextScrollStyle, StartDelay) == 44, "Offset mismatch for UCommonTextScrollStyle::StartDelay");
static_assert(offsetof(UCommonTextScrollStyle, EndDelay) == 48, "Offset mismatch for UCommonTextScrollStyle::EndDelay");
static_assert(offsetof(UCommonTextScrollStyle, FadeInDelay) == 52, "Offset mismatch for UCommonTextScrollStyle::FadeInDelay");
static_assert(offsetof(UCommonTextScrollStyle, FadeOutDelay) == 56, "Offset mismatch for UCommonTextScrollStyle::FadeOutDelay");
static_assert(offsetof(UCommonTextScrollStyle, Clipping) == 60, "Offset mismatch for UCommonTextScrollStyle::Clipping");

// /Script/CommonUI.CommonTextStyle
// Kind: Class; super: Object
class UCommonTextStyle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Font[0x58]; // 0x0028 (Size: 0x58, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUsesDropShadow; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t ShadowOffset[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowColor[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t Margin[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t StrikeBrush[0xB0]; // 0x00D0 (Size: 0xB0, Type: StructProperty)
    float LineHeightPercentage; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ApplyLineHeightToBottomLine; // 0x0184 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonTextStyle, Font) == 40, "Offset mismatch for UCommonTextStyle::Font");
static_assert(offsetof(UCommonTextStyle, Color) == 128, "Offset mismatch for UCommonTextStyle::Color");
static_assert(offsetof(UCommonTextStyle, bUsesDropShadow) == 144, "Offset mismatch for UCommonTextStyle::bUsesDropShadow");
static_assert(offsetof(UCommonTextStyle, ShadowOffset) == 152, "Offset mismatch for UCommonTextStyle::ShadowOffset");
static_assert(offsetof(UCommonTextStyle, ShadowColor) == 168, "Offset mismatch for UCommonTextStyle::ShadowColor");
static_assert(offsetof(UCommonTextStyle, Margin) == 184, "Offset mismatch for UCommonTextStyle::Margin");
static_assert(offsetof(UCommonTextStyle, StrikeBrush) == 208, "Offset mismatch for UCommonTextStyle::StrikeBrush");
static_assert(offsetof(UCommonTextStyle, LineHeightPercentage) == 384, "Offset mismatch for UCommonTextStyle::LineHeightPercentage");
static_assert(offsetof(UCommonTextStyle, ApplyLineHeightToBottomLine) == 388, "Offset mismatch for UCommonTextStyle::ApplyLineHeightToBottomLine");

// /Script/CommonUI.CommonTileView
// Kind: Class; super: TileView
class UCommonTileView
{
public:
    std::uint8_t Pad_0000[0xFE0]; // 0x0000
    float EntryHeight; // 0x0FE0 (Size: 0x4, Type: FloatProperty)
    float EntryWidth; // 0x0FE4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TileAlignment; // 0x0FE8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideNumItemsPerLine; // 0x0FE9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0FEA
    std::int32_t NumItemsPerLine; // 0x0FEC (Size: 0x4, Type: IntProperty)
    std::uint8_t bWrapHorizontalNavigation; // 0x0FF0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScrollbarDisabledVisibility; // 0x0FF1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x16]; // 0x0FF2
    std::uint8_t bEntrySizeIncludesEntrySpacing; // 0x1008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonTileView, EntryHeight) == 4064, "Offset mismatch for UCommonTileView::EntryHeight");
static_assert(offsetof(UCommonTileView, EntryWidth) == 4068, "Offset mismatch for UCommonTileView::EntryWidth");
static_assert(offsetof(UCommonTileView, TileAlignment) == 4072, "Offset mismatch for UCommonTileView::TileAlignment");
static_assert(offsetof(UCommonTileView, bOverrideNumItemsPerLine) == 4073, "Offset mismatch for UCommonTileView::bOverrideNumItemsPerLine");
static_assert(offsetof(UCommonTileView, NumItemsPerLine) == 4076, "Offset mismatch for UCommonTileView::NumItemsPerLine");
static_assert(offsetof(UCommonTileView, bWrapHorizontalNavigation) == 4080, "Offset mismatch for UCommonTileView::bWrapHorizontalNavigation");
static_assert(offsetof(UCommonTileView, ScrollbarDisabledVisibility) == 4081, "Offset mismatch for UCommonTileView::ScrollbarDisabledVisibility");
static_assert(offsetof(UCommonTileView, bEntrySizeIncludesEntrySpacing) == 4104, "Offset mismatch for UCommonTileView::bEntrySizeIncludesEntrySpacing");

// /Script/CommonUI.CommonTreeView
// Kind: Class; super: TreeView
class UCommonTreeView
{
public:
    std::uint8_t Pad_0000[0xFF0]; // 0x0000
    FScriptDelegate BP_OnGetItemChildren; // 0x0FF0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x1000 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonTreeView, BP_OnGetItemChildren) == 4080, "Offset mismatch for UCommonTreeView::BP_OnGetItemChildren");
static_assert(offsetof(UCommonTreeView, BP_OnItemExpansionChanged) == 4096, "Offset mismatch for UCommonTreeView::BP_OnItemExpansionChanged");

// /Script/CommonUI.CommonUIActionRouterBase
// Kind: Class; super: LocalPlayerSubsystem
class UCommonUIActionRouterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonUIEditorSettings
// Kind: Class; super: Object
class UCommonUIEditorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TemplateTextStyle[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TemplateButtonStyle[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> TemplateBorderStyle; // 0x0068 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UCommonUIEditorSettings, TemplateTextStyle) == 40, "Offset mismatch for UCommonUIEditorSettings::TemplateTextStyle");
static_assert(offsetof(UCommonUIEditorSettings, TemplateButtonStyle) == 72, "Offset mismatch for UCommonUIEditorSettings::TemplateButtonStyle");
static_assert(offsetof(UCommonUIEditorSettings, TemplateBorderStyle) == 104, "Offset mismatch for UCommonUIEditorSettings::TemplateBorderStyle");

// /Script/CommonUI.CommonUIInputSettings
// Kind: Class; super: Object
class UCommonUIInputSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bLinkCursorToGamepadFocus; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t UIActionProcessingPriority; // 0x002C (Size: 0x4, Type: IntProperty)
    TArray<void*> InputActions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActionOverrides; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AnalogCursorSettings[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    TSoftClassPtr<void> DefaultVirtualPointerClass; // 0x0080 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UCommonUIInputSettings, bLinkCursorToGamepadFocus) == 40, "Offset mismatch for UCommonUIInputSettings::bLinkCursorToGamepadFocus");
static_assert(offsetof(UCommonUIInputSettings, UIActionProcessingPriority) == 44, "Offset mismatch for UCommonUIInputSettings::UIActionProcessingPriority");
static_assert(offsetof(UCommonUIInputSettings, InputActions) == 48, "Offset mismatch for UCommonUIInputSettings::InputActions");
static_assert(offsetof(UCommonUIInputSettings, ActionOverrides) == 64, "Offset mismatch for UCommonUIInputSettings::ActionOverrides");
static_assert(offsetof(UCommonUIInputSettings, AnalogCursorSettings) == 80, "Offset mismatch for UCommonUIInputSettings::AnalogCursorSettings");
static_assert(offsetof(UCommonUIInputSettings, DefaultVirtualPointerClass) == 128, "Offset mismatch for UCommonUIInputSettings::DefaultVirtualPointerClass");

// /Script/CommonUI.CommonUILibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCommonUILibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonUIRichTextData
// Kind: Class; super: Object
class UCommonUIRichTextData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InlineIconSet; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonUIRichTextData, InlineIconSet) == 40, "Offset mismatch for UCommonUIRichTextData::InlineIconSet");

// /Script/CommonUI.CommonUISettings
// Kind: Class; super: Object
class UCommonUISettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoLoadData; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t DefaultImageResourceObject[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultThrobberMaterial[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultRichTextDataClass[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> PlatformTraits; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CommonButtonAcceptKeyHandling; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x27]; // 0x00A1
    void* DefaultImageResourceObjectInstance; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* DefaultThrobberMaterialInstance; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x00D8
    std::uint8_t DefaultThrobberBrush[0xB0]; // 0x00E0 (Size: 0xB0, Type: StructProperty)
    void* RichTextDataInstance; // 0x0190 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonUISettings, bAutoLoadData) == 40, "Offset mismatch for UCommonUISettings::bAutoLoadData");
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObject) == 48, "Offset mismatch for UCommonUISettings::DefaultImageResourceObject");
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterial) == 80, "Offset mismatch for UCommonUISettings::DefaultThrobberMaterial");
static_assert(offsetof(UCommonUISettings, DefaultRichTextDataClass) == 112, "Offset mismatch for UCommonUISettings::DefaultRichTextDataClass");
static_assert(offsetof(UCommonUISettings, PlatformTraits) == 144, "Offset mismatch for UCommonUISettings::PlatformTraits");
static_assert(offsetof(UCommonUISettings, CommonButtonAcceptKeyHandling) == 160, "Offset mismatch for UCommonUISettings::CommonButtonAcceptKeyHandling");
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObjectInstance) == 200, "Offset mismatch for UCommonUISettings::DefaultImageResourceObjectInstance");
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterialInstance) == 208, "Offset mismatch for UCommonUISettings::DefaultThrobberMaterialInstance");
static_assert(offsetof(UCommonUISettings, DefaultThrobberBrush) == 224, "Offset mismatch for UCommonUISettings::DefaultThrobberBrush");
static_assert(offsetof(UCommonUISettings, RichTextDataInstance) == 400, "Offset mismatch for UCommonUISettings::RichTextDataInstance");

// /Script/CommonUI.CommonUISubsystemBase
// Kind: Class; super: GameInstanceSubsystem
class UCommonUISubsystemBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonUIVisibilitySubsystem
// Kind: Class; super: LocalPlayerSubsystem
class UCommonUIVisibilitySubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.CommonUserWidget
// Kind: Class; super: UserWidget
class UCommonUserWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t bDisplayInActionBar; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0309 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonUserWidget, bDisplayInActionBar) == 776, "Offset mismatch for UCommonUserWidget::bDisplayInActionBar");
static_assert(offsetof(UCommonUserWidget, bConsumePointerInput) == 777, "Offset mismatch for UCommonUserWidget::bConsumePointerInput");

// /Script/CommonUI.CommonVideoPlayer
// Kind: Class; super: Widget
class UCommonVideoPlayer
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    void* Video; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMatchSize; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0171
    void* MediaPlayer; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* MediaTexture; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* VideoMaterial; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    void* SoundComponent; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0198
    std::uint8_t VideoBrush[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonVideoPlayer, Video) == 360, "Offset mismatch for UCommonVideoPlayer::Video");
static_assert(offsetof(UCommonVideoPlayer, bMatchSize) == 368, "Offset mismatch for UCommonVideoPlayer::bMatchSize");
static_assert(offsetof(UCommonVideoPlayer, MediaPlayer) == 376, "Offset mismatch for UCommonVideoPlayer::MediaPlayer");
static_assert(offsetof(UCommonVideoPlayer, MediaTexture) == 384, "Offset mismatch for UCommonVideoPlayer::MediaTexture");
static_assert(offsetof(UCommonVideoPlayer, VideoMaterial) == 392, "Offset mismatch for UCommonVideoPlayer::VideoMaterial");
static_assert(offsetof(UCommonVideoPlayer, SoundComponent) == 400, "Offset mismatch for UCommonVideoPlayer::SoundComponent");
static_assert(offsetof(UCommonVideoPlayer, VideoBrush) == 416, "Offset mismatch for UCommonVideoPlayer::VideoBrush");

// /Script/CommonUI.CommonVisibilitySwitcher
// Kind: Class; super: Overlay
class UCommonVisibilitySwitcher
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t ShownVisibility; // 0x0190 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0191
    std::int32_t ActiveWidgetIndex; // 0x0194 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutoActivateSlot; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateFirstSlotOnAdding; // 0x0199 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonVisibilitySwitcher, ShownVisibility) == 400, "Offset mismatch for UCommonVisibilitySwitcher::ShownVisibility");
static_assert(offsetof(UCommonVisibilitySwitcher, ActiveWidgetIndex) == 404, "Offset mismatch for UCommonVisibilitySwitcher::ActiveWidgetIndex");
static_assert(offsetof(UCommonVisibilitySwitcher, bAutoActivateSlot) == 408, "Offset mismatch for UCommonVisibilitySwitcher::bAutoActivateSlot");
static_assert(offsetof(UCommonVisibilitySwitcher, bActivateFirstSlotOnAdding) == 409, "Offset mismatch for UCommonVisibilitySwitcher::bActivateFirstSlotOnAdding");

// /Script/CommonUI.CommonVisibilitySwitcherSlot
// Kind: Class; super: OverlaySlot
class UCommonVisibilitySwitcherSlot
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UCommonVisibilitySwitcherSlot, Padding) == 64, "Offset mismatch for UCommonVisibilitySwitcherSlot::Padding");
static_assert(offsetof(UCommonVisibilitySwitcherSlot, HorizontalAlignment) == 80, "Offset mismatch for UCommonVisibilitySwitcherSlot::HorizontalAlignment");
static_assert(offsetof(UCommonVisibilitySwitcherSlot, VerticalAlignment) == 81, "Offset mismatch for UCommonVisibilitySwitcherSlot::VerticalAlignment");

// /Script/CommonUI.CommonVisualAttachment
// Kind: Class; super: SizeBox
class UCommonVisualAttachment
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t ContentAnchor[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonVisualAttachment, ContentAnchor) == 440, "Offset mismatch for UCommonVisualAttachment::ContentAnchor");

// /Script/CommonUI.CommonWidgetCarousel
// Kind: Class; super: PanelWidget
class UCommonWidgetCarousel
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::int32_t ActiveWidgetIndex; // 0x0180 (Size: 0x4, Type: IntProperty)
    float MoveSpeed; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCacheChildren; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0189
    FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x0190 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCommonWidgetCarousel, ActiveWidgetIndex) == 384, "Offset mismatch for UCommonWidgetCarousel::ActiveWidgetIndex");
static_assert(offsetof(UCommonWidgetCarousel, MoveSpeed) == 388, "Offset mismatch for UCommonWidgetCarousel::MoveSpeed");
static_assert(offsetof(UCommonWidgetCarousel, bCacheChildren) == 392, "Offset mismatch for UCommonWidgetCarousel::bCacheChildren");
static_assert(offsetof(UCommonWidgetCarousel, OnCurrentPageIndexChanged) == 400, "Offset mismatch for UCommonWidgetCarousel::OnCurrentPageIndexChanged");

// /Script/CommonUI.CommonWidgetCarouselNavBar
// Kind: Class; super: Widget
class UCommonWidgetCarouselNavBar
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    void* ButtonWidgetType; // 0x0168 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ButtonPadding[0x20]; // 0x0170 (Size: 0x20, Type: StructProperty)
    void* LinkedCarousel; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Buttons; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonWidgetType) == 360, "Offset mismatch for UCommonWidgetCarouselNavBar::ButtonWidgetType");
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonPadding) == 368, "Offset mismatch for UCommonWidgetCarouselNavBar::ButtonPadding");
static_assert(offsetof(UCommonWidgetCarouselNavBar, LinkedCarousel) == 400, "Offset mismatch for UCommonWidgetCarouselNavBar::LinkedCarousel");
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonGroup) == 408, "Offset mismatch for UCommonWidgetCarouselNavBar::ButtonGroup");
static_assert(offsetof(UCommonWidgetCarouselNavBar, Buttons) == 416, "Offset mismatch for UCommonWidgetCarouselNavBar::Buttons");

// /Script/CommonUI.CommonWidgetGroupBase
// Kind: Class; super: Object
class UCommonWidgetGroupBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.LoadGuardSlot
// Kind: Class; super: PanelSlot
class ULoadGuardSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0049 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULoadGuardSlot, Padding) == 56, "Offset mismatch for ULoadGuardSlot::Padding");
static_assert(offsetof(ULoadGuardSlot, HorizontalAlignment) == 72, "Offset mismatch for ULoadGuardSlot::HorizontalAlignment");
static_assert(offsetof(ULoadGuardSlot, VerticalAlignment) == 73, "Offset mismatch for ULoadGuardSlot::VerticalAlignment");

// /Script/CommonUI.UCommonVisibilityWidgetBase
// Kind: Class; super: CommonBorder
class UUCommonVisibilityWidgetBase
{
public:
    std::uint8_t Pad_0000[0x300]; // 0x0000
    TMap<void*, void*> VisibilityControls; // 0x0300 (Size: 0x10, Type: MapProperty)
    std::uint8_t bShowForGamepad; // 0x0310 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForMouseAndKeyboard; // 0x0311 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowForTouch; // 0x0312 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VisibleType; // 0x0313 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HiddenType; // 0x0314 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibilityControls) == 768, "Offset mismatch for UUCommonVisibilityWidgetBase::VisibilityControls");
static_assert(offsetof(UUCommonVisibilityWidgetBase, bShowForGamepad) == 784, "Offset mismatch for UUCommonVisibilityWidgetBase::bShowForGamepad");
static_assert(offsetof(UUCommonVisibilityWidgetBase, bShowForMouseAndKeyboard) == 785, "Offset mismatch for UUCommonVisibilityWidgetBase::bShowForMouseAndKeyboard");
static_assert(offsetof(UUCommonVisibilityWidgetBase, bShowForTouch) == 786, "Offset mismatch for UUCommonVisibilityWidgetBase::bShowForTouch");
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibleType) == 787, "Offset mismatch for UUCommonVisibilityWidgetBase::VisibleType");
static_assert(offsetof(UUCommonVisibilityWidgetBase, HiddenType) == 788, "Offset mismatch for UUCommonVisibilityWidgetBase::HiddenType");

// /Script/CommonUI.VirtualPointerVisualStateInterface
// Kind: Class; super: Interface
class UVirtualPointerVisualStateInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CommonUI.WidgetLockedStateRegistration
// Kind: Class; super: WidgetBinaryStateRegistration
class UWidgetLockedStateRegistration
{
public:
    std::uint8_t Opaque[1];
};
