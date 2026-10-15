/**
 * decamp dumper generated SDK
 * Package: /Script/FortWaterAdvanced
 */
#pragma once
#include "Basic.h"

// /Script/FortWaterAdvanced.FortGameFeatureAction_InitPhysicsOverrides
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_InitPhysicsOverrides
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> PhysicsAssetOverrides; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortGameFeatureAction_InitPhysicsOverrides, PhysicsAssetOverrides) == 40, "Offset mismatch for UFortGameFeatureAction_InitPhysicsOverrides::PhysicsAssetOverrides");

// /Script/FortWaterAdvanced.FortShallowWaterSubsystem
// Kind: Class; super: ShallowWaterSubsystem
class UFortShallowWaterSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ShallowWaterNiagaraSimulation; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WaterInfoTexture; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
    void* NormalRT; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* VelocityRT; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* MPC; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xC0]; // 0x0078
    TArray<void*> PreviousContexts; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingContexts; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> VehicleCollisionProxies; // 0x0158 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortShallowWaterSubsystem, ShallowWaterNiagaraSimulation) == 72, "Offset mismatch for UFortShallowWaterSubsystem::ShallowWaterNiagaraSimulation");
static_assert(offsetof(UFortShallowWaterSubsystem, WaterInfoTexture) == 80, "Offset mismatch for UFortShallowWaterSubsystem::WaterInfoTexture");
static_assert(offsetof(UFortShallowWaterSubsystem, NormalRT) == 88, "Offset mismatch for UFortShallowWaterSubsystem::NormalRT");
static_assert(offsetof(UFortShallowWaterSubsystem, VelocityRT) == 96, "Offset mismatch for UFortShallowWaterSubsystem::VelocityRT");
static_assert(offsetof(UFortShallowWaterSubsystem, Settings) == 104, "Offset mismatch for UFortShallowWaterSubsystem::Settings");
static_assert(offsetof(UFortShallowWaterSubsystem, MPC) == 112, "Offset mismatch for UFortShallowWaterSubsystem::MPC");
static_assert(offsetof(UFortShallowWaterSubsystem, PreviousContexts) == 312, "Offset mismatch for UFortShallowWaterSubsystem::PreviousContexts");
static_assert(offsetof(UFortShallowWaterSubsystem, PendingContexts) == 328, "Offset mismatch for UFortShallowWaterSubsystem::PendingContexts");
static_assert(offsetof(UFortShallowWaterSubsystem, VehicleCollisionProxies) == 344, "Offset mismatch for UFortShallowWaterSubsystem::VehicleCollisionProxies");
