/**
 * decamp dumper generated SDK
 * Package: /Script/LavaLeafRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LavaLeafRuntime.FortActorComponent_LavaLeafPositionTracking
// Kind: Class; super: ActorComponent
class UFortActorComponent_LavaLeafPositionTracking
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> TrackedPositions; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortActorComponent_LavaLeafPositionTracking, TrackedPositions) == 192, "Offset mismatch for UFortActorComponent_LavaLeafPositionTracking::TrackedPositions");

// /Script/LavaLeafRuntime.FortGameplayAbility_LavaLeafPositionTracker
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_LavaLeafPositionTracker
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t ParachutingGameplayTag[0x4]; // 0x0B20 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnableDebugRecallCollisionDetection; // 0x0B24 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransientIsPlayerBlocked; // 0x0B25 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0B26
    TArray<void*> PlayerLocations; // 0x0B28 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerAimRotations; // 0x0B38 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerHealths; // 0x0B48 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerShields; // 0x0B58 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InGliderBools; // 0x0B68 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumberOfIntervals; // 0x0B78 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> CachedFortPlayerPawn; // 0x0B7C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0B84
    void* PositionTrackingComp; // 0x0B88 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedCharacterMovementComponent; // 0x0B90 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, ParachutingGameplayTag) == 2848, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::ParachutingGameplayTag");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, bEnableDebugRecallCollisionDetection) == 2852, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::bEnableDebugRecallCollisionDetection");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, bTransientIsPlayerBlocked) == 2853, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::bTransientIsPlayerBlocked");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, PlayerLocations) == 2856, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::PlayerLocations");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, PlayerAimRotations) == 2872, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::PlayerAimRotations");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, PlayerHealths) == 2888, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::PlayerHealths");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, PlayerShields) == 2904, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::PlayerShields");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, InGliderBools) == 2920, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::InGliderBools");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, NumberOfIntervals) == 2936, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::NumberOfIntervals");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, CachedFortPlayerPawn) == 2940, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::CachedFortPlayerPawn");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, PositionTrackingComp) == 2952, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::PositionTrackingComp");
static_assert(offsetof(UFortGameplayAbility_LavaLeafPositionTracker, CachedCharacterMovementComponent) == 2960, "Offset mismatch for UFortGameplayAbility_LavaLeafPositionTracker::CachedCharacterMovementComponent");

// /Script/LavaLeafRuntime.FortGameplayAbility_LavaLeafRewind
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_LavaLeafRewind
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t SF_AllowRewindInVehicle[0x1]; // 0x0B20 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_LavaLeafRewind, SF_AllowRewindInVehicle) == 2848, "Offset mismatch for UFortGameplayAbility_LavaLeafRewind::SF_AllowRewindInVehicle");

// /Script/LavaLeafRuntime.FortMovementMode_LavaLeafRewindExtLogic
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_LavaLeafRewindExtLogic
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    void* TargetingPreset; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AsyncTargetingHandle_PostTeleport[0x4]; // 0x01C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t AsyncTargetingHandle_InterimTeleport[0x4]; // 0x01CC (Size: 0x4, Type: StructProperty)
    void* GE_DestroyBuilds; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    void* GE_KnockbackObstacles; // 0x01D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SF_DestructibleBuildingMinHealth[0x30]; // 0x01E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_DestructibleBuildingMaxHealth[0x30]; // 0x0210 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_bEnableDestroyObstaclesOnTeleport[0x30]; // 0x0240 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_TimeBufferBeforeObstacleKnockback[0x30]; // 0x0270 (Size: 0x30, Type: StructProperty)
    TArray<void*> TrackedRewindLocations; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    void* GE_HidePlayer; // 0x02B0 (Size: 0x8, Type: ClassProperty)
    void* GE_FallDamageImmunity; // 0x02B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GCN_EnterRecall[0x4]; // 0x02C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t GCN_ExitRecall[0x4]; // 0x02C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SF_RewindDuration[0x30]; // 0x02C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_DelayBeforeRewind[0x30]; // 0x02F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_bEnableDistanceCapOnRewind[0x30]; // 0x0328 (Size: 0x30, Type: StructProperty)
    std::uint8_t SF_RewindXYDistanceCap[0x30]; // 0x0358 (Size: 0x30, Type: StructProperty)
    std::uint8_t bDeNativize[0x30]; // 0x0388 (Size: 0x30, Type: StructProperty)
    void* DenativizedRuntimeDataClass; // 0x03B8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, TargetingPreset) == 448, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::TargetingPreset");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, AsyncTargetingHandle_PostTeleport) == 456, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::AsyncTargetingHandle_PostTeleport");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, AsyncTargetingHandle_InterimTeleport) == 460, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::AsyncTargetingHandle_InterimTeleport");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, GE_DestroyBuilds) == 464, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::GE_DestroyBuilds");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, GE_KnockbackObstacles) == 472, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::GE_KnockbackObstacles");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_DestructibleBuildingMinHealth) == 480, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_DestructibleBuildingMinHealth");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_DestructibleBuildingMaxHealth) == 528, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_DestructibleBuildingMaxHealth");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_bEnableDestroyObstaclesOnTeleport) == 576, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_bEnableDestroyObstaclesOnTeleport");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_TimeBufferBeforeObstacleKnockback) == 624, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_TimeBufferBeforeObstacleKnockback");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, TrackedRewindLocations) == 672, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::TrackedRewindLocations");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, GE_HidePlayer) == 688, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::GE_HidePlayer");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, GE_FallDamageImmunity) == 696, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::GE_FallDamageImmunity");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, GCN_EnterRecall) == 704, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::GCN_EnterRecall");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, GCN_ExitRecall) == 708, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::GCN_ExitRecall");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_RewindDuration) == 712, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_RewindDuration");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_DelayBeforeRewind) == 760, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_DelayBeforeRewind");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_bEnableDistanceCapOnRewind) == 808, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_bEnableDistanceCapOnRewind");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, SF_RewindXYDistanceCap) == 856, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::SF_RewindXYDistanceCap");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, bDeNativize) == 904, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::bDeNativize");
static_assert(offsetof(UFortMovementMode_LavaLeafRewindExtLogic, DenativizedRuntimeDataClass) == 952, "Offset mismatch for UFortMovementMode_LavaLeafRewindExtLogic::DenativizedRuntimeDataClass");

// /Script/LavaLeafRuntime.FortMovementMode_LavaLeafRewindRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_LavaLeafRewindRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float ElapsedRewindTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_LavaLeafRewindRuntimeData, ElapsedRewindTime) == 56, "Offset mismatch for UFortMovementMode_LavaLeafRewindRuntimeData::ElapsedRewindTime");

// /Script/LavaLeafRuntime.FortWeaponComponent_LavaLeafInputOverrides
// Kind: Class; super: FortWeaponComponent
class UFortWeaponComponent_LavaLeafInputOverrides
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnReloadTriggered; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TargetingInputData[0x48]; // 0x00D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t ReloadOverrideInputAction[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bShowInputActionTooltip; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    std::uint8_t ToggleButtonPressCooldown[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortWeaponComponent_LavaLeafInputOverrides, OnReloadTriggered) == 192, "Offset mismatch for UFortWeaponComponent_LavaLeafInputOverrides::OnReloadTriggered");
static_assert(offsetof(UFortWeaponComponent_LavaLeafInputOverrides, TargetingInputData) == 208, "Offset mismatch for UFortWeaponComponent_LavaLeafInputOverrides::TargetingInputData");
static_assert(offsetof(UFortWeaponComponent_LavaLeafInputOverrides, ReloadOverrideInputAction) == 280, "Offset mismatch for UFortWeaponComponent_LavaLeafInputOverrides::ReloadOverrideInputAction");
static_assert(offsetof(UFortWeaponComponent_LavaLeafInputOverrides, bShowInputActionTooltip) == 312, "Offset mismatch for UFortWeaponComponent_LavaLeafInputOverrides::bShowInputActionTooltip");
static_assert(offsetof(UFortWeaponComponent_LavaLeafInputOverrides, ToggleButtonPressCooldown) == 320, "Offset mismatch for UFortWeaponComponent_LavaLeafInputOverrides::ToggleButtonPressCooldown");

// /Script/LavaLeafRuntime.LavaLeafLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class ULavaLeafLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    double LeanAlpha; // 0x1170 (Size: 0x8, Type: DoubleProperty)
    double FiringAdditiveAO; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double AO_Alpha; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    double SlidingAimPitchLimit; // 0x1188 (Size: 0x8, Type: DoubleProperty)
    double FiringAdditiveAOUpdated; // 0x1190 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bBoostedJumpFP; // 0x1198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDashFP; // 0x1199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToFP_Depth; // 0x119A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFireAO; // 0x119B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableLeanBS; // 0x119C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTeleportingFP; // 0x119D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDash_N; // 0x119E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x119F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDash_S; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDash_E; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDash_W; // 0x11A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInteracting; // 0x11A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEarlyExit; // 0x11A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDash_3P; // 0x11A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitDash; // 0x11A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitDoorBash; // 0x11A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterDoorBash; // 0x11A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x11A9
    std::uint8_t StasisTagName[0x4]; // 0x11AC (Size: 0x4, Type: StructProperty)
    std::uint8_t BoostedJumpTagName[0x4]; // 0x11B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DashTagName[0x4]; // 0x11B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SearchFPAnimMontage[0x20]; // 0x11B8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> LavaLeafFPEquipMAnimMontage; // 0x11D8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(ULavaLeafLayerAnimInstance, LeanAlpha) == 4464, "Offset mismatch for ULavaLeafLayerAnimInstance::LeanAlpha");
static_assert(offsetof(ULavaLeafLayerAnimInstance, FiringAdditiveAO) == 4472, "Offset mismatch for ULavaLeafLayerAnimInstance::FiringAdditiveAO");
static_assert(offsetof(ULavaLeafLayerAnimInstance, AO_Alpha) == 4480, "Offset mismatch for ULavaLeafLayerAnimInstance::AO_Alpha");
static_assert(offsetof(ULavaLeafLayerAnimInstance, SlidingAimPitchLimit) == 4488, "Offset mismatch for ULavaLeafLayerAnimInstance::SlidingAimPitchLimit");
static_assert(offsetof(ULavaLeafLayerAnimInstance, FiringAdditiveAOUpdated) == 4496, "Offset mismatch for ULavaLeafLayerAnimInstance::FiringAdditiveAOUpdated");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bBoostedJumpFP) == 4504, "Offset mismatch for ULavaLeafLayerAnimInstance::bBoostedJumpFP");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDashFP) == 4505, "Offset mismatch for ULavaLeafLayerAnimInstance::bDashFP");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bToFP_Depth) == 4506, "Offset mismatch for ULavaLeafLayerAnimInstance::bToFP_Depth");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bUseFireAO) == 4507, "Offset mismatch for ULavaLeafLayerAnimInstance::bUseFireAO");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDisableLeanBS) == 4508, "Offset mismatch for ULavaLeafLayerAnimInstance::bDisableLeanBS");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bTeleportingFP) == 4509, "Offset mismatch for ULavaLeafLayerAnimInstance::bTeleportingFP");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDash_N) == 4510, "Offset mismatch for ULavaLeafLayerAnimInstance::bDash_N");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bIsFiring) == 4511, "Offset mismatch for ULavaLeafLayerAnimInstance::bIsFiring");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDash_S) == 4512, "Offset mismatch for ULavaLeafLayerAnimInstance::bDash_S");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDash_E) == 4513, "Offset mismatch for ULavaLeafLayerAnimInstance::bDash_E");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDash_W) == 4514, "Offset mismatch for ULavaLeafLayerAnimInstance::bDash_W");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bIsInteracting) == 4515, "Offset mismatch for ULavaLeafLayerAnimInstance::bIsInteracting");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bEarlyExit) == 4516, "Offset mismatch for ULavaLeafLayerAnimInstance::bEarlyExit");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bDash_3P) == 4517, "Offset mismatch for ULavaLeafLayerAnimInstance::bDash_3P");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bExitDash) == 4518, "Offset mismatch for ULavaLeafLayerAnimInstance::bExitDash");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bExitDoorBash) == 4519, "Offset mismatch for ULavaLeafLayerAnimInstance::bExitDoorBash");
static_assert(offsetof(ULavaLeafLayerAnimInstance, bCanEnterDoorBash) == 4520, "Offset mismatch for ULavaLeafLayerAnimInstance::bCanEnterDoorBash");
static_assert(offsetof(ULavaLeafLayerAnimInstance, StasisTagName) == 4524, "Offset mismatch for ULavaLeafLayerAnimInstance::StasisTagName");
static_assert(offsetof(ULavaLeafLayerAnimInstance, BoostedJumpTagName) == 4528, "Offset mismatch for ULavaLeafLayerAnimInstance::BoostedJumpTagName");
static_assert(offsetof(ULavaLeafLayerAnimInstance, DashTagName) == 4532, "Offset mismatch for ULavaLeafLayerAnimInstance::DashTagName");
static_assert(offsetof(ULavaLeafLayerAnimInstance, SearchFPAnimMontage) == 4536, "Offset mismatch for ULavaLeafLayerAnimInstance::SearchFPAnimMontage");
static_assert(offsetof(ULavaLeafLayerAnimInstance, LavaLeafFPEquipMAnimMontage) == 4568, "Offset mismatch for ULavaLeafLayerAnimInstance::LavaLeafFPEquipMAnimMontage");

// /Script/LavaLeafRuntime.LavaLeafPistolWeaponAnimInstance
// Kind: Class; super: AnimInstance
class ULavaLeafPistolWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t MagRotation[0x18]; // 0x0260 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsReloading; // 0x0278 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULavaLeafPistolWeaponAnimInstance, MagRotation) == 608, "Offset mismatch for ULavaLeafPistolWeaponAnimInstance::MagRotation");
static_assert(offsetof(ULavaLeafPistolWeaponAnimInstance, bIsReloading) == 632, "Offset mismatch for ULavaLeafPistolWeaponAnimInstance::bIsReloading");

// /Script/LavaLeafRuntime.LavaLeafPositionTrackingInterface
// Kind: Class; super: Interface
class ULavaLeafPositionTrackingInterface
{
public:
    std::uint8_t Opaque[1];
};
