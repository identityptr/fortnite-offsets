/**
 * decamp dumper generated SDK
 * Package: /Script/TraceBasedDebuggers
 */
#pragma once
#include "Basic.h"

// /Script/TraceBasedDebuggers.FullSessionInfoRequestMessage
// Kind: ScriptStruct; super: none
struct FFullSessionInfoRequestMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TraceBasedDebuggers.FullSessionInfoResponseMessage
// Kind: ScriptStruct; super: none
struct FFullSessionInfoResponseMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebuggerId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> DebuggerSpecificData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RecordingRequesterId[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFullSessionInfoResponseMessage, InstanceID) == 0, "Offset mismatch for FFullSessionInfoResponseMessage::InstanceID");
static_assert(offsetof(FFullSessionInfoResponseMessage, DebuggerId) == 16, "Offset mismatch for FFullSessionInfoResponseMessage::DebuggerId");
static_assert(offsetof(FFullSessionInfoResponseMessage, DebuggerSpecificData) == 32, "Offset mismatch for FFullSessionInfoResponseMessage::DebuggerSpecificData");
static_assert(offsetof(FFullSessionInfoResponseMessage, RecordingRequesterId) == 48, "Offset mismatch for FFullSessionInfoResponseMessage::RecordingRequesterId");

// /Script/TraceBasedDebuggers.RecordingStatusMessage
// Kind: ScriptStruct; super: none
struct FRecordingStatusMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t DebuggerId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t RequesterId[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    float ElapsedTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0034
    std::int64_t BufferedDataBytesSize; // 0x0038 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FRecordingStatusMessage, InstanceID) == 0, "Offset mismatch for FRecordingStatusMessage::InstanceID");
static_assert(offsetof(FRecordingStatusMessage, DebuggerId) == 16, "Offset mismatch for FRecordingStatusMessage::DebuggerId");
static_assert(offsetof(FRecordingStatusMessage, RequesterId) == 32, "Offset mismatch for FRecordingStatusMessage::RequesterId");
static_assert(offsetof(FRecordingStatusMessage, ElapsedTime) == 48, "Offset mismatch for FRecordingStatusMessage::ElapsedTime");
static_assert(offsetof(FRecordingStatusMessage, BufferedDataBytesSize) == 56, "Offset mismatch for FRecordingStatusMessage::BufferedDataBytesSize");

// /Script/TraceBasedDebuggers.RelayConnectionInfo
// Kind: ScriptStruct; super: none
struct FRelayConnectionInfo
{
public:
    FString Address; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint16_t Port; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x6]; // 0x0012
    TArray<void*> CertificateAuthority; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRelayConnectionInfo, Address) == 0, "Offset mismatch for FRelayConnectionInfo::Address");
static_assert(offsetof(FRelayConnectionInfo, Port) == 16, "Offset mismatch for FRelayConnectionInfo::Port");
static_assert(offsetof(FRelayConnectionInfo, CertificateAuthority) == 24, "Offset mismatch for FRelayConnectionInfo::CertificateAuthority");

// /Script/TraceBasedDebuggers.SessionPing
// Kind: ScriptStruct; super: none
struct FSessionPing
{
public:
    std::uint8_t ControllerInstanceId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSessionPing, ControllerInstanceId) == 0, "Offset mismatch for FSessionPing::ControllerInstanceId");

// /Script/TraceBasedDebuggers.SessionPong
// Kind: ScriptStruct; super: none
struct FSessionPong
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SessionID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString SessionName; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t BuildTargetType; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSessionPong, InstanceID) == 0, "Offset mismatch for FSessionPong::InstanceID");
static_assert(offsetof(FSessionPong, SessionID) == 16, "Offset mismatch for FSessionPong::SessionID");
static_assert(offsetof(FSessionPong, SessionName) == 32, "Offset mismatch for FSessionPong::SessionName");
static_assert(offsetof(FSessionPong, BuildTargetType) == 48, "Offset mismatch for FSessionPong::BuildTargetType");

// /Script/TraceBasedDebuggers.StartRecordingCommandMessage
// Kind: ScriptStruct; super: none
struct FStartRecordingCommandMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString Target; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t RecordingMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransportMode; // 0x0021 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FStartRecordingCommandMessage, InstanceID) == 0, "Offset mismatch for FStartRecordingCommandMessage::InstanceID");
static_assert(offsetof(FStartRecordingCommandMessage, Target) == 16, "Offset mismatch for FStartRecordingCommandMessage::Target");
static_assert(offsetof(FStartRecordingCommandMessage, RecordingMode) == 32, "Offset mismatch for FStartRecordingCommandMessage::RecordingMode");
static_assert(offsetof(FStartRecordingCommandMessage, TransportMode) == 33, "Offset mismatch for FStartRecordingCommandMessage::TransportMode");

// /Script/TraceBasedDebuggers.StopRecordingCommandMessage
// Kind: ScriptStruct; super: none
struct FStopRecordingCommandMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TraceBasedDebuggers.TraceConnectionDetails
// Kind: ScriptStruct; super: none
struct FTraceConnectionDetails
{
public:
    std::uint8_t TraceGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SessionGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString TraceTarget; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint16_t Port; // 0x0030 (Size: 0x2, Type: UInt16Property)
    std::uint8_t TransportMode; // 0x0032 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0033
    TArray<void*> CertAuth; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsValid; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceConnectionDetails, TraceGuid) == 0, "Offset mismatch for FTraceConnectionDetails::TraceGuid");
static_assert(offsetof(FTraceConnectionDetails, SessionGuid) == 16, "Offset mismatch for FTraceConnectionDetails::SessionGuid");
static_assert(offsetof(FTraceConnectionDetails, TraceTarget) == 32, "Offset mismatch for FTraceConnectionDetails::TraceTarget");
static_assert(offsetof(FTraceConnectionDetails, Port) == 48, "Offset mismatch for FTraceConnectionDetails::Port");
static_assert(offsetof(FTraceConnectionDetails, TransportMode) == 50, "Offset mismatch for FTraceConnectionDetails::TransportMode");
static_assert(offsetof(FTraceConnectionDetails, CertAuth) == 56, "Offset mismatch for FTraceConnectionDetails::CertAuth");
static_assert(offsetof(FTraceConnectionDetails, bIsValid) == 72, "Offset mismatch for FTraceConnectionDetails::bIsValid");

// /Script/TraceBasedDebuggers.TraceConnectionDetailsMessage
// Kind: ScriptStruct; super: none
struct FTraceConnectionDetailsMessage
{
public:
    std::uint8_t InstanceID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t TraceDetails[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTraceConnectionDetailsMessage, InstanceID) == 0, "Offset mismatch for FTraceConnectionDetailsMessage::InstanceID");
static_assert(offsetof(FTraceConnectionDetailsMessage, TraceDetails) == 16, "Offset mismatch for FTraceConnectionDetailsMessage::TraceDetails");
