/**
 * decamp dumper generated SDK
 * Package: /Script/MidiInputInternal
 */
#pragma once
#include "Basic.h"

// /Script/MidiInputInternal.MidiInputDeviceConfiguration
// Kind: ScriptStruct; super: none
struct FMidiInputDeviceConfiguration
{
public:
    std::uint16_t VendorId; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t ProductId; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString Description; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMidiInputDeviceConfiguration, VendorId) == 0, "Offset mismatch for FMidiInputDeviceConfiguration::VendorId");
static_assert(offsetof(FMidiInputDeviceConfiguration, ProductId) == 2, "Offset mismatch for FMidiInputDeviceConfiguration::ProductId");
static_assert(offsetof(FMidiInputDeviceConfiguration, Description) == 8, "Offset mismatch for FMidiInputDeviceConfiguration::Description");

// /Script/MidiInputInternal.MidiInputEvent
// Kind: ScriptStruct; super: none
struct FMidiInputEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MidiInputInternal.MidiInputKey
// Kind: ScriptStruct; super: none
struct FMidiInputKey
{
public:
    std::uint8_t NoteNumber; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MinVelocity; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MaxVelocity; // 0x0002 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMidiInputKey, NoteNumber) == 0, "Offset mismatch for FMidiInputKey::NoteNumber");
static_assert(offsetof(FMidiInputKey, MinVelocity) == 1, "Offset mismatch for FMidiInputKey::MinVelocity");
static_assert(offsetof(FMidiInputKey, MaxVelocity) == 2, "Offset mismatch for FMidiInputKey::MaxVelocity");

// /Script/MidiInputInternal.MidiInputKeyMapping
// Kind: ScriptStruct; super: none
struct FMidiInputKeyMapping
{
public:
    FName MappingName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Keys; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMidiInputKeyMapping, MappingName) == 0, "Offset mismatch for FMidiInputKeyMapping::MappingName");
static_assert(offsetof(FMidiInputKeyMapping, Keys) == 8, "Offset mismatch for FMidiInputKeyMapping::Keys");

// /Script/MidiInputInternal.MidiInputMessage
// Kind: ScriptStruct; super: none
struct FMidiInputMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MidiInputInternal.MidiInputDeviceSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UMidiInputDeviceSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MidiInputInternal.MidiInputSettings
// Kind: Class; super: DeveloperSettings
class UMidiInputSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> DeviceConfigurations; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMidiInputSettings, DeviceConfigurations) == 48, "Offset mismatch for UMidiInputSettings::DeviceConfigurations");
