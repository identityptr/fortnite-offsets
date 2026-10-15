/**
 * decamp dumper generated SDK
 * Package: /Script/WinDualShock
 */
#pragma once
#include "Basic.h"

// /Script/WinDualShock.DualShockExternalEndpointSettings
// Kind: Class; super: AudioEndpointSettingsBase
class UDualShockExternalEndpointSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ControllerIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDualShockExternalEndpointSettings, ControllerIndex) == 40, "Offset mismatch for UDualShockExternalEndpointSettings::ControllerIndex");

// /Script/WinDualShock.DualShockSoundfieldEndpointSettings
// Kind: Class; super: SoundfieldEndpointSettingsBase
class UDualShockSoundfieldEndpointSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ControllerIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UDualShockSoundfieldEndpointSettings, ControllerIndex) == 40, "Offset mismatch for UDualShockSoundfieldEndpointSettings::ControllerIndex");

// /Script/WinDualShock.DualShockSpatializationSettings
// Kind: Class; super: SoundfieldEncodingSettingsBase
class UDualShockSpatializationSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Spread; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t Priority; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t Passthrough; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDualShockSpatializationSettings, Spread) == 40, "Offset mismatch for UDualShockSpatializationSettings::Spread");
static_assert(offsetof(UDualShockSpatializationSettings, Priority) == 44, "Offset mismatch for UDualShockSpatializationSettings::Priority");
static_assert(offsetof(UDualShockSpatializationSettings, Passthrough) == 48, "Offset mismatch for UDualShockSpatializationSettings::Passthrough");
