/**
 * decamp dumper generated SDK
 * Package: /Script/NetCore
 */
#pragma once
#include "Basic.h"

// /Script/NetCore.EscalationState
// Kind: ScriptStruct; super: StateStruct
struct FEscalationState
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t bLogEscalate; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDormant; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::int16_t CooloffTime; // 0x001A (Size: 0x2, Type: Int16Property)
    std::int16_t AutoEscalateTime; // 0x001C (Size: 0x2, Type: Int16Property)
    std::int8_t HighestTimePeriod; // 0x001E (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x1]; // 0x001F
    TArray<void*> AllTimePeriods; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEscalationState, bLogEscalate) == 24, "Offset mismatch for FEscalationState::bLogEscalate");
static_assert(offsetof(FEscalationState, bDormant) == 25, "Offset mismatch for FEscalationState::bDormant");
static_assert(offsetof(FEscalationState, CooloffTime) == 26, "Offset mismatch for FEscalationState::CooloffTime");
static_assert(offsetof(FEscalationState, AutoEscalateTime) == 28, "Offset mismatch for FEscalationState::AutoEscalateTime");
static_assert(offsetof(FEscalationState, HighestTimePeriod) == 30, "Offset mismatch for FEscalationState::HighestTimePeriod");
static_assert(offsetof(FEscalationState, AllTimePeriods) == 32, "Offset mismatch for FEscalationState::AllTimePeriods");

// /Script/NetCore.FastArraySerializer
// Kind: ScriptStruct; super: none
struct FFastArraySerializer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t IdCounter; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t ArrayReplicationKey; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0018
    std::uint8_t DeltaFlags; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFastArraySerializer, IdCounter) == 16, "Offset mismatch for FFastArraySerializer::IdCounter");
static_assert(offsetof(FFastArraySerializer, ArrayReplicationKey) == 20, "Offset mismatch for FFastArraySerializer::ArrayReplicationKey");
static_assert(offsetof(FFastArraySerializer, DeltaFlags) == 64, "Offset mismatch for FFastArraySerializer::DeltaFlags");

// /Script/NetCore.FastArraySerializerItem
// Kind: ScriptStruct; super: none
struct FFastArraySerializerItem
{
public:
    std::int32_t ReplicationID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ReplicationKey; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MostRecentArrayReplicationKey; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFastArraySerializerItem, ReplicationID) == 0, "Offset mismatch for FFastArraySerializerItem::ReplicationID");
static_assert(offsetof(FFastArraySerializerItem, ReplicationKey) == 4, "Offset mismatch for FFastArraySerializerItem::ReplicationKey");
static_assert(offsetof(FFastArraySerializerItem, MostRecentArrayReplicationKey) == 8, "Offset mismatch for FFastArraySerializerItem::MostRecentArrayReplicationKey");

// /Script/NetCore.NetAnalyticsDataConfig
// Kind: ScriptStruct; super: none
struct FNetAnalyticsDataConfig
{
public:
    std::uint8_t DataName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0, "Offset mismatch for FNetAnalyticsDataConfig::DataName");
static_assert(offsetof(FNetAnalyticsDataConfig, bEnabled) == 4, "Offset mismatch for FNetAnalyticsDataConfig::bEnabled");

// /Script/NetCore.NetFaultState
// Kind: ScriptStruct; super: EscalationState
struct FNetFaultState
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bCloseConnection; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0031
    std::int16_t EscalateQuotaFaultsPerPeriod; // 0x0032 (Size: 0x2, Type: Int16Property)
    std::int8_t EscalateQuotaFaultPercentPerPeriod; // 0x0034 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0002[0x1]; // 0x0035
    std::int16_t DescalateQuotaFaultsPerPeriod; // 0x0036 (Size: 0x2, Type: Int16Property)
    std::int8_t DescalateQuotaFaultPercentPerPeriod; // 0x0038 (Size: 0x1, Type: Int8Property)
    std::int8_t EscalateQuotaTimePeriod; // 0x0039 (Size: 0x1, Type: Int8Property)
};

static_assert(offsetof(FNetFaultState, bCloseConnection) == 48, "Offset mismatch for FNetFaultState::bCloseConnection");
static_assert(offsetof(FNetFaultState, EscalateQuotaFaultsPerPeriod) == 50, "Offset mismatch for FNetFaultState::EscalateQuotaFaultsPerPeriod");
static_assert(offsetof(FNetFaultState, EscalateQuotaFaultPercentPerPeriod) == 52, "Offset mismatch for FNetFaultState::EscalateQuotaFaultPercentPerPeriod");
static_assert(offsetof(FNetFaultState, DescalateQuotaFaultsPerPeriod) == 54, "Offset mismatch for FNetFaultState::DescalateQuotaFaultsPerPeriod");
static_assert(offsetof(FNetFaultState, DescalateQuotaFaultPercentPerPeriod) == 56, "Offset mismatch for FNetFaultState::DescalateQuotaFaultPercentPerPeriod");
static_assert(offsetof(FNetFaultState, EscalateQuotaTimePeriod) == 57, "Offset mismatch for FNetFaultState::EscalateQuotaTimePeriod");

// /Script/NetCore.RPCAnalyticsThreshold
// Kind: ScriptStruct; super: none
struct FRPCAnalyticsThreshold
{
public:
    std::uint8_t RPC[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t CountPerSec; // 0x0004 (Size: 0x4, Type: IntProperty)
    double TimePerSec; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRPCAnalyticsThreshold, RPC) == 0, "Offset mismatch for FRPCAnalyticsThreshold::RPC");
static_assert(offsetof(FRPCAnalyticsThreshold, CountPerSec) == 4, "Offset mismatch for FRPCAnalyticsThreshold::CountPerSec");
static_assert(offsetof(FRPCAnalyticsThreshold, TimePerSec) == 8, "Offset mismatch for FRPCAnalyticsThreshold::TimePerSec");

// /Script/NetCore.RPCDoSState
// Kind: ScriptStruct; super: none
struct FRPCDoSState
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bLogEscalate; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendEscalateAnalytics; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickPlayer; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrackRecentRPCs; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::int16_t EscalateQuotaRPCsPerFrame; // 0x000C (Size: 0x2, Type: Int16Property)
    std::int16_t EscalateTimeQuotaMSPerFrame; // 0x000E (Size: 0x2, Type: Int16Property)
    std::int16_t EscalateQuotaRPCsPerPeriod; // 0x0010 (Size: 0x2, Type: Int16Property)
    std::int16_t EscalateTimeQuotaMSPerPeriod; // 0x0012 (Size: 0x2, Type: Int16Property)
    std::int8_t EscalateQuotaTimePeriod; // 0x0014 (Size: 0x1, Type: Int8Property)
    std::int8_t EscalationCountTolerance; // 0x0015 (Size: 0x1, Type: Int8Property)
    std::int16_t EscalationTimeToleranceMS; // 0x0016 (Size: 0x2, Type: Int16Property)
    std::int16_t RPCRepeatLimitPerPeriod; // 0x0018 (Size: 0x2, Type: Int16Property)
    std::int16_t RPCRepeatLimitMSPerPeriod; // 0x001A (Size: 0x2, Type: Int16Property)
    std::int8_t RPCRepeatLimitTimePeriod; // 0x001C (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x1]; // 0x001D
    std::int16_t CooloffTime; // 0x001E (Size: 0x2, Type: Int16Property)
    std::int16_t AutoEscalateTime; // 0x0020 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FRPCDoSState, bLogEscalate) == 8, "Offset mismatch for FRPCDoSState::bLogEscalate");
static_assert(offsetof(FRPCDoSState, bSendEscalateAnalytics) == 9, "Offset mismatch for FRPCDoSState::bSendEscalateAnalytics");
static_assert(offsetof(FRPCDoSState, bKickPlayer) == 10, "Offset mismatch for FRPCDoSState::bKickPlayer");
static_assert(offsetof(FRPCDoSState, bTrackRecentRPCs) == 11, "Offset mismatch for FRPCDoSState::bTrackRecentRPCs");
static_assert(offsetof(FRPCDoSState, EscalateQuotaRPCsPerFrame) == 12, "Offset mismatch for FRPCDoSState::EscalateQuotaRPCsPerFrame");
static_assert(offsetof(FRPCDoSState, EscalateTimeQuotaMSPerFrame) == 14, "Offset mismatch for FRPCDoSState::EscalateTimeQuotaMSPerFrame");
static_assert(offsetof(FRPCDoSState, EscalateQuotaRPCsPerPeriod) == 16, "Offset mismatch for FRPCDoSState::EscalateQuotaRPCsPerPeriod");
static_assert(offsetof(FRPCDoSState, EscalateTimeQuotaMSPerPeriod) == 18, "Offset mismatch for FRPCDoSState::EscalateTimeQuotaMSPerPeriod");
static_assert(offsetof(FRPCDoSState, EscalateQuotaTimePeriod) == 20, "Offset mismatch for FRPCDoSState::EscalateQuotaTimePeriod");
static_assert(offsetof(FRPCDoSState, EscalationCountTolerance) == 21, "Offset mismatch for FRPCDoSState::EscalationCountTolerance");
static_assert(offsetof(FRPCDoSState, EscalationTimeToleranceMS) == 22, "Offset mismatch for FRPCDoSState::EscalationTimeToleranceMS");
static_assert(offsetof(FRPCDoSState, RPCRepeatLimitPerPeriod) == 24, "Offset mismatch for FRPCDoSState::RPCRepeatLimitPerPeriod");
static_assert(offsetof(FRPCDoSState, RPCRepeatLimitMSPerPeriod) == 26, "Offset mismatch for FRPCDoSState::RPCRepeatLimitMSPerPeriod");
static_assert(offsetof(FRPCDoSState, RPCRepeatLimitTimePeriod) == 28, "Offset mismatch for FRPCDoSState::RPCRepeatLimitTimePeriod");
static_assert(offsetof(FRPCDoSState, CooloffTime) == 30, "Offset mismatch for FRPCDoSState::CooloffTime");
static_assert(offsetof(FRPCDoSState, AutoEscalateTime) == 32, "Offset mismatch for FRPCDoSState::AutoEscalateTime");

// /Script/NetCore.RPCDoSStateConfig
// Kind: ScriptStruct; super: RPCDoSState
struct FRPCDoSStateConfig
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bLogEscalate; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendEscalateAnalytics; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickPlayer; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrackRecentRPCs; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::int16_t EscalateQuotaRPCsPerFrame; // 0x000C (Size: 0x2, Type: Int16Property)
    std::int16_t EscalateTimeQuotaMSPerFrame; // 0x000E (Size: 0x2, Type: Int16Property)
    std::int16_t EscalateQuotaRPCsPerPeriod; // 0x0010 (Size: 0x2, Type: Int16Property)
    std::int16_t EscalateTimeQuotaMSPerPeriod; // 0x0012 (Size: 0x2, Type: Int16Property)
    std::int8_t EscalateQuotaTimePeriod; // 0x0014 (Size: 0x1, Type: Int8Property)
    std::int8_t EscalationCountTolerance; // 0x0015 (Size: 0x1, Type: Int8Property)
    std::int16_t EscalationTimeToleranceMS; // 0x0016 (Size: 0x2, Type: Int16Property)
    std::int16_t RPCRepeatLimitPerPeriod; // 0x0018 (Size: 0x2, Type: Int16Property)
    std::int16_t RPCRepeatLimitMSPerPeriod; // 0x001A (Size: 0x2, Type: Int16Property)
    std::int8_t RPCRepeatLimitTimePeriod; // 0x001C (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x1]; // 0x001D
    std::int16_t CooloffTime; // 0x001E (Size: 0x2, Type: Int16Property)
    std::int16_t AutoEscalateTime; // 0x0020 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FRPCDoSStateConfig, bLogEscalate) == 8, "Offset mismatch for FRPCDoSStateConfig::bLogEscalate");
static_assert(offsetof(FRPCDoSStateConfig, bSendEscalateAnalytics) == 9, "Offset mismatch for FRPCDoSStateConfig::bSendEscalateAnalytics");
static_assert(offsetof(FRPCDoSStateConfig, bKickPlayer) == 10, "Offset mismatch for FRPCDoSStateConfig::bKickPlayer");
static_assert(offsetof(FRPCDoSStateConfig, bTrackRecentRPCs) == 11, "Offset mismatch for FRPCDoSStateConfig::bTrackRecentRPCs");
static_assert(offsetof(FRPCDoSStateConfig, EscalateQuotaRPCsPerFrame) == 12, "Offset mismatch for FRPCDoSStateConfig::EscalateQuotaRPCsPerFrame");
static_assert(offsetof(FRPCDoSStateConfig, EscalateTimeQuotaMSPerFrame) == 14, "Offset mismatch for FRPCDoSStateConfig::EscalateTimeQuotaMSPerFrame");
static_assert(offsetof(FRPCDoSStateConfig, EscalateQuotaRPCsPerPeriod) == 16, "Offset mismatch for FRPCDoSStateConfig::EscalateQuotaRPCsPerPeriod");
static_assert(offsetof(FRPCDoSStateConfig, EscalateTimeQuotaMSPerPeriod) == 18, "Offset mismatch for FRPCDoSStateConfig::EscalateTimeQuotaMSPerPeriod");
static_assert(offsetof(FRPCDoSStateConfig, EscalateQuotaTimePeriod) == 20, "Offset mismatch for FRPCDoSStateConfig::EscalateQuotaTimePeriod");
static_assert(offsetof(FRPCDoSStateConfig, EscalationCountTolerance) == 21, "Offset mismatch for FRPCDoSStateConfig::EscalationCountTolerance");
static_assert(offsetof(FRPCDoSStateConfig, EscalationTimeToleranceMS) == 22, "Offset mismatch for FRPCDoSStateConfig::EscalationTimeToleranceMS");
static_assert(offsetof(FRPCDoSStateConfig, RPCRepeatLimitPerPeriod) == 24, "Offset mismatch for FRPCDoSStateConfig::RPCRepeatLimitPerPeriod");
static_assert(offsetof(FRPCDoSStateConfig, RPCRepeatLimitMSPerPeriod) == 26, "Offset mismatch for FRPCDoSStateConfig::RPCRepeatLimitMSPerPeriod");
static_assert(offsetof(FRPCDoSStateConfig, RPCRepeatLimitTimePeriod) == 28, "Offset mismatch for FRPCDoSStateConfig::RPCRepeatLimitTimePeriod");
static_assert(offsetof(FRPCDoSStateConfig, CooloffTime) == 30, "Offset mismatch for FRPCDoSStateConfig::CooloffTime");
static_assert(offsetof(FRPCDoSStateConfig, AutoEscalateTime) == 32, "Offset mismatch for FRPCDoSStateConfig::AutoEscalateTime");

// /Script/NetCore.StateStruct
// Kind: ScriptStruct; super: none
struct FStateStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString StateName; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FStateStruct, StateName) == 8, "Offset mismatch for FStateStruct::StateName");

// /Script/NetCore.EscalationManagerConfig
// Kind: Class; super: StatePerObjectConfig
class UEscalationManagerConfig
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> EscalationSeverity; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEscalationManagerConfig, EscalationSeverity) == 104, "Offset mismatch for UEscalationManagerConfig::EscalationSeverity");

// /Script/NetCore.NetAnalyticsAggregatorConfig
// Kind: Class; super: Object
class UNetAnalyticsAggregatorConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> NetAnalyticsData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 40, "Offset mismatch for UNetAnalyticsAggregatorConfig::NetAnalyticsData");

// /Script/NetCore.RPCDoSDetectionConfig
// Kind: Class; super: Object
class URPCDoSDetectionConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bRPCDoSDetection; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRPCDoSAnalytics; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::int32_t HitchTimeQuotaMS; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t HitchSuspendDetectionTimeMS; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0034
    TArray<void*> DetectionSeverity; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t InitialConnectToleranceMS; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x004C
    TArray<void*> RPCBlockAllowlist; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RPCAnalyticsThresholds; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    double RPCAnalyticsOverrideChance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(URPCDoSDetectionConfig, bRPCDoSDetection) == 40, "Offset mismatch for URPCDoSDetectionConfig::bRPCDoSDetection");
static_assert(offsetof(URPCDoSDetectionConfig, bRPCDoSAnalytics) == 41, "Offset mismatch for URPCDoSDetectionConfig::bRPCDoSAnalytics");
static_assert(offsetof(URPCDoSDetectionConfig, HitchTimeQuotaMS) == 44, "Offset mismatch for URPCDoSDetectionConfig::HitchTimeQuotaMS");
static_assert(offsetof(URPCDoSDetectionConfig, HitchSuspendDetectionTimeMS) == 48, "Offset mismatch for URPCDoSDetectionConfig::HitchSuspendDetectionTimeMS");
static_assert(offsetof(URPCDoSDetectionConfig, DetectionSeverity) == 56, "Offset mismatch for URPCDoSDetectionConfig::DetectionSeverity");
static_assert(offsetof(URPCDoSDetectionConfig, InitialConnectToleranceMS) == 72, "Offset mismatch for URPCDoSDetectionConfig::InitialConnectToleranceMS");
static_assert(offsetof(URPCDoSDetectionConfig, RPCBlockAllowlist) == 80, "Offset mismatch for URPCDoSDetectionConfig::RPCBlockAllowlist");
static_assert(offsetof(URPCDoSDetectionConfig, RPCAnalyticsThresholds) == 96, "Offset mismatch for URPCDoSDetectionConfig::RPCAnalyticsThresholds");
static_assert(offsetof(URPCDoSDetectionConfig, RPCAnalyticsOverrideChance) == 112, "Offset mismatch for URPCDoSDetectionConfig::RPCAnalyticsOverrideChance");

// /Script/NetCore.StatePerObjectConfig
// Kind: Class; super: Object
class UStatePerObjectConfig
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FString PerObjectConfigSection; // 0x0050 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStatePerObjectConfig, PerObjectConfigSection) == 80, "Offset mismatch for UStatePerObjectConfig::PerObjectConfigSection");
static_assert(offsetof(UStatePerObjectConfig, bEnabled) == 96, "Offset mismatch for UStatePerObjectConfig::bEnabled");
