/**
 * decamp dumper generated SDK
 * Package: /Script/EventModeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EventModeRuntime.EventModeFocusActor
// Kind: ScriptStruct; super: none
struct FEventModeFocusActor
{
public:
    std::uint8_t Target[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    float Distance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t Offset[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float FOV; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEventModeFocusActor, Target) == 0, "Offset mismatch for FEventModeFocusActor::Target");
static_assert(offsetof(FEventModeFocusActor, Distance) == 32, "Offset mismatch for FEventModeFocusActor::Distance");
static_assert(offsetof(FEventModeFocusActor, Offset) == 40, "Offset mismatch for FEventModeFocusActor::Offset");
static_assert(offsetof(FEventModeFocusActor, FOV) == 64, "Offset mismatch for FEventModeFocusActor::FOV");

// /Script/EventModeRuntime.EventModeWidgetCachedData
// Kind: ScriptStruct; super: none
struct FEventModeWidgetCachedData
{
public:
    std::uint8_t Slot; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> Widget; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FEventModeWidgetCachedData, Slot) == 0, "Offset mismatch for FEventModeWidgetCachedData::Slot");
static_assert(offsetof(FEventModeWidgetCachedData, Widget) == 4, "Offset mismatch for FEventModeWidgetCachedData::Widget");

// /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode
// Kind: Class; super: GameFrameworkComponent
class UFortGameFrameworkComponent_EventMode
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t ActivatorAsset[0x20]; // 0x0120 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> UIExtensions; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> TaggedUIExtensions; // 0x0150 (Size: 0x10, Type: MapProperty)
    TArray<void*> FocusActors; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0170
    void* InputComponent; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedWidgetData; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> CurrentlyFocusedActor; // 0x0190 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortGameFrameworkComponent_EventMode, ActivatorAsset) == 288, "Offset mismatch for UFortGameFrameworkComponent_EventMode::ActivatorAsset");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, UIExtensions) == 320, "Offset mismatch for UFortGameFrameworkComponent_EventMode::UIExtensions");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, TaggedUIExtensions) == 336, "Offset mismatch for UFortGameFrameworkComponent_EventMode::TaggedUIExtensions");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, FocusActors) == 352, "Offset mismatch for UFortGameFrameworkComponent_EventMode::FocusActors");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, InputComponent) == 376, "Offset mismatch for UFortGameFrameworkComponent_EventMode::InputComponent");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, CachedWidgetData) == 384, "Offset mismatch for UFortGameFrameworkComponent_EventMode::CachedWidgetData");
static_assert(offsetof(UFortGameFrameworkComponent_EventMode, CurrentlyFocusedActor) == 400, "Offset mismatch for UFortGameFrameworkComponent_EventMode::CurrentlyFocusedActor");

// /Script/EventModeRuntime.FortWeapon_EventMode
// Kind: Class; super: FortWeapon
class UFortWeapon_EventMode
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

static_assert(offsetof(UFortWeapon_EventMode, OnWeaponRateOfFireChanged) == 696, "Offset mismatch for UFortWeapon_EventMode::OnWeaponRateOfFireChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponRateOfFireScaleChanged) == 712, "Offset mismatch for UFortWeapon_EventMode::OnWeaponRateOfFireScaleChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnPressTrigger) == 736, "Offset mismatch for UFortWeapon_EventMode::OnPressTrigger");
static_assert(offsetof(UFortWeapon_EventMode, OnReleaseTrigger) == 752, "Offset mismatch for UFortWeapon_EventMode::OnReleaseTrigger");
static_assert(offsetof(UFortWeapon_EventMode, TimeToEquip) == 840, "Offset mismatch for UFortWeapon_EventMode::TimeToEquip");
static_assert(offsetof(UFortWeapon_EventMode, bNeverUpdateLastFireTimeOnImpactForLocalClient) == 844, "Offset mismatch for UFortWeapon_EventMode::bNeverUpdateLastFireTimeOnImpactForLocalClient");
static_assert(offsetof(UFortWeapon_EventMode, bIsEquippingWeapon) == 864, "Offset mismatch for UFortWeapon_EventMode::bIsEquippingWeapon");
static_assert(offsetof(UFortWeapon_EventMode, IsEquippingWeaponChanged) == 872, "Offset mismatch for UFortWeapon_EventMode::IsEquippingWeaponChanged");
static_assert(offsetof(UFortWeapon_EventMode, bIsChargingWeapon) == 888, "Offset mismatch for UFortWeapon_EventMode::bIsChargingWeapon");
static_assert(offsetof(UFortWeapon_EventMode, bCheckCollisionsWithoutAbility) == 889, "Offset mismatch for UFortWeapon_EventMode::bCheckCollisionsWithoutAbility");
static_assert(offsetof(UFortWeapon_EventMode, bIsAimingConsumable) == 928, "Offset mismatch for UFortWeapon_EventMode::bIsAimingConsumable");
static_assert(offsetof(UFortWeapon_EventMode, OnLocalAmmoChanged) == 1008, "Offset mismatch for UFortWeapon_EventMode::OnLocalAmmoChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnLocalReloadStarted) == 1024, "Offset mismatch for UFortWeapon_EventMode::OnLocalReloadStarted");
static_assert(offsetof(UFortWeapon_EventMode, OnReloadStarted) == 1040, "Offset mismatch for UFortWeapon_EventMode::OnReloadStarted");
static_assert(offsetof(UFortWeapon_EventMode, OnLocalReloadCancelled) == 1080, "Offset mismatch for UFortWeapon_EventMode::OnLocalReloadCancelled");
static_assert(offsetof(UFortWeapon_EventMode, OnLocalTargetingChanged) == 1120, "Offset mismatch for UFortWeapon_EventMode::OnLocalTargetingChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnTargetingChanged) == 1136, "Offset mismatch for UFortWeapon_EventMode::OnTargetingChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnSecondaryAbilityToggled) == 1152, "Offset mismatch for UFortWeapon_EventMode::OnSecondaryAbilityToggled");
static_assert(offsetof(UFortWeapon_EventMode, OnVisibilityChanged) == 1168, "Offset mismatch for UFortWeapon_EventMode::OnVisibilityChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponSetActorHiddenInGame) == 1208, "Offset mismatch for UFortWeapon_EventMode::OnWeaponSetActorHiddenInGame");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponFireAudio) == 1224, "Offset mismatch for UFortWeapon_EventMode::OnWeaponFireAudio");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponFireAudioVisuals) == 1240, "Offset mismatch for UFortWeapon_EventMode::OnWeaponFireAudioVisuals");
static_assert(offsetof(UFortWeapon_EventMode, OnModAddedToWeapon) == 1256, "Offset mismatch for UFortWeapon_EventMode::OnModAddedToWeapon");
static_assert(offsetof(UFortWeapon_EventMode, OnModRemovedFromWeapon) == 1272, "Offset mismatch for UFortWeapon_EventMode::OnModRemovedFromWeapon");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponModSlotsEquipped) == 1288, "Offset mismatch for UFortWeapon_EventMode::OnWeaponModSlotsEquipped");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponModSlotsUnequipped) == 1304, "Offset mismatch for UFortWeapon_EventMode::OnWeaponModSlotsUnequipped");
static_assert(offsetof(UFortWeapon_EventMode, OnConsumeAmmo) == 1368, "Offset mismatch for UFortWeapon_EventMode::OnConsumeAmmo");
static_assert(offsetof(UFortWeapon_EventMode, OnTryReload) == 1384, "Offset mismatch for UFortWeapon_EventMode::OnTryReload");
static_assert(offsetof(UFortWeapon_EventMode, OnReticleColorChanged) == 1416, "Offset mismatch for UFortWeapon_EventMode::OnReticleColorChanged");
static_assert(offsetof(UFortWeapon_EventMode, bPreventRuntimeChangeToReticleDisplays) == 1544, "Offset mismatch for UFortWeapon_EventMode::bPreventRuntimeChangeToReticleDisplays");
static_assert(offsetof(UFortWeapon_EventMode, WeaponData) == 1552, "Offset mismatch for UFortWeapon_EventMode::WeaponData");
static_assert(offsetof(UFortWeapon_EventMode, CosmeticOverrideWeaponData) == 1560, "Offset mismatch for UFortWeapon_EventMode::CosmeticOverrideWeaponData");
static_assert(offsetof(UFortWeapon_EventMode, bImpactFXAttachedToHitActor) == 1568, "Offset mismatch for UFortWeapon_EventMode::bImpactFXAttachedToHitActor");
static_assert(offsetof(UFortWeapon_EventMode, GameplayAbilityBehaviorDistanceData) == 1592, "Offset mismatch for UFortWeapon_EventMode::GameplayAbilityBehaviorDistanceData");
static_assert(offsetof(UFortWeapon_EventMode, HitNotifyAudioBank) == 1608, "Offset mismatch for UFortWeapon_EventMode::HitNotifyAudioBank");
static_assert(offsetof(UFortWeapon_EventMode, SoundLibraryComponent) == 1616, "Offset mismatch for UFortWeapon_EventMode::SoundLibraryComponent");
static_assert(offsetof(UFortWeapon_EventMode, bRemoveAbilitiesWhenRemovedFromInventory) == 1648, "Offset mismatch for UFortWeapon_EventMode::bRemoveAbilitiesWhenRemovedFromInventory");
static_assert(offsetof(UFortWeapon_EventMode, GrantedAbilityRemovalPolicy) == 1649, "Offset mismatch for UFortWeapon_EventMode::GrantedAbilityRemovalPolicy");
static_assert(offsetof(UFortWeapon_EventMode, BP_OnWeaponCosmeticsReady) == 1680, "Offset mismatch for UFortWeapon_EventMode::BP_OnWeaponCosmeticsReady");
static_assert(offsetof(UFortWeapon_EventMode, EquippedWeaponDestroyWrapperRepCounter) == 1736, "Offset mismatch for UFortWeapon_EventMode::EquippedWeaponDestroyWrapperRepCounter");
static_assert(offsetof(UFortWeapon_EventMode, EquippedWeaponDestroyedGameplayCue) == 1740, "Offset mismatch for UFortWeapon_EventMode::EquippedWeaponDestroyedGameplayCue");
static_assert(offsetof(UFortWeapon_EventMode, FireModeOverride) == 1744, "Offset mismatch for UFortWeapon_EventMode::FireModeOverride");
static_assert(offsetof(UFortWeapon_EventMode, OnFireModeChanged) == 1752, "Offset mismatch for UFortWeapon_EventMode::OnFireModeChanged");
static_assert(offsetof(UFortWeapon_EventMode, OnPlayImpactFXDelegate) == 1816, "Offset mismatch for UFortWeapon_EventMode::OnPlayImpactFXDelegate");
static_assert(offsetof(UFortWeapon_EventMode, OnBeamFiredDelegate) == 1832, "Offset mismatch for UFortWeapon_EventMode::OnBeamFiredDelegate");
static_assert(offsetof(UFortWeapon_EventMode, CachedImpactDetails) == 1920, "Offset mismatch for UFortWeapon_EventMode::CachedImpactDetails");
static_assert(offsetof(UFortWeapon_EventMode, MuzzleFlashDelayForAnimationTime) == 1988, "Offset mismatch for UFortWeapon_EventMode::MuzzleFlashDelayForAnimationTime");
static_assert(offsetof(UFortWeapon_EventMode, PersistentFXStartTime) == 1992, "Offset mismatch for UFortWeapon_EventMode::PersistentFXStartTime");
static_assert(offsetof(UFortWeapon_EventMode, PersistentSFXStartTime) == 1996, "Offset mismatch for UFortWeapon_EventMode::PersistentSFXStartTime");
static_assert(offsetof(UFortWeapon_EventMode, MinimumTimeForPersistentFX) == 2000, "Offset mismatch for UFortWeapon_EventMode::MinimumTimeForPersistentFX");
static_assert(offsetof(UFortWeapon_EventMode, OverrideItemWrapSoftPtr) == 2008, "Offset mismatch for UFortWeapon_EventMode::OverrideItemWrapSoftPtr");
static_assert(offsetof(UFortWeapon_EventMode, DevicePropertyHandles) == 2040, "Offset mismatch for UFortWeapon_EventMode::DevicePropertyHandles");
static_assert(offsetof(UFortWeapon_EventMode, ApplicableDeviceProperties) == 2056, "Offset mismatch for UFortWeapon_EventMode::ApplicableDeviceProperties");
static_assert(offsetof(UFortWeapon_EventMode, WeaponReduceMeshWorkSetting) == 2168, "Offset mismatch for UFortWeapon_EventMode::WeaponReduceMeshWorkSetting");
static_assert(offsetof(UFortWeapon_EventMode, bWeaponSupportsQuartzGunfire) == 2192, "Offset mismatch for UFortWeapon_EventMode::bWeaponSupportsQuartzGunfire");
static_assert(offsetof(UFortWeapon_EventMode, QuartzGunfireComp) == 2200, "Offset mismatch for UFortWeapon_EventMode::QuartzGunfireComp");
static_assert(offsetof(UFortWeapon_EventMode, bShouldDrawNativeReticle) == 2208, "Offset mismatch for UFortWeapon_EventMode::bShouldDrawNativeReticle");
static_assert(offsetof(UFortWeapon_EventMode, bShouldAlwaysDrawNativeMuzzleBlockedIndicator) == 2209, "Offset mismatch for UFortWeapon_EventMode::bShouldAlwaysDrawNativeMuzzleBlockedIndicator");
static_assert(offsetof(UFortWeapon_EventMode, bShouldForceCheckCollisions) == 2210, "Offset mismatch for UFortWeapon_EventMode::bShouldForceCheckCollisions");
static_assert(offsetof(UFortWeapon_EventMode, ReticleImage) == 2216, "Offset mismatch for UFortWeapon_EventMode::ReticleImage");
static_assert(offsetof(UFortWeapon_EventMode, AutoFireReticleImage) == 2224, "Offset mismatch for UFortWeapon_EventMode::AutoFireReticleImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleDefaultColor) == 2232, "Offset mismatch for UFortWeapon_EventMode::ReticleDefaultColor");
static_assert(offsetof(UFortWeapon_EventMode, ReticleEnemyColor) == 2236, "Offset mismatch for UFortWeapon_EventMode::ReticleEnemyColor");
static_assert(offsetof(UFortWeapon_EventMode, ReticleEnemyDefaultColor) == 2240, "Offset mismatch for UFortWeapon_EventMode::ReticleEnemyDefaultColor");
static_assert(offsetof(UFortWeapon_EventMode, ReticleBuildingColor) == 2244, "Offset mismatch for UFortWeapon_EventMode::ReticleBuildingColor");
static_assert(offsetof(UFortWeapon_EventMode, ReticleNoTargetColor) == 2248, "Offset mismatch for UFortWeapon_EventMode::ReticleNoTargetColor");
static_assert(offsetof(UFortWeapon_EventMode, HitNotifyReticleImage) == 2256, "Offset mismatch for UFortWeapon_EventMode::HitNotifyReticleImage");
static_assert(offsetof(UFortWeapon_EventMode, HitNotifyLocationReticleImage) == 2264, "Offset mismatch for UFortWeapon_EventMode::HitNotifyLocationReticleImage");
static_assert(offsetof(UFortWeapon_EventMode, CriticalHitNotifyLocationReticleImage) == 2272, "Offset mismatch for UFortWeapon_EventMode::CriticalHitNotifyLocationReticleImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleCenterImage) == 2280, "Offset mismatch for UFortWeapon_EventMode::ReticleCenterImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleCenterPerfectAimImage) == 2288, "Offset mismatch for UFortWeapon_EventMode::ReticleCenterPerfectAimImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleInvalidTargetImage) == 2296, "Offset mismatch for UFortWeapon_EventMode::ReticleInvalidTargetImage");
static_assert(offsetof(UFortWeapon_EventMode, MuzzleBlockedReticleImage) == 2304, "Offset mismatch for UFortWeapon_EventMode::MuzzleBlockedReticleImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleAltCenterImage) == 2312, "Offset mismatch for UFortWeapon_EventMode::ReticleAltCenterImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleOuterImage) == 2320, "Offset mismatch for UFortWeapon_EventMode::ReticleOuterImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleAltOuterImage) == 2328, "Offset mismatch for UFortWeapon_EventMode::ReticleAltOuterImage");
static_assert(offsetof(UFortWeapon_EventMode, ReticleDefaultPrimaryStrikeAngle) == 2336, "Offset mismatch for UFortWeapon_EventMode::ReticleDefaultPrimaryStrikeAngle");
static_assert(offsetof(UFortWeapon_EventMode, ReticleDefaultSecondaryStrikeAngle) == 2340, "Offset mismatch for UFortWeapon_EventMode::ReticleDefaultSecondaryStrikeAngle");
static_assert(offsetof(UFortWeapon_EventMode, bSupportsAutofireAtReticleTarget) == 2344, "Offset mismatch for UFortWeapon_EventMode::bSupportsAutofireAtReticleTarget");
static_assert(offsetof(UFortWeapon_EventMode, bEnableAutofireForAnyWeaponItemDefinition) == 2345, "Offset mismatch for UFortWeapon_EventMode::bEnableAutofireForAnyWeaponItemDefinition");
static_assert(offsetof(UFortWeapon_EventMode, bSupportsTapToFireMode) == 2346, "Offset mismatch for UFortWeapon_EventMode::bSupportsTapToFireMode");
static_assert(offsetof(UFortWeapon_EventMode, CameraBase3PClass) == 2352, "Offset mismatch for UFortWeapon_EventMode::CameraBase3PClass");
static_assert(offsetof(UFortWeapon_EventMode, CameraTargeting3PClass) == 2360, "Offset mismatch for UFortWeapon_EventMode::CameraTargeting3PClass");
static_assert(offsetof(UFortWeapon_EventMode, CameraTargeting3PReloadClass) == 2368, "Offset mismatch for UFortWeapon_EventMode::CameraTargeting3PReloadClass");
static_assert(offsetof(UFortWeapon_EventMode, CameraBase1PClass) == 2376, "Offset mismatch for UFortWeapon_EventMode::CameraBase1PClass");
static_assert(offsetof(UFortWeapon_EventMode, CameraTargeting1PClass) == 2384, "Offset mismatch for UFortWeapon_EventMode::CameraTargeting1PClass");
static_assert(offsetof(UFortWeapon_EventMode, DestroyedSound) == 2392, "Offset mismatch for UFortWeapon_EventMode::DestroyedSound");
static_assert(offsetof(UFortWeapon_EventMode, OutOfAmmoSound) == 2400, "Offset mismatch for UFortWeapon_EventMode::OutOfAmmoSound");
static_assert(offsetof(UFortWeapon_EventMode, ReloadSounds) == 2408, "Offset mismatch for UFortWeapon_EventMode::ReloadSounds");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryFireSound1P) == 2432, "Offset mismatch for UFortWeapon_EventMode::PrimaryFireSound1P");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryFireSound) == 2440, "Offset mismatch for UFortWeapon_EventMode::PrimaryFireSound");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryFireStopSound1P) == 2464, "Offset mismatch for UFortWeapon_EventMode::PrimaryFireStopSound1P");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryFireStopSound) == 2472, "Offset mismatch for UFortWeapon_EventMode::PrimaryFireStopSound");
static_assert(offsetof(UFortWeapon_EventMode, SecondaryFireSound) == 2496, "Offset mismatch for UFortWeapon_EventMode::SecondaryFireSound");
static_assert(offsetof(UFortWeapon_EventMode, SecondaryFireStopSound) == 2520, "Offset mismatch for UFortWeapon_EventMode::SecondaryFireStopSound");
static_assert(offsetof(UFortWeapon_EventMode, ChargeFireSound1P) == 2544, "Offset mismatch for UFortWeapon_EventMode::ChargeFireSound1P");
static_assert(offsetof(UFortWeapon_EventMode, ChargeFireSound) == 2568, "Offset mismatch for UFortWeapon_EventMode::ChargeFireSound");
static_assert(offsetof(UFortWeapon_EventMode, TargetingStartSound) == 2592, "Offset mismatch for UFortWeapon_EventMode::TargetingStartSound");
static_assert(offsetof(UFortWeapon_EventMode, TargetingEndSound) == 2600, "Offset mismatch for UFortWeapon_EventMode::TargetingEndSound");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryFireSoundFadeOutTime) == 2608, "Offset mismatch for UFortWeapon_EventMode::PrimaryFireSoundFadeOutTime");
static_assert(offsetof(UFortWeapon_EventMode, IndestructibleHitSound) == 2616, "Offset mismatch for UFortWeapon_EventMode::IndestructibleHitSound");
static_assert(offsetof(UFortWeapon_EventMode, ImpactPhysicalSurfaceSounds) == 2624, "Offset mismatch for UFortWeapon_EventMode::ImpactPhysicalSurfaceSounds");
static_assert(offsetof(UFortWeapon_EventMode, ImpactPhysicalSurfaceEffects) == 2912, "Offset mismatch for UFortWeapon_EventMode::ImpactPhysicalSurfaceEffects");
static_assert(offsetof(UFortWeapon_EventMode, ImpactNiagaraPhysicalSurfaceEffectAssets) == 3192, "Offset mismatch for UFortWeapon_EventMode::ImpactNiagaraPhysicalSurfaceEffectAssets");
static_assert(offsetof(UFortWeapon_EventMode, NDCImpactFX) == 3208, "Offset mismatch for UFortWeapon_EventMode::NDCImpactFX");
static_assert(offsetof(UFortWeapon_EventMode, ImpactArraySupportData) == 3688, "Offset mismatch for UFortWeapon_EventMode::ImpactArraySupportData");
static_assert(offsetof(UFortWeapon_EventMode, ImpactCameraShake) == 3704, "Offset mismatch for UFortWeapon_EventMode::ImpactCameraShake");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryForceFeedbackEffect) == 3712, "Offset mismatch for UFortWeapon_EventMode::PrimaryForceFeedbackEffect");
static_assert(offsetof(UFortWeapon_EventMode, SecondaryForceFeedbackEffect) == 3720, "Offset mismatch for UFortWeapon_EventMode::SecondaryForceFeedbackEffect");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryImpactForceFeedbackEffect) == 3728, "Offset mismatch for UFortWeapon_EventMode::PrimaryImpactForceFeedbackEffect");
static_assert(offsetof(UFortWeapon_EventMode, SecondaryImpactForceFeedbackEffect) == 3736, "Offset mismatch for UFortWeapon_EventMode::SecondaryImpactForceFeedbackEffect");
static_assert(offsetof(UFortWeapon_EventMode, ImpactNiagaraPhysicalSurfaceEffectInstances) == 3744, "Offset mismatch for UFortWeapon_EventMode::ImpactNiagaraPhysicalSurfaceEffectInstances");
static_assert(offsetof(UFortWeapon_EventMode, DataStoreManager) == 3760, "Offset mismatch for UFortWeapon_EventMode::DataStoreManager");
static_assert(offsetof(UFortWeapon_EventMode, FireAudioChannels) == 3768, "Offset mismatch for UFortWeapon_EventMode::FireAudioChannels");
static_assert(offsetof(UFortWeapon_EventMode, ReloadAudioChannels) == 3800, "Offset mismatch for UFortWeapon_EventMode::ReloadAudioChannels");
static_assert(offsetof(UFortWeapon_EventMode, TargetingAudioChannels) == 3824, "Offset mismatch for UFortWeapon_EventMode::TargetingAudioChannels");
static_assert(offsetof(UFortWeapon_EventMode, SoundIndicatorComponent) == 3840, "Offset mismatch for UFortWeapon_EventMode::SoundIndicatorComponent");
static_assert(offsetof(UFortWeapon_EventMode, CurrentGunFireIndex) == 3848, "Offset mismatch for UFortWeapon_EventMode::CurrentGunFireIndex");
static_assert(offsetof(UFortWeapon_EventMode, WeaponMesh) == 3856, "Offset mismatch for UFortWeapon_EventMode::WeaponMesh");
static_assert(offsetof(UFortWeapon_EventMode, AllWeaponMeshes) == 3864, "Offset mismatch for UFortWeapon_EventMode::AllWeaponMeshes");
static_assert(offsetof(UFortWeapon_EventMode, DefaultWeaponMaterials) == 3880, "Offset mismatch for UFortWeapon_EventMode::DefaultWeaponMaterials");
static_assert(offsetof(UFortWeapon_EventMode, OriginalMaterialMap) == 3896, "Offset mismatch for UFortWeapon_EventMode::OriginalMaterialMap");
static_assert(offsetof(UFortWeapon_EventMode, FireAudioChannelWantsToPlay) == 3912, "Offset mismatch for UFortWeapon_EventMode::FireAudioChannelWantsToPlay");
static_assert(offsetof(UFortWeapon_EventMode, ProtoWeaponParentMaterial) == 3928, "Offset mismatch for UFortWeapon_EventMode::ProtoWeaponParentMaterial");
static_assert(offsetof(UFortWeapon_EventMode, WrapSectionMask) == 3960, "Offset mismatch for UFortWeapon_EventMode::WrapSectionMask");
static_assert(offsetof(UFortWeapon_EventMode, bUsingSecondaryFireAudio) == 3964, "Offset mismatch for UFortWeapon_EventMode::bUsingSecondaryFireAudio");
static_assert(offsetof(UFortWeapon_EventMode, bHasCachedAdditionalMeshes) == 3965, "Offset mismatch for UFortWeapon_EventMode::bHasCachedAdditionalMeshes");
static_assert(offsetof(UFortWeapon_EventMode, CurrentReticleColor) == 3968, "Offset mismatch for UFortWeapon_EventMode::CurrentReticleColor");
static_assert(offsetof(UFortWeapon_EventMode, OpticRuntimeData) == 3972, "Offset mismatch for UFortWeapon_EventMode::OpticRuntimeData");
static_assert(offsetof(UFortWeapon_EventMode, CurrentDamageStartLocation) == 3984, "Offset mismatch for UFortWeapon_EventMode::CurrentDamageStartLocation");
static_assert(offsetof(UFortWeapon_EventMode, CurrentAdjustedAimDirection) == 4008, "Offset mismatch for UFortWeapon_EventMode::CurrentAdjustedAimDirection");
static_assert(offsetof(UFortWeapon_EventMode, CurrentProjectedImpactDistance) == 4032, "Offset mismatch for UFortWeapon_EventMode::CurrentProjectedImpactDistance");
static_assert(offsetof(UFortWeapon_EventMode, FireFXSignificance) == 4036, "Offset mismatch for UFortWeapon_EventMode::FireFXSignificance");
static_assert(offsetof(UFortWeapon_EventMode, LastFireTime) == 4060, "Offset mismatch for UFortWeapon_EventMode::LastFireTime");
static_assert(offsetof(UFortWeapon_EventMode, LastSecondaryFireTime) == 4064, "Offset mismatch for UFortWeapon_EventMode::LastSecondaryFireTime");
static_assert(offsetof(UFortWeapon_EventMode, LastFireTimeVerified) == 4068, "Offset mismatch for UFortWeapon_EventMode::LastFireTimeVerified");
static_assert(offsetof(UFortWeapon_EventMode, bAllowTargeting) == 4080, "Offset mismatch for UFortWeapon_EventMode::bAllowTargeting");
static_assert(offsetof(UFortWeapon_EventMode, bAllowReloadWhenFull) == 4081, "Offset mismatch for UFortWeapon_EventMode::bAllowReloadWhenFull");
static_assert(offsetof(UFortWeapon_EventMode, bIsTryingAutoReload) == 4082, "Offset mismatch for UFortWeapon_EventMode::bIsTryingAutoReload");
static_assert(offsetof(UFortWeapon_EventMode, BlendingOutPawnMontage) == 4088, "Offset mismatch for UFortWeapon_EventMode::BlendingOutPawnMontage");
static_assert(offsetof(UFortWeapon_EventMode, bIsInReleaseSecondaryFireScope) == 4096, "Offset mismatch for UFortWeapon_EventMode::bIsInReleaseSecondaryFireScope");
static_assert(offsetof(UFortWeapon_EventMode, TimerIntervalAdjustment) == 4100, "Offset mismatch for UFortWeapon_EventMode::TimerIntervalAdjustment");
static_assert(offsetof(UFortWeapon_EventMode, InputQueueTimePercent) == 4104, "Offset mismatch for UFortWeapon_EventMode::InputQueueTimePercent");
static_assert(offsetof(UFortWeapon_EventMode, LastTargetingTransitionTime) == 4108, "Offset mismatch for UFortWeapon_EventMode::LastTargetingTransitionTime");
static_assert(offsetof(UFortWeapon_EventMode, TargetSourceOffset) == 4112, "Offset mismatch for UFortWeapon_EventMode::TargetSourceOffset");
static_assert(offsetof(UFortWeapon_EventMode, TargetSourceOffsetWhileCrouched) == 4136, "Offset mismatch for UFortWeapon_EventMode::TargetSourceOffsetWhileCrouched");
static_assert(offsetof(UFortWeapon_EventMode, TargetSourceOffsetWhileTargeting) == 4160, "Offset mismatch for UFortWeapon_EventMode::TargetSourceOffsetWhileTargeting");
static_assert(offsetof(UFortWeapon_EventMode, TraceThroughPawnsLimit) == 4184, "Offset mismatch for UFortWeapon_EventMode::TraceThroughPawnsLimit");
static_assert(offsetof(UFortWeapon_EventMode, TraceThroughBuildingsLimit) == 4188, "Offset mismatch for UFortWeapon_EventMode::TraceThroughBuildingsLimit");
static_assert(offsetof(UFortWeapon_EventMode, TraceThroughLandscapeLimit) == 4192, "Offset mismatch for UFortWeapon_EventMode::TraceThroughLandscapeLimit");
static_assert(offsetof(UFortWeapon_EventMode, ProjectilePitchOffset) == 4196, "Offset mismatch for UFortWeapon_EventMode::ProjectilePitchOffset");
static_assert(offsetof(UFortWeapon_EventMode, LastReloadTime) == 4200, "Offset mismatch for UFortWeapon_EventMode::LastReloadTime");
static_assert(offsetof(UFortWeapon_EventMode, LastSuccessfulReloadTime) == 4204, "Offset mismatch for UFortWeapon_EventMode::LastSuccessfulReloadTime");
static_assert(offsetof(UFortWeapon_EventMode, CurrentReloadDuration) == 4208, "Offset mismatch for UFortWeapon_EventMode::CurrentReloadDuration");
static_assert(offsetof(UFortWeapon_EventMode, ItemEntryGuid) == 4216, "Offset mismatch for UFortWeapon_EventMode::ItemEntryGuid");
static_assert(offsetof(UFortWeapon_EventMode, TrackerGuid) == 4232, "Offset mismatch for UFortWeapon_EventMode::TrackerGuid");
static_assert(offsetof(UFortWeapon_EventMode, WeaponLevel) == 4248, "Offset mismatch for UFortWeapon_EventMode::WeaponLevel");
static_assert(offsetof(UFortWeapon_EventMode, CachedForcedLeanComponent) == 4256, "Offset mismatch for UFortWeapon_EventMode::CachedForcedLeanComponent");
static_assert(offsetof(UFortWeapon_EventMode, AmmoCount) == 4312, "Offset mismatch for UFortWeapon_EventMode::AmmoCount");
static_assert(offsetof(UFortWeapon_EventMode, PhantomReserveAmmo) == 4316, "Offset mismatch for UFortWeapon_EventMode::PhantomReserveAmmo");
static_assert(offsetof(UFortWeapon_EventMode, BurstFireCounter) == 4336, "Offset mismatch for UFortWeapon_EventMode::BurstFireCounter");
static_assert(offsetof(UFortWeapon_EventMode, ChargeTime) == 4340, "Offset mismatch for UFortWeapon_EventMode::ChargeTime");
static_assert(offsetof(UFortWeapon_EventMode, AccumulatedChargeTime) == 4344, "Offset mismatch for UFortWeapon_EventMode::AccumulatedChargeTime");
static_assert(offsetof(UFortWeapon_EventMode, LastChargeTime) == 4348, "Offset mismatch for UFortWeapon_EventMode::LastChargeTime");
static_assert(offsetof(UFortWeapon_EventMode, StartChargeGameplayCue) == 4352, "Offset mismatch for UFortWeapon_EventMode::StartChargeGameplayCue");
static_assert(offsetof(UFortWeapon_EventMode, MaxChargeGameplayCue) == 4356, "Offset mismatch for UFortWeapon_EventMode::MaxChargeGameplayCue");
static_assert(offsetof(UFortWeapon_EventMode, OutOfAmmoTextOverrideFailTag) == 4360, "Offset mismatch for UFortWeapon_EventMode::OutOfAmmoTextOverrideFailTag");
static_assert(offsetof(UFortWeapon_EventMode, NoSpareAmmoToReloadTextOverrideFailTag) == 4364, "Offset mismatch for UFortWeapon_EventMode::NoSpareAmmoToReloadTextOverrideFailTag");
static_assert(offsetof(UFortWeapon_EventMode, FireCanInterruptEquipQuery) == 4368, "Offset mismatch for UFortWeapon_EventMode::FireCanInterruptEquipQuery");
static_assert(offsetof(UFortWeapon_EventMode, CurrentShotLogIndex) == 4440, "Offset mismatch for UFortWeapon_EventMode::CurrentShotLogIndex");
static_assert(offsetof(UFortWeapon_EventMode, ShotLogFlags) == 4448, "Offset mismatch for UFortWeapon_EventMode::ShotLogFlags");
static_assert(offsetof(UFortWeapon_EventMode, bInitializedWeaponItem) == 4464, "Offset mismatch for UFortWeapon_EventMode::bInitializedWeaponItem");
static_assert(offsetof(UFortWeapon_EventMode, bCompletedAppliedAlterationsLoad) == 4465, "Offset mismatch for UFortWeapon_EventMode::bCompletedAppliedAlterationsLoad");
static_assert(offsetof(UFortWeapon_EventMode, bCanDeferSecondaryFireInput) == 4466, "Offset mismatch for UFortWeapon_EventMode::bCanDeferSecondaryFireInput");
static_assert(offsetof(UFortWeapon_EventMode, bAttachToRootOnDestruction) == 4467, "Offset mismatch for UFortWeapon_EventMode::bAttachToRootOnDestruction");
static_assert(offsetof(UFortWeapon_EventMode, AttachToRootOnDestructionOffset) == 4472, "Offset mismatch for UFortWeapon_EventMode::AttachToRootOnDestructionOffset");
static_assert(offsetof(UFortWeapon_EventMode, AttachToRootOnDestructionInterpSpeed) == 4496, "Offset mismatch for UFortWeapon_EventMode::AttachToRootOnDestructionInterpSpeed");
static_assert(offsetof(UFortWeapon_EventMode, bShowWhenHolstered) == 4500, "Offset mismatch for UFortWeapon_EventMode::bShowWhenHolstered");
static_assert(offsetof(UFortWeapon_EventMode, CustomPartsToShowWhenHolstered) == 4504, "Offset mismatch for UFortWeapon_EventMode::CustomPartsToShowWhenHolstered");
static_assert(offsetof(UFortWeapon_EventMode, ChargeStatusPack) == 4520, "Offset mismatch for UFortWeapon_EventMode::ChargeStatusPack");
static_assert(offsetof(UFortWeapon_EventMode, AttachedTrajectoryIndicator) == 4568, "Offset mismatch for UFortWeapon_EventMode::AttachedTrajectoryIndicator");
static_assert(offsetof(UFortWeapon_EventMode, ActiveAbility) == 4576, "Offset mismatch for UFortWeapon_EventMode::ActiveAbility");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryAbilitySpecHandle) == 4584, "Offset mismatch for UFortWeapon_EventMode::PrimaryAbilitySpecHandle");
static_assert(offsetof(UFortWeapon_EventMode, SecondaryAbilitySpecHandle) == 4608, "Offset mismatch for UFortWeapon_EventMode::SecondaryAbilitySpecHandle");
static_assert(offsetof(UFortWeapon_EventMode, ReloadAbilitySpecHandle) == 4632, "Offset mismatch for UFortWeapon_EventMode::ReloadAbilitySpecHandle");
static_assert(offsetof(UFortWeapon_EventMode, ImpactAbilitySpecHandle) == 4656, "Offset mismatch for UFortWeapon_EventMode::ImpactAbilitySpecHandle");
static_assert(offsetof(UFortWeapon_EventMode, ReticleTraceOverrideSpecHandle) == 4680, "Offset mismatch for UFortWeapon_EventMode::ReticleTraceOverrideSpecHandle");
static_assert(offsetof(UFortWeapon_EventMode, EquippedAbilityHandles) == 4704, "Offset mismatch for UFortWeapon_EventMode::EquippedAbilityHandles");
static_assert(offsetof(UFortWeapon_EventMode, EquippedAbilitySetHandles) == 4720, "Offset mismatch for UFortWeapon_EventMode::EquippedAbilitySetHandles");
static_assert(offsetof(UFortWeapon_EventMode, AppliedAlterations) == 4736, "Offset mismatch for UFortWeapon_EventMode::AppliedAlterations");
static_assert(offsetof(UFortWeapon_EventMode, WeaponModSlots) == 4752, "Offset mismatch for UFortWeapon_EventMode::WeaponModSlots");
static_assert(offsetof(UFortWeapon_EventMode, ItemOverrideData) == 4768, "Offset mismatch for UFortWeapon_EventMode::ItemOverrideData");
static_assert(offsetof(UFortWeapon_EventMode, EquippedWeaponModSlots) == 4848, "Offset mismatch for UFortWeapon_EventMode::EquippedWeaponModSlots");
static_assert(offsetof(UFortWeapon_EventMode, ModRuntimeDataCache) == 4864, "Offset mismatch for UFortWeapon_EventMode::ModRuntimeDataCache");
static_assert(offsetof(UFortWeapon_EventMode, ModDebugComp) == 4872, "Offset mismatch for UFortWeapon_EventMode::ModDebugComp");
static_assert(offsetof(UFortWeapon_EventMode, OpticDefinition) == 4880, "Offset mismatch for UFortWeapon_EventMode::OpticDefinition");
static_assert(offsetof(UFortWeapon_EventMode, OpticConfig) == 4888, "Offset mismatch for UFortWeapon_EventMode::OpticConfig");
static_assert(offsetof(UFortWeapon_EventMode, PreviousWeaponVariants) == 4952, "Offset mismatch for UFortWeapon_EventMode::PreviousWeaponVariants");
static_assert(offsetof(UFortWeapon_EventMode, AppliedItemWrap) == 5064, "Offset mismatch for UFortWeapon_EventMode::AppliedItemWrap");
static_assert(offsetof(UFortWeapon_EventMode, CachedFXManager) == 5072, "Offset mismatch for UFortWeapon_EventMode::CachedFXManager");
static_assert(offsetof(UFortWeapon_EventMode, CachedSignificanceManager) == 5080, "Offset mismatch for UFortWeapon_EventMode::CachedSignificanceManager");
static_assert(offsetof(UFortWeapon_EventMode, MuzzleSocketName) == 5128, "Offset mismatch for UFortWeapon_EventMode::MuzzleSocketName");
static_assert(offsetof(UFortWeapon_EventMode, MuzzleFalloffSocketName) == 5132, "Offset mismatch for UFortWeapon_EventMode::MuzzleFalloffSocketName");
static_assert(offsetof(UFortWeapon_EventMode, WeaponHandSocketNameOverride) == 5136, "Offset mismatch for UFortWeapon_EventMode::WeaponHandSocketNameOverride");
static_assert(offsetof(UFortWeapon_EventMode, LeftHandWeaponHandSocketNameOverride) == 5140, "Offset mismatch for UFortWeapon_EventMode::LeftHandWeaponHandSocketNameOverride");
static_assert(offsetof(UFortWeapon_EventMode, WeaponHandSocketPartOverrides) == 5144, "Offset mismatch for UFortWeapon_EventMode::WeaponHandSocketPartOverrides");
static_assert(offsetof(UFortWeapon_EventMode, bForceOverrideGenerateOverlapEvents) == 5168, "Offset mismatch for UFortWeapon_EventMode::bForceOverrideGenerateOverlapEvents");
static_assert(offsetof(UFortWeapon_EventMode, MaxWeaponSwitchNetworkWaitTime) == 5452, "Offset mismatch for UFortWeapon_EventMode::MaxWeaponSwitchNetworkWaitTime");
static_assert(offsetof(UFortWeapon_EventMode, MaxWeaponSwitchNetworkWaitTimeHotfix) == 5456, "Offset mismatch for UFortWeapon_EventMode::MaxWeaponSwitchNetworkWaitTimeHotfix");
static_assert(offsetof(UFortWeapon_EventMode, MaxWeaponAttackNetworkWaitTime) == 5496, "Offset mismatch for UFortWeapon_EventMode::MaxWeaponAttackNetworkWaitTime");
static_assert(offsetof(UFortWeapon_EventMode, LastFireAbilityTime) == 5500, "Offset mismatch for UFortWeapon_EventMode::LastFireAbilityTime");
static_assert(offsetof(UFortWeapon_EventMode, OnGetAimRotOverride) == 5560, "Offset mismatch for UFortWeapon_EventMode::OnGetAimRotOverride");
static_assert(offsetof(UFortWeapon_EventMode, OnAlterationAdded) == 5576, "Offset mismatch for UFortWeapon_EventMode::OnAlterationAdded");
static_assert(offsetof(UFortWeapon_EventMode, ModLeftHandPoseOffsets) == 5592, "Offset mismatch for UFortWeapon_EventMode::ModLeftHandPoseOffsets");
static_assert(offsetof(UFortWeapon_EventMode, ModReloadAnimData) == 5608, "Offset mismatch for UFortWeapon_EventMode::ModReloadAnimData");
static_assert(offsetof(UFortWeapon_EventMode, EquipAnimation) == 5624, "Offset mismatch for UFortWeapon_EventMode::EquipAnimation");
static_assert(offsetof(UFortWeapon_EventMode, FirstTimeEquipAnimation) == 5632, "Offset mismatch for UFortWeapon_EventMode::FirstTimeEquipAnimation");
static_assert(offsetof(UFortWeapon_EventMode, WeaponFirstTimeEquipAnimation) == 5640, "Offset mismatch for UFortWeapon_EventMode::WeaponFirstTimeEquipAnimation");
static_assert(offsetof(UFortWeapon_EventMode, FirstTimeEquipTag) == 5648, "Offset mismatch for UFortWeapon_EventMode::FirstTimeEquipTag");
static_assert(offsetof(UFortWeapon_EventMode, bResetOnItemRemoval) == 5652, "Offset mismatch for UFortWeapon_EventMode::bResetOnItemRemoval");
static_assert(offsetof(UFortWeapon_EventMode, ReloadAnimation) == 5656, "Offset mismatch for UFortWeapon_EventMode::ReloadAnimation");
static_assert(offsetof(UFortWeapon_EventMode, CustomReloadAnimationPerAmmoToFill) == 5720, "Offset mismatch for UFortWeapon_EventMode::CustomReloadAnimationPerAmmoToFill");
static_assert(offsetof(UFortWeapon_EventMode, PrimaryAbilityAnimation) == 5736, "Offset mismatch for UFortWeapon_EventMode::PrimaryAbilityAnimation");
static_assert(offsetof(UFortWeapon_EventMode, SecondaryAbilityAnimation) == 5744, "Offset mismatch for UFortWeapon_EventMode::SecondaryAbilityAnimation");
static_assert(offsetof(UFortWeapon_EventMode, WeaponEquipMontage) == 5752, "Offset mismatch for UFortWeapon_EventMode::WeaponEquipMontage");
static_assert(offsetof(UFortWeapon_EventMode, WeaponReloadMontage) == 5760, "Offset mismatch for UFortWeapon_EventMode::WeaponReloadMontage");
static_assert(offsetof(UFortWeapon_EventMode, CustomWeaponReloadMontagePerAmmoToFill) == 5768, "Offset mismatch for UFortWeapon_EventMode::CustomWeaponReloadMontagePerAmmoToFill");
static_assert(offsetof(UFortWeapon_EventMode, WeaponPrimaryAbilityMontage) == 5784, "Offset mismatch for UFortWeapon_EventMode::WeaponPrimaryAbilityMontage");
static_assert(offsetof(UFortWeapon_EventMode, WeaponSecondaryAbilityMontage) == 5792, "Offset mismatch for UFortWeapon_EventMode::WeaponSecondaryAbilityMontage");
static_assert(offsetof(UFortWeapon_EventMode, FirstPersonData) == 5800, "Offset mismatch for UFortWeapon_EventMode::FirstPersonData");
static_assert(offsetof(UFortWeapon_EventMode, PoseOffsetAnimSequence) == 5832, "Offset mismatch for UFortWeapon_EventMode::PoseOffsetAnimSequence");
static_assert(offsetof(UFortWeapon_EventMode, PoseOffsetAnimSequenceFemaleOverride) == 5840, "Offset mismatch for UFortWeapon_EventMode::PoseOffsetAnimSequenceFemaleOverride");
static_assert(offsetof(UFortWeapon_EventMode, WeaponCoreAnimation) == 5848, "Offset mismatch for UFortWeapon_EventMode::WeaponCoreAnimation");
static_assert(offsetof(UFortWeapon_EventMode, WeaponCoreAnimationOverride) == 5849, "Offset mismatch for UFortWeapon_EventMode::WeaponCoreAnimationOverride");
static_assert(offsetof(UFortWeapon_EventMode, HandGripType) == 5850, "Offset mismatch for UFortWeapon_EventMode::HandGripType");
static_assert(offsetof(UFortWeapon_EventMode, WeaponPawnAnimSet) == 5856, "Offset mismatch for UFortWeapon_EventMode::WeaponPawnAnimSet");
static_assert(offsetof(UFortWeapon_EventMode, PlayerAnimAssets) == 5864, "Offset mismatch for UFortWeapon_EventMode::PlayerAnimAssets");
static_assert(offsetof(UFortWeapon_EventMode, ProceduralLayeringData) == 5880, "Offset mismatch for UFortWeapon_EventMode::ProceduralLayeringData");
static_assert(offsetof(UFortWeapon_EventMode, PlayerAnimAssetsOverride) == 5928, "Offset mismatch for UFortWeapon_EventMode::PlayerAnimAssetsOverride");
static_assert(offsetof(UFortWeapon_EventMode, bResetAnimAssetsOverrideOnUnEquip) == 5944, "Offset mismatch for UFortWeapon_EventMode::bResetAnimAssetsOverrideOnUnEquip");
static_assert(offsetof(UFortWeapon_EventMode, WeaponPawnAnimLayerOverlayClass) == 5952, "Offset mismatch for UFortWeapon_EventMode::WeaponPawnAnimLayerOverlayClass");
static_assert(offsetof(UFortWeapon_EventMode, WeaponAdditiveAnimSet) == 5960, "Offset mismatch for UFortWeapon_EventMode::WeaponAdditiveAnimSet");
static_assert(offsetof(UFortWeapon_EventMode, PlayerAnimProxyTable) == 5968, "Offset mismatch for UFortWeapon_EventMode::PlayerAnimProxyTable");
static_assert(offsetof(UFortWeapon_EventMode, HitReactionProxyTable) == 5976, "Offset mismatch for UFortWeapon_EventMode::HitReactionProxyTable");
static_assert(offsetof(UFortWeapon_EventMode, bEnableTickAnimMontagesOnlyWhenOffscreen) == 5984, "Offset mismatch for UFortWeapon_EventMode::bEnableTickAnimMontagesOnlyWhenOffscreen");
static_assert(offsetof(UFortWeapon_EventMode, MaxRangeToEnableTickAnimMontagesWhenOffscreen) == 5988, "Offset mismatch for UFortWeapon_EventMode::MaxRangeToEnableTickAnimMontagesWhenOffscreen");
static_assert(offsetof(UFortWeapon_EventMode, WeaponPawnAnimsetOverride) == 5992, "Offset mismatch for UFortWeapon_EventMode::WeaponPawnAnimsetOverride");
static_assert(offsetof(UFortWeapon_EventMode, WeaponAdditiveAnimsetOverride) == 6000, "Offset mismatch for UFortWeapon_EventMode::WeaponAdditiveAnimsetOverride");
static_assert(offsetof(UFortWeapon_EventMode, UnableToPerformActionMontageOverride) == 6072, "Offset mismatch for UFortWeapon_EventMode::UnableToPerformActionMontageOverride");
static_assert(offsetof(UFortWeapon_EventMode, ActiveFireMode) == 6080, "Offset mismatch for UFortWeapon_EventMode::ActiveFireMode");
static_assert(offsetof(UFortWeapon_EventMode, FireModeData_HipFire) == 6112, "Offset mismatch for UFortWeapon_EventMode::FireModeData_HipFire");
static_assert(offsetof(UFortWeapon_EventMode, FireModeData_AimDownSight) == 6144, "Offset mismatch for UFortWeapon_EventMode::FireModeData_AimDownSight");
static_assert(offsetof(UFortWeapon_EventMode, FireModeData_Override) == 6176, "Offset mismatch for UFortWeapon_EventMode::FireModeData_Override");
static_assert(offsetof(UFortWeapon_EventMode, ItemWrapModifier) == 6224, "Offset mismatch for UFortWeapon_EventMode::ItemWrapModifier");
static_assert(offsetof(UFortWeapon_EventMode, LockOnTargetCandidate) == 6288, "Offset mismatch for UFortWeapon_EventMode::LockOnTargetCandidate");
static_assert(offsetof(UFortWeapon_EventMode, bIgnoreTryToFireSlotCooldownRestriction) == 6297, "Offset mismatch for UFortWeapon_EventMode::bIgnoreTryToFireSlotCooldownRestriction");
static_assert(offsetof(UFortWeapon_EventMode, bFireConsumableAnalyticEvent) == 6299, "Offset mismatch for UFortWeapon_EventMode::bFireConsumableAnalyticEvent");
static_assert(offsetof(UFortWeapon_EventMode, OnWeaponHudKeyActionUpdated) == 6304, "Offset mismatch for UFortWeapon_EventMode::OnWeaponHudKeyActionUpdated");
static_assert(offsetof(UFortWeapon_EventMode, FeedbackLineActionIdsToDim) == 6320, "Offset mismatch for UFortWeapon_EventMode::FeedbackLineActionIdsToDim");
static_assert(offsetof(UFortWeapon_EventMode, HudKeyActionData) == 6336, "Offset mismatch for UFortWeapon_EventMode::HudKeyActionData");
static_assert(offsetof(UFortWeapon_EventMode, CachedReloadComponent) == 6640, "Offset mismatch for UFortWeapon_EventMode::CachedReloadComponent");
