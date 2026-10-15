/**
 * decamp dumper generated SDK
 * Package: /Script/MintPunt
 */
#pragma once
#include "Basic.h"

// /Script/MintPunt.FortChargingSet_MintPunt
// Kind: Class; super: FortAttributeSet
class UFortChargingSet_MintPunt
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CurrentCharges[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortChargingSet_MintPunt, CurrentCharges) == 72, "Offset mismatch for UFortChargingSet_MintPunt::CurrentCharges");

// /Script/MintPunt.MintPuntChargedAbility
// Kind: Class; super: FortGameplayAbility
class UMintPuntChargedAbility
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    void* ChargeModifierGE; // 0x0B20 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MaxChargeCount[0x28]; // 0x0B28 (Size: 0x28, Type: StructProperty)
    std::uint8_t ChargeRechargeCooldown[0x1]; // 0x0B50 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMintPuntChargedAbility, ChargeModifierGE) == 2848, "Offset mismatch for UMintPuntChargedAbility::ChargeModifierGE");
static_assert(offsetof(UMintPuntChargedAbility, MaxChargeCount) == 2856, "Offset mismatch for UMintPuntChargedAbility::MaxChargeCount");
static_assert(offsetof(UMintPuntChargedAbility, ChargeRechargeCooldown) == 2896, "Offset mismatch for UMintPuntChargedAbility::ChargeRechargeCooldown");

// /Script/MintPunt.MintPuntLayerAnimInstance
// Kind: Class; super: NanaimoBarLayerAnimInstance
class UMintPuntLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x11A0]; // 0x0000
    double IkAlpha; // 0x11A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bChargeLvl2; // 0x11A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseIK; // 0x11A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChargeLvl1; // 0x11AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCharging_BP; // 0x11AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyAO; // 0x11AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMintPuntLayerAnimInstance, IkAlpha) == 4512, "Offset mismatch for UMintPuntLayerAnimInstance::IkAlpha");
static_assert(offsetof(UMintPuntLayerAnimInstance, bChargeLvl2) == 4520, "Offset mismatch for UMintPuntLayerAnimInstance::bChargeLvl2");
static_assert(offsetof(UMintPuntLayerAnimInstance, bUseIK) == 4521, "Offset mismatch for UMintPuntLayerAnimInstance::bUseIK");
static_assert(offsetof(UMintPuntLayerAnimInstance, bChargeLvl1) == 4522, "Offset mismatch for UMintPuntLayerAnimInstance::bChargeLvl1");
static_assert(offsetof(UMintPuntLayerAnimInstance, bIsCharging_BP) == 4523, "Offset mismatch for UMintPuntLayerAnimInstance::bIsCharging_BP");
static_assert(offsetof(UMintPuntLayerAnimInstance, bApplyAO) == 4524, "Offset mismatch for UMintPuntLayerAnimInstance::bApplyAO");

// /Script/MintPunt.MintPuntMovementMode_SlideBoost
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UMintPuntMovementMode_SlideBoost
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    void* GE_Boost; // 0x05A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HNDL_GE_Boost[0x18]; // 0x05A8 (Size: 0x18, Type: StructProperty)
    double LastBoostUpdateWorldTime; // 0x05C0 (Size: 0x8, Type: DoubleProperty)
    std::int32_t LastCommittedRuntimeID; // 0x05C8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMintPuntMovementMode_SlideBoost, GE_Boost) == 1440, "Offset mismatch for UMintPuntMovementMode_SlideBoost::GE_Boost");
static_assert(offsetof(UMintPuntMovementMode_SlideBoost, HNDL_GE_Boost) == 1448, "Offset mismatch for UMintPuntMovementMode_SlideBoost::HNDL_GE_Boost");
static_assert(offsetof(UMintPuntMovementMode_SlideBoost, LastBoostUpdateWorldTime) == 1472, "Offset mismatch for UMintPuntMovementMode_SlideBoost::LastBoostUpdateWorldTime");
static_assert(offsetof(UMintPuntMovementMode_SlideBoost, LastCommittedRuntimeID) == 1480, "Offset mismatch for UMintPuntMovementMode_SlideBoost::LastCommittedRuntimeID");

// /Script/MintPunt.MintPuntProjectile
// Kind: Class; super: FortProjectileAthena
class UMintPuntProjectile
{
public:
    std::uint8_t Pad_0000[0xAE0]; // 0x0000
    std::uint8_t PawnHitResult[0xF8]; // 0x0AE0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t FireStartLoc[0x18]; // 0x0BD8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExplodeOnPawnHit; // 0x0BF0 (Size: 0x1, Type: BoolProperty)
    // 0x0BF0 BoolProperty bIgnoreActorsAttachedToFiringPawn (shared storage)
    // 0x0BF0 BoolProperty bNoCollisionForNonOwningClients (shared storage)
    // 0x0BF0 BoolProperty bUseAsyncExplosions (shared storage)
    // 0x0BF0 BoolProperty bUseAsyncExplosionsOnlyOnce (shared storage)
    std::uint8_t bEstimateCollisionForSniperTrace; // 0x0BF1 (Size: 0x1, Type: BoolProperty)
    // 0x0BF1 BoolProperty bPredictMaxSimulationDistanceExceeded (shared storage)
    // 0x0BF1 BoolProperty bProcessLocalHits (shared storage)
    // 0x0BF1 BoolProperty bProcessOnServerForFortAIControllers (shared storage)
    // 0x0BF1 BoolProperty bSkipOnTouchedEventForInitialOwnerHit (shared storage)
    // 0x0BF1 BoolProperty bTriggerTouchForAllSniperTraceHits (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0BF2
    float TimeToWaitForPawnHitBeforeKillOnServer; // 0x0BF4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0BF8
    void* PredictedHitActor; // 0x0C08 (Size: 0x8, Type: ObjectProperty)
    void* PredictedHitComp; // 0x0C10 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMintPuntProjectile, PawnHitResult) == 2784, "Offset mismatch for UMintPuntProjectile::PawnHitResult");
static_assert(offsetof(UMintPuntProjectile, FireStartLoc) == 3032, "Offset mismatch for UMintPuntProjectile::FireStartLoc");
static_assert(offsetof(UMintPuntProjectile, bExplodeOnPawnHit) == 3056, "Offset mismatch for UMintPuntProjectile::bExplodeOnPawnHit");
static_assert(offsetof(UMintPuntProjectile, bEstimateCollisionForSniperTrace) == 3057, "Offset mismatch for UMintPuntProjectile::bEstimateCollisionForSniperTrace");
static_assert(offsetof(UMintPuntProjectile, TimeToWaitForPawnHitBeforeKillOnServer) == 3060, "Offset mismatch for UMintPuntProjectile::TimeToWaitForPawnHitBeforeKillOnServer");
static_assert(offsetof(UMintPuntProjectile, PredictedHitActor) == 3080, "Offset mismatch for UMintPuntProjectile::PredictedHitActor");
static_assert(offsetof(UMintPuntProjectile, PredictedHitComp) == 3088, "Offset mismatch for UMintPuntProjectile::PredictedHitComp");

// /Script/MintPunt.MintPuntTargetingTask_InjectReportedHit
// Kind: Class; super: TargetingTask
class UMintPuntTargetingTask_InjectReportedHit
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MaxInjectDistance[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    TArray<void*> RequiredAffiliations; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayTagReqs[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMintPuntTargetingTask_InjectReportedHit, MaxInjectDistance) == 40, "Offset mismatch for UMintPuntTargetingTask_InjectReportedHit::MaxInjectDistance");
static_assert(offsetof(UMintPuntTargetingTask_InjectReportedHit, RequiredAffiliations) == 80, "Offset mismatch for UMintPuntTargetingTask_InjectReportedHit::RequiredAffiliations");
static_assert(offsetof(UMintPuntTargetingTask_InjectReportedHit, GameplayTagReqs) == 96, "Offset mismatch for UMintPuntTargetingTask_InjectReportedHit::GameplayTagReqs");

// /Script/MintPunt.MintPuntWeaponRanged
// Kind: Class; super: FortWeaponRanged
class UMintPuntWeaponRanged
{
public:
    std::uint8_t Pad_0000[0x19F8]; // 0x0000
    FMulticastInlineDelegate OnProjectileSpawned; // 0x19F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRecoilAdded; // 0x1A08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBulletTracerNiagaraDataSent; // 0x1A18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBulletTracerBeamFXActivated; // 0x1A28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x1A38
    std::uint8_t ReplayActivationCue[0xD8]; // 0x1A50 (Size: 0xD8, Type: StructProperty)
    std::uint8_t ReplayImpactCue[0xE0]; // 0x1B28 (Size: 0xE0, Type: StructProperty)
    std::uint8_t PlayDelayedRecoilTimerHandle[0x8]; // 0x1C08 (Size: 0x8, Type: StructProperty)
    std::uint8_t PlayDelayedFiringAnimationTimerHandle[0x8]; // 0x1C10 (Size: 0x8, Type: StructProperty)
    std::uint8_t PlayDelayedSpreadTimerHandle[0x8]; // 0x1C18 (Size: 0x8, Type: StructProperty)
    std::uint8_t bLWPNudgeHitOrigin; // 0x1C20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x1C21
    std::uint8_t LWPNudgeHitDistance[0x30]; // 0x1C28 (Size: 0x30, Type: StructProperty)
    void* TracerFXDataChannel; // 0x1C58 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NDCTracerFx[0x138]; // 0x1C60 (Size: 0x138, Type: StructProperty)
    std::uint8_t MuzzleFXData[0xB0]; // 0x1D98 (Size: 0xB0, Type: StructProperty)
    float HitscanTracerFakeVelocity; // 0x1E48 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x1E4C
    void* TracerTemplate; // 0x1E50 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowAutomaticWeaponCatchup; // 0x1E58 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x27]; // 0x1E59
    float LocalFireRateModification; // 0x1E80 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentNumBullets; // 0x1E84 (Size: 0x4, Type: IntProperty)
    std::uint8_t ScopeTargetingMuzzleOffset[0x18]; // 0x1E88 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentMuzzleBlockedLocation[0x18]; // 0x1EA0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentDamageStart; // 0x1EB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x1EB9
    std::uint8_t MaxTargetingAimAdjustment[0x18]; // 0x1EC0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAimFromMuzzleAtCloseRange; // 0x1ED8 (Size: 0x1, Type: BoolProperty)
    // 0x1ED8 BoolProperty bAnchorReticleCenter (shared storage)
    // 0x1ED8 BoolProperty bHideAmmoCounterDuringTargeting (shared storage)
    // 0x1ED8 BoolProperty bShouldDisplayAmmoCounter (shared storage)
    // 0x1ED8 BoolProperty bShouldDisplayAmmoCounterDuringSecondaryFire (shared storage)
    // 0x1ED8 BoolProperty bShouldDisplayReticleAmmoCounter (shared storage)
    // 0x1ED8 BoolProperty bShouldHideMagazineAmmo (shared storage)
    // 0x1ED8 BoolProperty bShouldHideReserveAmmo (shared storage)
    std::uint8_t bAlwaysAimFromMuzzle; // 0x1ED9 (Size: 0x1, Type: BoolProperty)
    // 0x1ED9 BoolProperty bAutoReloadBlocksManualReload (shared storage)
    // 0x1ED9 BoolProperty bShouldAimFromMuzzleAtCloseRange (shared storage)
    std::uint8_t bAllowTrySecondaryFireDuringReload; // 0x1EDA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableTargetingForHipFireFirstPerson; // 0x1EDB (Size: 0x1, Type: BoolProperty)
    // 0x1EDB BoolProperty bMaintainAimLocationDuringTargeting (shared storage)
    // 0x1EDB BoolProperty bUseFirstPersonTargeting (shared storage)
    // 0x1EDB BoolProperty bUseScopeTargeting (shared storage)
    float HipFireFirstPersonMeshFOV; // 0x1EDC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0xC]; // 0x1EE0
    std::uint8_t bUseScopedThirdPersonTargeting; // 0x1EEC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0xB]; // 0x1EED
    float ADSFireHeadToHandDistance; // 0x1EF8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bActivateRangeAbilityPerBurstShot; // 0x1EFC (Size: 0x1, Type: BoolProperty)
    // 0x1EFC BoolProperty bPersistentFireFX (shared storage)
    // 0x1EFC BoolProperty bSendSingleFireEventForLoopingMetaSoundWeapons (shared storage)
    // 0x1EFC BoolProperty bUseBeamParticles (shared storage)
    // 0x1EFC BoolProperty bUseImpactDecals (shared storage)
    // 0x1EFC BoolProperty bUseImpactFXForProjectileOverlaps (shared storage)
    // 0x1EFC BoolProperty bUseImpactFXForProjectiles (shared storage)
    // 0x1EFC BoolProperty bUsePersistentBeam (shared storage)
    std::uint8_t bUseOverrideBaseSpread; // 0x1EFD (Size: 0x1, Type: BoolProperty)
    // 0x1EFD BoolProperty bUseOverrideSpreadDownsightsMultiplier (shared storage)
    // 0x1EFD BoolProperty bUseShellsParticles (shared storage)
    // 0x1EFD BoolProperty bUseTracers (shared storage)
    std::uint8_t bIsMuzzleTraceNearWall; // 0x1EFE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x1]; // 0x1EFF
    float MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees; // 0x1F00 (Size: 0x4, Type: FloatProperty)
    float AimPitchMin; // 0x1F04 (Size: 0x4, Type: FloatProperty)
    float AimPitchMax; // 0x1F08 (Size: 0x4, Type: FloatProperty)
    float MuzzleTraceNearWallThreshold; // 0x1F0C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0009[0x20]; // 0x1F10
    std::uint8_t BeamSignificance[0x18]; // 0x1F30 (Size: 0x18, Type: StructProperty)
    std::uint8_t ImpactSignificance[0x18]; // 0x1F48 (Size: 0x18, Type: StructProperty)
    std::uint8_t DecalSignificance[0x18]; // 0x1F60 (Size: 0x18, Type: StructProperty)
    float ScopeImpactEffectDistanceOffset; // 0x1F78 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x4]; // 0x1F7C
    void* MuzzlePSC; // 0x1F80 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ShellPSCMap; // 0x1F88 (Size: 0x10, Type: MapProperty)
    void* BeamParticleSystem; // 0x1F98 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BeamNiagaraSystemAsset[0x20]; // 0x1FA0 (Size: 0x20, Type: SoftObjectProperty)
    FName BeamSourceSocketName; // 0x1FC0 (Size: 0x8, Type: NameProperty)
    void* FortSpawnPropOverride; // 0x1FC8 (Size: 0x8, Type: ObjectProperty)
    void* FortSpawnPropAnimOverride; // 0x1FD0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DecalSizeMin[0x18]; // 0x1FD8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DecalSizeMax[0x18]; // 0x1FF0 (Size: 0x18, Type: StructProperty)
    float DecalLifespanMin; // 0x2008 (Size: 0x4, Type: FloatProperty)
    float DecalLifespanMax; // 0x200C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DecalColorStart[0x10]; // 0x2010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DecalColorEnd[0x10]; // 0x2020 (Size: 0x10, Type: StructProperty)
    void* DecalMaterial; // 0x2030 (Size: 0x8, Type: ObjectProperty)
    void* DecalTexture; // 0x2038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SurfaceAcceptingDecals; // 0x2040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000B[0x4]; // 0x2050
    std::int32_t ShellReloadCounter; // 0x2054 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_000C[0xA8]; // 0x2058
    std::uint8_t MaxTargetingAimAdjustPerSecond[0x190]; // 0x2100 (Size: 0x190, Type: StructProperty)
    std::uint8_t ScopePostProcessEnabled; // 0x2290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x2291
    float ScopePostProcessBlendWeight; // 0x2294 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ScopePostProcessMaterial; // 0x2298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ScopePostProcessMaterialFromOptic; // 0x22A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000E[0x8]; // 0x22B8
    float LWPSpawnDirectionAdjustmentStrengthOverride; // 0x22C0 (Size: 0x4, Type: FloatProperty)
    float LWPDirectionAdjustmentMaxAngleOverride; // 0x22C4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> BulletPattern; // 0x22C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RampingFireRateData[0x170]; // 0x22D8 (Size: 0x170, Type: StructProperty)
    void* EnemyWarningWeaponImpactSFX; // 0x2448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000F[0xD8]; // 0x2450
    float LastFiredInterval; // 0x2528 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0010[0x4]; // 0x252C
    void* BeamNiagaraSystem; // 0x2530 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0011[0x80]; // 0x2538
    std::uint8_t bUseAthenaRecoil; // 0x25B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFirstShotAccuracyCheckVehicleMovement; // 0x25B9 (Size: 0x1, Type: BoolProperty)
    // 0x25B9 BoolProperty bUseAthenaPerfectADSAim (shared storage)
    std::uint8_t Pad_0012[0x2]; // 0x25BA
    float FirstShotAccuracyMinWaitTime; // 0x25BC (Size: 0x4, Type: FloatProperty)
    float BulletCountForPerBulletRecoil; // 0x25C0 (Size: 0x4, Type: FloatProperty)
    float RecoilProcessingShotCounter; // 0x25C4 (Size: 0x4, Type: FloatProperty)
    float RecoilTimingCounter; // 0x25C8 (Size: 0x4, Type: FloatProperty)
    float BulletCountForPerBulletSpread; // 0x25CC (Size: 0x4, Type: FloatProperty)
    float TimeRemainingForBulletSpread; // 0x25D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0013[0x74]; // 0x25D4
    void* FireAnimation; // 0x2648 (Size: 0x8, Type: ObjectProperty)
    void* FireDownsightsAnimation; // 0x2650 (Size: 0x8, Type: ObjectProperty)
    void* FireFromCrouchWalkAnimation; // 0x2658 (Size: 0x8, Type: ObjectProperty)
    void* CockingAnimation; // 0x2660 (Size: 0x8, Type: ObjectProperty)
    void* WeaponFireMontage; // 0x2668 (Size: 0x8, Type: ObjectProperty)
    void* WeaponFireDownsightsMontage; // 0x2670 (Size: 0x8, Type: ObjectProperty)
    void* WeaponFireFromCrouchWalkMontage; // 0x2678 (Size: 0x8, Type: ObjectProperty)
    void* WeaponCockingMontage; // 0x2680 (Size: 0x8, Type: ObjectProperty)
    void* BeamPSC; // 0x2688 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTracerFXSupportsMultipleSequentialTracers; // 0x2690 (Size: 0x1, Type: BoolProperty)
    // 0x2690 BoolProperty bTracerFXSupportsMultipleSimultaneousTracers (shared storage)
    std::uint8_t Pad_0014[0x7]; // 0x2691
    void* TracerBeamFX; // 0x2698 (Size: 0x8, Type: ObjectProperty)
    float CrouchWalkSpeedThreshold; // 0x26A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableRecoilDelay; // 0x26A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0015[0x3]; // 0x26A5
    float ReticleSpreadZeroingDistanceFromMuzzle; // 0x26A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0016[0x14]; // 0x26AC
    FMulticastInlineDelegate OnScopedThirdPersonTargetingChanged; // 0x26C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0017[0x40]; // 0x26D0
    FMulticastInlineDelegate OnOverheatValueChanged; // 0x2710 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t OverheatState; // 0x2720 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0018[0x3]; // 0x2721
    std::uint8_t OverheatSyncData[0xC]; // 0x2724 (Size: 0xC, Type: StructProperty)
    void* OverheatedAnimation; // 0x2730 (Size: 0x8, Type: ObjectProperty)
    void* WeaponOverheatedAnimation; // 0x2738 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCooldownWhileOverheated; // 0x2740 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldDisplayReticleOverheatIndicator; // 0x2741 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0019[0x2]; // 0x2742
    float OverheatValue; // 0x2744 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001A[0x1C]; // 0x2748
    float TimeHeatWasLastAdded; // 0x2764 (Size: 0x4, Type: FloatProperty)
    float TimeOverheatedBegan; // 0x2768 (Size: 0x4, Type: FloatProperty)
    float OverheatValueWhenVentingBegan; // 0x276C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsManuallyVentingWeapon; // 0x2770 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001B[0x17]; // 0x2771
    std::uint8_t LWProjectile_DamageStart[0x18]; // 0x2788 (Size: 0x18, Type: StructProperty)
    std::uint8_t LWProjectile_DamageDirection[0x18]; // 0x27A0 (Size: 0x18, Type: StructProperty)
    float LWProjectile_ActivateRemovedTimestamp; // 0x27B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001C[0x39]; // 0x27BC
    std::uint8_t bCacheAimPointOnFire; // 0x27F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001D[0x2]; // 0x27F6
    std::uint8_t CachedAimPoint[0x18]; // 0x27F8 (Size: 0x18, Type: StructProperty)
    std::int32_t CustomFiringSequenceLength; // 0x2810 (Size: 0x4, Type: IntProperty)
    float CustomFiringSequenceMinTimeBetween; // 0x2814 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_001E[0x8]; // 0x2818
    TScriptInterface<void> CachedLODSettingsManager; // 0x2820 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_001F[0x8]; // 0x2830
    std::uint8_t bUseTargetingBasedLOD; // 0x2838 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0020[0x3]; // 0x2839
    std::int32_t ScopeRailMaterialIndex; // 0x283C (Size: 0x4, Type: IntProperty)
    FName HideScopeRailMaterialParameterName; // 0x2840 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMintPuntWeaponRanged, OnProjectileSpawned) == 6648, "Offset mismatch for UMintPuntWeaponRanged::OnProjectileSpawned");
static_assert(offsetof(UMintPuntWeaponRanged, OnRecoilAdded) == 6664, "Offset mismatch for UMintPuntWeaponRanged::OnRecoilAdded");
static_assert(offsetof(UMintPuntWeaponRanged, OnBulletTracerNiagaraDataSent) == 6680, "Offset mismatch for UMintPuntWeaponRanged::OnBulletTracerNiagaraDataSent");
static_assert(offsetof(UMintPuntWeaponRanged, OnBulletTracerBeamFXActivated) == 6696, "Offset mismatch for UMintPuntWeaponRanged::OnBulletTracerBeamFXActivated");
static_assert(offsetof(UMintPuntWeaponRanged, ReplayActivationCue) == 6736, "Offset mismatch for UMintPuntWeaponRanged::ReplayActivationCue");
static_assert(offsetof(UMintPuntWeaponRanged, ReplayImpactCue) == 6952, "Offset mismatch for UMintPuntWeaponRanged::ReplayImpactCue");
static_assert(offsetof(UMintPuntWeaponRanged, PlayDelayedRecoilTimerHandle) == 7176, "Offset mismatch for UMintPuntWeaponRanged::PlayDelayedRecoilTimerHandle");
static_assert(offsetof(UMintPuntWeaponRanged, PlayDelayedFiringAnimationTimerHandle) == 7184, "Offset mismatch for UMintPuntWeaponRanged::PlayDelayedFiringAnimationTimerHandle");
static_assert(offsetof(UMintPuntWeaponRanged, PlayDelayedSpreadTimerHandle) == 7192, "Offset mismatch for UMintPuntWeaponRanged::PlayDelayedSpreadTimerHandle");
static_assert(offsetof(UMintPuntWeaponRanged, bLWPNudgeHitOrigin) == 7200, "Offset mismatch for UMintPuntWeaponRanged::bLWPNudgeHitOrigin");
static_assert(offsetof(UMintPuntWeaponRanged, LWPNudgeHitDistance) == 7208, "Offset mismatch for UMintPuntWeaponRanged::LWPNudgeHitDistance");
static_assert(offsetof(UMintPuntWeaponRanged, TracerFXDataChannel) == 7256, "Offset mismatch for UMintPuntWeaponRanged::TracerFXDataChannel");
static_assert(offsetof(UMintPuntWeaponRanged, NDCTracerFx) == 7264, "Offset mismatch for UMintPuntWeaponRanged::NDCTracerFx");
static_assert(offsetof(UMintPuntWeaponRanged, MuzzleFXData) == 7576, "Offset mismatch for UMintPuntWeaponRanged::MuzzleFXData");
static_assert(offsetof(UMintPuntWeaponRanged, HitscanTracerFakeVelocity) == 7752, "Offset mismatch for UMintPuntWeaponRanged::HitscanTracerFakeVelocity");
static_assert(offsetof(UMintPuntWeaponRanged, TracerTemplate) == 7760, "Offset mismatch for UMintPuntWeaponRanged::TracerTemplate");
static_assert(offsetof(UMintPuntWeaponRanged, bAllowAutomaticWeaponCatchup) == 7768, "Offset mismatch for UMintPuntWeaponRanged::bAllowAutomaticWeaponCatchup");
static_assert(offsetof(UMintPuntWeaponRanged, LocalFireRateModification) == 7808, "Offset mismatch for UMintPuntWeaponRanged::LocalFireRateModification");
static_assert(offsetof(UMintPuntWeaponRanged, CurrentNumBullets) == 7812, "Offset mismatch for UMintPuntWeaponRanged::CurrentNumBullets");
static_assert(offsetof(UMintPuntWeaponRanged, ScopeTargetingMuzzleOffset) == 7816, "Offset mismatch for UMintPuntWeaponRanged::ScopeTargetingMuzzleOffset");
static_assert(offsetof(UMintPuntWeaponRanged, CurrentMuzzleBlockedLocation) == 7840, "Offset mismatch for UMintPuntWeaponRanged::CurrentMuzzleBlockedLocation");
static_assert(offsetof(UMintPuntWeaponRanged, CurrentDamageStart) == 7864, "Offset mismatch for UMintPuntWeaponRanged::CurrentDamageStart");
static_assert(offsetof(UMintPuntWeaponRanged, MaxTargetingAimAdjustment) == 7872, "Offset mismatch for UMintPuntWeaponRanged::MaxTargetingAimAdjustment");
static_assert(offsetof(UMintPuntWeaponRanged, bAimFromMuzzleAtCloseRange) == 7896, "Offset mismatch for UMintPuntWeaponRanged::bAimFromMuzzleAtCloseRange");
static_assert(offsetof(UMintPuntWeaponRanged, bAlwaysAimFromMuzzle) == 7897, "Offset mismatch for UMintPuntWeaponRanged::bAlwaysAimFromMuzzle");
static_assert(offsetof(UMintPuntWeaponRanged, bAllowTrySecondaryFireDuringReload) == 7898, "Offset mismatch for UMintPuntWeaponRanged::bAllowTrySecondaryFireDuringReload");
static_assert(offsetof(UMintPuntWeaponRanged, bDisableTargetingForHipFireFirstPerson) == 7899, "Offset mismatch for UMintPuntWeaponRanged::bDisableTargetingForHipFireFirstPerson");
static_assert(offsetof(UMintPuntWeaponRanged, HipFireFirstPersonMeshFOV) == 7900, "Offset mismatch for UMintPuntWeaponRanged::HipFireFirstPersonMeshFOV");
static_assert(offsetof(UMintPuntWeaponRanged, bUseScopedThirdPersonTargeting) == 7916, "Offset mismatch for UMintPuntWeaponRanged::bUseScopedThirdPersonTargeting");
static_assert(offsetof(UMintPuntWeaponRanged, ADSFireHeadToHandDistance) == 7928, "Offset mismatch for UMintPuntWeaponRanged::ADSFireHeadToHandDistance");
static_assert(offsetof(UMintPuntWeaponRanged, bActivateRangeAbilityPerBurstShot) == 7932, "Offset mismatch for UMintPuntWeaponRanged::bActivateRangeAbilityPerBurstShot");
static_assert(offsetof(UMintPuntWeaponRanged, bUseOverrideBaseSpread) == 7933, "Offset mismatch for UMintPuntWeaponRanged::bUseOverrideBaseSpread");
static_assert(offsetof(UMintPuntWeaponRanged, bIsMuzzleTraceNearWall) == 7934, "Offset mismatch for UMintPuntWeaponRanged::bIsMuzzleTraceNearWall");
static_assert(offsetof(UMintPuntWeaponRanged, MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees) == 7936, "Offset mismatch for UMintPuntWeaponRanged::MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees");
static_assert(offsetof(UMintPuntWeaponRanged, AimPitchMin) == 7940, "Offset mismatch for UMintPuntWeaponRanged::AimPitchMin");
static_assert(offsetof(UMintPuntWeaponRanged, AimPitchMax) == 7944, "Offset mismatch for UMintPuntWeaponRanged::AimPitchMax");
static_assert(offsetof(UMintPuntWeaponRanged, MuzzleTraceNearWallThreshold) == 7948, "Offset mismatch for UMintPuntWeaponRanged::MuzzleTraceNearWallThreshold");
static_assert(offsetof(UMintPuntWeaponRanged, BeamSignificance) == 7984, "Offset mismatch for UMintPuntWeaponRanged::BeamSignificance");
static_assert(offsetof(UMintPuntWeaponRanged, ImpactSignificance) == 8008, "Offset mismatch for UMintPuntWeaponRanged::ImpactSignificance");
static_assert(offsetof(UMintPuntWeaponRanged, DecalSignificance) == 8032, "Offset mismatch for UMintPuntWeaponRanged::DecalSignificance");
static_assert(offsetof(UMintPuntWeaponRanged, ScopeImpactEffectDistanceOffset) == 8056, "Offset mismatch for UMintPuntWeaponRanged::ScopeImpactEffectDistanceOffset");
static_assert(offsetof(UMintPuntWeaponRanged, MuzzlePSC) == 8064, "Offset mismatch for UMintPuntWeaponRanged::MuzzlePSC");
static_assert(offsetof(UMintPuntWeaponRanged, ShellPSCMap) == 8072, "Offset mismatch for UMintPuntWeaponRanged::ShellPSCMap");
static_assert(offsetof(UMintPuntWeaponRanged, BeamParticleSystem) == 8088, "Offset mismatch for UMintPuntWeaponRanged::BeamParticleSystem");
static_assert(offsetof(UMintPuntWeaponRanged, BeamNiagaraSystemAsset) == 8096, "Offset mismatch for UMintPuntWeaponRanged::BeamNiagaraSystemAsset");
static_assert(offsetof(UMintPuntWeaponRanged, BeamSourceSocketName) == 8128, "Offset mismatch for UMintPuntWeaponRanged::BeamSourceSocketName");
static_assert(offsetof(UMintPuntWeaponRanged, FortSpawnPropOverride) == 8136, "Offset mismatch for UMintPuntWeaponRanged::FortSpawnPropOverride");
static_assert(offsetof(UMintPuntWeaponRanged, FortSpawnPropAnimOverride) == 8144, "Offset mismatch for UMintPuntWeaponRanged::FortSpawnPropAnimOverride");
static_assert(offsetof(UMintPuntWeaponRanged, DecalSizeMin) == 8152, "Offset mismatch for UMintPuntWeaponRanged::DecalSizeMin");
static_assert(offsetof(UMintPuntWeaponRanged, DecalSizeMax) == 8176, "Offset mismatch for UMintPuntWeaponRanged::DecalSizeMax");
static_assert(offsetof(UMintPuntWeaponRanged, DecalLifespanMin) == 8200, "Offset mismatch for UMintPuntWeaponRanged::DecalLifespanMin");
static_assert(offsetof(UMintPuntWeaponRanged, DecalLifespanMax) == 8204, "Offset mismatch for UMintPuntWeaponRanged::DecalLifespanMax");
static_assert(offsetof(UMintPuntWeaponRanged, DecalColorStart) == 8208, "Offset mismatch for UMintPuntWeaponRanged::DecalColorStart");
static_assert(offsetof(UMintPuntWeaponRanged, DecalColorEnd) == 8224, "Offset mismatch for UMintPuntWeaponRanged::DecalColorEnd");
static_assert(offsetof(UMintPuntWeaponRanged, DecalMaterial) == 8240, "Offset mismatch for UMintPuntWeaponRanged::DecalMaterial");
static_assert(offsetof(UMintPuntWeaponRanged, DecalTexture) == 8248, "Offset mismatch for UMintPuntWeaponRanged::DecalTexture");
static_assert(offsetof(UMintPuntWeaponRanged, SurfaceAcceptingDecals) == 8256, "Offset mismatch for UMintPuntWeaponRanged::SurfaceAcceptingDecals");
static_assert(offsetof(UMintPuntWeaponRanged, ShellReloadCounter) == 8276, "Offset mismatch for UMintPuntWeaponRanged::ShellReloadCounter");
static_assert(offsetof(UMintPuntWeaponRanged, MaxTargetingAimAdjustPerSecond) == 8448, "Offset mismatch for UMintPuntWeaponRanged::MaxTargetingAimAdjustPerSecond");
static_assert(offsetof(UMintPuntWeaponRanged, ScopePostProcessEnabled) == 8848, "Offset mismatch for UMintPuntWeaponRanged::ScopePostProcessEnabled");
static_assert(offsetof(UMintPuntWeaponRanged, ScopePostProcessBlendWeight) == 8852, "Offset mismatch for UMintPuntWeaponRanged::ScopePostProcessBlendWeight");
static_assert(offsetof(UMintPuntWeaponRanged, ScopePostProcessMaterial) == 8856, "Offset mismatch for UMintPuntWeaponRanged::ScopePostProcessMaterial");
static_assert(offsetof(UMintPuntWeaponRanged, ScopePostProcessMaterialFromOptic) == 8872, "Offset mismatch for UMintPuntWeaponRanged::ScopePostProcessMaterialFromOptic");
static_assert(offsetof(UMintPuntWeaponRanged, LWPSpawnDirectionAdjustmentStrengthOverride) == 8896, "Offset mismatch for UMintPuntWeaponRanged::LWPSpawnDirectionAdjustmentStrengthOverride");
static_assert(offsetof(UMintPuntWeaponRanged, LWPDirectionAdjustmentMaxAngleOverride) == 8900, "Offset mismatch for UMintPuntWeaponRanged::LWPDirectionAdjustmentMaxAngleOverride");
static_assert(offsetof(UMintPuntWeaponRanged, BulletPattern) == 8904, "Offset mismatch for UMintPuntWeaponRanged::BulletPattern");
static_assert(offsetof(UMintPuntWeaponRanged, RampingFireRateData) == 8920, "Offset mismatch for UMintPuntWeaponRanged::RampingFireRateData");
static_assert(offsetof(UMintPuntWeaponRanged, EnemyWarningWeaponImpactSFX) == 9288, "Offset mismatch for UMintPuntWeaponRanged::EnemyWarningWeaponImpactSFX");
static_assert(offsetof(UMintPuntWeaponRanged, LastFiredInterval) == 9512, "Offset mismatch for UMintPuntWeaponRanged::LastFiredInterval");
static_assert(offsetof(UMintPuntWeaponRanged, BeamNiagaraSystem) == 9520, "Offset mismatch for UMintPuntWeaponRanged::BeamNiagaraSystem");
static_assert(offsetof(UMintPuntWeaponRanged, bUseAthenaRecoil) == 9656, "Offset mismatch for UMintPuntWeaponRanged::bUseAthenaRecoil");
static_assert(offsetof(UMintPuntWeaponRanged, bFirstShotAccuracyCheckVehicleMovement) == 9657, "Offset mismatch for UMintPuntWeaponRanged::bFirstShotAccuracyCheckVehicleMovement");
static_assert(offsetof(UMintPuntWeaponRanged, FirstShotAccuracyMinWaitTime) == 9660, "Offset mismatch for UMintPuntWeaponRanged::FirstShotAccuracyMinWaitTime");
static_assert(offsetof(UMintPuntWeaponRanged, BulletCountForPerBulletRecoil) == 9664, "Offset mismatch for UMintPuntWeaponRanged::BulletCountForPerBulletRecoil");
static_assert(offsetof(UMintPuntWeaponRanged, RecoilProcessingShotCounter) == 9668, "Offset mismatch for UMintPuntWeaponRanged::RecoilProcessingShotCounter");
static_assert(offsetof(UMintPuntWeaponRanged, RecoilTimingCounter) == 9672, "Offset mismatch for UMintPuntWeaponRanged::RecoilTimingCounter");
static_assert(offsetof(UMintPuntWeaponRanged, BulletCountForPerBulletSpread) == 9676, "Offset mismatch for UMintPuntWeaponRanged::BulletCountForPerBulletSpread");
static_assert(offsetof(UMintPuntWeaponRanged, TimeRemainingForBulletSpread) == 9680, "Offset mismatch for UMintPuntWeaponRanged::TimeRemainingForBulletSpread");
static_assert(offsetof(UMintPuntWeaponRanged, FireAnimation) == 9800, "Offset mismatch for UMintPuntWeaponRanged::FireAnimation");
static_assert(offsetof(UMintPuntWeaponRanged, FireDownsightsAnimation) == 9808, "Offset mismatch for UMintPuntWeaponRanged::FireDownsightsAnimation");
static_assert(offsetof(UMintPuntWeaponRanged, FireFromCrouchWalkAnimation) == 9816, "Offset mismatch for UMintPuntWeaponRanged::FireFromCrouchWalkAnimation");
static_assert(offsetof(UMintPuntWeaponRanged, CockingAnimation) == 9824, "Offset mismatch for UMintPuntWeaponRanged::CockingAnimation");
static_assert(offsetof(UMintPuntWeaponRanged, WeaponFireMontage) == 9832, "Offset mismatch for UMintPuntWeaponRanged::WeaponFireMontage");
static_assert(offsetof(UMintPuntWeaponRanged, WeaponFireDownsightsMontage) == 9840, "Offset mismatch for UMintPuntWeaponRanged::WeaponFireDownsightsMontage");
static_assert(offsetof(UMintPuntWeaponRanged, WeaponFireFromCrouchWalkMontage) == 9848, "Offset mismatch for UMintPuntWeaponRanged::WeaponFireFromCrouchWalkMontage");
static_assert(offsetof(UMintPuntWeaponRanged, WeaponCockingMontage) == 9856, "Offset mismatch for UMintPuntWeaponRanged::WeaponCockingMontage");
static_assert(offsetof(UMintPuntWeaponRanged, BeamPSC) == 9864, "Offset mismatch for UMintPuntWeaponRanged::BeamPSC");
static_assert(offsetof(UMintPuntWeaponRanged, bTracerFXSupportsMultipleSequentialTracers) == 9872, "Offset mismatch for UMintPuntWeaponRanged::bTracerFXSupportsMultipleSequentialTracers");
static_assert(offsetof(UMintPuntWeaponRanged, TracerBeamFX) == 9880, "Offset mismatch for UMintPuntWeaponRanged::TracerBeamFX");
static_assert(offsetof(UMintPuntWeaponRanged, CrouchWalkSpeedThreshold) == 9888, "Offset mismatch for UMintPuntWeaponRanged::CrouchWalkSpeedThreshold");
static_assert(offsetof(UMintPuntWeaponRanged, bEnableRecoilDelay) == 9892, "Offset mismatch for UMintPuntWeaponRanged::bEnableRecoilDelay");
static_assert(offsetof(UMintPuntWeaponRanged, ReticleSpreadZeroingDistanceFromMuzzle) == 9896, "Offset mismatch for UMintPuntWeaponRanged::ReticleSpreadZeroingDistanceFromMuzzle");
static_assert(offsetof(UMintPuntWeaponRanged, OnScopedThirdPersonTargetingChanged) == 9920, "Offset mismatch for UMintPuntWeaponRanged::OnScopedThirdPersonTargetingChanged");
static_assert(offsetof(UMintPuntWeaponRanged, OnOverheatValueChanged) == 10000, "Offset mismatch for UMintPuntWeaponRanged::OnOverheatValueChanged");
static_assert(offsetof(UMintPuntWeaponRanged, OverheatState) == 10016, "Offset mismatch for UMintPuntWeaponRanged::OverheatState");
static_assert(offsetof(UMintPuntWeaponRanged, OverheatSyncData) == 10020, "Offset mismatch for UMintPuntWeaponRanged::OverheatSyncData");
static_assert(offsetof(UMintPuntWeaponRanged, OverheatedAnimation) == 10032, "Offset mismatch for UMintPuntWeaponRanged::OverheatedAnimation");
static_assert(offsetof(UMintPuntWeaponRanged, WeaponOverheatedAnimation) == 10040, "Offset mismatch for UMintPuntWeaponRanged::WeaponOverheatedAnimation");
static_assert(offsetof(UMintPuntWeaponRanged, bCooldownWhileOverheated) == 10048, "Offset mismatch for UMintPuntWeaponRanged::bCooldownWhileOverheated");
static_assert(offsetof(UMintPuntWeaponRanged, bShouldDisplayReticleOverheatIndicator) == 10049, "Offset mismatch for UMintPuntWeaponRanged::bShouldDisplayReticleOverheatIndicator");
static_assert(offsetof(UMintPuntWeaponRanged, OverheatValue) == 10052, "Offset mismatch for UMintPuntWeaponRanged::OverheatValue");
static_assert(offsetof(UMintPuntWeaponRanged, TimeHeatWasLastAdded) == 10084, "Offset mismatch for UMintPuntWeaponRanged::TimeHeatWasLastAdded");
static_assert(offsetof(UMintPuntWeaponRanged, TimeOverheatedBegan) == 10088, "Offset mismatch for UMintPuntWeaponRanged::TimeOverheatedBegan");
static_assert(offsetof(UMintPuntWeaponRanged, OverheatValueWhenVentingBegan) == 10092, "Offset mismatch for UMintPuntWeaponRanged::OverheatValueWhenVentingBegan");
static_assert(offsetof(UMintPuntWeaponRanged, bIsManuallyVentingWeapon) == 10096, "Offset mismatch for UMintPuntWeaponRanged::bIsManuallyVentingWeapon");
static_assert(offsetof(UMintPuntWeaponRanged, LWProjectile_DamageStart) == 10120, "Offset mismatch for UMintPuntWeaponRanged::LWProjectile_DamageStart");
static_assert(offsetof(UMintPuntWeaponRanged, LWProjectile_DamageDirection) == 10144, "Offset mismatch for UMintPuntWeaponRanged::LWProjectile_DamageDirection");
static_assert(offsetof(UMintPuntWeaponRanged, LWProjectile_ActivateRemovedTimestamp) == 10168, "Offset mismatch for UMintPuntWeaponRanged::LWProjectile_ActivateRemovedTimestamp");
static_assert(offsetof(UMintPuntWeaponRanged, bCacheAimPointOnFire) == 10229, "Offset mismatch for UMintPuntWeaponRanged::bCacheAimPointOnFire");
static_assert(offsetof(UMintPuntWeaponRanged, CachedAimPoint) == 10232, "Offset mismatch for UMintPuntWeaponRanged::CachedAimPoint");
static_assert(offsetof(UMintPuntWeaponRanged, CustomFiringSequenceLength) == 10256, "Offset mismatch for UMintPuntWeaponRanged::CustomFiringSequenceLength");
static_assert(offsetof(UMintPuntWeaponRanged, CustomFiringSequenceMinTimeBetween) == 10260, "Offset mismatch for UMintPuntWeaponRanged::CustomFiringSequenceMinTimeBetween");
static_assert(offsetof(UMintPuntWeaponRanged, CachedLODSettingsManager) == 10272, "Offset mismatch for UMintPuntWeaponRanged::CachedLODSettingsManager");
static_assert(offsetof(UMintPuntWeaponRanged, bUseTargetingBasedLOD) == 10296, "Offset mismatch for UMintPuntWeaponRanged::bUseTargetingBasedLOD");
static_assert(offsetof(UMintPuntWeaponRanged, ScopeRailMaterialIndex) == 10300, "Offset mismatch for UMintPuntWeaponRanged::ScopeRailMaterialIndex");
static_assert(offsetof(UMintPuntWeaponRanged, HideScopeRailMaterialParameterName) == 10304, "Offset mismatch for UMintPuntWeaponRanged::HideScopeRailMaterialParameterName");
