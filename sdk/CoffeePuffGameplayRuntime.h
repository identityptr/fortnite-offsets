/**
 * decamp dumper generated SDK
 * Package: /Script/CoffeePuffGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CoffeePuffGameplayRuntime.FortMovementMode_CoffeePuffPullCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_CoffeePuffPullCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> PullingActor; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortMovementMode_CoffeePuffPullCreationData, PullingActor) == 16, "Offset mismatch for FFortMovementMode_CoffeePuffPullCreationData::PullingActor");

// /Script/CoffeePuffGameplayRuntime.CoffeePuffLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UCoffeePuffLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t HookShotMontage[0x20]; // 0x1170 (Size: 0x20, Type: SoftObjectProperty)
    float EquipBlendOut; // 0x1190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1194
    double IdleAdditiveAlpha; // 0x1198 (Size: 0x8, Type: DoubleProperty)
    double HipOffsetVertical; // 0x11A0 (Size: 0x8, Type: DoubleProperty)
    double LowerBodyAdditiveLoopSlopeDampFactor; // 0x11A8 (Size: 0x8, Type: DoubleProperty)
    double CustomPelvisTwist; // 0x11B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHookShot_PullFail; // 0x11B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHookShot_PullSuccess; // 0x11B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyLowerBodyCorrective; // 0x11BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x11BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHookShot_Throw; // 0x11BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHookShot_HitSuccess; // 0x11BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAdditiveLoopBlend; // 0x11BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEquipAdditiveToPassThrough; // 0x11BF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEquipAdditiveToCorrectiveAdditive; // 0x11C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPassThroughToEquipCorrective; // 0x11C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEquipCorrectiveToPassThrough; // 0x11C2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCoffeePuffLayerAnimInstance, HookShotMontage) == 4464, "Offset mismatch for UCoffeePuffLayerAnimInstance::HookShotMontage");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, EquipBlendOut) == 4496, "Offset mismatch for UCoffeePuffLayerAnimInstance::EquipBlendOut");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, IdleAdditiveAlpha) == 4504, "Offset mismatch for UCoffeePuffLayerAnimInstance::IdleAdditiveAlpha");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, HipOffsetVertical) == 4512, "Offset mismatch for UCoffeePuffLayerAnimInstance::HipOffsetVertical");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, LowerBodyAdditiveLoopSlopeDampFactor) == 4520, "Offset mismatch for UCoffeePuffLayerAnimInstance::LowerBodyAdditiveLoopSlopeDampFactor");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, CustomPelvisTwist) == 4528, "Offset mismatch for UCoffeePuffLayerAnimInstance::CustomPelvisTwist");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bHookShot_PullFail) == 4536, "Offset mismatch for UCoffeePuffLayerAnimInstance::bHookShot_PullFail");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bHookShot_PullSuccess) == 4537, "Offset mismatch for UCoffeePuffLayerAnimInstance::bHookShot_PullSuccess");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bApplyLowerBodyCorrective) == 4538, "Offset mismatch for UCoffeePuffLayerAnimInstance::bApplyLowerBodyCorrective");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bIsFiring) == 4539, "Offset mismatch for UCoffeePuffLayerAnimInstance::bIsFiring");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bHookShot_Throw) == 4540, "Offset mismatch for UCoffeePuffLayerAnimInstance::bHookShot_Throw");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bHookShot_HitSuccess) == 4541, "Offset mismatch for UCoffeePuffLayerAnimInstance::bHookShot_HitSuccess");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bAdditiveLoopBlend) == 4542, "Offset mismatch for UCoffeePuffLayerAnimInstance::bAdditiveLoopBlend");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bEquipAdditiveToPassThrough) == 4543, "Offset mismatch for UCoffeePuffLayerAnimInstance::bEquipAdditiveToPassThrough");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bEquipAdditiveToCorrectiveAdditive) == 4544, "Offset mismatch for UCoffeePuffLayerAnimInstance::bEquipAdditiveToCorrectiveAdditive");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bPassThroughToEquipCorrective) == 4545, "Offset mismatch for UCoffeePuffLayerAnimInstance::bPassThroughToEquipCorrective");
static_assert(offsetof(UCoffeePuffLayerAnimInstance, bEquipCorrectiveToPassThrough) == 4546, "Offset mismatch for UCoffeePuffLayerAnimInstance::bEquipCorrectiveToPassThrough");

// /Script/CoffeePuffGameplayRuntime.FortMovementMode_CoffeePuffPullRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_CoffeePuffPullRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> NetPullingActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bNetPullStarted; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float LocalStartElapsedTime; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float LocalEndElapsedTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float LocalKnockbackSpeed; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LocalInvalidPullStartTime; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLocalLineOfSight; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalMovementBlocked; // 0x0055 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, NetPullingActor) == 56, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::NetPullingActor");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, bNetPullStarted) == 64, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::bNetPullStarted");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, LocalStartElapsedTime) == 68, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::LocalStartElapsedTime");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, LocalEndElapsedTime) == 72, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::LocalEndElapsedTime");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, LocalKnockbackSpeed) == 76, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::LocalKnockbackSpeed");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, LocalInvalidPullStartTime) == 80, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::LocalInvalidPullStartTime");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, bLocalLineOfSight) == 84, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::bLocalLineOfSight");
static_assert(offsetof(UFortMovementMode_CoffeePuffPullRuntimeData, bLocalMovementBlocked) == 85, "Offset mismatch for UFortMovementMode_CoffeePuffPullRuntimeData::bLocalMovementBlocked");

// /Script/CoffeePuffGameplayRuntime.FortMovementMode_ExtCoffeePuffPull
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtCoffeePuffPull
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t IgnorePendingLaunchForInitialDuration[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackDuration[0x30]; // 0x01E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackDistance[0x30]; // 0x0218 (Size: 0x30, Type: StructProperty)
    std::uint8_t PostKnockbackDelay[0x30]; // 0x0248 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackGravityMultiplier[0x30]; // 0x0278 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackKickUpStrength[0x30]; // 0x02A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackKickUpDuration[0x30]; // 0x02D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PullSpeed[0x30]; // 0x0308 (Size: 0x30, Type: StructProperty)
    std::uint8_t PullTargetOffset[0x30]; // 0x0338 (Size: 0x30, Type: StructProperty)
    std::uint8_t bForceOffsetDistance[0x30]; // 0x0368 (Size: 0x30, Type: StructProperty)
    std::uint8_t PullTargetOffsetMargin[0x30]; // 0x0398 (Size: 0x30, Type: StructProperty)
    std::uint8_t PullMaxDuration[0x30]; // 0x03C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PullMinDuration[0x30]; // 0x03F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinImpactDotProduct[0x30]; // 0x0428 (Size: 0x30, Type: StructProperty)
    std::uint8_t SurfaceSlideUnderOverForce[0x30]; // 0x0458 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxInvalidPullTime[0x30]; // 0x0488 (Size: 0x30, Type: StructProperty)
    std::uint8_t InterruptClampedSpeed[0x30]; // 0x04B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t LineOfSightDelay[0x30]; // 0x04E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCheckLineOfSight[0x30]; // 0x0518 (Size: 0x30, Type: StructProperty)
    std::uint8_t LineOfSightHeightOffset[0x30]; // 0x0548 (Size: 0x30, Type: StructProperty)
    std::uint8_t DisconnectProtectionUpdateRate[0x30]; // 0x0578 (Size: 0x30, Type: StructProperty)
    std::uint8_t KnockbackEndEventTag[0x4]; // 0x05A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PullStartEventTag[0x4]; // 0x05AC (Size: 0x4, Type: StructProperty)
    std::uint8_t PullInvalidatedEventTag[0x4]; // 0x05B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t HookshotActiveTag[0x4]; // 0x05B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t LineOfSightCollisionProfile[0x8]; // 0x05B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t LineOfSightIgnoreTags[0x1]; // 0x05C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, IgnorePendingLaunchForInitialDuration) == 440, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::IgnorePendingLaunchForInitialDuration");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, KnockbackDuration) == 488, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::KnockbackDuration");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, KnockbackDistance) == 536, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::KnockbackDistance");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PostKnockbackDelay) == 584, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PostKnockbackDelay");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, KnockbackGravityMultiplier) == 632, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::KnockbackGravityMultiplier");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, KnockbackKickUpStrength) == 680, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::KnockbackKickUpStrength");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, KnockbackKickUpDuration) == 728, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::KnockbackKickUpDuration");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullSpeed) == 776, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullSpeed");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullTargetOffset) == 824, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullTargetOffset");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, bForceOffsetDistance) == 872, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::bForceOffsetDistance");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullTargetOffsetMargin) == 920, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullTargetOffsetMargin");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullMaxDuration) == 968, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullMaxDuration");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullMinDuration) == 1016, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullMinDuration");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, MinImpactDotProduct) == 1064, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::MinImpactDotProduct");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, SurfaceSlideUnderOverForce) == 1112, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::SurfaceSlideUnderOverForce");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, MaxInvalidPullTime) == 1160, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::MaxInvalidPullTime");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, InterruptClampedSpeed) == 1208, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::InterruptClampedSpeed");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, LineOfSightDelay) == 1256, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::LineOfSightDelay");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, bCheckLineOfSight) == 1304, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::bCheckLineOfSight");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, LineOfSightHeightOffset) == 1352, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::LineOfSightHeightOffset");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, DisconnectProtectionUpdateRate) == 1400, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::DisconnectProtectionUpdateRate");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, KnockbackEndEventTag) == 1448, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::KnockbackEndEventTag");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullStartEventTag) == 1452, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullStartEventTag");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, PullInvalidatedEventTag) == 1456, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::PullInvalidatedEventTag");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, HookshotActiveTag) == 1460, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::HookshotActiveTag");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, LineOfSightCollisionProfile) == 1464, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::LineOfSightCollisionProfile");
static_assert(offsetof(UFortMovementMode_ExtCoffeePuffPull, LineOfSightIgnoreTags) == 1472, "Offset mismatch for UFortMovementMode_ExtCoffeePuffPull::LineOfSightIgnoreTags");
