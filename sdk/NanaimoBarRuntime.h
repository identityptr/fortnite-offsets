/**
 * decamp dumper generated SDK
 * Package: /Script/NanaimoBarRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NanaimoBarRuntime.NanaimoBarLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNanaimoBarLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float CustomMeleeTwist_Alpha; // 0x1170 (Size: 0x4, Type: FloatProperty)
    float CustomMeleePitch; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float CustomMeleeRoll; // 0x1178 (Size: 0x4, Type: FloatProperty)
    float CustomMeleeTwist; // 0x117C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bChargeSM_AliasToPassthrough; // 0x1180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChargeSM_PassthroughToCharge1; // 0x1181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChargeSM_Charge1ToCharge3Intro; // 0x1182 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCharging; // 0x1183 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnChargeEnd; // 0x1184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1185
    std::int32_t ChargeStage; // 0x1188 (Size: 0x4, Type: IntProperty)
    float AimOffsetWeight; // 0x118C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNanaimoBarLayerAnimInstance, CustomMeleeTwist_Alpha) == 4464, "Offset mismatch for UNanaimoBarLayerAnimInstance::CustomMeleeTwist_Alpha");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, CustomMeleePitch) == 4468, "Offset mismatch for UNanaimoBarLayerAnimInstance::CustomMeleePitch");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, CustomMeleeRoll) == 4472, "Offset mismatch for UNanaimoBarLayerAnimInstance::CustomMeleeRoll");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, CustomMeleeTwist) == 4476, "Offset mismatch for UNanaimoBarLayerAnimInstance::CustomMeleeTwist");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, bChargeSM_AliasToPassthrough) == 4480, "Offset mismatch for UNanaimoBarLayerAnimInstance::bChargeSM_AliasToPassthrough");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, bChargeSM_PassthroughToCharge1) == 4481, "Offset mismatch for UNanaimoBarLayerAnimInstance::bChargeSM_PassthroughToCharge1");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, bChargeSM_Charge1ToCharge3Intro) == 4482, "Offset mismatch for UNanaimoBarLayerAnimInstance::bChargeSM_Charge1ToCharge3Intro");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, bIsCharging) == 4483, "Offset mismatch for UNanaimoBarLayerAnimInstance::bIsCharging");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, bOnChargeEnd) == 4484, "Offset mismatch for UNanaimoBarLayerAnimInstance::bOnChargeEnd");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, ChargeStage) == 4488, "Offset mismatch for UNanaimoBarLayerAnimInstance::ChargeStage");
static_assert(offsetof(UNanaimoBarLayerAnimInstance, AimOffsetWeight) == 4492, "Offset mismatch for UNanaimoBarLayerAnimInstance::AimOffsetWeight");

// /Script/NanaimoBarRuntime.NanaimoBarWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class UNanaimoBarWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::int32_t ChargeStage; // 0x0360 (Size: 0x4, Type: IntProperty)
    std::uint8_t bChargeSM_IdleToCharge; // 0x0364 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChargeSM_ChargeAliasToIdle; // 0x0365 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChargeSM_ChargeLoopToChargeIntro; // 0x0366 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnChargeEnd; // 0x0367 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowFireInterrupt; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoFireInterrupt; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideWeaponEquipAnim; // 0x036A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTacticalSprinting; // 0x036B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInVehicle; // 0x036C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnMotorcycle; // 0x036D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x036E
    std::int32_t InitialChargeStage; // 0x0370 (Size: 0x4, Type: IntProperty)
    float ChargeShakeAdditiveAlpha; // 0x0374 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TacticalSprintTagName[0x4]; // 0x0378 (Size: 0x4, Type: StructProperty)
    std::uint8_t InVehicleTagName[0x4]; // 0x037C (Size: 0x4, Type: StructProperty)
    std::uint8_t OnMotorcycleTagName[0x8]; // 0x0380 (Size: 0x8, Type: StructProperty)
    void* NanaimoBarFireNonTargetedWEPAnimSequenceBase; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* NanaimoBarFireStage02WEPAnimSequenceBase; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* NanaimoBarFireStage03WEPAnimSequenceBase; // 0x0398 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNanaimoBarWeaponAnimInstance, ChargeStage) == 864, "Offset mismatch for UNanaimoBarWeaponAnimInstance::ChargeStage");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bChargeSM_IdleToCharge) == 868, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bChargeSM_IdleToCharge");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bChargeSM_ChargeAliasToIdle) == 869, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bChargeSM_ChargeAliasToIdle");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bChargeSM_ChargeLoopToChargeIntro) == 870, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bChargeSM_ChargeLoopToChargeIntro");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bOnChargeEnd) == 871, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bOnChargeEnd");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bAllowFireInterrupt) == 872, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bAllowFireInterrupt");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bDoFireInterrupt) == 873, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bDoFireInterrupt");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bHideWeaponEquipAnim) == 874, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bHideWeaponEquipAnim");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bIsTacticalSprinting) == 875, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bIsTacticalSprinting");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bIsInVehicle) == 876, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bIsInVehicle");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, bIsOnMotorcycle) == 877, "Offset mismatch for UNanaimoBarWeaponAnimInstance::bIsOnMotorcycle");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, InitialChargeStage) == 880, "Offset mismatch for UNanaimoBarWeaponAnimInstance::InitialChargeStage");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, ChargeShakeAdditiveAlpha) == 884, "Offset mismatch for UNanaimoBarWeaponAnimInstance::ChargeShakeAdditiveAlpha");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, TacticalSprintTagName) == 888, "Offset mismatch for UNanaimoBarWeaponAnimInstance::TacticalSprintTagName");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, InVehicleTagName) == 892, "Offset mismatch for UNanaimoBarWeaponAnimInstance::InVehicleTagName");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, OnMotorcycleTagName) == 896, "Offset mismatch for UNanaimoBarWeaponAnimInstance::OnMotorcycleTagName");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, NanaimoBarFireNonTargetedWEPAnimSequenceBase) == 904, "Offset mismatch for UNanaimoBarWeaponAnimInstance::NanaimoBarFireNonTargetedWEPAnimSequenceBase");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, NanaimoBarFireStage02WEPAnimSequenceBase) == 912, "Offset mismatch for UNanaimoBarWeaponAnimInstance::NanaimoBarFireStage02WEPAnimSequenceBase");
static_assert(offsetof(UNanaimoBarWeaponAnimInstance, NanaimoBarFireStage03WEPAnimSequenceBase) == 920, "Offset mismatch for UNanaimoBarWeaponAnimInstance::NanaimoBarFireStage03WEPAnimSequenceBase");

// /Script/NanaimoBarRuntime.NanaimoBarWeaponInterface
// Kind: Class; super: Interface
class UNanaimoBarWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
