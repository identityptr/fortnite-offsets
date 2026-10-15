/**
 * decamp dumper generated SDK
 * Package: /Script/DirectLink
 */
#pragma once
#include "Basic.h"

// /Script/DirectLink.DirectLinkMsg_CloseStreamRequest
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_CloseStreamRequest
{
public:
    std::int32_t RecipientStreamPort; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDirectLinkMsg_CloseStreamRequest, RecipientStreamPort) == 0, "Offset mismatch for FDirectLinkMsg_CloseStreamRequest::RecipientStreamPort");

// /Script/DirectLink.DirectLinkMsg_DeltaMessage
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_DeltaMessage
{
public:
    std::int32_t DestinationStreamPort; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int8_t BatchCode; // 0x0004 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t MessageCode; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Kind; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t CompressedPayload; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    TArray<void*> Payload; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDirectLinkMsg_DeltaMessage, DestinationStreamPort) == 0, "Offset mismatch for FDirectLinkMsg_DeltaMessage::DestinationStreamPort");
static_assert(offsetof(FDirectLinkMsg_DeltaMessage, BatchCode) == 4, "Offset mismatch for FDirectLinkMsg_DeltaMessage::BatchCode");
static_assert(offsetof(FDirectLinkMsg_DeltaMessage, MessageCode) == 8, "Offset mismatch for FDirectLinkMsg_DeltaMessage::MessageCode");
static_assert(offsetof(FDirectLinkMsg_DeltaMessage, Kind) == 12, "Offset mismatch for FDirectLinkMsg_DeltaMessage::Kind");
static_assert(offsetof(FDirectLinkMsg_DeltaMessage, CompressedPayload) == 13, "Offset mismatch for FDirectLinkMsg_DeltaMessage::CompressedPayload");
static_assert(offsetof(FDirectLinkMsg_DeltaMessage, Payload) == 16, "Offset mismatch for FDirectLinkMsg_DeltaMessage::Payload");

// /Script/DirectLink.DirectLinkMsg_EndpointLifecycle
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_EndpointLifecycle
{
public:
    std::uint8_t LifecycleState; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint32_t EndpointStateRevision; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FDirectLinkMsg_EndpointLifecycle, LifecycleState) == 0, "Offset mismatch for FDirectLinkMsg_EndpointLifecycle::LifecycleState");
static_assert(offsetof(FDirectLinkMsg_EndpointLifecycle, EndpointStateRevision) == 4, "Offset mismatch for FDirectLinkMsg_EndpointLifecycle::EndpointStateRevision");

// /Script/DirectLink.DirectLinkMsg_EndpointState
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_EndpointState
{
public:
    std::uint32_t StateRevision; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t MinProtocolVersion; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ProtocolVersion; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    FString UEVersion; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ComputerName; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString UserName; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint32_t ProcessId; // 0x0040 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    FString ExecutableName; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString NiceName; // 0x0058 (Size: 0x10, Type: StrProperty)
    TArray<void*> Destinations; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Sources; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDirectLinkMsg_EndpointState, StateRevision) == 0, "Offset mismatch for FDirectLinkMsg_EndpointState::StateRevision");
static_assert(offsetof(FDirectLinkMsg_EndpointState, MinProtocolVersion) == 4, "Offset mismatch for FDirectLinkMsg_EndpointState::MinProtocolVersion");
static_assert(offsetof(FDirectLinkMsg_EndpointState, ProtocolVersion) == 8, "Offset mismatch for FDirectLinkMsg_EndpointState::ProtocolVersion");
static_assert(offsetof(FDirectLinkMsg_EndpointState, UEVersion) == 16, "Offset mismatch for FDirectLinkMsg_EndpointState::UEVersion");
static_assert(offsetof(FDirectLinkMsg_EndpointState, ComputerName) == 32, "Offset mismatch for FDirectLinkMsg_EndpointState::ComputerName");
static_assert(offsetof(FDirectLinkMsg_EndpointState, UserName) == 48, "Offset mismatch for FDirectLinkMsg_EndpointState::UserName");
static_assert(offsetof(FDirectLinkMsg_EndpointState, ProcessId) == 64, "Offset mismatch for FDirectLinkMsg_EndpointState::ProcessId");
static_assert(offsetof(FDirectLinkMsg_EndpointState, ExecutableName) == 72, "Offset mismatch for FDirectLinkMsg_EndpointState::ExecutableName");
static_assert(offsetof(FDirectLinkMsg_EndpointState, NiceName) == 88, "Offset mismatch for FDirectLinkMsg_EndpointState::NiceName");
static_assert(offsetof(FDirectLinkMsg_EndpointState, Destinations) == 104, "Offset mismatch for FDirectLinkMsg_EndpointState::Destinations");
static_assert(offsetof(FDirectLinkMsg_EndpointState, Sources) == 120, "Offset mismatch for FDirectLinkMsg_EndpointState::Sources");

// /Script/DirectLink.DirectLinkMsg_HaveListMessage
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_HaveListMessage
{
public:
    std::int32_t SourceStreamPort; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SyncCycle; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MessageCode; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Kind; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    TArray<void*> Payload; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NodeIds; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Hashes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDirectLinkMsg_HaveListMessage, SourceStreamPort) == 0, "Offset mismatch for FDirectLinkMsg_HaveListMessage::SourceStreamPort");
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, SyncCycle) == 4, "Offset mismatch for FDirectLinkMsg_HaveListMessage::SyncCycle");
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, MessageCode) == 8, "Offset mismatch for FDirectLinkMsg_HaveListMessage::MessageCode");
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, Kind) == 12, "Offset mismatch for FDirectLinkMsg_HaveListMessage::Kind");
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, Payload) == 16, "Offset mismatch for FDirectLinkMsg_HaveListMessage::Payload");
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, NodeIds) == 32, "Offset mismatch for FDirectLinkMsg_HaveListMessage::NodeIds");
static_assert(offsetof(FDirectLinkMsg_HaveListMessage, Hashes) == 48, "Offset mismatch for FDirectLinkMsg_HaveListMessage::Hashes");

// /Script/DirectLink.DirectLinkMsg_OpenStreamAnswer
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_OpenStreamAnswer
{
public:
    std::int32_t RecipientStreamPort; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAccepted; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    FString Error; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t OpenedStreamPort; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDirectLinkMsg_OpenStreamAnswer, RecipientStreamPort) == 0, "Offset mismatch for FDirectLinkMsg_OpenStreamAnswer::RecipientStreamPort");
static_assert(offsetof(FDirectLinkMsg_OpenStreamAnswer, bAccepted) == 4, "Offset mismatch for FDirectLinkMsg_OpenStreamAnswer::bAccepted");
static_assert(offsetof(FDirectLinkMsg_OpenStreamAnswer, Error) == 8, "Offset mismatch for FDirectLinkMsg_OpenStreamAnswer::Error");
static_assert(offsetof(FDirectLinkMsg_OpenStreamAnswer, OpenedStreamPort) == 24, "Offset mismatch for FDirectLinkMsg_OpenStreamAnswer::OpenedStreamPort");

// /Script/DirectLink.DirectLinkMsg_OpenStreamRequest
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_OpenStreamRequest
{
public:
    std::uint8_t bRequestFromSource; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t RequestFromStreamPort; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceGuid[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t DestinationGuid[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDirectLinkMsg_OpenStreamRequest, bRequestFromSource) == 0, "Offset mismatch for FDirectLinkMsg_OpenStreamRequest::bRequestFromSource");
static_assert(offsetof(FDirectLinkMsg_OpenStreamRequest, RequestFromStreamPort) == 4, "Offset mismatch for FDirectLinkMsg_OpenStreamRequest::RequestFromStreamPort");
static_assert(offsetof(FDirectLinkMsg_OpenStreamRequest, SourceGuid) == 8, "Offset mismatch for FDirectLinkMsg_OpenStreamRequest::SourceGuid");
static_assert(offsetof(FDirectLinkMsg_OpenStreamRequest, DestinationGuid) == 24, "Offset mismatch for FDirectLinkMsg_OpenStreamRequest::DestinationGuid");

// /Script/DirectLink.DirectLinkMsg_QueryEndpointState
// Kind: ScriptStruct; super: none
struct FDirectLinkMsg_QueryEndpointState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DirectLink.NamedId
// Kind: ScriptStruct; super: none
struct FNamedId
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPublic; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNamedId, Name) == 0, "Offset mismatch for FNamedId::Name");
static_assert(offsetof(FNamedId, ID) == 16, "Offset mismatch for FNamedId::ID");
static_assert(offsetof(FNamedId, bIsPublic) == 32, "Offset mismatch for FNamedId::bIsPublic");
