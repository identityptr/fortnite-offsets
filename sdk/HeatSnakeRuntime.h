/**
 * decamp dumper generated SDK
 * Package: /Script/HeatSnakeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HeatSnakeRuntime.FortMovementMode_HeatSnakePendulumExtLogic
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_HeatSnakePendulumExtLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t bSecondaryFireReleased; // 0x01B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01B9
    std::uint8_t CachedTetherPoint[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    void* GE_InPendulumSwingMotion; // 0x01E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x01F0
    std::uint8_t bDeNativize; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x01F9
    void* DenativizedRuntimeDataClass; // 0x0200 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_HeatSnakePendulumExtLogic, bSecondaryFireReleased) == 440, "Offset mismatch for UFortMovementMode_HeatSnakePendulumExtLogic::bSecondaryFireReleased");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumExtLogic, CachedTetherPoint) == 448, "Offset mismatch for UFortMovementMode_HeatSnakePendulumExtLogic::CachedTetherPoint");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumExtLogic, GE_InPendulumSwingMotion) == 488, "Offset mismatch for UFortMovementMode_HeatSnakePendulumExtLogic::GE_InPendulumSwingMotion");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumExtLogic, bDeNativize) == 504, "Offset mismatch for UFortMovementMode_HeatSnakePendulumExtLogic::bDeNativize");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumExtLogic, DenativizedRuntimeDataClass) == 512, "Offset mismatch for UFortMovementMode_HeatSnakePendulumExtLogic::DenativizedRuntimeDataClass");

// /Script/HeatSnakeRuntime.FortMovementMode_HeatSnakePendulumRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_HeatSnakePendulumRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t InitialTetherPoint[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float TimeElapsed; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSecondaryReleased; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    std::uint8_t LastPosition[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_HeatSnakePendulumRuntimeData, InitialTetherPoint) == 56, "Offset mismatch for UFortMovementMode_HeatSnakePendulumRuntimeData::InitialTetherPoint");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumRuntimeData, TimeElapsed) == 80, "Offset mismatch for UFortMovementMode_HeatSnakePendulumRuntimeData::TimeElapsed");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumRuntimeData, bSecondaryReleased) == 84, "Offset mismatch for UFortMovementMode_HeatSnakePendulumRuntimeData::bSecondaryReleased");
static_assert(offsetof(UFortMovementMode_HeatSnakePendulumRuntimeData, LastPosition) == 88, "Offset mismatch for UFortMovementMode_HeatSnakePendulumRuntimeData::LastPosition");

// /Script/HeatSnakeRuntime.HeatSnakeSwingDataInterface
// Kind: Class; super: Interface
class UHeatSnakeSwingDataInterface
{
public:
    std::uint8_t Opaque[1];
};
