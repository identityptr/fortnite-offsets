/**
 * decamp dumper generated SDK
 * Package: /Script/BallisticShieldBaseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BallisticShieldBaseRuntime.BallisticShieldItemLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UBallisticShieldItemLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsRush; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsEquipping; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterLanding; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitLanding; // 0x1173 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsShieldBlocking; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsStaggerBuildup; // 0x1175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1176
    float Yaw; // 0x1178 (Size: 0x4, Type: FloatProperty)
    float ChargeAOAlpha; // 0x117C (Size: 0x4, Type: FloatProperty)
    std::int32_t GenderAndSize; // 0x1180 (Size: 0x4, Type: IntProperty)
    float ReloadUBAlpha; // 0x1184 (Size: 0x4, Type: FloatProperty)
    float MaskLeftArmAlpha; // 0x1188 (Size: 0x4, Type: FloatProperty)
    float StaggerAmount; // 0x118C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, bIsRush) == 4464, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::bIsRush");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, bIsEquipping) == 4465, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::bIsEquipping");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, bEnterLanding) == 4466, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::bEnterLanding");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, bExitLanding) == 4467, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::bExitLanding");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, bIsShieldBlocking) == 4468, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::bIsShieldBlocking");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, bIsStaggerBuildup) == 4469, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::bIsStaggerBuildup");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, Yaw) == 4472, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::Yaw");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, ChargeAOAlpha) == 4476, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::ChargeAOAlpha");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, GenderAndSize) == 4480, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::GenderAndSize");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, ReloadUBAlpha) == 4484, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::ReloadUBAlpha");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, MaskLeftArmAlpha) == 4488, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::MaskLeftArmAlpha");
static_assert(offsetof(UBallisticShieldItemLayerAnimInstance, StaggerAmount) == 4492, "Offset mismatch for UBallisticShieldItemLayerAnimInstance::StaggerAmount");

// /Script/BallisticShieldBaseRuntime.BallisticShieldWeaponInterface
// Kind: Class; super: Interface
class UBallisticShieldWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BallisticShieldBaseRuntime.FortMovementMode_ELBShieldSprint
// Kind: Class; super: FortMovementMode_ELTacSprint
class UFortMovementMode_ELBShieldSprint
{
public:
    std::uint8_t Pad_0000[0x5E8]; // 0x0000
    TSoftClassPtr<void> GrantedAbility; // 0x05E8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortMovementMode_ELBShieldSprint, GrantedAbility) == 1512, "Offset mismatch for UFortMovementMode_ELBShieldSprint::GrantedAbility");

// /Script/BallisticShieldBaseRuntime.TargetingFilterTask_BShieldCharge
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class UTargetingFilterTask_BShieldCharge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> WalkableActorClasses; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BashableActorAngle[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t MainTraceDistance[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t FloorHitZTolerance[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetingFilterTask_BShieldCharge, WalkableActorClasses) == 40, "Offset mismatch for UTargetingFilterTask_BShieldCharge::WalkableActorClasses");
static_assert(offsetof(UTargetingFilterTask_BShieldCharge, BashableActorAngle) == 56, "Offset mismatch for UTargetingFilterTask_BShieldCharge::BashableActorAngle");
static_assert(offsetof(UTargetingFilterTask_BShieldCharge, MainTraceDistance) == 96, "Offset mismatch for UTargetingFilterTask_BShieldCharge::MainTraceDistance");
static_assert(offsetof(UTargetingFilterTask_BShieldCharge, FloorHitZTolerance) == 136, "Offset mismatch for UTargetingFilterTask_BShieldCharge::FloorHitZTolerance");
