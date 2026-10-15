/**
 * decamp dumper generated SDK
 * Package: /Script/ClusterLauncherRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ClusterLauncherRuntime.ClusterLauncherMissileSpawnInfo
// Kind: ScriptStruct; super: none
struct FClusterLauncherMissileSpawnInfo
{
public:
    std::uint8_t TargetLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnRotation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::int32_t MissileFiringNumber; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FClusterLauncherMissileSpawnInfo, TargetLocation) == 0, "Offset mismatch for FClusterLauncherMissileSpawnInfo::TargetLocation");
static_assert(offsetof(FClusterLauncherMissileSpawnInfo, SpawnLocation) == 24, "Offset mismatch for FClusterLauncherMissileSpawnInfo::SpawnLocation");
static_assert(offsetof(FClusterLauncherMissileSpawnInfo, SpawnRotation) == 48, "Offset mismatch for FClusterLauncherMissileSpawnInfo::SpawnRotation");
static_assert(offsetof(FClusterLauncherMissileSpawnInfo, MissileFiringNumber) == 72, "Offset mismatch for FClusterLauncherMissileSpawnInfo::MissileFiringNumber");

// /Script/ClusterLauncherRuntime.FortGameplayAbility_ClusterLauncherBeam
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ClusterLauncherBeam
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t BeamTraceCollisionChannel; // 0x0B20 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortGameplayAbility_ClusterLauncherBeam, BeamTraceCollisionChannel) == 2848, "Offset mismatch for UFortGameplayAbility_ClusterLauncherBeam::BeamTraceCollisionChannel");

// /Script/ClusterLauncherRuntime.FortGameplayAbility_ClusterLauncherPrimary
// Kind: Class; super: FortGameplayAbility_RangedWeapon
class UFortGameplayAbility_ClusterLauncherPrimary
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    void* MissileProjectileClass; // 0x0B68 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MissileInitialSpeed[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileGravityScale[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileChargePercent[0x28]; // 0x0BC0 (Size: 0x28, Type: StructProperty)
    TArray<void*> SpawnedMissiles; // 0x0BE8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameplayAbility_ClusterLauncherPrimary, MissileProjectileClass) == 2920, "Offset mismatch for UFortGameplayAbility_ClusterLauncherPrimary::MissileProjectileClass");
static_assert(offsetof(UFortGameplayAbility_ClusterLauncherPrimary, MissileInitialSpeed) == 2928, "Offset mismatch for UFortGameplayAbility_ClusterLauncherPrimary::MissileInitialSpeed");
static_assert(offsetof(UFortGameplayAbility_ClusterLauncherPrimary, MissileGravityScale) == 2968, "Offset mismatch for UFortGameplayAbility_ClusterLauncherPrimary::MissileGravityScale");
static_assert(offsetof(UFortGameplayAbility_ClusterLauncherPrimary, MissileChargePercent) == 3008, "Offset mismatch for UFortGameplayAbility_ClusterLauncherPrimary::MissileChargePercent");
static_assert(offsetof(UFortGameplayAbility_ClusterLauncherPrimary, SpawnedMissiles) == 3048, "Offset mismatch for UFortGameplayAbility_ClusterLauncherPrimary::SpawnedMissiles");

// /Script/ClusterLauncherRuntime.FortProjectileAthena_ClusterLauncher
// Kind: Class; super: FortProjectileAthena
class UFortProjectileAthena_ClusterLauncher
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

static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, PawnHitResult) == 2784, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::PawnHitResult");
static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, FireStartLoc) == 3032, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::FireStartLoc");
static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, bExplodeOnPawnHit) == 3056, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::bExplodeOnPawnHit");
static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, bEstimateCollisionForSniperTrace) == 3057, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::bEstimateCollisionForSniperTrace");
static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, TimeToWaitForPawnHitBeforeKillOnServer) == 3060, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::TimeToWaitForPawnHitBeforeKillOnServer");
static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, PredictedHitActor) == 3080, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::PredictedHitActor");
static_assert(offsetof(UFortProjectileAthena_ClusterLauncher, PredictedHitComp) == 3088, "Offset mismatch for UFortProjectileAthena_ClusterLauncher::PredictedHitComp");

// /Script/ClusterLauncherRuntime.FortProjectileMoveComp_DrunkClusterLauncher
// Kind: Class; super: FortProjectileMoveComp_Drunk
class UFortProjectileMoveComp_DrunkClusterLauncher
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t PostLockOnDrunkConfig[0x50]; // 0x0570 (Size: 0x50, Type: StructProperty)
    std::uint8_t bHasLockedOn; // 0x05C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortProjectileMoveComp_DrunkClusterLauncher, PostLockOnDrunkConfig) == 1392, "Offset mismatch for UFortProjectileMoveComp_DrunkClusterLauncher::PostLockOnDrunkConfig");
static_assert(offsetof(UFortProjectileMoveComp_DrunkClusterLauncher, bHasLockedOn) == 1472, "Offset mismatch for UFortProjectileMoveComp_DrunkClusterLauncher::bHasLockedOn");

// /Script/ClusterLauncherRuntime.FortWeaponComponent_ClusterLauncher
// Kind: Class; super: FortWeaponComponent
class UFortWeaponComponent_ClusterLauncher
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, PrimaryComponentTick) == 56, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::PrimaryComponentTick");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, ComponentTags) == 104, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::ComponentTags");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, AssetUserData) == 120, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::AssetUserData");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, UCSSerializationIndex) == 144, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::UCSSerializationIndex");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, bNetAddressable) == 152, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::bNetAddressable");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, bAutoActivate) == 154, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::bAutoActivate");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, bIsEditorOnly) == 155, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::bIsEditorOnly");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, CreationMethod) == 185, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::CreationMethod");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, OnComponentActivated) == 186, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::OnComponentActivated");
static_assert(offsetof(UFortWeaponComponent_ClusterLauncher, OnComponentDeactivated) == 187, "Offset mismatch for UFortWeaponComponent_ClusterLauncher::OnComponentDeactivated");

// /Script/ClusterLauncherRuntime.RocketClusterTidalCraneLauncherWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class URocketClusterTidalCraneLauncherWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t bShowRocketsInLauncher; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsADS; // 0x0361 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJustFired; // 0x0362 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0363
    std::int32_t PreviousAmmo; // 0x0364 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(URocketClusterTidalCraneLauncherWeaponAnimInstance, bShowRocketsInLauncher) == 864, "Offset mismatch for URocketClusterTidalCraneLauncherWeaponAnimInstance::bShowRocketsInLauncher");
static_assert(offsetof(URocketClusterTidalCraneLauncherWeaponAnimInstance, bIsADS) == 865, "Offset mismatch for URocketClusterTidalCraneLauncherWeaponAnimInstance::bIsADS");
static_assert(offsetof(URocketClusterTidalCraneLauncherWeaponAnimInstance, bJustFired) == 866, "Offset mismatch for URocketClusterTidalCraneLauncherWeaponAnimInstance::bJustFired");
static_assert(offsetof(URocketClusterTidalCraneLauncherWeaponAnimInstance, PreviousAmmo) == 868, "Offset mismatch for URocketClusterTidalCraneLauncherWeaponAnimInstance::PreviousAmmo");

// /Script/ClusterLauncherRuntime.RocketClusterTidalCraneLauncherWeaponInterface
// Kind: Class; super: Interface
class URocketClusterTidalCraneLauncherWeaponInterface
{
public:
    std::uint8_t Opaque[1];
};
