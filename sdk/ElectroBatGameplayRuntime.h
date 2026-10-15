/**
 * decamp dumper generated SDK
 * Package: /Script/ElectroBatGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ElectroBatGameplayRuntime.ElectroBatAttributeSet
// Kind: Class; super: FortAttributeSet
class UElectroBatAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t KnockbackCharge[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentChargeStage[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UElectroBatAttributeSet, KnockbackCharge) == 72, "Offset mismatch for UElectroBatAttributeSet::KnockbackCharge");
static_assert(offsetof(UElectroBatAttributeSet, CurrentChargeStage) == 112, "Offset mismatch for UElectroBatAttributeSet::CurrentChargeStage");

// /Script/ElectroBatGameplayRuntime.ElectroBatLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UElectroBatLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t PlayerAnimAssetsOverrideDuringCharging[0x10]; // 0x1170 (Size: 0x10, Type: StructProperty)
    float CustomMeleeTwist; // 0x1180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bChargedSwingHit; // 0x1184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUserCurve01; // 0x1185 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnterChargedState; // 0x1186 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUserCurve03; // 0x1187 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitOutro; // 0x1188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1189
    std::uint8_t ChargingTagName[0x4]; // 0x118C (Size: 0x4, Type: StructProperty)
    std::uint8_t HitTagName[0x1]; // 0x1190 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UElectroBatLayerAnimInstance, PlayerAnimAssetsOverrideDuringCharging) == 4464, "Offset mismatch for UElectroBatLayerAnimInstance::PlayerAnimAssetsOverrideDuringCharging");
static_assert(offsetof(UElectroBatLayerAnimInstance, CustomMeleeTwist) == 4480, "Offset mismatch for UElectroBatLayerAnimInstance::CustomMeleeTwist");
static_assert(offsetof(UElectroBatLayerAnimInstance, bChargedSwingHit) == 4484, "Offset mismatch for UElectroBatLayerAnimInstance::bChargedSwingHit");
static_assert(offsetof(UElectroBatLayerAnimInstance, bUserCurve01) == 4485, "Offset mismatch for UElectroBatLayerAnimInstance::bUserCurve01");
static_assert(offsetof(UElectroBatLayerAnimInstance, bEnterChargedState) == 4486, "Offset mismatch for UElectroBatLayerAnimInstance::bEnterChargedState");
static_assert(offsetof(UElectroBatLayerAnimInstance, bUserCurve03) == 4487, "Offset mismatch for UElectroBatLayerAnimInstance::bUserCurve03");
static_assert(offsetof(UElectroBatLayerAnimInstance, bExitOutro) == 4488, "Offset mismatch for UElectroBatLayerAnimInstance::bExitOutro");
static_assert(offsetof(UElectroBatLayerAnimInstance, ChargingTagName) == 4492, "Offset mismatch for UElectroBatLayerAnimInstance::ChargingTagName");
static_assert(offsetof(UElectroBatLayerAnimInstance, HitTagName) == 4496, "Offset mismatch for UElectroBatLayerAnimInstance::HitTagName");

// /Script/ElectroBatGameplayRuntime.ElectroBatWeaponComponent
// Kind: Class; super: FortWeaponComponent
class UElectroBatWeaponComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnChargeStart; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChargeStop; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChargeIncreased; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00F0
    std::uint8_t ChargeStageAttribute[0x40]; // 0x0108 (Size: 0x40, Type: StructProperty)
    void* CustomSprintMMEClass; // 0x0148 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ElectroBatSprintingTag[0x8]; // 0x0150 (Size: 0x8, Type: StructProperty)
    void* FallDamamgeImmunityEffectClass; // 0x0158 (Size: 0x8, Type: ClassProperty)
    void* StartChargingEffectClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    void* StopChargeEffectClass; // 0x0168 (Size: 0x8, Type: ClassProperty)
    void* IncrementChargeEffectClass; // 0x0170 (Size: 0x8, Type: ClassProperty)
    void* ChargingEffectClass; // 0x0178 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PreChargeDelay[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimePerCharge[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TotalChargeStages[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UElectroBatWeaponComponent, OnChargeStart) == 192, "Offset mismatch for UElectroBatWeaponComponent::OnChargeStart");
static_assert(offsetof(UElectroBatWeaponComponent, OnChargeStop) == 208, "Offset mismatch for UElectroBatWeaponComponent::OnChargeStop");
static_assert(offsetof(UElectroBatWeaponComponent, OnChargeIncreased) == 224, "Offset mismatch for UElectroBatWeaponComponent::OnChargeIncreased");
static_assert(offsetof(UElectroBatWeaponComponent, ChargeStageAttribute) == 264, "Offset mismatch for UElectroBatWeaponComponent::ChargeStageAttribute");
static_assert(offsetof(UElectroBatWeaponComponent, CustomSprintMMEClass) == 328, "Offset mismatch for UElectroBatWeaponComponent::CustomSprintMMEClass");
static_assert(offsetof(UElectroBatWeaponComponent, ElectroBatSprintingTag) == 336, "Offset mismatch for UElectroBatWeaponComponent::ElectroBatSprintingTag");
static_assert(offsetof(UElectroBatWeaponComponent, FallDamamgeImmunityEffectClass) == 344, "Offset mismatch for UElectroBatWeaponComponent::FallDamamgeImmunityEffectClass");
static_assert(offsetof(UElectroBatWeaponComponent, StartChargingEffectClass) == 352, "Offset mismatch for UElectroBatWeaponComponent::StartChargingEffectClass");
static_assert(offsetof(UElectroBatWeaponComponent, StopChargeEffectClass) == 360, "Offset mismatch for UElectroBatWeaponComponent::StopChargeEffectClass");
static_assert(offsetof(UElectroBatWeaponComponent, IncrementChargeEffectClass) == 368, "Offset mismatch for UElectroBatWeaponComponent::IncrementChargeEffectClass");
static_assert(offsetof(UElectroBatWeaponComponent, ChargingEffectClass) == 376, "Offset mismatch for UElectroBatWeaponComponent::ChargingEffectClass");
static_assert(offsetof(UElectroBatWeaponComponent, PreChargeDelay) == 384, "Offset mismatch for UElectroBatWeaponComponent::PreChargeDelay");
static_assert(offsetof(UElectroBatWeaponComponent, TimePerCharge) == 424, "Offset mismatch for UElectroBatWeaponComponent::TimePerCharge");
static_assert(offsetof(UElectroBatWeaponComponent, TotalChargeStages) == 464, "Offset mismatch for UElectroBatWeaponComponent::TotalChargeStages");
