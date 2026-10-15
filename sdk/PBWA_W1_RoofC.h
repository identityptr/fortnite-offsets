/**
 * decamp dumper generated SDK
 * Package: /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofC
 */
#pragma once
#include "Basic.h"

// /Game/Building/ActorBlueprints/Player/Wood/L1/PBWA_W1_RoofC.PBWA_W1_RoofC_C
// Kind: BlueprintGeneratedClass; super: BuildingRoof
class UPBWA_W1_RoofC_C
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

static_assert(offsetof(UPBWA_W1_RoofC_C, TextureData) == 1752, "Offset mismatch for UPBWA_W1_RoofC_C::TextureData");
static_assert(offsetof(UPBWA_W1_RoofC_C, StaticMesh) == 1784, "Offset mismatch for UPBWA_W1_RoofC_C::StaticMesh");
static_assert(offsetof(UPBWA_W1_RoofC_C, bForceReplicateSubObjects) == 1792, "Offset mismatch for UPBWA_W1_RoofC_C::bForceReplicateSubObjects");
static_assert(offsetof(UPBWA_W1_RoofC_C, ResourceType) == 1793, "Offset mismatch for UPBWA_W1_RoofC_C::ResourceType");
static_assert(offsetof(UPBWA_W1_RoofC_C, CurAnimSubObjectNum) == 1794, "Offset mismatch for UPBWA_W1_RoofC_C::CurAnimSubObjectNum");
static_assert(offsetof(UPBWA_W1_RoofC_C, CurAnimSubObjectTargetNum) == 1795, "Offset mismatch for UPBWA_W1_RoofC_C::CurAnimSubObjectTargetNum");
static_assert(offsetof(UPBWA_W1_RoofC_C, AltMeshIdx) == 1796, "Offset mismatch for UPBWA_W1_RoofC_C::AltMeshIdx");
static_assert(offsetof(UPBWA_W1_RoofC_C, bAllowBuildingCheat) == 1800, "Offset mismatch for UPBWA_W1_RoofC_C::bAllowBuildingCheat");
static_assert(offsetof(UPBWA_W1_RoofC_C, bCameraOnlyCollision) == 1801, "Offset mismatch for UPBWA_W1_RoofC_C::bCameraOnlyCollision");
static_assert(offsetof(UPBWA_W1_RoofC_C, bForciblyStructurallySupported) == 1802, "Offset mismatch for UPBWA_W1_RoofC_C::bForciblyStructurallySupported");
static_assert(offsetof(UPBWA_W1_RoofC_C, bAllowWeakSpots) == 1803, "Offset mismatch for UPBWA_W1_RoofC_C::bAllowWeakSpots");
static_assert(offsetof(UPBWA_W1_RoofC_C, bAllowCustomMaterial) == 1804, "Offset mismatch for UPBWA_W1_RoofC_C::bAllowCustomMaterial");
static_assert(offsetof(UPBWA_W1_RoofC_C, SavedDirectlySupportedStatus) == 1805, "Offset mismatch for UPBWA_W1_RoofC_C::SavedDirectlySupportedStatus");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingAnimation) == 1806, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingAnimation");
static_assert(offsetof(UPBWA_W1_RoofC_C, bSelectedForQuota) == 1807, "Offset mismatch for UPBWA_W1_RoofC_C::bSelectedForQuota");
static_assert(offsetof(UPBWA_W1_RoofC_C, CachedBounceAdapter) == 1808, "Offset mismatch for UPBWA_W1_RoofC_C::CachedBounceAdapter");
static_assert(offsetof(UPBWA_W1_RoofC_C, DestroyedTime) == 1824, "Offset mismatch for UPBWA_W1_RoofC_C::DestroyedTime");
static_assert(offsetof(UPBWA_W1_RoofC_C, BASEEffectMeshComponent) == 1832, "Offset mismatch for UPBWA_W1_RoofC_C::BASEEffectMeshComponent");
static_assert(offsetof(UPBWA_W1_RoofC_C, DisplacedMesh) == 1840, "Offset mismatch for UPBWA_W1_RoofC_C::DisplacedMesh");
static_assert(offsetof(UPBWA_W1_RoofC_C, NavObstacles) == 1848, "Offset mismatch for UPBWA_W1_RoofC_C::NavObstacles");
static_assert(offsetof(UPBWA_W1_RoofC_C, ReplicatedDrawScale3D) == 1880, "Offset mismatch for UPBWA_W1_RoofC_C::ReplicatedDrawScale3D");
static_assert(offsetof(UPBWA_W1_RoofC_C, DeathParticleSocketName) == 1892, "Offset mismatch for UPBWA_W1_RoofC_C::DeathParticleSocketName");
static_assert(offsetof(UPBWA_W1_RoofC_C, EditorOnlyInstanceMaterialParameters) == 1896, "Offset mismatch for UPBWA_W1_RoofC_C::EditorOnlyInstanceMaterialParameters");
static_assert(offsetof(UPBWA_W1_RoofC_C, StaticMeshComponent) == 1960, "Offset mismatch for UPBWA_W1_RoofC_C::StaticMeshComponent");
static_assert(offsetof(UPBWA_W1_RoofC_C, WeakPointComponent) == 1968, "Offset mismatch for UPBWA_W1_RoofC_C::WeakPointComponent");
static_assert(offsetof(UPBWA_W1_RoofC_C, OnConstructionComplete) == 1976, "Offset mismatch for UPBWA_W1_RoofC_C::OnConstructionComplete");
static_assert(offsetof(UPBWA_W1_RoofC_C, OnMeshSetChanged) == 1992, "Offset mismatch for UPBWA_W1_RoofC_C::OnMeshSetChanged");
static_assert(offsetof(UPBWA_W1_RoofC_C, MinimalReplicationProxy) == 2008, "Offset mismatch for UPBWA_W1_RoofC_C::MinimalReplicationProxy");
static_assert(offsetof(UPBWA_W1_RoofC_C, DestructionLootTierChosenQuotaInfo) == 2012, "Offset mismatch for UPBWA_W1_RoofC_C::DestructionLootTierChosenQuotaInfo");
static_assert(offsetof(UPBWA_W1_RoofC_C, DestructionLootTierKey) == 2020, "Offset mismatch for UPBWA_W1_RoofC_C::DestructionLootTierKey");
static_assert(offsetof(UPBWA_W1_RoofC_C, CachedMaxResourcesToSpawn) == 2024, "Offset mismatch for UPBWA_W1_RoofC_C::CachedMaxResourcesToSpawn");
static_assert(offsetof(UPBWA_W1_RoofC_C, BreakEffect) == 2032, "Offset mismatch for UPBWA_W1_RoofC_C::BreakEffect");
static_assert(offsetof(UPBWA_W1_RoofC_C, RVTHeightOverride) == 2040, "Offset mismatch for UPBWA_W1_RoofC_C::RVTHeightOverride");
static_assert(offsetof(UPBWA_W1_RoofC_C, RVTColorOverride) == 2048, "Offset mismatch for UPBWA_W1_RoofC_C::RVTColorOverride");
static_assert(offsetof(UPBWA_W1_RoofC_C, DeathParticlesInst) == 2056, "Offset mismatch for UPBWA_W1_RoofC_C::DeathParticlesInst");
static_assert(offsetof(UPBWA_W1_RoofC_C, DeathSound) == 2064, "Offset mismatch for UPBWA_W1_RoofC_C::DeathSound");
static_assert(offsetof(UPBWA_W1_RoofC_C, ConstructedEffect) == 2072, "Offset mismatch for UPBWA_W1_RoofC_C::ConstructedEffect");
static_assert(offsetof(UPBWA_W1_RoofC_C, RandomDayphaseFXStates) == 2080, "Offset mismatch for UPBWA_W1_RoofC_C::RandomDayphaseFXStates");
static_assert(offsetof(UPBWA_W1_RoofC_C, ConstructionAudioComponent) == 2096, "Offset mismatch for UPBWA_W1_RoofC_C::ConstructionAudioComponent");
static_assert(offsetof(UPBWA_W1_RoofC_C, CachedDestructionInstigator) == 2104, "Offset mismatch for UPBWA_W1_RoofC_C::CachedDestructionInstigator");
static_assert(offsetof(UPBWA_W1_RoofC_C, LastDamageAmount) == 2112, "Offset mismatch for UPBWA_W1_RoofC_C::LastDamageAmount");
static_assert(offsetof(UPBWA_W1_RoofC_C, LastDamageHitImpulseDir) == 2116, "Offset mismatch for UPBWA_W1_RoofC_C::LastDamageHitImpulseDir");
static_assert(offsetof(UPBWA_W1_RoofC_C, DamageHistory) == 2136, "Offset mismatch for UPBWA_W1_RoofC_C::DamageHistory");
static_assert(offsetof(UPBWA_W1_RoofC_C, CachedAnimatingStaticMeshes) == 2152, "Offset mismatch for UPBWA_W1_RoofC_C::CachedAnimatingStaticMeshes");
static_assert(offsetof(UPBWA_W1_RoofC_C, OnRepairBuildingStarted) == 2264, "Offset mismatch for UPBWA_W1_RoofC_C::OnRepairBuildingStarted");
static_assert(offsetof(UPBWA_W1_RoofC_C, OnRepairBuildingFinished) == 2280, "Offset mismatch for UPBWA_W1_RoofC_C::OnRepairBuildingFinished");
static_assert(offsetof(UPBWA_W1_RoofC_C, UndermineGroup) == 2296, "Offset mismatch for UPBWA_W1_RoofC_C::UndermineGroup");
static_assert(offsetof(UPBWA_W1_RoofC_C, LogicalBuildingIdx) == 2300, "Offset mismatch for UPBWA_W1_RoofC_C::LogicalBuildingIdx");
static_assert(offsetof(UPBWA_W1_RoofC_C, AnimatingMaterialMappings) == 2304, "Offset mismatch for UPBWA_W1_RoofC_C::AnimatingMaterialMappings");
static_assert(offsetof(UPBWA_W1_RoofC_C, DamagedButNotAnimatingMaterialMappings) == 2320, "Offset mismatch for UPBWA_W1_RoofC_C::DamagedButNotAnimatingMaterialMappings");
static_assert(offsetof(UPBWA_W1_RoofC_C, EditModeSupportClass) == 2336, "Offset mismatch for UPBWA_W1_RoofC_C::EditModeSupportClass");
static_assert(offsetof(UPBWA_W1_RoofC_C, EditModeSupport) == 2344, "Offset mismatch for UPBWA_W1_RoofC_C::EditModeSupport");
static_assert(offsetof(UPBWA_W1_RoofC_C, HealthToAutoBuild) == 2352, "Offset mismatch for UPBWA_W1_RoofC_C::HealthToAutoBuild");
static_assert(offsetof(UPBWA_W1_RoofC_C, AccumulatedAutoBuildTime) == 2356, "Offset mismatch for UPBWA_W1_RoofC_C::AccumulatedAutoBuildTime");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingReplacementType) == 2360, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingReplacementType");
static_assert(offsetof(UPBWA_W1_RoofC_C, ReplacementDestructionReason) == 2361, "Offset mismatch for UPBWA_W1_RoofC_C::ReplacementDestructionReason");
static_assert(offsetof(UPBWA_W1_RoofC_C, CurBuildingAnimType) == 2362, "Offset mismatch for UPBWA_W1_RoofC_C::CurBuildingAnimType");
static_assert(offsetof(UPBWA_W1_RoofC_C, DamageVisualsState) == 2363, "Offset mismatch for UPBWA_W1_RoofC_C::DamageVisualsState");
static_assert(offsetof(UPBWA_W1_RoofC_C, CurBuildProgress) == 2364, "Offset mismatch for UPBWA_W1_RoofC_C::CurBuildProgress");
static_assert(offsetof(UPBWA_W1_RoofC_C, CurBuildingAnimStartTime) == 2368, "Offset mismatch for UPBWA_W1_RoofC_C::CurBuildingAnimStartTime");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingAttachmentSlot) == 2372, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingAttachmentSlot");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingAttachmentType) == 2373, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingAttachmentType");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingPlacementType) == 2374, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingPlacementType");
static_assert(offsetof(UPBWA_W1_RoofC_C, LastStructuralCheck) == 2375, "Offset mismatch for UPBWA_W1_RoofC_C::LastStructuralCheck");
static_assert(offsetof(UPBWA_W1_RoofC_C, BlueprintMIDs) == 2376, "Offset mismatch for UPBWA_W1_RoofC_C::BlueprintMIDs");
static_assert(offsetof(UPBWA_W1_RoofC_C, BlueprintMeshComp) == 2392, "Offset mismatch for UPBWA_W1_RoofC_C::BlueprintMeshComp");
static_assert(offsetof(UPBWA_W1_RoofC_C, EditingPlayer) == 2400, "Offset mismatch for UPBWA_W1_RoofC_C::EditingPlayer");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingAttachmentPointOffset) == 2440, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingAttachmentPointOffset");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingAttachmentRadius) == 2452, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingAttachmentRadius");
static_assert(offsetof(UPBWA_W1_RoofC_C, ParentActorToAttachTo) == 2456, "Offset mismatch for UPBWA_W1_RoofC_C::ParentActorToAttachTo");
static_assert(offsetof(UPBWA_W1_RoofC_C, BuildingAttachmentInfo) == 2464, "Offset mismatch for UPBWA_W1_RoofC_C::BuildingAttachmentInfo");
static_assert(offsetof(UPBWA_W1_RoofC_C, OnTrapPlacementChanged) == 2496, "Offset mismatch for UPBWA_W1_RoofC_C::OnTrapPlacementChanged");
static_assert(offsetof(UPBWA_W1_RoofC_C, OnReplacementDestruction) == 2512, "Offset mismatch for UPBWA_W1_RoofC_C::OnReplacementDestruction");
static_assert(offsetof(UPBWA_W1_RoofC_C, AttachmentPlacementBlockingActors) == 2552, "Offset mismatch for UPBWA_W1_RoofC_C::AttachmentPlacementBlockingActors");
static_assert(offsetof(UPBWA_W1_RoofC_C, Foundation) == 2616, "Offset mismatch for UPBWA_W1_RoofC_C::Foundation");
static_assert(offsetof(UPBWA_W1_RoofC_C, DamagerOwner) == 2648, "Offset mismatch for UPBWA_W1_RoofC_C::DamagerOwner");
static_assert(offsetof(UPBWA_W1_RoofC_C, RelevantBASE) == 2656, "Offset mismatch for UPBWA_W1_RoofC_C::RelevantBASE");
static_assert(offsetof(UPBWA_W1_RoofC_C, HLODDestructionTag) == 2672, "Offset mismatch for UPBWA_W1_RoofC_C::HLODDestructionTag");
static_assert(offsetof(UPBWA_W1_RoofC_C, LastRelevantBASE) == 2688, "Offset mismatch for UPBWA_W1_RoofC_C::LastRelevantBASE");
static_assert(offsetof(UPBWA_W1_RoofC_C, ProxyGameplayCueDamage) == 2720, "Offset mismatch for UPBWA_W1_RoofC_C::ProxyGameplayCueDamage");
static_assert(offsetof(UPBWA_W1_RoofC_C, ActorIndexInFoundation) == 2768, "Offset mismatch for UPBWA_W1_RoofC_C::ActorIndexInFoundation");
