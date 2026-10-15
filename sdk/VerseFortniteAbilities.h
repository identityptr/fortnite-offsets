/**
 * decamp dumper generated SDK
 * Package: /Script/VerseFortniteAbilities
 */
#pragma once
#include "Basic.h"

// /Script/VerseFortniteAbilities.ActiveSpanEntry
// Kind: ScriptStruct; super: none
struct FActiveSpanEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t State[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActiveSpanEntry, State) == 16, "Offset mismatch for FActiveSpanEntry::State");

// /Script/VerseFortniteAbilities.FortAbilityContextTargetData
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FFortAbilityContextTargetData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Instigator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Participants; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Targets; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAbilityContextTargetData, Instigator) == 8, "Offset mismatch for FFortAbilityContextTargetData::Instigator");
static_assert(offsetof(FFortAbilityContextTargetData, Participants) == 16, "Offset mismatch for FFortAbilityContextTargetData::Participants");
static_assert(offsetof(FFortAbilityContextTargetData, Targets) == 32, "Offset mismatch for FFortAbilityContextTargetData::Targets");

// /Script/VerseFortniteAbilities.FortItemAbilityComponentData
// Kind: ScriptStruct; super: none
struct FFortItemAbilityComponentData
{
public:
    TWeakObjectPtr<void> WeakInventory; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> WeakAbilitySystemComponent; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortItemAbilityComponentData, WeakInventory) == 0, "Offset mismatch for FFortItemAbilityComponentData::WeakInventory");
static_assert(offsetof(FFortItemAbilityComponentData, WeakAbilitySystemComponent) == 8, "Offset mismatch for FFortItemAbilityComponentData::WeakAbilitySystemComponent");

// /Script/VerseFortniteAbilities.TimelineEffectContext
// Kind: ScriptStruct; super: GameplayEffectContext
struct FTimelineEffectContext
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t AssetPath[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachSocketName[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::int32_t InstanceID; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsRemoval; // 0x008C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTimelineEffectContext, AssetPath) == 128, "Offset mismatch for FTimelineEffectContext::AssetPath");
static_assert(offsetof(FTimelineEffectContext, AttachSocketName) == 132, "Offset mismatch for FTimelineEffectContext::AttachSocketName");
static_assert(offsetof(FTimelineEffectContext, InstanceID) == 136, "Offset mismatch for FTimelineEffectContext::InstanceID");
static_assert(offsetof(FTimelineEffectContext, bIsRemoval) == 140, "Offset mismatch for FTimelineEffectContext::bIsRemoval");

// /Script/VerseFortniteAbilities.TimelineEntry
// Kind: ScriptStruct; super: none
struct FTimelineEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortniteAbilities.TimelineSpanState
// Kind: ScriptStruct; super: none
struct FTimelineSpanState
{
public:
    void* AnimTask; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveEffectHandle[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> ActiveEffectHandles; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTimelineSpanState, AnimTask) == 0, "Offset mismatch for FTimelineSpanState::AnimTask");
static_assert(offsetof(FTimelineSpanState, AudioComponent) == 8, "Offset mismatch for FTimelineSpanState::AudioComponent");
static_assert(offsetof(FTimelineSpanState, ActiveEffectHandle) == 16, "Offset mismatch for FTimelineSpanState::ActiveEffectHandle");
static_assert(offsetof(FTimelineSpanState, ActiveEffectHandles) == 40, "Offset mismatch for FTimelineSpanState::ActiveEffectHandles");

// /Script/VerseFortniteAbilities.FortAbilityTask_PlayTimelineAnimation
// Kind: Class; super: AbilityTask
class UFortAbilityTask_PlayTimelineAnimation
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelled; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* AnimSequenceToPlay; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMontage; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAbilityTask_PlayTimelineAnimation, OnCompleted) == 120, "Offset mismatch for UFortAbilityTask_PlayTimelineAnimation::OnCompleted");
static_assert(offsetof(UFortAbilityTask_PlayTimelineAnimation, OnBlendOut) == 136, "Offset mismatch for UFortAbilityTask_PlayTimelineAnimation::OnBlendOut");
static_assert(offsetof(UFortAbilityTask_PlayTimelineAnimation, OnInterrupted) == 152, "Offset mismatch for UFortAbilityTask_PlayTimelineAnimation::OnInterrupted");
static_assert(offsetof(UFortAbilityTask_PlayTimelineAnimation, OnCancelled) == 168, "Offset mismatch for UFortAbilityTask_PlayTimelineAnimation::OnCancelled");
static_assert(offsetof(UFortAbilityTask_PlayTimelineAnimation, AnimSequenceToPlay) == 184, "Offset mismatch for UFortAbilityTask_PlayTimelineAnimation::AnimSequenceToPlay");
static_assert(offsetof(UFortAbilityTask_PlayTimelineAnimation, DynamicMontage) == 192, "Offset mismatch for UFortAbilityTask_PlayTimelineAnimation::DynamicMontage");

// /Script/VerseFortniteAbilities.FortAbilityTask_TimelineExecutor
// Kind: Class; super: AbilityTask
class UFortAbilityTask_TimelineExecutor
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnTimelineCompleted; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimelineCancelled; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0098
    TArray<void*> VerseKeepAlive; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00C8
    TArray<void*> ActiveSpans; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAbilityTask_TimelineExecutor, OnTimelineCompleted) == 120, "Offset mismatch for UFortAbilityTask_TimelineExecutor::OnTimelineCompleted");
static_assert(offsetof(UFortAbilityTask_TimelineExecutor, OnTimelineCancelled) == 136, "Offset mismatch for UFortAbilityTask_TimelineExecutor::OnTimelineCancelled");
static_assert(offsetof(UFortAbilityTask_TimelineExecutor, VerseKeepAlive) == 184, "Offset mismatch for UFortAbilityTask_TimelineExecutor::VerseKeepAlive");
static_assert(offsetof(UFortAbilityTask_TimelineExecutor, ActiveSpans) == 208, "Offset mismatch for UFortAbilityTask_TimelineExecutor::ActiveSpans");

// /Script/VerseFortniteAbilities.FortAbilityTimelineProjectile
// Kind: Class; super: FortProjectileBase
class UFortAbilityTimelineProjectile
{
public:
    std::uint8_t Pad_0000[0x698]; // 0x0000
    std::uint8_t VerticleFireOffset[0x10]; // 0x0698 (Size: 0x10, Type: StructProperty)
    std::uint8_t InitialSpeed[0x10]; // 0x06A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ChargeUpInitialSpeed[0x10]; // 0x06B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxSpeed[0x10]; // 0x06C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t InitialGravityScaleOverride[0x10]; // 0x06D8 (Size: 0x10, Type: StructProperty)
    float ReplicatedMaxSpeed; // 0x06E8 (Size: 0x4, Type: FloatProperty)
    float GravityScale; // 0x06EC (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> OriginalTarget; // 0x06F0 (Size: 0x8, Type: WeakObjectProperty)
    float ChargePercent; // 0x06F8 (Size: 0x4, Type: FloatProperty)
    float MomentumTransfer; // 0x06FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAddOwnerVelocity; // 0x0700 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0701
    std::uint8_t MaxInitialSpeedForOwnerVelocity[0x28]; // 0x0708 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDeltaVelocityAngleToOwnerVelocity[0x28]; // 0x0730 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSpawnPointCanBeUsedByOtherPlayers; // 0x0758 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0759
    float PlayerSpawnOffset; // 0x075C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRegisterInPerceptionSystem; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0761
    void* StaticMeshPropToRemoveOnPawn; // 0x0768 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCanBePickedUpWhenStopped; // 0x0770 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0771
    void* CapsuleComponent; // 0x0778 (Size: 0x8, Type: ObjectProperty)
    void* ProjectileMovementComponent; // 0x0780 (Size: 0x8, Type: ObjectProperty)
    void* WaterInteractionComponent; // 0x0788 (Size: 0x8, Type: ObjectProperty)
    void* BulletWhipTrackerComponent; // 0x0790 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDummyProjectile; // 0x0798 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopSimulatingOnHit; // 0x0799 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TouchWaterBehavior; // 0x079A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPassThroughFriendlyPawns; // 0x079B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyNewtonCharacterImpulse; // 0x079C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableCollisionOnStop; // 0x079D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStoppedSimulatingDueToHit; // 0x079E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateStopSimulationLocation; // 0x079F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplicateStopSimulationLocationOptimized; // 0x07A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClientInterpMovement; // 0x07A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClientInterpRotation; // 0x07A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseClientsidePrediction; // 0x07A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPredictedProjectile; // 0x07A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasLocalPredictedCounterpart; // 0x07A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x07A6
    std::uint8_t PredictionKey[0x8]; // 0x07A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAutoSelectAttachedForInterp; // 0x07B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x07B1
    std::uint8_t bFiredWhileTargeting; // 0x07B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x07B9
    std::int32_t ResumeSimulationCount; // 0x07BC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0008[0x4]; // 0x07C0
    std::uint16_t SyncID; // 0x07C4 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0009[0x2]; // 0x07C6
    std::uint8_t SimulationStoppingHit[0x108]; // 0x07C8 (Size: 0x108, Type: StructProperty)
    std::uint8_t WeaponResponseType; // 0x08D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_000A[0x37]; // 0x08D1
    std::uint8_t DefaultTags[0x20]; // 0x0908 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProjectileGameplayCues[0x40]; // 0x0928 (Size: 0x40, Type: StructProperty)
    void* CachedPassByPawn; // 0x0968 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000B[0x18]; // 0x0970
    float SkyTubeForceMultiplier; // 0x0988 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000C[0x4]; // 0x098C
    void* CurrentSkyTube; // 0x0990 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedImpactResult[0xF8]; // 0x0998 (Size: 0xF8, Type: StructProperty)
    void* BulletWhipTrackerComponentClass; // 0x0A90 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_000D[0x1]; // 0x0A98
    std::uint8_t bResetOverlapRestrictionsOnBounce; // 0x0A99 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x2]; // 0x0A9A
    float MaxLifespanOnStop; // 0x0A9C (Size: 0x4, Type: FloatProperty)
    float LifespanOnHitDoNotExplode; // 0x0AA0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoKillWhenExceedingMaxSimulationDistance; // 0x0AA4 (Size: 0x1, Type: BoolProperty)
    // 0x0AA4 BoolProperty bClampLocationAtMaxSimulationDistance (shared storage)
    // 0x0AA4 BoolProperty bStopSimulationAtDistanceFromInitialLocation (shared storage)
    std::uint8_t Pad_000F[0x3]; // 0x0AA5
    float MaxSimulationDistanceSquaredOverride; // 0x0AA8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0010[0x1C]; // 0x0AAC
    TArray<void*> ProjectileThrownStatCategoryNames; // 0x0AC8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAbilityTimelineProjectile, VerticleFireOffset) == 1688, "Offset mismatch for UFortAbilityTimelineProjectile::VerticleFireOffset");
static_assert(offsetof(UFortAbilityTimelineProjectile, InitialSpeed) == 1704, "Offset mismatch for UFortAbilityTimelineProjectile::InitialSpeed");
static_assert(offsetof(UFortAbilityTimelineProjectile, ChargeUpInitialSpeed) == 1720, "Offset mismatch for UFortAbilityTimelineProjectile::ChargeUpInitialSpeed");
static_assert(offsetof(UFortAbilityTimelineProjectile, MaxSpeed) == 1736, "Offset mismatch for UFortAbilityTimelineProjectile::MaxSpeed");
static_assert(offsetof(UFortAbilityTimelineProjectile, InitialGravityScaleOverride) == 1752, "Offset mismatch for UFortAbilityTimelineProjectile::InitialGravityScaleOverride");
static_assert(offsetof(UFortAbilityTimelineProjectile, ReplicatedMaxSpeed) == 1768, "Offset mismatch for UFortAbilityTimelineProjectile::ReplicatedMaxSpeed");
static_assert(offsetof(UFortAbilityTimelineProjectile, GravityScale) == 1772, "Offset mismatch for UFortAbilityTimelineProjectile::GravityScale");
static_assert(offsetof(UFortAbilityTimelineProjectile, OriginalTarget) == 1776, "Offset mismatch for UFortAbilityTimelineProjectile::OriginalTarget");
static_assert(offsetof(UFortAbilityTimelineProjectile, ChargePercent) == 1784, "Offset mismatch for UFortAbilityTimelineProjectile::ChargePercent");
static_assert(offsetof(UFortAbilityTimelineProjectile, MomentumTransfer) == 1788, "Offset mismatch for UFortAbilityTimelineProjectile::MomentumTransfer");
static_assert(offsetof(UFortAbilityTimelineProjectile, bAddOwnerVelocity) == 1792, "Offset mismatch for UFortAbilityTimelineProjectile::bAddOwnerVelocity");
static_assert(offsetof(UFortAbilityTimelineProjectile, MaxInitialSpeedForOwnerVelocity) == 1800, "Offset mismatch for UFortAbilityTimelineProjectile::MaxInitialSpeedForOwnerVelocity");
static_assert(offsetof(UFortAbilityTimelineProjectile, MaxDeltaVelocityAngleToOwnerVelocity) == 1840, "Offset mismatch for UFortAbilityTimelineProjectile::MaxDeltaVelocityAngleToOwnerVelocity");
static_assert(offsetof(UFortAbilityTimelineProjectile, bSpawnPointCanBeUsedByOtherPlayers) == 1880, "Offset mismatch for UFortAbilityTimelineProjectile::bSpawnPointCanBeUsedByOtherPlayers");
static_assert(offsetof(UFortAbilityTimelineProjectile, PlayerSpawnOffset) == 1884, "Offset mismatch for UFortAbilityTimelineProjectile::PlayerSpawnOffset");
static_assert(offsetof(UFortAbilityTimelineProjectile, bRegisterInPerceptionSystem) == 1888, "Offset mismatch for UFortAbilityTimelineProjectile::bRegisterInPerceptionSystem");
static_assert(offsetof(UFortAbilityTimelineProjectile, StaticMeshPropToRemoveOnPawn) == 1896, "Offset mismatch for UFortAbilityTimelineProjectile::StaticMeshPropToRemoveOnPawn");
static_assert(offsetof(UFortAbilityTimelineProjectile, bCanBePickedUpWhenStopped) == 1904, "Offset mismatch for UFortAbilityTimelineProjectile::bCanBePickedUpWhenStopped");
static_assert(offsetof(UFortAbilityTimelineProjectile, CapsuleComponent) == 1912, "Offset mismatch for UFortAbilityTimelineProjectile::CapsuleComponent");
static_assert(offsetof(UFortAbilityTimelineProjectile, ProjectileMovementComponent) == 1920, "Offset mismatch for UFortAbilityTimelineProjectile::ProjectileMovementComponent");
static_assert(offsetof(UFortAbilityTimelineProjectile, WaterInteractionComponent) == 1928, "Offset mismatch for UFortAbilityTimelineProjectile::WaterInteractionComponent");
static_assert(offsetof(UFortAbilityTimelineProjectile, BulletWhipTrackerComponent) == 1936, "Offset mismatch for UFortAbilityTimelineProjectile::BulletWhipTrackerComponent");
static_assert(offsetof(UFortAbilityTimelineProjectile, bDummyProjectile) == 1944, "Offset mismatch for UFortAbilityTimelineProjectile::bDummyProjectile");
static_assert(offsetof(UFortAbilityTimelineProjectile, bStopSimulatingOnHit) == 1945, "Offset mismatch for UFortAbilityTimelineProjectile::bStopSimulatingOnHit");
static_assert(offsetof(UFortAbilityTimelineProjectile, TouchWaterBehavior) == 1946, "Offset mismatch for UFortAbilityTimelineProjectile::TouchWaterBehavior");
static_assert(offsetof(UFortAbilityTimelineProjectile, bPassThroughFriendlyPawns) == 1947, "Offset mismatch for UFortAbilityTimelineProjectile::bPassThroughFriendlyPawns");
static_assert(offsetof(UFortAbilityTimelineProjectile, bApplyNewtonCharacterImpulse) == 1948, "Offset mismatch for UFortAbilityTimelineProjectile::bApplyNewtonCharacterImpulse");
static_assert(offsetof(UFortAbilityTimelineProjectile, bDisableCollisionOnStop) == 1949, "Offset mismatch for UFortAbilityTimelineProjectile::bDisableCollisionOnStop");
static_assert(offsetof(UFortAbilityTimelineProjectile, bStoppedSimulatingDueToHit) == 1950, "Offset mismatch for UFortAbilityTimelineProjectile::bStoppedSimulatingDueToHit");
static_assert(offsetof(UFortAbilityTimelineProjectile, bReplicateStopSimulationLocation) == 1951, "Offset mismatch for UFortAbilityTimelineProjectile::bReplicateStopSimulationLocation");
static_assert(offsetof(UFortAbilityTimelineProjectile, bReplicateStopSimulationLocationOptimized) == 1952, "Offset mismatch for UFortAbilityTimelineProjectile::bReplicateStopSimulationLocationOptimized");
static_assert(offsetof(UFortAbilityTimelineProjectile, bClientInterpMovement) == 1953, "Offset mismatch for UFortAbilityTimelineProjectile::bClientInterpMovement");
static_assert(offsetof(UFortAbilityTimelineProjectile, bClientInterpRotation) == 1954, "Offset mismatch for UFortAbilityTimelineProjectile::bClientInterpRotation");
static_assert(offsetof(UFortAbilityTimelineProjectile, bUseClientsidePrediction) == 1955, "Offset mismatch for UFortAbilityTimelineProjectile::bUseClientsidePrediction");
static_assert(offsetof(UFortAbilityTimelineProjectile, bIsPredictedProjectile) == 1956, "Offset mismatch for UFortAbilityTimelineProjectile::bIsPredictedProjectile");
static_assert(offsetof(UFortAbilityTimelineProjectile, bHasLocalPredictedCounterpart) == 1957, "Offset mismatch for UFortAbilityTimelineProjectile::bHasLocalPredictedCounterpart");
static_assert(offsetof(UFortAbilityTimelineProjectile, PredictionKey) == 1960, "Offset mismatch for UFortAbilityTimelineProjectile::PredictionKey");
static_assert(offsetof(UFortAbilityTimelineProjectile, bAutoSelectAttachedForInterp) == 1968, "Offset mismatch for UFortAbilityTimelineProjectile::bAutoSelectAttachedForInterp");
static_assert(offsetof(UFortAbilityTimelineProjectile, bFiredWhileTargeting) == 1976, "Offset mismatch for UFortAbilityTimelineProjectile::bFiredWhileTargeting");
static_assert(offsetof(UFortAbilityTimelineProjectile, ResumeSimulationCount) == 1980, "Offset mismatch for UFortAbilityTimelineProjectile::ResumeSimulationCount");
static_assert(offsetof(UFortAbilityTimelineProjectile, SyncID) == 1988, "Offset mismatch for UFortAbilityTimelineProjectile::SyncID");
static_assert(offsetof(UFortAbilityTimelineProjectile, SimulationStoppingHit) == 1992, "Offset mismatch for UFortAbilityTimelineProjectile::SimulationStoppingHit");
static_assert(offsetof(UFortAbilityTimelineProjectile, WeaponResponseType) == 2256, "Offset mismatch for UFortAbilityTimelineProjectile::WeaponResponseType");
static_assert(offsetof(UFortAbilityTimelineProjectile, DefaultTags) == 2312, "Offset mismatch for UFortAbilityTimelineProjectile::DefaultTags");
static_assert(offsetof(UFortAbilityTimelineProjectile, ProjectileGameplayCues) == 2344, "Offset mismatch for UFortAbilityTimelineProjectile::ProjectileGameplayCues");
static_assert(offsetof(UFortAbilityTimelineProjectile, CachedPassByPawn) == 2408, "Offset mismatch for UFortAbilityTimelineProjectile::CachedPassByPawn");
static_assert(offsetof(UFortAbilityTimelineProjectile, SkyTubeForceMultiplier) == 2440, "Offset mismatch for UFortAbilityTimelineProjectile::SkyTubeForceMultiplier");
static_assert(offsetof(UFortAbilityTimelineProjectile, CurrentSkyTube) == 2448, "Offset mismatch for UFortAbilityTimelineProjectile::CurrentSkyTube");
static_assert(offsetof(UFortAbilityTimelineProjectile, CachedImpactResult) == 2456, "Offset mismatch for UFortAbilityTimelineProjectile::CachedImpactResult");
static_assert(offsetof(UFortAbilityTimelineProjectile, BulletWhipTrackerComponentClass) == 2704, "Offset mismatch for UFortAbilityTimelineProjectile::BulletWhipTrackerComponentClass");
static_assert(offsetof(UFortAbilityTimelineProjectile, bResetOverlapRestrictionsOnBounce) == 2713, "Offset mismatch for UFortAbilityTimelineProjectile::bResetOverlapRestrictionsOnBounce");
static_assert(offsetof(UFortAbilityTimelineProjectile, MaxLifespanOnStop) == 2716, "Offset mismatch for UFortAbilityTimelineProjectile::MaxLifespanOnStop");
static_assert(offsetof(UFortAbilityTimelineProjectile, LifespanOnHitDoNotExplode) == 2720, "Offset mismatch for UFortAbilityTimelineProjectile::LifespanOnHitDoNotExplode");
static_assert(offsetof(UFortAbilityTimelineProjectile, bAutoKillWhenExceedingMaxSimulationDistance) == 2724, "Offset mismatch for UFortAbilityTimelineProjectile::bAutoKillWhenExceedingMaxSimulationDistance");
static_assert(offsetof(UFortAbilityTimelineProjectile, MaxSimulationDistanceSquaredOverride) == 2728, "Offset mismatch for UFortAbilityTimelineProjectile::MaxSimulationDistanceSquaredOverride");
static_assert(offsetof(UFortAbilityTimelineProjectile, ProjectileThrownStatCategoryNames) == 2760, "Offset mismatch for UFortAbilityTimelineProjectile::ProjectileThrownStatCategoryNames");

// /Script/VerseFortniteAbilities.FortTempTimelineAbility
// Kind: Class; super: FortGameplayAbility
class UFortTempTimelineAbility
{
public:
    std::uint8_t Pad_0000[0xB30]; // 0x0000
    void* TimelineExecutorTask; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTempTimelineAbility, TimelineExecutorTask) == 2864, "Offset mismatch for UFortTempTimelineAbility::TimelineExecutorTask");

// /Script/VerseFortniteAbilities.GCNotify_TimelineBurstParticle
// Kind: Class; super: GameplayCueNotify_Static
class UGCNotify_TimelineBurstParticle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayCueTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCueName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t IsOverride; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGCNotify_TimelineBurstParticle, GameplayCueTag) == 40, "Offset mismatch for UGCNotify_TimelineBurstParticle::GameplayCueTag");
static_assert(offsetof(UGCNotify_TimelineBurstParticle, GameplayCueName) == 44, "Offset mismatch for UGCNotify_TimelineBurstParticle::GameplayCueName");
static_assert(offsetof(UGCNotify_TimelineBurstParticle, IsOverride) == 48, "Offset mismatch for UGCNotify_TimelineBurstParticle::IsOverride");

// /Script/VerseFortniteAbilities.GCNotify_TimelineBurstSound
// Kind: Class; super: GameplayCueNotify_Static
class UGCNotify_TimelineBurstSound
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayCueTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCueName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t IsOverride; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGCNotify_TimelineBurstSound, GameplayCueTag) == 40, "Offset mismatch for UGCNotify_TimelineBurstSound::GameplayCueTag");
static_assert(offsetof(UGCNotify_TimelineBurstSound, GameplayCueName) == 44, "Offset mismatch for UGCNotify_TimelineBurstSound::GameplayCueName");
static_assert(offsetof(UGCNotify_TimelineBurstSound, IsOverride) == 48, "Offset mismatch for UGCNotify_TimelineBurstSound::IsOverride");

// /Script/VerseFortniteAbilities.GCNotify_TimelineLoopParticle
// Kind: Class; super: GameplayCueNotify_Looping
class UGCNotify_TimelineLoopParticle
{
public:
    std::uint8_t Pad_0000[0xE50]; // 0x0000
    TMap<void*, void*> SpawnedInstances; // 0x0E50 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGCNotify_TimelineLoopParticle, SpawnedInstances) == 3664, "Offset mismatch for UGCNotify_TimelineLoopParticle::SpawnedInstances");

// /Script/VerseFortniteAbilities.GCNotify_TimelineLoopSound
// Kind: Class; super: GameplayCueNotify_Looping
class UGCNotify_TimelineLoopSound
{
public:
    std::uint8_t Pad_0000[0xE50]; // 0x0000
    float FadeOutDuration; // 0x0E50 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0E54
    TMap<void*, void*> SpawnedInstances; // 0x0E58 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGCNotify_TimelineLoopSound, FadeOutDuration) == 3664, "Offset mismatch for UGCNotify_TimelineLoopSound::FadeOutDuration");
static_assert(offsetof(UGCNotify_TimelineLoopSound, SpawnedInstances) == 3672, "Offset mismatch for UGCNotify_TimelineLoopSound::SpawnedInstances");

// /Script/VerseFortniteAbilities.GameplayCueLoop_TimelineSpanFX
// Kind: Class; super: FortGameplayCueNotify_Loop
class UGameplayCueLoop_TimelineSpanFX
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    std::uint8_t ContextType; // 0x0378 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0379
    void* EffectChooser; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x2C8]; // 0x0388
    std::uint8_t ApplicationBurst[0x148]; // 0x0650 (Size: 0x148, Type: StructProperty)
    std::uint8_t ApplicationResult[0x48]; // 0x0798 (Size: 0x48, Type: StructProperty)
    std::uint8_t DefaultLoopingAttachment[0x58]; // 0x07E0 (Size: 0x58, Type: StructProperty)
    TArray<void*> LoopingParticles; // 0x0838 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoopingSounds; // 0x0848 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LoopingForceFeedbackEffect[0x28]; // 0x0858 (Size: 0x28, Type: StructProperty)
    std::uint8_t LoopingCameraLensEffect[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    std::uint8_t LoopingCameraShake[0x38]; // 0x0898 (Size: 0x38, Type: StructProperty)
    std::uint8_t LoopingResult[0x48]; // 0x08D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t RecurringBurst[0x148]; // 0x0918 (Size: 0x148, Type: StructProperty)
    std::uint8_t RecurringResult[0x48]; // 0x0A60 (Size: 0x48, Type: StructProperty)
    std::uint8_t RemovalBurst[0x148]; // 0x0AA8 (Size: 0x148, Type: StructProperty)
    std::uint8_t RemovalResult[0x48]; // 0x0BF0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bTickEnabled; // 0x0C38 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0C39
    float TickInterval; // 0x0C3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TickGroup; // 0x0C40 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, ContextType) == 888, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::ContextType");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, EffectChooser) == 896, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::EffectChooser");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, ApplicationBurst) == 1616, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::ApplicationBurst");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, ApplicationResult) == 1944, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::ApplicationResult");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, DefaultLoopingAttachment) == 2016, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::DefaultLoopingAttachment");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, LoopingParticles) == 2104, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::LoopingParticles");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, LoopingSounds) == 2120, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::LoopingSounds");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, LoopingForceFeedbackEffect) == 2136, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::LoopingForceFeedbackEffect");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, LoopingCameraLensEffect) == 2176, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::LoopingCameraLensEffect");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, LoopingCameraShake) == 2200, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::LoopingCameraShake");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, LoopingResult) == 2256, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::LoopingResult");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, RecurringBurst) == 2328, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::RecurringBurst");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, RecurringResult) == 2656, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::RecurringResult");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, RemovalBurst) == 2728, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::RemovalBurst");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, RemovalResult) == 3056, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::RemovalResult");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, bTickEnabled) == 3128, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::bTickEnabled");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, TickInterval) == 3132, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::TickInterval");
static_assert(offsetof(UGameplayCueLoop_TimelineSpanFX, TickGroup) == 3136, "Offset mismatch for UGameplayCueLoop_TimelineSpanFX::TickGroup");

// /Script/VerseFortniteAbilities.GameplayCueNotify_TimelinePointFX
// Kind: Class; super: FortGameplayCueNotify_Burst
class UGameplayCueNotify_TimelinePointFX
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DefaultCondition[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultAttachment[0x58]; // 0x0070 (Size: 0x58, Type: StructProperty)
    std::uint8_t BurstEffectData[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayCueNotify_TimelinePointFX, DefaultCondition) == 56, "Offset mismatch for UGameplayCueNotify_TimelinePointFX::DefaultCondition");
static_assert(offsetof(UGameplayCueNotify_TimelinePointFX, DefaultAttachment) == 112, "Offset mismatch for UGameplayCueNotify_TimelinePointFX::DefaultAttachment");
static_assert(offsetof(UGameplayCueNotify_TimelinePointFX, BurstEffectData) == 200, "Offset mismatch for UGameplayCueNotify_TimelinePointFX::BurstEffectData");

// /Script/VerseFortniteAbilities.TimelineSpanParticleCue
// Kind: Class; super: GameplayEffect
class UTimelineSpanParticleCue
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DurationPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DurationMagnitude[0x1D8]; // 0x0038 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t MaxDurationMagnitude[0x1D8]; // 0x0210 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t Period[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bExecutePeriodicEffectOnApplication; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PeriodicInhibitionPolicy; // 0x0411 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0412
    TArray<void*> Modifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Executions; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChanceToApplyToTarget[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    TArray<void*> ApplicationRequirements; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowEffects; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDenyOverflowApplication; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearStackOnOverflow; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0492
    TArray<void*> PrematureExpirationEffectClasses; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoutineExpirationEffectClasses; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireModifierSuccessToTriggerCues; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressStackingCues; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x04BA
    TArray<void*> GameplayCues; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* UIData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InheritableGameplayEffectTags[0x60]; // 0x04D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableOwnedTagsContainer[0x60]; // 0x0538 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x60]; // 0x0598 (Size: 0x60, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x05F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0680 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x88]; // 0x0708 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x0790 (Size: 0x60, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityTags[0x88]; // 0x07F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityQuery[0x1A0]; // 0x0878 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectQuery[0x199]; // 0x0A18 (Size: 0x199, Type: StructProperty)
    std::uint8_t StackingType; // 0x0BB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0BB2
    std::int32_t StackLimitCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    std::uint8_t StackDurationRefreshPolicy; // 0x0BB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackPeriodResetPolicy; // 0x0BB9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackExpirationPolicy; // 0x0BBA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFactorInStackCount; // 0x0BBB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0BBC
    TArray<void*> GrantedAbilities; // 0x0BC0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x60]; // 0x0BD0
    TArray<void*> GEComponents; // 0x0C30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTimelineSpanParticleCue, DurationPolicy) == 48, "Offset mismatch for UTimelineSpanParticleCue::DurationPolicy");
static_assert(offsetof(UTimelineSpanParticleCue, DurationMagnitude) == 56, "Offset mismatch for UTimelineSpanParticleCue::DurationMagnitude");
static_assert(offsetof(UTimelineSpanParticleCue, MaxDurationMagnitude) == 528, "Offset mismatch for UTimelineSpanParticleCue::MaxDurationMagnitude");
static_assert(offsetof(UTimelineSpanParticleCue, Period) == 1000, "Offset mismatch for UTimelineSpanParticleCue::Period");
static_assert(offsetof(UTimelineSpanParticleCue, bExecutePeriodicEffectOnApplication) == 1040, "Offset mismatch for UTimelineSpanParticleCue::bExecutePeriodicEffectOnApplication");
static_assert(offsetof(UTimelineSpanParticleCue, PeriodicInhibitionPolicy) == 1041, "Offset mismatch for UTimelineSpanParticleCue::PeriodicInhibitionPolicy");
static_assert(offsetof(UTimelineSpanParticleCue, Modifiers) == 1048, "Offset mismatch for UTimelineSpanParticleCue::Modifiers");
static_assert(offsetof(UTimelineSpanParticleCue, Executions) == 1064, "Offset mismatch for UTimelineSpanParticleCue::Executions");
static_assert(offsetof(UTimelineSpanParticleCue, ChanceToApplyToTarget) == 1080, "Offset mismatch for UTimelineSpanParticleCue::ChanceToApplyToTarget");
static_assert(offsetof(UTimelineSpanParticleCue, ApplicationRequirements) == 1120, "Offset mismatch for UTimelineSpanParticleCue::ApplicationRequirements");
static_assert(offsetof(UTimelineSpanParticleCue, ConditionalGameplayEffects) == 1136, "Offset mismatch for UTimelineSpanParticleCue::ConditionalGameplayEffects");
static_assert(offsetof(UTimelineSpanParticleCue, OverflowEffects) == 1152, "Offset mismatch for UTimelineSpanParticleCue::OverflowEffects");
static_assert(offsetof(UTimelineSpanParticleCue, bDenyOverflowApplication) == 1168, "Offset mismatch for UTimelineSpanParticleCue::bDenyOverflowApplication");
static_assert(offsetof(UTimelineSpanParticleCue, bClearStackOnOverflow) == 1169, "Offset mismatch for UTimelineSpanParticleCue::bClearStackOnOverflow");
static_assert(offsetof(UTimelineSpanParticleCue, PrematureExpirationEffectClasses) == 1176, "Offset mismatch for UTimelineSpanParticleCue::PrematureExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanParticleCue, RoutineExpirationEffectClasses) == 1192, "Offset mismatch for UTimelineSpanParticleCue::RoutineExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanParticleCue, bRequireModifierSuccessToTriggerCues) == 1208, "Offset mismatch for UTimelineSpanParticleCue::bRequireModifierSuccessToTriggerCues");
static_assert(offsetof(UTimelineSpanParticleCue, bSuppressStackingCues) == 1209, "Offset mismatch for UTimelineSpanParticleCue::bSuppressStackingCues");
static_assert(offsetof(UTimelineSpanParticleCue, GameplayCues) == 1216, "Offset mismatch for UTimelineSpanParticleCue::GameplayCues");
static_assert(offsetof(UTimelineSpanParticleCue, UIData) == 1232, "Offset mismatch for UTimelineSpanParticleCue::UIData");
static_assert(offsetof(UTimelineSpanParticleCue, InheritableGameplayEffectTags) == 1240, "Offset mismatch for UTimelineSpanParticleCue::InheritableGameplayEffectTags");
static_assert(offsetof(UTimelineSpanParticleCue, InheritableOwnedTagsContainer) == 1336, "Offset mismatch for UTimelineSpanParticleCue::InheritableOwnedTagsContainer");
static_assert(offsetof(UTimelineSpanParticleCue, InheritableBlockedAbilityTagsContainer) == 1432, "Offset mismatch for UTimelineSpanParticleCue::InheritableBlockedAbilityTagsContainer");
static_assert(offsetof(UTimelineSpanParticleCue, OngoingTagRequirements) == 1528, "Offset mismatch for UTimelineSpanParticleCue::OngoingTagRequirements");
static_assert(offsetof(UTimelineSpanParticleCue, ApplicationTagRequirements) == 1664, "Offset mismatch for UTimelineSpanParticleCue::ApplicationTagRequirements");
static_assert(offsetof(UTimelineSpanParticleCue, RemovalTagRequirements) == 1800, "Offset mismatch for UTimelineSpanParticleCue::RemovalTagRequirements");
static_assert(offsetof(UTimelineSpanParticleCue, RemoveGameplayEffectsWithTags) == 1936, "Offset mismatch for UTimelineSpanParticleCue::RemoveGameplayEffectsWithTags");
static_assert(offsetof(UTimelineSpanParticleCue, GrantedApplicationImmunityTags) == 2032, "Offset mismatch for UTimelineSpanParticleCue::GrantedApplicationImmunityTags");
static_assert(offsetof(UTimelineSpanParticleCue, GrantedApplicationImmunityQuery) == 2168, "Offset mismatch for UTimelineSpanParticleCue::GrantedApplicationImmunityQuery");
static_assert(offsetof(UTimelineSpanParticleCue, RemoveGameplayEffectQuery) == 2584, "Offset mismatch for UTimelineSpanParticleCue::RemoveGameplayEffectQuery");
static_assert(offsetof(UTimelineSpanParticleCue, StackingType) == 2993, "Offset mismatch for UTimelineSpanParticleCue::StackingType");
static_assert(offsetof(UTimelineSpanParticleCue, StackLimitCount) == 2996, "Offset mismatch for UTimelineSpanParticleCue::StackLimitCount");
static_assert(offsetof(UTimelineSpanParticleCue, StackDurationRefreshPolicy) == 3000, "Offset mismatch for UTimelineSpanParticleCue::StackDurationRefreshPolicy");
static_assert(offsetof(UTimelineSpanParticleCue, StackPeriodResetPolicy) == 3001, "Offset mismatch for UTimelineSpanParticleCue::StackPeriodResetPolicy");
static_assert(offsetof(UTimelineSpanParticleCue, StackExpirationPolicy) == 3002, "Offset mismatch for UTimelineSpanParticleCue::StackExpirationPolicy");
static_assert(offsetof(UTimelineSpanParticleCue, bFactorInStackCount) == 3003, "Offset mismatch for UTimelineSpanParticleCue::bFactorInStackCount");
static_assert(offsetof(UTimelineSpanParticleCue, GrantedAbilities) == 3008, "Offset mismatch for UTimelineSpanParticleCue::GrantedAbilities");
static_assert(offsetof(UTimelineSpanParticleCue, GEComponents) == 3120, "Offset mismatch for UTimelineSpanParticleCue::GEComponents");

// /Script/VerseFortniteAbilities.TimelineSpanParticleCueRemoval
// Kind: Class; super: GameplayEffect
class UTimelineSpanParticleCueRemoval
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DurationPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DurationMagnitude[0x1D8]; // 0x0038 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t MaxDurationMagnitude[0x1D8]; // 0x0210 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t Period[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bExecutePeriodicEffectOnApplication; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PeriodicInhibitionPolicy; // 0x0411 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0412
    TArray<void*> Modifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Executions; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChanceToApplyToTarget[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    TArray<void*> ApplicationRequirements; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowEffects; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDenyOverflowApplication; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearStackOnOverflow; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0492
    TArray<void*> PrematureExpirationEffectClasses; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoutineExpirationEffectClasses; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireModifierSuccessToTriggerCues; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressStackingCues; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x04BA
    TArray<void*> GameplayCues; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* UIData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InheritableGameplayEffectTags[0x60]; // 0x04D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableOwnedTagsContainer[0x60]; // 0x0538 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x60]; // 0x0598 (Size: 0x60, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x05F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0680 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x88]; // 0x0708 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x0790 (Size: 0x60, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityTags[0x88]; // 0x07F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityQuery[0x1A0]; // 0x0878 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectQuery[0x199]; // 0x0A18 (Size: 0x199, Type: StructProperty)
    std::uint8_t StackingType; // 0x0BB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0BB2
    std::int32_t StackLimitCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    std::uint8_t StackDurationRefreshPolicy; // 0x0BB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackPeriodResetPolicy; // 0x0BB9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackExpirationPolicy; // 0x0BBA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFactorInStackCount; // 0x0BBB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0BBC
    TArray<void*> GrantedAbilities; // 0x0BC0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x60]; // 0x0BD0
    TArray<void*> GEComponents; // 0x0C30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTimelineSpanParticleCueRemoval, DurationPolicy) == 48, "Offset mismatch for UTimelineSpanParticleCueRemoval::DurationPolicy");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, DurationMagnitude) == 56, "Offset mismatch for UTimelineSpanParticleCueRemoval::DurationMagnitude");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, MaxDurationMagnitude) == 528, "Offset mismatch for UTimelineSpanParticleCueRemoval::MaxDurationMagnitude");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, Period) == 1000, "Offset mismatch for UTimelineSpanParticleCueRemoval::Period");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, bExecutePeriodicEffectOnApplication) == 1040, "Offset mismatch for UTimelineSpanParticleCueRemoval::bExecutePeriodicEffectOnApplication");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, PeriodicInhibitionPolicy) == 1041, "Offset mismatch for UTimelineSpanParticleCueRemoval::PeriodicInhibitionPolicy");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, Modifiers) == 1048, "Offset mismatch for UTimelineSpanParticleCueRemoval::Modifiers");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, Executions) == 1064, "Offset mismatch for UTimelineSpanParticleCueRemoval::Executions");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, ChanceToApplyToTarget) == 1080, "Offset mismatch for UTimelineSpanParticleCueRemoval::ChanceToApplyToTarget");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, ApplicationRequirements) == 1120, "Offset mismatch for UTimelineSpanParticleCueRemoval::ApplicationRequirements");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, ConditionalGameplayEffects) == 1136, "Offset mismatch for UTimelineSpanParticleCueRemoval::ConditionalGameplayEffects");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, OverflowEffects) == 1152, "Offset mismatch for UTimelineSpanParticleCueRemoval::OverflowEffects");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, bDenyOverflowApplication) == 1168, "Offset mismatch for UTimelineSpanParticleCueRemoval::bDenyOverflowApplication");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, bClearStackOnOverflow) == 1169, "Offset mismatch for UTimelineSpanParticleCueRemoval::bClearStackOnOverflow");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, PrematureExpirationEffectClasses) == 1176, "Offset mismatch for UTimelineSpanParticleCueRemoval::PrematureExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, RoutineExpirationEffectClasses) == 1192, "Offset mismatch for UTimelineSpanParticleCueRemoval::RoutineExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, bRequireModifierSuccessToTriggerCues) == 1208, "Offset mismatch for UTimelineSpanParticleCueRemoval::bRequireModifierSuccessToTriggerCues");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, bSuppressStackingCues) == 1209, "Offset mismatch for UTimelineSpanParticleCueRemoval::bSuppressStackingCues");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, GameplayCues) == 1216, "Offset mismatch for UTimelineSpanParticleCueRemoval::GameplayCues");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, UIData) == 1232, "Offset mismatch for UTimelineSpanParticleCueRemoval::UIData");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, InheritableGameplayEffectTags) == 1240, "Offset mismatch for UTimelineSpanParticleCueRemoval::InheritableGameplayEffectTags");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, InheritableOwnedTagsContainer) == 1336, "Offset mismatch for UTimelineSpanParticleCueRemoval::InheritableOwnedTagsContainer");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, InheritableBlockedAbilityTagsContainer) == 1432, "Offset mismatch for UTimelineSpanParticleCueRemoval::InheritableBlockedAbilityTagsContainer");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, OngoingTagRequirements) == 1528, "Offset mismatch for UTimelineSpanParticleCueRemoval::OngoingTagRequirements");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, ApplicationTagRequirements) == 1664, "Offset mismatch for UTimelineSpanParticleCueRemoval::ApplicationTagRequirements");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, RemovalTagRequirements) == 1800, "Offset mismatch for UTimelineSpanParticleCueRemoval::RemovalTagRequirements");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, RemoveGameplayEffectsWithTags) == 1936, "Offset mismatch for UTimelineSpanParticleCueRemoval::RemoveGameplayEffectsWithTags");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, GrantedApplicationImmunityTags) == 2032, "Offset mismatch for UTimelineSpanParticleCueRemoval::GrantedApplicationImmunityTags");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, GrantedApplicationImmunityQuery) == 2168, "Offset mismatch for UTimelineSpanParticleCueRemoval::GrantedApplicationImmunityQuery");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, RemoveGameplayEffectQuery) == 2584, "Offset mismatch for UTimelineSpanParticleCueRemoval::RemoveGameplayEffectQuery");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, StackingType) == 2993, "Offset mismatch for UTimelineSpanParticleCueRemoval::StackingType");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, StackLimitCount) == 2996, "Offset mismatch for UTimelineSpanParticleCueRemoval::StackLimitCount");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, StackDurationRefreshPolicy) == 3000, "Offset mismatch for UTimelineSpanParticleCueRemoval::StackDurationRefreshPolicy");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, StackPeriodResetPolicy) == 3001, "Offset mismatch for UTimelineSpanParticleCueRemoval::StackPeriodResetPolicy");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, StackExpirationPolicy) == 3002, "Offset mismatch for UTimelineSpanParticleCueRemoval::StackExpirationPolicy");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, bFactorInStackCount) == 3003, "Offset mismatch for UTimelineSpanParticleCueRemoval::bFactorInStackCount");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, GrantedAbilities) == 3008, "Offset mismatch for UTimelineSpanParticleCueRemoval::GrantedAbilities");
static_assert(offsetof(UTimelineSpanParticleCueRemoval, GEComponents) == 3120, "Offset mismatch for UTimelineSpanParticleCueRemoval::GEComponents");

// /Script/VerseFortniteAbilities.TimelineSpanSoundCue
// Kind: Class; super: GameplayEffect
class UTimelineSpanSoundCue
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DurationPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DurationMagnitude[0x1D8]; // 0x0038 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t MaxDurationMagnitude[0x1D8]; // 0x0210 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t Period[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bExecutePeriodicEffectOnApplication; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PeriodicInhibitionPolicy; // 0x0411 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0412
    TArray<void*> Modifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Executions; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChanceToApplyToTarget[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    TArray<void*> ApplicationRequirements; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowEffects; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDenyOverflowApplication; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearStackOnOverflow; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0492
    TArray<void*> PrematureExpirationEffectClasses; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoutineExpirationEffectClasses; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireModifierSuccessToTriggerCues; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressStackingCues; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x04BA
    TArray<void*> GameplayCues; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* UIData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InheritableGameplayEffectTags[0x60]; // 0x04D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableOwnedTagsContainer[0x60]; // 0x0538 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x60]; // 0x0598 (Size: 0x60, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x05F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0680 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x88]; // 0x0708 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x0790 (Size: 0x60, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityTags[0x88]; // 0x07F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityQuery[0x1A0]; // 0x0878 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectQuery[0x199]; // 0x0A18 (Size: 0x199, Type: StructProperty)
    std::uint8_t StackingType; // 0x0BB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0BB2
    std::int32_t StackLimitCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    std::uint8_t StackDurationRefreshPolicy; // 0x0BB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackPeriodResetPolicy; // 0x0BB9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackExpirationPolicy; // 0x0BBA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFactorInStackCount; // 0x0BBB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0BBC
    TArray<void*> GrantedAbilities; // 0x0BC0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x60]; // 0x0BD0
    TArray<void*> GEComponents; // 0x0C30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTimelineSpanSoundCue, DurationPolicy) == 48, "Offset mismatch for UTimelineSpanSoundCue::DurationPolicy");
static_assert(offsetof(UTimelineSpanSoundCue, DurationMagnitude) == 56, "Offset mismatch for UTimelineSpanSoundCue::DurationMagnitude");
static_assert(offsetof(UTimelineSpanSoundCue, MaxDurationMagnitude) == 528, "Offset mismatch for UTimelineSpanSoundCue::MaxDurationMagnitude");
static_assert(offsetof(UTimelineSpanSoundCue, Period) == 1000, "Offset mismatch for UTimelineSpanSoundCue::Period");
static_assert(offsetof(UTimelineSpanSoundCue, bExecutePeriodicEffectOnApplication) == 1040, "Offset mismatch for UTimelineSpanSoundCue::bExecutePeriodicEffectOnApplication");
static_assert(offsetof(UTimelineSpanSoundCue, PeriodicInhibitionPolicy) == 1041, "Offset mismatch for UTimelineSpanSoundCue::PeriodicInhibitionPolicy");
static_assert(offsetof(UTimelineSpanSoundCue, Modifiers) == 1048, "Offset mismatch for UTimelineSpanSoundCue::Modifiers");
static_assert(offsetof(UTimelineSpanSoundCue, Executions) == 1064, "Offset mismatch for UTimelineSpanSoundCue::Executions");
static_assert(offsetof(UTimelineSpanSoundCue, ChanceToApplyToTarget) == 1080, "Offset mismatch for UTimelineSpanSoundCue::ChanceToApplyToTarget");
static_assert(offsetof(UTimelineSpanSoundCue, ApplicationRequirements) == 1120, "Offset mismatch for UTimelineSpanSoundCue::ApplicationRequirements");
static_assert(offsetof(UTimelineSpanSoundCue, ConditionalGameplayEffects) == 1136, "Offset mismatch for UTimelineSpanSoundCue::ConditionalGameplayEffects");
static_assert(offsetof(UTimelineSpanSoundCue, OverflowEffects) == 1152, "Offset mismatch for UTimelineSpanSoundCue::OverflowEffects");
static_assert(offsetof(UTimelineSpanSoundCue, bDenyOverflowApplication) == 1168, "Offset mismatch for UTimelineSpanSoundCue::bDenyOverflowApplication");
static_assert(offsetof(UTimelineSpanSoundCue, bClearStackOnOverflow) == 1169, "Offset mismatch for UTimelineSpanSoundCue::bClearStackOnOverflow");
static_assert(offsetof(UTimelineSpanSoundCue, PrematureExpirationEffectClasses) == 1176, "Offset mismatch for UTimelineSpanSoundCue::PrematureExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanSoundCue, RoutineExpirationEffectClasses) == 1192, "Offset mismatch for UTimelineSpanSoundCue::RoutineExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanSoundCue, bRequireModifierSuccessToTriggerCues) == 1208, "Offset mismatch for UTimelineSpanSoundCue::bRequireModifierSuccessToTriggerCues");
static_assert(offsetof(UTimelineSpanSoundCue, bSuppressStackingCues) == 1209, "Offset mismatch for UTimelineSpanSoundCue::bSuppressStackingCues");
static_assert(offsetof(UTimelineSpanSoundCue, GameplayCues) == 1216, "Offset mismatch for UTimelineSpanSoundCue::GameplayCues");
static_assert(offsetof(UTimelineSpanSoundCue, UIData) == 1232, "Offset mismatch for UTimelineSpanSoundCue::UIData");
static_assert(offsetof(UTimelineSpanSoundCue, InheritableGameplayEffectTags) == 1240, "Offset mismatch for UTimelineSpanSoundCue::InheritableGameplayEffectTags");
static_assert(offsetof(UTimelineSpanSoundCue, InheritableOwnedTagsContainer) == 1336, "Offset mismatch for UTimelineSpanSoundCue::InheritableOwnedTagsContainer");
static_assert(offsetof(UTimelineSpanSoundCue, InheritableBlockedAbilityTagsContainer) == 1432, "Offset mismatch for UTimelineSpanSoundCue::InheritableBlockedAbilityTagsContainer");
static_assert(offsetof(UTimelineSpanSoundCue, OngoingTagRequirements) == 1528, "Offset mismatch for UTimelineSpanSoundCue::OngoingTagRequirements");
static_assert(offsetof(UTimelineSpanSoundCue, ApplicationTagRequirements) == 1664, "Offset mismatch for UTimelineSpanSoundCue::ApplicationTagRequirements");
static_assert(offsetof(UTimelineSpanSoundCue, RemovalTagRequirements) == 1800, "Offset mismatch for UTimelineSpanSoundCue::RemovalTagRequirements");
static_assert(offsetof(UTimelineSpanSoundCue, RemoveGameplayEffectsWithTags) == 1936, "Offset mismatch for UTimelineSpanSoundCue::RemoveGameplayEffectsWithTags");
static_assert(offsetof(UTimelineSpanSoundCue, GrantedApplicationImmunityTags) == 2032, "Offset mismatch for UTimelineSpanSoundCue::GrantedApplicationImmunityTags");
static_assert(offsetof(UTimelineSpanSoundCue, GrantedApplicationImmunityQuery) == 2168, "Offset mismatch for UTimelineSpanSoundCue::GrantedApplicationImmunityQuery");
static_assert(offsetof(UTimelineSpanSoundCue, RemoveGameplayEffectQuery) == 2584, "Offset mismatch for UTimelineSpanSoundCue::RemoveGameplayEffectQuery");
static_assert(offsetof(UTimelineSpanSoundCue, StackingType) == 2993, "Offset mismatch for UTimelineSpanSoundCue::StackingType");
static_assert(offsetof(UTimelineSpanSoundCue, StackLimitCount) == 2996, "Offset mismatch for UTimelineSpanSoundCue::StackLimitCount");
static_assert(offsetof(UTimelineSpanSoundCue, StackDurationRefreshPolicy) == 3000, "Offset mismatch for UTimelineSpanSoundCue::StackDurationRefreshPolicy");
static_assert(offsetof(UTimelineSpanSoundCue, StackPeriodResetPolicy) == 3001, "Offset mismatch for UTimelineSpanSoundCue::StackPeriodResetPolicy");
static_assert(offsetof(UTimelineSpanSoundCue, StackExpirationPolicy) == 3002, "Offset mismatch for UTimelineSpanSoundCue::StackExpirationPolicy");
static_assert(offsetof(UTimelineSpanSoundCue, bFactorInStackCount) == 3003, "Offset mismatch for UTimelineSpanSoundCue::bFactorInStackCount");
static_assert(offsetof(UTimelineSpanSoundCue, GrantedAbilities) == 3008, "Offset mismatch for UTimelineSpanSoundCue::GrantedAbilities");
static_assert(offsetof(UTimelineSpanSoundCue, GEComponents) == 3120, "Offset mismatch for UTimelineSpanSoundCue::GEComponents");

// /Script/VerseFortniteAbilities.TimelineSpanSoundCueRemoval
// Kind: Class; super: GameplayEffect
class UTimelineSpanSoundCueRemoval
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DurationPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DurationMagnitude[0x1D8]; // 0x0038 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t MaxDurationMagnitude[0x1D8]; // 0x0210 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t Period[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bExecutePeriodicEffectOnApplication; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PeriodicInhibitionPolicy; // 0x0411 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0412
    TArray<void*> Modifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Executions; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChanceToApplyToTarget[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    TArray<void*> ApplicationRequirements; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowEffects; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDenyOverflowApplication; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearStackOnOverflow; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0492
    TArray<void*> PrematureExpirationEffectClasses; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoutineExpirationEffectClasses; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireModifierSuccessToTriggerCues; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressStackingCues; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x04BA
    TArray<void*> GameplayCues; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* UIData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InheritableGameplayEffectTags[0x60]; // 0x04D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableOwnedTagsContainer[0x60]; // 0x0538 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x60]; // 0x0598 (Size: 0x60, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x05F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0680 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x88]; // 0x0708 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x0790 (Size: 0x60, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityTags[0x88]; // 0x07F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityQuery[0x1A0]; // 0x0878 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectQuery[0x199]; // 0x0A18 (Size: 0x199, Type: StructProperty)
    std::uint8_t StackingType; // 0x0BB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0BB2
    std::int32_t StackLimitCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    std::uint8_t StackDurationRefreshPolicy; // 0x0BB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackPeriodResetPolicy; // 0x0BB9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackExpirationPolicy; // 0x0BBA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFactorInStackCount; // 0x0BBB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0BBC
    TArray<void*> GrantedAbilities; // 0x0BC0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x60]; // 0x0BD0
    TArray<void*> GEComponents; // 0x0C30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTimelineSpanSoundCueRemoval, DurationPolicy) == 48, "Offset mismatch for UTimelineSpanSoundCueRemoval::DurationPolicy");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, DurationMagnitude) == 56, "Offset mismatch for UTimelineSpanSoundCueRemoval::DurationMagnitude");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, MaxDurationMagnitude) == 528, "Offset mismatch for UTimelineSpanSoundCueRemoval::MaxDurationMagnitude");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, Period) == 1000, "Offset mismatch for UTimelineSpanSoundCueRemoval::Period");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, bExecutePeriodicEffectOnApplication) == 1040, "Offset mismatch for UTimelineSpanSoundCueRemoval::bExecutePeriodicEffectOnApplication");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, PeriodicInhibitionPolicy) == 1041, "Offset mismatch for UTimelineSpanSoundCueRemoval::PeriodicInhibitionPolicy");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, Modifiers) == 1048, "Offset mismatch for UTimelineSpanSoundCueRemoval::Modifiers");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, Executions) == 1064, "Offset mismatch for UTimelineSpanSoundCueRemoval::Executions");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, ChanceToApplyToTarget) == 1080, "Offset mismatch for UTimelineSpanSoundCueRemoval::ChanceToApplyToTarget");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, ApplicationRequirements) == 1120, "Offset mismatch for UTimelineSpanSoundCueRemoval::ApplicationRequirements");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, ConditionalGameplayEffects) == 1136, "Offset mismatch for UTimelineSpanSoundCueRemoval::ConditionalGameplayEffects");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, OverflowEffects) == 1152, "Offset mismatch for UTimelineSpanSoundCueRemoval::OverflowEffects");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, bDenyOverflowApplication) == 1168, "Offset mismatch for UTimelineSpanSoundCueRemoval::bDenyOverflowApplication");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, bClearStackOnOverflow) == 1169, "Offset mismatch for UTimelineSpanSoundCueRemoval::bClearStackOnOverflow");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, PrematureExpirationEffectClasses) == 1176, "Offset mismatch for UTimelineSpanSoundCueRemoval::PrematureExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, RoutineExpirationEffectClasses) == 1192, "Offset mismatch for UTimelineSpanSoundCueRemoval::RoutineExpirationEffectClasses");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, bRequireModifierSuccessToTriggerCues) == 1208, "Offset mismatch for UTimelineSpanSoundCueRemoval::bRequireModifierSuccessToTriggerCues");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, bSuppressStackingCues) == 1209, "Offset mismatch for UTimelineSpanSoundCueRemoval::bSuppressStackingCues");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, GameplayCues) == 1216, "Offset mismatch for UTimelineSpanSoundCueRemoval::GameplayCues");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, UIData) == 1232, "Offset mismatch for UTimelineSpanSoundCueRemoval::UIData");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, InheritableGameplayEffectTags) == 1240, "Offset mismatch for UTimelineSpanSoundCueRemoval::InheritableGameplayEffectTags");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, InheritableOwnedTagsContainer) == 1336, "Offset mismatch for UTimelineSpanSoundCueRemoval::InheritableOwnedTagsContainer");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, InheritableBlockedAbilityTagsContainer) == 1432, "Offset mismatch for UTimelineSpanSoundCueRemoval::InheritableBlockedAbilityTagsContainer");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, OngoingTagRequirements) == 1528, "Offset mismatch for UTimelineSpanSoundCueRemoval::OngoingTagRequirements");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, ApplicationTagRequirements) == 1664, "Offset mismatch for UTimelineSpanSoundCueRemoval::ApplicationTagRequirements");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, RemovalTagRequirements) == 1800, "Offset mismatch for UTimelineSpanSoundCueRemoval::RemovalTagRequirements");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, RemoveGameplayEffectsWithTags) == 1936, "Offset mismatch for UTimelineSpanSoundCueRemoval::RemoveGameplayEffectsWithTags");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, GrantedApplicationImmunityTags) == 2032, "Offset mismatch for UTimelineSpanSoundCueRemoval::GrantedApplicationImmunityTags");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, GrantedApplicationImmunityQuery) == 2168, "Offset mismatch for UTimelineSpanSoundCueRemoval::GrantedApplicationImmunityQuery");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, RemoveGameplayEffectQuery) == 2584, "Offset mismatch for UTimelineSpanSoundCueRemoval::RemoveGameplayEffectQuery");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, StackingType) == 2993, "Offset mismatch for UTimelineSpanSoundCueRemoval::StackingType");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, StackLimitCount) == 2996, "Offset mismatch for UTimelineSpanSoundCueRemoval::StackLimitCount");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, StackDurationRefreshPolicy) == 3000, "Offset mismatch for UTimelineSpanSoundCueRemoval::StackDurationRefreshPolicy");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, StackPeriodResetPolicy) == 3001, "Offset mismatch for UTimelineSpanSoundCueRemoval::StackPeriodResetPolicy");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, StackExpirationPolicy) == 3002, "Offset mismatch for UTimelineSpanSoundCueRemoval::StackExpirationPolicy");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, bFactorInStackCount) == 3003, "Offset mismatch for UTimelineSpanSoundCueRemoval::bFactorInStackCount");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, GrantedAbilities) == 3008, "Offset mismatch for UTimelineSpanSoundCueRemoval::GrantedAbilities");
static_assert(offsetof(UTimelineSpanSoundCueRemoval, GEComponents) == 3120, "Offset mismatch for UTimelineSpanSoundCueRemoval::GEComponents");

// /Script/VerseFortniteAbilities.VerseReticleTraceSelectionTask
// Kind: Class; super: TargetingSelectionTask_Trace_FromCamera
class UVerseReticleTraceSelectionTask
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    float TraceRange; // 0x0178 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVerseReticleTraceSelectionTask, TraceRange) == 376, "Offset mismatch for UVerseReticleTraceSelectionTask::TraceRange");

// /Script/VerseFortniteAbilities.VerseTargetingFilterTask_Affiliation
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class UVerseTargetingFilterTask_Affiliation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Affiliations; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseTargetingFilterTask_Affiliation, Affiliations) == 40, "Offset mismatch for UVerseTargetingFilterTask_Affiliation::Affiliations");

// /Script/VerseFortniteAbilities.VerseTargetingFilterTask_Wedge
// Kind: Class; super: TargetingFilterTask_BasicFilterTemplate
class UVerseTargetingFilterTask_Wedge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float AngleRadians; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UVerseTargetingFilterTask_Wedge, AngleRadians) == 40, "Offset mismatch for UVerseTargetingFilterTask_Wedge::AngleRadians");

// /Script/VerseFortniteAbilities.VerseWedgeAOESelectionTask
// Kind: Class; super: TargetingSelectionTask_AOE
class UVerseWedgeAOESelectionTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ShapeType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CollisionChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t CollisionProfileName[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    TArray<void*> CollisionObjectTypes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultSourceOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultSourceRotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIgnoreInstigatorActor; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bIgnoreSourceActor (shared storage)
    // 0x0070 BoolProperty bTraceComplex (shared storage)
    // 0x0070 BoolProperty bUseRelativeOffset (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    std::uint8_t HalfExtentX[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentY[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfExtentZ[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Radius[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HalfHeight[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    FName ComponentTag; // 0x0140 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UVerseWedgeAOESelectionTask, ShapeType) == 40, "Offset mismatch for UVerseWedgeAOESelectionTask::ShapeType");
static_assert(offsetof(UVerseWedgeAOESelectionTask, CollisionChannel) == 41, "Offset mismatch for UVerseWedgeAOESelectionTask::CollisionChannel");
static_assert(offsetof(UVerseWedgeAOESelectionTask, CollisionProfileName) == 44, "Offset mismatch for UVerseWedgeAOESelectionTask::CollisionProfileName");
static_assert(offsetof(UVerseWedgeAOESelectionTask, CollisionObjectTypes) == 48, "Offset mismatch for UVerseWedgeAOESelectionTask::CollisionObjectTypes");
static_assert(offsetof(UVerseWedgeAOESelectionTask, DefaultSourceOffset) == 64, "Offset mismatch for UVerseWedgeAOESelectionTask::DefaultSourceOffset");
static_assert(offsetof(UVerseWedgeAOESelectionTask, DefaultSourceRotationOffset) == 88, "Offset mismatch for UVerseWedgeAOESelectionTask::DefaultSourceRotationOffset");
static_assert(offsetof(UVerseWedgeAOESelectionTask, bIgnoreInstigatorActor) == 112, "Offset mismatch for UVerseWedgeAOESelectionTask::bIgnoreInstigatorActor");
static_assert(offsetof(UVerseWedgeAOESelectionTask, HalfExtentX) == 120, "Offset mismatch for UVerseWedgeAOESelectionTask::HalfExtentX");
static_assert(offsetof(UVerseWedgeAOESelectionTask, HalfExtentY) == 160, "Offset mismatch for UVerseWedgeAOESelectionTask::HalfExtentY");
static_assert(offsetof(UVerseWedgeAOESelectionTask, HalfExtentZ) == 200, "Offset mismatch for UVerseWedgeAOESelectionTask::HalfExtentZ");
static_assert(offsetof(UVerseWedgeAOESelectionTask, Radius) == 240, "Offset mismatch for UVerseWedgeAOESelectionTask::Radius");
static_assert(offsetof(UVerseWedgeAOESelectionTask, HalfHeight) == 280, "Offset mismatch for UVerseWedgeAOESelectionTask::HalfHeight");
static_assert(offsetof(UVerseWedgeAOESelectionTask, ComponentTag) == 320, "Offset mismatch for UVerseWedgeAOESelectionTask::ComponentTag");
