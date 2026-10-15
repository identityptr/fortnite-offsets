/**
 * decamp dumper generated SDK
 * Package: /Script/ItemizationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ItemizationRuntime.FortInventoryProperties
// Kind: ScriptStruct; super: InventoryProperties
struct FFortInventoryProperties
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t FortItemTypeRequirement; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortInventoryProperties, FortItemTypeRequirement) == 96, "Offset mismatch for FFortInventoryProperties::FortItemTypeRequirement");

// /Script/ItemizationRuntime.FortItemOwnerPoseModifierComponentData
// Kind: ScriptStruct; super: none
struct FFortItemOwnerPoseModifierComponentData
{
public:
    std::uint8_t bIsEquipped; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t EquippedProxyTable[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> WeakWeapon; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortItemOwnerPoseModifierComponentData, bIsEquipped) == 0, "Offset mismatch for FFortItemOwnerPoseModifierComponentData::bIsEquipped");
static_assert(offsetof(FFortItemOwnerPoseModifierComponentData, EquippedProxyTable) == 8, "Offset mismatch for FFortItemOwnerPoseModifierComponentData::EquippedProxyTable");
static_assert(offsetof(FFortItemOwnerPoseModifierComponentData, WeakWeapon) == 40, "Offset mismatch for FFortItemOwnerPoseModifierComponentData::WeakWeapon");

// /Script/ItemizationRuntime.FortWeaponItemization
// Kind: Class; super: FortWeapon
class UFortWeaponItemization
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    FMulticastInlineDelegate OnWeaponRateOfFireChanged; // 0x02B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWeaponRateOfFireScaleChanged; // 0x02C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02D8
    FMulticastInlineDelegate OnPressTrigger; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReleaseTrigger; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0300
    float TimeToEquip; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNeverUpdateLastFireTimeOnImpactForLocalClient; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x13]; // 0x034D
    std::uint8_t bIsEquippingWeapon; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0361
    FMulticastInlineDelegate IsEquippingWeaponChanged; // 0x0368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsChargingWeapon; // 0x0378 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckCollisionsWithoutAbility; // 0x0379 (Size: 0x1, Type: BoolProperty)
    // 0x0379 BoolProperty bDisableEquipAnimation (shared storage)
    // 0x0379 BoolProperty bIsReloadingWeapon (shared storage)
    std::uint8_t Pad_0005[0x26]; // 0x037A
    std::uint8_t bIsAimingConsumable; // 0x03A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4F]; // 0x03A1
    FMulticastInlineDelegate OnLocalAmmoChanged; // 0x03F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalReloadStarted; // 0x0400 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReloadStarted; // 0x0410 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x0420
    FMulticastInlineDelegate OnLocalReloadCancelled; // 0x0438 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0008[0x18]; // 0x0448
    FMulticastInlineDelegate OnLocalTargetingChanged; // 0x0460 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTargetingChanged; // 0x0470 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSecondaryAbilityToggled; // 0x0480 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x0490 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x18]; // 0x04A0
    FMulticastInlineDelegate OnWeaponSetActorHiddenInGame; // 0x04B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWeaponFireAudio; // 0x04C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWeaponFireAudioVisuals; // 0x04D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnModAddedToWeapon; // 0x04E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnModRemovedFromWeapon; // 0x04F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWeaponModSlotsEquipped; // 0x0508 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWeaponModSlotsUnequipped; // 0x0518 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000A[0x30]; // 0x0528
    FMulticastInlineDelegate OnConsumeAmmo; // 0x0558 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTryReload; // 0x0568 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000B[0x10]; // 0x0578
    FMulticastInlineDelegate OnReticleColorChanged; // 0x0588 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000C[0x70]; // 0x0598
    std::uint8_t bPreventRuntimeChangeToReticleDisplays; // 0x0608 (Size: 0x1, Type: BoolProperty)
    // 0x0608 BoolProperty bShouldDrawAmmoCountForFirstPersonCamera (shared storage)
    // 0x0608 BoolProperty bShouldDrawReticleForFirstPersonCamera (shared storage)
    // 0x0608 BoolProperty bUseAttributeCaching (shared storage)
    std::uint8_t Pad_000D[0x7]; // 0x0609
    void* WeaponData; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticOverrideWeaponData; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bImpactFXAttachedToHitActor; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x17]; // 0x0621
    TArray<void*> GameplayAbilityBehaviorDistanceData; // 0x0638 (Size: 0x10, Type: ArrayProperty)
    void* HitNotifyAudioBank; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    void* SoundLibraryComponent; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000F[0x18]; // 0x0658
    std::uint8_t bRemoveAbilitiesWhenRemovedFromInventory; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GrantedAbilityRemovalPolicy; // 0x0671 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0010[0x1E]; // 0x0672
    FMulticastInlineDelegate BP_OnWeaponCosmeticsReady; // 0x0690 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0011[0x28]; // 0x06A0
    std::uint8_t EquippedWeaponDestroyWrapperRepCounter; // 0x06C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0012[0x3]; // 0x06C9
    std::uint8_t EquippedWeaponDestroyedGameplayCue[0x4]; // 0x06CC (Size: 0x4, Type: StructProperty)
    std::uint8_t FireModeOverride; // 0x06D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0013[0x7]; // 0x06D1
    FMulticastInlineDelegate OnFireModeChanged; // 0x06D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0014[0x30]; // 0x06E8
    FMulticastInlineDelegate OnPlayImpactFXDelegate; // 0x0718 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FScriptDelegate OnBeamFiredDelegate; // 0x0728 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0015[0x48]; // 0x0738
    TMap<void*, void*> CachedImpactDetails; // 0x0780 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0016[0x34]; // 0x0790
    float MuzzleFlashDelayForAnimationTime; // 0x07C4 (Size: 0x4, Type: FloatProperty)
    float PersistentFXStartTime; // 0x07C8 (Size: 0x4, Type: FloatProperty)
    float PersistentSFXStartTime; // 0x07CC (Size: 0x4, Type: FloatProperty)
    float MinimumTimeForPersistentFX; // 0x07D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0017[0x4]; // 0x07D4
    std::uint8_t OverrideItemWrapSoftPtr[0x20]; // 0x07D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DevicePropertyHandles[0x10]; // 0x07F8 (Size: 0x10, Type: SetProperty)
    TArray<void*> ApplicableDeviceProperties; // 0x0808 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0018[0x60]; // 0x0818
    std::uint8_t WeaponReduceMeshWorkSetting; // 0x0878 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0019[0x17]; // 0x0879
    std::uint8_t bWeaponSupportsQuartzGunfire; // 0x0890 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001A[0x7]; // 0x0891
    void* QuartzGunfireComp; // 0x0898 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldDrawNativeReticle; // 0x08A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldAlwaysDrawNativeMuzzleBlockedIndicator; // 0x08A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldForceCheckCollisions; // 0x08A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001B[0x5]; // 0x08A3
    void* ReticleImage; // 0x08A8 (Size: 0x8, Type: ObjectProperty)
    void* AutoFireReticleImage; // 0x08B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReticleDefaultColor[0x4]; // 0x08B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReticleEnemyColor[0x4]; // 0x08BC (Size: 0x4, Type: StructProperty)
    std::uint8_t ReticleEnemyDefaultColor[0x4]; // 0x08C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReticleBuildingColor[0x4]; // 0x08C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReticleNoTargetColor[0x8]; // 0x08C8 (Size: 0x8, Type: StructProperty)
    void* HitNotifyReticleImage; // 0x08D0 (Size: 0x8, Type: ObjectProperty)
    void* HitNotifyLocationReticleImage; // 0x08D8 (Size: 0x8, Type: ObjectProperty)
    void* CriticalHitNotifyLocationReticleImage; // 0x08E0 (Size: 0x8, Type: ObjectProperty)
    void* ReticleCenterImage; // 0x08E8 (Size: 0x8, Type: ObjectProperty)
    void* ReticleCenterPerfectAimImage; // 0x08F0 (Size: 0x8, Type: ObjectProperty)
    void* ReticleInvalidTargetImage; // 0x08F8 (Size: 0x8, Type: ObjectProperty)
    void* MuzzleBlockedReticleImage; // 0x0900 (Size: 0x8, Type: ObjectProperty)
    void* ReticleAltCenterImage; // 0x0908 (Size: 0x8, Type: ObjectProperty)
    void* ReticleOuterImage; // 0x0910 (Size: 0x8, Type: ObjectProperty)
    void* ReticleAltOuterImage; // 0x0918 (Size: 0x8, Type: ObjectProperty)
    float ReticleDefaultPrimaryStrikeAngle; // 0x0920 (Size: 0x4, Type: FloatProperty)
    float ReticleDefaultSecondaryStrikeAngle; // 0x0924 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSupportsAutofireAtReticleTarget; // 0x0928 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAutofireForAnyWeaponItemDefinition; // 0x0929 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportsTapToFireMode; // 0x092A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001C[0x5]; // 0x092B
    void* CameraBase3PClass; // 0x0930 (Size: 0x8, Type: ClassProperty)
    void* CameraTargeting3PClass; // 0x0938 (Size: 0x8, Type: ClassProperty)
    void* CameraTargeting3PReloadClass; // 0x0940 (Size: 0x8, Type: ClassProperty)
    void* CameraBase1PClass; // 0x0948 (Size: 0x8, Type: ClassProperty)
    void* CameraTargeting1PClass; // 0x0950 (Size: 0x8, Type: ClassProperty)
    void* DestroyedSound; // 0x0958 (Size: 0x8, Type: ObjectProperty)
    void* OutOfAmmoSound; // 0x0960 (Size: 0x8, Type: ObjectProperty)
    void* ReloadSounds; // 0x0968 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_001D[0x10]; // 0x0970
    void* PrimaryFireSound1P; // 0x0980 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryFireSound; // 0x0988 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_001E[0x10]; // 0x0990
    void* PrimaryFireStopSound1P; // 0x09A0 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryFireStopSound; // 0x09A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_001F[0x10]; // 0x09B0
    void* SecondaryFireSound; // 0x09C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0020[0x10]; // 0x09C8
    void* SecondaryFireStopSound; // 0x09D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0021[0x10]; // 0x09E0
    void* ChargeFireSound1P; // 0x09F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0022[0x10]; // 0x09F8
    void* ChargeFireSound; // 0x0A08 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0023[0x10]; // 0x0A10
    void* TargetingStartSound; // 0x0A20 (Size: 0x8, Type: ObjectProperty)
    void* TargetingEndSound; // 0x0A28 (Size: 0x8, Type: ObjectProperty)
    float PrimaryFireSoundFadeOutTime; // 0x0A30 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0024[0x4]; // 0x0A34
    void* IndestructibleHitSound; // 0x0A38 (Size: 0x8, Type: ObjectProperty)
    void* ImpactPhysicalSurfaceSounds; // 0x0A40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0025[0x118]; // 0x0A48
    void* ImpactPhysicalSurfaceEffects; // 0x0B60 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0026[0x110]; // 0x0B68
    TArray<void*> ImpactNiagaraPhysicalSurfaceEffectAssets; // 0x0C78 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NDCImpactFX[0x1E0]; // 0x0C88 (Size: 0x1E0, Type: StructProperty)
    TArray<void*> ImpactArraySupportData; // 0x0E68 (Size: 0x10, Type: ArrayProperty)
    void* ImpactCameraShake; // 0x0E78 (Size: 0x8, Type: ClassProperty)
    void* PrimaryForceFeedbackEffect; // 0x0E80 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryForceFeedbackEffect; // 0x0E88 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryImpactForceFeedbackEffect; // 0x0E90 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryImpactForceFeedbackEffect; // 0x0E98 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ImpactNiagaraPhysicalSurfaceEffectInstances; // 0x0EA0 (Size: 0x10, Type: ArrayProperty)
    void* DataStoreManager; // 0x0EB0 (Size: 0x8, Type: ObjectProperty)
    void* FireAudioChannels; // 0x0EB8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0027[0x18]; // 0x0EC0
    void* ReloadAudioChannels; // 0x0ED8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0028[0x10]; // 0x0EE0
    void* TargetingAudioChannels; // 0x0EF0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0029[0x8]; // 0x0EF8
    void* SoundIndicatorComponent; // 0x0F00 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CurrentGunFireIndex; // 0x0F08 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_002A[0x4]; // 0x0F0C
    void* WeaponMesh; // 0x0F10 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AllWeaponMeshes; // 0x0F18 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultWeaponMaterials; // 0x0F28 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> OriginalMaterialMap; // 0x0F38 (Size: 0x10, Type: MapProperty)
    std::int32_t FireAudioChannelWantsToPlay; // 0x0F48 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_002B[0xC]; // 0x0F4C
    std::uint8_t ProtoWeaponParentMaterial[0x20]; // 0x0F58 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t WrapSectionMask; // 0x0F78 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsingSecondaryFireAudio; // 0x0F7C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasCachedAdditionalMeshes; // 0x0F7D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_002C[0x2]; // 0x0F7E
    std::uint8_t CurrentReticleColor[0x4]; // 0x0F80 (Size: 0x4, Type: StructProperty)
    std::uint8_t OpticRuntimeData[0xC]; // 0x0F84 (Size: 0xC, Type: StructProperty)
    std::uint8_t CurrentDamageStartLocation[0x18]; // 0x0F90 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentAdjustedAimDirection[0x18]; // 0x0FA8 (Size: 0x18, Type: StructProperty)
    float CurrentProjectedImpactDistance; // 0x0FC0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FireFXSignificance[0x18]; // 0x0FC4 (Size: 0x18, Type: StructProperty)
    float LastFireTime; // 0x0FDC (Size: 0x4, Type: FloatProperty)
    float LastSecondaryFireTime; // 0x0FE0 (Size: 0x4, Type: FloatProperty)
    float LastFireTimeVerified; // 0x0FE4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_002D[0x8]; // 0x0FE8
    std::uint8_t bAllowTargeting; // 0x0FF0 (Size: 0x1, Type: BoolProperty)
    // 0x0FF0 BoolProperty bExitTargetingWhenPrimaryIsFired (shared storage)
    // 0x0FF0 BoolProperty bFireFXTriggered (shared storage)
    // 0x0FF0 BoolProperty bForceCameraTargetSource (shared storage)
    // 0x0FF0 BoolProperty bIsPlayingFireFX (shared storage)
    // 0x0FF0 BoolProperty bIsTargeting (shared storage)
    // 0x0FF0 BoolProperty bUsesMetaSoundForMuzzleFireFx (shared storage)
    // 0x0FF0 BoolProperty bWeaponFireCustomAudioTriggered (shared storage)
    std::uint8_t bAllowReloadWhenFull; // 0x0FF1 (Size: 0x1, Type: BoolProperty)
    // 0x0FF1 BoolProperty bClientWaitForServerMagazineAmmo (shared storage)
    // 0x0FF1 BoolProperty bTraceThroughPawns (shared storage)
    // 0x0FF1 BoolProperty bTraceThroughWorld (shared storage)
    // 0x0FF1 BoolProperty bUseProjectileTrace (shared storage)
    // 0x0FF1 BoolProperty bUseVariableFocalDistanceTargeting (shared storage)
    // 0x0FF1 BoolProperty bUseWeaponTraceForReticle (shared storage)
    // 0x0FF1 BoolProperty bWeaponTraceCanBeBlockedByPassthroughTag (shared storage)
    std::uint8_t bIsTryingAutoReload; // 0x0FF2 (Size: 0x1, Type: BoolProperty)
    // 0x0FF2 BoolProperty bIsTryingCheckAmmoOnTryToFireReload (shared storage)
    std::uint8_t Pad_002E[0x5]; // 0x0FF3
    void* BlendingOutPawnMontage; // 0x0FF8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInReleaseSecondaryFireScope; // 0x1000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_002F[0x3]; // 0x1001
    float TimerIntervalAdjustment; // 0x1004 (Size: 0x4, Type: FloatProperty)
    float InputQueueTimePercent; // 0x1008 (Size: 0x4, Type: FloatProperty)
    float LastTargetingTransitionTime; // 0x100C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TargetSourceOffset[0x18]; // 0x1010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetSourceOffsetWhileCrouched[0x18]; // 0x1028 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetSourceOffsetWhileTargeting[0x18]; // 0x1040 (Size: 0x18, Type: StructProperty)
    std::int32_t TraceThroughPawnsLimit; // 0x1058 (Size: 0x4, Type: IntProperty)
    std::int32_t TraceThroughBuildingsLimit; // 0x105C (Size: 0x4, Type: IntProperty)
    std::int32_t TraceThroughLandscapeLimit; // 0x1060 (Size: 0x4, Type: IntProperty)
    float ProjectilePitchOffset; // 0x1064 (Size: 0x4, Type: FloatProperty)
    float LastReloadTime; // 0x1068 (Size: 0x4, Type: FloatProperty)
    float LastSuccessfulReloadTime; // 0x106C (Size: 0x4, Type: FloatProperty)
    float CurrentReloadDuration; // 0x1070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0030[0x4]; // 0x1074
    std::uint8_t ItemEntryGuid[0x10]; // 0x1078 (Size: 0x10, Type: StructProperty)
    std::uint8_t TrackerGuid[0x10]; // 0x1088 (Size: 0x10, Type: StructProperty)
    std::int32_t WeaponLevel; // 0x1098 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0031[0x4]; // 0x109C
    void* CachedForcedLeanComponent; // 0x10A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0032[0x30]; // 0x10A8
    std::int32_t AmmoCount; // 0x10D8 (Size: 0x4, Type: IntProperty)
    std::int32_t PhantomReserveAmmo; // 0x10DC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0033[0x10]; // 0x10E0
    std::int32_t BurstFireCounter; // 0x10F0 (Size: 0x4, Type: IntProperty)
    float ChargeTime; // 0x10F4 (Size: 0x4, Type: FloatProperty)
    float AccumulatedChargeTime; // 0x10F8 (Size: 0x4, Type: FloatProperty)
    float LastChargeTime; // 0x10FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t StartChargeGameplayCue[0x4]; // 0x1100 (Size: 0x4, Type: StructProperty)
    std::uint8_t MaxChargeGameplayCue[0x4]; // 0x1104 (Size: 0x4, Type: StructProperty)
    std::uint8_t OutOfAmmoTextOverrideFailTag[0x4]; // 0x1108 (Size: 0x4, Type: StructProperty)
    std::uint8_t NoSpareAmmoToReloadTextOverrideFailTag[0x4]; // 0x110C (Size: 0x4, Type: StructProperty)
    std::uint8_t FireCanInterruptEquipQuery[0x48]; // 0x1110 (Size: 0x48, Type: StructProperty)
    std::int32_t CurrentShotLogIndex; // 0x1158 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0034[0x4]; // 0x115C
    TArray<void*> ShotLogFlags; // 0x1160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInitializedWeaponItem; // 0x1170 (Size: 0x1, Type: BoolProperty)
    // 0x1170 BoolProperty bPendingDestroyDueToDurabilityOrStackCount (shared storage)
    std::uint8_t bCompletedAppliedAlterationsLoad; // 0x1171 (Size: 0x1, Type: BoolProperty)
    // 0x1171 BoolProperty bCompletedWeaponLoad (shared storage)
    // 0x1171 BoolProperty bCosmeticOverlayApplied (shared storage)
    // 0x1171 BoolProperty bIsCosmeticGatedLocally (shared storage)
    // 0x1171 BoolProperty bIsCosmeticLimited (shared storage)
    // 0x1171 BoolProperty bNeedsReapplyMaterialOverrides (shared storage)
    std::uint8_t bCanDeferSecondaryFireInput; // 0x1172 (Size: 0x1, Type: BoolProperty)
    // 0x1172 BoolProperty bEnableNativeChargeUp (shared storage)
    // 0x1172 BoolProperty bReplicatedAppliedAlterationsWithNoInstigator (shared storage)
    // 0x1172 BoolProperty bSecondaryFireAlwaysCancelSwimSprint (shared storage)
    // 0x1172 BoolProperty bShouldFullyApplyVariantsOnEquip (shared storage)
    std::uint8_t bAttachToRootOnDestruction; // 0x1173 (Size: 0x1, Type: BoolProperty)
    // 0x1173 BoolProperty bHideWeaponOnDestruction (shared storage)
    // 0x1173 BoolProperty bUseOriginForDestructionInterpolation (shared storage)
    std::uint8_t Pad_0035[0x4]; // 0x1174
    std::uint8_t AttachToRootOnDestructionOffset[0x18]; // 0x1178 (Size: 0x18, Type: StructProperty)
    float AttachToRootOnDestructionInterpSpeed; // 0x1190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowWhenHolstered; // 0x1194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0036[0x3]; // 0x1195
    TArray<void*> CustomPartsToShowWhenHolstered; // 0x1198 (Size: 0x10, Type: ArrayProperty)
    std::int16_t ChargeStatusPack; // 0x11A8 (Size: 0x2, Type: Int16Property)
    std::uint8_t Pad_0037[0x2E]; // 0x11AA
    TWeakObjectPtr<void> AttachedTrajectoryIndicator; // 0x11D8 (Size: 0x8, Type: WeakObjectProperty)
    void* ActiveAbility; // 0x11E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PrimaryAbilitySpecHandle[0x18]; // 0x11E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryAbilitySpecHandle[0x18]; // 0x1200 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReloadAbilitySpecHandle[0x18]; // 0x1218 (Size: 0x18, Type: StructProperty)
    std::uint8_t ImpactAbilitySpecHandle[0x18]; // 0x1230 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReticleTraceOverrideSpecHandle[0x18]; // 0x1248 (Size: 0x18, Type: StructProperty)
    TArray<void*> EquippedAbilityHandles; // 0x1260 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EquippedAbilitySetHandles; // 0x1270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AppliedAlterations; // 0x1280 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WeaponModSlots; // 0x1290 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemOverrideData[0x50]; // 0x12A0 (Size: 0x50, Type: StructProperty)
    TArray<void*> EquippedWeaponModSlots; // 0x12F0 (Size: 0x10, Type: ArrayProperty)
    void* ModRuntimeDataCache; // 0x1300 (Size: 0x8, Type: ObjectProperty)
    void* ModDebugComp; // 0x1308 (Size: 0x8, Type: ObjectProperty)
    void* OpticDefinition; // 0x1310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OpticConfig[0x40]; // 0x1318 (Size: 0x40, Type: StructProperty)
    std::uint8_t PreviousWeaponVariants[0x70]; // 0x1358 (Size: 0x70, Type: StructProperty)
    void* AppliedItemWrap; // 0x13C8 (Size: 0x8, Type: ObjectProperty)
    void* CachedFXManager; // 0x13D0 (Size: 0x8, Type: ObjectProperty)
    void* CachedSignificanceManager; // 0x13D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0038[0x28]; // 0x13E0
    std::uint8_t MuzzleSocketName[0x4]; // 0x1408 (Size: 0x4, Type: NameProperty)
    std::uint8_t MuzzleFalloffSocketName[0x4]; // 0x140C (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponHandSocketNameOverride[0x4]; // 0x1410 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeftHandWeaponHandSocketNameOverride[0x4]; // 0x1414 (Size: 0x4, Type: NameProperty)
    TArray<void*> WeaponHandSocketPartOverrides; // 0x1418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0039[0x8]; // 0x1428
    std::uint8_t bForceOverrideGenerateOverlapEvents; // 0x1430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_003A[0x11B]; // 0x1431
    float MaxWeaponSwitchNetworkWaitTime; // 0x154C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxWeaponSwitchNetworkWaitTimeHotfix[0x28]; // 0x1550 (Size: 0x28, Type: StructProperty)
    float MaxWeaponAttackNetworkWaitTime; // 0x1578 (Size: 0x4, Type: FloatProperty)
    float LastFireAbilityTime; // 0x157C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_003B[0x38]; // 0x1580
    FScriptDelegate OnGetAimRotOverride; // 0x15B8 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnAlterationAdded; // 0x15C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> ModLeftHandPoseOffsets; // 0x15D8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ModReloadAnimData; // 0x15E8 (Size: 0x10, Type: MapProperty)
    void* EquipAnimation; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
    void* FirstTimeEquipAnimation; // 0x1600 (Size: 0x8, Type: ObjectProperty)
    void* WeaponFirstTimeEquipAnimation; // 0x1608 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FirstTimeEquipTag[0x4]; // 0x1610 (Size: 0x4, Type: StructProperty)
    std::uint8_t bResetOnItemRemoval; // 0x1614 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_003C[0x3]; // 0x1615
    void* ReloadAnimation; // 0x1618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_003D[0x38]; // 0x1620
    TArray<void*> CustomReloadAnimationPerAmmoToFill; // 0x1658 (Size: 0x10, Type: ArrayProperty)
    void* PrimaryAbilityAnimation; // 0x1668 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryAbilityAnimation; // 0x1670 (Size: 0x8, Type: ObjectProperty)
    void* WeaponEquipMontage; // 0x1678 (Size: 0x8, Type: ObjectProperty)
    void* WeaponReloadMontage; // 0x1680 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CustomWeaponReloadMontagePerAmmoToFill; // 0x1688 (Size: 0x10, Type: ArrayProperty)
    void* WeaponPrimaryAbilityMontage; // 0x1698 (Size: 0x8, Type: ObjectProperty)
    void* WeaponSecondaryAbilityMontage; // 0x16A0 (Size: 0x8, Type: ObjectProperty)
    void* FirstPersonData; // 0x16A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_003E[0x18]; // 0x16B0
    void* PoseOffsetAnimSequence; // 0x16C8 (Size: 0x8, Type: ObjectProperty)
    void* PoseOffsetAnimSequenceFemaleOverride; // 0x16D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WeaponCoreAnimation; // 0x16D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeaponCoreAnimationOverride; // 0x16D9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t HandGripType; // 0x16DA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_003F[0x5]; // 0x16DB
    void* WeaponPawnAnimSet; // 0x16E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayerAnimAssets[0x10]; // 0x16E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProceduralLayeringData[0x30]; // 0x16F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlayerAnimAssetsOverride[0x10]; // 0x1728 (Size: 0x10, Type: StructProperty)
    std::uint8_t bResetAnimAssetsOverrideOnUnEquip; // 0x1738 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0040[0x7]; // 0x1739
    void* WeaponPawnAnimLayerOverlayClass; // 0x1740 (Size: 0x8, Type: ClassProperty)
    void* WeaponAdditiveAnimSet; // 0x1748 (Size: 0x8, Type: ObjectProperty)
    void* PlayerAnimProxyTable; // 0x1750 (Size: 0x8, Type: ObjectProperty)
    void* HitReactionProxyTable; // 0x1758 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableTickAnimMontagesOnlyWhenOffscreen; // 0x1760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0041[0x3]; // 0x1761
    float MaxRangeToEnableTickAnimMontagesWhenOffscreen; // 0x1764 (Size: 0x4, Type: FloatProperty)
    void* WeaponPawnAnimsetOverride; // 0x1768 (Size: 0x8, Type: ObjectProperty)
    void* WeaponAdditiveAnimsetOverride; // 0x1770 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0042[0x40]; // 0x1778
    void* UnableToPerformActionMontageOverride; // 0x17B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveFireMode[0x20]; // 0x17C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FireModeData_HipFire[0x20]; // 0x17E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FireModeData_AimDownSight[0x20]; // 0x1800 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> FireModeData_Override; // 0x1820 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t Pad_0043[0x8]; // 0x1848
    void* ItemWrapModifier; // 0x1850 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0044[0x38]; // 0x1858
    void* LockOnTargetCandidate; // 0x1890 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0045[0x1]; // 0x1898
    std::uint8_t bIgnoreTryToFireSlotCooldownRestriction; // 0x1899 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0046[0x1]; // 0x189A
    std::uint8_t bFireConsumableAnalyticEvent; // 0x189B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0047[0x4]; // 0x189C
    FMulticastInlineDelegate OnWeaponHudKeyActionUpdated; // 0x18A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> FeedbackLineActionIdsToDim; // 0x18B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HudKeyActionData; // 0x18C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0048[0x120]; // 0x18D0
    void* CachedReloadComponent; // 0x19F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortWeaponItemization, OnWeaponRateOfFireChanged) == 696, "Offset mismatch for UFortWeaponItemization::OnWeaponRateOfFireChanged");
static_assert(offsetof(UFortWeaponItemization, OnWeaponRateOfFireScaleChanged) == 712, "Offset mismatch for UFortWeaponItemization::OnWeaponRateOfFireScaleChanged");
static_assert(offsetof(UFortWeaponItemization, OnPressTrigger) == 736, "Offset mismatch for UFortWeaponItemization::OnPressTrigger");
static_assert(offsetof(UFortWeaponItemization, OnReleaseTrigger) == 752, "Offset mismatch for UFortWeaponItemization::OnReleaseTrigger");
static_assert(offsetof(UFortWeaponItemization, TimeToEquip) == 840, "Offset mismatch for UFortWeaponItemization::TimeToEquip");
static_assert(offsetof(UFortWeaponItemization, bNeverUpdateLastFireTimeOnImpactForLocalClient) == 844, "Offset mismatch for UFortWeaponItemization::bNeverUpdateLastFireTimeOnImpactForLocalClient");
static_assert(offsetof(UFortWeaponItemization, bIsEquippingWeapon) == 864, "Offset mismatch for UFortWeaponItemization::bIsEquippingWeapon");
static_assert(offsetof(UFortWeaponItemization, IsEquippingWeaponChanged) == 872, "Offset mismatch for UFortWeaponItemization::IsEquippingWeaponChanged");
static_assert(offsetof(UFortWeaponItemization, bIsChargingWeapon) == 888, "Offset mismatch for UFortWeaponItemization::bIsChargingWeapon");
static_assert(offsetof(UFortWeaponItemization, bCheckCollisionsWithoutAbility) == 889, "Offset mismatch for UFortWeaponItemization::bCheckCollisionsWithoutAbility");
static_assert(offsetof(UFortWeaponItemization, bIsAimingConsumable) == 928, "Offset mismatch for UFortWeaponItemization::bIsAimingConsumable");
static_assert(offsetof(UFortWeaponItemization, OnLocalAmmoChanged) == 1008, "Offset mismatch for UFortWeaponItemization::OnLocalAmmoChanged");
static_assert(offsetof(UFortWeaponItemization, OnLocalReloadStarted) == 1024, "Offset mismatch for UFortWeaponItemization::OnLocalReloadStarted");
static_assert(offsetof(UFortWeaponItemization, OnReloadStarted) == 1040, "Offset mismatch for UFortWeaponItemization::OnReloadStarted");
static_assert(offsetof(UFortWeaponItemization, OnLocalReloadCancelled) == 1080, "Offset mismatch for UFortWeaponItemization::OnLocalReloadCancelled");
static_assert(offsetof(UFortWeaponItemization, OnLocalTargetingChanged) == 1120, "Offset mismatch for UFortWeaponItemization::OnLocalTargetingChanged");
static_assert(offsetof(UFortWeaponItemization, OnTargetingChanged) == 1136, "Offset mismatch for UFortWeaponItemization::OnTargetingChanged");
static_assert(offsetof(UFortWeaponItemization, OnSecondaryAbilityToggled) == 1152, "Offset mismatch for UFortWeaponItemization::OnSecondaryAbilityToggled");
static_assert(offsetof(UFortWeaponItemization, OnVisibilityChanged) == 1168, "Offset mismatch for UFortWeaponItemization::OnVisibilityChanged");
static_assert(offsetof(UFortWeaponItemization, OnWeaponSetActorHiddenInGame) == 1208, "Offset mismatch for UFortWeaponItemization::OnWeaponSetActorHiddenInGame");
static_assert(offsetof(UFortWeaponItemization, OnWeaponFireAudio) == 1224, "Offset mismatch for UFortWeaponItemization::OnWeaponFireAudio");
static_assert(offsetof(UFortWeaponItemization, OnWeaponFireAudioVisuals) == 1240, "Offset mismatch for UFortWeaponItemization::OnWeaponFireAudioVisuals");
static_assert(offsetof(UFortWeaponItemization, OnModAddedToWeapon) == 1256, "Offset mismatch for UFortWeaponItemization::OnModAddedToWeapon");
static_assert(offsetof(UFortWeaponItemization, OnModRemovedFromWeapon) == 1272, "Offset mismatch for UFortWeaponItemization::OnModRemovedFromWeapon");
static_assert(offsetof(UFortWeaponItemization, OnWeaponModSlotsEquipped) == 1288, "Offset mismatch for UFortWeaponItemization::OnWeaponModSlotsEquipped");
static_assert(offsetof(UFortWeaponItemization, OnWeaponModSlotsUnequipped) == 1304, "Offset mismatch for UFortWeaponItemization::OnWeaponModSlotsUnequipped");
static_assert(offsetof(UFortWeaponItemization, OnConsumeAmmo) == 1368, "Offset mismatch for UFortWeaponItemization::OnConsumeAmmo");
static_assert(offsetof(UFortWeaponItemization, OnTryReload) == 1384, "Offset mismatch for UFortWeaponItemization::OnTryReload");
static_assert(offsetof(UFortWeaponItemization, OnReticleColorChanged) == 1416, "Offset mismatch for UFortWeaponItemization::OnReticleColorChanged");
static_assert(offsetof(UFortWeaponItemization, bPreventRuntimeChangeToReticleDisplays) == 1544, "Offset mismatch for UFortWeaponItemization::bPreventRuntimeChangeToReticleDisplays");
static_assert(offsetof(UFortWeaponItemization, WeaponData) == 1552, "Offset mismatch for UFortWeaponItemization::WeaponData");
static_assert(offsetof(UFortWeaponItemization, CosmeticOverrideWeaponData) == 1560, "Offset mismatch for UFortWeaponItemization::CosmeticOverrideWeaponData");
static_assert(offsetof(UFortWeaponItemization, bImpactFXAttachedToHitActor) == 1568, "Offset mismatch for UFortWeaponItemization::bImpactFXAttachedToHitActor");
static_assert(offsetof(UFortWeaponItemization, GameplayAbilityBehaviorDistanceData) == 1592, "Offset mismatch for UFortWeaponItemization::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UFortWeaponItemization, HitNotifyAudioBank) == 1608, "Offset mismatch for UFortWeaponItemization::HitNotifyAudioBank");
static_assert(offsetof(UFortWeaponItemization, SoundLibraryComponent) == 1616, "Offset mismatch for UFortWeaponItemization::SoundLibraryComponent");
static_assert(offsetof(UFortWeaponItemization, bRemoveAbilitiesWhenRemovedFromInventory) == 1648, "Offset mismatch for UFortWeaponItemization::bRemoveAbilitiesWhenRemovedFromInventory");
static_assert(offsetof(UFortWeaponItemization, GrantedAbilityRemovalPolicy) == 1649, "Offset mismatch for UFortWeaponItemization::GrantedAbilityRemovalPolicy");
static_assert(offsetof(UFortWeaponItemization, BP_OnWeaponCosmeticsReady) == 1680, "Offset mismatch for UFortWeaponItemization::BP_OnWeaponCosmeticsReady");
static_assert(offsetof(UFortWeaponItemization, EquippedWeaponDestroyWrapperRepCounter) == 1736, "Offset mismatch for UFortWeaponItemization::EquippedWeaponDestroyWrapperRepCounter");
static_assert(offsetof(UFortWeaponItemization, EquippedWeaponDestroyedGameplayCue) == 1740, "Offset mismatch for UFortWeaponItemization::EquippedWeaponDestroyedGameplayCue");
static_assert(offsetof(UFortWeaponItemization, FireModeOverride) == 1744, "Offset mismatch for UFortWeaponItemization::FireModeOverride");
static_assert(offsetof(UFortWeaponItemization, OnFireModeChanged) == 1752, "Offset mismatch for UFortWeaponItemization::OnFireModeChanged");
static_assert(offsetof(UFortWeaponItemization, OnPlayImpactFXDelegate) == 1816, "Offset mismatch for UFortWeaponItemization::OnPlayImpactFXDelegate");
static_assert(offsetof(UFortWeaponItemization, OnBeamFiredDelegate) == 1832, "Offset mismatch for UFortWeaponItemization::OnBeamFiredDelegate");
static_assert(offsetof(UFortWeaponItemization, CachedImpactDetails) == 1920, "Offset mismatch for UFortWeaponItemization::CachedImpactDetails");
static_assert(offsetof(UFortWeaponItemization, MuzzleFlashDelayForAnimationTime) == 1988, "Offset mismatch for UFortWeaponItemization::MuzzleFlashDelayForAnimationTime");
static_assert(offsetof(UFortWeaponItemization, PersistentFXStartTime) == 1992, "Offset mismatch for UFortWeaponItemization::PersistentFXStartTime");
static_assert(offsetof(UFortWeaponItemization, PersistentSFXStartTime) == 1996, "Offset mismatch for UFortWeaponItemization::PersistentSFXStartTime");
static_assert(offsetof(UFortWeaponItemization, MinimumTimeForPersistentFX) == 2000, "Offset mismatch for UFortWeaponItemization::MinimumTimeForPersistentFX");
static_assert(offsetof(UFortWeaponItemization, OverrideItemWrapSoftPtr) == 2008, "Offset mismatch for UFortWeaponItemization::OverrideItemWrapSoftPtr");
static_assert(offsetof(UFortWeaponItemization, DevicePropertyHandles) == 2040, "Offset mismatch for UFortWeaponItemization::DevicePropertyHandles");
static_assert(offsetof(UFortWeaponItemization, ApplicableDeviceProperties) == 2056, "Offset mismatch for UFortWeaponItemization::ApplicableDeviceProperties");
static_assert(offsetof(UFortWeaponItemization, WeaponReduceMeshWorkSetting) == 2168, "Offset mismatch for UFortWeaponItemization::WeaponReduceMeshWorkSetting");
static_assert(offsetof(UFortWeaponItemization, bWeaponSupportsQuartzGunfire) == 2192, "Offset mismatch for UFortWeaponItemization::bWeaponSupportsQuartzGunfire");
static_assert(offsetof(UFortWeaponItemization, QuartzGunfireComp) == 2200, "Offset mismatch for UFortWeaponItemization::QuartzGunfireComp");
static_assert(offsetof(UFortWeaponItemization, bShouldDrawNativeReticle) == 2208, "Offset mismatch for UFortWeaponItemization::bShouldDrawNativeReticle");
static_assert(offsetof(UFortWeaponItemization, bShouldAlwaysDrawNativeMuzzleBlockedIndicator) == 2209, "Offset mismatch for UFortWeaponItemization::bShouldAlwaysDrawNativeMuzzleBlockedIndicator");
static_assert(offsetof(UFortWeaponItemization, bShouldForceCheckCollisions) == 2210, "Offset mismatch for UFortWeaponItemization::bShouldForceCheckCollisions");
static_assert(offsetof(UFortWeaponItemization, ReticleImage) == 2216, "Offset mismatch for UFortWeaponItemization::ReticleImage");
static_assert(offsetof(UFortWeaponItemization, AutoFireReticleImage) == 2224, "Offset mismatch for UFortWeaponItemization::AutoFireReticleImage");
static_assert(offsetof(UFortWeaponItemization, ReticleDefaultColor) == 2232, "Offset mismatch for UFortWeaponItemization::ReticleDefaultColor");
static_assert(offsetof(UFortWeaponItemization, ReticleEnemyColor) == 2236, "Offset mismatch for UFortWeaponItemization::ReticleEnemyColor");
static_assert(offsetof(UFortWeaponItemization, ReticleEnemyDefaultColor) == 2240, "Offset mismatch for UFortWeaponItemization::ReticleEnemyDefaultColor");
static_assert(offsetof(UFortWeaponItemization, ReticleBuildingColor) == 2244, "Offset mismatch for UFortWeaponItemization::ReticleBuildingColor");
static_assert(offsetof(UFortWeaponItemization, ReticleNoTargetColor) == 2248, "Offset mismatch for UFortWeaponItemization::ReticleNoTargetColor");
static_assert(offsetof(UFortWeaponItemization, HitNotifyReticleImage) == 2256, "Offset mismatch for UFortWeaponItemization::HitNotifyReticleImage");
static_assert(offsetof(UFortWeaponItemization, HitNotifyLocationReticleImage) == 2264, "Offset mismatch for UFortWeaponItemization::HitNotifyLocationReticleImage");
static_assert(offsetof(UFortWeaponItemization, CriticalHitNotifyLocationReticleImage) == 2272, "Offset mismatch for UFortWeaponItemization::CriticalHitNotifyLocationReticleImage");
static_assert(offsetof(UFortWeaponItemization, ReticleCenterImage) == 2280, "Offset mismatch for UFortWeaponItemization::ReticleCenterImage");
static_assert(offsetof(UFortWeaponItemization, ReticleCenterPerfectAimImage) == 2288, "Offset mismatch for UFortWeaponItemization::ReticleCenterPerfectAimImage");
static_assert(offsetof(UFortWeaponItemization, ReticleInvalidTargetImage) == 2296, "Offset mismatch for UFortWeaponItemization::ReticleInvalidTargetImage");
static_assert(offsetof(UFortWeaponItemization, MuzzleBlockedReticleImage) == 2304, "Offset mismatch for UFortWeaponItemization::MuzzleBlockedReticleImage");
static_assert(offsetof(UFortWeaponItemization, ReticleAltCenterImage) == 2312, "Offset mismatch for UFortWeaponItemization::ReticleAltCenterImage");
static_assert(offsetof(UFortWeaponItemization, ReticleOuterImage) == 2320, "Offset mismatch for UFortWeaponItemization::ReticleOuterImage");
static_assert(offsetof(UFortWeaponItemization, ReticleAltOuterImage) == 2328, "Offset mismatch for UFortWeaponItemization::ReticleAltOuterImage");
static_assert(offsetof(UFortWeaponItemization, ReticleDefaultPrimaryStrikeAngle) == 2336, "Offset mismatch for UFortWeaponItemization::ReticleDefaultPrimaryStrikeAngle");
static_assert(offsetof(UFortWeaponItemization, ReticleDefaultSecondaryStrikeAngle) == 2340, "Offset mismatch for UFortWeaponItemization::ReticleDefaultSecondaryStrikeAngle");
static_assert(offsetof(UFortWeaponItemization, bSupportsAutofireAtReticleTarget) == 2344, "Offset mismatch for UFortWeaponItemization::bSupportsAutofireAtReticleTarget");
static_assert(offsetof(UFortWeaponItemization, bEnableAutofireForAnyWeaponItemDefinition) == 2345, "Offset mismatch for UFortWeaponItemization::bEnableAutofireForAnyWeaponItemDefinition");
static_assert(offsetof(UFortWeaponItemization, bSupportsTapToFireMode) == 2346, "Offset mismatch for UFortWeaponItemization::bSupportsTapToFireMode");
static_assert(offsetof(UFortWeaponItemization, CameraBase3PClass) == 2352, "Offset mismatch for UFortWeaponItemization::CameraBase3PClass");
static_assert(offsetof(UFortWeaponItemization, CameraTargeting3PClass) == 2360, "Offset mismatch for UFortWeaponItemization::CameraTargeting3PClass");
static_assert(offsetof(UFortWeaponItemization, CameraTargeting3PReloadClass) == 2368, "Offset mismatch for UFortWeaponItemization::CameraTargeting3PReloadClass");
static_assert(offsetof(UFortWeaponItemization, CameraBase1PClass) == 2376, "Offset mismatch for UFortWeaponItemization::CameraBase1PClass");
static_assert(offsetof(UFortWeaponItemization, CameraTargeting1PClass) == 2384, "Offset mismatch for UFortWeaponItemization::CameraTargeting1PClass");
static_assert(offsetof(UFortWeaponItemization, DestroyedSound) == 2392, "Offset mismatch for UFortWeaponItemization::DestroyedSound");
static_assert(offsetof(UFortWeaponItemization, OutOfAmmoSound) == 2400, "Offset mismatch for UFortWeaponItemization::OutOfAmmoSound");
static_assert(offsetof(UFortWeaponItemization, ReloadSounds) == 2408, "Offset mismatch for UFortWeaponItemization::ReloadSounds");
static_assert(offsetof(UFortWeaponItemization, PrimaryFireSound1P) == 2432, "Offset mismatch for UFortWeaponItemization::PrimaryFireSound1P");
static_assert(offsetof(UFortWeaponItemization, PrimaryFireSound) == 2440, "Offset mismatch for UFortWeaponItemization::PrimaryFireSound");
static_assert(offsetof(UFortWeaponItemization, PrimaryFireStopSound1P) == 2464, "Offset mismatch for UFortWeaponItemization::PrimaryFireStopSound1P");
static_assert(offsetof(UFortWeaponItemization, PrimaryFireStopSound) == 2472, "Offset mismatch for UFortWeaponItemization::PrimaryFireStopSound");
static_assert(offsetof(UFortWeaponItemization, SecondaryFireSound) == 2496, "Offset mismatch for UFortWeaponItemization::SecondaryFireSound");
static_assert(offsetof(UFortWeaponItemization, SecondaryFireStopSound) == 2520, "Offset mismatch for UFortWeaponItemization::SecondaryFireStopSound");
static_assert(offsetof(UFortWeaponItemization, ChargeFireSound1P) == 2544, "Offset mismatch for UFortWeaponItemization::ChargeFireSound1P");
static_assert(offsetof(UFortWeaponItemization, ChargeFireSound) == 2568, "Offset mismatch for UFortWeaponItemization::ChargeFireSound");
static_assert(offsetof(UFortWeaponItemization, TargetingStartSound) == 2592, "Offset mismatch for UFortWeaponItemization::TargetingStartSound");
static_assert(offsetof(UFortWeaponItemization, TargetingEndSound) == 2600, "Offset mismatch for UFortWeaponItemization::TargetingEndSound");
static_assert(offsetof(UFortWeaponItemization, PrimaryFireSoundFadeOutTime) == 2608, "Offset mismatch for UFortWeaponItemization::PrimaryFireSoundFadeOutTime");
static_assert(offsetof(UFortWeaponItemization, IndestructibleHitSound) == 2616, "Offset mismatch for UFortWeaponItemization::IndestructibleHitSound");
static_assert(offsetof(UFortWeaponItemization, ImpactPhysicalSurfaceSounds) == 2624, "Offset mismatch for UFortWeaponItemization::ImpactPhysicalSurfaceSounds");
static_assert(offsetof(UFortWeaponItemization, ImpactPhysicalSurfaceEffects) == 2912, "Offset mismatch for UFortWeaponItemization::ImpactPhysicalSurfaceEffects");
static_assert(offsetof(UFortWeaponItemization, ImpactNiagaraPhysicalSurfaceEffectAssets) == 3192, "Offset mismatch for UFortWeaponItemization::ImpactNiagaraPhysicalSurfaceEffectAssets");
static_assert(offsetof(UFortWeaponItemization, NDCImpactFX) == 3208, "Offset mismatch for UFortWeaponItemization::NDCImpactFX");
static_assert(offsetof(UFortWeaponItemization, ImpactArraySupportData) == 3688, "Offset mismatch for UFortWeaponItemization::ImpactArraySupportData");
static_assert(offsetof(UFortWeaponItemization, ImpactCameraShake) == 3704, "Offset mismatch for UFortWeaponItemization::ImpactCameraShake");
static_assert(offsetof(UFortWeaponItemization, PrimaryForceFeedbackEffect) == 3712, "Offset mismatch for UFortWeaponItemization::PrimaryForceFeedbackEffect");
static_assert(offsetof(UFortWeaponItemization, SecondaryForceFeedbackEffect) == 3720, "Offset mismatch for UFortWeaponItemization::SecondaryForceFeedbackEffect");
static_assert(offsetof(UFortWeaponItemization, PrimaryImpactForceFeedbackEffect) == 3728, "Offset mismatch for UFortWeaponItemization::PrimaryImpactForceFeedbackEffect");
static_assert(offsetof(UFortWeaponItemization, SecondaryImpactForceFeedbackEffect) == 3736, "Offset mismatch for UFortWeaponItemization::SecondaryImpactForceFeedbackEffect");
static_assert(offsetof(UFortWeaponItemization, ImpactNiagaraPhysicalSurfaceEffectInstances) == 3744, "Offset mismatch for UFortWeaponItemization::ImpactNiagaraPhysicalSurfaceEffectInstances");
static_assert(offsetof(UFortWeaponItemization, DataStoreManager) == 3760, "Offset mismatch for UFortWeaponItemization::DataStoreManager");
static_assert(offsetof(UFortWeaponItemization, FireAudioChannels) == 3768, "Offset mismatch for UFortWeaponItemization::FireAudioChannels");
static_assert(offsetof(UFortWeaponItemization, ReloadAudioChannels) == 3800, "Offset mismatch for UFortWeaponItemization::ReloadAudioChannels");
static_assert(offsetof(UFortWeaponItemization, TargetingAudioChannels) == 3824, "Offset mismatch for UFortWeaponItemization::TargetingAudioChannels");
static_assert(offsetof(UFortWeaponItemization, SoundIndicatorComponent) == 3840, "Offset mismatch for UFortWeaponItemization::SoundIndicatorComponent");
static_assert(offsetof(UFortWeaponItemization, CurrentGunFireIndex) == 3848, "Offset mismatch for UFortWeaponItemization::CurrentGunFireIndex");
static_assert(offsetof(UFortWeaponItemization, WeaponMesh) == 3856, "Offset mismatch for UFortWeaponItemization::WeaponMesh");
static_assert(offsetof(UFortWeaponItemization, AllWeaponMeshes) == 3864, "Offset mismatch for UFortWeaponItemization::AllWeaponMeshes");
static_assert(offsetof(UFortWeaponItemization, DefaultWeaponMaterials) == 3880, "Offset mismatch for UFortWeaponItemization::DefaultWeaponMaterials");
static_assert(offsetof(UFortWeaponItemization, OriginalMaterialMap) == 3896, "Offset mismatch for UFortWeaponItemization::OriginalMaterialMap");
static_assert(offsetof(UFortWeaponItemization, FireAudioChannelWantsToPlay) == 3912, "Offset mismatch for UFortWeaponItemization::FireAudioChannelWantsToPlay");
static_assert(offsetof(UFortWeaponItemization, ProtoWeaponParentMaterial) == 3928, "Offset mismatch for UFortWeaponItemization::ProtoWeaponParentMaterial");
static_assert(offsetof(UFortWeaponItemization, WrapSectionMask) == 3960, "Offset mismatch for UFortWeaponItemization::WrapSectionMask");
static_assert(offsetof(UFortWeaponItemization, bUsingSecondaryFireAudio) == 3964, "Offset mismatch for UFortWeaponItemization::bUsingSecondaryFireAudio");
static_assert(offsetof(UFortWeaponItemization, bHasCachedAdditionalMeshes) == 3965, "Offset mismatch for UFortWeaponItemization::bHasCachedAdditionalMeshes");
static_assert(offsetof(UFortWeaponItemization, CurrentReticleColor) == 3968, "Offset mismatch for UFortWeaponItemization::CurrentReticleColor");
static_assert(offsetof(UFortWeaponItemization, OpticRuntimeData) == 3972, "Offset mismatch for UFortWeaponItemization::OpticRuntimeData");
static_assert(offsetof(UFortWeaponItemization, CurrentDamageStartLocation) == 3984, "Offset mismatch for UFortWeaponItemization::CurrentDamageStartLocation");
static_assert(offsetof(UFortWeaponItemization, CurrentAdjustedAimDirection) == 4008, "Offset mismatch for UFortWeaponItemization::CurrentAdjustedAimDirection");
static_assert(offsetof(UFortWeaponItemization, CurrentProjectedImpactDistance) == 4032, "Offset mismatch for UFortWeaponItemization::CurrentProjectedImpactDistance");
static_assert(offsetof(UFortWeaponItemization, FireFXSignificance) == 4036, "Offset mismatch for UFortWeaponItemization::FireFXSignificance");
static_assert(offsetof(UFortWeaponItemization, LastFireTime) == 4060, "Offset mismatch for UFortWeaponItemization::LastFireTime");
static_assert(offsetof(UFortWeaponItemization, LastSecondaryFireTime) == 4064, "Offset mismatch for UFortWeaponItemization::LastSecondaryFireTime");
static_assert(offsetof(UFortWeaponItemization, LastFireTimeVerified) == 4068, "Offset mismatch for UFortWeaponItemization::LastFireTimeVerified");
static_assert(offsetof(UFortWeaponItemization, bAllowTargeting) == 4080, "Offset mismatch for UFortWeaponItemization::bAllowTargeting");
static_assert(offsetof(UFortWeaponItemization, bAllowReloadWhenFull) == 4081, "Offset mismatch for UFortWeaponItemization::bAllowReloadWhenFull");
static_assert(offsetof(UFortWeaponItemization, bIsTryingAutoReload) == 4082, "Offset mismatch for UFortWeaponItemization::bIsTryingAutoReload");
static_assert(offsetof(UFortWeaponItemization, BlendingOutPawnMontage) == 4088, "Offset mismatch for UFortWeaponItemization::BlendingOutPawnMontage");
static_assert(offsetof(UFortWeaponItemization, bIsInReleaseSecondaryFireScope) == 4096, "Offset mismatch for UFortWeaponItemization::bIsInReleaseSecondaryFireScope");
static_assert(offsetof(UFortWeaponItemization, TimerIntervalAdjustment) == 4100, "Offset mismatch for UFortWeaponItemization::TimerIntervalAdjustment");
static_assert(offsetof(UFortWeaponItemization, InputQueueTimePercent) == 4104, "Offset mismatch for UFortWeaponItemization::InputQueueTimePercent");
static_assert(offsetof(UFortWeaponItemization, LastTargetingTransitionTime) == 4108, "Offset mismatch for UFortWeaponItemization::LastTargetingTransitionTime");
static_assert(offsetof(UFortWeaponItemization, TargetSourceOffset) == 4112, "Offset mismatch for UFortWeaponItemization::TargetSourceOffset");
static_assert(offsetof(UFortWeaponItemization, TargetSourceOffsetWhileCrouched) == 4136, "Offset mismatch for UFortWeaponItemization::TargetSourceOffsetWhileCrouched");
static_assert(offsetof(UFortWeaponItemization, TargetSourceOffsetWhileTargeting) == 4160, "Offset mismatch for UFortWeaponItemization::TargetSourceOffsetWhileTargeting");
static_assert(offsetof(UFortWeaponItemization, TraceThroughPawnsLimit) == 4184, "Offset mismatch for UFortWeaponItemization::TraceThroughPawnsLimit");
static_assert(offsetof(UFortWeaponItemization, TraceThroughBuildingsLimit) == 4188, "Offset mismatch for UFortWeaponItemization::TraceThroughBuildingsLimit");
static_assert(offsetof(UFortWeaponItemization, TraceThroughLandscapeLimit) == 4192, "Offset mismatch for UFortWeaponItemization::TraceThroughLandscapeLimit");
static_assert(offsetof(UFortWeaponItemization, ProjectilePitchOffset) == 4196, "Offset mismatch for UFortWeaponItemization::ProjectilePitchOffset");
static_assert(offsetof(UFortWeaponItemization, LastReloadTime) == 4200, "Offset mismatch for UFortWeaponItemization::LastReloadTime");
static_assert(offsetof(UFortWeaponItemization, LastSuccessfulReloadTime) == 4204, "Offset mismatch for UFortWeaponItemization::LastSuccessfulReloadTime");
static_assert(offsetof(UFortWeaponItemization, CurrentReloadDuration) == 4208, "Offset mismatch for UFortWeaponItemization::CurrentReloadDuration");
static_assert(offsetof(UFortWeaponItemization, ItemEntryGuid) == 4216, "Offset mismatch for UFortWeaponItemization::ItemEntryGuid");
static_assert(offsetof(UFortWeaponItemization, TrackerGuid) == 4232, "Offset mismatch for UFortWeaponItemization::TrackerGuid");
static_assert(offsetof(UFortWeaponItemization, WeaponLevel) == 4248, "Offset mismatch for UFortWeaponItemization::WeaponLevel");
static_assert(offsetof(UFortWeaponItemization, CachedForcedLeanComponent) == 4256, "Offset mismatch for UFortWeaponItemization::CachedForcedLeanComponent");
static_assert(offsetof(UFortWeaponItemization, AmmoCount) == 4312, "Offset mismatch for UFortWeaponItemization::AmmoCount");
static_assert(offsetof(UFortWeaponItemization, PhantomReserveAmmo) == 4316, "Offset mismatch for UFortWeaponItemization::PhantomReserveAmmo");
static_assert(offsetof(UFortWeaponItemization, BurstFireCounter) == 4336, "Offset mismatch for UFortWeaponItemization::BurstFireCounter");
static_assert(offsetof(UFortWeaponItemization, ChargeTime) == 4340, "Offset mismatch for UFortWeaponItemization::ChargeTime");
static_assert(offsetof(UFortWeaponItemization, AccumulatedChargeTime) == 4344, "Offset mismatch for UFortWeaponItemization::AccumulatedChargeTime");
static_assert(offsetof(UFortWeaponItemization, LastChargeTime) == 4348, "Offset mismatch for UFortWeaponItemization::LastChargeTime");
static_assert(offsetof(UFortWeaponItemization, StartChargeGameplayCue) == 4352, "Offset mismatch for UFortWeaponItemization::StartChargeGameplayCue");
static_assert(offsetof(UFortWeaponItemization, MaxChargeGameplayCue) == 4356, "Offset mismatch for UFortWeaponItemization::MaxChargeGameplayCue");
static_assert(offsetof(UFortWeaponItemization, OutOfAmmoTextOverrideFailTag) == 4360, "Offset mismatch for UFortWeaponItemization::OutOfAmmoTextOverrideFailTag");
static_assert(offsetof(UFortWeaponItemization, NoSpareAmmoToReloadTextOverrideFailTag) == 4364, "Offset mismatch for UFortWeaponItemization::NoSpareAmmoToReloadTextOverrideFailTag");
static_assert(offsetof(UFortWeaponItemization, FireCanInterruptEquipQuery) == 4368, "Offset mismatch for UFortWeaponItemization::FireCanInterruptEquipQuery");
static_assert(offsetof(UFortWeaponItemization, CurrentShotLogIndex) == 4440, "Offset mismatch for UFortWeaponItemization::CurrentShotLogIndex");
static_assert(offsetof(UFortWeaponItemization, ShotLogFlags) == 4448, "Offset mismatch for UFortWeaponItemization::ShotLogFlags");
static_assert(offsetof(UFortWeaponItemization, bInitializedWeaponItem) == 4464, "Offset mismatch for UFortWeaponItemization::bInitializedWeaponItem");
static_assert(offsetof(UFortWeaponItemization, bCompletedAppliedAlterationsLoad) == 4465, "Offset mismatch for UFortWeaponItemization::bCompletedAppliedAlterationsLoad");
static_assert(offsetof(UFortWeaponItemization, bCanDeferSecondaryFireInput) == 4466, "Offset mismatch for UFortWeaponItemization::bCanDeferSecondaryFireInput");
static_assert(offsetof(UFortWeaponItemization, bAttachToRootOnDestruction) == 4467, "Offset mismatch for UFortWeaponItemization::bAttachToRootOnDestruction");
static_assert(offsetof(UFortWeaponItemization, AttachToRootOnDestructionOffset) == 4472, "Offset mismatch for UFortWeaponItemization::AttachToRootOnDestructionOffset");
static_assert(offsetof(UFortWeaponItemization, AttachToRootOnDestructionInterpSpeed) == 4496, "Offset mismatch for UFortWeaponItemization::AttachToRootOnDestructionInterpSpeed");
static_assert(offsetof(UFortWeaponItemization, bShowWhenHolstered) == 4500, "Offset mismatch for UFortWeaponItemization::bShowWhenHolstered");
static_assert(offsetof(UFortWeaponItemization, CustomPartsToShowWhenHolstered) == 4504, "Offset mismatch for UFortWeaponItemization::CustomPartsToShowWhenHolstered");
static_assert(offsetof(UFortWeaponItemization, ChargeStatusPack) == 4520, "Offset mismatch for UFortWeaponItemization::ChargeStatusPack");
static_assert(offsetof(UFortWeaponItemization, AttachedTrajectoryIndicator) == 4568, "Offset mismatch for UFortWeaponItemization::AttachedTrajectoryIndicator");
static_assert(offsetof(UFortWeaponItemization, ActiveAbility) == 4576, "Offset mismatch for UFortWeaponItemization::ActiveAbility");
static_assert(offsetof(UFortWeaponItemization, PrimaryAbilitySpecHandle) == 4584, "Offset mismatch for UFortWeaponItemization::PrimaryAbilitySpecHandle");
static_assert(offsetof(UFortWeaponItemization, SecondaryAbilitySpecHandle) == 4608, "Offset mismatch for UFortWeaponItemization::SecondaryAbilitySpecHandle");
static_assert(offsetof(UFortWeaponItemization, ReloadAbilitySpecHandle) == 4632, "Offset mismatch for UFortWeaponItemization::ReloadAbilitySpecHandle");
static_assert(offsetof(UFortWeaponItemization, ImpactAbilitySpecHandle) == 4656, "Offset mismatch for UFortWeaponItemization::ImpactAbilitySpecHandle");
static_assert(offsetof(UFortWeaponItemization, ReticleTraceOverrideSpecHandle) == 4680, "Offset mismatch for UFortWeaponItemization::ReticleTraceOverrideSpecHandle");
static_assert(offsetof(UFortWeaponItemization, EquippedAbilityHandles) == 4704, "Offset mismatch for UFortWeaponItemization::EquippedAbilityHandles");
static_assert(offsetof(UFortWeaponItemization, EquippedAbilitySetHandles) == 4720, "Offset mismatch for UFortWeaponItemization::EquippedAbilitySetHandles");
static_assert(offsetof(UFortWeaponItemization, AppliedAlterations) == 4736, "Offset mismatch for UFortWeaponItemization::AppliedAlterations");
static_assert(offsetof(UFortWeaponItemization, WeaponModSlots) == 4752, "Offset mismatch for UFortWeaponItemization::WeaponModSlots");
static_assert(offsetof(UFortWeaponItemization, ItemOverrideData) == 4768, "Offset mismatch for UFortWeaponItemization::ItemOverrideData");
static_assert(offsetof(UFortWeaponItemization, EquippedWeaponModSlots) == 4848, "Offset mismatch for UFortWeaponItemization::EquippedWeaponModSlots");
static_assert(offsetof(UFortWeaponItemization, ModRuntimeDataCache) == 4864, "Offset mismatch for UFortWeaponItemization::ModRuntimeDataCache");
static_assert(offsetof(UFortWeaponItemization, ModDebugComp) == 4872, "Offset mismatch for UFortWeaponItemization::ModDebugComp");
static_assert(offsetof(UFortWeaponItemization, OpticDefinition) == 4880, "Offset mismatch for UFortWeaponItemization::OpticDefinition");
static_assert(offsetof(UFortWeaponItemization, OpticConfig) == 4888, "Offset mismatch for UFortWeaponItemization::OpticConfig");
static_assert(offsetof(UFortWeaponItemization, PreviousWeaponVariants) == 4952, "Offset mismatch for UFortWeaponItemization::PreviousWeaponVariants");
static_assert(offsetof(UFortWeaponItemization, AppliedItemWrap) == 5064, "Offset mismatch for UFortWeaponItemization::AppliedItemWrap");
static_assert(offsetof(UFortWeaponItemization, CachedFXManager) == 5072, "Offset mismatch for UFortWeaponItemization::CachedFXManager");
static_assert(offsetof(UFortWeaponItemization, CachedSignificanceManager) == 5080, "Offset mismatch for UFortWeaponItemization::CachedSignificanceManager");
static_assert(offsetof(UFortWeaponItemization, MuzzleSocketName) == 5128, "Offset mismatch for UFortWeaponItemization::MuzzleSocketName");
static_assert(offsetof(UFortWeaponItemization, MuzzleFalloffSocketName) == 5132, "Offset mismatch for UFortWeaponItemization::MuzzleFalloffSocketName");
static_assert(offsetof(UFortWeaponItemization, WeaponHandSocketNameOverride) == 5136, "Offset mismatch for UFortWeaponItemization::WeaponHandSocketNameOverride");
static_assert(offsetof(UFortWeaponItemization, LeftHandWeaponHandSocketNameOverride) == 5140, "Offset mismatch for UFortWeaponItemization::LeftHandWeaponHandSocketNameOverride");
static_assert(offsetof(UFortWeaponItemization, WeaponHandSocketPartOverrides) == 5144, "Offset mismatch for UFortWeaponItemization::WeaponHandSocketPartOverrides");
static_assert(offsetof(UFortWeaponItemization, bForceOverrideGenerateOverlapEvents) == 5168, "Offset mismatch for UFortWeaponItemization::bForceOverrideGenerateOverlapEvents");
static_assert(offsetof(UFortWeaponItemization, MaxWeaponSwitchNetworkWaitTime) == 5452, "Offset mismatch for UFortWeaponItemization::MaxWeaponSwitchNetworkWaitTime");
static_assert(offsetof(UFortWeaponItemization, MaxWeaponSwitchNetworkWaitTimeHotfix) == 5456, "Offset mismatch for UFortWeaponItemization::MaxWeaponSwitchNetworkWaitTimeHotfix");
static_assert(offsetof(UFortWeaponItemization, MaxWeaponAttackNetworkWaitTime) == 5496, "Offset mismatch for UFortWeaponItemization::MaxWeaponAttackNetworkWaitTime");
static_assert(offsetof(UFortWeaponItemization, LastFireAbilityTime) == 5500, "Offset mismatch for UFortWeaponItemization::LastFireAbilityTime");
static_assert(offsetof(UFortWeaponItemization, OnGetAimRotOverride) == 5560, "Offset mismatch for UFortWeaponItemization::OnGetAimRotOverride");
static_assert(offsetof(UFortWeaponItemization, OnAlterationAdded) == 5576, "Offset mismatch for UFortWeaponItemization::OnAlterationAdded");
static_assert(offsetof(UFortWeaponItemization, ModLeftHandPoseOffsets) == 5592, "Offset mismatch for UFortWeaponItemization::ModLeftHandPoseOffsets");
static_assert(offsetof(UFortWeaponItemization, ModReloadAnimData) == 5608, "Offset mismatch for UFortWeaponItemization::ModReloadAnimData");
static_assert(offsetof(UFortWeaponItemization, EquipAnimation) == 5624, "Offset mismatch for UFortWeaponItemization::EquipAnimation");
static_assert(offsetof(UFortWeaponItemization, FirstTimeEquipAnimation) == 5632, "Offset mismatch for UFortWeaponItemization::FirstTimeEquipAnimation");
static_assert(offsetof(UFortWeaponItemization, WeaponFirstTimeEquipAnimation) == 5640, "Offset mismatch for UFortWeaponItemization::WeaponFirstTimeEquipAnimation");
static_assert(offsetof(UFortWeaponItemization, FirstTimeEquipTag) == 5648, "Offset mismatch for UFortWeaponItemization::FirstTimeEquipTag");
static_assert(offsetof(UFortWeaponItemization, bResetOnItemRemoval) == 5652, "Offset mismatch for UFortWeaponItemization::bResetOnItemRemoval");
static_assert(offsetof(UFortWeaponItemization, ReloadAnimation) == 5656, "Offset mismatch for UFortWeaponItemization::ReloadAnimation");
static_assert(offsetof(UFortWeaponItemization, CustomReloadAnimationPerAmmoToFill) == 5720, "Offset mismatch for UFortWeaponItemization::CustomReloadAnimationPerAmmoToFill");
static_assert(offsetof(UFortWeaponItemization, PrimaryAbilityAnimation) == 5736, "Offset mismatch for UFortWeaponItemization::PrimaryAbilityAnimation");
static_assert(offsetof(UFortWeaponItemization, SecondaryAbilityAnimation) == 5744, "Offset mismatch for UFortWeaponItemization::SecondaryAbilityAnimation");
static_assert(offsetof(UFortWeaponItemization, WeaponEquipMontage) == 5752, "Offset mismatch for UFortWeaponItemization::WeaponEquipMontage");
static_assert(offsetof(UFortWeaponItemization, WeaponReloadMontage) == 5760, "Offset mismatch for UFortWeaponItemization::WeaponReloadMontage");
static_assert(offsetof(UFortWeaponItemization, CustomWeaponReloadMontagePerAmmoToFill) == 5768, "Offset mismatch for UFortWeaponItemization::CustomWeaponReloadMontagePerAmmoToFill");
static_assert(offsetof(UFortWeaponItemization, WeaponPrimaryAbilityMontage) == 5784, "Offset mismatch for UFortWeaponItemization::WeaponPrimaryAbilityMontage");
static_assert(offsetof(UFortWeaponItemization, WeaponSecondaryAbilityMontage) == 5792, "Offset mismatch for UFortWeaponItemization::WeaponSecondaryAbilityMontage");
static_assert(offsetof(UFortWeaponItemization, FirstPersonData) == 5800, "Offset mismatch for UFortWeaponItemization::FirstPersonData");
static_assert(offsetof(UFortWeaponItemization, PoseOffsetAnimSequence) == 5832, "Offset mismatch for UFortWeaponItemization::PoseOffsetAnimSequence");
static_assert(offsetof(UFortWeaponItemization, PoseOffsetAnimSequenceFemaleOverride) == 5840, "Offset mismatch for UFortWeaponItemization::PoseOffsetAnimSequenceFemaleOverride");
static_assert(offsetof(UFortWeaponItemization, WeaponCoreAnimation) == 5848, "Offset mismatch for UFortWeaponItemization::WeaponCoreAnimation");
static_assert(offsetof(UFortWeaponItemization, WeaponCoreAnimationOverride) == 5849, "Offset mismatch for UFortWeaponItemization::WeaponCoreAnimationOverride");
static_assert(offsetof(UFortWeaponItemization, HandGripType) == 5850, "Offset mismatch for UFortWeaponItemization::HandGripType");
static_assert(offsetof(UFortWeaponItemization, WeaponPawnAnimSet) == 5856, "Offset mismatch for UFortWeaponItemization::WeaponPawnAnimSet");
static_assert(offsetof(UFortWeaponItemization, PlayerAnimAssets) == 5864, "Offset mismatch for UFortWeaponItemization::PlayerAnimAssets");
static_assert(offsetof(UFortWeaponItemization, ProceduralLayeringData) == 5880, "Offset mismatch for UFortWeaponItemization::ProceduralLayeringData");
static_assert(offsetof(UFortWeaponItemization, PlayerAnimAssetsOverride) == 5928, "Offset mismatch for UFortWeaponItemization::PlayerAnimAssetsOverride");
static_assert(offsetof(UFortWeaponItemization, bResetAnimAssetsOverrideOnUnEquip) == 5944, "Offset mismatch for UFortWeaponItemization::bResetAnimAssetsOverrideOnUnEquip");
static_assert(offsetof(UFortWeaponItemization, WeaponPawnAnimLayerOverlayClass) == 5952, "Offset mismatch for UFortWeaponItemization::WeaponPawnAnimLayerOverlayClass");
static_assert(offsetof(UFortWeaponItemization, WeaponAdditiveAnimSet) == 5960, "Offset mismatch for UFortWeaponItemization::WeaponAdditiveAnimSet");
static_assert(offsetof(UFortWeaponItemization, PlayerAnimProxyTable) == 5968, "Offset mismatch for UFortWeaponItemization::PlayerAnimProxyTable");
static_assert(offsetof(UFortWeaponItemization, HitReactionProxyTable) == 5976, "Offset mismatch for UFortWeaponItemization::HitReactionProxyTable");
static_assert(offsetof(UFortWeaponItemization, bEnableTickAnimMontagesOnlyWhenOffscreen) == 5984, "Offset mismatch for UFortWeaponItemization::bEnableTickAnimMontagesOnlyWhenOffscreen");
static_assert(offsetof(UFortWeaponItemization, MaxRangeToEnableTickAnimMontagesWhenOffscreen) == 5988, "Offset mismatch for UFortWeaponItemization::MaxRangeToEnableTickAnimMontagesWhenOffscreen");
static_assert(offsetof(UFortWeaponItemization, WeaponPawnAnimsetOverride) == 5992, "Offset mismatch for UFortWeaponItemization::WeaponPawnAnimsetOverride");
static_assert(offsetof(UFortWeaponItemization, WeaponAdditiveAnimsetOverride) == 6000, "Offset mismatch for UFortWeaponItemization::WeaponAdditiveAnimsetOverride");
static_assert(offsetof(UFortWeaponItemization, UnableToPerformActionMontageOverride) == 6072, "Offset mismatch for UFortWeaponItemization::UnableToPerformActionMontageOverride");
static_assert(offsetof(UFortWeaponItemization, ActiveFireMode) == 6080, "Offset mismatch for UFortWeaponItemization::ActiveFireMode");
static_assert(offsetof(UFortWeaponItemization, FireModeData_HipFire) == 6112, "Offset mismatch for UFortWeaponItemization::FireModeData_HipFire");
static_assert(offsetof(UFortWeaponItemization, FireModeData_AimDownSight) == 6144, "Offset mismatch for UFortWeaponItemization::FireModeData_AimDownSight");
static_assert(offsetof(UFortWeaponItemization, FireModeData_Override) == 6176, "Offset mismatch for UFortWeaponItemization::FireModeData_Override");
static_assert(offsetof(UFortWeaponItemization, ItemWrapModifier) == 6224, "Offset mismatch for UFortWeaponItemization::ItemWrapModifier");
static_assert(offsetof(UFortWeaponItemization, LockOnTargetCandidate) == 6288, "Offset mismatch for UFortWeaponItemization::LockOnTargetCandidate");
static_assert(offsetof(UFortWeaponItemization, bIgnoreTryToFireSlotCooldownRestriction) == 6297, "Offset mismatch for UFortWeaponItemization::bIgnoreTryToFireSlotCooldownRestriction");
static_assert(offsetof(UFortWeaponItemization, bFireConsumableAnalyticEvent) == 6299, "Offset mismatch for UFortWeaponItemization::bFireConsumableAnalyticEvent");
static_assert(offsetof(UFortWeaponItemization, OnWeaponHudKeyActionUpdated) == 6304, "Offset mismatch for UFortWeaponItemization::OnWeaponHudKeyActionUpdated");
static_assert(offsetof(UFortWeaponItemization, FeedbackLineActionIdsToDim) == 6320, "Offset mismatch for UFortWeaponItemization::FeedbackLineActionIdsToDim");
static_assert(offsetof(UFortWeaponItemization, HudKeyActionData) == 6336, "Offset mismatch for UFortWeaponItemization::HudKeyActionData");
static_assert(offsetof(UFortWeaponItemization, CachedReloadComponent) == 6640, "Offset mismatch for UFortWeaponItemization::CachedReloadComponent");

// /Script/ItemizationRuntime.InventorySetupDataNativeFort
// Kind: Class; super: InventorySetupDataNativeBasic
class UInventorySetupDataNativeFort
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> FortInventoryList; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInventorySetupDataNativeFort, FortInventoryList) == 72, "Offset mismatch for UInventorySetupDataNativeFort::FortInventoryList");

// /Script/ItemizationRuntime.ItemDefinition
// Kind: Class; super: FortWeaponItemDefinition
class UItemDefinition
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t WeaponActorClass[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t WeaponMeshOverride[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bHideWeaponDefaultActorMeshUntilCosmeticsInitialized; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t IntrinsicOverrideWrap[0x20]; // 0x0108 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t WeaponStatHandle[0x20]; // 0x0128 (Size: 0x20, Type: StructProperty)
    std::uint8_t AbilitySet[0x20]; // 0x0148 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AlterationSlotsLoadoutRow[0x4]; // 0x0168 (Size: 0x4, Type: NameProperty)
    std::uint8_t BaselineAlterationSlotsLoadoutRow[0x4]; // 0x016C (Size: 0x4, Type: NameProperty)
    std::uint8_t BaseAlteration[0x20]; // 0x0170 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BaseCosmeticAlteration[0x20]; // 0x0190 (Size: 0x20, Type: SoftObjectProperty)
    TSoftClassPtr<void> PrimaryFireAbility; // 0x01B0 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0002[0x18]; // 0x01D8
    TSoftClassPtr<void> SecondaryFireAbility; // 0x01F0 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0218
    TArray<void*> EquippedAbilities; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EquippedAbilitySet[0x20]; // 0x0240 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AmmoData[0x20]; // 0x0260 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> AdditionalDataFields; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    float LowAmmoPercentage; // 0x0290 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TriggerType; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SecondaryTriggerType; // 0x0295 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DisplayTier; // 0x0296 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowSecondaryFireToInterruptPrimary; // 0x0297 (Size: 0x1, Type: BoolProperty)
    // 0x0297 BoolProperty bOnlyConsumeSpareAmmoWhenRechargingToTheClip (shared storage)
    // 0x0297 BoolProperty bRechargeAmmoToClip (shared storage)
    // 0x0297 BoolProperty bShouldMagazineSizeDisplayInfinity (shared storage)
    // 0x0297 BoolProperty bShowAmmoAsPercent (shared storage)
    // 0x0297 BoolProperty bShowRemainingAmmoOnly (shared storage)
    // 0x0297 BoolProperty bUsesCustomAmmoType (shared storage)
    // 0x0297 BoolProperty bUsesPhantomReserveAmmo (shared storage)
    std::uint8_t bAllowAutoReload; // 0x0298 (Size: 0x1, Type: BoolProperty)
    // 0x0298 BoolProperty bAllowTargetingDuringReload (shared storage)
    // 0x0298 BoolProperty bAlwaysChargeUpToMin (shared storage)
    // 0x0298 BoolProperty bCanFireWhileInstigatorTethered (shared storage)
    // 0x0298 BoolProperty bCanFireWhileNotTargetedInVehicle (shared storage)
    // 0x0298 BoolProperty bNoFireOnReleaseBeforeMinChargeTime (shared storage)
    // 0x0298 BoolProperty bPrimaryFireForcesTargetingInVehicle (shared storage)
    // 0x0298 BoolProperty bTargetingPreventsReload (shared storage)
    std::uint8_t bCanAutofireWhileFalling; // 0x0299 (Size: 0x1, Type: BoolProperty)
    // 0x0299 BoolProperty bCanAutofireWithMinimalCharge (shared storage)
    // 0x0299 BoolProperty bEndAbilityOnChargeEnd (shared storage)
    // 0x0299 BoolProperty bReticleCornerOutsideSpreadRadius (shared storage)
    // 0x0299 BoolProperty bShouldAutofireChargedShotWhenTargetAcquired (shared storage)
    // 0x0299 BoolProperty bShouldAutofireSecondaryAbility (shared storage)
    // 0x0299 BoolProperty bUpdateLastFireTimeOnDischarge (shared storage)
    std::uint8_t AssistTargetType; // 0x029A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableWeaponMeshOverrideUpdates; // 0x029B (Size: 0x1, Type: BoolProperty)
    // 0x029B BoolProperty bEquippedCharacterPartsMatchWeaponVisibility (shared storage)
    // 0x029B BoolProperty bForceReticleTrace (shared storage)
    // 0x029B BoolProperty bIsModifiableWeapon (shared storage)
    // 0x029B BoolProperty bModsHidden (shared storage)
    // 0x029B BoolProperty bRequestClientPreload (shared storage)
    // 0x029B BoolProperty bValidForLastEquipped (shared storage)
    float HitNotifyDuration; // 0x029C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReticleImage[0x20]; // 0x02A0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ReticleCornerAngles; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReticleCenterImage[0x20]; // 0x02D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ReticleCenterPerfectAimImage[0x20]; // 0x02F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ReticleCenterImageOffset[0x10]; // 0x0310 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReticleInvalidTargetImage[0x20]; // 0x0320 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnalyticTags[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t PlayerGrantedGameplayTags[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t CosmeticGatingTags[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    TArray<void*> ActualAnalyticFNames; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequiredWeaponParent[0x20]; // 0x03B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BoneSetsToHide[0x20]; // 0x03D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t WeaponMovementSpeedStats[0xC0]; // 0x03F0 (Size: 0xC0, Type: StructProperty)
    void* AimAssistConfiguration; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CreativeTagsHelper[0x1]; // 0x04B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UItemDefinition, WeaponActorClass) == 192, "Offset mismatch for UItemDefinition::WeaponActorClass");
static_assert(offsetof(UItemDefinition, WeaponMeshOverride) == 224, "Offset mismatch for UItemDefinition::WeaponMeshOverride");
static_assert(offsetof(UItemDefinition, bHideWeaponDefaultActorMeshUntilCosmeticsInitialized) == 256, "Offset mismatch for UItemDefinition::bHideWeaponDefaultActorMeshUntilCosmeticsInitialized");
static_assert(offsetof(UItemDefinition, IntrinsicOverrideWrap) == 264, "Offset mismatch for UItemDefinition::IntrinsicOverrideWrap");
static_assert(offsetof(UItemDefinition, WeaponStatHandle) == 296, "Offset mismatch for UItemDefinition::WeaponStatHandle");
static_assert(offsetof(UItemDefinition, AbilitySet) == 328, "Offset mismatch for UItemDefinition::AbilitySet");
static_assert(offsetof(UItemDefinition, AlterationSlotsLoadoutRow) == 360, "Offset mismatch for UItemDefinition::AlterationSlotsLoadoutRow");
static_assert(offsetof(UItemDefinition, BaselineAlterationSlotsLoadoutRow) == 364, "Offset mismatch for UItemDefinition::BaselineAlterationSlotsLoadoutRow");
static_assert(offsetof(UItemDefinition, BaseAlteration) == 368, "Offset mismatch for UItemDefinition::BaseAlteration");
static_assert(offsetof(UItemDefinition, BaseCosmeticAlteration) == 400, "Offset mismatch for UItemDefinition::BaseCosmeticAlteration");
static_assert(offsetof(UItemDefinition, PrimaryFireAbility) == 432, "Offset mismatch for UItemDefinition::PrimaryFireAbility");
static_assert(offsetof(UItemDefinition, SecondaryFireAbility) == 496, "Offset mismatch for UItemDefinition::SecondaryFireAbility");
static_assert(offsetof(UItemDefinition, EquippedAbilities) == 560, "Offset mismatch for UItemDefinition::EquippedAbilities");
static_assert(offsetof(UItemDefinition, EquippedAbilitySet) == 576, "Offset mismatch for UItemDefinition::EquippedAbilitySet");
static_assert(offsetof(UItemDefinition, AmmoData) == 608, "Offset mismatch for UItemDefinition::AmmoData");
static_assert(offsetof(UItemDefinition, AdditionalDataFields) == 640, "Offset mismatch for UItemDefinition::AdditionalDataFields");
static_assert(offsetof(UItemDefinition, LowAmmoPercentage) == 656, "Offset mismatch for UItemDefinition::LowAmmoPercentage");
static_assert(offsetof(UItemDefinition, TriggerType) == 660, "Offset mismatch for UItemDefinition::TriggerType");
static_assert(offsetof(UItemDefinition, SecondaryTriggerType) == 661, "Offset mismatch for UItemDefinition::SecondaryTriggerType");
static_assert(offsetof(UItemDefinition, DisplayTier) == 662, "Offset mismatch for UItemDefinition::DisplayTier");
static_assert(offsetof(UItemDefinition, bAllowSecondaryFireToInterruptPrimary) == 663, "Offset mismatch for UItemDefinition::bAllowSecondaryFireToInterruptPrimary");
static_assert(offsetof(UItemDefinition, bAllowAutoReload) == 664, "Offset mismatch for UItemDefinition::bAllowAutoReload");
static_assert(offsetof(UItemDefinition, bCanAutofireWhileFalling) == 665, "Offset mismatch for UItemDefinition::bCanAutofireWhileFalling");
static_assert(offsetof(UItemDefinition, AssistTargetType) == 666, "Offset mismatch for UItemDefinition::AssistTargetType");
static_assert(offsetof(UItemDefinition, bEnableWeaponMeshOverrideUpdates) == 667, "Offset mismatch for UItemDefinition::bEnableWeaponMeshOverrideUpdates");
static_assert(offsetof(UItemDefinition, HitNotifyDuration) == 668, "Offset mismatch for UItemDefinition::HitNotifyDuration");
static_assert(offsetof(UItemDefinition, ReticleImage) == 672, "Offset mismatch for UItemDefinition::ReticleImage");
static_assert(offsetof(UItemDefinition, ReticleCornerAngles) == 704, "Offset mismatch for UItemDefinition::ReticleCornerAngles");
static_assert(offsetof(UItemDefinition, ReticleCenterImage) == 720, "Offset mismatch for UItemDefinition::ReticleCenterImage");
static_assert(offsetof(UItemDefinition, ReticleCenterPerfectAimImage) == 752, "Offset mismatch for UItemDefinition::ReticleCenterPerfectAimImage");
static_assert(offsetof(UItemDefinition, ReticleCenterImageOffset) == 784, "Offset mismatch for UItemDefinition::ReticleCenterImageOffset");
static_assert(offsetof(UItemDefinition, ReticleInvalidTargetImage) == 800, "Offset mismatch for UItemDefinition::ReticleInvalidTargetImage");
static_assert(offsetof(UItemDefinition, AnalyticTags) == 832, "Offset mismatch for UItemDefinition::AnalyticTags");
static_assert(offsetof(UItemDefinition, PlayerGrantedGameplayTags) == 864, "Offset mismatch for UItemDefinition::PlayerGrantedGameplayTags");
static_assert(offsetof(UItemDefinition, CosmeticGatingTags) == 896, "Offset mismatch for UItemDefinition::CosmeticGatingTags");
static_assert(offsetof(UItemDefinition, ActualAnalyticFNames) == 928, "Offset mismatch for UItemDefinition::ActualAnalyticFNames");
static_assert(offsetof(UItemDefinition, RequiredWeaponParent) == 944, "Offset mismatch for UItemDefinition::RequiredWeaponParent");
static_assert(offsetof(UItemDefinition, BoneSetsToHide) == 976, "Offset mismatch for UItemDefinition::BoneSetsToHide");
static_assert(offsetof(UItemDefinition, WeaponMovementSpeedStats) == 1008, "Offset mismatch for UItemDefinition::WeaponMovementSpeedStats");
static_assert(offsetof(UItemDefinition, AimAssistConfiguration) == 1200, "Offset mismatch for UItemDefinition::AimAssistConfiguration");
static_assert(offsetof(UItemDefinition, CreativeTagsHelper) == 1208, "Offset mismatch for UItemDefinition::CreativeTagsHelper");

// /Script/ItemizationRuntime.ItemizationGameFeatureObserver
// Kind: Class; super: Object
class UItemizationGameFeatureObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationRuntime.ItemizationPickupEngineSubsystem
// Kind: Class; super: EngineSubsystem
class UItemizationPickupEngineSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizationRuntime.ItemizationSubsystem
// Kind: Class; super: WorldSubsystem
class UItemizationSubsystem
{
public:
    std::uint8_t Opaque[1];
};
