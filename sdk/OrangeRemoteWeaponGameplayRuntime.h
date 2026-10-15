/**
 * decamp dumper generated SDK
 * Package: /Script/OrangeRemoteWeaponGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/OrangeRemoteWeaponGameplayRuntime.FortActorComponent_RicochetAimPrediction
// Kind: Class; super: ActorComponent
class UFortActorComponent_RicochetAimPrediction
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    float MaxDistance; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceChannel; // 0x01BC (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01BD
    FMulticastInlineDelegate OnPredictedAimUpdated; // 0x01C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortActorComponent_RicochetAimPrediction, MaxDistance) == 440, "Offset mismatch for UFortActorComponent_RicochetAimPrediction::MaxDistance");
static_assert(offsetof(UFortActorComponent_RicochetAimPrediction, TraceChannel) == 444, "Offset mismatch for UFortActorComponent_RicochetAimPrediction::TraceChannel");
static_assert(offsetof(UFortActorComponent_RicochetAimPrediction, OnPredictedAimUpdated) == 448, "Offset mismatch for UFortActorComponent_RicochetAimPrediction::OnPredictedAimUpdated");

// /Script/OrangeRemoteWeaponGameplayRuntime.OrangeRemoteTripleBarrelShotgunWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t bFirePoseToPassThrough; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    double TimeSinceLastFired; // 0x0368 (Size: 0x8, Type: DoubleProperty)
    double FirePoseTimer; // 0x0370 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsFiring; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0379
    double ExitWeaponPoseDelay; // 0x0380 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance, bFirePoseToPassThrough) == 864, "Offset mismatch for UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance::bFirePoseToPassThrough");
static_assert(offsetof(UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance, TimeSinceLastFired) == 872, "Offset mismatch for UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance::TimeSinceLastFired");
static_assert(offsetof(UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance, FirePoseTimer) == 880, "Offset mismatch for UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance::FirePoseTimer");
static_assert(offsetof(UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance, bIsFiring) == 888, "Offset mismatch for UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance::bIsFiring");
static_assert(offsetof(UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance, ExitWeaponPoseDelay) == 896, "Offset mismatch for UOrangeRemoteTripleBarrelShotgunWeaponAnimInstance::ExitWeaponPoseDelay");

// /Script/OrangeRemoteWeaponGameplayRuntime.RicochetPistolAnimInterface
// Kind: Class; super: Interface
class URicochetPistolAnimInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OrangeRemoteWeaponGameplayRuntime.RicochetPistolWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class URicochetPistolWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    double SightAlpha; // 0x0360 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsEmpty; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsReloading_BP; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFired; // 0x036A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCharging; // 0x036B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsChargingMax; // 0x036C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLoaded; // 0x036D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x036E
    std::uint8_t IsTargetingTagName[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    void* PistolPlayerLayerClassType; // 0x0378 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(URicochetPistolWeaponAnimInstance, SightAlpha) == 864, "Offset mismatch for URicochetPistolWeaponAnimInstance::SightAlpha");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, bIsEmpty) == 872, "Offset mismatch for URicochetPistolWeaponAnimInstance::bIsEmpty");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, bIsReloading_BP) == 873, "Offset mismatch for URicochetPistolWeaponAnimInstance::bIsReloading_BP");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, bIsFired) == 874, "Offset mismatch for URicochetPistolWeaponAnimInstance::bIsFired");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, bIsCharging) == 875, "Offset mismatch for URicochetPistolWeaponAnimInstance::bIsCharging");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, bIsChargingMax) == 876, "Offset mismatch for URicochetPistolWeaponAnimInstance::bIsChargingMax");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, bIsLoaded) == 877, "Offset mismatch for URicochetPistolWeaponAnimInstance::bIsLoaded");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, IsTargetingTagName) == 880, "Offset mismatch for URicochetPistolWeaponAnimInstance::IsTargetingTagName");
static_assert(offsetof(URicochetPistolWeaponAnimInstance, PistolPlayerLayerClassType) == 888, "Offset mismatch for URicochetPistolWeaponAnimInstance::PistolPlayerLayerClassType");
