/**
 * decamp dumper generated SDK
 * Package: /Script/DamageLandingCode
 */
#pragma once
#include "Basic.h"

// /Script/DamageLandingCode.DamageLandingStaggerConfig
// Kind: ScriptStruct; super: none
struct FDamageLandingStaggerConfig
{
public:
    void* AnimationMontage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StaminaReductionCost[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDamageLandingStaggerConfig, AnimationMontage) == 0, "Offset mismatch for FDamageLandingStaggerConfig::AnimationMontage");
static_assert(offsetof(FDamageLandingStaggerConfig, StaminaReductionCost) == 8, "Offset mismatch for FDamageLandingStaggerConfig::StaminaReductionCost");

// /Script/DamageLandingCode.FortAnimNotify_AllowMovementPostLanding
// Kind: Class; super: AnimNotify
class UFortAnimNotify_AllowMovementPostLanding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DamageLandingCode.FortControllerComponent_DamageLanding
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_DamageLanding
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* DamageLandingLogicClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* RagdollLogicClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RagdollInitialSpeed[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DamageLandingDisabledTag[0x8]; // 0x0100 (Size: 0x8, Type: StructProperty)
    std::uint8_t UseDamageLandingDisabledTag[0x28]; // 0x0108 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnableDamageLanding[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_DamageLanding, DamageLandingLogicClass) == 200, "Offset mismatch for UFortControllerComponent_DamageLanding::DamageLandingLogicClass");
static_assert(offsetof(UFortControllerComponent_DamageLanding, RagdollLogicClass) == 208, "Offset mismatch for UFortControllerComponent_DamageLanding::RagdollLogicClass");
static_assert(offsetof(UFortControllerComponent_DamageLanding, RagdollInitialSpeed) == 216, "Offset mismatch for UFortControllerComponent_DamageLanding::RagdollInitialSpeed");
static_assert(offsetof(UFortControllerComponent_DamageLanding, DamageLandingDisabledTag) == 256, "Offset mismatch for UFortControllerComponent_DamageLanding::DamageLandingDisabledTag");
static_assert(offsetof(UFortControllerComponent_DamageLanding, UseDamageLandingDisabledTag) == 264, "Offset mismatch for UFortControllerComponent_DamageLanding::UseDamageLandingDisabledTag");
static_assert(offsetof(UFortControllerComponent_DamageLanding, EnableDamageLanding) == 304, "Offset mismatch for UFortControllerComponent_DamageLanding::EnableDamageLanding");

// /Script/DamageLandingCode.FortMovementMode_DamageLandingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_DamageLandingRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_DamageLandingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_DamageLandingRuntimeData::EndReasonFlags");

// /Script/DamageLandingCode.FortMovementMode_ExtDamageLanding
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtDamageLanding
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    FName HolsterId; // 0x01C0 (Size: 0x8, Type: NameProperty)
    std::uint8_t MovementToStopStaggerTags[0x20]; // 0x01C8 (Size: 0x20, Type: StructProperty)
    TArray<void*> StaggerConfiguration; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01F8
    std::uint8_t DamageLandingDisabledTag[0x8]; // 0x0200 (Size: 0x8, Type: StructProperty)
    std::uint8_t UseDamageLandingDisabledTag[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPlayAnimOnUnholsterWeapon; // 0x0230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0231
    std::uint8_t LandingGameplayCueTag[0x4]; // 0x0234 (Size: 0x4, Type: StructProperty)
    std::uint8_t PreventHolsterTag[0x8]; // 0x0238 (Size: 0x8, Type: StructProperty)
    std::uint8_t FallDamageImmunityTags[0x20]; // 0x0240 (Size: 0x20, Type: StructProperty)
    std::uint8_t WaitToLandAllowedMovementTags[0x20]; // 0x0260 (Size: 0x20, Type: StructProperty)
    std::uint8_t ImpactAllowedMovementTags[0x20]; // 0x0280 (Size: 0x20, Type: StructProperty)
    std::uint8_t UseFatalDamageOnStaggerConfig[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PredictedDamageReduction[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    TArray<void*> GEFallDamageOverrideFallDamageList; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GEFallDamageOverrideFallDamageIndex[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaminaReductionForStaggerEnabled[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseShieldDamageOnFatalHit[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShieldDamageCostOnFatalHit[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldReduceAllShieldOnFatalHit[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    TArray<void*> GEShieldDamageList; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GEShieldDamageIndex[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GEShieldDamageTag[0x8]; // 0x0400 (Size: 0x8, Type: StructProperty)
    std::uint8_t RagdollOnImpactEnabled[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t RagdollOnLandingEnabled[0x28]; // 0x0430 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowToRagdollOnImpactDueFatalDamage[0x28]; // 0x0458 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowRagdollTag[0x1]; // 0x0480 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtDamageLanding, HolsterId) == 448, "Offset mismatch for UFortMovementMode_ExtDamageLanding::HolsterId");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, MovementToStopStaggerTags) == 456, "Offset mismatch for UFortMovementMode_ExtDamageLanding::MovementToStopStaggerTags");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, StaggerConfiguration) == 488, "Offset mismatch for UFortMovementMode_ExtDamageLanding::StaggerConfiguration");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, DamageLandingDisabledTag) == 512, "Offset mismatch for UFortMovementMode_ExtDamageLanding::DamageLandingDisabledTag");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, UseDamageLandingDisabledTag) == 520, "Offset mismatch for UFortMovementMode_ExtDamageLanding::UseDamageLandingDisabledTag");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, bPlayAnimOnUnholsterWeapon) == 560, "Offset mismatch for UFortMovementMode_ExtDamageLanding::bPlayAnimOnUnholsterWeapon");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, LandingGameplayCueTag) == 564, "Offset mismatch for UFortMovementMode_ExtDamageLanding::LandingGameplayCueTag");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, PreventHolsterTag) == 568, "Offset mismatch for UFortMovementMode_ExtDamageLanding::PreventHolsterTag");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, FallDamageImmunityTags) == 576, "Offset mismatch for UFortMovementMode_ExtDamageLanding::FallDamageImmunityTags");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, WaitToLandAllowedMovementTags) == 608, "Offset mismatch for UFortMovementMode_ExtDamageLanding::WaitToLandAllowedMovementTags");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, ImpactAllowedMovementTags) == 640, "Offset mismatch for UFortMovementMode_ExtDamageLanding::ImpactAllowedMovementTags");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, UseFatalDamageOnStaggerConfig) == 672, "Offset mismatch for UFortMovementMode_ExtDamageLanding::UseFatalDamageOnStaggerConfig");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, PredictedDamageReduction) == 712, "Offset mismatch for UFortMovementMode_ExtDamageLanding::PredictedDamageReduction");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, GEFallDamageOverrideFallDamageList) == 752, "Offset mismatch for UFortMovementMode_ExtDamageLanding::GEFallDamageOverrideFallDamageList");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, GEFallDamageOverrideFallDamageIndex) == 768, "Offset mismatch for UFortMovementMode_ExtDamageLanding::GEFallDamageOverrideFallDamageIndex");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, StaminaReductionForStaggerEnabled) == 808, "Offset mismatch for UFortMovementMode_ExtDamageLanding::StaminaReductionForStaggerEnabled");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, UseShieldDamageOnFatalHit) == 848, "Offset mismatch for UFortMovementMode_ExtDamageLanding::UseShieldDamageOnFatalHit");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, ShieldDamageCostOnFatalHit) == 888, "Offset mismatch for UFortMovementMode_ExtDamageLanding::ShieldDamageCostOnFatalHit");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, ShouldReduceAllShieldOnFatalHit) == 928, "Offset mismatch for UFortMovementMode_ExtDamageLanding::ShouldReduceAllShieldOnFatalHit");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, GEShieldDamageList) == 968, "Offset mismatch for UFortMovementMode_ExtDamageLanding::GEShieldDamageList");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, GEShieldDamageIndex) == 984, "Offset mismatch for UFortMovementMode_ExtDamageLanding::GEShieldDamageIndex");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, GEShieldDamageTag) == 1024, "Offset mismatch for UFortMovementMode_ExtDamageLanding::GEShieldDamageTag");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, RagdollOnImpactEnabled) == 1032, "Offset mismatch for UFortMovementMode_ExtDamageLanding::RagdollOnImpactEnabled");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, RagdollOnLandingEnabled) == 1072, "Offset mismatch for UFortMovementMode_ExtDamageLanding::RagdollOnLandingEnabled");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, AllowToRagdollOnImpactDueFatalDamage) == 1112, "Offset mismatch for UFortMovementMode_ExtDamageLanding::AllowToRagdollOnImpactDueFatalDamage");
static_assert(offsetof(UFortMovementMode_ExtDamageLanding, AllowRagdollTag) == 1152, "Offset mismatch for UFortMovementMode_ExtDamageLanding::AllowRagdollTag");
