/**
 * decamp dumper generated SDK
 * Package: /Script/MotoWrestleGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MotoWrestleGameplayRuntime.MotoWrestleLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UMotoWrestleLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bApplyLowerBodyCorrective; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1171
    double HipOffsetVertical; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double IdleAdditiveAlpha; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double CustomPelvisTwist; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsBeingEquipped; // 0x1190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x1191
    double LowerBodyAdditiveLoopSlopeDampFactor; // 0x1198 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEquipAdditiveToPassThroughVal; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEquipAdditiveToCorrectiveAdditiveVal; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlendUpperBodySourcePoseVal; // 0x11A2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMotoWrestleLayerAnimInstance, bApplyLowerBodyCorrective) == 4464, "Offset mismatch for UMotoWrestleLayerAnimInstance::bApplyLowerBodyCorrective");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, HipOffsetVertical) == 4472, "Offset mismatch for UMotoWrestleLayerAnimInstance::HipOffsetVertical");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, IdleAdditiveAlpha) == 4480, "Offset mismatch for UMotoWrestleLayerAnimInstance::IdleAdditiveAlpha");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, CustomPelvisTwist) == 4488, "Offset mismatch for UMotoWrestleLayerAnimInstance::CustomPelvisTwist");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, bIsBeingEquipped) == 4496, "Offset mismatch for UMotoWrestleLayerAnimInstance::bIsBeingEquipped");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, LowerBodyAdditiveLoopSlopeDampFactor) == 4504, "Offset mismatch for UMotoWrestleLayerAnimInstance::LowerBodyAdditiveLoopSlopeDampFactor");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, bEquipAdditiveToPassThroughVal) == 4512, "Offset mismatch for UMotoWrestleLayerAnimInstance::bEquipAdditiveToPassThroughVal");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, bEquipAdditiveToCorrectiveAdditiveVal) == 4513, "Offset mismatch for UMotoWrestleLayerAnimInstance::bEquipAdditiveToCorrectiveAdditiveVal");
static_assert(offsetof(UMotoWrestleLayerAnimInstance, bBlendUpperBodySourcePoseVal) == 4514, "Offset mismatch for UMotoWrestleLayerAnimInstance::bBlendUpperBodySourcePoseVal");
