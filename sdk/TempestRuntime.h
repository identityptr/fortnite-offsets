/**
 * decamp dumper generated SDK
 * Package: /Script/TempestRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TempestRuntime.TempestReplicatedMovementData
// Kind: ScriptStruct; super: none
struct FTempestReplicatedMovementData
{
public:
    std::uint8_t TargetServerLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastServerLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastServerRotation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTempestReplicatedMovementData, TargetServerLocation) == 0, "Offset mismatch for FTempestReplicatedMovementData::TargetServerLocation");
static_assert(offsetof(FTempestReplicatedMovementData, LastServerLocation) == 24, "Offset mismatch for FTempestReplicatedMovementData::LastServerLocation");
static_assert(offsetof(FTempestReplicatedMovementData, LastServerRotation) == 48, "Offset mismatch for FTempestReplicatedMovementData::LastServerRotation");

// /Script/TempestRuntime.TempestStateChangeTimerInfo
// Kind: ScriptStruct; super: none
struct FTempestStateChangeTimerInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TempestRuntime.TempestStateInfo
// Kind: ScriptStruct; super: none
struct FTempestStateInfo
{
public:
    std::uint8_t CurrentState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float StartTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTempestStateInfo, CurrentState) == 0, "Offset mismatch for FTempestStateInfo::CurrentState");
static_assert(offsetof(FTempestStateInfo, StartTime) == 4, "Offset mismatch for FTempestStateInfo::StartTime");
static_assert(offsetof(FTempestStateInfo, EndTime) == 8, "Offset mismatch for FTempestStateInfo::EndTime");

// /Script/TempestRuntime.FortAIControllerComponent_Tempest
// Kind: Class; super: FortControllerComponent
class UFortAIControllerComponent_Tempest
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* WeatherComponent; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAIControllerComponent_Tempest, WeatherComponent) == 200, "Offset mismatch for UFortAIControllerComponent_Tempest::WeatherComponent");

// /Script/TempestRuntime.FortCheatManager_Tempest
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_Tempest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TempestRuntime.TempestMovementComponent
// Kind: Class; super: GameFrameworkComponent
class UTempestMovementComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MovementData[0x50]; // 0x00C0 (Size: 0x50, Type: StructProperty)
    FMulticastInlineDelegate OnTempestMovementStuck; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTempestSafeZoneStateChanged; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MovementMode; // 0x0130 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    void* FindNextMovementLocationQuery; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* MovementPath; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MovementSpeed[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationSpeed[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t bFloatOnWater; // 0x0198 (Size: 0x1, Type: BoolProperty)
    // 0x0198 BoolProperty bShouldIgnoreZMovement (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0199
    std::uint8_t WaterTraceZOffset[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTempestMovementComponent, MovementData) == 192, "Offset mismatch for UTempestMovementComponent::MovementData");
static_assert(offsetof(UTempestMovementComponent, OnTempestMovementStuck) == 272, "Offset mismatch for UTempestMovementComponent::OnTempestMovementStuck");
static_assert(offsetof(UTempestMovementComponent, OnTempestSafeZoneStateChanged) == 288, "Offset mismatch for UTempestMovementComponent::OnTempestSafeZoneStateChanged");
static_assert(offsetof(UTempestMovementComponent, MovementMode) == 304, "Offset mismatch for UTempestMovementComponent::MovementMode");
static_assert(offsetof(UTempestMovementComponent, FindNextMovementLocationQuery) == 312, "Offset mismatch for UTempestMovementComponent::FindNextMovementLocationQuery");
static_assert(offsetof(UTempestMovementComponent, MovementPath) == 320, "Offset mismatch for UTempestMovementComponent::MovementPath");
static_assert(offsetof(UTempestMovementComponent, MovementSpeed) == 328, "Offset mismatch for UTempestMovementComponent::MovementSpeed");
static_assert(offsetof(UTempestMovementComponent, RotationSpeed) == 368, "Offset mismatch for UTempestMovementComponent::RotationSpeed");
static_assert(offsetof(UTempestMovementComponent, bFloatOnWater) == 408, "Offset mismatch for UTempestMovementComponent::bFloatOnWater");
static_assert(offsetof(UTempestMovementComponent, WaterTraceZOffset) == 416, "Offset mismatch for UTempestMovementComponent::WaterTraceZOffset");

// /Script/TempestRuntime.TempestStateMachineComponent
// Kind: Class; super: GameFrameworkComponent
class UTempestStateMachineComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bDestroyOnCompletion; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t FormationDuration[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveDuration[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DissipationDuration[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentStateInfo[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    FMulticastInlineDelegate OnTempestStateChangedDelegate; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UTempestStateMachineComponent, bDestroyOnCompletion) == 192, "Offset mismatch for UTempestStateMachineComponent::bDestroyOnCompletion");
static_assert(offsetof(UTempestStateMachineComponent, FormationDuration) == 200, "Offset mismatch for UTempestStateMachineComponent::FormationDuration");
static_assert(offsetof(UTempestStateMachineComponent, ActiveDuration) == 240, "Offset mismatch for UTempestStateMachineComponent::ActiveDuration");
static_assert(offsetof(UTempestStateMachineComponent, DissipationDuration) == 280, "Offset mismatch for UTempestStateMachineComponent::DissipationDuration");
static_assert(offsetof(UTempestStateMachineComponent, CurrentStateInfo) == 320, "Offset mismatch for UTempestStateMachineComponent::CurrentStateInfo");
static_assert(offsetof(UTempestStateMachineComponent, OnTempestStateChangedDelegate) == 360, "Offset mismatch for UTempestStateMachineComponent::OnTempestStateChangedDelegate");
