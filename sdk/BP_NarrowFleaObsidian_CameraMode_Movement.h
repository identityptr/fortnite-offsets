/**
 * decamp dumper generated SDK
 * Package: /NarrowFleaObsidian/Gameplay/Camera/BP_NarrowFleaObsidian_CameraMode_Movement
 */
#pragma once
#include "Basic.h"

// /NarrowFleaObsidian/Gameplay/Camera/BP_NarrowFleaObsidian_CameraMode_Movement.BP_NarrowFleaObsidian_CameraMode_Movement_C
// Kind: BlueprintGeneratedClass; super: FortCameraMode_Movement
class UBP_NarrowFleaObsidian_CameraMode_Movement_C
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    void* InitialOffsetCurve; // 0x2080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInitialOffsetIsAdditive; // 0x2088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x2089
    std::uint8_t AccelerationOffsetDeadzone[0x28]; // 0x2090 (Size: 0x28, Type: StructProperty)
    std::uint8_t AccelerationMaxOffset[0x28]; // 0x20B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseViewRotationForYawDelta; // 0x20E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x20E1
    void* RightAccelerationOffsetCurve; // 0x20E8 (Size: 0x8, Type: ObjectProperty)
    void* UpAccelerationOffsetCurve; // 0x20F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccelerationOffsetInterpSpeed[0x18]; // 0x20F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxCameraYawSpeedForAdjustment[0x28]; // 0x2110 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxVelocityForAdjustment[0x28]; // 0x2138 (Size: 0x28, Type: StructProperty)
    std::uint8_t bClampYawRelativeToVelocity; // 0x2160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x2161
    std::uint8_t YawMinRelativeToVelocity[0x28]; // 0x2168 (Size: 0x28, Type: StructProperty)
    std::uint8_t YawMaxRelativeToVelocity[0x28]; // 0x2190 (Size: 0x28, Type: StructProperty)
    std::uint8_t bClampPitchRelativeToVelocity; // 0x21B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x21B9
    std::uint8_t PitchMinRelativeToVelocity[0x28]; // 0x21C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PitchMaxRelativeToVelocity[0x28]; // 0x21E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialHoldInterpSpeed[0x18]; // 0x2210 (Size: 0x18, Type: StructProperty)
    void* InitialHoldInterpSpeedCurve; // 0x2228 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitialHoldInterpSpeedTime[0x28]; // 0x2230 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialInterpSpeedBlendOutTime[0x28]; // 0x2258 (Size: 0x28, Type: StructProperty)
    std::uint8_t bInitialHoldDuringSlowdown; // 0x2280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x2281
    void* InitialInterpSpeedBlendCurve; // 0x2288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaxFOV[0x1]; // 0x2290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, InitialOffsetCurve) == 8320, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::InitialOffsetCurve");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, bInitialOffsetIsAdditive) == 8328, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::bInitialOffsetIsAdditive");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, AccelerationOffsetDeadzone) == 8336, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::AccelerationOffsetDeadzone");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, AccelerationMaxOffset) == 8376, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::AccelerationMaxOffset");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, bUseViewRotationForYawDelta) == 8416, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::bUseViewRotationForYawDelta");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, RightAccelerationOffsetCurve) == 8424, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::RightAccelerationOffsetCurve");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, UpAccelerationOffsetCurve) == 8432, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::UpAccelerationOffsetCurve");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, AccelerationOffsetInterpSpeed) == 8440, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::AccelerationOffsetInterpSpeed");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, MaxCameraYawSpeedForAdjustment) == 8464, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::MaxCameraYawSpeedForAdjustment");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, MaxVelocityForAdjustment) == 8504, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::MaxVelocityForAdjustment");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, bClampYawRelativeToVelocity) == 8544, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::bClampYawRelativeToVelocity");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, YawMinRelativeToVelocity) == 8552, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::YawMinRelativeToVelocity");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, YawMaxRelativeToVelocity) == 8592, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::YawMaxRelativeToVelocity");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, bClampPitchRelativeToVelocity) == 8632, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::bClampPitchRelativeToVelocity");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, PitchMinRelativeToVelocity) == 8640, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::PitchMinRelativeToVelocity");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, PitchMaxRelativeToVelocity) == 8680, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::PitchMaxRelativeToVelocity");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, InitialHoldInterpSpeed) == 8720, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::InitialHoldInterpSpeed");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, InitialHoldInterpSpeedCurve) == 8744, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::InitialHoldInterpSpeedCurve");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, InitialHoldInterpSpeedTime) == 8752, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::InitialHoldInterpSpeedTime");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, InitialInterpSpeedBlendOutTime) == 8792, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::InitialInterpSpeedBlendOutTime");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, bInitialHoldDuringSlowdown) == 8832, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::bInitialHoldDuringSlowdown");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, InitialInterpSpeedBlendCurve) == 8840, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::InitialInterpSpeedBlendCurve");
static_assert(offsetof(UBP_NarrowFleaObsidian_CameraMode_Movement_C, MaxFOV) == 8848, "Offset mismatch for UBP_NarrowFleaObsidian_CameraMode_Movement_C::MaxFOV");
