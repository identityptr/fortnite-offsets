/**
 * decamp dumper generated SDK
 * Package: /Script/CrimsonMistRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CrimsonMistRuntime.CrimsonMistHeavyMinigunAnimInstance
// Kind: Class; super: AnimInstance
class UCrimsonMistHeavyMinigunAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    float Barrels_DegreesOffset_Current; // 0x0260 (Size: 0x4, Type: FloatProperty)
    float AmmoSegmentRotation; // 0x0264 (Size: 0x4, Type: FloatProperty)
    float LowAmmoSegmentRotation; // 0x0268 (Size: 0x4, Type: FloatProperty)
    float Cluster_DegreesOffset_Current; // 0x026C (Size: 0x4, Type: FloatProperty)
    std::int32_t AmmoCount; // 0x0270 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsFiring; // 0x0274 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0275
    std::uint8_t LowAmmoSegmentRotationRotator[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t AmmoSegmentRotationRotator[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClusterDegreesOffsetCurrentRotator[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t BarrelsDegreesOffsetCurrentRotator[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t NegBarrelsDegreesOffsetCurrentRotator[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    float IsFiringFloat; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAmmoCountLow; // 0x02F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoorOpen; // 0x02F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMagOut; // 0x02F6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMagIn; // 0x02F7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MagDoorOpenTagName[0x4]; // 0x02F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t MagOutTagName[0x4]; // 0x02FC (Size: 0x4, Type: StructProperty)
    std::uint8_t MagInTagName[0x8]; // 0x0300 (Size: 0x8, Type: StructProperty)
    std::uint8_t BarrelBrakeCurve[0x48]; // 0x0308 (Size: 0x48, Type: StructProperty)
    float MaxNegSpinSpeed; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float MaxPosSpinSpeed; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float ClusterDegMultiplier; // 0x0358 (Size: 0x4, Type: FloatProperty)
    std::int32_t PrevBarrelQuadrantRumble; // 0x035C (Size: 0x4, Type: IntProperty)
    std::int32_t PrevBarrelQuadrant; // 0x0360 (Size: 0x4, Type: IntProperty)
    float BarrelsDegreesOffsetUnclamped; // 0x0364 (Size: 0x4, Type: FloatProperty)
    float CurrentBrakeTime; // 0x0368 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCurrentlySpooling; // 0x036C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCurrentlyEquipping; // 0x036D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayedFinalSettle; // 0x036E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, Barrels_DegreesOffset_Current) == 608, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::Barrels_DegreesOffset_Current");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, AmmoSegmentRotation) == 612, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::AmmoSegmentRotation");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, LowAmmoSegmentRotation) == 616, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::LowAmmoSegmentRotation");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, Cluster_DegreesOffset_Current) == 620, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::Cluster_DegreesOffset_Current");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, AmmoCount) == 624, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::AmmoCount");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bIsFiring) == 628, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bIsFiring");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, LowAmmoSegmentRotationRotator) == 632, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::LowAmmoSegmentRotationRotator");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, AmmoSegmentRotationRotator) == 656, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::AmmoSegmentRotationRotator");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, ClusterDegreesOffsetCurrentRotator) == 680, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::ClusterDegreesOffsetCurrentRotator");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, BarrelsDegreesOffsetCurrentRotator) == 704, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::BarrelsDegreesOffsetCurrentRotator");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, NegBarrelsDegreesOffsetCurrentRotator) == 728, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::NegBarrelsDegreesOffsetCurrentRotator");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, IsFiringFloat) == 752, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::IsFiringFloat");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bIsAmmoCountLow) == 756, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bIsAmmoCountLow");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bDoorOpen) == 757, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bDoorOpen");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bMagOut) == 758, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bMagOut");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bMagIn) == 759, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bMagIn");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, MagDoorOpenTagName) == 760, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::MagDoorOpenTagName");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, MagOutTagName) == 764, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::MagOutTagName");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, MagInTagName) == 768, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::MagInTagName");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, BarrelBrakeCurve) == 776, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::BarrelBrakeCurve");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, MaxNegSpinSpeed) == 848, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::MaxNegSpinSpeed");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, MaxPosSpinSpeed) == 852, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::MaxPosSpinSpeed");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, ClusterDegMultiplier) == 856, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::ClusterDegMultiplier");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, PrevBarrelQuadrantRumble) == 860, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::PrevBarrelQuadrantRumble");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, PrevBarrelQuadrant) == 864, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::PrevBarrelQuadrant");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, BarrelsDegreesOffsetUnclamped) == 868, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::BarrelsDegreesOffsetUnclamped");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, CurrentBrakeTime) == 872, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::CurrentBrakeTime");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bCurrentlySpooling) == 876, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bCurrentlySpooling");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bCurrentlyEquipping) == 877, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bCurrentlyEquipping");
static_assert(offsetof(UCrimsonMistHeavyMinigunAnimInstance, bPlayedFinalSettle) == 878, "Offset mismatch for UCrimsonMistHeavyMinigunAnimInstance::bPlayedFinalSettle");

// /Script/CrimsonMistRuntime.CrimsonMistHeavyMinigunWeaponInterface
// Kind: Class; super: Interface
class UCrimsonMistHeavyMinigunWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CrimsonMistRuntime.CrimsonSmokeLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UCrimsonSmokeLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float RotationZYaw; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNontargetedToPassthrough; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPassthroughNonTargeted; // 0x1175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1176
    double TimeToExitNonTargetedPose; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    void* HeavyMinigunCrouchReloadCMMMAnimMontage; // 0x1180 (Size: 0x8, Type: ObjectProperty)
    void* HeavyMinigunReloadCMMMAnimMontage; // 0x1188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCrimsonSmokeLayerAnimInstance, RotationZYaw) == 4464, "Offset mismatch for UCrimsonSmokeLayerAnimInstance::RotationZYaw");
static_assert(offsetof(UCrimsonSmokeLayerAnimInstance, bNontargetedToPassthrough) == 4468, "Offset mismatch for UCrimsonSmokeLayerAnimInstance::bNontargetedToPassthrough");
static_assert(offsetof(UCrimsonSmokeLayerAnimInstance, bPassthroughNonTargeted) == 4469, "Offset mismatch for UCrimsonSmokeLayerAnimInstance::bPassthroughNonTargeted");
static_assert(offsetof(UCrimsonSmokeLayerAnimInstance, TimeToExitNonTargetedPose) == 4472, "Offset mismatch for UCrimsonSmokeLayerAnimInstance::TimeToExitNonTargetedPose");
static_assert(offsetof(UCrimsonSmokeLayerAnimInstance, HeavyMinigunCrouchReloadCMMMAnimMontage) == 4480, "Offset mismatch for UCrimsonSmokeLayerAnimInstance::HeavyMinigunCrouchReloadCMMMAnimMontage");
static_assert(offsetof(UCrimsonSmokeLayerAnimInstance, HeavyMinigunReloadCMMMAnimMontage) == 4488, "Offset mismatch for UCrimsonSmokeLayerAnimInstance::HeavyMinigunReloadCMMMAnimMontage");

// /Script/CrimsonMistRuntime.FortWeaponComponent_BarrelSpin
// Kind: Class; super: FortWeaponComponent
class UFortWeaponComponent_BarrelSpin
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t RPMGainPerSecond[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RPMLossPerSecond[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRPM[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t bStopOnUnEquip; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    FMulticastInlineDelegate OnSpoolingStarted; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBrakingStarted; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRPMChanged; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0170
    float CurrentRPM; // 0x017C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsSpooling; // 0x0180 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortWeaponComponent_BarrelSpin, RPMGainPerSecond) == 192, "Offset mismatch for UFortWeaponComponent_BarrelSpin::RPMGainPerSecond");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, RPMLossPerSecond) == 232, "Offset mismatch for UFortWeaponComponent_BarrelSpin::RPMLossPerSecond");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, MaxRPM) == 272, "Offset mismatch for UFortWeaponComponent_BarrelSpin::MaxRPM");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, bStopOnUnEquip) == 312, "Offset mismatch for UFortWeaponComponent_BarrelSpin::bStopOnUnEquip");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, OnSpoolingStarted) == 320, "Offset mismatch for UFortWeaponComponent_BarrelSpin::OnSpoolingStarted");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, OnBrakingStarted) == 336, "Offset mismatch for UFortWeaponComponent_BarrelSpin::OnBrakingStarted");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, OnRPMChanged) == 352, "Offset mismatch for UFortWeaponComponent_BarrelSpin::OnRPMChanged");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, CurrentRPM) == 380, "Offset mismatch for UFortWeaponComponent_BarrelSpin::CurrentRPM");
static_assert(offsetof(UFortWeaponComponent_BarrelSpin, bIsSpooling) == 384, "Offset mismatch for UFortWeaponComponent_BarrelSpin::bIsSpooling");
