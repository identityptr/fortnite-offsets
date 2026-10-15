/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkHubMessaging
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkHubMessaging.LiveLinkClientInfoMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkClientInfoMessage
{
public:
    FString LongName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Status; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString HostName; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString ProjectName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString CurrentLevel; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString LiveLinkInstanceName; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t TopologyMode; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::int32_t LiveLinkVersion; // 0x005C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkClientInfoMessage, LongName) == 0, "Offset mismatch for FLiveLinkClientInfoMessage::LongName");
static_assert(offsetof(FLiveLinkClientInfoMessage, Status) == 16, "Offset mismatch for FLiveLinkClientInfoMessage::Status");
static_assert(offsetof(FLiveLinkClientInfoMessage, HostName) == 24, "Offset mismatch for FLiveLinkClientInfoMessage::HostName");
static_assert(offsetof(FLiveLinkClientInfoMessage, ProjectName) == 40, "Offset mismatch for FLiveLinkClientInfoMessage::ProjectName");
static_assert(offsetof(FLiveLinkClientInfoMessage, CurrentLevel) == 56, "Offset mismatch for FLiveLinkClientInfoMessage::CurrentLevel");
static_assert(offsetof(FLiveLinkClientInfoMessage, LiveLinkInstanceName) == 72, "Offset mismatch for FLiveLinkClientInfoMessage::LiveLinkInstanceName");
static_assert(offsetof(FLiveLinkClientInfoMessage, TopologyMode) == 88, "Offset mismatch for FLiveLinkClientInfoMessage::TopologyMode");
static_assert(offsetof(FLiveLinkClientInfoMessage, LiveLinkVersion) == 92, "Offset mismatch for FLiveLinkClientInfoMessage::LiveLinkVersion");

// /Script/LiveLinkHubMessaging.LiveLinkHubAuxChannelAcceptMessage
// Kind: ScriptStruct; super: LiveLinkHubAuxChannelBaseMessage
struct FLiveLinkHubAuxChannelAcceptMessage
{
public:
    std::int32_t AuxProtocolVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ChannelId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubAuxChannelAcceptMessage, AuxProtocolVersion) == 0, "Offset mismatch for FLiveLinkHubAuxChannelAcceptMessage::AuxProtocolVersion");
static_assert(offsetof(FLiveLinkHubAuxChannelAcceptMessage, ChannelId) == 4, "Offset mismatch for FLiveLinkHubAuxChannelAcceptMessage::ChannelId");

// /Script/LiveLinkHubMessaging.LiveLinkHubAuxChannelBaseMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHubAuxChannelBaseMessage
{
public:
    std::int32_t AuxProtocolVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ChannelId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubAuxChannelBaseMessage, AuxProtocolVersion) == 0, "Offset mismatch for FLiveLinkHubAuxChannelBaseMessage::AuxProtocolVersion");
static_assert(offsetof(FLiveLinkHubAuxChannelBaseMessage, ChannelId) == 4, "Offset mismatch for FLiveLinkHubAuxChannelBaseMessage::ChannelId");

// /Script/LiveLinkHubMessaging.LiveLinkHubAuxChannelCloseMessage
// Kind: ScriptStruct; super: LiveLinkHubAuxChannelBaseMessage
struct FLiveLinkHubAuxChannelCloseMessage
{
public:
    std::int32_t AuxProtocolVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ChannelId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubAuxChannelCloseMessage, AuxProtocolVersion) == 0, "Offset mismatch for FLiveLinkHubAuxChannelCloseMessage::AuxProtocolVersion");
static_assert(offsetof(FLiveLinkHubAuxChannelCloseMessage, ChannelId) == 4, "Offset mismatch for FLiveLinkHubAuxChannelCloseMessage::ChannelId");

// /Script/LiveLinkHubMessaging.LiveLinkHubAuxChannelRejectMessage
// Kind: ScriptStruct; super: LiveLinkHubAuxChannelBaseMessage
struct FLiveLinkHubAuxChannelRejectMessage
{
public:
    std::int32_t AuxProtocolVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ChannelId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubAuxChannelRejectMessage, AuxProtocolVersion) == 0, "Offset mismatch for FLiveLinkHubAuxChannelRejectMessage::AuxProtocolVersion");
static_assert(offsetof(FLiveLinkHubAuxChannelRejectMessage, ChannelId) == 4, "Offset mismatch for FLiveLinkHubAuxChannelRejectMessage::ChannelId");

// /Script/LiveLinkHubMessaging.LiveLinkHubAuxChannelRequestMessage
// Kind: ScriptStruct; super: LiveLinkHubAuxChannelBaseMessage
struct FLiveLinkHubAuxChannelRequestMessage
{
public:
    std::int32_t AuxProtocolVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ChannelId[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubAuxChannelRequestMessage, AuxProtocolVersion) == 0, "Offset mismatch for FLiveLinkHubAuxChannelRequestMessage::AuxProtocolVersion");
static_assert(offsetof(FLiveLinkHubAuxChannelRequestMessage, ChannelId) == 4, "Offset mismatch for FLiveLinkHubAuxChannelRequestMessage::ChannelId");

// /Script/LiveLinkHubMessaging.LiveLinkHubBeaconMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHubBeaconMessage
{
public:
    std::uint8_t TopologyMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString HostName; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString ProjectName; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString LevelName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t InstanceID[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubBeaconMessage, TopologyMode) == 0, "Offset mismatch for FLiveLinkHubBeaconMessage::TopologyMode");
static_assert(offsetof(FLiveLinkHubBeaconMessage, HostName) == 8, "Offset mismatch for FLiveLinkHubBeaconMessage::HostName");
static_assert(offsetof(FLiveLinkHubBeaconMessage, ProjectName) == 24, "Offset mismatch for FLiveLinkHubBeaconMessage::ProjectName");
static_assert(offsetof(FLiveLinkHubBeaconMessage, LevelName) == 40, "Offset mismatch for FLiveLinkHubBeaconMessage::LevelName");
static_assert(offsetof(FLiveLinkHubBeaconMessage, InstanceID) == 56, "Offset mismatch for FLiveLinkHubBeaconMessage::InstanceID");

// /Script/LiveLinkHubMessaging.LiveLinkHubConnectMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHubConnectMessage
{
public:
    std::uint8_t ClientInfo[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    FString ControlEndpoint; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t SourceGuid[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubConnectMessage, ClientInfo) == 0, "Offset mismatch for FLiveLinkHubConnectMessage::ClientInfo");
static_assert(offsetof(FLiveLinkHubConnectMessage, ControlEndpoint) == 96, "Offset mismatch for FLiveLinkHubConnectMessage::ControlEndpoint");
static_assert(offsetof(FLiveLinkHubConnectMessage, SourceGuid) == 112, "Offset mismatch for FLiveLinkHubConnectMessage::SourceGuid");

// /Script/LiveLinkHubMessaging.LiveLinkHubCustomTimeStepSettings
// Kind: ScriptStruct; super: none
struct FLiveLinkHubCustomTimeStepSettings
{
public:
    std::uint8_t bResetCustomTimeStep; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Kind; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bLockStepMode; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::uint32_t FrameRateDivider; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint8_t SubjectName[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t CustomTimeStepRate[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t bErrorIfFrameAreNotConsecutive; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bErrorIfTimecodeProviderChanged; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSubframes; // 0x0016 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0017
    float MaxDeltaTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, bResetCustomTimeStep) == 0, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::bResetCustomTimeStep");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, Kind) == 1, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::Kind");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, bLockStepMode) == 2, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::bLockStepMode");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, FrameRateDivider) == 4, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::FrameRateDivider");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, SubjectName) == 8, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::SubjectName");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, CustomTimeStepRate) == 12, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::CustomTimeStepRate");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, bErrorIfFrameAreNotConsecutive) == 20, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::bErrorIfFrameAreNotConsecutive");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, bErrorIfTimecodeProviderChanged) == 21, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::bErrorIfTimecodeProviderChanged");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, bIgnoreSubframes) == 22, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::bIgnoreSubframes");
static_assert(offsetof(FLiveLinkHubCustomTimeStepSettings, MaxDeltaTime) == 24, "Offset mismatch for FLiveLinkHubCustomTimeStepSettings::MaxDeltaTime");

// /Script/LiveLinkHubMessaging.LiveLinkHubDisconnectMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHubDisconnectMessage
{
public:
    FString ProviderName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString MachineName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t SourceGuid[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubDisconnectMessage, ProviderName) == 0, "Offset mismatch for FLiveLinkHubDisconnectMessage::ProviderName");
static_assert(offsetof(FLiveLinkHubDisconnectMessage, MachineName) == 16, "Offset mismatch for FLiveLinkHubDisconnectMessage::MachineName");
static_assert(offsetof(FLiveLinkHubDisconnectMessage, SourceGuid) == 32, "Offset mismatch for FLiveLinkHubDisconnectMessage::SourceGuid");

// /Script/LiveLinkHubMessaging.LiveLinkHubDiscoveryMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHubDiscoveryMessage
{
public:
    FString ProviderName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString MachineName; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString InstanceID; // 0x0028 (Size: 0x10, Type: StrProperty)
    double CreationTime; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::int32_t LiveLinkVersion; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t DiscoveryProtocolVersion; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLiveLinkHubDiscoveryMessage, ProviderName) == 0, "Offset mismatch for FLiveLinkHubDiscoveryMessage::ProviderName");
static_assert(offsetof(FLiveLinkHubDiscoveryMessage, Mode) == 16, "Offset mismatch for FLiveLinkHubDiscoveryMessage::Mode");
static_assert(offsetof(FLiveLinkHubDiscoveryMessage, MachineName) == 24, "Offset mismatch for FLiveLinkHubDiscoveryMessage::MachineName");
static_assert(offsetof(FLiveLinkHubDiscoveryMessage, InstanceID) == 40, "Offset mismatch for FLiveLinkHubDiscoveryMessage::InstanceID");
static_assert(offsetof(FLiveLinkHubDiscoveryMessage, CreationTime) == 56, "Offset mismatch for FLiveLinkHubDiscoveryMessage::CreationTime");
static_assert(offsetof(FLiveLinkHubDiscoveryMessage, LiveLinkVersion) == 64, "Offset mismatch for FLiveLinkHubDiscoveryMessage::LiveLinkVersion");
static_assert(offsetof(FLiveLinkHubDiscoveryMessage, DiscoveryProtocolVersion) == 68, "Offset mismatch for FLiveLinkHubDiscoveryMessage::DiscoveryProtocolVersion");

// /Script/LiveLinkHubMessaging.LiveLinkHubSourceEvaluationModeMessage
// Kind: ScriptStruct; super: none
struct FLiveLinkHubSourceEvaluationModeMessage
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t SourceGuid[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLiveLinkHubSourceEvaluationModeMessage, Mode) == 0, "Offset mismatch for FLiveLinkHubSourceEvaluationModeMessage::Mode");
static_assert(offsetof(FLiveLinkHubSourceEvaluationModeMessage, SourceGuid) == 4, "Offset mismatch for FLiveLinkHubSourceEvaluationModeMessage::SourceGuid");

// /Script/LiveLinkHubMessaging.LiveLinkHubTimecodeSettings
// Kind: ScriptStruct; super: none
struct FLiveLinkHubTimecodeSettings
{
public:
    std::uint8_t Source; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t SubjectName[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t DesiredFrameRate[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    float FrameDelay; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t BufferSize; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t EvaluationType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::uint8_t OverrideEvaluationType[0x1]; // 0x001C (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FLiveLinkHubTimecodeSettings, Source) == 0, "Offset mismatch for FLiveLinkHubTimecodeSettings::Source");
static_assert(offsetof(FLiveLinkHubTimecodeSettings, SubjectName) == 4, "Offset mismatch for FLiveLinkHubTimecodeSettings::SubjectName");
static_assert(offsetof(FLiveLinkHubTimecodeSettings, DesiredFrameRate) == 8, "Offset mismatch for FLiveLinkHubTimecodeSettings::DesiredFrameRate");
static_assert(offsetof(FLiveLinkHubTimecodeSettings, FrameDelay) == 16, "Offset mismatch for FLiveLinkHubTimecodeSettings::FrameDelay");
static_assert(offsetof(FLiveLinkHubTimecodeSettings, BufferSize) == 20, "Offset mismatch for FLiveLinkHubTimecodeSettings::BufferSize");
static_assert(offsetof(FLiveLinkHubTimecodeSettings, EvaluationType) == 24, "Offset mismatch for FLiveLinkHubTimecodeSettings::EvaluationType");
static_assert(offsetof(FLiveLinkHubTimecodeSettings, OverrideEvaluationType) == 28, "Offset mismatch for FLiveLinkHubTimecodeSettings::OverrideEvaluationType");

// /Script/LiveLinkHubMessaging.LiveLinkHubCustomTimeStep
// Kind: Class; super: LiveLinkCustomTimeStep
class ULiveLinkHubCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LiveLinkDataRate[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubjectKey[0x14]; // 0x0038 (Size: 0x14, Type: StructProperty)
    std::uint8_t bLockStepMode; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    std::uint32_t FrameRateDivider; // 0x0050 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    double TimeoutInSeconds; // 0x0058 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(ULiveLinkHubCustomTimeStep, LiveLinkDataRate) == 48, "Offset mismatch for ULiveLinkHubCustomTimeStep::LiveLinkDataRate");
static_assert(offsetof(ULiveLinkHubCustomTimeStep, SubjectKey) == 56, "Offset mismatch for ULiveLinkHubCustomTimeStep::SubjectKey");
static_assert(offsetof(ULiveLinkHubCustomTimeStep, bLockStepMode) == 76, "Offset mismatch for ULiveLinkHubCustomTimeStep::bLockStepMode");
static_assert(offsetof(ULiveLinkHubCustomTimeStep, FrameRateDivider) == 80, "Offset mismatch for ULiveLinkHubCustomTimeStep::FrameRateDivider");
static_assert(offsetof(ULiveLinkHubCustomTimeStep, TimeoutInSeconds) == 88, "Offset mismatch for ULiveLinkHubCustomTimeStep::TimeoutInSeconds");

// /Script/LiveLinkHubMessaging.LiveLinkHubMessageBusSourceFactory
// Kind: Class; super: LiveLinkMessageBusSourceFactory
class ULiveLinkHubMessageBusSourceFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LiveLinkHubMessaging.LiveLinkHubMessageBusSourceSettings
// Kind: Class; super: LiveLinkMessageBusSourceSettings
class ULiveLinkHubMessageBusSourceSettings
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t bEnableFrameResequencing; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B9
    std::int32_t ResequencerMaxBufferSize; // 0x00BC (Size: 0x4, Type: IntProperty)
    float ResequencerMaxWaitTimeSeconds; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULiveLinkHubMessageBusSourceSettings, bEnableFrameResequencing) == 184, "Offset mismatch for ULiveLinkHubMessageBusSourceSettings::bEnableFrameResequencing");
static_assert(offsetof(ULiveLinkHubMessageBusSourceSettings, ResequencerMaxBufferSize) == 188, "Offset mismatch for ULiveLinkHubMessageBusSourceSettings::ResequencerMaxBufferSize");
static_assert(offsetof(ULiveLinkHubMessageBusSourceSettings, ResequencerMaxWaitTimeSeconds) == 192, "Offset mismatch for ULiveLinkHubMessageBusSourceSettings::ResequencerMaxWaitTimeSeconds");

// /Script/LiveLinkHubMessaging.LiveLinkHubMessagingSettings
// Kind: Class; super: Object
class ULiveLinkHubMessagingSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAllowReceivingFromUnreal; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkHubMessagingSettings, bAllowReceivingFromUnreal) == 40, "Offset mismatch for ULiveLinkHubMessagingSettings::bAllowReceivingFromUnreal");

// /Script/LiveLinkHubMessaging.LiveLinkHubTimecodeCustomTimeStep
// Kind: Class; super: TimecodeCustomTimeStep
class ULiveLinkHubTimecodeCustomTimeStep
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bErrorIfFrameAreNotConsecutive; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bErrorIfTimecodeProviderChanged; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    float MaxDeltaTime; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreSubframes; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULiveLinkHubTimecodeCustomTimeStep, bErrorIfFrameAreNotConsecutive) == 40, "Offset mismatch for ULiveLinkHubTimecodeCustomTimeStep::bErrorIfFrameAreNotConsecutive");
static_assert(offsetof(ULiveLinkHubTimecodeCustomTimeStep, bErrorIfTimecodeProviderChanged) == 41, "Offset mismatch for ULiveLinkHubTimecodeCustomTimeStep::bErrorIfTimecodeProviderChanged");
static_assert(offsetof(ULiveLinkHubTimecodeCustomTimeStep, MaxDeltaTime) == 44, "Offset mismatch for ULiveLinkHubTimecodeCustomTimeStep::MaxDeltaTime");
static_assert(offsetof(ULiveLinkHubTimecodeCustomTimeStep, bIgnoreSubframes) == 48, "Offset mismatch for ULiveLinkHubTimecodeCustomTimeStep::bIgnoreSubframes");
