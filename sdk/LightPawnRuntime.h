/**
 * decamp dumper generated SDK
 * Package: /Script/LightPawnRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LightPawnRuntime.FortAthenaMutator_LightPawn
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_LightPawn
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t OverridePawnClass[0x20]; // 0x02E0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t HUDElementsToHideForLightPawn[0x1]; // 0x0300 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_LightPawn, OverridePawnClass) == 736, "Offset mismatch for UFortAthenaMutator_LightPawn::OverridePawnClass");
static_assert(offsetof(UFortAthenaMutator_LightPawn, HUDElementsToHideForLightPawn) == 768, "Offset mismatch for UFortAthenaMutator_LightPawn::HUDElementsToHideForLightPawn");

// /Script/LightPawnRuntime.FortLightPawnProxy
// Kind: Class; super: DefaultPawn
class UFortLightPawnProxy
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    float BaseTurnRate; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    float BaseLookUpRate; // 0x02F4 (Size: 0x4, Type: FloatProperty)
    void* MovementComponent; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* CollisionComponent; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* MeshComponent; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAddDefaultMovementBindings; // 0x0310 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortLightPawnProxy, BaseTurnRate) == 752, "Offset mismatch for UFortLightPawnProxy::BaseTurnRate");
static_assert(offsetof(UFortLightPawnProxy, BaseLookUpRate) == 756, "Offset mismatch for UFortLightPawnProxy::BaseLookUpRate");
static_assert(offsetof(UFortLightPawnProxy, MovementComponent) == 760, "Offset mismatch for UFortLightPawnProxy::MovementComponent");
static_assert(offsetof(UFortLightPawnProxy, CollisionComponent) == 768, "Offset mismatch for UFortLightPawnProxy::CollisionComponent");
static_assert(offsetof(UFortLightPawnProxy, MeshComponent) == 776, "Offset mismatch for UFortLightPawnProxy::MeshComponent");
static_assert(offsetof(UFortLightPawnProxy, bAddDefaultMovementBindings) == 784, "Offset mismatch for UFortLightPawnProxy::bAddDefaultMovementBindings");
