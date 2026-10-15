/**
 * decamp dumper generated SDK
 * Package: /Script/RewindDebuggerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RewindDebuggerRuntime.StartRecordingCommand
// Kind: ScriptStruct; super: StartRecordingCommandMessage
struct FStartRecordingCommand
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString Target; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t RecordingMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransportMode; // 0x0021 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStartRecordingCommand, InstanceID) == 0, "Offset mismatch for FStartRecordingCommand::InstanceID");
static_assert(offsetof(FStartRecordingCommand, Target) == 16, "Offset mismatch for FStartRecordingCommand::Target");
static_assert(offsetof(FStartRecordingCommand, RecordingMode) == 32, "Offset mismatch for FStartRecordingCommand::RecordingMode");
static_assert(offsetof(FStartRecordingCommand, TransportMode) == 33, "Offset mismatch for FStartRecordingCommand::TransportMode");

// /Script/RewindDebuggerRuntime.StopRecordingCommand
// Kind: ScriptStruct; super: StopRecordingCommandMessage
struct FStopRecordingCommand
{
public:
    std::uint8_t Opaque[1];
};
