/**
 * decamp dumper generated SDK
 * Package: /Script/MessageBusTester
 */
#pragma once
#include "Basic.h"

// /Script/MessageBusTester.MessageBusTestPlan
// Kind: ScriptStruct; super: none
struct FMessageBusTestPlan
{
public:
    TArray<void*> TestPlanItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMessageBusTestPlan, TestPlanItems) == 0, "Offset mismatch for FMessageBusTestPlan::TestPlanItems");

// /Script/MessageBusTester.TestPayloadMessage
// Kind: ScriptStruct; super: TesterBaseMessage
struct FTestPayloadMessage
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::int32_t TestPlanIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t PayloadId; // 0x0024 (Size: 0x4, Type: IntProperty)
    TArray<void*> Payload; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTestPayloadMessage, TestPlanIndex) == 32, "Offset mismatch for FTestPayloadMessage::TestPlanIndex");
static_assert(offsetof(FTestPayloadMessage, PayloadId) == 36, "Offset mismatch for FTestPayloadMessage::PayloadId");
static_assert(offsetof(FTestPayloadMessage, Payload) == 40, "Offset mismatch for FTestPayloadMessage::Payload");

// /Script/MessageBusTester.TestPayloadReceptionMessage
// Kind: ScriptStruct; super: TesterBaseMessage
struct FTestPayloadReceptionMessage
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::int32_t TestPlanIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t PayloadId; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t ReceivedPayloadSize; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTestPayloadReceptionMessage, TestPlanIndex) == 32, "Offset mismatch for FTestPayloadReceptionMessage::TestPlanIndex");
static_assert(offsetof(FTestPayloadReceptionMessage, PayloadId) == 36, "Offset mismatch for FTestPayloadReceptionMessage::PayloadId");
static_assert(offsetof(FTestPayloadReceptionMessage, ReceivedPayloadSize) == 40, "Offset mismatch for FTestPayloadReceptionMessage::ReceivedPayloadSize");

// /Script/MessageBusTester.TestPlanItem
// Kind: ScriptStruct; super: none
struct FTestPlanItem
{
public:
    std::int32_t NumBytes; // 0x0000 (Size: 0x4, Type: IntProperty)
    float IntervalSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTestPlanItem, NumBytes) == 0, "Offset mismatch for FTestPlanItem::NumBytes");
static_assert(offsetof(FTestPlanItem, IntervalSeconds) == 4, "Offset mismatch for FTestPlanItem::IntervalSeconds");

// /Script/MessageBusTester.TesterBaseMessage
// Kind: ScriptStruct; super: none
struct FTesterBaseMessage
{
public:
    std::uint8_t Identifier[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t FrameTime[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTesterBaseMessage, Identifier) == 0, "Offset mismatch for FTesterBaseMessage::Identifier");
static_assert(offsetof(FTesterBaseMessage, FrameTime) == 16, "Offset mismatch for FTesterBaseMessage::FrameTime");

// /Script/MessageBusTester.TesterDiscoveryMessage
// Kind: ScriptStruct; super: TesterBaseMessage
struct FTesterDiscoveryMessage
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Descriptor[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTesterDiscoveryMessage, Descriptor) == 32, "Offset mismatch for FTesterDiscoveryMessage::Descriptor");

// /Script/MessageBusTester.TesterInstanceDescriptor
// Kind: ScriptStruct; super: none
struct FTesterInstanceDescriptor
{
public:
    FString MachineName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint32_t ProcessId; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t FriendlyName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::int32_t SessionID; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t MessageVersion; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTesterInstanceDescriptor, MachineName) == 0, "Offset mismatch for FTesterInstanceDescriptor::MachineName");
static_assert(offsetof(FTesterInstanceDescriptor, ProcessId) == 16, "Offset mismatch for FTesterInstanceDescriptor::ProcessId");
static_assert(offsetof(FTesterInstanceDescriptor, FriendlyName) == 20, "Offset mismatch for FTesterInstanceDescriptor::FriendlyName");
static_assert(offsetof(FTesterInstanceDescriptor, SessionID) == 24, "Offset mismatch for FTesterInstanceDescriptor::SessionID");
static_assert(offsetof(FTesterInstanceDescriptor, MessageVersion) == 28, "Offset mismatch for FTesterInstanceDescriptor::MessageVersion");

// /Script/MessageBusTester.TesterKeepAliveMessage
// Kind: ScriptStruct; super: TesterBaseMessage
struct FTesterKeepAliveMessage
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint64_t KeepAliveNumber; // 0x0020 (Size: 0x8, Type: UInt64Property)
    std::uint8_t bReliablySent; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t State; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTesterKeepAliveMessage, KeepAliveNumber) == 32, "Offset mismatch for FTesterKeepAliveMessage::KeepAliveNumber");
static_assert(offsetof(FTesterKeepAliveMessage, bReliablySent) == 40, "Offset mismatch for FTesterKeepAliveMessage::bReliablySent");
static_assert(offsetof(FTesterKeepAliveMessage, State) == 41, "Offset mismatch for FTesterKeepAliveMessage::State");

// /Script/MessageBusTester.TesterStartTestMessage
// Kind: ScriptStruct; super: TesterBaseMessage
struct FTesterStartTestMessage
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t TestPlan[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTesterStartTestMessage, TestPlan) == 32, "Offset mismatch for FTesterStartTestMessage::TestPlan");

// /Script/MessageBusTester.TesterStopTestMessage
// Kind: ScriptStruct; super: TesterBaseMessage
struct FTesterStopTestMessage
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bEngineShouldExit; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTesterStopTestMessage, bEngineShouldExit) == 32, "Offset mismatch for FTesterStopTestMessage::bEngineShouldExit");

// /Script/MessageBusTester.MessageBusTesterSettings
// Kind: Class; super: DeveloperSettings
class UMessageBusTesterSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseSessionId; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::int32_t SessionID; // 0x0034 (Size: 0x4, Type: IntProperty)
    float TimeoutInterval; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float DiscoveryMessageInterval; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMessageBusTesterSettings, bUseSessionId) == 48, "Offset mismatch for UMessageBusTesterSettings::bUseSessionId");
static_assert(offsetof(UMessageBusTesterSettings, SessionID) == 52, "Offset mismatch for UMessageBusTesterSettings::SessionID");
static_assert(offsetof(UMessageBusTesterSettings, TimeoutInterval) == 56, "Offset mismatch for UMessageBusTesterSettings::TimeoutInterval");
static_assert(offsetof(UMessageBusTesterSettings, DiscoveryMessageInterval) == 60, "Offset mismatch for UMessageBusTesterSettings::DiscoveryMessageInterval");
