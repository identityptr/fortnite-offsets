/**
 * decamp dumper generated SDK
 * Package: /Script/AirJellyfishRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AirJellyfishRuntime.FortAirJellyfishAnimInstance
// Kind: Class; super: FortAnimInstance
class UFortAirJellyfishAnimInstance
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    float RotatorLerpRate; // 0x0450 (Size: 0x4, Type: FloatProperty)
    float VelocityDirectionScalar; // 0x0454 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RootRotation[0x1]; // 0x0458 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAirJellyfishAnimInstance, RotatorLerpRate) == 1104, "Offset mismatch for UFortAirJellyfishAnimInstance::RotatorLerpRate");
static_assert(offsetof(UFortAirJellyfishAnimInstance, VelocityDirectionScalar) == 1108, "Offset mismatch for UFortAirJellyfishAnimInstance::VelocityDirectionScalar");
static_assert(offsetof(UFortAirJellyfishAnimInstance, RootRotation) == 1112, "Offset mismatch for UFortAirJellyfishAnimInstance::RootRotation");
