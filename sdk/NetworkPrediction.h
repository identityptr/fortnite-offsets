/**
 * decamp dumper generated SDK
 * Package: /Script/NetworkPrediction
 */
#pragma once
#include "Basic.h"

// /Script/NetworkPrediction.NetworkPredictionDevHUD
// Kind: ScriptStruct; super: none
struct FNetworkPredictionDevHUD
{
public:
    FString HUDName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequirePIE; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireNotPIE; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNetworkPredictionDevHUD, HUDName) == 0, "Offset mismatch for FNetworkPredictionDevHUD::HUDName");
static_assert(offsetof(FNetworkPredictionDevHUD, Items) == 16, "Offset mismatch for FNetworkPredictionDevHUD::Items");
static_assert(offsetof(FNetworkPredictionDevHUD, bRequirePIE) == 32, "Offset mismatch for FNetworkPredictionDevHUD::bRequirePIE");
static_assert(offsetof(FNetworkPredictionDevHUD, bRequireNotPIE) == 33, "Offset mismatch for FNetworkPredictionDevHUD::bRequireNotPIE");

// /Script/NetworkPrediction.NetworkPredictionDevHUDItem
// Kind: ScriptStruct; super: none
struct FNetworkPredictionDevHUDItem
{
public:
    FString DisplayName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ExecCommand; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAutoBack; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequirePIE; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireNotPIE; // 0x0022 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNetworkPredictionDevHUDItem, DisplayName) == 0, "Offset mismatch for FNetworkPredictionDevHUDItem::DisplayName");
static_assert(offsetof(FNetworkPredictionDevHUDItem, ExecCommand) == 16, "Offset mismatch for FNetworkPredictionDevHUDItem::ExecCommand");
static_assert(offsetof(FNetworkPredictionDevHUDItem, bAutoBack) == 32, "Offset mismatch for FNetworkPredictionDevHUDItem::bAutoBack");
static_assert(offsetof(FNetworkPredictionDevHUDItem, bRequirePIE) == 33, "Offset mismatch for FNetworkPredictionDevHUDItem::bRequirePIE");
static_assert(offsetof(FNetworkPredictionDevHUDItem, bRequireNotPIE) == 34, "Offset mismatch for FNetworkPredictionDevHUDItem::bRequireNotPIE");

// /Script/NetworkPrediction.NetworkPredictionFinalizeFrameTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FNetworkPredictionFinalizeFrameTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNetworkPredictionFinalizeFrameTickFunction, TickGroup) == 8, "Offset mismatch for FNetworkPredictionFinalizeFrameTickFunction::TickGroup");
static_assert(offsetof(FNetworkPredictionFinalizeFrameTickFunction, EndTickGroup) == 9, "Offset mismatch for FNetworkPredictionFinalizeFrameTickFunction::EndTickGroup");
static_assert(offsetof(FNetworkPredictionFinalizeFrameTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FNetworkPredictionFinalizeFrameTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FNetworkPredictionFinalizeFrameTickFunction, TickInterval) == 12, "Offset mismatch for FNetworkPredictionFinalizeFrameTickFunction::TickInterval");

// /Script/NetworkPrediction.NetworkPredictionProduceInputTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FNetworkPredictionProduceInputTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNetworkPredictionProduceInputTickFunction, TickGroup) == 8, "Offset mismatch for FNetworkPredictionProduceInputTickFunction::TickGroup");
static_assert(offsetof(FNetworkPredictionProduceInputTickFunction, EndTickGroup) == 9, "Offset mismatch for FNetworkPredictionProduceInputTickFunction::EndTickGroup");
static_assert(offsetof(FNetworkPredictionProduceInputTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FNetworkPredictionProduceInputTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FNetworkPredictionProduceInputTickFunction, TickInterval) == 12, "Offset mismatch for FNetworkPredictionProduceInputTickFunction::TickInterval");

// /Script/NetworkPrediction.NetworkPredictionProxy
// Kind: ScriptStruct; super: none
struct FNetworkPredictionProxy
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* WorldManager; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNetworkPredictionProxy, WorldManager) == 160, "Offset mismatch for FNetworkPredictionProxy::WorldManager");

// /Script/NetworkPrediction.NetworkPredictionProxyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FNetworkPredictionProxyNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NetworkPrediction.NetworkPredictionSettings
// Kind: ScriptStruct; super: none
struct FNetworkPredictionSettings
{
public:
    std::uint8_t PreferredTickingPolicy; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ReplicatedManagerClassOverride; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TickPhaseMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ProduceInputTickGroup; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SimulationTickGroup; // 0x0012 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FinalizeFrameTickGroup; // 0x0013 (Size: 0x1, Type: ByteProperty)
    std::int32_t FixedTickFrameRate; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t SimulatedProxyNetworkLOD; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableFixedTickSmoothing; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x001A
    std::int32_t FixedTickInterpolationBufferedMS; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t IndependentTickInterpolationBufferedMS; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t IndependentTickInterpolationMaxBufferedMS; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t FixedTickInputSendCount; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t IndependentTickInputSendCount; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaximumRemoteInputFaultLimit; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNetworkPredictionSettings, PreferredTickingPolicy) == 0, "Offset mismatch for FNetworkPredictionSettings::PreferredTickingPolicy");
static_assert(offsetof(FNetworkPredictionSettings, ReplicatedManagerClassOverride) == 8, "Offset mismatch for FNetworkPredictionSettings::ReplicatedManagerClassOverride");
static_assert(offsetof(FNetworkPredictionSettings, TickPhaseMode) == 16, "Offset mismatch for FNetworkPredictionSettings::TickPhaseMode");
static_assert(offsetof(FNetworkPredictionSettings, ProduceInputTickGroup) == 17, "Offset mismatch for FNetworkPredictionSettings::ProduceInputTickGroup");
static_assert(offsetof(FNetworkPredictionSettings, SimulationTickGroup) == 18, "Offset mismatch for FNetworkPredictionSettings::SimulationTickGroup");
static_assert(offsetof(FNetworkPredictionSettings, FinalizeFrameTickGroup) == 19, "Offset mismatch for FNetworkPredictionSettings::FinalizeFrameTickGroup");
static_assert(offsetof(FNetworkPredictionSettings, FixedTickFrameRate) == 20, "Offset mismatch for FNetworkPredictionSettings::FixedTickFrameRate");
static_assert(offsetof(FNetworkPredictionSettings, SimulatedProxyNetworkLOD) == 24, "Offset mismatch for FNetworkPredictionSettings::SimulatedProxyNetworkLOD");
static_assert(offsetof(FNetworkPredictionSettings, bEnableFixedTickSmoothing) == 25, "Offset mismatch for FNetworkPredictionSettings::bEnableFixedTickSmoothing");
static_assert(offsetof(FNetworkPredictionSettings, FixedTickInterpolationBufferedMS) == 28, "Offset mismatch for FNetworkPredictionSettings::FixedTickInterpolationBufferedMS");
static_assert(offsetof(FNetworkPredictionSettings, IndependentTickInterpolationBufferedMS) == 32, "Offset mismatch for FNetworkPredictionSettings::IndependentTickInterpolationBufferedMS");
static_assert(offsetof(FNetworkPredictionSettings, IndependentTickInterpolationMaxBufferedMS) == 36, "Offset mismatch for FNetworkPredictionSettings::IndependentTickInterpolationMaxBufferedMS");
static_assert(offsetof(FNetworkPredictionSettings, FixedTickInputSendCount) == 40, "Offset mismatch for FNetworkPredictionSettings::FixedTickInputSendCount");
static_assert(offsetof(FNetworkPredictionSettings, IndependentTickInputSendCount) == 44, "Offset mismatch for FNetworkPredictionSettings::IndependentTickInputSendCount");
static_assert(offsetof(FNetworkPredictionSettings, MaximumRemoteInputFaultLimit) == 48, "Offset mismatch for FNetworkPredictionSettings::MaximumRemoteInputFaultLimit");

// /Script/NetworkPrediction.NetworkPredictionSimulationTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FNetworkPredictionSimulationTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNetworkPredictionSimulationTickFunction, TickGroup) == 8, "Offset mismatch for FNetworkPredictionSimulationTickFunction::TickGroup");
static_assert(offsetof(FNetworkPredictionSimulationTickFunction, EndTickGroup) == 9, "Offset mismatch for FNetworkPredictionSimulationTickFunction::EndTickGroup");
static_assert(offsetof(FNetworkPredictionSimulationTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FNetworkPredictionSimulationTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FNetworkPredictionSimulationTickFunction, TickInterval) == 12, "Offset mismatch for FNetworkPredictionSimulationTickFunction::TickInterval");

// /Script/NetworkPrediction.ReplicationProxy
// Kind: ScriptStruct; super: none
struct FReplicationProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NetworkPrediction.ReplicationProxyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FReplicationProxyNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint32_t MaxQuantizedSizeBits; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FReplicationProxyNetSerializerConfig, MaxQuantizedSizeBits) == 16, "Offset mismatch for FReplicationProxyNetSerializerConfig::MaxQuantizedSizeBits");

// /Script/NetworkPrediction.ServerReplicationRPCParameter
// Kind: ScriptStruct; super: none
struct FServerReplicationRPCParameter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NetworkPrediction.ServerReplicationRPCParameterNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FServerReplicationRPCParameterNetSerializerConfig
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint32_t MaxQuantizedSizeBits; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FServerReplicationRPCParameterNetSerializerConfig, MaxQuantizedSizeBits) == 16, "Offset mismatch for FServerReplicationRPCParameterNetSerializerConfig::MaxQuantizedSizeBits");

// /Script/NetworkPrediction.SharedPackageMap
// Kind: ScriptStruct; super: none
struct FSharedPackageMap
{
public:
    TArray<void*> Items; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSharedPackageMap, Items) == 0, "Offset mismatch for FSharedPackageMap::Items");

// /Script/NetworkPrediction.SharedPackageMapItem
// Kind: ScriptStruct; super: none
struct FSharedPackageMapItem
{
public:
    TSoftObjectPtr<void> SoftPtr; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSharedPackageMapItem, SoftPtr) == 0, "Offset mismatch for FSharedPackageMapItem::SoftPtr");

// /Script/NetworkPrediction.NetworkPredictionComponent
// Kind: Class; super: ActorComponent
class UNetworkPredictionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t NetworkPredictionProxy[0xB0]; // 0x00C0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ReplicationProxy_ServerRPC[0x2D0]; // 0x0170 (Size: 0x2D0, Type: StructProperty)
    std::uint8_t ReplicationProxy_Autonomous[0x2D0]; // 0x0440 (Size: 0x2D0, Type: StructProperty)
    std::uint8_t ReplicationProxy_Simulated[0x2D0]; // 0x0710 (Size: 0x2D0, Type: StructProperty)
    std::uint8_t ReplicationProxy_Replay[0x468]; // 0x09E0 (Size: 0x468, Type: StructProperty)
    TWeakObjectPtr<void> AssociatedPlayerController; // 0x0E48 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UNetworkPredictionComponent, NetworkPredictionProxy) == 192, "Offset mismatch for UNetworkPredictionComponent::NetworkPredictionProxy");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_ServerRPC) == 368, "Offset mismatch for UNetworkPredictionComponent::ReplicationProxy_ServerRPC");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_Autonomous) == 1088, "Offset mismatch for UNetworkPredictionComponent::ReplicationProxy_Autonomous");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_Simulated) == 1808, "Offset mismatch for UNetworkPredictionComponent::ReplicationProxy_Simulated");
static_assert(offsetof(UNetworkPredictionComponent, ReplicationProxy_Replay) == 2528, "Offset mismatch for UNetworkPredictionComponent::ReplicationProxy_Replay");
static_assert(offsetof(UNetworkPredictionComponent, AssociatedPlayerController) == 3656, "Offset mismatch for UNetworkPredictionComponent::AssociatedPlayerController");

// /Script/NetworkPrediction.NetworkPredictionReplicatedManager
// Kind: Class; super: Actor
class UNetworkPredictionReplicatedManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t SharedPackageMap[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNetworkPredictionReplicatedManager, SharedPackageMap) == 624, "Offset mismatch for UNetworkPredictionReplicatedManager::SharedPackageMap");

// /Script/NetworkPrediction.NetworkPredictionSettingsObject
// Kind: Class; super: Object
class UNetworkPredictionSettingsObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x38]; // 0x0028 (Size: 0x38, Type: StructProperty)
    TArray<void*> DevHUDs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNetworkPredictionSettingsObject, Settings) == 40, "Offset mismatch for UNetworkPredictionSettingsObject::Settings");
static_assert(offsetof(UNetworkPredictionSettingsObject, DevHUDs) == 96, "Offset mismatch for UNetworkPredictionSettingsObject::DevHUDs");

// /Script/NetworkPrediction.NetworkPredictionWorldManager
// Kind: Class; super: WorldSubsystem
class UNetworkPredictionWorldManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ReplicatedManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNetworkPredictionWorldManager, ReplicatedManager) == 56, "Offset mismatch for UNetworkPredictionWorldManager::ReplicatedManager");
