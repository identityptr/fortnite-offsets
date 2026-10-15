/**
 * decamp dumper generated SDK
 * Package: /Script/Qos
 */
#pragma once
#include "Basic.h"

// /Script/Qos.DatacenterQosInstance
// Kind: ScriptStruct; super: none
struct FDatacenterQosInstance
{
public:
    std::uint8_t Definition[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t Result; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0039
    std::int32_t AvgPingMs; // 0x003C (Size: 0x4, Type: IntProperty)
    TArray<void*> PingResults; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0050
    std::uint8_t LastCheckTimestamp[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUsable; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDatacenterQosInstance, Definition) == 0, "Offset mismatch for FDatacenterQosInstance::Definition");
static_assert(offsetof(FDatacenterQosInstance, Result) == 56, "Offset mismatch for FDatacenterQosInstance::Result");
static_assert(offsetof(FDatacenterQosInstance, AvgPingMs) == 60, "Offset mismatch for FDatacenterQosInstance::AvgPingMs");
static_assert(offsetof(FDatacenterQosInstance, PingResults) == 64, "Offset mismatch for FDatacenterQosInstance::PingResults");
static_assert(offsetof(FDatacenterQosInstance, LastCheckTimestamp) == 88, "Offset mismatch for FDatacenterQosInstance::LastCheckTimestamp");
static_assert(offsetof(FDatacenterQosInstance, bUsable) == 96, "Offset mismatch for FDatacenterQosInstance::bUsable");

// /Script/Qos.QosDatacenterInfo
// Kind: ScriptStruct; super: none
struct FQosDatacenterInfo
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString RegionId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    TArray<void*> Servers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FQosDatacenterInfo, ID) == 0, "Offset mismatch for FQosDatacenterInfo::ID");
static_assert(offsetof(FQosDatacenterInfo, RegionId) == 16, "Offset mismatch for FQosDatacenterInfo::RegionId");
static_assert(offsetof(FQosDatacenterInfo, bEnabled) == 32, "Offset mismatch for FQosDatacenterInfo::bEnabled");
static_assert(offsetof(FQosDatacenterInfo, Servers) == 40, "Offset mismatch for FQosDatacenterInfo::Servers");

// /Script/Qos.QosPingServerInfo
// Kind: ScriptStruct; super: none
struct FQosPingServerInfo
{
public:
    FString Address; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Port; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FQosPingServerInfo, Address) == 0, "Offset mismatch for FQosPingServerInfo::Address");
static_assert(offsetof(FQosPingServerInfo, Port) == 16, "Offset mismatch for FQosPingServerInfo::Port");

// /Script/Qos.QosRegionInfo
// Kind: ScriptStruct; super: none
struct FQosRegionInfo
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString RegionId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisible; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoAssignable; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSubspaceBias; // 0x0023 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SubspaceBiasParams[0x1]; // 0x0024 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQosRegionInfo, DisplayName) == 0, "Offset mismatch for FQosRegionInfo::DisplayName");
static_assert(offsetof(FQosRegionInfo, RegionId) == 16, "Offset mismatch for FQosRegionInfo::RegionId");
static_assert(offsetof(FQosRegionInfo, bEnabled) == 32, "Offset mismatch for FQosRegionInfo::bEnabled");
static_assert(offsetof(FQosRegionInfo, bVisible) == 33, "Offset mismatch for FQosRegionInfo::bVisible");
static_assert(offsetof(FQosRegionInfo, bAutoAssignable) == 34, "Offset mismatch for FQosRegionInfo::bAutoAssignable");
static_assert(offsetof(FQosRegionInfo, bAllowSubspaceBias) == 35, "Offset mismatch for FQosRegionInfo::bAllowSubspaceBias");
static_assert(offsetof(FQosRegionInfo, SubspaceBiasParams) == 36, "Offset mismatch for FQosRegionInfo::SubspaceBiasParams");

// /Script/Qos.QosSubspaceComparisonParams
// Kind: ScriptStruct; super: none
struct FQosSubspaceComparisonParams
{
public:
    std::int32_t MaxNonSubspacePingMs; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MinSubspacePingMs; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ConstantMaxToleranceMs; // 0x0008 (Size: 0x4, Type: IntProperty)
    float ScaledMaxTolerancePct; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FQosSubspaceComparisonParams, MaxNonSubspacePingMs) == 0, "Offset mismatch for FQosSubspaceComparisonParams::MaxNonSubspacePingMs");
static_assert(offsetof(FQosSubspaceComparisonParams, MinSubspacePingMs) == 4, "Offset mismatch for FQosSubspaceComparisonParams::MinSubspacePingMs");
static_assert(offsetof(FQosSubspaceComparisonParams, ConstantMaxToleranceMs) == 8, "Offset mismatch for FQosSubspaceComparisonParams::ConstantMaxToleranceMs");
static_assert(offsetof(FQosSubspaceComparisonParams, ScaledMaxTolerancePct) == 12, "Offset mismatch for FQosSubspaceComparisonParams::ScaledMaxTolerancePct");

// /Script/Qos.RegionQosInstance
// Kind: ScriptStruct; super: none
struct FRegionQosInstance
{
public:
    std::uint8_t Definition[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    TArray<void*> DatacenterOptions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRegionQosInstance, Definition) == 0, "Offset mismatch for FRegionQosInstance::Definition");
static_assert(offsetof(FRegionQosInstance, DatacenterOptions) == 56, "Offset mismatch for FRegionQosInstance::DatacenterOptions");

// /Script/Qos.QosBeaconClient
// Kind: Class; super: OnlineBeaconClient
class UQosBeaconClient
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* BeaconOwner; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* BeaconConnection; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConnectionState; // 0x02C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UQosBeaconClient, BeaconOwner) == 688, "Offset mismatch for UQosBeaconClient::BeaconOwner");
static_assert(offsetof(UQosBeaconClient, BeaconConnection) == 696, "Offset mismatch for UQosBeaconClient::BeaconConnection");
static_assert(offsetof(UQosBeaconClient, ConnectionState) == 704, "Offset mismatch for UQosBeaconClient::ConnectionState");

// /Script/Qos.QosBeaconHost
// Kind: Class; super: OnlineBeaconHostObject
class UQosBeaconHost
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString BeaconTypeName; // 0x0270 (Size: 0x10, Type: StrProperty)
    void* ClientBeaconActorClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ClientActors; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    FName ClientBeaconActorChannelName; // 0x0298 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UQosBeaconHost, BeaconTypeName) == 624, "Offset mismatch for UQosBeaconHost::BeaconTypeName");
static_assert(offsetof(UQosBeaconHost, ClientBeaconActorClass) == 640, "Offset mismatch for UQosBeaconHost::ClientBeaconActorClass");
static_assert(offsetof(UQosBeaconHost, ClientActors) == 648, "Offset mismatch for UQosBeaconHost::ClientActors");
static_assert(offsetof(UQosBeaconHost, ClientBeaconActorChannelName) == 664, "Offset mismatch for UQosBeaconHost::ClientBeaconActorChannelName");

// /Script/Qos.QosEvaluator
// Kind: Class; super: Object
class UQosEvaluator
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bInProgress; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelOperation; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    TArray<void*> Datacenters; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQosEvaluator, bInProgress) == 72, "Offset mismatch for UQosEvaluator::bInProgress");
static_assert(offsetof(UQosEvaluator, bCancelOperation) == 73, "Offset mismatch for UQosEvaluator::bCancelOperation");
static_assert(offsetof(UQosEvaluator, Datacenters) == 80, "Offset mismatch for UQosEvaluator::Datacenters");

// /Script/Qos.QosRegionManager
// Kind: Class; super: Object
class UQosRegionManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumTestsPerRegion; // 0x0028 (Size: 0x4, Type: IntProperty)
    float PingTimeout; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableSubspaceBiasOrder; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString SubspaceDelimiter; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t SubspaceBiasParams[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    TArray<void*> RegionDefinitions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DatacenterDefinitions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LastCheckTimestamp[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    void* Evaluator; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t QosEvalResult; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    TArray<void*> RegionOptions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    FString ForceRegionId; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bRegionForcedViaCommandline; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00B1
    FString SelectedRegionId; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UQosRegionManager, NumTestsPerRegion) == 40, "Offset mismatch for UQosRegionManager::NumTestsPerRegion");
static_assert(offsetof(UQosRegionManager, PingTimeout) == 44, "Offset mismatch for UQosRegionManager::PingTimeout");
static_assert(offsetof(UQosRegionManager, bEnableSubspaceBiasOrder) == 48, "Offset mismatch for UQosRegionManager::bEnableSubspaceBiasOrder");
static_assert(offsetof(UQosRegionManager, SubspaceDelimiter) == 56, "Offset mismatch for UQosRegionManager::SubspaceDelimiter");
static_assert(offsetof(UQosRegionManager, SubspaceBiasParams) == 72, "Offset mismatch for UQosRegionManager::SubspaceBiasParams");
static_assert(offsetof(UQosRegionManager, RegionDefinitions) == 88, "Offset mismatch for UQosRegionManager::RegionDefinitions");
static_assert(offsetof(UQosRegionManager, DatacenterDefinitions) == 104, "Offset mismatch for UQosRegionManager::DatacenterDefinitions");
static_assert(offsetof(UQosRegionManager, LastCheckTimestamp) == 120, "Offset mismatch for UQosRegionManager::LastCheckTimestamp");
static_assert(offsetof(UQosRegionManager, Evaluator) == 128, "Offset mismatch for UQosRegionManager::Evaluator");
static_assert(offsetof(UQosRegionManager, QosEvalResult) == 136, "Offset mismatch for UQosRegionManager::QosEvalResult");
static_assert(offsetof(UQosRegionManager, RegionOptions) == 144, "Offset mismatch for UQosRegionManager::RegionOptions");
static_assert(offsetof(UQosRegionManager, ForceRegionId) == 160, "Offset mismatch for UQosRegionManager::ForceRegionId");
static_assert(offsetof(UQosRegionManager, bRegionForcedViaCommandline) == 176, "Offset mismatch for UQosRegionManager::bRegionForcedViaCommandline");
static_assert(offsetof(UQosRegionManager, SelectedRegionId) == 184, "Offset mismatch for UQosRegionManager::SelectedRegionId");
