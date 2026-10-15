/**
 * decamp dumper generated SDK
 * Package: /Script/JunoLowMemoryFallbackRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackTriggeredStrategy
// Kind: ScriptStruct; super: none
struct FJunoLowMemoryFallbackTriggeredStrategy
{
public:
    void* StrategyClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TArray<void*> TriggeringPlayers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLowMemoryFallbackTriggeredStrategy, StrategyClass) == 0, "Offset mismatch for FJunoLowMemoryFallbackTriggeredStrategy::StrategyClass");
static_assert(offsetof(FJunoLowMemoryFallbackTriggeredStrategy, TriggeringPlayers) == 8, "Offset mismatch for FJunoLowMemoryFallbackTriggeredStrategy::TriggeringPlayers");

// /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryMessage
// Kind: ScriptStruct; super: none
struct FJunoLowMemoryMessage
{
public:
    std::uint8_t MemoryState; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoLowMemoryMessage, MemoryState) == 0, "Offset mismatch for FJunoLowMemoryMessage::MemoryState");

// /Script/JunoLowMemoryFallbackRuntime.JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UJunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* StrategyToActivate; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy, StrategyToActivate) == 56, "Offset mismatch for UJunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy::StrategyToActivate");

// /Script/JunoLowMemoryFallbackRuntime.JunoBlockBuilding_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UJunoBlockBuilding_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BlockingTag[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoBlockBuilding_LowMemoryFallbackStrategy, BlockingTag) == 56, "Offset mismatch for UJunoBlockBuilding_LowMemoryFallbackStrategy::BlockingTag");

// /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackGameStateComponent
// Kind: Class; super: FortGameStateComponent
class UJunoLowMemoryFallbackGameStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> TriggeredStrategies; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveStrategies; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoLowMemoryFallbackGameStateComponent, TriggeredStrategies) == 192, "Offset mismatch for UJunoLowMemoryFallbackGameStateComponent::TriggeredStrategies");
static_assert(offsetof(UJunoLowMemoryFallbackGameStateComponent, ActiveStrategies) == 208, "Offset mismatch for UJunoLowMemoryFallbackGameStateComponent::ActiveStrategies");

// /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackPlayerControllerComponent
// Kind: Class; super: ControllerComponent
class UJunoLowMemoryFallbackPlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::ComponentTags");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::AssetUserData");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::CreationMethod");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoLowMemoryFallbackPlayerControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoLowMemoryFallbackPlayerControllerComponent::OnComponentDeactivated");

// /Script/JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackWorldSubsystem
// Kind: Class; super: LowMemoryFallbackWorldSubsystem
class UJunoLowMemoryFallbackWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString PluginName; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Thresholds; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ThresholdStates; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x2C]; // 0x0068
    std::int32_t MemoryRollingAverageSamples; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoLowMemoryFallbackWorldSubsystem, PluginName) == 56, "Offset mismatch for UJunoLowMemoryFallbackWorldSubsystem::PluginName");
static_assert(offsetof(UJunoLowMemoryFallbackWorldSubsystem, Thresholds) == 72, "Offset mismatch for UJunoLowMemoryFallbackWorldSubsystem::Thresholds");
static_assert(offsetof(UJunoLowMemoryFallbackWorldSubsystem, ThresholdStates) == 88, "Offset mismatch for UJunoLowMemoryFallbackWorldSubsystem::ThresholdStates");
static_assert(offsetof(UJunoLowMemoryFallbackWorldSubsystem, MemoryRollingAverageSamples) == 148, "Offset mismatch for UJunoLowMemoryFallbackWorldSubsystem::MemoryRollingAverageSamples");

// /Script/JunoLowMemoryFallbackRuntime.JunoMutableLODs_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UJunoMutableLODs_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t NumLOD0; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t NumLOD1; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t NumLOD2; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t LOD2Distance; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoMutableLODs_LowMemoryFallbackStrategy, NumLOD0) == 56, "Offset mismatch for UJunoMutableLODs_LowMemoryFallbackStrategy::NumLOD0");
static_assert(offsetof(UJunoMutableLODs_LowMemoryFallbackStrategy, NumLOD1) == 60, "Offset mismatch for UJunoMutableLODs_LowMemoryFallbackStrategy::NumLOD1");
static_assert(offsetof(UJunoMutableLODs_LowMemoryFallbackStrategy, NumLOD2) == 64, "Offset mismatch for UJunoMutableLODs_LowMemoryFallbackStrategy::NumLOD2");
static_assert(offsetof(UJunoMutableLODs_LowMemoryFallbackStrategy, LOD2Distance) == 68, "Offset mismatch for UJunoMutableLODs_LowMemoryFallbackStrategy::LOD2Distance");

// /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MemoryState; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy, MemoryState) == 56, "Offset mismatch for UJunoSendMemoryStateMessage_LowMemoryFallbackStrategy::MemoryState");

// /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical
// Kind: Class; super: JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MemoryState; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical, MemoryState) == 56, "Offset mismatch for UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical::MemoryState");

// /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood
// Kind: Class; super: JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MemoryState; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood, MemoryState) == 56, "Offset mismatch for UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood::MemoryState");

// /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow
// Kind: Class; super: JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MemoryState; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow, MemoryState) == 56, "Offset mismatch for UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow::MemoryState");

// /Script/JunoLowMemoryFallbackRuntime.JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow
// Kind: Class; super: JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
class UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MemoryState; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow, MemoryState) == 56, "Offset mismatch for UJunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow::MemoryState");

// /Script/JunoLowMemoryFallbackRuntime.JunoStreamingDistance_LowMemoryFallbackStrategy
// Kind: Class; super: LowMemoryFallbackStrategy
class UJunoStreamingDistance_LowMemoryFallbackStrategy
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float ScaleMultiplier; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoStreamingDistance_LowMemoryFallbackStrategy, ScaleMultiplier) == 56, "Offset mismatch for UJunoStreamingDistance_LowMemoryFallbackStrategy::ScaleMultiplier");
