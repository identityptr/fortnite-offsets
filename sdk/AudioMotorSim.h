/**
 * decamp dumper generated SDK
 * Package: /Script/AudioMotorSim
 */
#pragma once
#include "Basic.h"

// /Script/AudioMotorSim.AudioMotorSimConfigData
// Kind: ScriptStruct; super: none
struct FAudioMotorSimConfigData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMotorSim.AudioMotorSimDebugDataBase
// Kind: ScriptStruct; super: none
struct FAudioMotorSimDebugDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMotorSim.AudioMotorSimInputContext
// Kind: ScriptStruct; super: none
struct FAudioMotorSimInputContext
{
public:
    float DeltaTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Speed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SideSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    float UpSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Throttle; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Brake; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SurfaceFrictionModifier; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MotorFrictionModifier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float Boost; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDriving; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGrounded; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanShift; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClutchEngaged; // 0x002B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAudioMotorSimInputContext, DeltaTime) == 0, "Offset mismatch for FAudioMotorSimInputContext::DeltaTime");
static_assert(offsetof(FAudioMotorSimInputContext, Speed) == 4, "Offset mismatch for FAudioMotorSimInputContext::Speed");
static_assert(offsetof(FAudioMotorSimInputContext, ForwardSpeed) == 8, "Offset mismatch for FAudioMotorSimInputContext::ForwardSpeed");
static_assert(offsetof(FAudioMotorSimInputContext, SideSpeed) == 12, "Offset mismatch for FAudioMotorSimInputContext::SideSpeed");
static_assert(offsetof(FAudioMotorSimInputContext, UpSpeed) == 16, "Offset mismatch for FAudioMotorSimInputContext::UpSpeed");
static_assert(offsetof(FAudioMotorSimInputContext, Throttle) == 20, "Offset mismatch for FAudioMotorSimInputContext::Throttle");
static_assert(offsetof(FAudioMotorSimInputContext, Brake) == 24, "Offset mismatch for FAudioMotorSimInputContext::Brake");
static_assert(offsetof(FAudioMotorSimInputContext, SurfaceFrictionModifier) == 28, "Offset mismatch for FAudioMotorSimInputContext::SurfaceFrictionModifier");
static_assert(offsetof(FAudioMotorSimInputContext, MotorFrictionModifier) == 32, "Offset mismatch for FAudioMotorSimInputContext::MotorFrictionModifier");
static_assert(offsetof(FAudioMotorSimInputContext, Boost) == 36, "Offset mismatch for FAudioMotorSimInputContext::Boost");
static_assert(offsetof(FAudioMotorSimInputContext, bDriving) == 40, "Offset mismatch for FAudioMotorSimInputContext::bDriving");
static_assert(offsetof(FAudioMotorSimInputContext, bGrounded) == 41, "Offset mismatch for FAudioMotorSimInputContext::bGrounded");
static_assert(offsetof(FAudioMotorSimInputContext, bCanShift) == 42, "Offset mismatch for FAudioMotorSimInputContext::bCanShift");
static_assert(offsetof(FAudioMotorSimInputContext, bClutchEngaged) == 43, "Offset mismatch for FAudioMotorSimInputContext::bClutchEngaged");

// /Script/AudioMotorSim.AudioMotorSimRuntimeContext
// Kind: ScriptStruct; super: none
struct FAudioMotorSimRuntimeContext
{
public:
    std::uint8_t bShifting; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Gear; // 0x0004 (Size: 0x4, Type: IntProperty)
    float VirtualSpeedKmh; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float RPM; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Volume; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAudioMotorSimRuntimeContext, bShifting) == 0, "Offset mismatch for FAudioMotorSimRuntimeContext::bShifting");
static_assert(offsetof(FAudioMotorSimRuntimeContext, Gear) == 4, "Offset mismatch for FAudioMotorSimRuntimeContext::Gear");
static_assert(offsetof(FAudioMotorSimRuntimeContext, VirtualSpeedKmh) == 8, "Offset mismatch for FAudioMotorSimRuntimeContext::VirtualSpeedKmh");
static_assert(offsetof(FAudioMotorSimRuntimeContext, RPM) == 12, "Offset mismatch for FAudioMotorSimRuntimeContext::RPM");
static_assert(offsetof(FAudioMotorSimRuntimeContext, Volume) == 16, "Offset mismatch for FAudioMotorSimRuntimeContext::Volume");
static_assert(offsetof(FAudioMotorSimRuntimeContext, Pitch) == 20, "Offset mismatch for FAudioMotorSimRuntimeContext::Pitch");

// /Script/AudioMotorSim.MotorSimEntry
// Kind: ScriptStruct; super: none
struct FMotorSimEntry
{
public:
    TScriptInterface<void> Sim; // 0x0000 (Size: 0x10, Type: InterfaceProperty)
    std::int32_t SortOrder; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMotorSimEntry, Sim) == 0, "Offset mismatch for FMotorSimEntry::Sim");
static_assert(offsetof(FMotorSimEntry, SortOrder) == 16, "Offset mismatch for FMotorSimEntry::SortOrder");

// /Script/AudioMotorSim.AudioMotorModelComponent
// Kind: Class; super: ActorComponent
class UAudioMotorModelComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> SimComponents; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AudioComponents; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioMotorModelComponent, SimComponents) == 192, "Offset mismatch for UAudioMotorModelComponent::SimComponents");
static_assert(offsetof(UAudioMotorModelComponent, AudioComponents) == 208, "Offset mismatch for UAudioMotorModelComponent::AudioComponents");

// /Script/AudioMotorSim.AudioMotorSim
// Kind: Class; super: Interface
class UAudioMotorSim
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMotorSim.AudioMotorSimComponent
// Kind: Class; super: ActorComponent
class UAudioMotorSimComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bEnabled; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAudioMotorSimComponent, bEnabled) == 200, "Offset mismatch for UAudioMotorSimComponent::bEnabled");

// /Script/AudioMotorSim.AudioMotorSimOutput
// Kind: Class; super: Interface
class UAudioMotorSimOutput
{
public:
    std::uint8_t Opaque[1];
};
