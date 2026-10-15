/**
 * decamp dumper generated SDK
 * Package: /Script/FlyingCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FlyingCodeRuntime.FortMovementMode_FlyingCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_FlyingCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float CeilingHeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t MoveOrientation[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMovementMode_FlyingCreationData, CeilingHeight) == 16, "Offset mismatch for FFortMovementMode_FlyingCreationData::CeilingHeight");
static_assert(offsetof(FFortMovementMode_FlyingCreationData, MoveOrientation) == 24, "Offset mismatch for FFortMovementMode_FlyingCreationData::MoveOrientation");

// /Script/FlyingCodeRuntime.FlyingAttributeSet
// Kind: Class; super: FortAttributeSet
class UFlyingAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MaxFuel[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t FuelUsageRate[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t LocalFuel[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFlyingAttributeSet, MaxFuel) == 80, "Offset mismatch for UFlyingAttributeSet::MaxFuel");
static_assert(offsetof(UFlyingAttributeSet, FuelUsageRate) == 120, "Offset mismatch for UFlyingAttributeSet::FuelUsageRate");
static_assert(offsetof(UFlyingAttributeSet, LocalFuel) == 160, "Offset mismatch for UFlyingAttributeSet::LocalFuel");

// /Script/FlyingCodeRuntime.FortCameraMode_Flying
// Kind: Class; super: FortCameraMode_ThirdPerson
class UFortCameraMode_Flying
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    float LastActiveTimeSeconds; // 0x2080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCameraMode_Flying, LastActiveTimeSeconds) == 8320, "Offset mismatch for UFortCameraMode_Flying::LastActiveTimeSeconds");

// /Script/FlyingCodeRuntime.FortMovementMode_ExtLogicFlying
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicFlying
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t bEnableInput; // 0x01B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicFlying, bEnableInput) == 440, "Offset mismatch for UFortMovementMode_ExtLogicFlying::bEnableInput");

// /Script/FlyingCodeRuntime.FortMovementMode_FlyingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_FlyingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MovementInput[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float CeilingHeight; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t MoveOrientation[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_FlyingRuntimeData, MovementInput) == 56, "Offset mismatch for UFortMovementMode_FlyingRuntimeData::MovementInput");
static_assert(offsetof(UFortMovementMode_FlyingRuntimeData, CeilingHeight) == 72, "Offset mismatch for UFortMovementMode_FlyingRuntimeData::CeilingHeight");
static_assert(offsetof(UFortMovementMode_FlyingRuntimeData, MoveOrientation) == 80, "Offset mismatch for UFortMovementMode_FlyingRuntimeData::MoveOrientation");
