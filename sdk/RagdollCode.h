/**
 * decamp dumper generated SDK
 * Package: /Script/RagdollCode
 */
#pragma once
#include "Basic.h"

// /Script/RagdollCode.FortMovementMode_RagdollCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_RagdollCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float RagdollInitSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t RagdollInitDirection[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMovementMode_RagdollCreationData, RagdollInitSpeed) == 16, "Offset mismatch for FFortMovementMode_RagdollCreationData::RagdollInitSpeed");
static_assert(offsetof(FFortMovementMode_RagdollCreationData, RagdollInitDirection) == 24, "Offset mismatch for FFortMovementMode_RagdollCreationData::RagdollInitDirection");

// /Script/RagdollCode.FortMovementMode_ExtLogicRagdoll
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicRagdoll
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t MaxGroundActiveTime[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumGroundActiveTime[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinHorizontalSpeed[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t AcceptableMaxSlopeAngle[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputInfluenceMultiplier[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBrakingDeceleration[0x8]; // 0x0288 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t DBNORagdollEnabled[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollCooldown[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RagdollStatusTag[0x4]; // 0x02E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RagdollIsAllowedTag[0x4]; // 0x02E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AdditionalTagsToPush[0x20]; // 0x02E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PreventHolsterTags[0x20]; // 0x0308 (Size: 0x20, Type: StructProperty)
    std::uint8_t bWeaponHolsterIsApplicable; // 0x0328 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0329
    std::uint8_t DisableJumpInputTime[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    void* IntroAnimMontageDefault; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* OutroAnimMontageDefault; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* OutroAnimMontageOnHit; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowRagdollInAir; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRagdollSlowdown; // 0x0371 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0372
    std::uint8_t RagdollSlowdownLength[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    float RagdollDeactivatedTime; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03A4
    std::uint8_t OutroTimeReductionFactor[0x28]; // 0x03A8 (Size: 0x28, Type: StructProperty)
    void* SlopeAccelerationCurve; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* IntroSpeedCurve; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* OutroSpeedCurve; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x03E8
    void* RagdollAnimLayer; // 0x0400 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AudioLoopHandle[0x18]; // 0x0408 (Size: 0x18, Type: StructProperty)
    void* AudioLoopGameplayEffect; // 0x0420 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, MaxGroundActiveTime) == 448, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::MaxGroundActiveTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, MinimumGroundActiveTime) == 488, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::MinimumGroundActiveTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, MinHorizontalSpeed) == 528, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::MinHorizontalSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, AcceptableMaxSlopeAngle) == 568, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::AcceptableMaxSlopeAngle");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, InputInfluenceMultiplier) == 608, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::InputInfluenceMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, MaxBrakingDeceleration) == 648, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::MaxBrakingDeceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, DBNORagdollEnabled) == 656, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::DBNORagdollEnabled");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, DBNORagdollCooldown) == 696, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::DBNORagdollCooldown");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, RagdollStatusTag) == 736, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::RagdollStatusTag");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, RagdollIsAllowedTag) == 740, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::RagdollIsAllowedTag");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, AdditionalTagsToPush) == 744, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::AdditionalTagsToPush");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, PreventHolsterTags) == 776, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::PreventHolsterTags");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, bWeaponHolsterIsApplicable) == 808, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::bWeaponHolsterIsApplicable");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, DisableJumpInputTime) == 816, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::DisableJumpInputTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, IntroAnimMontageDefault) == 856, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::IntroAnimMontageDefault");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, OutroAnimMontageDefault) == 864, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::OutroAnimMontageDefault");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, OutroAnimMontageOnHit) == 872, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::OutroAnimMontageOnHit");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, bAllowRagdollInAir) == 880, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::bAllowRagdollInAir");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, bUseRagdollSlowdown) == 881, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::bUseRagdollSlowdown");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, RagdollSlowdownLength) == 888, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::RagdollSlowdownLength");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, RagdollDeactivatedTime) == 928, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::RagdollDeactivatedTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, OutroTimeReductionFactor) == 936, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::OutroTimeReductionFactor");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, SlopeAccelerationCurve) == 976, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::SlopeAccelerationCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, IntroSpeedCurve) == 984, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::IntroSpeedCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, OutroSpeedCurve) == 992, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::OutroSpeedCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, RagdollAnimLayer) == 1024, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::RagdollAnimLayer");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, AudioLoopHandle) == 1032, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::AudioLoopHandle");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdoll, AudioLoopGameplayEffect) == 1056, "Offset mismatch for UFortMovementMode_ExtLogicRagdoll::AudioLoopGameplayEffect");

// /Script/RagdollCode.FortMovementMode_RagdollBaseRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_RagdollBaseRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float ElapsedGroundTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t NetRagdollInitDirection[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float NetInitSpeed; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x10]; // 0x005C
    float CurrentSlopeAngleInMoveDirection; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4C]; // 0x0070
    std::int32_t BounceCount; // 0x00BC (Size: 0x4, Type: IntProperty)
    float BounceTime; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_RagdollBaseRuntimeData, ElapsedGroundTime) == 56, "Offset mismatch for UFortMovementMode_RagdollBaseRuntimeData::ElapsedGroundTime");
static_assert(offsetof(UFortMovementMode_RagdollBaseRuntimeData, NetRagdollInitDirection) == 64, "Offset mismatch for UFortMovementMode_RagdollBaseRuntimeData::NetRagdollInitDirection");
static_assert(offsetof(UFortMovementMode_RagdollBaseRuntimeData, NetInitSpeed) == 88, "Offset mismatch for UFortMovementMode_RagdollBaseRuntimeData::NetInitSpeed");
static_assert(offsetof(UFortMovementMode_RagdollBaseRuntimeData, CurrentSlopeAngleInMoveDirection) == 108, "Offset mismatch for UFortMovementMode_RagdollBaseRuntimeData::CurrentSlopeAngleInMoveDirection");
static_assert(offsetof(UFortMovementMode_RagdollBaseRuntimeData, BounceCount) == 188, "Offset mismatch for UFortMovementMode_RagdollBaseRuntimeData::BounceCount");
static_assert(offsetof(UFortMovementMode_RagdollBaseRuntimeData, BounceTime) == 192, "Offset mismatch for UFortMovementMode_RagdollBaseRuntimeData::BounceTime");

// /Script/RagdollCode.RagdollLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class URagdollLibrary
{
public:
    std::uint8_t Opaque[1];
};
