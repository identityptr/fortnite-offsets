/**
 * decamp dumper generated SDK
 * Package: /Script/GameInputBase
 */
#pragma once
#include "Basic.h"

// /Script/GameInputBase.GameInputControllerAxisData
// Kind: ScriptStruct; super: none
struct FGameInputControllerAxisData
{
public:
    std::uint8_t KeyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float DeadZone; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Scalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPackedPositveAndNegative; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameInputControllerAxisData, KeyName) == 0, "Offset mismatch for FGameInputControllerAxisData::KeyName");
static_assert(offsetof(FGameInputControllerAxisData, DeadZone) == 4, "Offset mismatch for FGameInputControllerAxisData::DeadZone");
static_assert(offsetof(FGameInputControllerAxisData, Scalar) == 8, "Offset mismatch for FGameInputControllerAxisData::Scalar");
static_assert(offsetof(FGameInputControllerAxisData, bIsPackedPositveAndNegative) == 12, "Offset mismatch for FGameInputControllerAxisData::bIsPackedPositveAndNegative");

// /Script/GameInputBase.GameInputDeviceConfiguration
// Kind: ScriptStruct; super: none
struct FGameInputDeviceConfiguration
{
public:
    std::uint8_t DeviceIdentifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bOverrideHardwareDeviceIdString; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    FString OverriddenHardwareDeviceId; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t bProcessControllerButtons; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessControllerSwitchState; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessControllerAxis; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x001B
    TMap<void*, void*> ControllerButtonMappingData; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ControllerAxisMappingData; // 0x0030 (Size: 0x10, Type: MapProperty)
    std::uint8_t bProcessRawReportData; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0041
    std::uint32_t RawReportReadingId; // 0x0044 (Size: 0x4, Type: UInt32Property)
    TMap<void*, void*> RawReportMappingData; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FGameInputDeviceConfiguration, DeviceIdentifier) == 0, "Offset mismatch for FGameInputDeviceConfiguration::DeviceIdentifier");
static_assert(offsetof(FGameInputDeviceConfiguration, bOverrideHardwareDeviceIdString) == 4, "Offset mismatch for FGameInputDeviceConfiguration::bOverrideHardwareDeviceIdString");
static_assert(offsetof(FGameInputDeviceConfiguration, OverriddenHardwareDeviceId) == 8, "Offset mismatch for FGameInputDeviceConfiguration::OverriddenHardwareDeviceId");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessControllerButtons) == 24, "Offset mismatch for FGameInputDeviceConfiguration::bProcessControllerButtons");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessControllerSwitchState) == 25, "Offset mismatch for FGameInputDeviceConfiguration::bProcessControllerSwitchState");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessControllerAxis) == 26, "Offset mismatch for FGameInputDeviceConfiguration::bProcessControllerAxis");
static_assert(offsetof(FGameInputDeviceConfiguration, ControllerButtonMappingData) == 32, "Offset mismatch for FGameInputDeviceConfiguration::ControllerButtonMappingData");
static_assert(offsetof(FGameInputDeviceConfiguration, ControllerAxisMappingData) == 48, "Offset mismatch for FGameInputDeviceConfiguration::ControllerAxisMappingData");
static_assert(offsetof(FGameInputDeviceConfiguration, bProcessRawReportData) == 64, "Offset mismatch for FGameInputDeviceConfiguration::bProcessRawReportData");
static_assert(offsetof(FGameInputDeviceConfiguration, RawReportReadingId) == 68, "Offset mismatch for FGameInputDeviceConfiguration::RawReportReadingId");
static_assert(offsetof(FGameInputDeviceConfiguration, RawReportMappingData) == 72, "Offset mismatch for FGameInputDeviceConfiguration::RawReportMappingData");

// /Script/GameInputBase.GameInputDeviceIdentifier
// Kind: ScriptStruct; super: none
struct FGameInputDeviceIdentifier
{
public:
    std::uint16_t VendorId; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t ProductId; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FGameInputDeviceIdentifier, VendorId) == 0, "Offset mismatch for FGameInputDeviceIdentifier::VendorId");
static_assert(offsetof(FGameInputDeviceIdentifier, ProductId) == 2, "Offset mismatch for FGameInputDeviceIdentifier::ProductId");

// /Script/GameInputBase.GameInputRawDeviceReportData
// Kind: ScriptStruct; super: none
struct FGameInputRawDeviceReportData
{
public:
    std::uint8_t KeyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIgnoreAnalogInputDeviceScopeForThisRawReport; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TranslationBehavior; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AnalogDeadzone; // 0x0006 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    float Scalar; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TMap<void*, void*> ButtonBitMaskMappings; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t LowerBitAxisIndex; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HigherBitAxisIndex; // 0x0021 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0022
    TArray<void*> LowerBitKeys; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UpperBitKeys; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChordedKeyNames; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bTreatValuesAsAnalog; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameInputRawDeviceReportData, KeyName) == 0, "Offset mismatch for FGameInputRawDeviceReportData::KeyName");
static_assert(offsetof(FGameInputRawDeviceReportData, bIgnoreAnalogInputDeviceScopeForThisRawReport) == 4, "Offset mismatch for FGameInputRawDeviceReportData::bIgnoreAnalogInputDeviceScopeForThisRawReport");
static_assert(offsetof(FGameInputRawDeviceReportData, TranslationBehavior) == 5, "Offset mismatch for FGameInputRawDeviceReportData::TranslationBehavior");
static_assert(offsetof(FGameInputRawDeviceReportData, AnalogDeadzone) == 6, "Offset mismatch for FGameInputRawDeviceReportData::AnalogDeadzone");
static_assert(offsetof(FGameInputRawDeviceReportData, Scalar) == 8, "Offset mismatch for FGameInputRawDeviceReportData::Scalar");
static_assert(offsetof(FGameInputRawDeviceReportData, ButtonBitMaskMappings) == 16, "Offset mismatch for FGameInputRawDeviceReportData::ButtonBitMaskMappings");
static_assert(offsetof(FGameInputRawDeviceReportData, LowerBitAxisIndex) == 32, "Offset mismatch for FGameInputRawDeviceReportData::LowerBitAxisIndex");
static_assert(offsetof(FGameInputRawDeviceReportData, HigherBitAxisIndex) == 33, "Offset mismatch for FGameInputRawDeviceReportData::HigherBitAxisIndex");
static_assert(offsetof(FGameInputRawDeviceReportData, LowerBitKeys) == 40, "Offset mismatch for FGameInputRawDeviceReportData::LowerBitKeys");
static_assert(offsetof(FGameInputRawDeviceReportData, UpperBitKeys) == 56, "Offset mismatch for FGameInputRawDeviceReportData::UpperBitKeys");
static_assert(offsetof(FGameInputRawDeviceReportData, ChordedKeyNames) == 72, "Offset mismatch for FGameInputRawDeviceReportData::ChordedKeyNames");
static_assert(offsetof(FGameInputRawDeviceReportData, bTreatValuesAsAnalog) == 88, "Offset mismatch for FGameInputRawDeviceReportData::bTreatValuesAsAnalog");

// /Script/GameInputBase.GameInputDeveloperSettings
// Kind: Class; super: Object
class UGameInputDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DeviceConfigurations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlatformSpecificSettings[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TArray<void*> DevicesToIgnore; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t SupportedDeviceFamilies; // 0x0058 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bDoNotProcessDuplicateCapabilitiesForSingleUser; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableHapticSensorSupport; // 0x005D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameInputDeveloperSettings, DeviceConfigurations) == 40, "Offset mismatch for UGameInputDeveloperSettings::DeviceConfigurations");
static_assert(offsetof(UGameInputDeveloperSettings, PlatformSpecificSettings) == 56, "Offset mismatch for UGameInputDeveloperSettings::PlatformSpecificSettings");
static_assert(offsetof(UGameInputDeveloperSettings, DevicesToIgnore) == 72, "Offset mismatch for UGameInputDeveloperSettings::DevicesToIgnore");
static_assert(offsetof(UGameInputDeveloperSettings, SupportedDeviceFamilies) == 88, "Offset mismatch for UGameInputDeveloperSettings::SupportedDeviceFamilies");
static_assert(offsetof(UGameInputDeveloperSettings, bDoNotProcessDuplicateCapabilitiesForSingleUser) == 92, "Offset mismatch for UGameInputDeveloperSettings::bDoNotProcessDuplicateCapabilitiesForSingleUser");
static_assert(offsetof(UGameInputDeveloperSettings, bEnableHapticSensorSupport) == 93, "Offset mismatch for UGameInputDeveloperSettings::bEnableHapticSensorSupport");

// /Script/GameInputBase.GameInputHapticEndpointSettings
// Kind: Class; super: AudioEndpointSettingsBase
class UGameInputHapticEndpointSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameInputBase.GameInputPlatformSettings
// Kind: Class; super: PlatformSettings
class UGameInputPlatformSettings
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bProcessController; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessRawInput; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpecialDevicesRequireExplicitDeviceConfiguration; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessGamepad; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessKeyboard; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessMouse; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessSensors; // 0x0046 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessRacingWheel; // 0x0047 (Size: 0x1, Type: BoolProperty)
    float RacingWheelDeadzone; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bProcessArcadeStick; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessFlightStick; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004E
    float FlightStickPitchDeadzone; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float FlightStickRollDeadzone; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float FlightStickThrottleDeadzone; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float FlightStickYawDeadzone; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGameInputPlatformSettings, bProcessController) == 64, "Offset mismatch for UGameInputPlatformSettings::bProcessController");
static_assert(offsetof(UGameInputPlatformSettings, bProcessRawInput) == 65, "Offset mismatch for UGameInputPlatformSettings::bProcessRawInput");
static_assert(offsetof(UGameInputPlatformSettings, bSpecialDevicesRequireExplicitDeviceConfiguration) == 66, "Offset mismatch for UGameInputPlatformSettings::bSpecialDevicesRequireExplicitDeviceConfiguration");
static_assert(offsetof(UGameInputPlatformSettings, bProcessGamepad) == 67, "Offset mismatch for UGameInputPlatformSettings::bProcessGamepad");
static_assert(offsetof(UGameInputPlatformSettings, bProcessKeyboard) == 68, "Offset mismatch for UGameInputPlatformSettings::bProcessKeyboard");
static_assert(offsetof(UGameInputPlatformSettings, bProcessMouse) == 69, "Offset mismatch for UGameInputPlatformSettings::bProcessMouse");
static_assert(offsetof(UGameInputPlatformSettings, bProcessSensors) == 70, "Offset mismatch for UGameInputPlatformSettings::bProcessSensors");
static_assert(offsetof(UGameInputPlatformSettings, bProcessRacingWheel) == 71, "Offset mismatch for UGameInputPlatformSettings::bProcessRacingWheel");
static_assert(offsetof(UGameInputPlatformSettings, RacingWheelDeadzone) == 72, "Offset mismatch for UGameInputPlatformSettings::RacingWheelDeadzone");
static_assert(offsetof(UGameInputPlatformSettings, bProcessArcadeStick) == 76, "Offset mismatch for UGameInputPlatformSettings::bProcessArcadeStick");
static_assert(offsetof(UGameInputPlatformSettings, bProcessFlightStick) == 77, "Offset mismatch for UGameInputPlatformSettings::bProcessFlightStick");
static_assert(offsetof(UGameInputPlatformSettings, FlightStickPitchDeadzone) == 80, "Offset mismatch for UGameInputPlatformSettings::FlightStickPitchDeadzone");
static_assert(offsetof(UGameInputPlatformSettings, FlightStickRollDeadzone) == 84, "Offset mismatch for UGameInputPlatformSettings::FlightStickRollDeadzone");
static_assert(offsetof(UGameInputPlatformSettings, FlightStickThrottleDeadzone) == 88, "Offset mismatch for UGameInputPlatformSettings::FlightStickThrottleDeadzone");
static_assert(offsetof(UGameInputPlatformSettings, FlightStickYawDeadzone) == 92, "Offset mismatch for UGameInputPlatformSettings::FlightStickYawDeadzone");
