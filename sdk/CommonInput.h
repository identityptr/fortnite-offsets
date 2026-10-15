/**
 * decamp dumper generated SDK
 * Package: /Script/CommonInput
 */
#pragma once
#include "Basic.h"

// /Script/CommonInput.CommonInputKeyBrushConfiguration
// Kind: ScriptStruct; super: none
struct FCommonInputKeyBrushConfiguration
{
public:
    std::uint8_t Key[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t KeyBrush[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonInputKeyBrushConfiguration, Key) == 0, "Offset mismatch for FCommonInputKeyBrushConfiguration::Key");
static_assert(offsetof(FCommonInputKeyBrushConfiguration, KeyBrush) == 32, "Offset mismatch for FCommonInputKeyBrushConfiguration::KeyBrush");

// /Script/CommonInput.CommonInputKeySetBrushConfiguration
// Kind: ScriptStruct; super: none
struct FCommonInputKeySetBrushConfiguration
{
public:
    TArray<void*> Keys; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyBrush[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCommonInputKeySetBrushConfiguration, Keys) == 0, "Offset mismatch for FCommonInputKeySetBrushConfiguration::Keys");
static_assert(offsetof(FCommonInputKeySetBrushConfiguration, KeyBrush) == 16, "Offset mismatch for FCommonInputKeySetBrushConfiguration::KeyBrush");

// /Script/CommonInput.CommonInputPlatformBaseData
// Kind: ScriptStruct; super: none
struct FCommonInputPlatformBaseData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DefaultInputType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSupportsMouseAndKeyboard; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsGamepad; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    std::uint8_t DefaultGamepadName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanChangeGamepadType; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsTouch; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0012
    TArray<void*> ControllerData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControllerDataClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCommonInputPlatformBaseData, DefaultInputType) == 8, "Offset mismatch for FCommonInputPlatformBaseData::DefaultInputType");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsMouseAndKeyboard) == 9, "Offset mismatch for FCommonInputPlatformBaseData::bSupportsMouseAndKeyboard");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsGamepad) == 10, "Offset mismatch for FCommonInputPlatformBaseData::bSupportsGamepad");
static_assert(offsetof(FCommonInputPlatformBaseData, DefaultGamepadName) == 12, "Offset mismatch for FCommonInputPlatformBaseData::DefaultGamepadName");
static_assert(offsetof(FCommonInputPlatformBaseData, bCanChangeGamepadType) == 16, "Offset mismatch for FCommonInputPlatformBaseData::bCanChangeGamepadType");
static_assert(offsetof(FCommonInputPlatformBaseData, bSupportsTouch) == 17, "Offset mismatch for FCommonInputPlatformBaseData::bSupportsTouch");
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerData) == 24, "Offset mismatch for FCommonInputPlatformBaseData::ControllerData");
static_assert(offsetof(FCommonInputPlatformBaseData, ControllerDataClasses) == 40, "Offset mismatch for FCommonInputPlatformBaseData::ControllerDataClasses");

// /Script/CommonInput.InputDeviceIdentifierPair
// Kind: ScriptStruct; super: none
struct FInputDeviceIdentifierPair
{
public:
    FName InputDeviceName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString HardwareDeviceIdentifier; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInputDeviceIdentifierPair, InputDeviceName) == 0, "Offset mismatch for FInputDeviceIdentifierPair::InputDeviceName");
static_assert(offsetof(FInputDeviceIdentifierPair, HardwareDeviceIdentifier) == 8, "Offset mismatch for FInputDeviceIdentifierPair::HardwareDeviceIdentifier");

// /Script/CommonInput.InputHoldData
// Kind: ScriptStruct; super: none
struct FInputHoldData
{
public:
    float HoldTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float HoldRollbackTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInputHoldData, HoldTime) == 0, "Offset mismatch for FInputHoldData::HoldTime");
static_assert(offsetof(FInputHoldData, HoldRollbackTime) == 4, "Offset mismatch for FInputHoldData::HoldRollbackTime");

// /Script/CommonInput.CommonInputActionDomain
// Kind: Class; super: DataAsset
class UCommonInputActionDomain
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Behavior; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t InnerBehavior; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    std::uint8_t bUseActionDomainDesiredInputConfig; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InputMode; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MouseCaptureMode; // 0x0032 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCommonInputActionDomain, Behavior) == 40, "Offset mismatch for UCommonInputActionDomain::Behavior");
static_assert(offsetof(UCommonInputActionDomain, InnerBehavior) == 44, "Offset mismatch for UCommonInputActionDomain::InnerBehavior");
static_assert(offsetof(UCommonInputActionDomain, bUseActionDomainDesiredInputConfig) == 48, "Offset mismatch for UCommonInputActionDomain::bUseActionDomainDesiredInputConfig");
static_assert(offsetof(UCommonInputActionDomain, InputMode) == 49, "Offset mismatch for UCommonInputActionDomain::InputMode");
static_assert(offsetof(UCommonInputActionDomain, MouseCaptureMode) == 50, "Offset mismatch for UCommonInputActionDomain::MouseCaptureMode");

// /Script/CommonInput.CommonInputActionDomainTable
// Kind: Class; super: DataAsset
class UCommonInputActionDomainTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ActionDomains; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InputMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MouseCaptureMode; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHideCursorDuringViewportCapture; // 0x003A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonInputActionDomainTable, ActionDomains) == 40, "Offset mismatch for UCommonInputActionDomainTable::ActionDomains");
static_assert(offsetof(UCommonInputActionDomainTable, InputMode) == 56, "Offset mismatch for UCommonInputActionDomainTable::InputMode");
static_assert(offsetof(UCommonInputActionDomainTable, MouseCaptureMode) == 57, "Offset mismatch for UCommonInputActionDomainTable::MouseCaptureMode");
static_assert(offsetof(UCommonInputActionDomainTable, bHideCursorDuringViewportCapture) == 58, "Offset mismatch for UCommonInputActionDomainTable::bHideCursorDuringViewportCapture");

// /Script/CommonInput.CommonInputBaseControllerData
// Kind: Class; super: Object
class UCommonInputBaseControllerData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InputType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t GamepadName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t GamepadDisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadCategory[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t GamepadPlatformName[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    TArray<void*> GamepadHardwareIdMapping; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ControllerTexture[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ControllerButtonMaskTexture[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> InputBrushDataMap; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputBrushKeySets; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCommonInputBaseControllerData, InputType) == 40, "Offset mismatch for UCommonInputBaseControllerData::InputType");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadName) == 44, "Offset mismatch for UCommonInputBaseControllerData::GamepadName");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadDisplayName) == 48, "Offset mismatch for UCommonInputBaseControllerData::GamepadDisplayName");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadCategory) == 64, "Offset mismatch for UCommonInputBaseControllerData::GamepadCategory");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadPlatformName) == 80, "Offset mismatch for UCommonInputBaseControllerData::GamepadPlatformName");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadHardwareIdMapping) == 96, "Offset mismatch for UCommonInputBaseControllerData::GamepadHardwareIdMapping");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerTexture) == 112, "Offset mismatch for UCommonInputBaseControllerData::ControllerTexture");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerButtonMaskTexture) == 144, "Offset mismatch for UCommonInputBaseControllerData::ControllerButtonMaskTexture");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushDataMap) == 176, "Offset mismatch for UCommonInputBaseControllerData::InputBrushDataMap");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushKeySets) == 192, "Offset mismatch for UCommonInputBaseControllerData::InputBrushKeySets");

// /Script/CommonInput.CommonInputPlatformSettings
// Kind: Class; super: PlatformSettings
class UCommonInputPlatformSettings
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t DefaultInputType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSupportsMouseAndKeyboard; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsTouch; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsGamepad; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultGamepadName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanChangeGamepadType; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> ControllerData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControllerDataClasses; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCommonInputPlatformSettings, DefaultInputType) == 64, "Offset mismatch for UCommonInputPlatformSettings::DefaultInputType");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsMouseAndKeyboard) == 65, "Offset mismatch for UCommonInputPlatformSettings::bSupportsMouseAndKeyboard");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsTouch) == 66, "Offset mismatch for UCommonInputPlatformSettings::bSupportsTouch");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsGamepad) == 67, "Offset mismatch for UCommonInputPlatformSettings::bSupportsGamepad");
static_assert(offsetof(UCommonInputPlatformSettings, DefaultGamepadName) == 68, "Offset mismatch for UCommonInputPlatformSettings::DefaultGamepadName");
static_assert(offsetof(UCommonInputPlatformSettings, bCanChangeGamepadType) == 72, "Offset mismatch for UCommonInputPlatformSettings::bCanChangeGamepadType");
static_assert(offsetof(UCommonInputPlatformSettings, ControllerData) == 80, "Offset mismatch for UCommonInputPlatformSettings::ControllerData");
static_assert(offsetof(UCommonInputPlatformSettings, ControllerDataClasses) == 96, "Offset mismatch for UCommonInputPlatformSettings::ControllerDataClasses");

// /Script/CommonInput.CommonInputSettings
// Kind: Class; super: DeveloperSettings
class UCommonInputSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InputData[0x20]; // 0x0030 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PlatformInput[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> CommonInputPlatformData; // 0x0060 (Size: 0x10, Type: MapProperty)
    std::uint8_t bEnableInputMethodThrashingProtection; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    std::int32_t InputMethodThrashingLimit; // 0x0074 (Size: 0x4, Type: IntProperty)
    double InputMethodThrashingWindowInSeconds; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double InputMethodThrashingCooldownInSeconds; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bAllowOutOfFocusDeviceInput; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDefaultInputConfig; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableEnhancedInputSupport; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAutomaticGamepadTypeDetection; // 0x008B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x008C
    std::uint8_t ActionDomainTable[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> PlatformNameUpgrades; // 0x00B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x8]; // 0x00C0
    void* InputDataClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* ActionDomainTablePtr; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonInputSettings, InputData) == 48, "Offset mismatch for UCommonInputSettings::InputData");
static_assert(offsetof(UCommonInputSettings, PlatformInput) == 80, "Offset mismatch for UCommonInputSettings::PlatformInput");
static_assert(offsetof(UCommonInputSettings, CommonInputPlatformData) == 96, "Offset mismatch for UCommonInputSettings::CommonInputPlatformData");
static_assert(offsetof(UCommonInputSettings, bEnableInputMethodThrashingProtection) == 112, "Offset mismatch for UCommonInputSettings::bEnableInputMethodThrashingProtection");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingLimit) == 116, "Offset mismatch for UCommonInputSettings::InputMethodThrashingLimit");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingWindowInSeconds) == 120, "Offset mismatch for UCommonInputSettings::InputMethodThrashingWindowInSeconds");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingCooldownInSeconds) == 128, "Offset mismatch for UCommonInputSettings::InputMethodThrashingCooldownInSeconds");
static_assert(offsetof(UCommonInputSettings, bAllowOutOfFocusDeviceInput) == 136, "Offset mismatch for UCommonInputSettings::bAllowOutOfFocusDeviceInput");
static_assert(offsetof(UCommonInputSettings, bEnableDefaultInputConfig) == 137, "Offset mismatch for UCommonInputSettings::bEnableDefaultInputConfig");
static_assert(offsetof(UCommonInputSettings, bEnableEnhancedInputSupport) == 138, "Offset mismatch for UCommonInputSettings::bEnableEnhancedInputSupport");
static_assert(offsetof(UCommonInputSettings, bEnableAutomaticGamepadTypeDetection) == 139, "Offset mismatch for UCommonInputSettings::bEnableAutomaticGamepadTypeDetection");
static_assert(offsetof(UCommonInputSettings, ActionDomainTable) == 144, "Offset mismatch for UCommonInputSettings::ActionDomainTable");
static_assert(offsetof(UCommonInputSettings, PlatformNameUpgrades) == 176, "Offset mismatch for UCommonInputSettings::PlatformNameUpgrades");
static_assert(offsetof(UCommonInputSettings, InputDataClass) == 200, "Offset mismatch for UCommonInputSettings::InputDataClass");
static_assert(offsetof(UCommonInputSettings, ActionDomainTablePtr) == 208, "Offset mismatch for UCommonInputSettings::ActionDomainTablePtr");

// /Script/CommonInput.CommonInputSubsystem
// Kind: Class; super: LocalPlayerSubsystem
class UCommonInputSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnInputMethodChanged; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t NumberOfInputMethodChangesRecently; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    double LastInputMethodChangeTime; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    double LastTimeInputMethodThrashingBegan; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RawInputType; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CurrentInputType; // 0x0091 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0092
    std::uint8_t GamepadInputType[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    std::uint8_t bInputMethodLockedByThrashing; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0099
    TMap<void*, void*> CurrentInputLocks; // 0x00A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x8]; // 0x00B0
    void* ActionDomainTable; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsGamepadSimulatedClick; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCommonInputSubsystem, OnInputMethodChanged) == 104, "Offset mismatch for UCommonInputSubsystem::OnInputMethodChanged");
static_assert(offsetof(UCommonInputSubsystem, NumberOfInputMethodChangesRecently) == 120, "Offset mismatch for UCommonInputSubsystem::NumberOfInputMethodChangesRecently");
static_assert(offsetof(UCommonInputSubsystem, LastInputMethodChangeTime) == 128, "Offset mismatch for UCommonInputSubsystem::LastInputMethodChangeTime");
static_assert(offsetof(UCommonInputSubsystem, LastTimeInputMethodThrashingBegan) == 136, "Offset mismatch for UCommonInputSubsystem::LastTimeInputMethodThrashingBegan");
static_assert(offsetof(UCommonInputSubsystem, RawInputType) == 144, "Offset mismatch for UCommonInputSubsystem::RawInputType");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputType) == 145, "Offset mismatch for UCommonInputSubsystem::CurrentInputType");
static_assert(offsetof(UCommonInputSubsystem, GamepadInputType) == 148, "Offset mismatch for UCommonInputSubsystem::GamepadInputType");
static_assert(offsetof(UCommonInputSubsystem, bInputMethodLockedByThrashing) == 152, "Offset mismatch for UCommonInputSubsystem::bInputMethodLockedByThrashing");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputLocks) == 160, "Offset mismatch for UCommonInputSubsystem::CurrentInputLocks");
static_assert(offsetof(UCommonInputSubsystem, ActionDomainTable) == 184, "Offset mismatch for UCommonInputSubsystem::ActionDomainTable");
static_assert(offsetof(UCommonInputSubsystem, bIsGamepadSimulatedClick) == 192, "Offset mismatch for UCommonInputSubsystem::bIsGamepadSimulatedClick");

// /Script/CommonInput.CommonUIHoldData
// Kind: Class; super: Object
class UCommonUIHoldData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t KeyboardAndMouse[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Gamepad[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t Touch[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCommonUIHoldData, KeyboardAndMouse) == 40, "Offset mismatch for UCommonUIHoldData::KeyboardAndMouse");
static_assert(offsetof(UCommonUIHoldData, Gamepad) == 48, "Offset mismatch for UCommonUIHoldData::Gamepad");
static_assert(offsetof(UCommonUIHoldData, Touch) == 56, "Offset mismatch for UCommonUIHoldData::Touch");

// /Script/CommonInput.CommonUIInputData
// Kind: Class; super: Object
class UCommonUIInputData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultClickAction[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultBackAction[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefaultHoldData[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    void* EnhancedInputClickAction; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* EnhancedInputBackAction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonUIInputData, DefaultClickAction) == 40, "Offset mismatch for UCommonUIInputData::DefaultClickAction");
static_assert(offsetof(UCommonUIInputData, DefaultBackAction) == 56, "Offset mismatch for UCommonUIInputData::DefaultBackAction");
static_assert(offsetof(UCommonUIInputData, DefaultHoldData) == 72, "Offset mismatch for UCommonUIInputData::DefaultHoldData");
static_assert(offsetof(UCommonUIInputData, EnhancedInputClickAction) == 104, "Offset mismatch for UCommonUIInputData::EnhancedInputClickAction");
static_assert(offsetof(UCommonUIInputData, EnhancedInputBackAction) == 112, "Offset mismatch for UCommonUIInputData::EnhancedInputBackAction");
