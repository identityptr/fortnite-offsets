/**
 * decamp dumper generated SDK
 * Package: /Script/KatanaGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/KatanaGameplayRuntime.FortKatanaDashTargetingInfo
// Kind: ScriptStruct; super: none
struct FFortKatanaDashTargetingInfo
{
public:
    std::uint8_t DashDirection[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float DashDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> DashBlockingActor; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bWasDashDirectionAdjusted; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    TArray<void*> DamagedActors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    float OutOfRangePercent; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortKatanaDashTargetingInfo, DashDirection) == 0, "Offset mismatch for FFortKatanaDashTargetingInfo::DashDirection");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DashDistance) == 24, "Offset mismatch for FFortKatanaDashTargetingInfo::DashDistance");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DashBlockingActor) == 28, "Offset mismatch for FFortKatanaDashTargetingInfo::DashBlockingActor");
static_assert(offsetof(FFortKatanaDashTargetingInfo, bWasDashDirectionAdjusted) == 36, "Offset mismatch for FFortKatanaDashTargetingInfo::bWasDashDirectionAdjusted");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DamagedActors) == 40, "Offset mismatch for FFortKatanaDashTargetingInfo::DamagedActors");
static_assert(offsetof(FFortKatanaDashTargetingInfo, OutOfRangePercent) == 56, "Offset mismatch for FFortKatanaDashTargetingInfo::OutOfRangePercent");

// /Script/KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
// Kind: ScriptStruct; super: none
struct FFortKatanaPrimaryAttackVariationInfo
{
public:
    std::uint8_t Range[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t OffsetFromTarget[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSelectionList[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortKatanaPrimaryAttackVariationInfo, Range) == 0, "Offset mismatch for FFortKatanaPrimaryAttackVariationInfo::Range");
static_assert(offsetof(FFortKatanaPrimaryAttackVariationInfo, OffsetFromTarget) == 40, "Offset mismatch for FFortKatanaPrimaryAttackVariationInfo::OffsetFromTarget");
static_assert(offsetof(FFortKatanaPrimaryAttackVariationInfo, TargetSelectionList) == 80, "Offset mismatch for FFortKatanaPrimaryAttackVariationInfo::TargetSelectionList");

// /Script/KatanaGameplayRuntime.FortKatanaLayerAnimInstance
// Kind: Class; super: FortMantisLayerAnimInstance
class UFortKatanaLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1180]; // 0x0000
    std::uint8_t IsDashCharge; // 0x1180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x1181
    void* AsFortPlayerPawn; // 0x1188 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsBMeleeKatana; // 0x1190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x1191
    float HandIKHipAttachAlpha; // 0x1194 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LeftAttachedHandIKLoc[0x18]; // 0x1198 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftAttachedhandIKRot[0x18]; // 0x11B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightWeaponLoc[0x18]; // 0x11C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightWeaponRot[0x18]; // 0x11E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftAttachedHandIKLocOffsetMED[0x18]; // 0x11F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t LeftAttachedHandIKRotOffset[0x18]; // 0x1210 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightWeaponLocOffsetMED[0x18]; // 0x1228 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightWeaponRotOffset[0x18]; // 0x1240 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsDashAttack; // 0x1258 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsDashOutro; // 0x1259 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x125A
    float PelvisAOAlpha; // 0x125C (Size: 0x4, Type: FloatProperty)
    float ClampedAimPitch; // 0x1260 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EarlyExitFromDashOutro; // 0x1264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsTechniqueActive; // 0x1265 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPrimaryAttack; // 0x1266 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x1267
    float WeaponHipAttachAlpha; // 0x1268 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x126C
    std::uint8_t LeftAttachedHandIKLocOffsetLRG[0x18]; // 0x1270 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightWeaponLocOffsetLRG[0x18]; // 0x1288 (Size: 0x18, Type: StructProperty)
    float FeetCorrectionAlpha; // 0x12A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsInAirAttackLeap; // 0x12A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldStartDashOutro; // 0x12A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t StartedDashOutro; // 0x12A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x12A7
    std::uint8_t DashRootMotionDuration[0x28]; // 0x12A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t IsPrimaryAttack2; // 0x12D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsAirAttackSlam; // 0x12D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionRuleToDefault; // 0x12D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsGrindRailSwing; // 0x12D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CanExitDashCharge; // 0x12D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x12D5
    float DashChargePlayRate; // 0x12D8 (Size: 0x4, Type: FloatProperty)
    float YawForKatanaDashAO; // 0x12DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDying; // 0x12E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortKatanaLayerAnimInstance, IsDashCharge) == 4480, "Offset mismatch for UFortKatanaLayerAnimInstance::IsDashCharge");
static_assert(offsetof(UFortKatanaLayerAnimInstance, AsFortPlayerPawn) == 4488, "Offset mismatch for UFortKatanaLayerAnimInstance::AsFortPlayerPawn");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsBMeleeKatana) == 4496, "Offset mismatch for UFortKatanaLayerAnimInstance::IsBMeleeKatana");
static_assert(offsetof(UFortKatanaLayerAnimInstance, HandIKHipAttachAlpha) == 4500, "Offset mismatch for UFortKatanaLayerAnimInstance::HandIKHipAttachAlpha");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKLoc) == 4504, "Offset mismatch for UFortKatanaLayerAnimInstance::LeftAttachedHandIKLoc");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedhandIKRot) == 4528, "Offset mismatch for UFortKatanaLayerAnimInstance::LeftAttachedhandIKRot");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponLoc) == 4552, "Offset mismatch for UFortKatanaLayerAnimInstance::RightWeaponLoc");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponRot) == 4576, "Offset mismatch for UFortKatanaLayerAnimInstance::RightWeaponRot");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKLocOffsetMED) == 4600, "Offset mismatch for UFortKatanaLayerAnimInstance::LeftAttachedHandIKLocOffsetMED");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKRotOffset) == 4624, "Offset mismatch for UFortKatanaLayerAnimInstance::LeftAttachedHandIKRotOffset");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponLocOffsetMED) == 4648, "Offset mismatch for UFortKatanaLayerAnimInstance::RightWeaponLocOffsetMED");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponRotOffset) == 4672, "Offset mismatch for UFortKatanaLayerAnimInstance::RightWeaponRotOffset");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsDashAttack) == 4696, "Offset mismatch for UFortKatanaLayerAnimInstance::IsDashAttack");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsDashOutro) == 4697, "Offset mismatch for UFortKatanaLayerAnimInstance::IsDashOutro");
static_assert(offsetof(UFortKatanaLayerAnimInstance, PelvisAOAlpha) == 4700, "Offset mismatch for UFortKatanaLayerAnimInstance::PelvisAOAlpha");
static_assert(offsetof(UFortKatanaLayerAnimInstance, ClampedAimPitch) == 4704, "Offset mismatch for UFortKatanaLayerAnimInstance::ClampedAimPitch");
static_assert(offsetof(UFortKatanaLayerAnimInstance, EarlyExitFromDashOutro) == 4708, "Offset mismatch for UFortKatanaLayerAnimInstance::EarlyExitFromDashOutro");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsTechniqueActive) == 4709, "Offset mismatch for UFortKatanaLayerAnimInstance::IsTechniqueActive");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsPrimaryAttack) == 4710, "Offset mismatch for UFortKatanaLayerAnimInstance::IsPrimaryAttack");
static_assert(offsetof(UFortKatanaLayerAnimInstance, WeaponHipAttachAlpha) == 4712, "Offset mismatch for UFortKatanaLayerAnimInstance::WeaponHipAttachAlpha");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKLocOffsetLRG) == 4720, "Offset mismatch for UFortKatanaLayerAnimInstance::LeftAttachedHandIKLocOffsetLRG");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponLocOffsetLRG) == 4744, "Offset mismatch for UFortKatanaLayerAnimInstance::RightWeaponLocOffsetLRG");
static_assert(offsetof(UFortKatanaLayerAnimInstance, FeetCorrectionAlpha) == 4768, "Offset mismatch for UFortKatanaLayerAnimInstance::FeetCorrectionAlpha");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsInAirAttackLeap) == 4772, "Offset mismatch for UFortKatanaLayerAnimInstance::IsInAirAttackLeap");
static_assert(offsetof(UFortKatanaLayerAnimInstance, ShouldStartDashOutro) == 4773, "Offset mismatch for UFortKatanaLayerAnimInstance::ShouldStartDashOutro");
static_assert(offsetof(UFortKatanaLayerAnimInstance, StartedDashOutro) == 4774, "Offset mismatch for UFortKatanaLayerAnimInstance::StartedDashOutro");
static_assert(offsetof(UFortKatanaLayerAnimInstance, DashRootMotionDuration) == 4776, "Offset mismatch for UFortKatanaLayerAnimInstance::DashRootMotionDuration");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsPrimaryAttack2) == 4816, "Offset mismatch for UFortKatanaLayerAnimInstance::IsPrimaryAttack2");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsAirAttackSlam) == 4817, "Offset mismatch for UFortKatanaLayerAnimInstance::IsAirAttackSlam");
static_assert(offsetof(UFortKatanaLayerAnimInstance, TransitionRuleToDefault) == 4818, "Offset mismatch for UFortKatanaLayerAnimInstance::TransitionRuleToDefault");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsGrindRailSwing) == 4819, "Offset mismatch for UFortKatanaLayerAnimInstance::IsGrindRailSwing");
static_assert(offsetof(UFortKatanaLayerAnimInstance, CanExitDashCharge) == 4820, "Offset mismatch for UFortKatanaLayerAnimInstance::CanExitDashCharge");
static_assert(offsetof(UFortKatanaLayerAnimInstance, DashChargePlayRate) == 4824, "Offset mismatch for UFortKatanaLayerAnimInstance::DashChargePlayRate");
static_assert(offsetof(UFortKatanaLayerAnimInstance, YawForKatanaDashAO) == 4828, "Offset mismatch for UFortKatanaLayerAnimInstance::YawForKatanaDashAO");
static_assert(offsetof(UFortKatanaLayerAnimInstance, bIsDying) == 4832, "Offset mismatch for UFortKatanaLayerAnimInstance::bIsDying");

// /Script/KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
// Kind: Class; super: FortMantisAnimInstance
class UFortKatanaWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* AsFortPlayerPawn; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* BMeleeKatanaAsWeapon; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IsBMeleeKatana; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0351
    float LocalLeftHandIKAlpha; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float LocalRightHandIKAlpha; // 0x0358 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsDashCharge; // 0x035C (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsDashAttack; // 0x035D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x035E
    float SwordPlayRate; // 0x0360 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsInAirAttack_Leap; // 0x0364 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsInAirAttack_Slam; // 0x0365 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0366
    void* KatanaPlayer; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EarlyExitFromDashOutro; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsDashOutro; // 0x0371 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x0372
    std::uint8_t ScabbardLoc[0x18]; // 0x0378 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScabbardRot[0x18]; // 0x0390 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScabbardLocOffset[0x18]; // 0x03A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScabbardRotOffset[0x18]; // 0x03C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsSurfaceSwimming; // 0x03D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsTechniqueActive; // 0x03D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x03DA
    std::uint8_t SwordLoc[0x18]; // 0x03E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SwordRot[0x18]; // 0x03F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SwordLocOffset[0x18]; // 0x0410 (Size: 0x18, Type: StructProperty)
    std::uint8_t SwordRotOffset[0x18]; // 0x0428 (Size: 0x18, Type: StructProperty)
    std::uint8_t IsRidingSwing; // 0x0440 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPrimaryAttack; // 0x0441 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPrimaryAttack2; // 0x0442 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExitFromPrimaryAttack; // 0x0443 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExitFromPrimaryAttack2; // 0x0444 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NonPrimaryAttackState; // 0x0445 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsComboAttack; // 0x0446 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionRuleToDefaultPose; // 0x0447 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExitFromInAirLand; // 0x0448 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsGrindRailSwing; // 0x0449 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x044A
    std::int32_t CurrentTechniqueBranch; // 0x044C (Size: 0x4, Type: IntProperty)
    std::int32_t PreviousTechniqueBranch; // 0x0450 (Size: 0x4, Type: IntProperty)
    std::uint8_t PelvisSocket[0x4]; // 0x0454 (Size: 0x4, Type: NameProperty)
    std::uint8_t ScabbardLocOffsetVeh[0x18]; // 0x0458 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScabbardRotOffsetVeh[0x18]; // 0x0470 (Size: 0x18, Type: StructProperty)
    float DashChargePlayRate; // 0x0488 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortKatanaWeaponAnimInstance, AsFortPlayerPawn) == 832, "Offset mismatch for UFortKatanaWeaponAnimInstance::AsFortPlayerPawn");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, BMeleeKatanaAsWeapon) == 840, "Offset mismatch for UFortKatanaWeaponAnimInstance::BMeleeKatanaAsWeapon");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsBMeleeKatana) == 848, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsBMeleeKatana");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, LocalLeftHandIKAlpha) == 852, "Offset mismatch for UFortKatanaWeaponAnimInstance::LocalLeftHandIKAlpha");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, LocalRightHandIKAlpha) == 856, "Offset mismatch for UFortKatanaWeaponAnimInstance::LocalRightHandIKAlpha");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsDashCharge) == 860, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsDashCharge");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsDashAttack) == 861, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsDashAttack");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordPlayRate) == 864, "Offset mismatch for UFortKatanaWeaponAnimInstance::SwordPlayRate");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsInAirAttack_Leap) == 868, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsInAirAttack_Leap");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsInAirAttack_Slam) == 869, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsInAirAttack_Slam");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, KatanaPlayer) == 872, "Offset mismatch for UFortKatanaWeaponAnimInstance::KatanaPlayer");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, EarlyExitFromDashOutro) == 880, "Offset mismatch for UFortKatanaWeaponAnimInstance::EarlyExitFromDashOutro");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsDashOutro) == 881, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsDashOutro");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardLoc) == 888, "Offset mismatch for UFortKatanaWeaponAnimInstance::ScabbardLoc");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardRot) == 912, "Offset mismatch for UFortKatanaWeaponAnimInstance::ScabbardRot");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardLocOffset) == 936, "Offset mismatch for UFortKatanaWeaponAnimInstance::ScabbardLocOffset");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardRotOffset) == 960, "Offset mismatch for UFortKatanaWeaponAnimInstance::ScabbardRotOffset");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsSurfaceSwimming) == 984, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsSurfaceSwimming");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsTechniqueActive) == 985, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsTechniqueActive");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordLoc) == 992, "Offset mismatch for UFortKatanaWeaponAnimInstance::SwordLoc");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordRot) == 1016, "Offset mismatch for UFortKatanaWeaponAnimInstance::SwordRot");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordLocOffset) == 1040, "Offset mismatch for UFortKatanaWeaponAnimInstance::SwordLocOffset");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordRotOffset) == 1064, "Offset mismatch for UFortKatanaWeaponAnimInstance::SwordRotOffset");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsRidingSwing) == 1088, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsRidingSwing");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsPrimaryAttack) == 1089, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsPrimaryAttack");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsPrimaryAttack2) == 1090, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsPrimaryAttack2");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ExitFromPrimaryAttack) == 1091, "Offset mismatch for UFortKatanaWeaponAnimInstance::ExitFromPrimaryAttack");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ExitFromPrimaryAttack2) == 1092, "Offset mismatch for UFortKatanaWeaponAnimInstance::ExitFromPrimaryAttack2");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, NonPrimaryAttackState) == 1093, "Offset mismatch for UFortKatanaWeaponAnimInstance::NonPrimaryAttackState");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsComboAttack) == 1094, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsComboAttack");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, TransitionRuleToDefaultPose) == 1095, "Offset mismatch for UFortKatanaWeaponAnimInstance::TransitionRuleToDefaultPose");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ExitFromInAirLand) == 1096, "Offset mismatch for UFortKatanaWeaponAnimInstance::ExitFromInAirLand");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsGrindRailSwing) == 1097, "Offset mismatch for UFortKatanaWeaponAnimInstance::IsGrindRailSwing");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, CurrentTechniqueBranch) == 1100, "Offset mismatch for UFortKatanaWeaponAnimInstance::CurrentTechniqueBranch");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, PreviousTechniqueBranch) == 1104, "Offset mismatch for UFortKatanaWeaponAnimInstance::PreviousTechniqueBranch");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, PelvisSocket) == 1108, "Offset mismatch for UFortKatanaWeaponAnimInstance::PelvisSocket");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardLocOffsetVeh) == 1112, "Offset mismatch for UFortKatanaWeaponAnimInstance::ScabbardLocOffsetVeh");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardRotOffsetVeh) == 1136, "Offset mismatch for UFortKatanaWeaponAnimInstance::ScabbardRotOffsetVeh");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, DashChargePlayRate) == 1160, "Offset mismatch for UFortKatanaWeaponAnimInstance::DashChargePlayRate");

// /Script/KatanaGameplayRuntime.KatanaTargetingComponent
// Kind: Class; super: FortWeaponComponent
class UKatanaTargetingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* KatanaTechniqueAbilityClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    void* CachedTechniqueAbilityCDO; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DashDistance[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdditionalDashForwardAttackRange[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdditionalOutOfRangeDetection[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t DashOffsetFromTarget[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t PropRemainingHealthToDestroy[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuildingRemainingHealthToDestroy[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t DashBlockingBuildingTags[0x20]; // 0x01C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t DashBlockingBuildingClasses[0x10]; // 0x01E0 (Size: 0x10, Type: SetProperty)
    std::uint8_t PawnTargetSelectionList[0x48]; // 0x01F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t DashTraceChannel; // 0x0238 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0239
    float ObstructionOverlapBoxHalfSize; // 0x023C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ObstructionTargetFilter[0x40]; // 0x0240 (Size: 0x40, Type: StructProperty)
    std::uint8_t DashBlockIgnoreTags[0x20]; // 0x0280 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> PrimaryAttackVariationInfos; // 0x02A0 (Size: 0x10, Type: MapProperty)
    float PrimaryAttackMinForwardMovement; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PrimaryAttackObstructionTraceChannel; // 0x02B4 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UKatanaTargetingComponent, KatanaTechniqueAbilityClass) == 192, "Offset mismatch for UKatanaTargetingComponent::KatanaTechniqueAbilityClass");
static_assert(offsetof(UKatanaTargetingComponent, CachedTechniqueAbilityCDO) == 200, "Offset mismatch for UKatanaTargetingComponent::CachedTechniqueAbilityCDO");
static_assert(offsetof(UKatanaTargetingComponent, DashDistance) == 208, "Offset mismatch for UKatanaTargetingComponent::DashDistance");
static_assert(offsetof(UKatanaTargetingComponent, AdditionalDashForwardAttackRange) == 248, "Offset mismatch for UKatanaTargetingComponent::AdditionalDashForwardAttackRange");
static_assert(offsetof(UKatanaTargetingComponent, AdditionalOutOfRangeDetection) == 288, "Offset mismatch for UKatanaTargetingComponent::AdditionalOutOfRangeDetection");
static_assert(offsetof(UKatanaTargetingComponent, DashOffsetFromTarget) == 328, "Offset mismatch for UKatanaTargetingComponent::DashOffsetFromTarget");
static_assert(offsetof(UKatanaTargetingComponent, PropRemainingHealthToDestroy) == 368, "Offset mismatch for UKatanaTargetingComponent::PropRemainingHealthToDestroy");
static_assert(offsetof(UKatanaTargetingComponent, BuildingRemainingHealthToDestroy) == 408, "Offset mismatch for UKatanaTargetingComponent::BuildingRemainingHealthToDestroy");
static_assert(offsetof(UKatanaTargetingComponent, DashBlockingBuildingTags) == 448, "Offset mismatch for UKatanaTargetingComponent::DashBlockingBuildingTags");
static_assert(offsetof(UKatanaTargetingComponent, DashBlockingBuildingClasses) == 480, "Offset mismatch for UKatanaTargetingComponent::DashBlockingBuildingClasses");
static_assert(offsetof(UKatanaTargetingComponent, PawnTargetSelectionList) == 496, "Offset mismatch for UKatanaTargetingComponent::PawnTargetSelectionList");
static_assert(offsetof(UKatanaTargetingComponent, DashTraceChannel) == 568, "Offset mismatch for UKatanaTargetingComponent::DashTraceChannel");
static_assert(offsetof(UKatanaTargetingComponent, ObstructionOverlapBoxHalfSize) == 572, "Offset mismatch for UKatanaTargetingComponent::ObstructionOverlapBoxHalfSize");
static_assert(offsetof(UKatanaTargetingComponent, ObstructionTargetFilter) == 576, "Offset mismatch for UKatanaTargetingComponent::ObstructionTargetFilter");
static_assert(offsetof(UKatanaTargetingComponent, DashBlockIgnoreTags) == 640, "Offset mismatch for UKatanaTargetingComponent::DashBlockIgnoreTags");
static_assert(offsetof(UKatanaTargetingComponent, PrimaryAttackVariationInfos) == 672, "Offset mismatch for UKatanaTargetingComponent::PrimaryAttackVariationInfos");
static_assert(offsetof(UKatanaTargetingComponent, PrimaryAttackMinForwardMovement) == 688, "Offset mismatch for UKatanaTargetingComponent::PrimaryAttackMinForwardMovement");
static_assert(offsetof(UKatanaTargetingComponent, PrimaryAttackObstructionTraceChannel) == 692, "Offset mismatch for UKatanaTargetingComponent::PrimaryAttackObstructionTraceChannel");
