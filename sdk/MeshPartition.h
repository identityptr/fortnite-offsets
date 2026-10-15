/**
 * decamp dumper generated SDK
 * Package: /Script/MeshPartition
 */
#pragma once
#include "Basic.h"

// /Script/MeshPartition.ChannelDesc
// Kind: ScriptStruct; super: none
struct FChannelDesc
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChannelDesc, Name) == 0, "Offset mismatch for FChannelDesc::Name");

// /Script/MeshPartition.ChannelMap
// Kind: ScriptStruct; super: none
struct FChannelMap
{
public:
    TArray<void*> ChannelDescs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChannelMap, ChannelDescs) == 0, "Offset mismatch for FChannelMap::ChannelDescs");

// /Script/MeshPartition.ChannelName
// Kind: ScriptStruct; super: NameWrapper
struct FChannelName
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChannelName, Name) == 0, "Offset mismatch for FChannelName::Name");

// /Script/MeshPartition.CommonBuildVariant
// Kind: ScriptStruct; super: none
struct FCommonBuildVariant
{
public:
    double MaxSectionComplexity; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bBuildChannelResources; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCommonBuildVariant, MaxSectionComplexity) == 0, "Offset mismatch for FCommonBuildVariant::MaxSectionComplexity");
static_assert(offsetof(FCommonBuildVariant, bBuildChannelResources) == 8, "Offset mismatch for FCommonBuildVariant::bBuildChannelResources");

// /Script/MeshPartition.CompiledSectionBuildInfo
// Kind: ScriptStruct; super: none
struct FCompiledSectionBuildInfo
{
public:
    std::uint8_t BuildKey[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t BuildVariantName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t MegaMeshDefinitionPath[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    TArray<void*> BaseModifierPaths; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ModifiersHash[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    TArray<void*> PackageDependencies; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PackageHash[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModifierSetHash[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    TArray<void*> ClassDependencies; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ClassHash[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t BuildVariantHash[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t MegaMeshGUID[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t MegaMeshPath[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t GridCellCoord[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t GridSettings[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompiledSectionBuildInfo, BuildKey) == 0, "Offset mismatch for FCompiledSectionBuildInfo::BuildKey");
static_assert(offsetof(FCompiledSectionBuildInfo, BuildVariantName) == 16, "Offset mismatch for FCompiledSectionBuildInfo::BuildVariantName");
static_assert(offsetof(FCompiledSectionBuildInfo, MegaMeshDefinitionPath) == 20, "Offset mismatch for FCompiledSectionBuildInfo::MegaMeshDefinitionPath");
static_assert(offsetof(FCompiledSectionBuildInfo, BaseModifierPaths) == 32, "Offset mismatch for FCompiledSectionBuildInfo::BaseModifierPaths");
static_assert(offsetof(FCompiledSectionBuildInfo, ModifiersHash) == 48, "Offset mismatch for FCompiledSectionBuildInfo::ModifiersHash");
static_assert(offsetof(FCompiledSectionBuildInfo, PackageDependencies) == 64, "Offset mismatch for FCompiledSectionBuildInfo::PackageDependencies");
static_assert(offsetof(FCompiledSectionBuildInfo, PackageHash) == 80, "Offset mismatch for FCompiledSectionBuildInfo::PackageHash");
static_assert(offsetof(FCompiledSectionBuildInfo, ModifierSetHash) == 96, "Offset mismatch for FCompiledSectionBuildInfo::ModifierSetHash");
static_assert(offsetof(FCompiledSectionBuildInfo, ClassDependencies) == 112, "Offset mismatch for FCompiledSectionBuildInfo::ClassDependencies");
static_assert(offsetof(FCompiledSectionBuildInfo, ClassHash) == 128, "Offset mismatch for FCompiledSectionBuildInfo::ClassHash");
static_assert(offsetof(FCompiledSectionBuildInfo, BuildVariantHash) == 144, "Offset mismatch for FCompiledSectionBuildInfo::BuildVariantHash");
static_assert(offsetof(FCompiledSectionBuildInfo, MegaMeshGUID) == 160, "Offset mismatch for FCompiledSectionBuildInfo::MegaMeshGUID");
static_assert(offsetof(FCompiledSectionBuildInfo, MegaMeshPath) == 176, "Offset mismatch for FCompiledSectionBuildInfo::MegaMeshPath");
static_assert(offsetof(FCompiledSectionBuildInfo, GridCellCoord) == 200, "Offset mismatch for FCompiledSectionBuildInfo::GridCellCoord");
static_assert(offsetof(FCompiledSectionBuildInfo, GridSettings) == 216, "Offset mismatch for FCompiledSectionBuildInfo::GridSettings");

// /Script/MeshPartition.CompiledSectionBuildVariant
// Kind: ScriptStruct; super: CommonBuildVariant
struct FCompiledSectionBuildVariant
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSplitSectionsToMatchWorldPartitionRuntimeGrid; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompiledSectionBuildVariant, Name) == 16, "Offset mismatch for FCompiledSectionBuildVariant::Name");
static_assert(offsetof(FCompiledSectionBuildVariant, bSplitSectionsToMatchWorldPartitionRuntimeGrid) == 20, "Offset mismatch for FCompiledSectionBuildVariant::bSplitSectionsToMatchWorldPartitionRuntimeGrid");

// /Script/MeshPartition.GridSettings
// Kind: ScriptStruct; super: none
struct FGridSettings
{
public:
    std::uint32_t CellSize; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bIs2D; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t WorldOriginOffset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGridSettings, CellSize) == 0, "Offset mismatch for FGridSettings::CellSize");
static_assert(offsetof(FGridSettings, bIs2D) == 4, "Offset mismatch for FGridSettings::bIs2D");
static_assert(offsetof(FGridSettings, WorldOriginOffset) == 8, "Offset mismatch for FGridSettings::WorldOriginOffset");

// /Script/MeshPartition.MeshPartitionCollisionData
// Kind: ScriptStruct; super: none
struct FMeshPartitionCollisionData
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> PhysicalMaterials; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMeshPartitionCollisionData, PhysicalMaterials) == 80, "Offset mismatch for FMeshPartitionCollisionData::PhysicalMaterials");

// /Script/MeshPartition.NameWrapper
// Kind: ScriptStruct; super: none
struct FNameWrapper
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNameWrapper, Name) == 0, "Offset mismatch for FNameWrapper::Name");

// /Script/MeshPartition.PerBuildVariantDataLayers
// Kind: ScriptStruct; super: none
struct FPerBuildVariantDataLayers
{
public:
    TMap<void*, void*> Layers; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPerBuildVariantDataLayers, Layers) == 0, "Offset mismatch for FPerBuildVariantDataLayers::Layers");

// /Script/MeshPartition.PerPlatformRuntimeSettings
// Kind: ScriptStruct; super: none
struct FPerPlatformRuntimeSettings
{
public:
    std::uint8_t Default[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPerPlatformRuntimeSettings, Default) == 0, "Offset mismatch for FPerPlatformRuntimeSettings::Default");

// /Script/MeshPartition.PhysicalMaterialChannel
// Kind: ScriptStruct; super: none
struct FPhysicalMaterialChannel
{
public:
    std::uint8_t ChannelName[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Material; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float MinimumCollisionRelevanceWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPhysicalMaterialChannel, ChannelName) == 0, "Offset mismatch for FPhysicalMaterialChannel::ChannelName");
static_assert(offsetof(FPhysicalMaterialChannel, Material) == 8, "Offset mismatch for FPhysicalMaterialChannel::Material");
static_assert(offsetof(FPhysicalMaterialChannel, MinimumCollisionRelevanceWeight) == 16, "Offset mismatch for FPhysicalMaterialChannel::MinimumCollisionRelevanceWeight");

// /Script/MeshPartition.ProjectModifierFalloffSettings
// Kind: ScriptStruct; super: none
struct FProjectModifierFalloffSettings
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Distance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float CornerRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* FalloffCurve; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FProjectModifierFalloffSettings, Mode) == 0, "Offset mismatch for FProjectModifierFalloffSettings::Mode");
static_assert(offsetof(FProjectModifierFalloffSettings, Distance) == 4, "Offset mismatch for FProjectModifierFalloffSettings::Distance");
static_assert(offsetof(FProjectModifierFalloffSettings, CornerRadius) == 8, "Offset mismatch for FProjectModifierFalloffSettings::CornerRadius");
static_assert(offsetof(FProjectModifierFalloffSettings, FalloffCurve) == 16, "Offset mismatch for FProjectModifierFalloffSettings::FalloffCurve");

// /Script/MeshPartition.ProjectModifierWeightEntry
// Kind: ScriptStruct; super: none
struct FProjectModifierWeightEntry
{
public:
    std::uint8_t ChannelName[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t SourceMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t VertexColorIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceWeightChannelName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t BlendMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t FalloffOverrides[0x28]; // 0x0018 (Size: 0x28, Type: OptionalProperty)
    std::uint8_t bApplyHeightMinMaxBlend; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    double HeightMinMaxBlendDistance; // 0x0048 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FProjectModifierWeightEntry, ChannelName) == 0, "Offset mismatch for FProjectModifierWeightEntry::ChannelName");
static_assert(offsetof(FProjectModifierWeightEntry, SourceMode) == 4, "Offset mismatch for FProjectModifierWeightEntry::SourceMode");
static_assert(offsetof(FProjectModifierWeightEntry, VertexColorIndex) == 8, "Offset mismatch for FProjectModifierWeightEntry::VertexColorIndex");
static_assert(offsetof(FProjectModifierWeightEntry, SourceWeightChannelName) == 12, "Offset mismatch for FProjectModifierWeightEntry::SourceWeightChannelName");
static_assert(offsetof(FProjectModifierWeightEntry, BlendMode) == 16, "Offset mismatch for FProjectModifierWeightEntry::BlendMode");
static_assert(offsetof(FProjectModifierWeightEntry, FalloffOverrides) == 24, "Offset mismatch for FProjectModifierWeightEntry::FalloffOverrides");
static_assert(offsetof(FProjectModifierWeightEntry, bApplyHeightMinMaxBlend) == 64, "Offset mismatch for FProjectModifierWeightEntry::bApplyHeightMinMaxBlend");
static_assert(offsetof(FProjectModifierWeightEntry, HeightMinMaxBlendDistance) == 72, "Offset mismatch for FProjectModifierWeightEntry::HeightMinMaxBlendDistance");

// /Script/MeshPartition.RuntimeSettings
// Kind: ScriptStruct; super: none
struct FRuntimeSettings
{
public:
    TArray<void*> BuildVariantNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FName BuildVariantName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FRuntimeSettings, BuildVariantNames) == 0, "Offset mismatch for FRuntimeSettings::BuildVariantNames");
static_assert(offsetof(FRuntimeSettings, BuildVariantName) == 16, "Offset mismatch for FRuntimeSettings::BuildVariantName");

// /Script/MeshPartition.Transformer
// Kind: ScriptStruct; super: none
struct FTransformer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshPartition.CompiledSection
// Kind: Class; super: Actor
class UCompiledSection
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> MeshComponents; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionComponents; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VirtualTextureFallbackMeshComponents; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    void* FarFieldMeshComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Parent[0x20]; // 0x02A8 (Size: 0x20, Type: SoftObjectProperty)
    void* MaterialInstance; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* ChannelTexture; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BuildInfo[0x100]; // 0x02D8 (Size: 0x100, Type: StructProperty)
    std::uint8_t ChannelTexcoordDesc[0x8]; // 0x03D8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ChannelTexcoordROIMax[0x8]; // 0x03E0 (Size: 0x8, Type: StructProperty)
    TArray<void*> ChannelTable; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaterialCacheTileCount[0x8]; // 0x03F8 (Size: 0x8, Type: StructProperty)
    TArray<void*> MaterialCacheTextures; // 0x0400 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompiledSection, MeshComponents) == 624, "Offset mismatch for UCompiledSection::MeshComponents");
static_assert(offsetof(UCompiledSection, CollisionComponents) == 640, "Offset mismatch for UCompiledSection::CollisionComponents");
static_assert(offsetof(UCompiledSection, VirtualTextureFallbackMeshComponents) == 656, "Offset mismatch for UCompiledSection::VirtualTextureFallbackMeshComponents");
static_assert(offsetof(UCompiledSection, FarFieldMeshComponent) == 672, "Offset mismatch for UCompiledSection::FarFieldMeshComponent");
static_assert(offsetof(UCompiledSection, Parent) == 680, "Offset mismatch for UCompiledSection::Parent");
static_assert(offsetof(UCompiledSection, MaterialInstance) == 712, "Offset mismatch for UCompiledSection::MaterialInstance");
static_assert(offsetof(UCompiledSection, ChannelTexture) == 720, "Offset mismatch for UCompiledSection::ChannelTexture");
static_assert(offsetof(UCompiledSection, BuildInfo) == 728, "Offset mismatch for UCompiledSection::BuildInfo");
static_assert(offsetof(UCompiledSection, ChannelTexcoordDesc) == 984, "Offset mismatch for UCompiledSection::ChannelTexcoordDesc");
static_assert(offsetof(UCompiledSection, ChannelTexcoordROIMax) == 992, "Offset mismatch for UCompiledSection::ChannelTexcoordROIMax");
static_assert(offsetof(UCompiledSection, ChannelTable) == 1000, "Offset mismatch for UCompiledSection::ChannelTable");
static_assert(offsetof(UCompiledSection, MaterialCacheTileCount) == 1016, "Offset mismatch for UCompiledSection::MaterialCacheTileCount");
static_assert(offsetof(UCompiledSection, MaterialCacheTextures) == 1024, "Offset mismatch for UCompiledSection::MaterialCacheTextures");

// /Script/MeshPartition.MeshPartition
// Kind: Class; super: Actor
class UMeshPartition
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MegaMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* MegaMeshDefinition; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshPartition, MegaMeshComponent) == 624, "Offset mismatch for UMeshPartition::MegaMeshComponent");
static_assert(offsetof(UMeshPartition, MegaMeshDefinition) == 632, "Offset mismatch for UMeshPartition::MegaMeshDefinition");

// /Script/MeshPartition.MeshPartitionCollisionComponent
// Kind: Class; super: PrimitiveComponent
class UMeshPartitionCollisionComponent
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    TArray<void*> PhysicsOnlyMaterials; // 0x0578 (Size: 0x10, Type: ArrayProperty)
    void* MeshBodySetup; // 0x0588 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocalBounds[0x38]; // 0x0590 (Size: 0x38, Type: StructProperty)
    std::uint8_t bShouldSkipDirtyNavOnAddOrRemove; // 0x05C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshPartitionCollisionComponent, PhysicsOnlyMaterials) == 1400, "Offset mismatch for UMeshPartitionCollisionComponent::PhysicsOnlyMaterials");
static_assert(offsetof(UMeshPartitionCollisionComponent, MeshBodySetup) == 1416, "Offset mismatch for UMeshPartitionCollisionComponent::MeshBodySetup");
static_assert(offsetof(UMeshPartitionCollisionComponent, LocalBounds) == 1424, "Offset mismatch for UMeshPartitionCollisionComponent::LocalBounds");
static_assert(offsetof(UMeshPartitionCollisionComponent, bShouldSkipDirtyNavOnAddOrRemove) == 1480, "Offset mismatch for UMeshPartitionCollisionComponent::bShouldSkipDirtyNavOnAddOrRemove");

// /Script/MeshPartition.MeshPartitionComponent
// Kind: Class; super: PrimitiveComponent
class UMeshPartitionComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshPartitionComponent, MinDrawDistance) == 632, "Offset mismatch for UMeshPartitionComponent::MinDrawDistance");
static_assert(offsetof(UMeshPartitionComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UMeshPartitionComponent::LDMaxDrawDistance");
static_assert(offsetof(UMeshPartitionComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UMeshPartitionComponent::CachedMaxDrawDistance");
static_assert(offsetof(UMeshPartitionComponent, DepthPriorityGroup) == 644, "Offset mismatch for UMeshPartitionComponent::DepthPriorityGroup");
static_assert(offsetof(UMeshPartitionComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UMeshPartitionComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UMeshPartitionComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UMeshPartitionComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UMeshPartitionComponent, LightmapType) == 647, "Offset mismatch for UMeshPartitionComponent::LightmapType");
static_assert(offsetof(UMeshPartitionComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UMeshPartitionComponent::HLODBatchingPolicy");
static_assert(offsetof(UMeshPartitionComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UMeshPartitionComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UMeshPartitionComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UMeshPartitionComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UMeshPartitionComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UMeshPartitionComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UMeshPartitionComponent, bHoldout) == 652, "Offset mismatch for UMeshPartitionComponent::bHoldout");
static_assert(offsetof(UMeshPartitionComponent, CastShadow) == 653, "Offset mismatch for UMeshPartitionComponent::CastShadow");
static_assert(offsetof(UMeshPartitionComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UMeshPartitionComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UMeshPartitionComponent, bCastCinematicShadow) == 655, "Offset mismatch for UMeshPartitionComponent::bCastCinematicShadow");
static_assert(offsetof(UMeshPartitionComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UMeshPartitionComponent::AlwaysLoadOnClient");
static_assert(offsetof(UMeshPartitionComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UMeshPartitionComponent::bHiddenInSceneCapture");
static_assert(offsetof(UMeshPartitionComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UMeshPartitionComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UMeshPartitionComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UMeshPartitionComponent::bHasNoStreamableTextures");
static_assert(offsetof(UMeshPartitionComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UMeshPartitionComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UMeshPartitionComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UMeshPartitionComponent::CanCharacterStepUpOn");
static_assert(offsetof(UMeshPartitionComponent, LightingChannels) == 663, "Offset mismatch for UMeshPartitionComponent::LightingChannels");
static_assert(offsetof(UMeshPartitionComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UMeshPartitionComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UMeshPartitionComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UMeshPartitionComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UMeshPartitionComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UMeshPartitionComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UMeshPartitionComponent, RayTracingGroupId) == 668, "Offset mismatch for UMeshPartitionComponent::RayTracingGroupId");
static_assert(offsetof(UMeshPartitionComponent, VisibilityId) == 672, "Offset mismatch for UMeshPartitionComponent::VisibilityId");
static_assert(offsetof(UMeshPartitionComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UMeshPartitionComponent::CustomDepthStencilValue");
static_assert(offsetof(UMeshPartitionComponent, CustomPrimitiveData) == 680, "Offset mismatch for UMeshPartitionComponent::CustomPrimitiveData");
static_assert(offsetof(UMeshPartitionComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UMeshPartitionComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UMeshPartitionComponent, TranslucencySortPriority) == 776, "Offset mismatch for UMeshPartitionComponent::TranslucencySortPriority");
static_assert(offsetof(UMeshPartitionComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UMeshPartitionComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UMeshPartitionComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UMeshPartitionComponent::RuntimeVirtualTextures");
static_assert(offsetof(UMeshPartitionComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UMeshPartitionComponent::VirtualTextureLodBias");
static_assert(offsetof(UMeshPartitionComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UMeshPartitionComponent::VirtualTextureCullMips");
static_assert(offsetof(UMeshPartitionComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UMeshPartitionComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UMeshPartitionComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UMeshPartitionComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UMeshPartitionComponent, BoundsScale) == 840, "Offset mismatch for UMeshPartitionComponent::BoundsScale");
static_assert(offsetof(UMeshPartitionComponent, MoveIgnoreActors) == 848, "Offset mismatch for UMeshPartitionComponent::MoveIgnoreActors");
static_assert(offsetof(UMeshPartitionComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UMeshPartitionComponent::MoveIgnoreComponents");
static_assert(offsetof(UMeshPartitionComponent, BodyInstance) == 896, "Offset mismatch for UMeshPartitionComponent::BodyInstance");
static_assert(offsetof(UMeshPartitionComponent, OnComponentHit) == 1320, "Offset mismatch for UMeshPartitionComponent::OnComponentHit");
static_assert(offsetof(UMeshPartitionComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UMeshPartitionComponent::OnComponentBeginOverlap");
static_assert(offsetof(UMeshPartitionComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UMeshPartitionComponent::OnComponentEndOverlap");
static_assert(offsetof(UMeshPartitionComponent, OnComponentWake) == 1323, "Offset mismatch for UMeshPartitionComponent::OnComponentWake");
static_assert(offsetof(UMeshPartitionComponent, OnComponentSleep) == 1324, "Offset mismatch for UMeshPartitionComponent::OnComponentSleep");
static_assert(offsetof(UMeshPartitionComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UMeshPartitionComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UMeshPartitionComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UMeshPartitionComponent::OnBeginCursorOver");
static_assert(offsetof(UMeshPartitionComponent, OnEndCursorOver) == 1328, "Offset mismatch for UMeshPartitionComponent::OnEndCursorOver");
static_assert(offsetof(UMeshPartitionComponent, OnClicked) == 1329, "Offset mismatch for UMeshPartitionComponent::OnClicked");
static_assert(offsetof(UMeshPartitionComponent, OnReleased) == 1330, "Offset mismatch for UMeshPartitionComponent::OnReleased");
static_assert(offsetof(UMeshPartitionComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UMeshPartitionComponent::OnInputTouchBegin");
static_assert(offsetof(UMeshPartitionComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UMeshPartitionComponent::OnInputTouchEnd");
static_assert(offsetof(UMeshPartitionComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UMeshPartitionComponent::OnInputTouchEnter");
static_assert(offsetof(UMeshPartitionComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UMeshPartitionComponent::OnInputTouchLeave");
static_assert(offsetof(UMeshPartitionComponent, OnTouchBegan) == 1335, "Offset mismatch for UMeshPartitionComponent::OnTouchBegan");
static_assert(offsetof(UMeshPartitionComponent, OnTouchEnded) == 1336, "Offset mismatch for UMeshPartitionComponent::OnTouchEnded");
static_assert(offsetof(UMeshPartitionComponent, OnTouchEntered) == 1337, "Offset mismatch for UMeshPartitionComponent::OnTouchEntered");
static_assert(offsetof(UMeshPartitionComponent, OnTouchExited) == 1338, "Offset mismatch for UMeshPartitionComponent::OnTouchExited");
static_assert(offsetof(UMeshPartitionComponent, LODParentPrimitive) == 1368, "Offset mismatch for UMeshPartitionComponent::LODParentPrimitive");

// /Script/MeshPartition.MeshPartitionDataLayerContainer
// Kind: Class; super: Actor
class UMeshPartitionDataLayerContainer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TMap<void*, void*> PerDefinitionBuildVariantDataLayers; // 0x0270 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMeshPartitionDataLayerContainer, PerDefinitionBuildVariantDataLayers) == 624, "Offset mismatch for UMeshPartitionDataLayerContainer::PerDefinitionBuildVariantDataLayers");

// /Script/MeshPartition.MeshPartitionDefinition
// Kind: Class; super: DataAsset
class UMeshPartitionDefinition
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Material; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ModifierTypePriorities; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CompiledSectionBuildVariants; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PerPlatformRuntimeSettings[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t ChannelMap[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    float ChannelTexelSize; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float MaterialCacheTexelSize; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChannelUVLayoutMethod; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A1
    float ChannelVEUVSamplesPerSquareMeter; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChannelVEUVVoxelCount[0xC]; // 0x00A8 (Size: 0xC, Type: StructProperty)
    std::uint8_t ChannelPlaneProjectionNormalSource; // 0x00B4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B5
    std::uint8_t ChannelPlaneProjectionFixedNormal[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    TArray<void*> PhysicalMaterialChannels; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    void* DefaultPhysicalMaterial; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PreviewSectionBuildVariant[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshPartitionDefinition, Material) == 72, "Offset mismatch for UMeshPartitionDefinition::Material");
static_assert(offsetof(UMeshPartitionDefinition, ModifierTypePriorities) == 80, "Offset mismatch for UMeshPartitionDefinition::ModifierTypePriorities");
static_assert(offsetof(UMeshPartitionDefinition, CompiledSectionBuildVariants) == 96, "Offset mismatch for UMeshPartitionDefinition::CompiledSectionBuildVariants");
static_assert(offsetof(UMeshPartitionDefinition, PerPlatformRuntimeSettings) == 112, "Offset mismatch for UMeshPartitionDefinition::PerPlatformRuntimeSettings");
static_assert(offsetof(UMeshPartitionDefinition, ChannelMap) == 136, "Offset mismatch for UMeshPartitionDefinition::ChannelMap");
static_assert(offsetof(UMeshPartitionDefinition, ChannelTexelSize) == 152, "Offset mismatch for UMeshPartitionDefinition::ChannelTexelSize");
static_assert(offsetof(UMeshPartitionDefinition, MaterialCacheTexelSize) == 156, "Offset mismatch for UMeshPartitionDefinition::MaterialCacheTexelSize");
static_assert(offsetof(UMeshPartitionDefinition, ChannelUVLayoutMethod) == 160, "Offset mismatch for UMeshPartitionDefinition::ChannelUVLayoutMethod");
static_assert(offsetof(UMeshPartitionDefinition, ChannelVEUVSamplesPerSquareMeter) == 164, "Offset mismatch for UMeshPartitionDefinition::ChannelVEUVSamplesPerSquareMeter");
static_assert(offsetof(UMeshPartitionDefinition, ChannelVEUVVoxelCount) == 168, "Offset mismatch for UMeshPartitionDefinition::ChannelVEUVVoxelCount");
static_assert(offsetof(UMeshPartitionDefinition, ChannelPlaneProjectionNormalSource) == 180, "Offset mismatch for UMeshPartitionDefinition::ChannelPlaneProjectionNormalSource");
static_assert(offsetof(UMeshPartitionDefinition, ChannelPlaneProjectionFixedNormal) == 184, "Offset mismatch for UMeshPartitionDefinition::ChannelPlaneProjectionFixedNormal");
static_assert(offsetof(UMeshPartitionDefinition, PhysicalMaterialChannels) == 208, "Offset mismatch for UMeshPartitionDefinition::PhysicalMaterialChannels");
static_assert(offsetof(UMeshPartitionDefinition, DefaultPhysicalMaterial) == 224, "Offset mismatch for UMeshPartitionDefinition::DefaultPhysicalMaterial");
static_assert(offsetof(UMeshPartitionDefinition, PreviewSectionBuildVariant) == 232, "Offset mismatch for UMeshPartitionDefinition::PreviewSectionBuildVariant");

// /Script/MeshPartition.MeshPartitionStaticMeshComponent
// Kind: Class; super: StaticMeshComponent
class UMeshPartitionStaticMeshComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    std::int32_t ForcedLodModel; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MinLOD; // 0x05DC (Size: 0x4, Type: IntProperty)
    std::int32_t SubDivisionStepSize; // 0x05E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t WireframeColorOverride[0x4]; // 0x05E4 (Size: 0x4, Type: StructProperty)
    void* StaticMesh; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WorldPositionOffsetDisableDistance; // 0x05F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDisallowNanite; // 0x05F4 (Size: 0x1, Type: BoolProperty)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffset (shared storage)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffsetInRayTracing (shared storage)
    // 0x05F4 BoolProperty bForceDisableNanite (shared storage)
    // 0x05F4 BoolProperty bForceNaniteForMasked (shared storage)
    // 0x05F4 BoolProperty bWorldPositionOffsetWritesVelocity (shared storage)
    std::uint8_t bForceNavigationObstacle; // 0x05F5 (Size: 0x1, Type: BoolProperty)
    // 0x05F5 BoolProperty bOverrideMinLOD (shared storage)
    // 0x05F5 BoolProperty bOverrideNavAreaClass (shared storage)
    // 0x05F5 BoolProperty bOverrideNavigationExport (shared storage)
    // 0x05F5 BoolProperty bOverrideWireframeColor (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x05F6
    void* NavAreaClass; // 0x05F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCastDistanceFieldIndirectShadow; // 0x0600 (Size: 0x1, Type: BoolProperty)
    // 0x0600 BoolProperty bDisallowMeshPaintPerInstance (shared storage)
    // 0x0600 BoolProperty bIgnoreInstanceForTextureStreaming (shared storage)
    // 0x0600 BoolProperty bOverrideDistanceFieldSelfShadowBias (shared storage)
    // 0x0600 BoolProperty bOverrideLightMapRes (shared storage)
    // 0x0600 BoolProperty bSortTriangles (shared storage)
    // 0x0600 BoolProperty bUseDefaultCollision (shared storage)
    // 0x0600 BoolProperty bUseSubDivisions (shared storage)
    std::uint8_t bEnableTextureColorMeshPainting; // 0x0601 (Size: 0x1, Type: BoolProperty)
    // 0x0601 BoolProperty bEnableVertexColorMeshPainting (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureCoordinateIndex (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureResolution (shared storage)
    // 0x0601 BoolProperty bReverseCulling (shared storage)
    // 0x0601 BoolProperty bWritesToMaterialCache (shared storage)
    std::uint8_t Pad_0002[0x2]; // 0x0602
    std::int32_t OverriddenMeshPaintTextureCoordinateIndex; // 0x0604 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenMeshPaintTextureResolution; // 0x0608 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenLightMapRes; // 0x060C (Size: 0x4, Type: IntProperty)
    void* MeshPaintTextureCooked; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* MeshPaintTextureOverride; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialCacheTileCount[0x8]; // 0x0620 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaterialCacheUVRegion[0x14]; // 0x0628 (Size: 0x14, Type: StructProperty)
    std::int32_t MaterialCacheUVCoordinateIndex; // 0x063C (Size: 0x4, Type: IntProperty)
    TArray<void*> MaterialCacheTextures; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    float DistanceFieldIndirectShadowMinVisibility; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float DistanceFieldSelfShadowBias; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float StreamingDistanceMultiplier; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float NanitePixelProgrammableDistance; // 0x065C (Size: 0x4, Type: FloatProperty)
    TArray<void*> LODData; // 0x0660 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StreamingTextureData; // 0x0670 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LightmassSettings[0x1]; // 0x0680 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshPartitionStaticMeshComponent, ForcedLodModel) == 1496, "Offset mismatch for UMeshPartitionStaticMeshComponent::ForcedLodModel");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MinLOD) == 1500, "Offset mismatch for UMeshPartitionStaticMeshComponent::MinLOD");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, SubDivisionStepSize) == 1504, "Offset mismatch for UMeshPartitionStaticMeshComponent::SubDivisionStepSize");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, WireframeColorOverride) == 1508, "Offset mismatch for UMeshPartitionStaticMeshComponent::WireframeColorOverride");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, StaticMesh) == 1512, "Offset mismatch for UMeshPartitionStaticMeshComponent::StaticMesh");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, WorldPositionOffsetDisableDistance) == 1520, "Offset mismatch for UMeshPartitionStaticMeshComponent::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, bDisallowNanite) == 1524, "Offset mismatch for UMeshPartitionStaticMeshComponent::bDisallowNanite");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, bForceNavigationObstacle) == 1525, "Offset mismatch for UMeshPartitionStaticMeshComponent::bForceNavigationObstacle");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, NavAreaClass) == 1528, "Offset mismatch for UMeshPartitionStaticMeshComponent::NavAreaClass");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, bCastDistanceFieldIndirectShadow) == 1536, "Offset mismatch for UMeshPartitionStaticMeshComponent::bCastDistanceFieldIndirectShadow");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, bEnableTextureColorMeshPainting) == 1537, "Offset mismatch for UMeshPartitionStaticMeshComponent::bEnableTextureColorMeshPainting");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, OverriddenMeshPaintTextureCoordinateIndex) == 1540, "Offset mismatch for UMeshPartitionStaticMeshComponent::OverriddenMeshPaintTextureCoordinateIndex");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, OverriddenMeshPaintTextureResolution) == 1544, "Offset mismatch for UMeshPartitionStaticMeshComponent::OverriddenMeshPaintTextureResolution");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, OverriddenLightMapRes) == 1548, "Offset mismatch for UMeshPartitionStaticMeshComponent::OverriddenLightMapRes");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MeshPaintTextureCooked) == 1552, "Offset mismatch for UMeshPartitionStaticMeshComponent::MeshPaintTextureCooked");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MeshPaintTextureOverride) == 1560, "Offset mismatch for UMeshPartitionStaticMeshComponent::MeshPaintTextureOverride");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MaterialCacheTileCount) == 1568, "Offset mismatch for UMeshPartitionStaticMeshComponent::MaterialCacheTileCount");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MaterialCacheUVRegion) == 1576, "Offset mismatch for UMeshPartitionStaticMeshComponent::MaterialCacheUVRegion");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MaterialCacheUVCoordinateIndex) == 1596, "Offset mismatch for UMeshPartitionStaticMeshComponent::MaterialCacheUVCoordinateIndex");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, MaterialCacheTextures) == 1600, "Offset mismatch for UMeshPartitionStaticMeshComponent::MaterialCacheTextures");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility) == 1616, "Offset mismatch for UMeshPartitionStaticMeshComponent::DistanceFieldIndirectShadowMinVisibility");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, DistanceFieldSelfShadowBias) == 1620, "Offset mismatch for UMeshPartitionStaticMeshComponent::DistanceFieldSelfShadowBias");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, StreamingDistanceMultiplier) == 1624, "Offset mismatch for UMeshPartitionStaticMeshComponent::StreamingDistanceMultiplier");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, NanitePixelProgrammableDistance) == 1628, "Offset mismatch for UMeshPartitionStaticMeshComponent::NanitePixelProgrammableDistance");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, LODData) == 1632, "Offset mismatch for UMeshPartitionStaticMeshComponent::LODData");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, StreamingTextureData) == 1648, "Offset mismatch for UMeshPartitionStaticMeshComponent::StreamingTextureData");
static_assert(offsetof(UMeshPartitionStaticMeshComponent, LightmassSettings) == 1664, "Offset mismatch for UMeshPartitionStaticMeshComponent::LightmassSettings");

// /Script/MeshPartition.ModifierBlueprintInterface
// Kind: Class; super: Interface
class UModifierBlueprintInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshPartition.Settings
// Kind: Class; super: DeveloperSettings
class USettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftObjectPtr<void> DefaultDefinition; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USettings, DefaultDefinition) == 48, "Offset mismatch for USettings::DefaultDefinition");

// /Script/MeshPartition.SplineModifierBlueprintInterface
// Kind: Class; super: Interface
class USplineModifierBlueprintInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshPartition.TransformerPipeline
// Kind: Class; super: DataAsset
class UTransformerPipeline
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Transformers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTransformerPipeline, Transformers) == 40, "Offset mismatch for UTransformerPipeline::Transformers");
