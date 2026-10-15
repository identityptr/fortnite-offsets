/**
 * decamp dumper generated SDK
 * Package: /Script/HackSystemRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HackSystemRuntime.ActiveConsoleCue
// Kind: ScriptStruct; super: none
struct FActiveConsoleCue
{
public:
    std::uint8_t CueTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* CueSourceObject; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActiveConsoleCue, CueTag) == 0, "Offset mismatch for FActiveConsoleCue::CueTag");
static_assert(offsetof(FActiveConsoleCue, CueSourceObject) == 8, "Offset mismatch for FActiveConsoleCue::CueSourceObject");

// /Script/HackSystemRuntime.ActiveHackApplication
// Kind: ScriptStruct; super: none
struct FActiveHackApplication
{
public:
    TWeakObjectPtr<void> TargetASC; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t AbilitySetHandle[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActiveHackApplication, TargetASC) == 0, "Offset mismatch for FActiveHackApplication::TargetASC");
static_assert(offsetof(FActiveHackApplication, AbilitySetHandle) == 8, "Offset mismatch for FActiveHackApplication::AbilitySetHandle");

// /Script/HackSystemRuntime.ActiveHackEntry
// Kind: ScriptStruct; super: none
struct FActiveHackEntry
{
public:
    void* HackData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> SourceConsole; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InstigatorPlayerState; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InstigatorSquadId; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FActiveHackEntry, HackData) == 0, "Offset mismatch for FActiveHackEntry::HackData");
static_assert(offsetof(FActiveHackEntry, SourceConsole) == 8, "Offset mismatch for FActiveHackEntry::SourceConsole");
static_assert(offsetof(FActiveHackEntry, InstigatorPlayerState) == 16, "Offset mismatch for FActiveHackEntry::InstigatorPlayerState");
static_assert(offsetof(FActiveHackEntry, InstigatorSquadId) == 24, "Offset mismatch for FActiveHackEntry::InstigatorSquadId");

// /Script/HackSystemRuntime.DynamicStormRule
// Kind: ScriptStruct; super: none
struct FDynamicStormRule
{
public:
    std::uint8_t LivingPlayersAtOrBelow[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaitTime[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t ShrinkTime[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDynamicStormRule, LivingPlayersAtOrBelow) == 0, "Offset mismatch for FDynamicStormRule::LivingPlayersAtOrBelow");
static_assert(offsetof(FDynamicStormRule, WaitTime) == 40, "Offset mismatch for FDynamicStormRule::WaitTime");
static_assert(offsetof(FDynamicStormRule, ShrinkTime) == 88, "Offset mismatch for FDynamicStormRule::ShrinkTime");

// /Script/HackSystemRuntime.DynamicStormTimeAdjustment
// Kind: ScriptStruct; super: none
struct FDynamicStormTimeAdjustment
{
public:
    std::uint8_t Operation; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDynamicStormTimeAdjustment, Operation) == 0, "Offset mismatch for FDynamicStormTimeAdjustment::Operation");
static_assert(offsetof(FDynamicStormTimeAdjustment, Value) == 8, "Offset mismatch for FDynamicStormTimeAdjustment::Value");

// /Script/HackSystemRuntime.FortEvent_HackActivated
// Kind: ScriptStruct; super: none
struct FFortEvent_HackActivated
{
public:
    void* HackData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SourceConsole; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* InstigatorPlayerState; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ApplicationScope; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SquadId; // 0x0019 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortEvent_HackActivated, HackData) == 0, "Offset mismatch for FFortEvent_HackActivated::HackData");
static_assert(offsetof(FFortEvent_HackActivated, SourceConsole) == 8, "Offset mismatch for FFortEvent_HackActivated::SourceConsole");
static_assert(offsetof(FFortEvent_HackActivated, InstigatorPlayerState) == 16, "Offset mismatch for FFortEvent_HackActivated::InstigatorPlayerState");
static_assert(offsetof(FFortEvent_HackActivated, ApplicationScope) == 24, "Offset mismatch for FFortEvent_HackActivated::ApplicationScope");
static_assert(offsetof(FFortEvent_HackActivated, SquadId) == 25, "Offset mismatch for FFortEvent_HackActivated::SquadId");

// /Script/HackSystemRuntime.FortEvent_HackConsoleActivationScheduled
// Kind: ScriptStruct; super: none
struct FFortEvent_HackConsoleActivationScheduled
{
public:
    void* Console; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float ActivationServerTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortEvent_HackConsoleActivationScheduled, Console) == 0, "Offset mismatch for FFortEvent_HackConsoleActivationScheduled::Console");
static_assert(offsetof(FFortEvent_HackConsoleActivationScheduled, ActivationServerTime) == 8, "Offset mismatch for FFortEvent_HackConsoleActivationScheduled::ActivationServerTime");

// /Script/HackSystemRuntime.FortEvent_HackConsoleAvailabilityChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_HackConsoleAvailabilityChanged
{
public:
    void* Console; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsAvailable; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_HackConsoleAvailabilityChanged, Console) == 0, "Offset mismatch for FFortEvent_HackConsoleAvailabilityChanged::Console");
static_assert(offsetof(FFortEvent_HackConsoleAvailabilityChanged, bIsAvailable) == 8, "Offset mismatch for FFortEvent_HackConsoleAvailabilityChanged::bIsAvailable");

// /Script/HackSystemRuntime.FortEvent_HackConsoleInteracted
// Kind: ScriptStruct; super: none
struct FFortEvent_HackConsoleInteracted
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HackSystemRuntime.FortHackPersistenceParsedResult
// Kind: ScriptStruct; super: none
struct FFortHackPersistenceParsedResult
{
public:
    TMap<void*, void*> EntitlementCounts; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t ModuleMetadataResult[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortHackPersistenceParsedResult, EntitlementCounts) == 0, "Offset mismatch for FFortHackPersistenceParsedResult::EntitlementCounts");
static_assert(offsetof(FFortHackPersistenceParsedResult, ModuleMetadataResult) == 16, "Offset mismatch for FFortHackPersistenceParsedResult::ModuleMetadataResult");

// /Script/HackSystemRuntime.HackSquadMark
// Kind: ScriptStruct; super: none
struct FHackSquadMark
{
public:
    TWeakObjectPtr<void> MarkedPlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FHackSquadMark, MarkedPlayerState) == 0, "Offset mismatch for FHackSquadMark::MarkedPlayerState");

// /Script/HackSystemRuntime.HackWeightModifier
// Kind: ScriptStruct; super: none
struct FHackWeightModifier
{
public:
    std::uint8_t TargetTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Op; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHackWeightModifier, TargetTag) == 0, "Offset mismatch for FHackWeightModifier::TargetTag");
static_assert(offsetof(FHackWeightModifier, Op) == 4, "Offset mismatch for FHackWeightModifier::Op");
static_assert(offsetof(FHackWeightModifier, Value) == 8, "Offset mismatch for FHackWeightModifier::Value");

// /Script/HackSystemRuntime.HackWeightTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FHackWeightTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t HackTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float BaseWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0014
    std::uint8_t CategoryTags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    TArray<void*> ModifiersWhileActive; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FHackWeightTableRow, HackTag) == 8, "Offset mismatch for FHackWeightTableRow::HackTag");
static_assert(offsetof(FHackWeightTableRow, bEnabled) == 12, "Offset mismatch for FHackWeightTableRow::bEnabled");
static_assert(offsetof(FHackWeightTableRow, BaseWeight) == 16, "Offset mismatch for FHackWeightTableRow::BaseWeight");
static_assert(offsetof(FHackWeightTableRow, CategoryTags) == 24, "Offset mismatch for FHackWeightTableRow::CategoryTags");
static_assert(offsetof(FHackWeightTableRow, ModifiersWhileActive) == 56, "Offset mismatch for FHackWeightTableRow::ModifiersWhileActive");

// /Script/HackSystemRuntime.FortFallingCartridgeActor
// Kind: Class; super: BuildingSMActor
class UFortFallingCartridgeActor
{
public:
    std::uint8_t Pad_0000[0x6D8]; // 0x0000
    void* TextureData; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x06E0
    void* StaticMesh; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bForceReplicateSubObjects; // 0x0700 (Size: 0x1, Type: BoolProperty)
    // 0x0700 BoolProperty bNoCameraCollision (shared storage)
    // 0x0700 BoolProperty bNoPawnCollision (shared storage)
    // 0x0700 BoolProperty bNoPhysicsCollision (shared storage)
    // 0x0700 BoolProperty bUseSingleMeshCullDistance (shared storage)
    std::uint8_t ResourceType; // 0x0701 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurAnimSubObjectNum; // 0x0702 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurAnimSubObjectTargetNum; // 0x0703 (Size: 0x1, Type: ByteProperty)
    std::int32_t AltMeshIdx; // 0x0704 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowBuildingCheat; // 0x0708 (Size: 0x1, Type: BoolProperty)
    // 0x0708 BoolProperty bAttachmentPlacementBlockedBack (shared storage)
    // 0x0708 BoolProperty bAttachmentPlacementBlockedFront (shared storage)
    // 0x0708 BoolProperty bHiddenDueToTrapPlacement (shared storage)
    // 0x0708 BoolProperty bMirrored (shared storage)
    // 0x0708 BoolProperty bNoCollision (shared storage)
    // 0x0708 BoolProperty bNoVisibilityCollision (shared storage)
    // 0x0708 BoolProperty bSupportsRepairing (shared storage)
    std::uint8_t bCameraOnlyCollision; // 0x0709 (Size: 0x1, Type: BoolProperty)
    // 0x0709 BoolProperty bDoNotBlockInteract (shared storage)
    // 0x0709 BoolProperty bIsInitiallyBuilding (shared storage)
    // 0x0709 BoolProperty bNoProjectileCollision (shared storage)
    // 0x0709 BoolProperty bNoRangedWeaponCollision (shared storage)
    // 0x0709 BoolProperty bNoWeaponCollision (shared storage)
    // 0x0709 BoolProperty bUnderConstruction (shared storage)
    // 0x0709 BoolProperty bUnderRepair (shared storage)
    std::uint8_t bForciblyStructurallySupported; // 0x070A (Size: 0x1, Type: BoolProperty)
    // 0x070A BoolProperty bIncludeChildMeshComponentsInCollision (shared storage)
    // 0x070A BoolProperty bNeedsMIDsForCreative (shared storage)
    // 0x070A BoolProperty bPersistOnDetatchment (shared storage)
    // 0x070A BoolProperty bRegisterWithStructuralGrid (shared storage)
    // 0x070A BoolProperty bSupportedDirectly (shared storage)
    std::uint8_t bAllowWeakSpots; // 0x070B (Size: 0x1, Type: BoolProperty)
    // 0x070B BoolProperty bCurrentlyBeingEdited (shared storage)
    // 0x070B BoolProperty bNeedsWindMaterialParameters (shared storage)
    // 0x070B BoolProperty bPlayBounce (shared storage)
    // 0x070B BoolProperty bShowDamageCracks (shared storage)
    // 0x070B BoolProperty bUseComplexForWeakSpots (shared storage)
    std::uint8_t bAllowCustomMaterial; // 0x070C (Size: 0x1, Type: BoolProperty)
    // 0x070C BoolProperty bConsiderOverrideMaterialsOnAnimationCleanup (shared storage)
    // 0x070C BoolProperty bIncludeChildActorsForCullDistance (shared storage)
    // 0x070C BoolProperty bPropagateBounce (shared storage)
    // 0x070C BoolProperty bPropagatesBounceEffects (shared storage)
    std::uint8_t SavedDirectlySupportedStatus; // 0x070D (Size: 0x1, Type: EnumProperty)
    std::uint8_t BuildingAnimation; // 0x070E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSelectedForQuota; // 0x070F (Size: 0x1, Type: ByteProperty)
    std::uint8_t CachedBounceAdapter[0x10]; // 0x0710 (Size: 0x10, Type: StructProperty)
    float DestroyedTime; // 0x0720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0724
    void* BASEEffectMeshComponent; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* DisplacedMesh; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NavObstacles; // 0x0738 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0748
    std::uint8_t ReplicatedDrawScale3D[0xC]; // 0x0758 (Size: 0xC, Type: StructProperty)
    std::uint8_t DeathParticleSocketName[0x4]; // 0x0764 (Size: 0x4, Type: NameProperty)
    std::uint8_t EditorOnlyInstanceMaterialParameters[0x40]; // 0x0768 (Size: 0x40, Type: StructProperty)
    void* StaticMeshComponent; // 0x07A8 (Size: 0x8, Type: ObjectProperty)
    void* WeakPointComponent; // 0x07B0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnConstructionComplete; // 0x07B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshSetChanged; // 0x07C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MinimalReplicationProxy[0x4]; // 0x07D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t DestructionLootTierChosenQuotaInfo[0x8]; // 0x07DC (Size: 0x8, Type: StructProperty)
    std::uint8_t DestructionLootTierKey[0x4]; // 0x07E4 (Size: 0x4, Type: NameProperty)
    std::int32_t CachedMaxResourcesToSpawn; // 0x07E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x07EC
    void* BreakEffect; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    void* RVTHeightOverride; // 0x07F8 (Size: 0x8, Type: ObjectProperty)
    void* RVTColorOverride; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    void* DeathParticlesInst; // 0x0808 (Size: 0x8, Type: ObjectProperty)
    void* DeathSound; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    void* ConstructedEffect; // 0x0818 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RandomDayphaseFXStates; // 0x0820 (Size: 0x10, Type: ArrayProperty)
    void* ConstructionAudioComponent; // 0x0830 (Size: 0x8, Type: ObjectProperty)
    void* CachedDestructionInstigator; // 0x0838 (Size: 0x8, Type: ObjectProperty)
    float LastDamageAmount; // 0x0840 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastDamageHitImpulseDir[0x14]; // 0x0844 (Size: 0x14, Type: StructProperty)
    TArray<void*> DamageHistory; // 0x0858 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAnimatingStaticMeshes; // 0x0868 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x60]; // 0x0878
    FMulticastInlineDelegate OnRepairBuildingStarted; // 0x08D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRepairBuildingFinished; // 0x08E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t UndermineGroup; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::int32_t LogicalBuildingIdx; // 0x08FC (Size: 0x4, Type: IntProperty)
    TArray<void*> AnimatingMaterialMappings; // 0x0900 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DamagedButNotAnimatingMaterialMappings; // 0x0910 (Size: 0x10, Type: ArrayProperty)
    void* EditModeSupportClass; // 0x0920 (Size: 0x8, Type: ClassProperty)
    void* EditModeSupport; // 0x0928 (Size: 0x8, Type: ObjectProperty)
    float HealthToAutoBuild; // 0x0930 (Size: 0x4, Type: FloatProperty)
    float AccumulatedAutoBuildTime; // 0x0934 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildingReplacementType; // 0x0938 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ReplacementDestructionReason; // 0x0939 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurBuildingAnimType; // 0x093A (Size: 0x1, Type: EnumProperty)
    std::uint8_t DamageVisualsState; // 0x093B (Size: 0x1, Type: EnumProperty)
    float CurBuildProgress; // 0x093C (Size: 0x4, Type: FloatProperty)
    float CurBuildingAnimStartTime; // 0x0940 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildingAttachmentSlot; // 0x0944 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BuildingAttachmentType; // 0x0945 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BuildingPlacementType; // 0x0946 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LastStructuralCheck; // 0x0947 (Size: 0x1, Type: EnumProperty)
    TArray<void*> BlueprintMIDs; // 0x0948 (Size: 0x10, Type: ArrayProperty)
    void* BlueprintMeshComp; // 0x0958 (Size: 0x8, Type: ObjectProperty)
    void* EditingPlayer; // 0x0960 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x20]; // 0x0968
    std::uint8_t BuildingAttachmentPointOffset[0xC]; // 0x0988 (Size: 0xC, Type: StructProperty)
    float BuildingAttachmentRadius; // 0x0994 (Size: 0x4, Type: FloatProperty)
    void* ParentActorToAttachTo; // 0x0998 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BuildingAttachmentInfo[0x20]; // 0x09A0 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate OnTrapPlacementChanged; // 0x09C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReplacementDestruction; // 0x09D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x09E0
    std::uint8_t AttachmentPlacementBlockingActors[0x40]; // 0x09F8 (Size: 0x40, Type: StructProperty)
    TWeakObjectPtr<void> Foundation; // 0x0A38 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0008[0x18]; // 0x0A40
    void* DamagerOwner; // 0x0A58 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> RelevantBASE; // 0x0A60 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0009[0x8]; // 0x0A68
    std::uint8_t HLODDestructionTag[0x10]; // 0x0A70 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> LastRelevantBASE; // 0x0A80 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000A[0x18]; // 0x0A88
    std::uint8_t ProxyGameplayCueDamage[0x30]; // 0x0AA0 (Size: 0x30, Type: StructProperty)
    std::uint16_t ActorIndexInFoundation; // 0x0AD0 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(UFortFallingCartridgeActor, TextureData) == 1752, "Offset mismatch for UFortFallingCartridgeActor::TextureData");
static_assert(offsetof(UFortFallingCartridgeActor, StaticMesh) == 1784, "Offset mismatch for UFortFallingCartridgeActor::StaticMesh");
static_assert(offsetof(UFortFallingCartridgeActor, bForceReplicateSubObjects) == 1792, "Offset mismatch for UFortFallingCartridgeActor::bForceReplicateSubObjects");
static_assert(offsetof(UFortFallingCartridgeActor, ResourceType) == 1793, "Offset mismatch for UFortFallingCartridgeActor::ResourceType");
static_assert(offsetof(UFortFallingCartridgeActor, CurAnimSubObjectNum) == 1794, "Offset mismatch for UFortFallingCartridgeActor::CurAnimSubObjectNum");
static_assert(offsetof(UFortFallingCartridgeActor, CurAnimSubObjectTargetNum) == 1795, "Offset mismatch for UFortFallingCartridgeActor::CurAnimSubObjectTargetNum");
static_assert(offsetof(UFortFallingCartridgeActor, AltMeshIdx) == 1796, "Offset mismatch for UFortFallingCartridgeActor::AltMeshIdx");
static_assert(offsetof(UFortFallingCartridgeActor, bAllowBuildingCheat) == 1800, "Offset mismatch for UFortFallingCartridgeActor::bAllowBuildingCheat");
static_assert(offsetof(UFortFallingCartridgeActor, bCameraOnlyCollision) == 1801, "Offset mismatch for UFortFallingCartridgeActor::bCameraOnlyCollision");
static_assert(offsetof(UFortFallingCartridgeActor, bForciblyStructurallySupported) == 1802, "Offset mismatch for UFortFallingCartridgeActor::bForciblyStructurallySupported");
static_assert(offsetof(UFortFallingCartridgeActor, bAllowWeakSpots) == 1803, "Offset mismatch for UFortFallingCartridgeActor::bAllowWeakSpots");
static_assert(offsetof(UFortFallingCartridgeActor, bAllowCustomMaterial) == 1804, "Offset mismatch for UFortFallingCartridgeActor::bAllowCustomMaterial");
static_assert(offsetof(UFortFallingCartridgeActor, SavedDirectlySupportedStatus) == 1805, "Offset mismatch for UFortFallingCartridgeActor::SavedDirectlySupportedStatus");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingAnimation) == 1806, "Offset mismatch for UFortFallingCartridgeActor::BuildingAnimation");
static_assert(offsetof(UFortFallingCartridgeActor, bSelectedForQuota) == 1807, "Offset mismatch for UFortFallingCartridgeActor::bSelectedForQuota");
static_assert(offsetof(UFortFallingCartridgeActor, CachedBounceAdapter) == 1808, "Offset mismatch for UFortFallingCartridgeActor::CachedBounceAdapter");
static_assert(offsetof(UFortFallingCartridgeActor, DestroyedTime) == 1824, "Offset mismatch for UFortFallingCartridgeActor::DestroyedTime");
static_assert(offsetof(UFortFallingCartridgeActor, BASEEffectMeshComponent) == 1832, "Offset mismatch for UFortFallingCartridgeActor::BASEEffectMeshComponent");
static_assert(offsetof(UFortFallingCartridgeActor, DisplacedMesh) == 1840, "Offset mismatch for UFortFallingCartridgeActor::DisplacedMesh");
static_assert(offsetof(UFortFallingCartridgeActor, NavObstacles) == 1848, "Offset mismatch for UFortFallingCartridgeActor::NavObstacles");
static_assert(offsetof(UFortFallingCartridgeActor, ReplicatedDrawScale3D) == 1880, "Offset mismatch for UFortFallingCartridgeActor::ReplicatedDrawScale3D");
static_assert(offsetof(UFortFallingCartridgeActor, DeathParticleSocketName) == 1892, "Offset mismatch for UFortFallingCartridgeActor::DeathParticleSocketName");
static_assert(offsetof(UFortFallingCartridgeActor, EditorOnlyInstanceMaterialParameters) == 1896, "Offset mismatch for UFortFallingCartridgeActor::EditorOnlyInstanceMaterialParameters");
static_assert(offsetof(UFortFallingCartridgeActor, StaticMeshComponent) == 1960, "Offset mismatch for UFortFallingCartridgeActor::StaticMeshComponent");
static_assert(offsetof(UFortFallingCartridgeActor, WeakPointComponent) == 1968, "Offset mismatch for UFortFallingCartridgeActor::WeakPointComponent");
static_assert(offsetof(UFortFallingCartridgeActor, OnConstructionComplete) == 1976, "Offset mismatch for UFortFallingCartridgeActor::OnConstructionComplete");
static_assert(offsetof(UFortFallingCartridgeActor, OnMeshSetChanged) == 1992, "Offset mismatch for UFortFallingCartridgeActor::OnMeshSetChanged");
static_assert(offsetof(UFortFallingCartridgeActor, MinimalReplicationProxy) == 2008, "Offset mismatch for UFortFallingCartridgeActor::MinimalReplicationProxy");
static_assert(offsetof(UFortFallingCartridgeActor, DestructionLootTierChosenQuotaInfo) == 2012, "Offset mismatch for UFortFallingCartridgeActor::DestructionLootTierChosenQuotaInfo");
static_assert(offsetof(UFortFallingCartridgeActor, DestructionLootTierKey) == 2020, "Offset mismatch for UFortFallingCartridgeActor::DestructionLootTierKey");
static_assert(offsetof(UFortFallingCartridgeActor, CachedMaxResourcesToSpawn) == 2024, "Offset mismatch for UFortFallingCartridgeActor::CachedMaxResourcesToSpawn");
static_assert(offsetof(UFortFallingCartridgeActor, BreakEffect) == 2032, "Offset mismatch for UFortFallingCartridgeActor::BreakEffect");
static_assert(offsetof(UFortFallingCartridgeActor, RVTHeightOverride) == 2040, "Offset mismatch for UFortFallingCartridgeActor::RVTHeightOverride");
static_assert(offsetof(UFortFallingCartridgeActor, RVTColorOverride) == 2048, "Offset mismatch for UFortFallingCartridgeActor::RVTColorOverride");
static_assert(offsetof(UFortFallingCartridgeActor, DeathParticlesInst) == 2056, "Offset mismatch for UFortFallingCartridgeActor::DeathParticlesInst");
static_assert(offsetof(UFortFallingCartridgeActor, DeathSound) == 2064, "Offset mismatch for UFortFallingCartridgeActor::DeathSound");
static_assert(offsetof(UFortFallingCartridgeActor, ConstructedEffect) == 2072, "Offset mismatch for UFortFallingCartridgeActor::ConstructedEffect");
static_assert(offsetof(UFortFallingCartridgeActor, RandomDayphaseFXStates) == 2080, "Offset mismatch for UFortFallingCartridgeActor::RandomDayphaseFXStates");
static_assert(offsetof(UFortFallingCartridgeActor, ConstructionAudioComponent) == 2096, "Offset mismatch for UFortFallingCartridgeActor::ConstructionAudioComponent");
static_assert(offsetof(UFortFallingCartridgeActor, CachedDestructionInstigator) == 2104, "Offset mismatch for UFortFallingCartridgeActor::CachedDestructionInstigator");
static_assert(offsetof(UFortFallingCartridgeActor, LastDamageAmount) == 2112, "Offset mismatch for UFortFallingCartridgeActor::LastDamageAmount");
static_assert(offsetof(UFortFallingCartridgeActor, LastDamageHitImpulseDir) == 2116, "Offset mismatch for UFortFallingCartridgeActor::LastDamageHitImpulseDir");
static_assert(offsetof(UFortFallingCartridgeActor, DamageHistory) == 2136, "Offset mismatch for UFortFallingCartridgeActor::DamageHistory");
static_assert(offsetof(UFortFallingCartridgeActor, CachedAnimatingStaticMeshes) == 2152, "Offset mismatch for UFortFallingCartridgeActor::CachedAnimatingStaticMeshes");
static_assert(offsetof(UFortFallingCartridgeActor, OnRepairBuildingStarted) == 2264, "Offset mismatch for UFortFallingCartridgeActor::OnRepairBuildingStarted");
static_assert(offsetof(UFortFallingCartridgeActor, OnRepairBuildingFinished) == 2280, "Offset mismatch for UFortFallingCartridgeActor::OnRepairBuildingFinished");
static_assert(offsetof(UFortFallingCartridgeActor, UndermineGroup) == 2296, "Offset mismatch for UFortFallingCartridgeActor::UndermineGroup");
static_assert(offsetof(UFortFallingCartridgeActor, LogicalBuildingIdx) == 2300, "Offset mismatch for UFortFallingCartridgeActor::LogicalBuildingIdx");
static_assert(offsetof(UFortFallingCartridgeActor, AnimatingMaterialMappings) == 2304, "Offset mismatch for UFortFallingCartridgeActor::AnimatingMaterialMappings");
static_assert(offsetof(UFortFallingCartridgeActor, DamagedButNotAnimatingMaterialMappings) == 2320, "Offset mismatch for UFortFallingCartridgeActor::DamagedButNotAnimatingMaterialMappings");
static_assert(offsetof(UFortFallingCartridgeActor, EditModeSupportClass) == 2336, "Offset mismatch for UFortFallingCartridgeActor::EditModeSupportClass");
static_assert(offsetof(UFortFallingCartridgeActor, EditModeSupport) == 2344, "Offset mismatch for UFortFallingCartridgeActor::EditModeSupport");
static_assert(offsetof(UFortFallingCartridgeActor, HealthToAutoBuild) == 2352, "Offset mismatch for UFortFallingCartridgeActor::HealthToAutoBuild");
static_assert(offsetof(UFortFallingCartridgeActor, AccumulatedAutoBuildTime) == 2356, "Offset mismatch for UFortFallingCartridgeActor::AccumulatedAutoBuildTime");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingReplacementType) == 2360, "Offset mismatch for UFortFallingCartridgeActor::BuildingReplacementType");
static_assert(offsetof(UFortFallingCartridgeActor, ReplacementDestructionReason) == 2361, "Offset mismatch for UFortFallingCartridgeActor::ReplacementDestructionReason");
static_assert(offsetof(UFortFallingCartridgeActor, CurBuildingAnimType) == 2362, "Offset mismatch for UFortFallingCartridgeActor::CurBuildingAnimType");
static_assert(offsetof(UFortFallingCartridgeActor, DamageVisualsState) == 2363, "Offset mismatch for UFortFallingCartridgeActor::DamageVisualsState");
static_assert(offsetof(UFortFallingCartridgeActor, CurBuildProgress) == 2364, "Offset mismatch for UFortFallingCartridgeActor::CurBuildProgress");
static_assert(offsetof(UFortFallingCartridgeActor, CurBuildingAnimStartTime) == 2368, "Offset mismatch for UFortFallingCartridgeActor::CurBuildingAnimStartTime");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingAttachmentSlot) == 2372, "Offset mismatch for UFortFallingCartridgeActor::BuildingAttachmentSlot");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingAttachmentType) == 2373, "Offset mismatch for UFortFallingCartridgeActor::BuildingAttachmentType");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingPlacementType) == 2374, "Offset mismatch for UFortFallingCartridgeActor::BuildingPlacementType");
static_assert(offsetof(UFortFallingCartridgeActor, LastStructuralCheck) == 2375, "Offset mismatch for UFortFallingCartridgeActor::LastStructuralCheck");
static_assert(offsetof(UFortFallingCartridgeActor, BlueprintMIDs) == 2376, "Offset mismatch for UFortFallingCartridgeActor::BlueprintMIDs");
static_assert(offsetof(UFortFallingCartridgeActor, BlueprintMeshComp) == 2392, "Offset mismatch for UFortFallingCartridgeActor::BlueprintMeshComp");
static_assert(offsetof(UFortFallingCartridgeActor, EditingPlayer) == 2400, "Offset mismatch for UFortFallingCartridgeActor::EditingPlayer");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingAttachmentPointOffset) == 2440, "Offset mismatch for UFortFallingCartridgeActor::BuildingAttachmentPointOffset");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingAttachmentRadius) == 2452, "Offset mismatch for UFortFallingCartridgeActor::BuildingAttachmentRadius");
static_assert(offsetof(UFortFallingCartridgeActor, ParentActorToAttachTo) == 2456, "Offset mismatch for UFortFallingCartridgeActor::ParentActorToAttachTo");
static_assert(offsetof(UFortFallingCartridgeActor, BuildingAttachmentInfo) == 2464, "Offset mismatch for UFortFallingCartridgeActor::BuildingAttachmentInfo");
static_assert(offsetof(UFortFallingCartridgeActor, OnTrapPlacementChanged) == 2496, "Offset mismatch for UFortFallingCartridgeActor::OnTrapPlacementChanged");
static_assert(offsetof(UFortFallingCartridgeActor, OnReplacementDestruction) == 2512, "Offset mismatch for UFortFallingCartridgeActor::OnReplacementDestruction");
static_assert(offsetof(UFortFallingCartridgeActor, AttachmentPlacementBlockingActors) == 2552, "Offset mismatch for UFortFallingCartridgeActor::AttachmentPlacementBlockingActors");
static_assert(offsetof(UFortFallingCartridgeActor, Foundation) == 2616, "Offset mismatch for UFortFallingCartridgeActor::Foundation");
static_assert(offsetof(UFortFallingCartridgeActor, DamagerOwner) == 2648, "Offset mismatch for UFortFallingCartridgeActor::DamagerOwner");
static_assert(offsetof(UFortFallingCartridgeActor, RelevantBASE) == 2656, "Offset mismatch for UFortFallingCartridgeActor::RelevantBASE");
static_assert(offsetof(UFortFallingCartridgeActor, HLODDestructionTag) == 2672, "Offset mismatch for UFortFallingCartridgeActor::HLODDestructionTag");
static_assert(offsetof(UFortFallingCartridgeActor, LastRelevantBASE) == 2688, "Offset mismatch for UFortFallingCartridgeActor::LastRelevantBASE");
static_assert(offsetof(UFortFallingCartridgeActor, ProxyGameplayCueDamage) == 2720, "Offset mismatch for UFortFallingCartridgeActor::ProxyGameplayCueDamage");
static_assert(offsetof(UFortFallingCartridgeActor, ActorIndexInFoundation) == 2768, "Offset mismatch for UFortFallingCartridgeActor::ActorIndexInFoundation");

// /Script/HackSystemRuntime.FortGameStateComponent_HackSystem
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_HackSystem
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ConsoleActivationCountWeights[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConsoleActivationMinCount[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConsoleActivationMaxCount[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConsoleActivationCountBiasExponent[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConsoleActivationMinPhase[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConsoleActivationMaxPhase[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomizeConsoleActivationPhases[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CarryOverUnfilledConsoleActivations[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMarkMaximumRadius[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMarkMinimumRadius[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMarkMaxCenterOffset[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMarkRadiusShrinkPerUpdate[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMarkTimeBetweenUpdates[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SquadMarkCircleColor[0x10]; // 0x02C8 (Size: 0x10, Type: StructProperty)
    void* SquadMarkCircleMaterial; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HackingSquadSpecialActorTag[0x4]; // 0x02E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t HackingSquadMapLegendTag[0x4]; // 0x02E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivationScheduledGameplayCueTag[0x4]; // 0x02E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t AvailableGameplayCueTag[0x4]; // 0x02EC (Size: 0x4, Type: StructProperty)
    std::uint8_t HackAppliedGameplayCueTag[0x20]; // 0x02F0 (Size: 0x20, Type: StructProperty)
    TArray<void*> ActiveHackEntries; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x60]; // 0x0320
    TMap<void*, void*> ActiveConsoleCues; // 0x0380 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0390
    TArray<void*> CachedCandidateHackPool; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_HackSystem, ConsoleActivationCountWeights) == 192, "Offset mismatch for UFortGameStateComponent_HackSystem::ConsoleActivationCountWeights");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ConsoleActivationMinCount) == 232, "Offset mismatch for UFortGameStateComponent_HackSystem::ConsoleActivationMinCount");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ConsoleActivationMaxCount) == 272, "Offset mismatch for UFortGameStateComponent_HackSystem::ConsoleActivationMaxCount");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ConsoleActivationCountBiasExponent) == 312, "Offset mismatch for UFortGameStateComponent_HackSystem::ConsoleActivationCountBiasExponent");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ConsoleActivationMinPhase) == 352, "Offset mismatch for UFortGameStateComponent_HackSystem::ConsoleActivationMinPhase");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ConsoleActivationMaxPhase) == 392, "Offset mismatch for UFortGameStateComponent_HackSystem::ConsoleActivationMaxPhase");
static_assert(offsetof(UFortGameStateComponent_HackSystem, RandomizeConsoleActivationPhases) == 432, "Offset mismatch for UFortGameStateComponent_HackSystem::RandomizeConsoleActivationPhases");
static_assert(offsetof(UFortGameStateComponent_HackSystem, CarryOverUnfilledConsoleActivations) == 472, "Offset mismatch for UFortGameStateComponent_HackSystem::CarryOverUnfilledConsoleActivations");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkMaximumRadius) == 512, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkMaximumRadius");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkMinimumRadius) == 552, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkMinimumRadius");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkMaxCenterOffset) == 592, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkMaxCenterOffset");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkRadiusShrinkPerUpdate) == 632, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkRadiusShrinkPerUpdate");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkTimeBetweenUpdates) == 672, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkTimeBetweenUpdates");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkCircleColor) == 712, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkCircleColor");
static_assert(offsetof(UFortGameStateComponent_HackSystem, SquadMarkCircleMaterial) == 728, "Offset mismatch for UFortGameStateComponent_HackSystem::SquadMarkCircleMaterial");
static_assert(offsetof(UFortGameStateComponent_HackSystem, HackingSquadSpecialActorTag) == 736, "Offset mismatch for UFortGameStateComponent_HackSystem::HackingSquadSpecialActorTag");
static_assert(offsetof(UFortGameStateComponent_HackSystem, HackingSquadMapLegendTag) == 740, "Offset mismatch for UFortGameStateComponent_HackSystem::HackingSquadMapLegendTag");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ActivationScheduledGameplayCueTag) == 744, "Offset mismatch for UFortGameStateComponent_HackSystem::ActivationScheduledGameplayCueTag");
static_assert(offsetof(UFortGameStateComponent_HackSystem, AvailableGameplayCueTag) == 748, "Offset mismatch for UFortGameStateComponent_HackSystem::AvailableGameplayCueTag");
static_assert(offsetof(UFortGameStateComponent_HackSystem, HackAppliedGameplayCueTag) == 752, "Offset mismatch for UFortGameStateComponent_HackSystem::HackAppliedGameplayCueTag");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ActiveHackEntries) == 784, "Offset mismatch for UFortGameStateComponent_HackSystem::ActiveHackEntries");
static_assert(offsetof(UFortGameStateComponent_HackSystem, ActiveConsoleCues) == 896, "Offset mismatch for UFortGameStateComponent_HackSystem::ActiveConsoleCues");
static_assert(offsetof(UFortGameStateComponent_HackSystem, CachedCandidateHackPool) == 944, "Offset mismatch for UFortGameStateComponent_HackSystem::CachedCandidateHackPool");

// /Script/HackSystemRuntime.FortGameStateComponent_HackSystemAnalytics
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_HackSystemAnalytics
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

static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, PrimaryComponentTick) == 56, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::PrimaryComponentTick");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, ComponentTags) == 104, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::ComponentTags");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, AssetUserData) == 120, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::AssetUserData");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, UCSSerializationIndex) == 144, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::UCSSerializationIndex");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, bNetAddressable) == 152, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::bNetAddressable");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, bAutoActivate) == 154, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::bAutoActivate");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, bIsEditorOnly) == 155, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::bIsEditorOnly");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, CreationMethod) == 185, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::CreationMethod");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, OnComponentActivated) == 186, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::OnComponentActivated");
static_assert(offsetof(UFortGameStateComponent_HackSystemAnalytics, OnComponentDeactivated) == 187, "Offset mismatch for UFortGameStateComponent_HackSystemAnalytics::OnComponentDeactivated");

// /Script/HackSystemRuntime.FortGameStateComponent_HackSystemPersistence
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_HackSystemPersistence
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

static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, PrimaryComponentTick) == 56, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::PrimaryComponentTick");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, ComponentTags) == 104, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::ComponentTags");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, AssetUserData) == 120, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::AssetUserData");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, UCSSerializationIndex) == 144, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::UCSSerializationIndex");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, bNetAddressable) == 152, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::bNetAddressable");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, bAutoActivate) == 154, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::bAutoActivate");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, bIsEditorOnly) == 155, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::bIsEditorOnly");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, CreationMethod) == 185, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::CreationMethod");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, OnComponentActivated) == 186, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::OnComponentActivated");
static_assert(offsetof(UFortGameStateComponent_HackSystemPersistence, OnComponentDeactivated) == 187, "Offset mismatch for UFortGameStateComponent_HackSystemPersistence::OnComponentDeactivated");

// /Script/HackSystemRuntime.FortHackBehavior
// Kind: Class; super: Object
class UFortHackBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HackSystemRuntime.FortHackBehavior_DynamicStorm
// Kind: Class; super: FortHackBehavior
class UFortHackBehavior_DynamicStorm
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MinPhasesBetweenAdjustments[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    TArray<void*> DynamicStormRules; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortHackBehavior_DynamicStorm, MinPhasesBetweenAdjustments) == 48, "Offset mismatch for UFortHackBehavior_DynamicStorm::MinPhasesBetweenAdjustments");
static_assert(offsetof(UFortHackBehavior_DynamicStorm, DynamicStormRules) == 88, "Offset mismatch for UFortHackBehavior_DynamicStorm::DynamicStormRules");

// /Script/HackSystemRuntime.FortHackCartridgeItemDefinition
// Kind: Class; super: FortWorldItemDefinition
class UFortHackCartridgeItemDefinition
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TSoftObjectPtr<void> HackData; // 0x00A8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortHackCartridgeItemDefinition, HackData) == 168, "Offset mismatch for UFortHackCartridgeItemDefinition::HackData");

// /Script/HackSystemRuntime.FortHackCartridgeSlotActor
// Kind: Class; super: BuildingSMActor
class UFortHackCartridgeSlotActor
{
public:
    std::uint8_t Pad_0000[0x6D8]; // 0x0000
    void* TextureData; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x06E0
    void* StaticMesh; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bForceReplicateSubObjects; // 0x0700 (Size: 0x1, Type: BoolProperty)
    // 0x0700 BoolProperty bNoCameraCollision (shared storage)
    // 0x0700 BoolProperty bNoPawnCollision (shared storage)
    // 0x0700 BoolProperty bNoPhysicsCollision (shared storage)
    // 0x0700 BoolProperty bUseSingleMeshCullDistance (shared storage)
    std::uint8_t ResourceType; // 0x0701 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurAnimSubObjectNum; // 0x0702 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurAnimSubObjectTargetNum; // 0x0703 (Size: 0x1, Type: ByteProperty)
    std::int32_t AltMeshIdx; // 0x0704 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowBuildingCheat; // 0x0708 (Size: 0x1, Type: BoolProperty)
    // 0x0708 BoolProperty bAttachmentPlacementBlockedBack (shared storage)
    // 0x0708 BoolProperty bAttachmentPlacementBlockedFront (shared storage)
    // 0x0708 BoolProperty bHiddenDueToTrapPlacement (shared storage)
    // 0x0708 BoolProperty bMirrored (shared storage)
    // 0x0708 BoolProperty bNoCollision (shared storage)
    // 0x0708 BoolProperty bNoVisibilityCollision (shared storage)
    // 0x0708 BoolProperty bSupportsRepairing (shared storage)
    std::uint8_t bCameraOnlyCollision; // 0x0709 (Size: 0x1, Type: BoolProperty)
    // 0x0709 BoolProperty bDoNotBlockInteract (shared storage)
    // 0x0709 BoolProperty bIsInitiallyBuilding (shared storage)
    // 0x0709 BoolProperty bNoProjectileCollision (shared storage)
    // 0x0709 BoolProperty bNoRangedWeaponCollision (shared storage)
    // 0x0709 BoolProperty bNoWeaponCollision (shared storage)
    // 0x0709 BoolProperty bUnderConstruction (shared storage)
    // 0x0709 BoolProperty bUnderRepair (shared storage)
    std::uint8_t bForciblyStructurallySupported; // 0x070A (Size: 0x1, Type: BoolProperty)
    // 0x070A BoolProperty bIncludeChildMeshComponentsInCollision (shared storage)
    // 0x070A BoolProperty bNeedsMIDsForCreative (shared storage)
    // 0x070A BoolProperty bPersistOnDetatchment (shared storage)
    // 0x070A BoolProperty bRegisterWithStructuralGrid (shared storage)
    // 0x070A BoolProperty bSupportedDirectly (shared storage)
    std::uint8_t bAllowWeakSpots; // 0x070B (Size: 0x1, Type: BoolProperty)
    // 0x070B BoolProperty bCurrentlyBeingEdited (shared storage)
    // 0x070B BoolProperty bNeedsWindMaterialParameters (shared storage)
    // 0x070B BoolProperty bPlayBounce (shared storage)
    // 0x070B BoolProperty bShowDamageCracks (shared storage)
    // 0x070B BoolProperty bUseComplexForWeakSpots (shared storage)
    std::uint8_t bAllowCustomMaterial; // 0x070C (Size: 0x1, Type: BoolProperty)
    // 0x070C BoolProperty bConsiderOverrideMaterialsOnAnimationCleanup (shared storage)
    // 0x070C BoolProperty bIncludeChildActorsForCullDistance (shared storage)
    // 0x070C BoolProperty bPropagateBounce (shared storage)
    // 0x070C BoolProperty bPropagatesBounceEffects (shared storage)
    std::uint8_t SavedDirectlySupportedStatus; // 0x070D (Size: 0x1, Type: EnumProperty)
    std::uint8_t BuildingAnimation; // 0x070E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSelectedForQuota; // 0x070F (Size: 0x1, Type: ByteProperty)
    std::uint8_t CachedBounceAdapter[0x10]; // 0x0710 (Size: 0x10, Type: StructProperty)
    float DestroyedTime; // 0x0720 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0724
    void* BASEEffectMeshComponent; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* DisplacedMesh; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NavObstacles; // 0x0738 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0748
    std::uint8_t ReplicatedDrawScale3D[0xC]; // 0x0758 (Size: 0xC, Type: StructProperty)
    std::uint8_t DeathParticleSocketName[0x4]; // 0x0764 (Size: 0x4, Type: NameProperty)
    std::uint8_t EditorOnlyInstanceMaterialParameters[0x40]; // 0x0768 (Size: 0x40, Type: StructProperty)
    void* StaticMeshComponent; // 0x07A8 (Size: 0x8, Type: ObjectProperty)
    void* WeakPointComponent; // 0x07B0 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnConstructionComplete; // 0x07B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshSetChanged; // 0x07C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MinimalReplicationProxy[0x4]; // 0x07D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t DestructionLootTierChosenQuotaInfo[0x8]; // 0x07DC (Size: 0x8, Type: StructProperty)
    std::uint8_t DestructionLootTierKey[0x4]; // 0x07E4 (Size: 0x4, Type: NameProperty)
    std::int32_t CachedMaxResourcesToSpawn; // 0x07E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x07EC
    void* BreakEffect; // 0x07F0 (Size: 0x8, Type: ObjectProperty)
    void* RVTHeightOverride; // 0x07F8 (Size: 0x8, Type: ObjectProperty)
    void* RVTColorOverride; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    void* DeathParticlesInst; // 0x0808 (Size: 0x8, Type: ObjectProperty)
    void* DeathSound; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    void* ConstructedEffect; // 0x0818 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RandomDayphaseFXStates; // 0x0820 (Size: 0x10, Type: ArrayProperty)
    void* ConstructionAudioComponent; // 0x0830 (Size: 0x8, Type: ObjectProperty)
    void* CachedDestructionInstigator; // 0x0838 (Size: 0x8, Type: ObjectProperty)
    float LastDamageAmount; // 0x0840 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastDamageHitImpulseDir[0x14]; // 0x0844 (Size: 0x14, Type: StructProperty)
    TArray<void*> DamageHistory; // 0x0858 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedAnimatingStaticMeshes; // 0x0868 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x60]; // 0x0878
    FMulticastInlineDelegate OnRepairBuildingStarted; // 0x08D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRepairBuildingFinished; // 0x08E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t UndermineGroup; // 0x08F8 (Size: 0x4, Type: IntProperty)
    std::int32_t LogicalBuildingIdx; // 0x08FC (Size: 0x4, Type: IntProperty)
    TArray<void*> AnimatingMaterialMappings; // 0x0900 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DamagedButNotAnimatingMaterialMappings; // 0x0910 (Size: 0x10, Type: ArrayProperty)
    void* EditModeSupportClass; // 0x0920 (Size: 0x8, Type: ClassProperty)
    void* EditModeSupport; // 0x0928 (Size: 0x8, Type: ObjectProperty)
    float HealthToAutoBuild; // 0x0930 (Size: 0x4, Type: FloatProperty)
    float AccumulatedAutoBuildTime; // 0x0934 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildingReplacementType; // 0x0938 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ReplacementDestructionReason; // 0x0939 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CurBuildingAnimType; // 0x093A (Size: 0x1, Type: EnumProperty)
    std::uint8_t DamageVisualsState; // 0x093B (Size: 0x1, Type: EnumProperty)
    float CurBuildProgress; // 0x093C (Size: 0x4, Type: FloatProperty)
    float CurBuildingAnimStartTime; // 0x0940 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildingAttachmentSlot; // 0x0944 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BuildingAttachmentType; // 0x0945 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BuildingPlacementType; // 0x0946 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LastStructuralCheck; // 0x0947 (Size: 0x1, Type: EnumProperty)
    TArray<void*> BlueprintMIDs; // 0x0948 (Size: 0x10, Type: ArrayProperty)
    void* BlueprintMeshComp; // 0x0958 (Size: 0x8, Type: ObjectProperty)
    void* EditingPlayer; // 0x0960 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x20]; // 0x0968
    std::uint8_t BuildingAttachmentPointOffset[0xC]; // 0x0988 (Size: 0xC, Type: StructProperty)
    float BuildingAttachmentRadius; // 0x0994 (Size: 0x4, Type: FloatProperty)
    void* ParentActorToAttachTo; // 0x0998 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BuildingAttachmentInfo[0x20]; // 0x09A0 (Size: 0x20, Type: StructProperty)
    FMulticastInlineDelegate OnTrapPlacementChanged; // 0x09C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReplacementDestruction; // 0x09D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x09E0
    std::uint8_t AttachmentPlacementBlockingActors[0x40]; // 0x09F8 (Size: 0x40, Type: StructProperty)
    TWeakObjectPtr<void> Foundation; // 0x0A38 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0008[0x18]; // 0x0A40
    void* DamagerOwner; // 0x0A58 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> RelevantBASE; // 0x0A60 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0009[0x8]; // 0x0A68
    std::uint8_t HLODDestructionTag[0x10]; // 0x0A70 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> LastRelevantBASE; // 0x0A80 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_000A[0x18]; // 0x0A88
    std::uint8_t ProxyGameplayCueDamage[0x30]; // 0x0AA0 (Size: 0x30, Type: StructProperty)
    std::uint16_t ActorIndexInFoundation; // 0x0AD0 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(UFortHackCartridgeSlotActor, TextureData) == 1752, "Offset mismatch for UFortHackCartridgeSlotActor::TextureData");
static_assert(offsetof(UFortHackCartridgeSlotActor, StaticMesh) == 1784, "Offset mismatch for UFortHackCartridgeSlotActor::StaticMesh");
static_assert(offsetof(UFortHackCartridgeSlotActor, bForceReplicateSubObjects) == 1792, "Offset mismatch for UFortHackCartridgeSlotActor::bForceReplicateSubObjects");
static_assert(offsetof(UFortHackCartridgeSlotActor, ResourceType) == 1793, "Offset mismatch for UFortHackCartridgeSlotActor::ResourceType");
static_assert(offsetof(UFortHackCartridgeSlotActor, CurAnimSubObjectNum) == 1794, "Offset mismatch for UFortHackCartridgeSlotActor::CurAnimSubObjectNum");
static_assert(offsetof(UFortHackCartridgeSlotActor, CurAnimSubObjectTargetNum) == 1795, "Offset mismatch for UFortHackCartridgeSlotActor::CurAnimSubObjectTargetNum");
static_assert(offsetof(UFortHackCartridgeSlotActor, AltMeshIdx) == 1796, "Offset mismatch for UFortHackCartridgeSlotActor::AltMeshIdx");
static_assert(offsetof(UFortHackCartridgeSlotActor, bAllowBuildingCheat) == 1800, "Offset mismatch for UFortHackCartridgeSlotActor::bAllowBuildingCheat");
static_assert(offsetof(UFortHackCartridgeSlotActor, bCameraOnlyCollision) == 1801, "Offset mismatch for UFortHackCartridgeSlotActor::bCameraOnlyCollision");
static_assert(offsetof(UFortHackCartridgeSlotActor, bForciblyStructurallySupported) == 1802, "Offset mismatch for UFortHackCartridgeSlotActor::bForciblyStructurallySupported");
static_assert(offsetof(UFortHackCartridgeSlotActor, bAllowWeakSpots) == 1803, "Offset mismatch for UFortHackCartridgeSlotActor::bAllowWeakSpots");
static_assert(offsetof(UFortHackCartridgeSlotActor, bAllowCustomMaterial) == 1804, "Offset mismatch for UFortHackCartridgeSlotActor::bAllowCustomMaterial");
static_assert(offsetof(UFortHackCartridgeSlotActor, SavedDirectlySupportedStatus) == 1805, "Offset mismatch for UFortHackCartridgeSlotActor::SavedDirectlySupportedStatus");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingAnimation) == 1806, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingAnimation");
static_assert(offsetof(UFortHackCartridgeSlotActor, bSelectedForQuota) == 1807, "Offset mismatch for UFortHackCartridgeSlotActor::bSelectedForQuota");
static_assert(offsetof(UFortHackCartridgeSlotActor, CachedBounceAdapter) == 1808, "Offset mismatch for UFortHackCartridgeSlotActor::CachedBounceAdapter");
static_assert(offsetof(UFortHackCartridgeSlotActor, DestroyedTime) == 1824, "Offset mismatch for UFortHackCartridgeSlotActor::DestroyedTime");
static_assert(offsetof(UFortHackCartridgeSlotActor, BASEEffectMeshComponent) == 1832, "Offset mismatch for UFortHackCartridgeSlotActor::BASEEffectMeshComponent");
static_assert(offsetof(UFortHackCartridgeSlotActor, DisplacedMesh) == 1840, "Offset mismatch for UFortHackCartridgeSlotActor::DisplacedMesh");
static_assert(offsetof(UFortHackCartridgeSlotActor, NavObstacles) == 1848, "Offset mismatch for UFortHackCartridgeSlotActor::NavObstacles");
static_assert(offsetof(UFortHackCartridgeSlotActor, ReplicatedDrawScale3D) == 1880, "Offset mismatch for UFortHackCartridgeSlotActor::ReplicatedDrawScale3D");
static_assert(offsetof(UFortHackCartridgeSlotActor, DeathParticleSocketName) == 1892, "Offset mismatch for UFortHackCartridgeSlotActor::DeathParticleSocketName");
static_assert(offsetof(UFortHackCartridgeSlotActor, EditorOnlyInstanceMaterialParameters) == 1896, "Offset mismatch for UFortHackCartridgeSlotActor::EditorOnlyInstanceMaterialParameters");
static_assert(offsetof(UFortHackCartridgeSlotActor, StaticMeshComponent) == 1960, "Offset mismatch for UFortHackCartridgeSlotActor::StaticMeshComponent");
static_assert(offsetof(UFortHackCartridgeSlotActor, WeakPointComponent) == 1968, "Offset mismatch for UFortHackCartridgeSlotActor::WeakPointComponent");
static_assert(offsetof(UFortHackCartridgeSlotActor, OnConstructionComplete) == 1976, "Offset mismatch for UFortHackCartridgeSlotActor::OnConstructionComplete");
static_assert(offsetof(UFortHackCartridgeSlotActor, OnMeshSetChanged) == 1992, "Offset mismatch for UFortHackCartridgeSlotActor::OnMeshSetChanged");
static_assert(offsetof(UFortHackCartridgeSlotActor, MinimalReplicationProxy) == 2008, "Offset mismatch for UFortHackCartridgeSlotActor::MinimalReplicationProxy");
static_assert(offsetof(UFortHackCartridgeSlotActor, DestructionLootTierChosenQuotaInfo) == 2012, "Offset mismatch for UFortHackCartridgeSlotActor::DestructionLootTierChosenQuotaInfo");
static_assert(offsetof(UFortHackCartridgeSlotActor, DestructionLootTierKey) == 2020, "Offset mismatch for UFortHackCartridgeSlotActor::DestructionLootTierKey");
static_assert(offsetof(UFortHackCartridgeSlotActor, CachedMaxResourcesToSpawn) == 2024, "Offset mismatch for UFortHackCartridgeSlotActor::CachedMaxResourcesToSpawn");
static_assert(offsetof(UFortHackCartridgeSlotActor, BreakEffect) == 2032, "Offset mismatch for UFortHackCartridgeSlotActor::BreakEffect");
static_assert(offsetof(UFortHackCartridgeSlotActor, RVTHeightOverride) == 2040, "Offset mismatch for UFortHackCartridgeSlotActor::RVTHeightOverride");
static_assert(offsetof(UFortHackCartridgeSlotActor, RVTColorOverride) == 2048, "Offset mismatch for UFortHackCartridgeSlotActor::RVTColorOverride");
static_assert(offsetof(UFortHackCartridgeSlotActor, DeathParticlesInst) == 2056, "Offset mismatch for UFortHackCartridgeSlotActor::DeathParticlesInst");
static_assert(offsetof(UFortHackCartridgeSlotActor, DeathSound) == 2064, "Offset mismatch for UFortHackCartridgeSlotActor::DeathSound");
static_assert(offsetof(UFortHackCartridgeSlotActor, ConstructedEffect) == 2072, "Offset mismatch for UFortHackCartridgeSlotActor::ConstructedEffect");
static_assert(offsetof(UFortHackCartridgeSlotActor, RandomDayphaseFXStates) == 2080, "Offset mismatch for UFortHackCartridgeSlotActor::RandomDayphaseFXStates");
static_assert(offsetof(UFortHackCartridgeSlotActor, ConstructionAudioComponent) == 2096, "Offset mismatch for UFortHackCartridgeSlotActor::ConstructionAudioComponent");
static_assert(offsetof(UFortHackCartridgeSlotActor, CachedDestructionInstigator) == 2104, "Offset mismatch for UFortHackCartridgeSlotActor::CachedDestructionInstigator");
static_assert(offsetof(UFortHackCartridgeSlotActor, LastDamageAmount) == 2112, "Offset mismatch for UFortHackCartridgeSlotActor::LastDamageAmount");
static_assert(offsetof(UFortHackCartridgeSlotActor, LastDamageHitImpulseDir) == 2116, "Offset mismatch for UFortHackCartridgeSlotActor::LastDamageHitImpulseDir");
static_assert(offsetof(UFortHackCartridgeSlotActor, DamageHistory) == 2136, "Offset mismatch for UFortHackCartridgeSlotActor::DamageHistory");
static_assert(offsetof(UFortHackCartridgeSlotActor, CachedAnimatingStaticMeshes) == 2152, "Offset mismatch for UFortHackCartridgeSlotActor::CachedAnimatingStaticMeshes");
static_assert(offsetof(UFortHackCartridgeSlotActor, OnRepairBuildingStarted) == 2264, "Offset mismatch for UFortHackCartridgeSlotActor::OnRepairBuildingStarted");
static_assert(offsetof(UFortHackCartridgeSlotActor, OnRepairBuildingFinished) == 2280, "Offset mismatch for UFortHackCartridgeSlotActor::OnRepairBuildingFinished");
static_assert(offsetof(UFortHackCartridgeSlotActor, UndermineGroup) == 2296, "Offset mismatch for UFortHackCartridgeSlotActor::UndermineGroup");
static_assert(offsetof(UFortHackCartridgeSlotActor, LogicalBuildingIdx) == 2300, "Offset mismatch for UFortHackCartridgeSlotActor::LogicalBuildingIdx");
static_assert(offsetof(UFortHackCartridgeSlotActor, AnimatingMaterialMappings) == 2304, "Offset mismatch for UFortHackCartridgeSlotActor::AnimatingMaterialMappings");
static_assert(offsetof(UFortHackCartridgeSlotActor, DamagedButNotAnimatingMaterialMappings) == 2320, "Offset mismatch for UFortHackCartridgeSlotActor::DamagedButNotAnimatingMaterialMappings");
static_assert(offsetof(UFortHackCartridgeSlotActor, EditModeSupportClass) == 2336, "Offset mismatch for UFortHackCartridgeSlotActor::EditModeSupportClass");
static_assert(offsetof(UFortHackCartridgeSlotActor, EditModeSupport) == 2344, "Offset mismatch for UFortHackCartridgeSlotActor::EditModeSupport");
static_assert(offsetof(UFortHackCartridgeSlotActor, HealthToAutoBuild) == 2352, "Offset mismatch for UFortHackCartridgeSlotActor::HealthToAutoBuild");
static_assert(offsetof(UFortHackCartridgeSlotActor, AccumulatedAutoBuildTime) == 2356, "Offset mismatch for UFortHackCartridgeSlotActor::AccumulatedAutoBuildTime");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingReplacementType) == 2360, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingReplacementType");
static_assert(offsetof(UFortHackCartridgeSlotActor, ReplacementDestructionReason) == 2361, "Offset mismatch for UFortHackCartridgeSlotActor::ReplacementDestructionReason");
static_assert(offsetof(UFortHackCartridgeSlotActor, CurBuildingAnimType) == 2362, "Offset mismatch for UFortHackCartridgeSlotActor::CurBuildingAnimType");
static_assert(offsetof(UFortHackCartridgeSlotActor, DamageVisualsState) == 2363, "Offset mismatch for UFortHackCartridgeSlotActor::DamageVisualsState");
static_assert(offsetof(UFortHackCartridgeSlotActor, CurBuildProgress) == 2364, "Offset mismatch for UFortHackCartridgeSlotActor::CurBuildProgress");
static_assert(offsetof(UFortHackCartridgeSlotActor, CurBuildingAnimStartTime) == 2368, "Offset mismatch for UFortHackCartridgeSlotActor::CurBuildingAnimStartTime");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingAttachmentSlot) == 2372, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingAttachmentSlot");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingAttachmentType) == 2373, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingAttachmentType");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingPlacementType) == 2374, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingPlacementType");
static_assert(offsetof(UFortHackCartridgeSlotActor, LastStructuralCheck) == 2375, "Offset mismatch for UFortHackCartridgeSlotActor::LastStructuralCheck");
static_assert(offsetof(UFortHackCartridgeSlotActor, BlueprintMIDs) == 2376, "Offset mismatch for UFortHackCartridgeSlotActor::BlueprintMIDs");
static_assert(offsetof(UFortHackCartridgeSlotActor, BlueprintMeshComp) == 2392, "Offset mismatch for UFortHackCartridgeSlotActor::BlueprintMeshComp");
static_assert(offsetof(UFortHackCartridgeSlotActor, EditingPlayer) == 2400, "Offset mismatch for UFortHackCartridgeSlotActor::EditingPlayer");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingAttachmentPointOffset) == 2440, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingAttachmentPointOffset");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingAttachmentRadius) == 2452, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingAttachmentRadius");
static_assert(offsetof(UFortHackCartridgeSlotActor, ParentActorToAttachTo) == 2456, "Offset mismatch for UFortHackCartridgeSlotActor::ParentActorToAttachTo");
static_assert(offsetof(UFortHackCartridgeSlotActor, BuildingAttachmentInfo) == 2464, "Offset mismatch for UFortHackCartridgeSlotActor::BuildingAttachmentInfo");
static_assert(offsetof(UFortHackCartridgeSlotActor, OnTrapPlacementChanged) == 2496, "Offset mismatch for UFortHackCartridgeSlotActor::OnTrapPlacementChanged");
static_assert(offsetof(UFortHackCartridgeSlotActor, OnReplacementDestruction) == 2512, "Offset mismatch for UFortHackCartridgeSlotActor::OnReplacementDestruction");
static_assert(offsetof(UFortHackCartridgeSlotActor, AttachmentPlacementBlockingActors) == 2552, "Offset mismatch for UFortHackCartridgeSlotActor::AttachmentPlacementBlockingActors");
static_assert(offsetof(UFortHackCartridgeSlotActor, Foundation) == 2616, "Offset mismatch for UFortHackCartridgeSlotActor::Foundation");
static_assert(offsetof(UFortHackCartridgeSlotActor, DamagerOwner) == 2648, "Offset mismatch for UFortHackCartridgeSlotActor::DamagerOwner");
static_assert(offsetof(UFortHackCartridgeSlotActor, RelevantBASE) == 2656, "Offset mismatch for UFortHackCartridgeSlotActor::RelevantBASE");
static_assert(offsetof(UFortHackCartridgeSlotActor, HLODDestructionTag) == 2672, "Offset mismatch for UFortHackCartridgeSlotActor::HLODDestructionTag");
static_assert(offsetof(UFortHackCartridgeSlotActor, LastRelevantBASE) == 2688, "Offset mismatch for UFortHackCartridgeSlotActor::LastRelevantBASE");
static_assert(offsetof(UFortHackCartridgeSlotActor, ProxyGameplayCueDamage) == 2720, "Offset mismatch for UFortHackCartridgeSlotActor::ProxyGameplayCueDamage");
static_assert(offsetof(UFortHackCartridgeSlotActor, ActorIndexInFoundation) == 2768, "Offset mismatch for UFortHackCartridgeSlotActor::ActorIndexInFoundation");

// /Script/HackSystemRuntime.FortHackConsole
// Kind: Class; super: BuildingGameplayActor
class UFortHackConsole
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t CartridgeSlot[0x20]; // 0x0920 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bStartEnabled; // 0x0940 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0941
    void* InsertedHackData; // 0x0948 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> InstigatorPlayerState; // 0x0950 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabled; // 0x0958 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0959
    TArray<void*> OfferedHacks; // 0x0960 (Size: 0x10, Type: ArrayProperty)
    float ActivationServerTime; // 0x0970 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0974
    std::uint8_t SelectHackText[0x10]; // 0x0978 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConsoleOfflineText[0x10]; // 0x0988 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConsoleScheduledText[0x10]; // 0x0998 (Size: 0x10, Type: TextProperty)
    FText ConsoleAlreadyUsedText; // 0x09A8 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortHackConsole, CartridgeSlot) == 2336, "Offset mismatch for UFortHackConsole::CartridgeSlot");
static_assert(offsetof(UFortHackConsole, bStartEnabled) == 2368, "Offset mismatch for UFortHackConsole::bStartEnabled");
static_assert(offsetof(UFortHackConsole, InsertedHackData) == 2376, "Offset mismatch for UFortHackConsole::InsertedHackData");
static_assert(offsetof(UFortHackConsole, InstigatorPlayerState) == 2384, "Offset mismatch for UFortHackConsole::InstigatorPlayerState");
static_assert(offsetof(UFortHackConsole, bEnabled) == 2392, "Offset mismatch for UFortHackConsole::bEnabled");
static_assert(offsetof(UFortHackConsole, OfferedHacks) == 2400, "Offset mismatch for UFortHackConsole::OfferedHacks");
static_assert(offsetof(UFortHackConsole, ActivationServerTime) == 2416, "Offset mismatch for UFortHackConsole::ActivationServerTime");
static_assert(offsetof(UFortHackConsole, SelectHackText) == 2424, "Offset mismatch for UFortHackConsole::SelectHackText");
static_assert(offsetof(UFortHackConsole, ConsoleOfflineText) == 2440, "Offset mismatch for UFortHackConsole::ConsoleOfflineText");
static_assert(offsetof(UFortHackConsole, ConsoleScheduledText) == 2456, "Offset mismatch for UFortHackConsole::ConsoleScheduledText");
static_assert(offsetof(UFortHackConsole, ConsoleAlreadyUsedText) == 2472, "Offset mismatch for UFortHackConsole::ConsoleAlreadyUsedText");

// /Script/HackSystemRuntime.FortHackConsoleCueSource
// Kind: Class; super: Object
class UFortHackConsoleCueSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HackSystemRuntime.FortHackData
// Kind: Class; super: PrimaryDataAsset
class UFortHackData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HackTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t AbilitySet[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GameplayEffect[0x20]; // 0x0050 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ApplicationScope; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMarksInstigatorSquad; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0072
    void* CustomBehavior; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HackMaterialData[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CartridgeIcon[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EffectIcon[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> Voiceover; // 0x00E0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortHackData, HackTag) == 40, "Offset mismatch for UFortHackData::HackTag");
static_assert(offsetof(UFortHackData, AbilitySet) == 48, "Offset mismatch for UFortHackData::AbilitySet");
static_assert(offsetof(UFortHackData, GameplayEffect) == 80, "Offset mismatch for UFortHackData::GameplayEffect");
static_assert(offsetof(UFortHackData, ApplicationScope) == 112, "Offset mismatch for UFortHackData::ApplicationScope");
static_assert(offsetof(UFortHackData, bMarksInstigatorSquad) == 113, "Offset mismatch for UFortHackData::bMarksInstigatorSquad");
static_assert(offsetof(UFortHackData, CustomBehavior) == 120, "Offset mismatch for UFortHackData::CustomBehavior");
static_assert(offsetof(UFortHackData, HackMaterialData) == 128, "Offset mismatch for UFortHackData::HackMaterialData");
static_assert(offsetof(UFortHackData, CartridgeIcon) == 160, "Offset mismatch for UFortHackData::CartridgeIcon");
static_assert(offsetof(UFortHackData, EffectIcon) == 192, "Offset mismatch for UFortHackData::EffectIcon");
static_assert(offsetof(UFortHackData, Voiceover) == 224, "Offset mismatch for UFortHackData::Voiceover");

// /Script/HackSystemRuntime.FortHackExtractionPoint
// Kind: Class; super: BuildingGameplayActor
class UFortHackExtractionPoint
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    std::uint8_t bExtractOnInteract; // 0x0920 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0921
    std::uint8_t ExtractCartridgeText[0x10]; // 0x0928 (Size: 0x10, Type: TextProperty)
    FText NeedCartridgeText; // 0x0938 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortHackExtractionPoint, bExtractOnInteract) == 2336, "Offset mismatch for UFortHackExtractionPoint::bExtractOnInteract");
static_assert(offsetof(UFortHackExtractionPoint, ExtractCartridgeText) == 2344, "Offset mismatch for UFortHackExtractionPoint::ExtractCartridgeText");
static_assert(offsetof(UFortHackExtractionPoint, NeedCartridgeText) == 2360, "Offset mismatch for UFortHackExtractionPoint::NeedCartridgeText");

// /Script/HackSystemRuntime.FortHackMagpiePersistenceManager
// Kind: Class; super: ExtractionCorePersistenceManager
class UFortHackMagpiePersistenceManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnReceivedPersistenceData; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortHackMagpiePersistenceManager, OnReceivedPersistenceData) == 40, "Offset mismatch for UFortHackMagpiePersistenceManager::OnReceivedPersistenceData");

// /Script/HackSystemRuntime.FortHackMaterialData
// Kind: Class; super: PrimaryDataAsset
class UFortHackMaterialData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HackSystemRuntime.FortHackSystemLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortHackSystemLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HackSystemRuntime.FortPawnComponent_HackSystem
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_HackSystem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TSoftClassPtr<void> ConsoleMarkerSourceClass; // 0x00C8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortPawnComponent_HackSystem, ConsoleMarkerSourceClass) == 200, "Offset mismatch for UFortPawnComponent_HackSystem::ConsoleMarkerSourceClass");

// /Script/HackSystemRuntime.FortPickupInteractOverrideComponent_HackSystem
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_HackSystem
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t Priority; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* ContextOverrideWidget; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* SecondContextOverrideWidget; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bContextOverrideWidgetApplied; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveContextOverrideWidgetsImmediately; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_HackSystem, Priority) == 192, "Offset mismatch for UFortPickupInteractOverrideComponent_HackSystem::Priority");
static_assert(offsetof(UFortPickupInteractOverrideComponent_HackSystem, ContextOverrideWidget) == 200, "Offset mismatch for UFortPickupInteractOverrideComponent_HackSystem::ContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_HackSystem, SecondContextOverrideWidget) == 208, "Offset mismatch for UFortPickupInteractOverrideComponent_HackSystem::SecondContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_HackSystem, bContextOverrideWidgetApplied) == 216, "Offset mismatch for UFortPickupInteractOverrideComponent_HackSystem::bContextOverrideWidgetApplied");
static_assert(offsetof(UFortPickupInteractOverrideComponent_HackSystem, bRemoveContextOverrideWidgetsImmediately) == 217, "Offset mismatch for UFortPickupInteractOverrideComponent_HackSystem::bRemoveContextOverrideWidgetsImmediately");

// /Script/HackSystemRuntime.FortPlayerStateComponent_HackSystemPersistence
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_HackSystemPersistence
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> ReplicatedOwnedHackIds; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_HackSystemPersistence, ReplicatedOwnedHackIds) == 216, "Offset mismatch for UFortPlayerStateComponent_HackSystemPersistence::ReplicatedOwnedHackIds");
