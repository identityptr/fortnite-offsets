/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkMessageBusFramework
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkMessageBusFramework.LiveLinkByteArray
// Kind: ScriptStruct; super: none
struct FLiveLinkByteArray
{
public:
    TArray<void*> Bytes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkByteArray, Bytes) == 0, "Offset mismatch for FLiveLinkByteArray::Bytes");

// /Script/LiveLinkMessageBusFramework.LiveLinkClearSubject
// Kind: ScriptStruct; super: none
struct FLiveLinkClearSubject
{
public:
    FName SubjectName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLiveLinkClearSubject, SubjectName) == 0, "Offset mismatch for FLiveLinkClearSubject::SubjectName");

// /Script/LiveLinkMessageBusFramework.LiveLinkConnectMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkConnectMessage
{
public:
    std::int32_t LiveLinkVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkConnectMessage, LiveLinkVersion) == 0, "Offset mismatch for FLiveLinkConnectMessage::LiveLinkVersion");

// /Script/LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHeartbeatMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkMessageBusFramework.LiveLinkPingMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkPingMessage
{
public:
    std::uint8_t PollRequest[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t LiveLinkVersion; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t DiscoveryProtocolVersion; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkPingMessage, PollRequest) == 0, "Offset mismatch for FLiveLinkPingMessage::PollRequest");
static_assert(offsetof(FLiveLinkPingMessage, LiveLinkVersion) == 16, "Offset mismatch for FLiveLinkPingMessage::LiveLinkVersion");
static_assert(offsetof(FLiveLinkPingMessage, DiscoveryProtocolVersion) == 20, "Offset mismatch for FLiveLinkPingMessage::DiscoveryProtocolVersion");

// /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkPongMessage
{
public:
    FString ProviderName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString MachineName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t PollRequest[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::int32_t LiveLinkVersion; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t DiscoveryProtocolVersion; // 0x0034 (Size: 0x4, Type: IntProperty)
    double CreationPlatformTime; // 0x0038 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLiveLinkPongMessage, ProviderName) == 0, "Offset mismatch for FLiveLinkPongMessage::ProviderName");
static_assert(offsetof(FLiveLinkPongMessage, MachineName) == 16, "Offset mismatch for FLiveLinkPongMessage::MachineName");
static_assert(offsetof(FLiveLinkPongMessage, PollRequest) == 32, "Offset mismatch for FLiveLinkPongMessage::PollRequest");
static_assert(offsetof(FLiveLinkPongMessage, LiveLinkVersion) == 48, "Offset mismatch for FLiveLinkPongMessage::LiveLinkVersion");
static_assert(offsetof(FLiveLinkPongMessage, DiscoveryProtocolVersion) == 52, "Offset mismatch for FLiveLinkPongMessage::DiscoveryProtocolVersion");
static_assert(offsetof(FLiveLinkPongMessage, CreationPlatformTime) == 56, "Offset mismatch for FLiveLinkPongMessage::CreationPlatformTime");

// /Script/LiveLinkMessageBusFramework.LiveLinkSerializedFrameData
// Kind: ScriptStruct; super: none
struct FLiveLinkSerializedFrameData
{
public:
    std::uint8_t PayloadTypeName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SerializationMethod; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CompressionMethod; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CompressionBias; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::int32_t PayloadSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t PayloadBytes[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkSerializedFrameData, PayloadTypeName) == 0, "Offset mismatch for FLiveLinkSerializedFrameData::PayloadTypeName");
static_assert(offsetof(FLiveLinkSerializedFrameData, SerializationMethod) == 4, "Offset mismatch for FLiveLinkSerializedFrameData::SerializationMethod");
static_assert(offsetof(FLiveLinkSerializedFrameData, CompressionMethod) == 5, "Offset mismatch for FLiveLinkSerializedFrameData::CompressionMethod");
static_assert(offsetof(FLiveLinkSerializedFrameData, CompressionBias) == 6, "Offset mismatch for FLiveLinkSerializedFrameData::CompressionBias");
static_assert(offsetof(FLiveLinkSerializedFrameData, PayloadSize) == 8, "Offset mismatch for FLiveLinkSerializedFrameData::PayloadSize");
static_assert(offsetof(FLiveLinkSerializedFrameData, PayloadBytes) == 16, "Offset mismatch for FLiveLinkSerializedFrameData::PayloadBytes");

// /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkSubjectDataMessage
{
public:
    std::uint8_t RefSkeleton[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    FName SubjectName; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FLiveLinkSubjectDataMessage, RefSkeleton) == 0, "Offset mismatch for FLiveLinkSubjectDataMessage::RefSkeleton");
static_assert(offsetof(FLiveLinkSubjectDataMessage, SubjectName) == 32, "Offset mismatch for FLiveLinkSubjectDataMessage::SubjectName");

// /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkSubjectFrameMessage
{
public:
    FName SubjectName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Transforms; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Curves; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MetaData[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    double time; // 0x0048 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FLiveLinkSubjectFrameMessage, SubjectName) == 0, "Offset mismatch for FLiveLinkSubjectFrameMessage::SubjectName");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Transforms) == 8, "Offset mismatch for FLiveLinkSubjectFrameMessage::Transforms");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, Curves) == 24, "Offset mismatch for FLiveLinkSubjectFrameMessage::Curves");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, MetaData) == 40, "Offset mismatch for FLiveLinkSubjectFrameMessage::MetaData");
static_assert(offsetof(FLiveLinkSubjectFrameMessage, time) == 72, "Offset mismatch for FLiveLinkSubjectFrameMessage::time");
