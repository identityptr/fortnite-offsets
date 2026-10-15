/**
 * decamp dumper generated SDK
 * Package: /Script/RewindDebuggerVLogRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RewindDebuggerVLogRuntime.LogCategoryStateChangeCommandMessage
// Kind: ScriptStruct; super: none
struct FLogCategoryStateChangeCommandMessage
{
public:
    std::uint8_t NewState[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLogCategoryStateChangeCommandMessage, NewState) == 0, "Offset mismatch for FLogCategoryStateChangeCommandMessage::NewState");

// /Script/RewindDebuggerVLogRuntime.LogCategoryStateChangeResponseMessage
// Kind: ScriptStruct; super: none
struct FLogCategoryStateChangeResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t NewState[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLogCategoryStateChangeResponseMessage, InstanceID) == 0, "Offset mismatch for FLogCategoryStateChangeResponseMessage::InstanceID");
static_assert(offsetof(FLogCategoryStateChangeResponseMessage, NewState) == 16, "Offset mismatch for FLogCategoryStateChangeResponseMessage::NewState");

// /Script/RewindDebuggerVLogRuntime.LogCategoryStatusQueryMessage
// Kind: ScriptStruct; super: none
struct FLogCategoryStatusQueryMessage
{
public:
    TArray<void*> Categories; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLogCategoryStatusQueryMessage, Categories) == 0, "Offset mismatch for FLogCategoryStatusQueryMessage::Categories");

// /Script/RewindDebuggerVLogRuntime.LogCategoryStatusQueryResponseMessage
// Kind: ScriptStruct; super: none
struct FLogCategoryStatusQueryResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUsingVerbosityFilterWhenRecording; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> Categories; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLogCategoryStatusQueryResponseMessage, InstanceID) == 0, "Offset mismatch for FLogCategoryStatusQueryResponseMessage::InstanceID");
static_assert(offsetof(FLogCategoryStatusQueryResponseMessage, bUsingVerbosityFilterWhenRecording) == 16, "Offset mismatch for FLogCategoryStatusQueryResponseMessage::bUsingVerbosityFilterWhenRecording");
static_assert(offsetof(FLogCategoryStatusQueryResponseMessage, Categories) == 24, "Offset mismatch for FLogCategoryStatusQueryResponseMessage::Categories");

// /Script/RewindDebuggerVLogRuntime.LogCategoryVerbosity
// Kind: ScriptStruct; super: none
struct FLogCategoryVerbosity
{
public:
    std::uint8_t CategoryName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Verbosity; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLogCategoryVerbosity, CategoryName) == 0, "Offset mismatch for FLogCategoryVerbosity::CategoryName");
static_assert(offsetof(FLogCategoryVerbosity, Verbosity) == 4, "Offset mismatch for FLogCategoryVerbosity::Verbosity");

// /Script/RewindDebuggerVLogRuntime.VLogExtensionSessionData
// Kind: ScriptStruct; super: none
struct FVLogExtensionSessionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RewindDebuggerVLogRuntime.VerbosityFilteringStateChangeCommandMessage
// Kind: ScriptStruct; super: none
struct FVerbosityFilteringStateChangeCommandMessage
{
public:
    std::uint8_t bEnableFiltering; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVerbosityFilteringStateChangeCommandMessage, bEnableFiltering) == 0, "Offset mismatch for FVerbosityFilteringStateChangeCommandMessage::bEnableFiltering");

// /Script/RewindDebuggerVLogRuntime.VerbosityFilteringStateChangeResponseMessage
// Kind: ScriptStruct; super: none
struct FVerbosityFilteringStateChangeResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFilteringEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVerbosityFilteringStateChangeResponseMessage, InstanceID) == 0, "Offset mismatch for FVerbosityFilteringStateChangeResponseMessage::InstanceID");
static_assert(offsetof(FVerbosityFilteringStateChangeResponseMessage, bFilteringEnabled) == 16, "Offset mismatch for FVerbosityFilteringStateChangeResponseMessage::bFilteringEnabled");

// /Script/RewindDebuggerVLogRuntime.VisualLoggerBulkFilterCommandMessage
// Kind: ScriptStruct; super: none
struct FVisualLoggerBulkFilterCommandMessage
{
public:
    std::uint32_t PackedState; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint16_t FieldMask; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Operation; // 0x0006 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FVisualLoggerBulkFilterCommandMessage, PackedState) == 0, "Offset mismatch for FVisualLoggerBulkFilterCommandMessage::PackedState");
static_assert(offsetof(FVisualLoggerBulkFilterCommandMessage, FieldMask) == 4, "Offset mismatch for FVisualLoggerBulkFilterCommandMessage::FieldMask");
static_assert(offsetof(FVisualLoggerBulkFilterCommandMessage, Operation) == 6, "Offset mismatch for FVisualLoggerBulkFilterCommandMessage::Operation");

// /Script/RewindDebuggerVLogRuntime.VisualLoggerBulkFilterResponseMessage
// Kind: ScriptStruct; super: none
struct FVisualLoggerBulkFilterResponseMessage
{
public:
    std::uint8_t InstanceID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVisualLoggerBulkFilterResponseMessage, InstanceID) == 0, "Offset mismatch for FVisualLoggerBulkFilterResponseMessage::InstanceID");

// /Script/RewindDebuggerVLogRuntime.VisualLoggerCategoryFilterPayload
// Kind: ScriptStruct; super: none
struct FVisualLoggerCategoryFilterPayload
{
public:
    std::uint8_t CategoryName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint32_t PackedState; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FVisualLoggerCategoryFilterPayload, CategoryName) == 0, "Offset mismatch for FVisualLoggerCategoryFilterPayload::CategoryName");
static_assert(offsetof(FVisualLoggerCategoryFilterPayload, PackedState) == 4, "Offset mismatch for FVisualLoggerCategoryFilterPayload::PackedState");

// /Script/RewindDebuggerVLogRuntime.VisualLoggerFilterSnapshotMessage
// Kind: ScriptStruct; super: none
struct FVisualLoggerFilterSnapshotMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RewindDebuggerVLogRuntime.VisualLoggerFilterSnapshotResponseMessage
// Kind: ScriptStruct; super: none
struct FVisualLoggerFilterSnapshotResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> Categories; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseVerbosityFilterWhenRecording; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseVerbosityFilterWhenRendering; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRecordingSupported; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRenderingSupported; // 0x0023 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVisualLoggerFilterSnapshotResponseMessage, InstanceID) == 0, "Offset mismatch for FVisualLoggerFilterSnapshotResponseMessage::InstanceID");
static_assert(offsetof(FVisualLoggerFilterSnapshotResponseMessage, Categories) == 16, "Offset mismatch for FVisualLoggerFilterSnapshotResponseMessage::Categories");
static_assert(offsetof(FVisualLoggerFilterSnapshotResponseMessage, bUseVerbosityFilterWhenRecording) == 32, "Offset mismatch for FVisualLoggerFilterSnapshotResponseMessage::bUseVerbosityFilterWhenRecording");
static_assert(offsetof(FVisualLoggerFilterSnapshotResponseMessage, bUseVerbosityFilterWhenRendering) == 33, "Offset mismatch for FVisualLoggerFilterSnapshotResponseMessage::bUseVerbosityFilterWhenRendering");
static_assert(offsetof(FVisualLoggerFilterSnapshotResponseMessage, bRecordingSupported) == 34, "Offset mismatch for FVisualLoggerFilterSnapshotResponseMessage::bRecordingSupported");
static_assert(offsetof(FVisualLoggerFilterSnapshotResponseMessage, bRenderingSupported) == 35, "Offset mismatch for FVisualLoggerFilterSnapshotResponseMessage::bRenderingSupported");

// /Script/RewindDebuggerVLogRuntime.VisualLoggerPerCategoryFilterCommandMessage
// Kind: ScriptStruct; super: none
struct FVisualLoggerPerCategoryFilterCommandMessage
{
public:
    std::uint8_t Payload[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint16_t FieldMask; // 0x0008 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FVisualLoggerPerCategoryFilterCommandMessage, Payload) == 0, "Offset mismatch for FVisualLoggerPerCategoryFilterCommandMessage::Payload");
static_assert(offsetof(FVisualLoggerPerCategoryFilterCommandMessage, FieldMask) == 8, "Offset mismatch for FVisualLoggerPerCategoryFilterCommandMessage::FieldMask");

// /Script/RewindDebuggerVLogRuntime.VisualLoggerPerCategoryFilterResponseMessage
// Kind: ScriptStruct; super: none
struct FVisualLoggerPerCategoryFilterResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVisualLoggerPerCategoryFilterResponseMessage, InstanceID) == 0, "Offset mismatch for FVisualLoggerPerCategoryFilterResponseMessage::InstanceID");
static_assert(offsetof(FVisualLoggerPerCategoryFilterResponseMessage, Payload) == 16, "Offset mismatch for FVisualLoggerPerCategoryFilterResponseMessage::Payload");
