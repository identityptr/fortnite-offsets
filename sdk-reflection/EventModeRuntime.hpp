#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EventModeRuntime
{
    struct FortGameFrameworkComponent_EventMode
    {
        static constexpr std::string_view Name = "FortGameFrameworkComponent_EventMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivatorAsset = 0x120;
            static constexpr std::uintptr_t UIExtensions = 0x140;
            static constexpr std::uintptr_t TaggedUIExtensions = 0x150;
            static constexpr std::uintptr_t FocusActors = 0x160;
            static constexpr std::uintptr_t InputComponent = 0x178;
            static constexpr std::uintptr_t CachedWidgetData = 0x180;
            static constexpr std::uintptr_t CurrentlyFocusedActor = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ActivatorAsset", 0x120, "SoftObjectProperty"},
            {"UIExtensions", 0x140, "ArrayProperty"},
            {"TaggedUIExtensions", 0x150, "MapProperty"},
            {"FocusActors", 0x160, "ArrayProperty"},
            {"InputComponent", 0x178, "ObjectProperty"},
            {"CachedWidgetData", 0x180, "ArrayProperty"},
            {"CurrentlyFocusedActor", 0x190, "SoftObjectProperty"},
        }};
    };

    struct FortWeapon_EventMode
    {
        static constexpr std::string_view Name = "FortWeapon_EventMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWeaponRateOfFireChanged = 0x2C0;
            static constexpr std::uintptr_t OnWeaponRateOfFireScaleChanged = 0x2D0;
            static constexpr std::uintptr_t OnPressTrigger = 0x2F0;
            static constexpr std::uintptr_t OnReleaseTrigger = 0x300;
            static constexpr std::uintptr_t TimeToEquip = 0x348;
            static constexpr std::uintptr_t bNeverUpdateLastFireTimeOnImpactForLocalClient = 0x34C;
            static constexpr std::uintptr_t bIsEquippingWeapon = 0x360;
            static constexpr std::uintptr_t IsEquippingWeaponChanged = 0x368;
            static constexpr std::uintptr_t bIsChargingWeapon = 0x378;
            static constexpr std::uintptr_t bCheckCollisionsWithoutAbility = 0x379;
            static constexpr std::uintptr_t bDisableEquipAnimation = 0x379;
            static constexpr std::uintptr_t bIsReloadingWeapon = 0x379;
            static constexpr std::uintptr_t bIsAimingConsumable = 0x3A0;
            static constexpr std::uintptr_t OnLocalAmmoChanged = 0x420;
            static constexpr std::uintptr_t OnLocalReloadStarted = 0x430;
            static constexpr std::uintptr_t OnReloadStarted = 0x440;
            static constexpr std::uintptr_t OnLocalReloadCancelled = 0x468;
            static constexpr std::uintptr_t OnLocalTargetingChanged = 0x490;
            static constexpr std::uintptr_t OnTargetingChanged = 0x4A0;
            static constexpr std::uintptr_t OnSecondaryAbilityToggled = 0x4B0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x4C0;
            static constexpr std::uintptr_t OnWeaponSetActorHiddenInGame = 0x4E8;
            static constexpr std::uintptr_t OnWeaponFireAudio = 0x4F8;
            static constexpr std::uintptr_t OnWeaponFireAudioVisuals = 0x508;
            static constexpr std::uintptr_t OnModAddedToWeapon = 0x518;
            static constexpr std::uintptr_t OnModRemovedFromWeapon = 0x528;
            static constexpr std::uintptr_t OnWeaponModSlotsEquipped = 0x538;
            static constexpr std::uintptr_t OnWeaponModSlotsUnequipped = 0x548;
            static constexpr std::uintptr_t OnConsumeAmmo = 0x598;
            static constexpr std::uintptr_t OnTryReload = 0x5A8;
            static constexpr std::uintptr_t OnReticleColorChanged = 0x5C8;
            static constexpr std::uintptr_t bPreventRuntimeChangeToReticleDisplays = 0x6C8;
            static constexpr std::uintptr_t bShouldDrawAmmoCountForFirstPersonCamera = 0x6C8;
            static constexpr std::uintptr_t bShouldDrawReticleForFirstPersonCamera = 0x6C8;
            static constexpr std::uintptr_t bUseAttributeCaching = 0x6C8;
            static constexpr std::uintptr_t WeaponData = 0x6D0;
            static constexpr std::uintptr_t CosmeticOverrideWeaponData = 0x6D8;
            static constexpr std::uintptr_t bImpactFXAttachedToHitActor = 0x6E0;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x6E8;
            static constexpr std::uintptr_t HitNotifyAudioBank = 0x6F8;
            static constexpr std::uintptr_t SoundLibraryComponent = 0x700;
            static constexpr std::uintptr_t bRemoveAbilitiesWhenRemovedFromInventory = 0x718;
            static constexpr std::uintptr_t GrantedAbilityRemovalPolicy = 0x719;
            static constexpr std::uintptr_t BP_OnWeaponCosmeticsReady = 0x748;
            static constexpr std::uintptr_t EquippedWeaponDestroyWrapperRepCounter = 0x7DC;
            static constexpr std::uintptr_t EquippedWeaponDestroyedGameplayCue = 0x7E0;
            static constexpr std::uintptr_t FireModeOverride = 0x7E4;
            static constexpr std::uintptr_t OnFireModeChanged = 0x7E8;
            static constexpr std::uintptr_t OnPlayImpactFXDelegate = 0x820;
            static constexpr std::uintptr_t OnBeamFiredDelegate = 0x830;
            static constexpr std::uintptr_t CachedImpactDetails = 0x898;
            static constexpr std::uintptr_t MuzzleFlashDelayForAnimationTime = 0x8D4;
            static constexpr std::uintptr_t PersistentFXStartTime = 0x8D8;
            static constexpr std::uintptr_t PersistentSFXStartTime = 0x8DC;
            static constexpr std::uintptr_t MinimumTimeForPersistentFX = 0x8E0;
            static constexpr std::uintptr_t OverrideItemWrapSoftPtr = 0x8E8;
            static constexpr std::uintptr_t DevicePropertyHandles = 0x908;
            static constexpr std::uintptr_t ApplicableDeviceProperties = 0x918;
            static constexpr std::uintptr_t WeaponReduceMeshWorkSetting = 0x988;
            static constexpr std::uintptr_t bShouldDrawNativeReticle = 0x9A0;
            static constexpr std::uintptr_t bShouldAlwaysDrawNativeMuzzleBlockedIndicator = 0x9A1;
            static constexpr std::uintptr_t bShouldForceCheckCollisions = 0x9A2;
            static constexpr std::uintptr_t ReticleImage = 0x9A8;
            static constexpr std::uintptr_t AutoFireReticleImage = 0x9B0;
            static constexpr std::uintptr_t ReticleDefaultColor = 0x9B8;
            static constexpr std::uintptr_t ReticleEnemyColor = 0x9BC;
            static constexpr std::uintptr_t ReticleEnemyDefaultColor = 0x9C0;
            static constexpr std::uintptr_t ReticleBuildingColor = 0x9C4;
            static constexpr std::uintptr_t ReticleNoTargetColor = 0x9C8;
            static constexpr std::uintptr_t HitNotifyReticleImage = 0x9D0;
            static constexpr std::uintptr_t HitNotifyLocationReticleImage = 0x9D8;
            static constexpr std::uintptr_t CriticalHitNotifyLocationReticleImage = 0x9E0;
            static constexpr std::uintptr_t ReticleCenterImage = 0x9E8;
            static constexpr std::uintptr_t ReticleCenterPerfectAimImage = 0x9F0;
            static constexpr std::uintptr_t ReticleInvalidTargetImage = 0x9F8;
            static constexpr std::uintptr_t MuzzleBlockedReticleImage = 0xA00;
            static constexpr std::uintptr_t ReticleAltCenterImage = 0xA08;
            static constexpr std::uintptr_t ReticleOuterImage = 0xA10;
            static constexpr std::uintptr_t ReticleAltOuterImage = 0xA18;
            static constexpr std::uintptr_t ReticleDefaultPrimaryStrikeAngle = 0xA20;
            static constexpr std::uintptr_t ReticleDefaultSecondaryStrikeAngle = 0xA24;
            static constexpr std::uintptr_t bSupportsAutofireAtReticleTarget = 0xA28;
            static constexpr std::uintptr_t bEnableAutofireForAnyWeaponItemDefinition = 0xA29;
            static constexpr std::uintptr_t bSupportsTapToFireMode = 0xA2A;
            static constexpr std::uintptr_t CameraBase3PClass = 0xA30;
            static constexpr std::uintptr_t CameraTargeting3PClass = 0xA38;
            static constexpr std::uintptr_t CameraTargeting3PReloadClass = 0xA40;
            static constexpr std::uintptr_t CameraBase1PClass = 0xA48;
            static constexpr std::uintptr_t CameraTargeting1PClass = 0xA50;
            static constexpr std::uintptr_t DestroyedSound = 0xA58;
            static constexpr std::uintptr_t OutOfAmmoSound = 0xA60;
            static constexpr std::uintptr_t ReloadSounds = 0xA68;
            static constexpr std::uintptr_t PrimaryFireSound1P = 0xA80;
            static constexpr std::uintptr_t PrimaryFireSound = 0xA88;
            static constexpr std::uintptr_t PrimaryFireStopSound1P = 0xAA0;
            static constexpr std::uintptr_t PrimaryFireStopSound = 0xAA8;
            static constexpr std::uintptr_t SecondaryFireSound = 0xAC0;
            static constexpr std::uintptr_t SecondaryFireStopSound = 0xAD8;
            static constexpr std::uintptr_t ChargeFireSound1P = 0xAF0;
            static constexpr std::uintptr_t ChargeFireSound = 0xB08;
            static constexpr std::uintptr_t TargetingStartSound = 0xB20;
            static constexpr std::uintptr_t TargetingEndSound = 0xB28;
            static constexpr std::uintptr_t PrimaryFireSoundFadeOutTime = 0xB30;
            static constexpr std::uintptr_t IndestructibleHitSound = 0xB38;
            static constexpr std::uintptr_t ImpactPhysicalSurfaceSounds = 0xB40;
            static constexpr std::uintptr_t ImpactPhysicalSurfaceEffects = 0xC60;
            static constexpr std::uintptr_t ImpactNiagaraPhysicalSurfaceEffectAssets = 0xD78;
            static constexpr std::uintptr_t NDCImpactFX = 0xD88;
            static constexpr std::uintptr_t ImpactArraySupportData = 0xF68;
            static constexpr std::uintptr_t ImpactCameraShake = 0xF78;
            static constexpr std::uintptr_t PrimaryForceFeedbackEffect = 0xF80;
            static constexpr std::uintptr_t SecondaryForceFeedbackEffect = 0xF88;
            static constexpr std::uintptr_t PrimaryImpactForceFeedbackEffect = 0xF90;
            static constexpr std::uintptr_t SecondaryImpactForceFeedbackEffect = 0xF98;
            static constexpr std::uintptr_t ImpactNiagaraPhysicalSurfaceEffectInstances = 0xFA0;
            static constexpr std::uintptr_t DataStoreManager = 0xFB0;
            static constexpr std::uintptr_t FireAudioChannels = 0xFB8;
            static constexpr std::uintptr_t ReloadAudioChannels = 0xFD8;
            static constexpr std::uintptr_t TargetingAudioChannels = 0xFF0;
            static constexpr std::uintptr_t SoundIndicatorComponent = 0x1000;
            static constexpr std::uintptr_t CurrentGunFireIndex = 0x1008;
            static constexpr std::uintptr_t WeaponMesh = 0x1010;
            static constexpr std::uintptr_t AllWeaponMeshes = 0x1018;
            static constexpr std::uintptr_t DefaultWeaponMaterials = 0x1028;
            static constexpr std::uintptr_t OriginalMaterialMap = 0x1038;
            static constexpr std::uintptr_t FireAudioChannelWantsToPlay = 0x1048;
            static constexpr std::uintptr_t ProtoWeaponParentMaterial = 0x1058;
            static constexpr std::uintptr_t WrapSectionMask = 0x1078;
            static constexpr std::uintptr_t bUsingSecondaryFireAudio = 0x107C;
            static constexpr std::uintptr_t bHasCachedAdditionalMeshes = 0x107D;
            static constexpr std::uintptr_t CurrentReticleColor = 0x1080;
            static constexpr std::uintptr_t OpticRuntimeData = 0x1084;
            static constexpr std::uintptr_t CurrentDamageStartLocation = 0x1090;
            static constexpr std::uintptr_t CurrentAdjustedAimDirection = 0x10A8;
            static constexpr std::uintptr_t CurrentProjectedImpactDistance = 0x10C0;
            static constexpr std::uintptr_t FireFXSignificance = 0x10C4;
            static constexpr std::uintptr_t LastFireTime = 0x10DC;
            static constexpr std::uintptr_t LastSecondaryFireTime = 0x10E0;
            static constexpr std::uintptr_t LastFireTimeVerified = 0x10E4;
            static constexpr std::uintptr_t bAllowTargeting = 0x10F8;
            static constexpr std::uintptr_t bExitTargetingWhenPrimaryIsFired = 0x10F8;
            static constexpr std::uintptr_t bFireFXTriggered = 0x10F8;
            static constexpr std::uintptr_t bForceCameraTargetSource = 0x10F8;
            static constexpr std::uintptr_t bIsPlayingFireFX = 0x10F8;
            static constexpr std::uintptr_t bIsTargeting = 0x10F8;
            static constexpr std::uintptr_t bUsesMetaSoundForMuzzleFireFx = 0x10F8;
            static constexpr std::uintptr_t bWeaponFireCustomAudioTriggered = 0x10F8;
            static constexpr std::uintptr_t bAllowReloadWhenFull = 0x10F9;
            static constexpr std::uintptr_t bClientWaitForServerMagazineAmmo = 0x10F9;
            static constexpr std::uintptr_t bTraceThroughPawns = 0x10F9;
            static constexpr std::uintptr_t bTraceThroughWorld = 0x10F9;
            static constexpr std::uintptr_t bUseProjectileTrace = 0x10F9;
            static constexpr std::uintptr_t bUseVariableFocalDistanceTargeting = 0x10F9;
            static constexpr std::uintptr_t bUseWeaponTraceForReticle = 0x10F9;
            static constexpr std::uintptr_t bWeaponTraceCanBeBlockedByPassthroughTag = 0x10F9;
            static constexpr std::uintptr_t bIsTryingAutoReload = 0x10FA;
            static constexpr std::uintptr_t bIsTryingCheckAmmoOnTryToFireReload = 0x10FA;
            static constexpr std::uintptr_t BlendingOutPawnMontage = 0x1100;
            static constexpr std::uintptr_t bIsInReleaseSecondaryFireScope = 0x1108;
            static constexpr std::uintptr_t TimerIntervalAdjustment = 0x110C;
            static constexpr std::uintptr_t InputQueueTimePercent = 0x1110;
            static constexpr std::uintptr_t LastTargetingTransitionTime = 0x1114;
            static constexpr std::uintptr_t TargetSourceOffset = 0x1118;
            static constexpr std::uintptr_t TargetSourceOffsetWhileCrouched = 0x1130;
            static constexpr std::uintptr_t TargetSourceOffsetWhileTargeting = 0x1148;
            static constexpr std::uintptr_t TraceThroughPawnsLimit = 0x1160;
            static constexpr std::uintptr_t TraceThroughBuildingsLimit = 0x1164;
            static constexpr std::uintptr_t TraceThroughLandscapeLimit = 0x1168;
            static constexpr std::uintptr_t ProjectilePitchOffset = 0x116C;
            static constexpr std::uintptr_t LastReloadTime = 0x1170;
            static constexpr std::uintptr_t LastSuccessfulReloadTime = 0x1174;
            static constexpr std::uintptr_t CurrentReloadDuration = 0x1178;
            static constexpr std::uintptr_t ItemEntryGuid = 0x1180;
            static constexpr std::uintptr_t TrackerGuid = 0x1190;
            static constexpr std::uintptr_t WeaponLevel = 0x11A0;
            static constexpr std::uintptr_t CachedForcedLeanComponent = 0x11A8;
            static constexpr std::uintptr_t AmmoCount = 0x11E0;
            static constexpr std::uintptr_t PhantomReserveAmmo = 0x11E4;
            static constexpr std::uintptr_t BurstFireCounter = 0x1200;
            static constexpr std::uintptr_t ChargeTime = 0x1204;
            static constexpr std::uintptr_t AccumulatedChargeTime = 0x1208;
            static constexpr std::uintptr_t LastChargeTime = 0x120C;
            static constexpr std::uintptr_t StartChargeGameplayCue = 0x1210;
            static constexpr std::uintptr_t MaxChargeGameplayCue = 0x1214;
            static constexpr std::uintptr_t OutOfAmmoTextOverrideFailTag = 0x1218;
            static constexpr std::uintptr_t NoSpareAmmoToReloadTextOverrideFailTag = 0x121C;
            static constexpr std::uintptr_t FireCanInterruptEquipQuery = 0x1220;
            static constexpr std::uintptr_t bIsFireDepthEnabled = 0x1268;
            static constexpr std::uintptr_t FireDepthAnimData = 0x1270;
            static constexpr std::uintptr_t CurrentShotLogIndex = 0x1278;
            static constexpr std::uintptr_t ShotLogFlags = 0x1280;
            static constexpr std::uintptr_t bInitializedWeaponItem = 0x1290;
            static constexpr std::uintptr_t bPendingDestroyDueToDurabilityOrStackCount = 0x1290;
            static constexpr std::uintptr_t bCompletedAppliedAlterationsLoad = 0x1291;
            static constexpr std::uintptr_t bCompletedWeaponLoad = 0x1291;
            static constexpr std::uintptr_t bCosmeticOverlayApplied = 0x1291;
            static constexpr std::uintptr_t bIsCosmeticGatedLocally = 0x1291;
            static constexpr std::uintptr_t bIsCosmeticLimited = 0x1291;
            static constexpr std::uintptr_t bNeedsReapplyMaterialOverrides = 0x1291;
            static constexpr std::uintptr_t bCanDeferSecondaryFireInput = 0x1292;
            static constexpr std::uintptr_t bEnableNativeChargeUp = 0x1292;
            static constexpr std::uintptr_t bReplicatedAppliedAlterationsWithNoInstigator = 0x1292;
            static constexpr std::uintptr_t bSecondaryFireAlwaysCancelSwimSprint = 0x1292;
            static constexpr std::uintptr_t bShouldFullyApplyVariantsOnEquip = 0x1292;
            static constexpr std::uintptr_t bAttachToRootOnDestruction = 0x1293;
            static constexpr std::uintptr_t bHideWeaponOnDestruction = 0x1293;
            static constexpr std::uintptr_t bUseOriginForDestructionInterpolation = 0x1293;
            static constexpr std::uintptr_t AttachToRootOnDestructionOffset = 0x1298;
            static constexpr std::uintptr_t AttachToRootOnDestructionInterpSpeed = 0x12B0;
            static constexpr std::uintptr_t bShowWhenHolstered = 0x12B4;
            static constexpr std::uintptr_t CustomPartsToShowWhenHolstered = 0x12B8;
            static constexpr std::uintptr_t ChargeStatusPack = 0x12C8;
            static constexpr std::uintptr_t AttachedTrajectoryIndicator = 0x12F8;
            static constexpr std::uintptr_t ActiveAbility = 0x1300;
            static constexpr std::uintptr_t PrimaryAbilitySpecHandle = 0x1308;
            static constexpr std::uintptr_t SecondaryAbilitySpecHandle = 0x1320;
            static constexpr std::uintptr_t ReloadAbilitySpecHandle = 0x1338;
            static constexpr std::uintptr_t ImpactAbilitySpecHandle = 0x1350;
            static constexpr std::uintptr_t ReticleTraceOverrideSpecHandle = 0x1368;
            static constexpr std::uintptr_t EquippedAbilityHandles = 0x1380;
            static constexpr std::uintptr_t EquippedAbilitySetHandles = 0x1390;
            static constexpr std::uintptr_t AppliedAlterations = 0x13A0;
            static constexpr std::uintptr_t WeaponModSlots = 0x13B0;
            static constexpr std::uintptr_t ItemOverrideData = 0x13C0;
            static constexpr std::uintptr_t EquippedWeaponModSlots = 0x1410;
            static constexpr std::uintptr_t ModRuntimeDataCache = 0x1420;
            static constexpr std::uintptr_t ModDebugComp = 0x1428;
            static constexpr std::uintptr_t OpticDefinition = 0x1430;
            static constexpr std::uintptr_t OpticConfig = 0x1438;
            static constexpr std::uintptr_t PreviousWeaponVariants = 0x1478;
            static constexpr std::uintptr_t AppliedItemWrap = 0x14B8;
            static constexpr std::uintptr_t CachedFXManager = 0x14C0;
            static constexpr std::uintptr_t CachedSignificanceManager = 0x14C8;
            static constexpr std::uintptr_t MuzzleSocketName = 0x1500;
            static constexpr std::uintptr_t MuzzleFalloffSocketName = 0x1504;
            static constexpr std::uintptr_t WeaponHandSocketNameOverride = 0x1508;
            static constexpr std::uintptr_t LeftHandWeaponHandSocketNameOverride = 0x150C;
            static constexpr std::uintptr_t WeaponHandSocketPartOverrides = 0x1510;
            static constexpr std::uintptr_t bForceOverrideGenerateOverlapEvents = 0x1524;
            static constexpr std::uintptr_t MaxWeaponSwitchNetworkWaitTime = 0x1628;
            static constexpr std::uintptr_t MaxWeaponSwitchNetworkWaitTimeHotfix = 0x1630;
            static constexpr std::uintptr_t MaxWeaponAttackNetworkWaitTime = 0x1658;
            static constexpr std::uintptr_t LastFireAbilityTime = 0x165C;
            static constexpr std::uintptr_t OnGetAimRotOverride = 0x1698;
            static constexpr std::uintptr_t OnAlterationAdded = 0x16A8;
            static constexpr std::uintptr_t ModLeftHandPoseOffsets = 0x16B8;
            static constexpr std::uintptr_t ModReloadAnimData = 0x16C8;
            static constexpr std::uintptr_t EquipAnimation = 0x16D8;
            static constexpr std::uintptr_t FirstTimeEquipAnimation = 0x16E0;
            static constexpr std::uintptr_t WeaponFirstTimeEquipAnimation = 0x16E8;
            static constexpr std::uintptr_t FirstTimeEquipTag = 0x16F0;
            static constexpr std::uintptr_t bResetOnItemRemoval = 0x16F4;
            static constexpr std::uintptr_t ReloadAnimation = 0x16F8;
            static constexpr std::uintptr_t CustomReloadAnimationPerAmmoToFill = 0x1738;
            static constexpr std::uintptr_t PrimaryAbilityAnimation = 0x1748;
            static constexpr std::uintptr_t SecondaryAbilityAnimation = 0x1750;
            static constexpr std::uintptr_t WeaponEquipMontage = 0x1758;
            static constexpr std::uintptr_t WeaponReloadMontage = 0x1760;
            static constexpr std::uintptr_t CustomWeaponReloadMontagePerAmmoToFill = 0x1768;
            static constexpr std::uintptr_t WeaponPrimaryAbilityMontage = 0x1778;
            static constexpr std::uintptr_t WeaponSecondaryAbilityMontage = 0x1780;
            static constexpr std::uintptr_t FirstPersonData = 0x1788;
            static constexpr std::uintptr_t PoseOffsetAnimSequence = 0x17B8;
            static constexpr std::uintptr_t PoseOffsetAnimSequenceFemaleOverride = 0x17C0;
            static constexpr std::uintptr_t WeaponCoreAnimation = 0x17C8;
            static constexpr std::uintptr_t WeaponCoreAnimationOverride = 0x17C9;
            static constexpr std::uintptr_t HandGripType = 0x17CA;
            static constexpr std::uintptr_t WeaponPawnAnimSet = 0x17D0;
            static constexpr std::uintptr_t PlayerAnimAssets = 0x17D8;
            static constexpr std::uintptr_t ProceduralLayeringData = 0x17E8;
            static constexpr std::uintptr_t PlayerAnimAssetsOverride = 0x1818;
            static constexpr std::uintptr_t bResetAnimAssetsOverrideOnUnEquip = 0x1828;
            static constexpr std::uintptr_t WeaponPawnAnimLayerOverlayClass = 0x1830;
            static constexpr std::uintptr_t WeaponAdditiveAnimSet = 0x1838;
            static constexpr std::uintptr_t PlayerAnimProxyTable = 0x1840;
            static constexpr std::uintptr_t HitReactionProxyTable = 0x1848;
            static constexpr std::uintptr_t bEnableTickAnimMontagesOnlyWhenOffscreen = 0x1850;
            static constexpr std::uintptr_t MaxRangeToEnableTickAnimMontagesWhenOffscreen = 0x1854;
            static constexpr std::uintptr_t WeaponPawnAnimsetOverride = 0x1858;
            static constexpr std::uintptr_t WeaponAdditiveAnimsetOverride = 0x1860;
            static constexpr std::uintptr_t UnableToPerformActionMontageOverride = 0x18A0;
            static constexpr std::uintptr_t ActiveFireMode = 0x18A8;
            static constexpr std::uintptr_t FireModeData_HipFire = 0x18C8;
            static constexpr std::uintptr_t FireModeData_AimDownSight = 0x18E8;
            static constexpr std::uintptr_t FireModeData_Override = 0x1908;
            static constexpr std::uintptr_t ItemWrapModifier = 0x1950;
            static constexpr std::uintptr_t LockOnTargetCandidate = 0x1998;
            static constexpr std::uintptr_t bIgnoreTryToFireSlotCooldownRestriction = 0x19A1;
            static constexpr std::uintptr_t bFireConsumableAnalyticEvent = 0x19A3;
            static constexpr std::uintptr_t OnWeaponHudKeyActionUpdated = 0x19A8;
            static constexpr std::uintptr_t FeedbackLineActionIdsToDim = 0x19B8;
            static constexpr std::uintptr_t HudKeyActionData = 0x19C8;
            static constexpr std::uintptr_t CachedReloadComponent = 0x1A68;
        };

        inline static constexpr std::array<PropertyInfo, 293> Properties{{
            {"OnWeaponRateOfFireChanged", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnWeaponRateOfFireScaleChanged", 0x2D0, "MulticastInlineDelegateProperty"},
            {"OnPressTrigger", 0x2F0, "MulticastInlineDelegateProperty"},
            {"OnReleaseTrigger", 0x300, "MulticastInlineDelegateProperty"},
            {"TimeToEquip", 0x348, "FloatProperty"},
            {"bNeverUpdateLastFireTimeOnImpactForLocalClient", 0x34C, "BoolProperty"},
            {"bIsEquippingWeapon", 0x360, "BoolProperty"},
            {"IsEquippingWeaponChanged", 0x368, "MulticastInlineDelegateProperty"},
            {"bIsChargingWeapon", 0x378, "BoolProperty"},
            {"bCheckCollisionsWithoutAbility", 0x379, "BoolProperty"},
            {"bDisableEquipAnimation", 0x379, "BoolProperty"},
            {"bIsReloadingWeapon", 0x379, "BoolProperty"},
            {"bIsAimingConsumable", 0x3A0, "BoolProperty"},
            {"OnLocalAmmoChanged", 0x420, "MulticastInlineDelegateProperty"},
            {"OnLocalReloadStarted", 0x430, "MulticastInlineDelegateProperty"},
            {"OnReloadStarted", 0x440, "MulticastInlineDelegateProperty"},
            {"OnLocalReloadCancelled", 0x468, "MulticastInlineDelegateProperty"},
            {"OnLocalTargetingChanged", 0x490, "MulticastInlineDelegateProperty"},
            {"OnTargetingChanged", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnSecondaryAbilityToggled", 0x4B0, "MulticastInlineDelegateProperty"},
            {"OnVisibilityChanged", 0x4C0, "MulticastInlineDelegateProperty"},
            {"OnWeaponSetActorHiddenInGame", 0x4E8, "MulticastInlineDelegateProperty"},
            {"OnWeaponFireAudio", 0x4F8, "MulticastInlineDelegateProperty"},
            {"OnWeaponFireAudioVisuals", 0x508, "MulticastInlineDelegateProperty"},
            {"OnModAddedToWeapon", 0x518, "MulticastInlineDelegateProperty"},
            {"OnModRemovedFromWeapon", 0x528, "MulticastInlineDelegateProperty"},
            {"OnWeaponModSlotsEquipped", 0x538, "MulticastInlineDelegateProperty"},
            {"OnWeaponModSlotsUnequipped", 0x548, "MulticastInlineDelegateProperty"},
            {"OnConsumeAmmo", 0x598, "MulticastInlineDelegateProperty"},
            {"OnTryReload", 0x5A8, "MulticastInlineDelegateProperty"},
            {"OnReticleColorChanged", 0x5C8, "MulticastInlineDelegateProperty"},
            {"bPreventRuntimeChangeToReticleDisplays", 0x6C8, "BoolProperty"},
            {"bShouldDrawAmmoCountForFirstPersonCamera", 0x6C8, "BoolProperty"},
            {"bShouldDrawReticleForFirstPersonCamera", 0x6C8, "BoolProperty"},
            {"bUseAttributeCaching", 0x6C8, "BoolProperty"},
            {"WeaponData", 0x6D0, "ObjectProperty"},
            {"CosmeticOverrideWeaponData", 0x6D8, "ObjectProperty"},
            {"bImpactFXAttachedToHitActor", 0x6E0, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x6E8, "ArrayProperty"},
            {"HitNotifyAudioBank", 0x6F8, "ObjectProperty"},
            {"SoundLibraryComponent", 0x700, "ObjectProperty"},
            {"bRemoveAbilitiesWhenRemovedFromInventory", 0x718, "BoolProperty"},
            {"GrantedAbilityRemovalPolicy", 0x719, "EnumProperty"},
            {"BP_OnWeaponCosmeticsReady", 0x748, "MulticastInlineDelegateProperty"},
            {"EquippedWeaponDestroyWrapperRepCounter", 0x7DC, "ByteProperty"},
            {"EquippedWeaponDestroyedGameplayCue", 0x7E0, "StructProperty"},
            {"FireModeOverride", 0x7E4, "EnumProperty"},
            {"OnFireModeChanged", 0x7E8, "MulticastInlineDelegateProperty"},
            {"OnPlayImpactFXDelegate", 0x820, "MulticastInlineDelegateProperty"},
            {"OnBeamFiredDelegate", 0x830, "DelegateProperty"},
            {"CachedImpactDetails", 0x898, "MapProperty"},
            {"MuzzleFlashDelayForAnimationTime", 0x8D4, "FloatProperty"},
            {"PersistentFXStartTime", 0x8D8, "FloatProperty"},
            {"PersistentSFXStartTime", 0x8DC, "FloatProperty"},
            {"MinimumTimeForPersistentFX", 0x8E0, "FloatProperty"},
            {"OverrideItemWrapSoftPtr", 0x8E8, "SoftObjectProperty"},
            {"DevicePropertyHandles", 0x908, "SetProperty"},
            {"ApplicableDeviceProperties", 0x918, "ArrayProperty"},
            {"WeaponReduceMeshWorkSetting", 0x988, "EnumProperty"},
            {"bShouldDrawNativeReticle", 0x9A0, "BoolProperty"},
            {"bShouldAlwaysDrawNativeMuzzleBlockedIndicator", 0x9A1, "BoolProperty"},
            {"bShouldForceCheckCollisions", 0x9A2, "BoolProperty"},
            {"ReticleImage", 0x9A8, "ObjectProperty"},
            {"AutoFireReticleImage", 0x9B0, "ObjectProperty"},
            {"ReticleDefaultColor", 0x9B8, "StructProperty"},
            {"ReticleEnemyColor", 0x9BC, "StructProperty"},
            {"ReticleEnemyDefaultColor", 0x9C0, "StructProperty"},
            {"ReticleBuildingColor", 0x9C4, "StructProperty"},
            {"ReticleNoTargetColor", 0x9C8, "StructProperty"},
            {"HitNotifyReticleImage", 0x9D0, "ObjectProperty"},
            {"HitNotifyLocationReticleImage", 0x9D8, "ObjectProperty"},
            {"CriticalHitNotifyLocationReticleImage", 0x9E0, "ObjectProperty"},
            {"ReticleCenterImage", 0x9E8, "ObjectProperty"},
            {"ReticleCenterPerfectAimImage", 0x9F0, "ObjectProperty"},
            {"ReticleInvalidTargetImage", 0x9F8, "ObjectProperty"},
            {"MuzzleBlockedReticleImage", 0xA00, "ObjectProperty"},
            {"ReticleAltCenterImage", 0xA08, "ObjectProperty"},
            {"ReticleOuterImage", 0xA10, "ObjectProperty"},
            {"ReticleAltOuterImage", 0xA18, "ObjectProperty"},
            {"ReticleDefaultPrimaryStrikeAngle", 0xA20, "FloatProperty"},
            {"ReticleDefaultSecondaryStrikeAngle", 0xA24, "FloatProperty"},
            {"bSupportsAutofireAtReticleTarget", 0xA28, "BoolProperty"},
            {"bEnableAutofireForAnyWeaponItemDefinition", 0xA29, "BoolProperty"},
            {"bSupportsTapToFireMode", 0xA2A, "BoolProperty"},
            {"CameraBase3PClass", 0xA30, "ClassProperty"},
            {"CameraTargeting3PClass", 0xA38, "ClassProperty"},
            {"CameraTargeting3PReloadClass", 0xA40, "ClassProperty"},
            {"CameraBase1PClass", 0xA48, "ClassProperty"},
            {"CameraTargeting1PClass", 0xA50, "ClassProperty"},
            {"DestroyedSound", 0xA58, "ObjectProperty"},
            {"OutOfAmmoSound", 0xA60, "ObjectProperty"},
            {"ReloadSounds", 0xA68, "ObjectProperty"},
            {"PrimaryFireSound1P", 0xA80, "ObjectProperty"},
            {"PrimaryFireSound", 0xA88, "ObjectProperty"},
            {"PrimaryFireStopSound1P", 0xAA0, "ObjectProperty"},
            {"PrimaryFireStopSound", 0xAA8, "ObjectProperty"},
            {"SecondaryFireSound", 0xAC0, "ObjectProperty"},
            {"SecondaryFireStopSound", 0xAD8, "ObjectProperty"},
            {"ChargeFireSound1P", 0xAF0, "ObjectProperty"},
            {"ChargeFireSound", 0xB08, "ObjectProperty"},
            {"TargetingStartSound", 0xB20, "ObjectProperty"},
            {"TargetingEndSound", 0xB28, "ObjectProperty"},
            {"PrimaryFireSoundFadeOutTime", 0xB30, "FloatProperty"},
            {"IndestructibleHitSound", 0xB38, "ObjectProperty"},
            {"ImpactPhysicalSurfaceSounds", 0xB40, "ObjectProperty"},
            {"ImpactPhysicalSurfaceEffects", 0xC60, "ObjectProperty"},
            {"ImpactNiagaraPhysicalSurfaceEffectAssets", 0xD78, "ArrayProperty"},
            {"NDCImpactFX", 0xD88, "StructProperty"},
            {"ImpactArraySupportData", 0xF68, "ArrayProperty"},
            {"ImpactCameraShake", 0xF78, "ClassProperty"},
            {"PrimaryForceFeedbackEffect", 0xF80, "ObjectProperty"},
            {"SecondaryForceFeedbackEffect", 0xF88, "ObjectProperty"},
            {"PrimaryImpactForceFeedbackEffect", 0xF90, "ObjectProperty"},
            {"SecondaryImpactForceFeedbackEffect", 0xF98, "ObjectProperty"},
            {"ImpactNiagaraPhysicalSurfaceEffectInstances", 0xFA0, "ArrayProperty"},
            {"DataStoreManager", 0xFB0, "ObjectProperty"},
            {"FireAudioChannels", 0xFB8, "ObjectProperty"},
            {"ReloadAudioChannels", 0xFD8, "ObjectProperty"},
            {"TargetingAudioChannels", 0xFF0, "ObjectProperty"},
            {"SoundIndicatorComponent", 0x1000, "ObjectProperty"},
            {"CurrentGunFireIndex", 0x1008, "IntProperty"},
            {"WeaponMesh", 0x1010, "ObjectProperty"},
            {"AllWeaponMeshes", 0x1018, "ArrayProperty"},
            {"DefaultWeaponMaterials", 0x1028, "ArrayProperty"},
            {"OriginalMaterialMap", 0x1038, "MapProperty"},
            {"FireAudioChannelWantsToPlay", 0x1048, "IntProperty"},
            {"ProtoWeaponParentMaterial", 0x1058, "SoftObjectProperty"},
            {"WrapSectionMask", 0x1078, "IntProperty"},
            {"bUsingSecondaryFireAudio", 0x107C, "BoolProperty"},
            {"bHasCachedAdditionalMeshes", 0x107D, "BoolProperty"},
            {"CurrentReticleColor", 0x1080, "StructProperty"},
            {"OpticRuntimeData", 0x1084, "StructProperty"},
            {"CurrentDamageStartLocation", 0x1090, "StructProperty"},
            {"CurrentAdjustedAimDirection", 0x10A8, "StructProperty"},
            {"CurrentProjectedImpactDistance", 0x10C0, "FloatProperty"},
            {"FireFXSignificance", 0x10C4, "StructProperty"},
            {"LastFireTime", 0x10DC, "FloatProperty"},
            {"LastSecondaryFireTime", 0x10E0, "FloatProperty"},
            {"LastFireTimeVerified", 0x10E4, "FloatProperty"},
            {"bAllowTargeting", 0x10F8, "BoolProperty"},
            {"bExitTargetingWhenPrimaryIsFired", 0x10F8, "BoolProperty"},
            {"bFireFXTriggered", 0x10F8, "BoolProperty"},
            {"bForceCameraTargetSource", 0x10F8, "BoolProperty"},
            {"bIsPlayingFireFX", 0x10F8, "BoolProperty"},
            {"bIsTargeting", 0x10F8, "BoolProperty"},
            {"bUsesMetaSoundForMuzzleFireFx", 0x10F8, "BoolProperty"},
            {"bWeaponFireCustomAudioTriggered", 0x10F8, "BoolProperty"},
            {"bAllowReloadWhenFull", 0x10F9, "BoolProperty"},
            {"bClientWaitForServerMagazineAmmo", 0x10F9, "BoolProperty"},
            {"bTraceThroughPawns", 0x10F9, "BoolProperty"},
            {"bTraceThroughWorld", 0x10F9, "BoolProperty"},
            {"bUseProjectileTrace", 0x10F9, "BoolProperty"},
            {"bUseVariableFocalDistanceTargeting", 0x10F9, "BoolProperty"},
            {"bUseWeaponTraceForReticle", 0x10F9, "BoolProperty"},
            {"bWeaponTraceCanBeBlockedByPassthroughTag", 0x10F9, "BoolProperty"},
            {"bIsTryingAutoReload", 0x10FA, "BoolProperty"},
            {"bIsTryingCheckAmmoOnTryToFireReload", 0x10FA, "BoolProperty"},
            {"BlendingOutPawnMontage", 0x1100, "ObjectProperty"},
            {"bIsInReleaseSecondaryFireScope", 0x1108, "BoolProperty"},
            {"TimerIntervalAdjustment", 0x110C, "FloatProperty"},
            {"InputQueueTimePercent", 0x1110, "FloatProperty"},
            {"LastTargetingTransitionTime", 0x1114, "FloatProperty"},
            {"TargetSourceOffset", 0x1118, "StructProperty"},
            {"TargetSourceOffsetWhileCrouched", 0x1130, "StructProperty"},
            {"TargetSourceOffsetWhileTargeting", 0x1148, "StructProperty"},
            {"TraceThroughPawnsLimit", 0x1160, "IntProperty"},
            {"TraceThroughBuildingsLimit", 0x1164, "IntProperty"},
            {"TraceThroughLandscapeLimit", 0x1168, "IntProperty"},
            {"ProjectilePitchOffset", 0x116C, "FloatProperty"},
            {"LastReloadTime", 0x1170, "FloatProperty"},
            {"LastSuccessfulReloadTime", 0x1174, "FloatProperty"},
            {"CurrentReloadDuration", 0x1178, "FloatProperty"},
            {"ItemEntryGuid", 0x1180, "StructProperty"},
            {"TrackerGuid", 0x1190, "StructProperty"},
            {"WeaponLevel", 0x11A0, "IntProperty"},
            {"CachedForcedLeanComponent", 0x11A8, "ObjectProperty"},
            {"AmmoCount", 0x11E0, "IntProperty"},
            {"PhantomReserveAmmo", 0x11E4, "IntProperty"},
            {"BurstFireCounter", 0x1200, "IntProperty"},
            {"ChargeTime", 0x1204, "FloatProperty"},
            {"AccumulatedChargeTime", 0x1208, "FloatProperty"},
            {"LastChargeTime", 0x120C, "FloatProperty"},
            {"StartChargeGameplayCue", 0x1210, "StructProperty"},
            {"MaxChargeGameplayCue", 0x1214, "StructProperty"},
            {"OutOfAmmoTextOverrideFailTag", 0x1218, "StructProperty"},
            {"NoSpareAmmoToReloadTextOverrideFailTag", 0x121C, "StructProperty"},
            {"FireCanInterruptEquipQuery", 0x1220, "StructProperty"},
            {"bIsFireDepthEnabled", 0x1268, "BoolProperty"},
            {"FireDepthAnimData", 0x1270, "ObjectProperty"},
            {"CurrentShotLogIndex", 0x1278, "IntProperty"},
            {"ShotLogFlags", 0x1280, "ArrayProperty"},
            {"bInitializedWeaponItem", 0x1290, "BoolProperty"},
            {"bPendingDestroyDueToDurabilityOrStackCount", 0x1290, "BoolProperty"},
            {"bCompletedAppliedAlterationsLoad", 0x1291, "BoolProperty"},
            {"bCompletedWeaponLoad", 0x1291, "BoolProperty"},
            {"bCosmeticOverlayApplied", 0x1291, "BoolProperty"},
            {"bIsCosmeticGatedLocally", 0x1291, "BoolProperty"},
            {"bIsCosmeticLimited", 0x1291, "BoolProperty"},
            {"bNeedsReapplyMaterialOverrides", 0x1291, "BoolProperty"},
            {"bCanDeferSecondaryFireInput", 0x1292, "BoolProperty"},
            {"bEnableNativeChargeUp", 0x1292, "BoolProperty"},
            {"bReplicatedAppliedAlterationsWithNoInstigator", 0x1292, "BoolProperty"},
            {"bSecondaryFireAlwaysCancelSwimSprint", 0x1292, "BoolProperty"},
            {"bShouldFullyApplyVariantsOnEquip", 0x1292, "BoolProperty"},
            {"bAttachToRootOnDestruction", 0x1293, "BoolProperty"},
            {"bHideWeaponOnDestruction", 0x1293, "BoolProperty"},
            {"bUseOriginForDestructionInterpolation", 0x1293, "BoolProperty"},
            {"AttachToRootOnDestructionOffset", 0x1298, "StructProperty"},
            {"AttachToRootOnDestructionInterpSpeed", 0x12B0, "FloatProperty"},
            {"bShowWhenHolstered", 0x12B4, "BoolProperty"},
            {"CustomPartsToShowWhenHolstered", 0x12B8, "ArrayProperty"},
            {"ChargeStatusPack", 0x12C8, "Int16Property"},
            {"AttachedTrajectoryIndicator", 0x12F8, "WeakObjectProperty"},
            {"ActiveAbility", 0x1300, "ObjectProperty"},
            {"PrimaryAbilitySpecHandle", 0x1308, "StructProperty"},
            {"SecondaryAbilitySpecHandle", 0x1320, "StructProperty"},
            {"ReloadAbilitySpecHandle", 0x1338, "StructProperty"},
            {"ImpactAbilitySpecHandle", 0x1350, "StructProperty"},
            {"ReticleTraceOverrideSpecHandle", 0x1368, "StructProperty"},
            {"EquippedAbilityHandles", 0x1380, "ArrayProperty"},
            {"EquippedAbilitySetHandles", 0x1390, "ArrayProperty"},
            {"AppliedAlterations", 0x13A0, "ArrayProperty"},
            {"WeaponModSlots", 0x13B0, "ArrayProperty"},
            {"ItemOverrideData", 0x13C0, "StructProperty"},
            {"EquippedWeaponModSlots", 0x1410, "ArrayProperty"},
            {"ModRuntimeDataCache", 0x1420, "ObjectProperty"},
            {"ModDebugComp", 0x1428, "ObjectProperty"},
            {"OpticDefinition", 0x1430, "ObjectProperty"},
            {"OpticConfig", 0x1438, "StructProperty"},
            {"PreviousWeaponVariants", 0x1478, "StructProperty"},
            {"AppliedItemWrap", 0x14B8, "ObjectProperty"},
            {"CachedFXManager", 0x14C0, "ObjectProperty"},
            {"CachedSignificanceManager", 0x14C8, "ObjectProperty"},
            {"MuzzleSocketName", 0x1500, "NameProperty"},
            {"MuzzleFalloffSocketName", 0x1504, "NameProperty"},
            {"WeaponHandSocketNameOverride", 0x1508, "NameProperty"},
            {"LeftHandWeaponHandSocketNameOverride", 0x150C, "NameProperty"},
            {"WeaponHandSocketPartOverrides", 0x1510, "ArrayProperty"},
            {"bForceOverrideGenerateOverlapEvents", 0x1524, "BoolProperty"},
            {"MaxWeaponSwitchNetworkWaitTime", 0x1628, "FloatProperty"},
            {"MaxWeaponSwitchNetworkWaitTimeHotfix", 0x1630, "StructProperty"},
            {"MaxWeaponAttackNetworkWaitTime", 0x1658, "FloatProperty"},
            {"LastFireAbilityTime", 0x165C, "FloatProperty"},
            {"OnGetAimRotOverride", 0x1698, "DelegateProperty"},
            {"OnAlterationAdded", 0x16A8, "MulticastInlineDelegateProperty"},
            {"ModLeftHandPoseOffsets", 0x16B8, "MapProperty"},
            {"ModReloadAnimData", 0x16C8, "MapProperty"},
            {"EquipAnimation", 0x16D8, "ObjectProperty"},
            {"FirstTimeEquipAnimation", 0x16E0, "ObjectProperty"},
            {"WeaponFirstTimeEquipAnimation", 0x16E8, "ObjectProperty"},
            {"FirstTimeEquipTag", 0x16F0, "StructProperty"},
            {"bResetOnItemRemoval", 0x16F4, "BoolProperty"},
            {"ReloadAnimation", 0x16F8, "ObjectProperty"},
            {"CustomReloadAnimationPerAmmoToFill", 0x1738, "ArrayProperty"},
            {"PrimaryAbilityAnimation", 0x1748, "ObjectProperty"},
            {"SecondaryAbilityAnimation", 0x1750, "ObjectProperty"},
            {"WeaponEquipMontage", 0x1758, "ObjectProperty"},
            {"WeaponReloadMontage", 0x1760, "ObjectProperty"},
            {"CustomWeaponReloadMontagePerAmmoToFill", 0x1768, "ArrayProperty"},
            {"WeaponPrimaryAbilityMontage", 0x1778, "ObjectProperty"},
            {"WeaponSecondaryAbilityMontage", 0x1780, "ObjectProperty"},
            {"FirstPersonData", 0x1788, "ObjectProperty"},
            {"PoseOffsetAnimSequence", 0x17B8, "ObjectProperty"},
            {"PoseOffsetAnimSequenceFemaleOverride", 0x17C0, "ObjectProperty"},
            {"WeaponCoreAnimation", 0x17C8, "ByteProperty"},
            {"WeaponCoreAnimationOverride", 0x17C9, "ByteProperty"},
            {"HandGripType", 0x17CA, "EnumProperty"},
            {"WeaponPawnAnimSet", 0x17D0, "ObjectProperty"},
            {"PlayerAnimAssets", 0x17D8, "StructProperty"},
            {"ProceduralLayeringData", 0x17E8, "StructProperty"},
            {"PlayerAnimAssetsOverride", 0x1818, "StructProperty"},
            {"bResetAnimAssetsOverrideOnUnEquip", 0x1828, "BoolProperty"},
            {"WeaponPawnAnimLayerOverlayClass", 0x1830, "ClassProperty"},
            {"WeaponAdditiveAnimSet", 0x1838, "ObjectProperty"},
            {"PlayerAnimProxyTable", 0x1840, "ObjectProperty"},
            {"HitReactionProxyTable", 0x1848, "ObjectProperty"},
            {"bEnableTickAnimMontagesOnlyWhenOffscreen", 0x1850, "BoolProperty"},
            {"MaxRangeToEnableTickAnimMontagesWhenOffscreen", 0x1854, "FloatProperty"},
            {"WeaponPawnAnimsetOverride", 0x1858, "ObjectProperty"},
            {"WeaponAdditiveAnimsetOverride", 0x1860, "ObjectProperty"},
            {"UnableToPerformActionMontageOverride", 0x18A0, "ObjectProperty"},
            {"ActiveFireMode", 0x18A8, "SoftObjectProperty"},
            {"FireModeData_HipFire", 0x18C8, "SoftObjectProperty"},
            {"FireModeData_AimDownSight", 0x18E8, "SoftObjectProperty"},
            {"FireModeData_Override", 0x1908, "SoftObjectProperty"},
            {"ItemWrapModifier", 0x1950, "ObjectProperty"},
            {"LockOnTargetCandidate", 0x1998, "ObjectProperty"},
            {"bIgnoreTryToFireSlotCooldownRestriction", 0x19A1, "BoolProperty"},
            {"bFireConsumableAnalyticEvent", 0x19A3, "BoolProperty"},
            {"OnWeaponHudKeyActionUpdated", 0x19A8, "MulticastInlineDelegateProperty"},
            {"FeedbackLineActionIdsToDim", 0x19B8, "ArrayProperty"},
            {"HudKeyActionData", 0x19C8, "ArrayProperty"},
            {"CachedReloadComponent", 0x1A68, "ObjectProperty"},
        }};
    };

}
