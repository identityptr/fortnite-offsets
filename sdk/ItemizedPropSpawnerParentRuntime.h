/**
 * decamp dumper generated SDK
 * Package: /Script/ItemizedPropSpawnerParentRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerOverlappedActorCheckData
// Kind: ScriptStruct; super: none
struct FItemizedPropSpawnerOverlappedActorCheckData
{
public:
    TArray<void*> CapsuleOverlapObjectTypes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CapsuleOverlapActorClassFilter[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t TagsToDestroyOverlappedActor[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockSpawnTag[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t VehicleLaunchVelocity[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t PawnLaunchVelocity[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    float AbilityImpactRadius; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CapsuleOverlapRadiusMulipler; // 0x008C (Size: 0x4, Type: FloatProperty)
    float CapsuleOverlapHalfHeightMultipler; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyFallImunityToKnockbackVictims; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldLaunch; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInstigatorIsSameTeam; // 0x0096 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, CapsuleOverlapObjectTypes) == 0, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::CapsuleOverlapObjectTypes");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, CapsuleOverlapActorClassFilter) == 16, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::CapsuleOverlapActorClassFilter");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, TagsToDestroyOverlappedActor) == 48, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::TagsToDestroyOverlappedActor");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, BlockSpawnTag) == 80, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::BlockSpawnTag");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, VehicleLaunchVelocity) == 88, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::VehicleLaunchVelocity");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, PawnLaunchVelocity) == 112, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::PawnLaunchVelocity");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, AbilityImpactRadius) == 136, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::AbilityImpactRadius");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, CapsuleOverlapRadiusMulipler) == 140, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::CapsuleOverlapRadiusMulipler");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, CapsuleOverlapHalfHeightMultipler) == 144, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::CapsuleOverlapHalfHeightMultipler");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, bApplyFallImunityToKnockbackVictims) == 148, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::bApplyFallImunityToKnockbackVictims");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, bShouldLaunch) == 149, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::bShouldLaunch");
static_assert(offsetof(FItemizedPropSpawnerOverlappedActorCheckData, bInstigatorIsSameTeam) == 150, "Offset mismatch for FItemizedPropSpawnerOverlappedActorCheckData::bInstigatorIsSameTeam");

// /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerWeaponData
// Kind: ScriptStruct; super: none
struct FItemizedPropSpawnerWeaponData
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Weapon; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bPreviewing; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    float PreviewDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinDistance; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MinDistFromIndestructible; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableBlockedByIndestructibles; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    float PlayerForwardVectorScale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float InitialTracePullbackDist; // 0x002C (Size: 0x4, Type: FloatProperty)
    float DownwardTraceDistanceNear; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float DownwardTraceDistanceNearUp; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DownwardTraceDistanceFar; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopped; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    TArray<void*> ClassesToIgnoreWhenTracing; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClassesToIgnoreWhenTracingIfTooSmall; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    float DebugDrawTime; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0064
    TArray<void*> ChunkRelativeTransforms; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ChunkLocationToChunkIndexMap; // 0x0078 (Size: 0x10, Type: MapProperty)
    float ChunkRelativeRightVectorScale; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float GroundFindStartOffset; // 0x008C (Size: 0x4, Type: FloatProperty)
    float GroundFindEndOffset; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float GroundFindDistanceOffset; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float MaxSpawnDistBelowPlayer; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x009C
    TArray<void*> PreviewMeshesTEMP; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    void* ChunkMaterial; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* ChunkMaterialBlocked; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    float ChunkBlockPitch; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float BlockingIndestructibleObjectDist; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalChunkSpacing; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float MinSupportingPropSize; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float TooCloseForHeightDistStep; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t TooCloseForHeightMaxIterations; // 0x00D4 (Size: 0x4, Type: IntProperty)
    float TooCloseForHeightMinHeightAbovePlayer; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float TooCloseForHeightMaxHeightAbovePlayer; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float TooCloseForHeightMinDistFromPlayer; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float SphereTraceRadius; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowUnwalkableTargets; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowWaterTargets; // 0x00E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x00EA
    float TryCloserOnInvalidTargetDist; // 0x00EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTargetOnLandCheck; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00F1
    float LandFindStartOffset; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float LandFindEndOffset; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float VerticalDistanceLimit; // 0x00FC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FItemizedPropSpawnerWeaponData, player) == 0, "Offset mismatch for FItemizedPropSpawnerWeaponData::player");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, Weapon) == 8, "Offset mismatch for FItemizedPropSpawnerWeaponData::Weapon");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, bPreviewing) == 16, "Offset mismatch for FItemizedPropSpawnerWeaponData::bPreviewing");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, PreviewDistance) == 20, "Offset mismatch for FItemizedPropSpawnerWeaponData::PreviewDistance");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, MaxDistance) == 24, "Offset mismatch for FItemizedPropSpawnerWeaponData::MaxDistance");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, MinDistance) == 28, "Offset mismatch for FItemizedPropSpawnerWeaponData::MinDistance");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, MinDistFromIndestructible) == 32, "Offset mismatch for FItemizedPropSpawnerWeaponData::MinDistFromIndestructible");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, bEnableBlockedByIndestructibles) == 36, "Offset mismatch for FItemizedPropSpawnerWeaponData::bEnableBlockedByIndestructibles");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, PlayerForwardVectorScale) == 40, "Offset mismatch for FItemizedPropSpawnerWeaponData::PlayerForwardVectorScale");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, InitialTracePullbackDist) == 44, "Offset mismatch for FItemizedPropSpawnerWeaponData::InitialTracePullbackDist");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, DownwardTraceDistanceNear) == 48, "Offset mismatch for FItemizedPropSpawnerWeaponData::DownwardTraceDistanceNear");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, DownwardTraceDistanceNearUp) == 52, "Offset mismatch for FItemizedPropSpawnerWeaponData::DownwardTraceDistanceNearUp");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, DownwardTraceDistanceFar) == 56, "Offset mismatch for FItemizedPropSpawnerWeaponData::DownwardTraceDistanceFar");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, bStopped) == 60, "Offset mismatch for FItemizedPropSpawnerWeaponData::bStopped");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ClassesToIgnoreWhenTracing) == 64, "Offset mismatch for FItemizedPropSpawnerWeaponData::ClassesToIgnoreWhenTracing");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ClassesToIgnoreWhenTracingIfTooSmall) == 80, "Offset mismatch for FItemizedPropSpawnerWeaponData::ClassesToIgnoreWhenTracingIfTooSmall");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, DebugDrawTime) == 96, "Offset mismatch for FItemizedPropSpawnerWeaponData::DebugDrawTime");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ChunkRelativeTransforms) == 104, "Offset mismatch for FItemizedPropSpawnerWeaponData::ChunkRelativeTransforms");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ChunkLocationToChunkIndexMap) == 120, "Offset mismatch for FItemizedPropSpawnerWeaponData::ChunkLocationToChunkIndexMap");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ChunkRelativeRightVectorScale) == 136, "Offset mismatch for FItemizedPropSpawnerWeaponData::ChunkRelativeRightVectorScale");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, GroundFindStartOffset) == 140, "Offset mismatch for FItemizedPropSpawnerWeaponData::GroundFindStartOffset");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, GroundFindEndOffset) == 144, "Offset mismatch for FItemizedPropSpawnerWeaponData::GroundFindEndOffset");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, GroundFindDistanceOffset) == 148, "Offset mismatch for FItemizedPropSpawnerWeaponData::GroundFindDistanceOffset");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, MaxSpawnDistBelowPlayer) == 152, "Offset mismatch for FItemizedPropSpawnerWeaponData::MaxSpawnDistBelowPlayer");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, PreviewMeshesTEMP) == 160, "Offset mismatch for FItemizedPropSpawnerWeaponData::PreviewMeshesTEMP");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ChunkMaterial) == 176, "Offset mismatch for FItemizedPropSpawnerWeaponData::ChunkMaterial");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ChunkMaterialBlocked) == 184, "Offset mismatch for FItemizedPropSpawnerWeaponData::ChunkMaterialBlocked");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, ChunkBlockPitch) == 192, "Offset mismatch for FItemizedPropSpawnerWeaponData::ChunkBlockPitch");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, BlockingIndestructibleObjectDist) == 196, "Offset mismatch for FItemizedPropSpawnerWeaponData::BlockingIndestructibleObjectDist");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, MaxVerticalChunkSpacing) == 200, "Offset mismatch for FItemizedPropSpawnerWeaponData::MaxVerticalChunkSpacing");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, MinSupportingPropSize) == 204, "Offset mismatch for FItemizedPropSpawnerWeaponData::MinSupportingPropSize");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, TooCloseForHeightDistStep) == 208, "Offset mismatch for FItemizedPropSpawnerWeaponData::TooCloseForHeightDistStep");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, TooCloseForHeightMaxIterations) == 212, "Offset mismatch for FItemizedPropSpawnerWeaponData::TooCloseForHeightMaxIterations");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, TooCloseForHeightMinHeightAbovePlayer) == 216, "Offset mismatch for FItemizedPropSpawnerWeaponData::TooCloseForHeightMinHeightAbovePlayer");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, TooCloseForHeightMaxHeightAbovePlayer) == 220, "Offset mismatch for FItemizedPropSpawnerWeaponData::TooCloseForHeightMaxHeightAbovePlayer");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, TooCloseForHeightMinDistFromPlayer) == 224, "Offset mismatch for FItemizedPropSpawnerWeaponData::TooCloseForHeightMinDistFromPlayer");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, SphereTraceRadius) == 228, "Offset mismatch for FItemizedPropSpawnerWeaponData::SphereTraceRadius");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, bAllowUnwalkableTargets) == 232, "Offset mismatch for FItemizedPropSpawnerWeaponData::bAllowUnwalkableTargets");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, bAllowWaterTargets) == 233, "Offset mismatch for FItemizedPropSpawnerWeaponData::bAllowWaterTargets");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, TryCloserOnInvalidTargetDist) == 236, "Offset mismatch for FItemizedPropSpawnerWeaponData::TryCloserOnInvalidTargetDist");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, bEnableTargetOnLandCheck) == 240, "Offset mismatch for FItemizedPropSpawnerWeaponData::bEnableTargetOnLandCheck");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, LandFindStartOffset) == 244, "Offset mismatch for FItemizedPropSpawnerWeaponData::LandFindStartOffset");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, LandFindEndOffset) == 248, "Offset mismatch for FItemizedPropSpawnerWeaponData::LandFindEndOffset");
static_assert(offsetof(FItemizedPropSpawnerWeaponData, VerticalDistanceLimit) == 252, "Offset mismatch for FItemizedPropSpawnerWeaponData::VerticalDistanceLimit");

// /Script/ItemizedPropSpawnerParentRuntime.NativeItemizedPropSpawner_PropSpawnData
// Kind: ScriptStruct; super: none
struct FNativeItemizedPropSpawner_PropSpawnData
{
public:
    void* ClassToSpawn; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t RelativeTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t ChunkLocation; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNativeItemizedPropSpawner_PropSpawnData, ClassToSpawn) == 0, "Offset mismatch for FNativeItemizedPropSpawner_PropSpawnData::ClassToSpawn");
static_assert(offsetof(FNativeItemizedPropSpawner_PropSpawnData, RelativeTransform) == 16, "Offset mismatch for FNativeItemizedPropSpawner_PropSpawnData::RelativeTransform");
static_assert(offsetof(FNativeItemizedPropSpawner_PropSpawnData, ChunkLocation) == 112, "Offset mismatch for FNativeItemizedPropSpawner_PropSpawnData::ChunkLocation");

// /Script/ItemizedPropSpawnerParentRuntime.NativeItemizedPropSpawner_SpawnedPropData
// Kind: ScriptStruct; super: none
struct FNativeItemizedPropSpawner_SpawnedPropData
{
public:
    std::uint8_t SpawnData[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    TArray<void*> SupportingActors; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* BaseActor; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* SpawnedActor; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnedRelativeTransform[0x60]; // 0x00A0 (Size: 0x60, Type: StructProperty)
    float ZOffset; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bValid; // 0x0104 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, SpawnData) == 0, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::SpawnData");
static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, SupportingActors) == 128, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::SupportingActors");
static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, BaseActor) == 144, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::BaseActor");
static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, SpawnedActor) == 152, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::SpawnedActor");
static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, SpawnedRelativeTransform) == 160, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::SpawnedRelativeTransform");
static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, ZOffset) == 256, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::ZOffset");
static_assert(offsetof(FNativeItemizedPropSpawner_SpawnedPropData, bValid) == 260, "Offset mismatch for FNativeItemizedPropSpawner_SpawnedPropData::bValid");

// /Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_ItemizedPropSpawner
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_ItemizedPropSpawner
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> TrackedInstances; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_ItemizedPropSpawner, TrackedInstances) == 192, "Offset mismatch for UFortControllerComponent_ItemizedPropSpawner::TrackedInstances");

// /Script/ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner
// Kind: Class; super: FortGameplayAbility_RangedWeapon
class UFortGameplayAbility_RangedPropSpawner
{
public:
    std::uint8_t Pad_0000[0xB68]; // 0x0000
    std::uint8_t bRevertAmmoNumberForRejection; // 0x0B68 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortGameplayAbility_RangedPropSpawner, bRevertAmmoNumberForRejection) == 2920, "Offset mismatch for UFortGameplayAbility_RangedPropSpawner::bRevertAmmoNumberForRejection");

// /Script/ItemizedPropSpawnerParentRuntime.FortWeaponRangedPropSpawner
// Kind: Class; super: FortWeaponRanged
class UFortWeaponRangedPropSpawner
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    std::uint8_t bForceSyncAmmoForLocalPropSpawnerWeapon; // 0x2968 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortWeaponRangedPropSpawner, bForceSyncAmmoForLocalPropSpawnerWeapon) == 10600, "Offset mismatch for UFortWeaponRangedPropSpawner::bForceSyncAmmoForLocalPropSpawnerWeapon");

// /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerAnimInstanceProxy
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UItemizedPropSpawnerAnimInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsUpperBody; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGrindRail; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFireToSprint; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFireToIdle; // 0x1173 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFireFallStart; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFireFallEnd; // 0x1175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFireFullBodyGround; // 0x1176 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFire; // 0x1177 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsIceFireUpperBody; // 0x1178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFromIceFireEndStates; // 0x1179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTrFromFireEndIdle; // 0x117A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTrFromFireEndLoco; // 0x117B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFireExitUnexpectedly; // 0x117C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFireEndExitUnexpectedly; // 0x117D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x117E
    std::uint8_t UpperBodyTwistRotator[0x18]; // 0x1180 (Size: 0x18, Type: StructProperty)
    float TurnEndThreshold; // 0x1198 (Size: 0x4, Type: FloatProperty)
    float TurnEndLocoThreshold; // 0x119C (Size: 0x4, Type: FloatProperty)
    float PawnVelocityZThreshold; // 0x11A0 (Size: 0x4, Type: FloatProperty)
    float InterruptibleThreshold; // 0x11A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsUpperBody) == 4464, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsUpperBody");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bGrindRail) == 4465, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bGrindRail");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFireToSprint) == 4466, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFireToSprint");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFireToIdle) == 4467, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFireToIdle");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFireFallStart) == 4468, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFireFallStart");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFireFallEnd) == 4469, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFireFallEnd");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFireFullBodyGround) == 4470, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFireFullBodyGround");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFire) == 4471, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFire");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsIceFireUpperBody) == 4472, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsIceFireUpperBody");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsFromIceFireEndStates) == 4473, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsFromIceFireEndStates");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsTrFromFireEndIdle) == 4474, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsTrFromFireEndIdle");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsTrFromFireEndLoco) == 4475, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsTrFromFireEndLoco");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsFireExitUnexpectedly) == 4476, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsFireExitUnexpectedly");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, bIsFireEndExitUnexpectedly) == 4477, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::bIsFireEndExitUnexpectedly");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, UpperBodyTwistRotator) == 4480, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::UpperBodyTwistRotator");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, TurnEndThreshold) == 4504, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::TurnEndThreshold");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, TurnEndLocoThreshold) == 4508, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::TurnEndLocoThreshold");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, PawnVelocityZThreshold) == 4512, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::PawnVelocityZThreshold");
static_assert(offsetof(UItemizedPropSpawnerAnimInstanceProxy, InterruptibleThreshold) == 4516, "Offset mismatch for UItemizedPropSpawnerAnimInstanceProxy::InterruptibleThreshold");

// /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerFunctionLibraryNative
// Kind: Class; super: BlueprintFunctionLibrary
class UItemizedPropSpawnerFunctionLibraryNative
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerMultiPropSpawner
// Kind: Class; super: BuildingGameplayActor
class UItemizedPropSpawnerMultiPropSpawner
{
public:
    std::uint8_t Pad_0000[0x6C8]; // 0x0000
    void* InherentAbilitySets; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x06D0
    std::uint8_t DamageStatHandle[0x10]; // 0x06F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAllowRidingOnActor; // 0x0700 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0701
    FMulticastInlineDelegate OnProximityPulseDelegate; // 0x0708 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityPrePulseDelegate; // 0x0718 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityEffectsAppliedDelegate; // 0x0728 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoAppliedToTouchingActor; // 0x0738 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeliverableAbilityInfoChangedForExitingTouchActor; // 0x0748 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDidDamage; // 0x0758 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIgnoreInstigatorCollision; // 0x0768 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddOwnerVelocity; // 0x0769 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x076A
    std::int32_t AbilitySourceLevel; // 0x076C (Size: 0x4, Type: IntProperty)
    std::uint8_t DeliverableAbilityInfo[0xA0]; // 0x0770 (Size: 0xA0, Type: StructProperty)
    std::uint8_t bApplyDefaultEnabledAbilityBucketsOnInit; // 0x0810 (Size: 0x1, Type: BoolProperty)
    // 0x0810 BoolProperty bBlockMarking (shared storage)
    // 0x0810 BoolProperty bCanBeMarked (shared storage)
    // 0x0810 BoolProperty bShowInteractKeybind (shared storage)
    // 0x0810 BoolProperty bUseSimpleActorTouchSetupForAbilityBuckets (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x0811
    std::uint8_t MarkerDisplay[0xB0]; // 0x0818 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x08C8 (Size: 0x18, Type: StructProperty)
    void* RegisteredTouchComponent; // 0x08E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x08E8
    std::uint8_t AnalyticsTags[0x20]; // 0x08F0 (Size: 0x20, Type: StructProperty)
    float PostProcessOverlapBlendWeight; // 0x0910 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0914
    void* CustomInteractionWidget; // 0x0918 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, InherentAbilitySets) == 1736, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::InherentAbilitySets");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, DamageStatHandle) == 1776, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::DamageStatHandle");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, bAllowRidingOnActor) == 1792, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::bAllowRidingOnActor");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, OnProximityPulseDelegate) == 1800, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::OnProximityPulseDelegate");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, OnProximityPrePulseDelegate) == 1816, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::OnProximityPrePulseDelegate");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, OnProximityEffectsAppliedDelegate) == 1832, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::OnProximityEffectsAppliedDelegate");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, OnDeliverableAbilityInfoAppliedToTouchingActor) == 1848, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::OnDeliverableAbilityInfoAppliedToTouchingActor");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, OnDeliverableAbilityInfoChangedForExitingTouchActor) == 1864, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::OnDeliverableAbilityInfoChangedForExitingTouchActor");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, OnDidDamage) == 1880, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::OnDidDamage");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, bIgnoreInstigatorCollision) == 1896, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::bIgnoreInstigatorCollision");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, bAddOwnerVelocity) == 1897, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::bAddOwnerVelocity");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, AbilitySourceLevel) == 1900, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::AbilitySourceLevel");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, DeliverableAbilityInfo) == 1904, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::DeliverableAbilityInfo");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, bApplyDefaultEnabledAbilityBucketsOnInit) == 2064, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::bApplyDefaultEnabledAbilityBucketsOnInit");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, MarkerDisplay) == 2072, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::MarkerDisplay");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, MarkerPositionOffset) == 2248, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::MarkerPositionOffset");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, RegisteredTouchComponent) == 2272, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::RegisteredTouchComponent");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, AnalyticsTags) == 2288, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::AnalyticsTags");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, PostProcessOverlapBlendWeight) == 2320, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::PostProcessOverlapBlendWeight");
static_assert(offsetof(UItemizedPropSpawnerMultiPropSpawner, CustomInteractionWidget) == 2328, "Offset mismatch for UItemizedPropSpawnerMultiPropSpawner::CustomInteractionWidget");

// /Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerWallChunk
// Kind: Class; super: BuildingProp
class UItemizedPropSpawnerWallChunk
{
public:
    std::uint8_t Pad_0000[0xB18]; // 0x0000
    TWeakObjectPtr<void> ParentChunk; // 0x0B18 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> WallActorClassDenyList; // 0x0B20 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UItemizedPropSpawnerWallChunk, ParentChunk) == 2840, "Offset mismatch for UItemizedPropSpawnerWallChunk::ParentChunk");
static_assert(offsetof(UItemizedPropSpawnerWallChunk, WallActorClassDenyList) == 2848, "Offset mismatch for UItemizedPropSpawnerWallChunk::WallActorClassDenyList");
