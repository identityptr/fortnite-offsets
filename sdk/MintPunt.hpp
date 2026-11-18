#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MintPunt
{
    struct FortChargingSet_MintPunt
    {
        static constexpr std::string_view Name = "FortChargingSet_MintPunt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentCharges = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentCharges", 0x48, "StructProperty"},
        }};
    };

    struct MintPuntChargedAbility
    {
        static constexpr std::string_view Name = "MintPuntChargedAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ChargeModifierGE = 0xB40;
            static constexpr std::uintptr_t MaxChargeCount = 0xB48;
            static constexpr std::uintptr_t ChargeRechargeCooldown = 0xB70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChargeModifierGE", 0xB40, "ClassProperty"},
            {"MaxChargeCount", 0xB48, "StructProperty"},
            {"ChargeRechargeCooldown", 0xB70, "StructProperty"},
        }};
    };

    struct MintPuntLayerAnimInstance
    {
        static constexpr std::string_view Name = "MintPuntLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NanaimoBarLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t IkAlpha = 0x11B0;
            static constexpr std::uintptr_t bChargeLvl2 = 0x11B8;
            static constexpr std::uintptr_t bUseIK = 0x11B9;
            static constexpr std::uintptr_t bChargeLvl1 = 0x11BA;
            static constexpr std::uintptr_t bIsCharging_BP = 0x11BB;
            static constexpr std::uintptr_t bApplyAO = 0x11BC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"IkAlpha", 0x11B0, "DoubleProperty"},
            {"bChargeLvl2", 0x11B8, "BoolProperty"},
            {"bUseIK", 0x11B9, "BoolProperty"},
            {"bChargeLvl1", 0x11BA, "BoolProperty"},
            {"bIsCharging_BP", 0x11BB, "BoolProperty"},
            {"bApplyAO", 0x11BC, "BoolProperty"},
        }};
    };

    struct MintPuntMovementMode_SlideBoost
    {
        static constexpr std::string_view Name = "MintPuntMovementMode_SlideBoost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t GE_Boost = 0x5A0;
            static constexpr std::uintptr_t HNDL_GE_Boost = 0x5A8;
            static constexpr std::uintptr_t LastBoostUpdateWorldTime = 0x5C0;
            static constexpr std::uintptr_t LastCommittedRuntimeID = 0x5C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GE_Boost", 0x5A0, "ClassProperty"},
            {"HNDL_GE_Boost", 0x5A8, "StructProperty"},
            {"LastBoostUpdateWorldTime", 0x5C0, "DoubleProperty"},
            {"LastCommittedRuntimeID", 0x5C8, "IntProperty"},
        }};
    };

    struct MintPuntProjectile
    {
        static constexpr std::string_view Name = "MintPuntProjectile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnHitResults = 0xB18;
            static constexpr std::uintptr_t FireStartLoc = 0xB30;
            static constexpr std::uintptr_t bExplodeOnPawnHit = 0xB48;
            static constexpr std::uintptr_t bIsOverlapPiercingHit = 0xB48;
            static constexpr std::uintptr_t bNoCollisionForNonOwningClients = 0xB48;
            static constexpr std::uintptr_t bUseAsyncExplosions = 0xB48;
            static constexpr std::uintptr_t bUseAsyncExplosionsOnlyOnce = 0xB48;
            static constexpr std::uintptr_t bEstimateCollisionForSniperTrace = 0xB49;
            static constexpr std::uintptr_t bIgnoreActorsAttachedToFiringPawn = 0xB49;
            static constexpr std::uintptr_t bPredictMaxSimulationDistanceExceeded = 0xB49;
            static constexpr std::uintptr_t bProcessLocalHits = 0xB49;
            static constexpr std::uintptr_t bSkipOnTouchedEventForInitialOwnerHit = 0xB49;
            static constexpr std::uintptr_t bTriggerTouchForAllSniperTraceHits = 0xB49;
            static constexpr std::uintptr_t bProcessOnServerForFortAIControllers = 0xB4A;
            static constexpr std::uintptr_t TimeToWaitForPawnHitBeforeKillOnServer = 0xB4C;
            static constexpr std::uintptr_t PredictedHitActor = 0xB60;
            static constexpr std::uintptr_t PredictedHitComp = 0xB68;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"PawnHitResults", 0xB18, "ArrayProperty"},
            {"FireStartLoc", 0xB30, "StructProperty"},
            {"bExplodeOnPawnHit", 0xB48, "BoolProperty"},
            {"bIsOverlapPiercingHit", 0xB48, "BoolProperty"},
            {"bNoCollisionForNonOwningClients", 0xB48, "BoolProperty"},
            {"bUseAsyncExplosions", 0xB48, "BoolProperty"},
            {"bUseAsyncExplosionsOnlyOnce", 0xB48, "BoolProperty"},
            {"bEstimateCollisionForSniperTrace", 0xB49, "BoolProperty"},
            {"bIgnoreActorsAttachedToFiringPawn", 0xB49, "BoolProperty"},
            {"bPredictMaxSimulationDistanceExceeded", 0xB49, "BoolProperty"},
            {"bProcessLocalHits", 0xB49, "BoolProperty"},
            {"bSkipOnTouchedEventForInitialOwnerHit", 0xB49, "BoolProperty"},
            {"bTriggerTouchForAllSniperTraceHits", 0xB49, "BoolProperty"},
            {"bProcessOnServerForFortAIControllers", 0xB4A, "BoolProperty"},
            {"TimeToWaitForPawnHitBeforeKillOnServer", 0xB4C, "FloatProperty"},
            {"PredictedHitActor", 0xB60, "ObjectProperty"},
            {"PredictedHitComp", 0xB68, "ObjectProperty"},
        }};
    };

    struct MintPuntTargetingTask_InjectReportedHit
    {
        static constexpr std::string_view Name = "MintPuntTargetingTask_InjectReportedHit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingTask";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxInjectDistance = 0x28;
            static constexpr std::uintptr_t RequiredAffiliations = 0x50;
            static constexpr std::uintptr_t GameplayTagReqs = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxInjectDistance", 0x28, "StructProperty"},
            {"RequiredAffiliations", 0x50, "ArrayProperty"},
            {"GameplayTagReqs", 0x60, "StructProperty"},
        }};
    };

    struct MintPuntWeaponRanged
    {
        static constexpr std::string_view Name = "MintPuntWeaponRanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t OnProjectileSpawned = 0x1A70;
            static constexpr std::uintptr_t OnRecoilAdded = 0x1A80;
            static constexpr std::uintptr_t OnBulletTracerNiagaraDataSent = 0x1A90;
            static constexpr std::uintptr_t OnBulletTracerBeamFXActivated = 0x1AA0;
            static constexpr std::uintptr_t ReplayActivationCue = 0x1AC8;
            static constexpr std::uintptr_t ReplayImpactCue = 0x1BA0;
            static constexpr std::uintptr_t PlayDelayedRecoilTimerHandle = 0x1C80;
            static constexpr std::uintptr_t PlayDelayedFiringAnimationTimerHandle = 0x1C90;
            static constexpr std::uintptr_t PlayDelayedSpreadTimerHandle = 0x1CA0;
            static constexpr std::uintptr_t bLWPNudgeHitOrigin = 0x1CB0;
            static constexpr std::uintptr_t LWPNudgeHitDistance = 0x1CB8;
            static constexpr std::uintptr_t TracerFXDataChannel = 0x1CE8;
            static constexpr std::uintptr_t NDCTracerFx = 0x1CF0;
            static constexpr std::uintptr_t MuzzleFXData = 0x1E28;
            static constexpr std::uintptr_t HitscanTracerFakeVelocity = 0x1ED8;
            static constexpr std::uintptr_t TracerTemplate = 0x1EE0;
            static constexpr std::uintptr_t bAllowAutomaticWeaponCatchup = 0x1EE8;
            static constexpr std::uintptr_t LocalFireRateModification = 0x1F08;
            static constexpr std::uintptr_t CurrentNumBullets = 0x1F0C;
            static constexpr std::uintptr_t ScopeTargetingMuzzleOffset = 0x1F10;
            static constexpr std::uintptr_t CurrentMuzzleBlockedLocation = 0x1F28;
            static constexpr std::uintptr_t CurrentDamageStart = 0x1F40;
            static constexpr std::uintptr_t MaxTargetingAimAdjustment = 0x1F48;
            static constexpr std::uintptr_t bAimFromMuzzleAtCloseRange = 0x1F60;
            static constexpr std::uintptr_t bAnchorReticleCenter = 0x1F60;
            static constexpr std::uintptr_t bHideAmmoCounterDuringTargeting = 0x1F60;
            static constexpr std::uintptr_t bShouldDisplayAmmoCounter = 0x1F60;
            static constexpr std::uintptr_t bShouldDisplayAmmoCounterDuringSecondaryFire = 0x1F60;
            static constexpr std::uintptr_t bShouldDisplayReticleAmmoCounter = 0x1F60;
            static constexpr std::uintptr_t bShouldHideMagazineAmmo = 0x1F60;
            static constexpr std::uintptr_t bShouldHideReserveAmmo = 0x1F60;
            static constexpr std::uintptr_t bAlwaysAimFromMuzzle = 0x1F61;
            static constexpr std::uintptr_t bAutoReloadBlocksManualReload = 0x1F61;
            static constexpr std::uintptr_t bShouldAimFromMuzzleAtCloseRange = 0x1F61;
            static constexpr std::uintptr_t bAllowTrySecondaryFireDuringReload = 0x1F62;
            static constexpr std::uintptr_t bDisableTargetingForHipFireFirstPerson = 0x1F63;
            static constexpr std::uintptr_t bMaintainAimLocationDuringTargeting = 0x1F63;
            static constexpr std::uintptr_t bUseFirstPersonTargeting = 0x1F63;
            static constexpr std::uintptr_t bUseScopeTargeting = 0x1F63;
            static constexpr std::uintptr_t HipFireFirstPersonMeshFOV = 0x1F64;
            static constexpr std::uintptr_t bUseScopedThirdPersonTargeting = 0x1F74;
            static constexpr std::uintptr_t ADSFireHeadToHandDistance = 0x1F7C;
            static constexpr std::uintptr_t bActivateRangeAbilityPerBurstShot = 0x1F80;
            static constexpr std::uintptr_t bPersistentFireFX = 0x1F80;
            static constexpr std::uintptr_t bSendSingleFireEventForLoopingMetaSoundWeapons = 0x1F80;
            static constexpr std::uintptr_t bUseBeamParticles = 0x1F80;
            static constexpr std::uintptr_t bUseImpactDecals = 0x1F80;
            static constexpr std::uintptr_t bUseImpactFXForProjectileOverlaps = 0x1F80;
            static constexpr std::uintptr_t bUseImpactFXForProjectiles = 0x1F80;
            static constexpr std::uintptr_t bUsePersistentBeam = 0x1F80;
            static constexpr std::uintptr_t bUseOverrideBaseSpread = 0x1F81;
            static constexpr std::uintptr_t bUseOverrideSpreadDownsightsMultiplier = 0x1F81;
            static constexpr std::uintptr_t bUseShellsParticles = 0x1F81;
            static constexpr std::uintptr_t bUseTracers = 0x1F81;
            static constexpr std::uintptr_t bIsMuzzleTraceNearWall = 0x1F82;
            static constexpr std::uintptr_t MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees = 0x1F84;
            static constexpr std::uintptr_t AimPitchMin = 0x1F88;
            static constexpr std::uintptr_t AimPitchMax = 0x1F8C;
            static constexpr std::uintptr_t MuzzleTraceNearWallThreshold = 0x1F90;
            static constexpr std::uintptr_t BeamSignificance = 0x1F9C;
            static constexpr std::uintptr_t ImpactSignificance = 0x1FB4;
            static constexpr std::uintptr_t DecalSignificance = 0x1FCC;
            static constexpr std::uintptr_t ScopeImpactEffectDistanceOffset = 0x1FE4;
            static constexpr std::uintptr_t MuzzlePSC = 0x1FE8;
            static constexpr std::uintptr_t ShellPSCMap = 0x1FF0;
            static constexpr std::uintptr_t BeamParticleSystem = 0x2000;
            static constexpr std::uintptr_t BeamNiagaraSystemAsset = 0x2008;
            static constexpr std::uintptr_t BeamSourceSocketName = 0x2028;
            static constexpr std::uintptr_t FortSpawnPropOverride = 0x2030;
            static constexpr std::uintptr_t FortSpawnPropAnimOverride = 0x2038;
            static constexpr std::uintptr_t DecalSizeMin = 0x2040;
            static constexpr std::uintptr_t DecalSizeMax = 0x2058;
            static constexpr std::uintptr_t DecalLifespanMin = 0x2070;
            static constexpr std::uintptr_t DecalLifespanMax = 0x2074;
            static constexpr std::uintptr_t DecalColorStart = 0x2078;
            static constexpr std::uintptr_t DecalColorEnd = 0x2088;
            static constexpr std::uintptr_t DecalMaterial = 0x2098;
            static constexpr std::uintptr_t DecalTexture = 0x20A0;
            static constexpr std::uintptr_t SurfaceAcceptingDecals = 0x20A8;
            static constexpr std::uintptr_t ShellReloadCounter = 0x20BC;
            static constexpr std::uintptr_t MaxTargetingAimAdjustPerSecond = 0x2108;
            static constexpr std::uintptr_t ScopePostProcessEnabled = 0x2348;
            static constexpr std::uintptr_t ScopePostProcessBlendWeight = 0x234C;
            static constexpr std::uintptr_t ScopePostProcessMaterial = 0x2350;
            static constexpr std::uintptr_t ScopePostProcessMaterialFromOptic = 0x2360;
            static constexpr std::uintptr_t LWPSpawnDirectionAdjustmentStrengthOverride = 0x2378;
            static constexpr std::uintptr_t LWPDirectionAdjustmentMaxAngleOverride = 0x237C;
            static constexpr std::uintptr_t bSendChargeSnapshotWithShot = 0x2380;
            static constexpr std::uintptr_t BulletPattern = 0x2388;
            static constexpr std::uintptr_t AltBulletPattern = 0x2398;
            static constexpr std::uintptr_t RampingFireRateData = 0x23A8;
            static constexpr std::uintptr_t EnemyWarningWeaponImpactSFX = 0x2530;
            static constexpr std::uintptr_t LastFiredInterval = 0x25D4;
            static constexpr std::uintptr_t BeamNiagaraSystem = 0x25D8;
            static constexpr std::uintptr_t bUseAthenaRecoil = 0x2658;
            static constexpr std::uintptr_t bFirstShotAccuracyCheckVehicleMovement = 0x2659;
            static constexpr std::uintptr_t bUseAthenaPerfectADSAim = 0x2659;
            static constexpr std::uintptr_t FirstShotAccuracyMinWaitTime = 0x265C;
            static constexpr std::uintptr_t BulletCountForPerBulletRecoil = 0x2660;
            static constexpr std::uintptr_t RecoilProcessingShotCounter = 0x2664;
            static constexpr std::uintptr_t RecoilTimingCounter = 0x2668;
            static constexpr std::uintptr_t BulletCountForPerBulletSpread = 0x266C;
            static constexpr std::uintptr_t TimeRemainingForBulletSpread = 0x2670;
            static constexpr std::uintptr_t FireAnimation = 0x2700;
            static constexpr std::uintptr_t FireDownsightsAnimation = 0x2708;
            static constexpr std::uintptr_t bShouldOverrideFireAnimation = 0x2710;
            static constexpr std::uintptr_t FireFromCrouchWalkAnimation = 0x2718;
            static constexpr std::uintptr_t CockingAnimation = 0x2720;
            static constexpr std::uintptr_t WeaponFireMontage = 0x2728;
            static constexpr std::uintptr_t WeaponFireDownsightsMontage = 0x2730;
            static constexpr std::uintptr_t WeaponFireFromCrouchWalkMontage = 0x2738;
            static constexpr std::uintptr_t WeaponCockingMontage = 0x2740;
            static constexpr std::uintptr_t BeamPSC = 0x2748;
            static constexpr std::uintptr_t bTracerFXSupportsMultipleSequentialTracers = 0x2750;
            static constexpr std::uintptr_t bTracerFXSupportsMultipleSimultaneousTracers = 0x2750;
            static constexpr std::uintptr_t TracerBeamFX = 0x2758;
            static constexpr std::uintptr_t CrouchWalkSpeedThreshold = 0x2760;
            static constexpr std::uintptr_t bEnableRecoilDelay = 0x2764;
            static constexpr std::uintptr_t ReticleSpreadZeroingDistanceFromMuzzle = 0x2768;
            static constexpr std::uintptr_t OnScopedThirdPersonTargetingChanged = 0x2780;
            static constexpr std::uintptr_t OnOverheatValueChanged = 0x27D0;
            static constexpr std::uintptr_t OverheatState = 0x27E0;
            static constexpr std::uintptr_t OverheatSyncData = 0x27E4;
            static constexpr std::uintptr_t OverheatedAnimation = 0x27F0;
            static constexpr std::uintptr_t WeaponOverheatedAnimation = 0x27F8;
            static constexpr std::uintptr_t bCooldownWhileOverheated = 0x2800;
            static constexpr std::uintptr_t bShouldDisplayReticleOverheatIndicator = 0x2801;
            static constexpr std::uintptr_t bAllowAutoProxyOverheatSimulation = 0x2802;
            static constexpr std::uintptr_t OverheatValue = 0x2804;
            static constexpr std::uintptr_t TimeHeatWasLastAdded = 0x2810;
            static constexpr std::uintptr_t TimeOverheatedBegan = 0x2814;
            static constexpr std::uintptr_t OverheatValueWhenVentingBegan = 0x2818;
            static constexpr std::uintptr_t bIsManuallyVentingWeapon = 0x281C;
            static constexpr std::uintptr_t LWProjectile_DamageStart = 0x2830;
            static constexpr std::uintptr_t LWProjectile_DamageDirection = 0x2848;
            static constexpr std::uintptr_t LWProjectile_ActivateRemovedTimestamp = 0x2860;
            static constexpr std::uintptr_t bCacheAimPointOnFire = 0x2901;
            static constexpr std::uintptr_t CachedAimPoint = 0x2908;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x2920;
            static constexpr std::uintptr_t CustomFiringSequenceMinTimeBetween = 0x2924;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0x2930;
            static constexpr std::uintptr_t bUseTargetingBasedLOD = 0x2968;
            static constexpr std::uintptr_t ScopeRailMaterialIndex = 0x296C;
            static constexpr std::uintptr_t HideScopeRailMaterialParameterName = 0x2970;
        };

        inline static constexpr std::array<PropertyInfo, 144> Properties{{
            {"OnProjectileSpawned", 0x1A70, "MulticastInlineDelegateProperty"},
            {"OnRecoilAdded", 0x1A80, "MulticastInlineDelegateProperty"},
            {"OnBulletTracerNiagaraDataSent", 0x1A90, "MulticastInlineDelegateProperty"},
            {"OnBulletTracerBeamFXActivated", 0x1AA0, "MulticastInlineDelegateProperty"},
            {"ReplayActivationCue", 0x1AC8, "StructProperty"},
            {"ReplayImpactCue", 0x1BA0, "StructProperty"},
            {"PlayDelayedRecoilTimerHandle", 0x1C80, "StructProperty"},
            {"PlayDelayedFiringAnimationTimerHandle", 0x1C90, "StructProperty"},
            {"PlayDelayedSpreadTimerHandle", 0x1CA0, "StructProperty"},
            {"bLWPNudgeHitOrigin", 0x1CB0, "BoolProperty"},
            {"LWPNudgeHitDistance", 0x1CB8, "StructProperty"},
            {"TracerFXDataChannel", 0x1CE8, "ObjectProperty"},
            {"NDCTracerFx", 0x1CF0, "StructProperty"},
            {"MuzzleFXData", 0x1E28, "StructProperty"},
            {"HitscanTracerFakeVelocity", 0x1ED8, "FloatProperty"},
            {"TracerTemplate", 0x1EE0, "ClassProperty"},
            {"bAllowAutomaticWeaponCatchup", 0x1EE8, "BoolProperty"},
            {"LocalFireRateModification", 0x1F08, "FloatProperty"},
            {"CurrentNumBullets", 0x1F0C, "IntProperty"},
            {"ScopeTargetingMuzzleOffset", 0x1F10, "StructProperty"},
            {"CurrentMuzzleBlockedLocation", 0x1F28, "StructProperty"},
            {"CurrentDamageStart", 0x1F40, "EnumProperty"},
            {"MaxTargetingAimAdjustment", 0x1F48, "StructProperty"},
            {"bAimFromMuzzleAtCloseRange", 0x1F60, "BoolProperty"},
            {"bAnchorReticleCenter", 0x1F60, "BoolProperty"},
            {"bHideAmmoCounterDuringTargeting", 0x1F60, "BoolProperty"},
            {"bShouldDisplayAmmoCounter", 0x1F60, "BoolProperty"},
            {"bShouldDisplayAmmoCounterDuringSecondaryFire", 0x1F60, "BoolProperty"},
            {"bShouldDisplayReticleAmmoCounter", 0x1F60, "BoolProperty"},
            {"bShouldHideMagazineAmmo", 0x1F60, "BoolProperty"},
            {"bShouldHideReserveAmmo", 0x1F60, "BoolProperty"},
            {"bAlwaysAimFromMuzzle", 0x1F61, "BoolProperty"},
            {"bAutoReloadBlocksManualReload", 0x1F61, "BoolProperty"},
            {"bShouldAimFromMuzzleAtCloseRange", 0x1F61, "BoolProperty"},
            {"bAllowTrySecondaryFireDuringReload", 0x1F62, "BoolProperty"},
            {"bDisableTargetingForHipFireFirstPerson", 0x1F63, "BoolProperty"},
            {"bMaintainAimLocationDuringTargeting", 0x1F63, "BoolProperty"},
            {"bUseFirstPersonTargeting", 0x1F63, "BoolProperty"},
            {"bUseScopeTargeting", 0x1F63, "BoolProperty"},
            {"HipFireFirstPersonMeshFOV", 0x1F64, "FloatProperty"},
            {"bUseScopedThirdPersonTargeting", 0x1F74, "BoolProperty"},
            {"ADSFireHeadToHandDistance", 0x1F7C, "FloatProperty"},
            {"bActivateRangeAbilityPerBurstShot", 0x1F80, "BoolProperty"},
            {"bPersistentFireFX", 0x1F80, "BoolProperty"},
            {"bSendSingleFireEventForLoopingMetaSoundWeapons", 0x1F80, "BoolProperty"},
            {"bUseBeamParticles", 0x1F80, "BoolProperty"},
            {"bUseImpactDecals", 0x1F80, "BoolProperty"},
            {"bUseImpactFXForProjectileOverlaps", 0x1F80, "BoolProperty"},
            {"bUseImpactFXForProjectiles", 0x1F80, "BoolProperty"},
            {"bUsePersistentBeam", 0x1F80, "BoolProperty"},
            {"bUseOverrideBaseSpread", 0x1F81, "BoolProperty"},
            {"bUseOverrideSpreadDownsightsMultiplier", 0x1F81, "BoolProperty"},
            {"bUseShellsParticles", 0x1F81, "BoolProperty"},
            {"bUseTracers", 0x1F81, "BoolProperty"},
            {"bIsMuzzleTraceNearWall", 0x1F82, "BoolProperty"},
            {"MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees", 0x1F84, "FloatProperty"},
            {"AimPitchMin", 0x1F88, "FloatProperty"},
            {"AimPitchMax", 0x1F8C, "FloatProperty"},
            {"MuzzleTraceNearWallThreshold", 0x1F90, "FloatProperty"},
            {"BeamSignificance", 0x1F9C, "StructProperty"},
            {"ImpactSignificance", 0x1FB4, "StructProperty"},
            {"DecalSignificance", 0x1FCC, "StructProperty"},
            {"ScopeImpactEffectDistanceOffset", 0x1FE4, "FloatProperty"},
            {"MuzzlePSC", 0x1FE8, "ObjectProperty"},
            {"ShellPSCMap", 0x1FF0, "MapProperty"},
            {"BeamParticleSystem", 0x2000, "ObjectProperty"},
            {"BeamNiagaraSystemAsset", 0x2008, "SoftObjectProperty"},
            {"BeamSourceSocketName", 0x2028, "NameProperty"},
            {"FortSpawnPropOverride", 0x2030, "ObjectProperty"},
            {"FortSpawnPropAnimOverride", 0x2038, "ObjectProperty"},
            {"DecalSizeMin", 0x2040, "StructProperty"},
            {"DecalSizeMax", 0x2058, "StructProperty"},
            {"DecalLifespanMin", 0x2070, "FloatProperty"},
            {"DecalLifespanMax", 0x2074, "FloatProperty"},
            {"DecalColorStart", 0x2078, "StructProperty"},
            {"DecalColorEnd", 0x2088, "StructProperty"},
            {"DecalMaterial", 0x2098, "ObjectProperty"},
            {"DecalTexture", 0x20A0, "ObjectProperty"},
            {"SurfaceAcceptingDecals", 0x20A8, "ArrayProperty"},
            {"ShellReloadCounter", 0x20BC, "IntProperty"},
            {"MaxTargetingAimAdjustPerSecond", 0x2108, "StructProperty"},
            {"ScopePostProcessEnabled", 0x2348, "BoolProperty"},
            {"ScopePostProcessBlendWeight", 0x234C, "FloatProperty"},
            {"ScopePostProcessMaterial", 0x2350, "ArrayProperty"},
            {"ScopePostProcessMaterialFromOptic", 0x2360, "ArrayProperty"},
            {"LWPSpawnDirectionAdjustmentStrengthOverride", 0x2378, "FloatProperty"},
            {"LWPDirectionAdjustmentMaxAngleOverride", 0x237C, "FloatProperty"},
            {"bSendChargeSnapshotWithShot", 0x2380, "BoolProperty"},
            {"BulletPattern", 0x2388, "ArrayProperty"},
            {"AltBulletPattern", 0x2398, "ArrayProperty"},
            {"RampingFireRateData", 0x23A8, "StructProperty"},
            {"EnemyWarningWeaponImpactSFX", 0x2530, "ObjectProperty"},
            {"LastFiredInterval", 0x25D4, "FloatProperty"},
            {"BeamNiagaraSystem", 0x25D8, "ObjectProperty"},
            {"bUseAthenaRecoil", 0x2658, "BoolProperty"},
            {"bFirstShotAccuracyCheckVehicleMovement", 0x2659, "BoolProperty"},
            {"bUseAthenaPerfectADSAim", 0x2659, "BoolProperty"},
            {"FirstShotAccuracyMinWaitTime", 0x265C, "FloatProperty"},
            {"BulletCountForPerBulletRecoil", 0x2660, "FloatProperty"},
            {"RecoilProcessingShotCounter", 0x2664, "FloatProperty"},
            {"RecoilTimingCounter", 0x2668, "FloatProperty"},
            {"BulletCountForPerBulletSpread", 0x266C, "FloatProperty"},
            {"TimeRemainingForBulletSpread", 0x2670, "FloatProperty"},
            {"FireAnimation", 0x2700, "ObjectProperty"},
            {"FireDownsightsAnimation", 0x2708, "ObjectProperty"},
            {"bShouldOverrideFireAnimation", 0x2710, "BoolProperty"},
            {"FireFromCrouchWalkAnimation", 0x2718, "ObjectProperty"},
            {"CockingAnimation", 0x2720, "ObjectProperty"},
            {"WeaponFireMontage", 0x2728, "ObjectProperty"},
            {"WeaponFireDownsightsMontage", 0x2730, "ObjectProperty"},
            {"WeaponFireFromCrouchWalkMontage", 0x2738, "ObjectProperty"},
            {"WeaponCockingMontage", 0x2740, "ObjectProperty"},
            {"BeamPSC", 0x2748, "ObjectProperty"},
            {"bTracerFXSupportsMultipleSequentialTracers", 0x2750, "BoolProperty"},
            {"bTracerFXSupportsMultipleSimultaneousTracers", 0x2750, "BoolProperty"},
            {"TracerBeamFX", 0x2758, "ObjectProperty"},
            {"CrouchWalkSpeedThreshold", 0x2760, "FloatProperty"},
            {"bEnableRecoilDelay", 0x2764, "BoolProperty"},
            {"ReticleSpreadZeroingDistanceFromMuzzle", 0x2768, "FloatProperty"},
            {"OnScopedThirdPersonTargetingChanged", 0x2780, "MulticastInlineDelegateProperty"},
            {"OnOverheatValueChanged", 0x27D0, "MulticastInlineDelegateProperty"},
            {"OverheatState", 0x27E0, "EnumProperty"},
            {"OverheatSyncData", 0x27E4, "StructProperty"},
            {"OverheatedAnimation", 0x27F0, "ObjectProperty"},
            {"WeaponOverheatedAnimation", 0x27F8, "ObjectProperty"},
            {"bCooldownWhileOverheated", 0x2800, "BoolProperty"},
            {"bShouldDisplayReticleOverheatIndicator", 0x2801, "BoolProperty"},
            {"bAllowAutoProxyOverheatSimulation", 0x2802, "BoolProperty"},
            {"OverheatValue", 0x2804, "FloatProperty"},
            {"TimeHeatWasLastAdded", 0x2810, "FloatProperty"},
            {"TimeOverheatedBegan", 0x2814, "FloatProperty"},
            {"OverheatValueWhenVentingBegan", 0x2818, "FloatProperty"},
            {"bIsManuallyVentingWeapon", 0x281C, "BoolProperty"},
            {"LWProjectile_DamageStart", 0x2830, "StructProperty"},
            {"LWProjectile_DamageDirection", 0x2848, "StructProperty"},
            {"LWProjectile_ActivateRemovedTimestamp", 0x2860, "FloatProperty"},
            {"bCacheAimPointOnFire", 0x2901, "BoolProperty"},
            {"CachedAimPoint", 0x2908, "StructProperty"},
            {"CustomFiringSequenceLength", 0x2920, "IntProperty"},
            {"CustomFiringSequenceMinTimeBetween", 0x2924, "FloatProperty"},
            {"CachedLODSettingsManager", 0x2930, "InterfaceProperty"},
            {"bUseTargetingBasedLOD", 0x2968, "BoolProperty"},
            {"ScopeRailMaterialIndex", 0x296C, "IntProperty"},
            {"HideScopeRailMaterialParameterName", 0x2970, "NameProperty"},
        }};
    };

}
