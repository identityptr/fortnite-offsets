/**
 * decamp dumper generated SDK
 * Package: /Script/AutoAimWeaponRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AutoAimWeaponRuntime.AutoAimWeaponBoneSegmentData
// Kind: ScriptStruct; super: none
struct FAutoAimWeaponBoneSegmentData
{
public:
    std::uint8_t BoneName1[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName2[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float BoneCollisionCapsuleRadiusAproximation; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAutoAimWeaponBoneSegmentData, BoneName1) == 0, "Offset mismatch for FAutoAimWeaponBoneSegmentData::BoneName1");
static_assert(offsetof(FAutoAimWeaponBoneSegmentData, BoneName2) == 4, "Offset mismatch for FAutoAimWeaponBoneSegmentData::BoneName2");
static_assert(offsetof(FAutoAimWeaponBoneSegmentData, BoneCollisionCapsuleRadiusAproximation) == 8, "Offset mismatch for FAutoAimWeaponBoneSegmentData::BoneCollisionCapsuleRadiusAproximation");

// /Script/AutoAimWeaponRuntime.FortEvent_LockOnReticleStateChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_LockOnReticleStateChanged
{
public:
    std::uint8_t bEnabledReticle; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_LockOnReticleStateChanged, bEnabledReticle) == 0, "Offset mismatch for FFortEvent_LockOnReticleStateChanged::bEnabledReticle");

// /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAutoAimWeaponKismetLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
// Kind: Class; super: FortPawnComponent
class UAutoAimWeaponPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t UseSingleLocationTargetingPawnTags[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t LowPriorityTargetPawnTags[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    TArray<void*> MultiSocketTargetingBoneSegmentDatas; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LockOnTimeReticleCenter[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t LockOnTimeReticleEdge[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLockOns[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t LineOfSightTraceChannel; // 0x0190 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0191
    float ProgressTowardNextLockOn; // 0x0194 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentLockOnCount; // 0x0198 (Size: 0x4, Type: IntProperty)
    float TargetToReticleDistanceNormalized; // 0x019C (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> LockOnTarget; // 0x01A0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAutoAimWeaponPawnComponent, UseSingleLocationTargetingPawnTags) == 200, "Offset mismatch for UAutoAimWeaponPawnComponent::UseSingleLocationTargetingPawnTags");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LowPriorityTargetPawnTags) == 232, "Offset mismatch for UAutoAimWeaponPawnComponent::LowPriorityTargetPawnTags");
static_assert(offsetof(UAutoAimWeaponPawnComponent, MultiSocketTargetingBoneSegmentDatas) == 264, "Offset mismatch for UAutoAimWeaponPawnComponent::MultiSocketTargetingBoneSegmentDatas");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LockOnTimeReticleCenter) == 280, "Offset mismatch for UAutoAimWeaponPawnComponent::LockOnTimeReticleCenter");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LockOnTimeReticleEdge) == 320, "Offset mismatch for UAutoAimWeaponPawnComponent::LockOnTimeReticleEdge");
static_assert(offsetof(UAutoAimWeaponPawnComponent, MaxLockOns) == 360, "Offset mismatch for UAutoAimWeaponPawnComponent::MaxLockOns");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LineOfSightTraceChannel) == 400, "Offset mismatch for UAutoAimWeaponPawnComponent::LineOfSightTraceChannel");
static_assert(offsetof(UAutoAimWeaponPawnComponent, ProgressTowardNextLockOn) == 404, "Offset mismatch for UAutoAimWeaponPawnComponent::ProgressTowardNextLockOn");
static_assert(offsetof(UAutoAimWeaponPawnComponent, CurrentLockOnCount) == 408, "Offset mismatch for UAutoAimWeaponPawnComponent::CurrentLockOnCount");
static_assert(offsetof(UAutoAimWeaponPawnComponent, TargetToReticleDistanceNormalized) == 412, "Offset mismatch for UAutoAimWeaponPawnComponent::TargetToReticleDistanceNormalized");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LockOnTarget) == 416, "Offset mismatch for UAutoAimWeaponPawnComponent::LockOnTarget");
