/**
 * decamp dumper generated SDK
 * Package: /Script/EngineMessages
 */
#pragma once
#include "Basic.h"

// /Script/EngineMessages.EngineServiceAuthDeny
// Kind: ScriptStruct; super: none
struct FEngineServiceAuthDeny
{
public:
    FString UserName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString UserToDeny; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEngineServiceAuthDeny, UserName) == 0, "Offset mismatch for FEngineServiceAuthDeny::UserName");
static_assert(offsetof(FEngineServiceAuthDeny, UserToDeny) == 16, "Offset mismatch for FEngineServiceAuthDeny::UserToDeny");

// /Script/EngineMessages.EngineServiceAuthGrant
// Kind: ScriptStruct; super: none
struct FEngineServiceAuthGrant
{
public:
    FString UserName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString UserToGrant; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEngineServiceAuthGrant, UserName) == 0, "Offset mismatch for FEngineServiceAuthGrant::UserName");
static_assert(offsetof(FEngineServiceAuthGrant, UserToGrant) == 16, "Offset mismatch for FEngineServiceAuthGrant::UserToGrant");

// /Script/EngineMessages.EngineServiceExecuteCommand
// Kind: ScriptStruct; super: none
struct FEngineServiceExecuteCommand
{
public:
    FString Command; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString UserName; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEngineServiceExecuteCommand, Command) == 0, "Offset mismatch for FEngineServiceExecuteCommand::Command");
static_assert(offsetof(FEngineServiceExecuteCommand, UserName) == 16, "Offset mismatch for FEngineServiceExecuteCommand::UserName");

// /Script/EngineMessages.EngineServiceNotification
// Kind: ScriptStruct; super: none
struct FEngineServiceNotification
{
public:
    FString Text; // 0x0000 (Size: 0x10, Type: StrProperty)
    double TimeSeconds; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FEngineServiceNotification, Text) == 0, "Offset mismatch for FEngineServiceNotification::Text");
static_assert(offsetof(FEngineServiceNotification, TimeSeconds) == 16, "Offset mismatch for FEngineServiceNotification::TimeSeconds");

// /Script/EngineMessages.EngineServicePing
// Kind: ScriptStruct; super: none
struct FEngineServicePing
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineMessages.EngineServicePong
// Kind: ScriptStruct; super: none
struct FEngineServicePong
{
public:
    FString CurrentLevel; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t EngineVersion; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t HasBegunPlay; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    std::uint8_t InstanceID[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    FString InstanceType; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t SessionID[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float WorldTimeSeconds; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEngineServicePong, CurrentLevel) == 0, "Offset mismatch for FEngineServicePong::CurrentLevel");
static_assert(offsetof(FEngineServicePong, EngineVersion) == 16, "Offset mismatch for FEngineServicePong::EngineVersion");
static_assert(offsetof(FEngineServicePong, HasBegunPlay) == 20, "Offset mismatch for FEngineServicePong::HasBegunPlay");
static_assert(offsetof(FEngineServicePong, InstanceID) == 24, "Offset mismatch for FEngineServicePong::InstanceID");
static_assert(offsetof(FEngineServicePong, InstanceType) == 40, "Offset mismatch for FEngineServicePong::InstanceType");
static_assert(offsetof(FEngineServicePong, SessionID) == 56, "Offset mismatch for FEngineServicePong::SessionID");
static_assert(offsetof(FEngineServicePong, WorldTimeSeconds) == 72, "Offset mismatch for FEngineServicePong::WorldTimeSeconds");

// /Script/EngineMessages.EngineServiceTerminate
// Kind: ScriptStruct; super: none
struct FEngineServiceTerminate
{
public:
    FString UserName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEngineServiceTerminate, UserName) == 0, "Offset mismatch for FEngineServiceTerminate::UserName");

// /Script/EngineMessages.TraceCapability
// Kind: ScriptStruct; super: none
struct FTraceCapability
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTraceCapability, Name) == 0, "Offset mismatch for FTraceCapability::Name");

// /Script/EngineMessages.TraceChannelPreset
// Kind: ScriptStruct; super: none
struct FTraceChannelPreset
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ChannelList; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsReadOnly; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceChannelPreset, Name) == 0, "Offset mismatch for FTraceChannelPreset::Name");
static_assert(offsetof(FTraceChannelPreset, ChannelList) == 16, "Offset mismatch for FTraceChannelPreset::ChannelList");
static_assert(offsetof(FTraceChannelPreset, bIsReadOnly) == 32, "Offset mismatch for FTraceChannelPreset::bIsReadOnly");

// /Script/EngineMessages.TraceControlBookmark
// Kind: ScriptStruct; super: none
struct FTraceControlBookmark
{
public:
    FString Label; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTraceControlBookmark, Label) == 0, "Offset mismatch for FTraceControlBookmark::Label");

// /Script/EngineMessages.TraceControlChannelsDesc
// Kind: ScriptStruct; super: none
struct FTraceControlChannelsDesc
{
public:
    TArray<void*> Channels; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IDs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Descriptions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReadOnlyIds; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTraceControlChannelsDesc, Channels) == 0, "Offset mismatch for FTraceControlChannelsDesc::Channels");
static_assert(offsetof(FTraceControlChannelsDesc, IDs) == 16, "Offset mismatch for FTraceControlChannelsDesc::IDs");
static_assert(offsetof(FTraceControlChannelsDesc, Descriptions) == 32, "Offset mismatch for FTraceControlChannelsDesc::Descriptions");
static_assert(offsetof(FTraceControlChannelsDesc, ReadOnlyIds) == 48, "Offset mismatch for FTraceControlChannelsDesc::ReadOnlyIds");

// /Script/EngineMessages.TraceControlChannelsPing
// Kind: ScriptStruct; super: none
struct FTraceControlChannelsPing
{
public:
    std::uint32_t KnownChannelCount; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FTraceControlChannelsPing, KnownChannelCount) == 0, "Offset mismatch for FTraceControlChannelsPing::KnownChannelCount");

// /Script/EngineMessages.TraceControlChannelsSet
// Kind: ScriptStruct; super: none
struct FTraceControlChannelsSet
{
public:
    TArray<void*> ChannelIdsToEnable; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChannelIdsToDisable; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTraceControlChannelsSet, ChannelIdsToEnable) == 0, "Offset mismatch for FTraceControlChannelsSet::ChannelIdsToEnable");
static_assert(offsetof(FTraceControlChannelsSet, ChannelIdsToDisable) == 16, "Offset mismatch for FTraceControlChannelsSet::ChannelIdsToDisable");

// /Script/EngineMessages.TraceControlChannelsSetError
// Kind: ScriptStruct; super: none
struct FTraceControlChannelsSetError
{
public:
    TMap<void*, void*> Errors; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FTraceControlChannelsSetError, Errors) == 0, "Offset mismatch for FTraceControlChannelsSetError::Errors");

// /Script/EngineMessages.TraceControlChannelsStatus
// Kind: ScriptStruct; super: none
struct FTraceControlChannelsStatus
{
public:
    TArray<void*> EnabledIds; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTraceControlChannelsStatus, EnabledIds) == 0, "Offset mismatch for FTraceControlChannelsStatus::EnabledIds");

// /Script/EngineMessages.TraceControlDiscovery
// Kind: ScriptStruct; super: TraceControlStatus
struct FTraceControlDiscovery
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SessionID[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceID[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTraceControlDiscovery, SessionID) == 104, "Offset mismatch for FTraceControlDiscovery::SessionID");
static_assert(offsetof(FTraceControlDiscovery, InstanceID) == 120, "Offset mismatch for FTraceControlDiscovery::InstanceID");

// /Script/EngineMessages.TraceControlDiscoveryPing
// Kind: ScriptStruct; super: none
struct FTraceControlDiscoveryPing
{
public:
    std::uint8_t SessionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTraceControlDiscoveryPing, SessionID) == 0, "Offset mismatch for FTraceControlDiscoveryPing::SessionID");
static_assert(offsetof(FTraceControlDiscoveryPing, InstanceID) == 16, "Offset mismatch for FTraceControlDiscoveryPing::InstanceID");

// /Script/EngineMessages.TraceControlFile
// Kind: ScriptStruct; super: TraceControlStartCommon
struct FTraceControlFile
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FString File; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bTruncateFile; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceControlFile, File) == 24, "Offset mismatch for FTraceControlFile::File");
static_assert(offsetof(FTraceControlFile, bTruncateFile) == 40, "Offset mismatch for FTraceControlFile::bTruncateFile");

// /Script/EngineMessages.TraceControlPause
// Kind: ScriptStruct; super: none
struct FTraceControlPause
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineMessages.TraceControlResume
// Kind: ScriptStruct; super: none
struct FTraceControlResume
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineMessages.TraceControlScreenshot
// Kind: ScriptStruct; super: none
struct FTraceControlScreenshot
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bShowUI; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceControlScreenshot, Name) == 0, "Offset mismatch for FTraceControlScreenshot::Name");
static_assert(offsetof(FTraceControlScreenshot, bShowUI) == 16, "Offset mismatch for FTraceControlScreenshot::bShowUI");

// /Script/EngineMessages.TraceControlSecure
// Kind: ScriptStruct; super: TraceControlStartCommon
struct FTraceControlSecure
{
public:
    FString Channels; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bExcludeTail; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceControlSecure, Channels) == 0, "Offset mismatch for FTraceControlSecure::Channels");
static_assert(offsetof(FTraceControlSecure, bExcludeTail) == 16, "Offset mismatch for FTraceControlSecure::bExcludeTail");

// /Script/EngineMessages.TraceControlSecureResponse
// Kind: ScriptStruct; super: none
struct FTraceControlSecureResponse
{
public:
    FString Host; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint16_t Port; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Mode; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0013
    TArray<void*> AuthorizationToken; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CertificateAuthority; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FString Identity; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTraceControlSecureResponse, Host) == 0, "Offset mismatch for FTraceControlSecureResponse::Host");
static_assert(offsetof(FTraceControlSecureResponse, Port) == 16, "Offset mismatch for FTraceControlSecureResponse::Port");
static_assert(offsetof(FTraceControlSecureResponse, Mode) == 18, "Offset mismatch for FTraceControlSecureResponse::Mode");
static_assert(offsetof(FTraceControlSecureResponse, AuthorizationToken) == 24, "Offset mismatch for FTraceControlSecureResponse::AuthorizationToken");
static_assert(offsetof(FTraceControlSecureResponse, CertificateAuthority) == 40, "Offset mismatch for FTraceControlSecureResponse::CertificateAuthority");
static_assert(offsetof(FTraceControlSecureResponse, Identity) == 56, "Offset mismatch for FTraceControlSecureResponse::Identity");

// /Script/EngineMessages.TraceControlSend
// Kind: ScriptStruct; super: TraceControlStartCommon
struct FTraceControlSend
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FString Host; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTraceControlSend, Host) == 24, "Offset mismatch for FTraceControlSend::Host");

// /Script/EngineMessages.TraceControlSetStatNamedEvents
// Kind: ScriptStruct; super: none
struct FTraceControlSetStatNamedEvents
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceControlSetStatNamedEvents, bEnabled) == 0, "Offset mismatch for FTraceControlSetStatNamedEvents::bEnabled");

// /Script/EngineMessages.TraceControlSettings
// Kind: ScriptStruct; super: none
struct FTraceControlSettings
{
public:
    std::uint8_t bUseWorkerThread; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseImportantCache; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint32_t TailSizeBytes; // 0x0004 (Size: 0x4, Type: UInt32Property)
    TArray<void*> ChannelPresets; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Capabilities; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTraceControlSettings, bUseWorkerThread) == 0, "Offset mismatch for FTraceControlSettings::bUseWorkerThread");
static_assert(offsetof(FTraceControlSettings, bUseImportantCache) == 1, "Offset mismatch for FTraceControlSettings::bUseImportantCache");
static_assert(offsetof(FTraceControlSettings, TailSizeBytes) == 4, "Offset mismatch for FTraceControlSettings::TailSizeBytes");
static_assert(offsetof(FTraceControlSettings, ChannelPresets) == 8, "Offset mismatch for FTraceControlSettings::ChannelPresets");
static_assert(offsetof(FTraceControlSettings, Capabilities) == 24, "Offset mismatch for FTraceControlSettings::Capabilities");

// /Script/EngineMessages.TraceControlSettingsPing
// Kind: ScriptStruct; super: none
struct FTraceControlSettingsPing
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineMessages.TraceControlSnapshotFile
// Kind: ScriptStruct; super: none
struct FTraceControlSnapshotFile
{
public:
    FString File; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTraceControlSnapshotFile, File) == 0, "Offset mismatch for FTraceControlSnapshotFile::File");

// /Script/EngineMessages.TraceControlSnapshotSend
// Kind: ScriptStruct; super: none
struct FTraceControlSnapshotSend
{
public:
    FString Host; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTraceControlSnapshotSend, Host) == 0, "Offset mismatch for FTraceControlSnapshotSend::Host");

// /Script/EngineMessages.TraceControlStartCommon
// Kind: ScriptStruct; super: none
struct FTraceControlStartCommon
{
public:
    FString Channels; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bExcludeTail; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTraceControlStartCommon, Channels) == 0, "Offset mismatch for FTraceControlStartCommon::Channels");
static_assert(offsetof(FTraceControlStartCommon, bExcludeTail) == 16, "Offset mismatch for FTraceControlStartCommon::bExcludeTail");

// /Script/EngineMessages.TraceControlStatus
// Kind: ScriptStruct; super: none
struct FTraceControlStatus
{
public:
    FString Endpoint; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SessionGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t TraceGuid[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint64_t bytesSent; // 0x0030 (Size: 0x8, Type: UInt64Property)
    std::uint64_t BytesTraced; // 0x0038 (Size: 0x8, Type: UInt64Property)
    std::uint64_t MemoryUsed; // 0x0040 (Size: 0x8, Type: UInt64Property)
    std::uint32_t CacheAllocated; // 0x0048 (Size: 0x4, Type: UInt32Property)
    std::uint32_t CacheUsed; // 0x004C (Size: 0x4, Type: UInt32Property)
    std::uint32_t CacheWaste; // 0x0050 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bAreStatNamedEventsEnabled; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPaused; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTracing; // 0x0056 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0057
    std::uint8_t StatusTimestamp[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t TraceSystemStatus; // 0x0060 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FTraceControlStatus, Endpoint) == 0, "Offset mismatch for FTraceControlStatus::Endpoint");
static_assert(offsetof(FTraceControlStatus, SessionGuid) == 16, "Offset mismatch for FTraceControlStatus::SessionGuid");
static_assert(offsetof(FTraceControlStatus, TraceGuid) == 32, "Offset mismatch for FTraceControlStatus::TraceGuid");
static_assert(offsetof(FTraceControlStatus, bytesSent) == 48, "Offset mismatch for FTraceControlStatus::bytesSent");
static_assert(offsetof(FTraceControlStatus, BytesTraced) == 56, "Offset mismatch for FTraceControlStatus::BytesTraced");
static_assert(offsetof(FTraceControlStatus, MemoryUsed) == 64, "Offset mismatch for FTraceControlStatus::MemoryUsed");
static_assert(offsetof(FTraceControlStatus, CacheAllocated) == 72, "Offset mismatch for FTraceControlStatus::CacheAllocated");
static_assert(offsetof(FTraceControlStatus, CacheUsed) == 76, "Offset mismatch for FTraceControlStatus::CacheUsed");
static_assert(offsetof(FTraceControlStatus, CacheWaste) == 80, "Offset mismatch for FTraceControlStatus::CacheWaste");
static_assert(offsetof(FTraceControlStatus, bAreStatNamedEventsEnabled) == 84, "Offset mismatch for FTraceControlStatus::bAreStatNamedEventsEnabled");
static_assert(offsetof(FTraceControlStatus, bIsPaused) == 85, "Offset mismatch for FTraceControlStatus::bIsPaused");
static_assert(offsetof(FTraceControlStatus, bIsTracing) == 86, "Offset mismatch for FTraceControlStatus::bIsTracing");
static_assert(offsetof(FTraceControlStatus, StatusTimestamp) == 88, "Offset mismatch for FTraceControlStatus::StatusTimestamp");
static_assert(offsetof(FTraceControlStatus, TraceSystemStatus) == 96, "Offset mismatch for FTraceControlStatus::TraceSystemStatus");

// /Script/EngineMessages.TraceControlStatusPing
// Kind: ScriptStruct; super: none
struct FTraceControlStatusPing
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EngineMessages.TraceControlStop
// Kind: ScriptStruct; super: none
struct FTraceControlStop
{
public:
    std::uint8_t Opaque[1];
};
