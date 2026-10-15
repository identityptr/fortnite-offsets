/**
 * decamp dumper generated SDK
 * Package: /Script/GrappleWeaponRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GrappleWeaponRuntime.GrappleWeaponLedgeConfig
// Kind: ScriptStruct; super: none
struct FGrappleWeaponLedgeConfig
{
public:
    std::uint8_t VerticalSurfaceThreshold[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t LedgeHeightCapsuleMultiplier[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldTreatWalkableSurfaceAsLedge[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGrappleWeaponLedgeConfig, VerticalSurfaceThreshold) == 0, "Offset mismatch for FGrappleWeaponLedgeConfig::VerticalSurfaceThreshold");
static_assert(offsetof(FGrappleWeaponLedgeConfig, LedgeHeightCapsuleMultiplier) == 40, "Offset mismatch for FGrappleWeaponLedgeConfig::LedgeHeightCapsuleMultiplier");
static_assert(offsetof(FGrappleWeaponLedgeConfig, ShouldTreatWalkableSurfaceAsLedge) == 80, "Offset mismatch for FGrappleWeaponLedgeConfig::ShouldTreatWalkableSurfaceAsLedge");

// /Script/GrappleWeaponRuntime.GrappleWeaponTargetInfo
// Kind: ScriptStruct; super: none
struct FGrappleWeaponTargetInfo
{
public:
    std::uint8_t bHitTarget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> TargetActor; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> TargetComponent; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t TargetPoint[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float HitDistance; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGrappleWeaponTargetInfo, bHitTarget) == 0, "Offset mismatch for FGrappleWeaponTargetInfo::bHitTarget");
static_assert(offsetof(FGrappleWeaponTargetInfo, TargetActor) == 4, "Offset mismatch for FGrappleWeaponTargetInfo::TargetActor");
static_assert(offsetof(FGrappleWeaponTargetInfo, TargetComponent) == 12, "Offset mismatch for FGrappleWeaponTargetInfo::TargetComponent");
static_assert(offsetof(FGrappleWeaponTargetInfo, TargetPoint) == 24, "Offset mismatch for FGrappleWeaponTargetInfo::TargetPoint");
static_assert(offsetof(FGrappleWeaponTargetInfo, HitDistance) == 48, "Offset mismatch for FGrappleWeaponTargetInfo::HitDistance");

// /Script/GrappleWeaponRuntime.GrappleWeaponTargetingConfig
// Kind: ScriptStruct; super: none
struct FGrappleWeaponTargetingConfig
{
public:
    std::uint8_t LedgeConfig[0x78]; // 0x0000 (Size: 0x78, Type: StructProperty)
    std::uint8_t PawnTraceRadius[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t SecondaryTraceRadius[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SecondaryTraceStartDistance[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinHitDistance[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHitDistance[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t TraceDownDistance[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    float ProjectileRadius; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float TraceForwardOffset; // 0x016C (Size: 0x4, Type: FloatProperty)
    float TraceMaxAngle; // 0x0170 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGrappleWeaponTargetingConfig, LedgeConfig) == 0, "Offset mismatch for FGrappleWeaponTargetingConfig::LedgeConfig");
static_assert(offsetof(FGrappleWeaponTargetingConfig, PawnTraceRadius) == 120, "Offset mismatch for FGrappleWeaponTargetingConfig::PawnTraceRadius");
static_assert(offsetof(FGrappleWeaponTargetingConfig, SecondaryTraceRadius) == 160, "Offset mismatch for FGrappleWeaponTargetingConfig::SecondaryTraceRadius");
static_assert(offsetof(FGrappleWeaponTargetingConfig, SecondaryTraceStartDistance) == 200, "Offset mismatch for FGrappleWeaponTargetingConfig::SecondaryTraceStartDistance");
static_assert(offsetof(FGrappleWeaponTargetingConfig, MinHitDistance) == 240, "Offset mismatch for FGrappleWeaponTargetingConfig::MinHitDistance");
static_assert(offsetof(FGrappleWeaponTargetingConfig, MaxHitDistance) == 280, "Offset mismatch for FGrappleWeaponTargetingConfig::MaxHitDistance");
static_assert(offsetof(FGrappleWeaponTargetingConfig, TraceDownDistance) == 320, "Offset mismatch for FGrappleWeaponTargetingConfig::TraceDownDistance");
static_assert(offsetof(FGrappleWeaponTargetingConfig, ProjectileRadius) == 360, "Offset mismatch for FGrappleWeaponTargetingConfig::ProjectileRadius");
static_assert(offsetof(FGrappleWeaponTargetingConfig, TraceForwardOffset) == 364, "Offset mismatch for FGrappleWeaponTargetingConfig::TraceForwardOffset");
static_assert(offsetof(FGrappleWeaponTargetingConfig, TraceMaxAngle) == 368, "Offset mismatch for FGrappleWeaponTargetingConfig::TraceMaxAngle");

// /Script/GrappleWeaponRuntime.CustomCharacterPartAnimInstance_GrappleHook
// Kind: Class; super: CustomCharacterPartAnimInstance
class UCustomCharacterPartAnimInstance_GrappleHook
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t IsFired; // 0x0630 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0631
    std::int32_t DistanceBucket; // 0x0634 (Size: 0x4, Type: IntProperty)
    std::uint8_t MantisAttackAir; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack_2; // 0x063A (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack_3; // 0x063B (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack_4; // 0x063C (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsAttackFromCast; // 0x063D (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHookFireShort; // 0x063E (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHookFireMid; // 0x063F (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsHookFireLong; // 0x0640 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, IsFired) == 1584, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::IsFired");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, DistanceBucket) == 1588, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::DistanceBucket");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, MantisAttackAir) == 1592, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::MantisAttackAir");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, MantisAttack) == 1593, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::MantisAttack");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, MantisAttack_2) == 1594, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::MantisAttack_2");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, MantisAttack_3) == 1595, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::MantisAttack_3");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, MantisAttack_4) == 1596, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::MantisAttack_4");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, IsAttackFromCast) == 1597, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::IsAttackFromCast");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, IsHookFireShort) == 1598, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::IsHookFireShort");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, IsHookFireMid) == 1599, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::IsHookFireMid");
static_assert(offsetof(UCustomCharacterPartAnimInstance_GrappleHook, IsHookFireLong) == 1600, "Offset mismatch for UCustomCharacterPartAnimInstance_GrappleHook::IsHookFireLong");

// /Script/GrappleWeaponRuntime.GrappleKnifeLayerAnimInstance
// Kind: Class; super: FortMantisLayerAnimInstance
class UGrappleKnifeLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1180]; // 0x0000
    std::uint8_t bIsAttached; // 0x1180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFired; // 0x1181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimStartWallBounce; // 0x1182 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x1183
    float PawnRotationRateYaw; // 0x1184 (Size: 0x4, Type: FloatProperty)
    float AnimBounceAngle; // 0x1188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsFireOnMotorBike; // 0x118C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExitUnexpectedly; // 0x118D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCastInAir; // 0x118E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCastUpperbody; // 0x118F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCastGroundIdle; // 0x1190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCastGroundLoco; // 0x1191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDistanceBucketIs0; // 0x1192 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDistanceBucketIs2; // 0x1193 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExitGround; // 0x1194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExitWallBounce; // 0x1195 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExitZipAirStart; // 0x1196 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsAttached) == 4480, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsAttached");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsFired) == 4481, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsFired");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bAnimStartWallBounce) == 4482, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bAnimStartWallBounce");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, PawnRotationRateYaw) == 4484, "Offset mismatch for UGrappleKnifeLayerAnimInstance::PawnRotationRateYaw");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, AnimBounceAngle) == 4488, "Offset mismatch for UGrappleKnifeLayerAnimInstance::AnimBounceAngle");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsFireOnMotorBike) == 4492, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsFireOnMotorBike");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsExitUnexpectedly) == 4493, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsExitUnexpectedly");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsCastInAir) == 4494, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsCastInAir");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsCastUpperbody) == 4495, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsCastUpperbody");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsCastGroundIdle) == 4496, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsCastGroundIdle");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsCastGroundLoco) == 4497, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsCastGroundLoco");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bDistanceBucketIs0) == 4498, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bDistanceBucketIs0");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bDistanceBucketIs2) == 4499, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bDistanceBucketIs2");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsExitGround) == 4500, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsExitGround");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsExitWallBounce) == 4501, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsExitWallBounce");
static_assert(offsetof(UGrappleKnifeLayerAnimInstance, bIsExitZipAirStart) == 4502, "Offset mismatch for UGrappleKnifeLayerAnimInstance::bIsExitZipAirStart");

// /Script/GrappleWeaponRuntime.GrappleKnifeWeaponAnimInstance
// Kind: Class; super: FortMantisAnimInstance
class UGrappleKnifeWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t MantisAttackAir; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack; // 0x0341 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack_2; // 0x0342 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack_3; // 0x0343 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MantisAttack_4; // 0x0344 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGrappleKnifeWeaponAnimInstance, MantisAttackAir) == 832, "Offset mismatch for UGrappleKnifeWeaponAnimInstance::MantisAttackAir");
static_assert(offsetof(UGrappleKnifeWeaponAnimInstance, MantisAttack) == 833, "Offset mismatch for UGrappleKnifeWeaponAnimInstance::MantisAttack");
static_assert(offsetof(UGrappleKnifeWeaponAnimInstance, MantisAttack_2) == 834, "Offset mismatch for UGrappleKnifeWeaponAnimInstance::MantisAttack_2");
static_assert(offsetof(UGrappleKnifeWeaponAnimInstance, MantisAttack_3) == 835, "Offset mismatch for UGrappleKnifeWeaponAnimInstance::MantisAttack_3");
static_assert(offsetof(UGrappleKnifeWeaponAnimInstance, MantisAttack_4) == 836, "Offset mismatch for UGrappleKnifeWeaponAnimInstance::MantisAttack_4");

// /Script/GrappleWeaponRuntime.GrappleKnifeWeaponInterface
// Kind: Class; super: Interface
class UGrappleKnifeWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GrappleWeaponRuntime.GrappleWeaponLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGrappleWeaponLibrary
{
public:
    std::uint8_t Opaque[1];
};
