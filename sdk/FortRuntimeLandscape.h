/**
 * decamp dumper generated SDK
 * Package: /Script/FortRuntimeLandscape
 */
#pragma once
#include "Basic.h"

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCachedComponentKey
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeCachedComponentKey
{
public:
    std::uint8_t UniqueID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComponentKey[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeCachedComponentKey, UniqueID) == 0, "Offset mismatch for FFortRuntimeLandscapeCachedComponentKey::UniqueID");
static_assert(offsetof(FFortRuntimeLandscapeCachedComponentKey, ComponentKey) == 4, "Offset mismatch for FFortRuntimeLandscapeCachedComponentKey::ComponentKey");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCachedPlatformData
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeCachedPlatformData
{
public:
    std::uint8_t PrecachedSettings[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t PrecachedData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeCachedPlatformData, PrecachedSettings) == 0, "Offset mismatch for FFortRuntimeLandscapeCachedPlatformData::PrecachedSettings");
static_assert(offsetof(FFortRuntimeLandscapeCachedPlatformData, PrecachedData) == 32, "Offset mismatch for FFortRuntimeLandscapeCachedPlatformData::PrecachedData");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCombinedMaterialCacheKey
// Kind: ScriptStruct; super: FortRuntimeLandscapeMaterialCacheKeyBase
struct FFortRuntimeLandscapeCombinedMaterialCacheKey
{
public:
    TArray<void*> OrderedLayers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t KeyHash; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bIsTextureSorted; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialCacheKey, OrderedLayers) == 0, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialCacheKey::OrderedLayers");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialCacheKey, KeyHash) == 16, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialCacheKey::KeyHash");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialCacheKey, bIsTextureSorted) == 20, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialCacheKey::bIsTextureSorted");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCombinedMaterialInstance
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeCombinedMaterialInstance
{
public:
    TArray<void*> LandscapeInfos; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* MaterialInstance; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* CPUReadbackMaterialInstance; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* CPUReadbackMID; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::int32_t VisibilityLayerIndex; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowRenderMaterials; // 0x002C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialInstance, LandscapeInfos) == 0, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialInstance::LandscapeInfos");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialInstance, MaterialInstance) == 16, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialInstance::MaterialInstance");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialInstance, CPUReadbackMaterialInstance) == 24, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialInstance::CPUReadbackMaterialInstance");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialInstance, CPUReadbackMID) == 32, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialInstance::CPUReadbackMID");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialInstance, VisibilityLayerIndex) == 40, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialInstance::VisibilityLayerIndex");
static_assert(offsetof(FFortRuntimeLandscapeCombinedMaterialInstance, bAllowRenderMaterials) == 44, "Offset mismatch for FFortRuntimeLandscapeCombinedMaterialInstance::bAllowRenderMaterials");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeComponentGroup
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeComponentGroup
{
public:
    TMap<void*, void*> TrackedComponents; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TrackedCachingComponents; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeComponentGroup, TrackedComponents) == 0, "Offset mismatch for FFortRuntimeLandscapeComponentGroup::TrackedComponents");
static_assert(offsetof(FFortRuntimeLandscapeComponentGroup, TrackedCachingComponents) == 16, "Offset mismatch for FFortRuntimeLandscapeComponentGroup::TrackedCachingComponents");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeComponentPrecacheSettings
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeComponentPrecacheSettings
{
public:
    std::uint8_t bPrecacheHeights; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrecachePhysicalMaterials; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrecacheGrass; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrecacheAllWeightmaps; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> PrecacheWeightmaps; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPrecacheCustomRenders; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldKeepHeights; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldKeepPhysicalMaterials; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bPrecacheHeights) == 0, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bPrecacheHeights");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bPrecachePhysicalMaterials) == 1, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bPrecachePhysicalMaterials");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bPrecacheGrass) == 2, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bPrecacheGrass");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bPrecacheAllWeightmaps) == 3, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bPrecacheAllWeightmaps");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, PrecacheWeightmaps) == 8, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::PrecacheWeightmaps");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bPrecacheCustomRenders) == 24, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bPrecacheCustomRenders");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bShouldKeepHeights) == 25, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bShouldKeepHeights");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecacheSettings, bShouldKeepPhysicalMaterials) == 26, "Offset mismatch for FFortRuntimeLandscapeComponentPrecacheSettings::bShouldKeepPhysicalMaterials");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeComponentPrecachedData
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeComponentPrecachedData
{
public:
    std::uint32_t ComponentQuads; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x2C]; // 0x0004
    TArray<void*> SerializedWeightmaps; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    TArray<void*> SerializedGrassReferences; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SerializedPhysicalMaterials; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SerializedCustomRenders; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeComponentPrecachedData, ComponentQuads) == 0, "Offset mismatch for FFortRuntimeLandscapeComponentPrecachedData::ComponentQuads");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecachedData, SerializedWeightmaps) == 48, "Offset mismatch for FFortRuntimeLandscapeComponentPrecachedData::SerializedWeightmaps");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecachedData, SerializedGrassReferences) == 80, "Offset mismatch for FFortRuntimeLandscapeComponentPrecachedData::SerializedGrassReferences");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecachedData, SerializedPhysicalMaterials) == 96, "Offset mismatch for FFortRuntimeLandscapeComponentPrecachedData::SerializedPhysicalMaterials");
static_assert(offsetof(FFortRuntimeLandscapeComponentPrecachedData, SerializedCustomRenders) == 112, "Offset mismatch for FFortRuntimeLandscapeComponentPrecachedData::SerializedCustomRenders");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeContainer
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeContainer
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t PendingTrackedLandscapes[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t TrackedLandscapes[0x10]; // 0x0070 (Size: 0x10, Type: SetProperty)
    std::uint8_t TrackedLandscapeProxies[0x10]; // 0x0080 (Size: 0x10, Type: SetProperty)
    std::uint8_t DelayedLandscapeProxies[0x10]; // 0x0090 (Size: 0x10, Type: SetProperty)
    std::uint8_t DelayedDestroyComponents[0x10]; // 0x00A0 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> TrackedComponentGroups; // 0x00B0 (Size: 0x10, Type: MapProperty)
    void* MainWorld; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeContainer, PendingTrackedLandscapes) == 96, "Offset mismatch for FFortRuntimeLandscapeContainer::PendingTrackedLandscapes");
static_assert(offsetof(FFortRuntimeLandscapeContainer, TrackedLandscapes) == 112, "Offset mismatch for FFortRuntimeLandscapeContainer::TrackedLandscapes");
static_assert(offsetof(FFortRuntimeLandscapeContainer, TrackedLandscapeProxies) == 128, "Offset mismatch for FFortRuntimeLandscapeContainer::TrackedLandscapeProxies");
static_assert(offsetof(FFortRuntimeLandscapeContainer, DelayedLandscapeProxies) == 144, "Offset mismatch for FFortRuntimeLandscapeContainer::DelayedLandscapeProxies");
static_assert(offsetof(FFortRuntimeLandscapeContainer, DelayedDestroyComponents) == 160, "Offset mismatch for FFortRuntimeLandscapeContainer::DelayedDestroyComponents");
static_assert(offsetof(FFortRuntimeLandscapeContainer, TrackedComponentGroups) == 176, "Offset mismatch for FFortRuntimeLandscapeContainer::TrackedComponentGroups");
static_assert(offsetof(FFortRuntimeLandscapeContainer, MainWorld) == 192, "Offset mismatch for FFortRuntimeLandscapeContainer::MainWorld");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCustomOutputInfo
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeCustomOutputInfo
{
public:
    std::int32_t InputIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t OutputIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsConstant; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    float ConstantValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    void* InputObject; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeCustomOutputInfo, InputIndex) == 0, "Offset mismatch for FFortRuntimeLandscapeCustomOutputInfo::InputIndex");
static_assert(offsetof(FFortRuntimeLandscapeCustomOutputInfo, OutputIndex) == 4, "Offset mismatch for FFortRuntimeLandscapeCustomOutputInfo::OutputIndex");
static_assert(offsetof(FFortRuntimeLandscapeCustomOutputInfo, Name) == 8, "Offset mismatch for FFortRuntimeLandscapeCustomOutputInfo::Name");
static_assert(offsetof(FFortRuntimeLandscapeCustomOutputInfo, bIsConstant) == 12, "Offset mismatch for FFortRuntimeLandscapeCustomOutputInfo::bIsConstant");
static_assert(offsetof(FFortRuntimeLandscapeCustomOutputInfo, ConstantValue) == 16, "Offset mismatch for FFortRuntimeLandscapeCustomOutputInfo::ConstantValue");
static_assert(offsetof(FFortRuntimeLandscapeCustomOutputInfo, InputObject) == 24, "Offset mismatch for FFortRuntimeLandscapeCustomOutputInfo::InputObject");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCustomRenderIdentifier
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeCustomRenderIdentifier
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t MipIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeCustomRenderIdentifier, Identifier) == 0, "Offset mismatch for FFortRuntimeLandscapeCustomRenderIdentifier::Identifier");
static_assert(offsetof(FFortRuntimeLandscapeCustomRenderIdentifier, MipIndex) == 4, "Offset mismatch for FFortRuntimeLandscapeCustomRenderIdentifier::MipIndex");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeGrassAndPhysics
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeGrassAndPhysics
{
public:
    std::uint16_t ShaderPlatform; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TArray<void*> AvailableGrasses; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AvailablePhysicsMaterials; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SavedMaterialID[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeGrassAndPhysics, ShaderPlatform) == 0, "Offset mismatch for FFortRuntimeLandscapeGrassAndPhysics::ShaderPlatform");
static_assert(offsetof(FFortRuntimeLandscapeGrassAndPhysics, AvailableGrasses) == 8, "Offset mismatch for FFortRuntimeLandscapeGrassAndPhysics::AvailableGrasses");
static_assert(offsetof(FFortRuntimeLandscapeGrassAndPhysics, AvailablePhysicsMaterials) == 24, "Offset mismatch for FFortRuntimeLandscapeGrassAndPhysics::AvailablePhysicsMaterials");
static_assert(offsetof(FFortRuntimeLandscapeGrassAndPhysics, SavedMaterialID) == 40, "Offset mismatch for FFortRuntimeLandscapeGrassAndPhysics::SavedMaterialID");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeGroupKey
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeGroupKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortRuntimeLandscape.FortRuntimeLandscapeLayerInfo
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeLayerInfo
{
public:
    void* LandscapeInfo; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LayerName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeightmapTextureIndex; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t WeightmapTextureChannel; // 0x000D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000E
    std::uint8_t WeightmapTextureMask[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    void* PhysicsMaterial; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    float MinimumCollisionRelevanceWeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, LandscapeInfo) == 0, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::LandscapeInfo");
static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, LayerName) == 8, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::LayerName");
static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, WeightmapTextureIndex) == 12, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::WeightmapTextureIndex");
static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, WeightmapTextureChannel) == 13, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::WeightmapTextureChannel");
static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, WeightmapTextureMask) == 16, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::WeightmapTextureMask");
static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, PhysicsMaterial) == 32, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::PhysicsMaterial");
static_assert(offsetof(FFortRuntimeLandscapeLayerInfo, MinimumCollisionRelevanceWeight) == 40, "Offset mismatch for FFortRuntimeLandscapeLayerInfo::MinimumCollisionRelevanceWeight");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeLocalComponentReference
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeLocalComponentReference
{
public:
    void* CachedComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OverrideComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName ComponentName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeLocalComponentReference, CachedComponent) == 0, "Offset mismatch for FFortRuntimeLandscapeLocalComponentReference::CachedComponent");
static_assert(offsetof(FFortRuntimeLandscapeLocalComponentReference, OverrideComponent) == 8, "Offset mismatch for FFortRuntimeLandscapeLocalComponentReference::OverrideComponent");
static_assert(offsetof(FFortRuntimeLandscapeLocalComponentReference, ComponentName) == 16, "Offset mismatch for FFortRuntimeLandscapeLocalComponentReference::ComponentName");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeMaterialCache
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeMaterialCache
{
public:
    TMap<void*, void*> MaterialCombinations; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeMaterialCache, MaterialCombinations) == 0, "Offset mismatch for FFortRuntimeLandscapeMaterialCache::MaterialCombinations");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeMaterialCacheKeyBase
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeMaterialCacheKeyBase
{
public:
    TArray<void*> OrderedLayers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t KeyHash; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bIsTextureSorted; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeMaterialCacheKeyBase, OrderedLayers) == 0, "Offset mismatch for FFortRuntimeLandscapeMaterialCacheKeyBase::OrderedLayers");
static_assert(offsetof(FFortRuntimeLandscapeMaterialCacheKeyBase, KeyHash) == 16, "Offset mismatch for FFortRuntimeLandscapeMaterialCacheKeyBase::KeyHash");
static_assert(offsetof(FFortRuntimeLandscapeMaterialCacheKeyBase, bIsTextureSorted) == 20, "Offset mismatch for FFortRuntimeLandscapeMaterialCacheKeyBase::bIsTextureSorted");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeMaterialInstanceCacheKey
// Kind: ScriptStruct; super: FortRuntimeLandscapeMaterialCacheKeyBase
struct FFortRuntimeLandscapeMaterialInstanceCacheKey
{
public:
    TArray<void*> OrderedLayers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t KeyHash; // 0x0010 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bIsTextureSorted; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeMaterialInstanceCacheKey, OrderedLayers) == 0, "Offset mismatch for FFortRuntimeLandscapeMaterialInstanceCacheKey::OrderedLayers");
static_assert(offsetof(FFortRuntimeLandscapeMaterialInstanceCacheKey, KeyHash) == 16, "Offset mismatch for FFortRuntimeLandscapeMaterialInstanceCacheKey::KeyHash");
static_assert(offsetof(FFortRuntimeLandscapeMaterialInstanceCacheKey, bIsTextureSorted) == 20, "Offset mismatch for FFortRuntimeLandscapeMaterialInstanceCacheKey::bIsTextureSorted");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeModification
// Kind: ScriptStruct; super: none
struct FFortRuntimeLandscapeModification
{
public:
    std::uint8_t LayerName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWeightmapModification; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHeightmapModification; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSortPriority; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::int32_t SortPriority; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t PrimitiveComponent[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideBlendOperation; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendOperation; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x002A
    void* OverrideMaterial; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OverrideBounds[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::int32_t ModificationID; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x1C]; // 0x0064
    TArray<void*> SkipBoundsIDs; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortRuntimeLandscapeModification, LayerName) == 0, "Offset mismatch for FFortRuntimeLandscapeModification::LayerName");
static_assert(offsetof(FFortRuntimeLandscapeModification, bWeightmapModification) == 4, "Offset mismatch for FFortRuntimeLandscapeModification::bWeightmapModification");
static_assert(offsetof(FFortRuntimeLandscapeModification, bHeightmapModification) == 5, "Offset mismatch for FFortRuntimeLandscapeModification::bHeightmapModification");
static_assert(offsetof(FFortRuntimeLandscapeModification, bUseSortPriority) == 6, "Offset mismatch for FFortRuntimeLandscapeModification::bUseSortPriority");
static_assert(offsetof(FFortRuntimeLandscapeModification, SortPriority) == 8, "Offset mismatch for FFortRuntimeLandscapeModification::SortPriority");
static_assert(offsetof(FFortRuntimeLandscapeModification, PrimitiveComponent) == 16, "Offset mismatch for FFortRuntimeLandscapeModification::PrimitiveComponent");
static_assert(offsetof(FFortRuntimeLandscapeModification, bOverrideBlendOperation) == 40, "Offset mismatch for FFortRuntimeLandscapeModification::bOverrideBlendOperation");
static_assert(offsetof(FFortRuntimeLandscapeModification, BlendOperation) == 41, "Offset mismatch for FFortRuntimeLandscapeModification::BlendOperation");
static_assert(offsetof(FFortRuntimeLandscapeModification, OverrideMaterial) == 48, "Offset mismatch for FFortRuntimeLandscapeModification::OverrideMaterial");
static_assert(offsetof(FFortRuntimeLandscapeModification, OverrideBounds) == 56, "Offset mismatch for FFortRuntimeLandscapeModification::OverrideBounds");
static_assert(offsetof(FFortRuntimeLandscapeModification, ModificationID) == 96, "Offset mismatch for FFortRuntimeLandscapeModification::ModificationID");
static_assert(offsetof(FFortRuntimeLandscapeModification, SkipBoundsIDs) == 128, "Offset mismatch for FFortRuntimeLandscapeModification::SkipBoundsIDs");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCachedComponentData
// Kind: Class; super: PrimaryDataAsset
class UFortRuntimeLandscapeCachedComponentData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> PrecachedData; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeCachedComponentData, PrecachedData) == 40, "Offset mismatch for UFortRuntimeLandscapeCachedComponentData::PrecachedData");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCachingComponent
// Kind: Class; super: FortRuntimeLandscapeComponentBase
class UFortRuntimeLandscapeCachingComponent
{
public:
    std::uint8_t Pad_0000[0x2D0]; // 0x0000
    std::uint8_t PrecacheSettings[0x20]; // 0x02D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t PrecachedData[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeCachingComponent, PrecacheSettings) == 720, "Offset mismatch for UFortRuntimeLandscapeCachingComponent::PrecacheSettings");
static_assert(offsetof(UFortRuntimeLandscapeCachingComponent, PrecachedData) == 752, "Offset mismatch for UFortRuntimeLandscapeCachingComponent::PrecachedData");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCombinedMaterial
// Kind: Class; super: Object
class UFortRuntimeLandscapeCombinedMaterial
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> LayerNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LandscapeInfos; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    void* MaterialBase; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* CPUReadbackMaterialBase; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> MaterialInstances; // 0x0058 (Size: 0x10, Type: MapProperty)
    TArray<void*> GrassAndPhysicsTypes; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowRenderMaterials; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, LayerNames) == 40, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::LayerNames");
static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, LandscapeInfos) == 56, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::LandscapeInfos");
static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, MaterialBase) == 72, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::MaterialBase");
static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, CPUReadbackMaterialBase) == 80, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::CPUReadbackMaterialBase");
static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, MaterialInstances) == 88, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::MaterialInstances");
static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, GrassAndPhysicsTypes) == 104, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::GrassAndPhysicsTypes");
static_assert(offsetof(UFortRuntimeLandscapeCombinedMaterial, bAllowRenderMaterials) == 120, "Offset mismatch for UFortRuntimeLandscapeCombinedMaterial::bAllowRenderMaterials");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeComponent
// Kind: Class; super: FortRuntimeLandscapeCachingComponent
class UFortRuntimeLandscapeComponent
{
public:
    std::uint8_t Pad_0000[0x3C0]; // 0x0000
    std::uint8_t bEnableLandscapeModifications; // 0x03C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x03C1
    TWeakObjectPtr<void> TargetCachingComponent; // 0x03C4 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CombinedMaterial; // 0x03CC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03D4
    void* MaterialLibrary; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* CPUReadbackMID; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultMaterialKey[0x18]; // 0x03E8 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> CachedDynamicMaterials; // 0x0400 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeComponent, bEnableLandscapeModifications) == 960, "Offset mismatch for UFortRuntimeLandscapeComponent::bEnableLandscapeModifications");
static_assert(offsetof(UFortRuntimeLandscapeComponent, TargetCachingComponent) == 964, "Offset mismatch for UFortRuntimeLandscapeComponent::TargetCachingComponent");
static_assert(offsetof(UFortRuntimeLandscapeComponent, CombinedMaterial) == 972, "Offset mismatch for UFortRuntimeLandscapeComponent::CombinedMaterial");
static_assert(offsetof(UFortRuntimeLandscapeComponent, MaterialLibrary) == 984, "Offset mismatch for UFortRuntimeLandscapeComponent::MaterialLibrary");
static_assert(offsetof(UFortRuntimeLandscapeComponent, CPUReadbackMID) == 992, "Offset mismatch for UFortRuntimeLandscapeComponent::CPUReadbackMID");
static_assert(offsetof(UFortRuntimeLandscapeComponent, DefaultMaterialKey) == 1000, "Offset mismatch for UFortRuntimeLandscapeComponent::DefaultMaterialKey");
static_assert(offsetof(UFortRuntimeLandscapeComponent, CachedDynamicMaterials) == 1024, "Offset mismatch for UFortRuntimeLandscapeComponent::CachedDynamicMaterials");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeComponentBase
// Kind: Class; super: SceneComponent
class UFortRuntimeLandscapeComponentBase
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    TWeakObjectPtr<void> PairedLandscapeProxy; // 0x0240 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PairedLandscapeComponent; // 0x0248 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PairedLandscapeCollisionComponent; // 0x0250 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CachedLocalBox[0x38]; // 0x0258 (Size: 0x38, Type: StructProperty)
    std::uint8_t ComponentKey[0x8]; // 0x0290 (Size: 0x8, Type: StructProperty)
    std::uint8_t ComponentBase[0x8]; // 0x0298 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubTextureOffset[0x8]; // 0x02A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubTextureSize[0x8]; // 0x02A8 (Size: 0x8, Type: StructProperty)
    std::int32_t ComponentQuadSize; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::int32_t ComponentVertSize; // 0x02B4 (Size: 0x4, Type: IntProperty)
    FString DebugString; // 0x02B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeComponentBase, PairedLandscapeProxy) == 576, "Offset mismatch for UFortRuntimeLandscapeComponentBase::PairedLandscapeProxy");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, PairedLandscapeComponent) == 584, "Offset mismatch for UFortRuntimeLandscapeComponentBase::PairedLandscapeComponent");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, PairedLandscapeCollisionComponent) == 592, "Offset mismatch for UFortRuntimeLandscapeComponentBase::PairedLandscapeCollisionComponent");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, CachedLocalBox) == 600, "Offset mismatch for UFortRuntimeLandscapeComponentBase::CachedLocalBox");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, ComponentKey) == 656, "Offset mismatch for UFortRuntimeLandscapeComponentBase::ComponentKey");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, ComponentBase) == 664, "Offset mismatch for UFortRuntimeLandscapeComponentBase::ComponentBase");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, SubTextureOffset) == 672, "Offset mismatch for UFortRuntimeLandscapeComponentBase::SubTextureOffset");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, SubTextureSize) == 680, "Offset mismatch for UFortRuntimeLandscapeComponentBase::SubTextureSize");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, ComponentQuadSize) == 688, "Offset mismatch for UFortRuntimeLandscapeComponentBase::ComponentQuadSize");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, ComponentVertSize) == 692, "Offset mismatch for UFortRuntimeLandscapeComponentBase::ComponentVertSize");
static_assert(offsetof(UFortRuntimeLandscapeComponentBase, DebugString) == 696, "Offset mismatch for UFortRuntimeLandscapeComponentBase::DebugString");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeCustomMaterial
// Kind: Class; super: Material
class UFortRuntimeLandscapeCustomMaterial
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* PhysMaterial; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* PhysMaterialMask; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* PhysicalMaterialMap; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0140
    TArray<void*> RenderTracePhysicalMaterialOutputs; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaterialDomain; // 0x0188 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BlendMode; // 0x0189 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DecalBlendMode; // 0x018A (Size: 0x1, Type: ByteProperty)
    std::uint8_t MaterialDecalResponse; // 0x018B (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x4]; // 0x018C
    std::uint8_t NaniteOverrideMaterial[0x30]; // 0x0190 (Size: 0x30, Type: StructProperty)
    std::uint8_t DisplacementScaling[0x8]; // 0x01C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplacementFadeRange[0x8]; // 0x01C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShadingModel; // 0x01D0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bCastDynamicShadowAsMasked; // 0x01D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShadingModels[0x2]; // 0x01D2 (Size: 0x2, Type: StructProperty)
    float OpacityMaskClipValue; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DitherOpacityMask; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    // 0x01D8 BoolProperty DitheredLODTransition (shared storage)
    // 0x01D8 BoolProperty TwoSided (shared storage)
    // 0x01D8 BoolProperty bContactShadows (shared storage)
    // 0x01D8 BoolProperty bEnableResponsiveAA (shared storage)
    // 0x01D8 BoolProperty bEnableSeparateTranslucency (shared storage)
    // 0x01D8 BoolProperty bIsThinSurface (shared storage)
    // 0x01D8 BoolProperty bScreenSpaceReflections (shared storage)
    std::uint8_t bAllowNegativeEmissiveColor; // 0x01D9 (Size: 0x1, Type: BoolProperty)
    // 0x01D9 BoolProperty bEnableDisplacementFade (shared storage)
    // 0x01D9 BoolProperty bEnableTessellation (shared storage)
    // 0x01D9 BoolProperty bHasPixelAnimation (shared storage)
    std::uint8_t TranslucencyPass; // 0x01DA (Size: 0x1, Type: ByteProperty)
    std::uint8_t TranslucencyLightingMode; // 0x01DB (Size: 0x1, Type: ByteProperty)
    std::uint8_t bEnableMobileSeparateTranslucency; // 0x01DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01DD
    std::int32_t NumCustomizedUVs; // 0x01E0 (Size: 0x4, Type: IntProperty)
    float TranslucencyDirectionalLightingIntensity; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float TranslucentShadowDensityScale; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float TranslucentSelfShadowDensityScale; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float TranslucentSelfShadowSecondDensityScale; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float TranslucentSelfShadowSecondOpacity; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float TranslucentBackscatteringExponent; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TranslucentMultipleScatteringExtinction[0x10]; // 0x01FC (Size: 0x10, Type: StructProperty)
    float TranslucentShadowStartOffset; // 0x020C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableDepthTest; // 0x0210 (Size: 0x1, Type: BoolProperty)
    // 0x0210 BoolProperty bGenerateSphericalParticleNormals (shared storage)
    // 0x0210 BoolProperty bSubstrateRoughnessTracking (shared storage)
    // 0x0210 BoolProperty bTangentSpaceNormal (shared storage)
    // 0x0210 BoolProperty bUseEmissiveForDynamicAreaLighting (shared storage)
    // 0x0210 BoolProperty bUsedAsSpecialEngineMaterial (shared storage)
    // 0x0210 BoolProperty bUsedWithSkeletalMesh (shared storage)
    // 0x0210 BoolProperty bWriteOnlyAlpha (shared storage)
    std::uint8_t bUsedWithBeamTrails; // 0x0211 (Size: 0x1, Type: BoolProperty)
    // 0x0211 BoolProperty bUsedWithEditorCompositing (shared storage)
    // 0x0211 BoolProperty bUsedWithMeshDeformer (shared storage)
    // 0x0211 BoolProperty bUsedWithMeshParticles (shared storage)
    // 0x0211 BoolProperty bUsedWithNiagaraMeshParticles (shared storage)
    // 0x0211 BoolProperty bUsedWithNiagaraRibbons (shared storage)
    // 0x0211 BoolProperty bUsedWithNiagaraSprites (shared storage)
    // 0x0211 BoolProperty bUsedWithParticleSprites (shared storage)
    std::uint8_t bRootNodeOverridesDefaultDistortion; // 0x0212 (Size: 0x1, Type: BoolProperty)
    // 0x0212 BoolProperty bUsedWithGeometryCache (shared storage)
    // 0x0212 BoolProperty bUsedWithGeometryCollections (shared storage)
    // 0x0212 BoolProperty bUsedWithInstancedStaticMeshes (shared storage)
    // 0x0212 BoolProperty bUsedWithMorphTargets (shared storage)
    // 0x0212 BoolProperty bUsedWithSplineMeshes (shared storage)
    // 0x0212 BoolProperty bUsedWithStaticLighting (shared storage)
    // 0x0212 BoolProperty bUsesDistortion (shared storage)
    std::uint8_t bUsedWithClothing; // 0x0213 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsedWithHairStrands; // 0x0214 (Size: 0x1, Type: BoolProperty)
    // 0x0214 BoolProperty bUsedWithLidarPointCloud (shared storage)
    // 0x0214 BoolProperty bUsedWithNanite (shared storage)
    // 0x0214 BoolProperty bUsedWithVirtualHeightfieldMesh (shared storage)
    // 0x0214 BoolProperty bUsedWithWater (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0215
    std::uint8_t bUsedWithCurves; // 0x0218 (Size: 0x1, Type: BoolProperty)
    // 0x0218 BoolProperty bUsedWithVoxels (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x0219
    std::uint8_t bUsedWithHeterogeneousVolumes; // 0x021C (Size: 0x1, Type: BoolProperty)
    // 0x021C BoolProperty bUsedWithInstancedSkinnedMesh (shared storage)
    // 0x021C BoolProperty bUsedWithStaticMesh (shared storage)
    // 0x021C BoolProperty bUsedWithVolumetricCloud (shared storage)
    std::uint8_t Pad_0006[0x3]; // 0x021D
    std::uint8_t bAutomaticallySetUsageInEditor; // 0x0220 (Size: 0x1, Type: BoolProperty)
    // 0x0220 BoolProperty bForceCompatibleWithLightFunctionAtlas (shared storage)
    // 0x0220 BoolProperty bFullyRough (shared storage)
    // 0x0220 BoolProperty bUseFullPrecision (shared storage)
    // 0x0220 BoolProperty bUsedWithUI (shared storage)
    std::uint8_t FloatPrecisionMode; // 0x0221 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUseAlphaToCoverage; // 0x0222 (Size: 0x1, Type: BoolProperty)
    // 0x0222 BoolProperty bUseLightmapDirectionality (shared storage)
    std::uint8_t Pad_0007[0x1]; // 0x0223
    std::uint8_t bForwardRenderUsePreintegratedGFForSimpleIBL; // 0x0224 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0225
    std::uint8_t AllowTranslucentCustomDepthWrites; // 0x0228 (Size: 0x1, Type: BoolProperty)
    // 0x0228 BoolProperty Wireframe (shared storage)
    // 0x0228 BoolProperty bAllowFrontLayerTranslucency (shared storage)
    // 0x0228 BoolProperty bCompatibleWithLumenCardSharing (shared storage)
    // 0x0228 BoolProperty bForwardBlendsSkyLightCubemaps (shared storage)
    // 0x0228 BoolProperty bNormalCurvatureToRoughness (shared storage)
    // 0x0228 BoolProperty bUseHQForwardReflections (shared storage)
    // 0x0228 BoolProperty bUsePlanarForwardReflections (shared storage)
    std::uint8_t bAllowTranslucentLocalLightShadow; // 0x0229 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x2]; // 0x022A
    float TranslucentLocalLightShadowQuality; // 0x022C (Size: 0x4, Type: FloatProperty)
    float TranslucentDirectionalLightShadowQuality; // 0x0230 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShadingRate; // 0x0234 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowVariableRateShading; // 0x0235 (Size: 0x1, Type: BoolProperty)
    // 0x0235 BoolProperty bCanMaskedBeAssumedOpaque (shared storage)
    // 0x0235 BoolProperty bEnableExecWire (shared storage)
    // 0x0235 BoolProperty bEnableNewHLSLGenerator (shared storage)
    // 0x0235 BoolProperty bIsFunctionPreviewMaterial (shared storage)
    // 0x0235 BoolProperty bIsMasked (shared storage)
    // 0x0235 BoolProperty bIsPreviewMaterial (shared storage)
    // 0x0235 BoolProperty bUseMaterialAttributes (shared storage)
    std::uint8_t bEnableNewHLSLGeneratorOverridden; // 0x0236 (Size: 0x1, Type: BoolProperty)
    // 0x0236 BoolProperty bMaterialTranslatorProfileOverridden (shared storage)
    std::uint8_t MaterialTranslatorProfile; // 0x0237 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowDevelopmentShaderCompile; // 0x0238 (Size: 0x1, Type: BoolProperty)
    // 0x0238 BoolProperty bApplyCloudFogging (shared storage)
    // 0x0238 BoolProperty bCastRayTracedShadows (shared storage)
    // 0x0238 BoolProperty bComputeFogPerPixel (shared storage)
    // 0x0238 BoolProperty bIsSky (shared storage)
    // 0x0238 BoolProperty bIsTranslucencyVelocityFromDepth (shared storage)
    // 0x0238 BoolProperty bOutputTranslucentVelocity (shared storage)
    // 0x0238 BoolProperty bUseTranslucencyVertexFog (shared storage)
    std::uint8_t bIsMaterialEditorStatsMaterial; // 0x0239 (Size: 0x1, Type: BoolProperty)
    // 0x0239 BoolProperty bRelaxRuntimeVirtualTextureRestrictions (shared storage)
    std::uint8_t BlendableLocation; // 0x023A (Size: 0x1, Type: ByteProperty)
    std::uint8_t BlendableOutputAlpha; // 0x023B (Size: 0x1, Type: BoolProperty)
    std::uint8_t UserSceneTexture[0x4]; // 0x023C (Size: 0x4, Type: NameProperty)
    std::uint8_t UserTextureDivisor[0x8]; // 0x0240 (Size: 0x8, Type: StructProperty)
    std::uint8_t ResolutionRelativeToInput[0x4]; // 0x0248 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDisablePreExposureScale; // 0x024C (Size: 0x1, Type: BoolProperty)
    // 0x024C BoolProperty bEnableStencilTest (shared storage)
    // 0x024C BoolProperty bUsedWithNeuralNetworks (shared storage)
    std::uint8_t StencilCompare; // 0x024D (Size: 0x1, Type: ByteProperty)
    std::uint8_t StencilRefValue; // 0x024E (Size: 0x1, Type: ByteProperty)
    std::int8_t NeuralProfileId; // 0x024F (Size: 0x1, Type: Int8Property)
    std::uint8_t RefractionMode; // 0x0250 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RefractionMethod; // 0x0251 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RefractionCoverageMode; // 0x0252 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PixelDepthOffsetMode; // 0x0253 (Size: 0x1, Type: ByteProperty)
    std::int32_t BlendablePriority; // 0x0254 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsBlendable; // 0x0258 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x1]; // 0x0259
    std::uint16_t PreshaderGap; // 0x025A (Size: 0x2, Type: UInt16Property)
    float RefractionDepthBias; // 0x025C (Size: 0x4, Type: FloatProperty)
    float MaxWorldPositionOffsetDisplacement; // 0x0260 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlwaysEvaluateWorldPositionOffset; // 0x0264 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x0265
    std::uint8_t StateId[0x1]; // 0x026C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, PhysMaterial) == 296, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::PhysMaterial");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, PhysMaterialMask) == 304, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::PhysMaterialMask");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, PhysicalMaterialMap) == 312, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::PhysicalMaterialMap");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, RenderTracePhysicalMaterialOutputs) == 376, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::RenderTracePhysicalMaterialOutputs");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, MaterialDomain) == 392, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::MaterialDomain");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, BlendMode) == 393, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::BlendMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, DecalBlendMode) == 394, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::DecalBlendMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, MaterialDecalResponse) == 395, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::MaterialDecalResponse");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, NaniteOverrideMaterial) == 400, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::NaniteOverrideMaterial");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, DisplacementScaling) == 448, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::DisplacementScaling");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, DisplacementFadeRange) == 456, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::DisplacementFadeRange");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, ShadingModel) == 464, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::ShadingModel");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bCastDynamicShadowAsMasked) == 465, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bCastDynamicShadowAsMasked");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, ShadingModels) == 466, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::ShadingModels");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, OpacityMaskClipValue) == 468, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::OpacityMaskClipValue");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, DitherOpacityMask) == 472, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::DitherOpacityMask");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bAllowNegativeEmissiveColor) == 473, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bAllowNegativeEmissiveColor");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucencyPass) == 474, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucencyPass");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucencyLightingMode) == 475, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucencyLightingMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bEnableMobileSeparateTranslucency) == 476, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bEnableMobileSeparateTranslucency");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, NumCustomizedUVs) == 480, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::NumCustomizedUVs");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucencyDirectionalLightingIntensity) == 484, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucencyDirectionalLightingIntensity");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentShadowDensityScale) == 488, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentShadowDensityScale");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentSelfShadowDensityScale) == 492, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentSelfShadowDensityScale");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentSelfShadowSecondDensityScale) == 496, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentSelfShadowSecondDensityScale");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentSelfShadowSecondOpacity) == 500, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentSelfShadowSecondOpacity");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentBackscatteringExponent) == 504, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentBackscatteringExponent");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentMultipleScatteringExtinction) == 508, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentMultipleScatteringExtinction");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentShadowStartOffset) == 524, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentShadowStartOffset");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bDisableDepthTest) == 528, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bDisableDepthTest");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bUsedWithBeamTrails) == 529, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bUsedWithBeamTrails");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bRootNodeOverridesDefaultDistortion) == 530, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bRootNodeOverridesDefaultDistortion");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bUsedWithClothing) == 531, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bUsedWithClothing");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bUsedWithHairStrands) == 532, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bUsedWithHairStrands");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bUsedWithCurves) == 536, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bUsedWithCurves");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bUsedWithHeterogeneousVolumes) == 540, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bUsedWithHeterogeneousVolumes");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bAutomaticallySetUsageInEditor) == 544, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bAutomaticallySetUsageInEditor");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, FloatPrecisionMode) == 545, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::FloatPrecisionMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bUseAlphaToCoverage) == 546, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bUseAlphaToCoverage");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bForwardRenderUsePreintegratedGFForSimpleIBL) == 548, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bForwardRenderUsePreintegratedGFForSimpleIBL");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, AllowTranslucentCustomDepthWrites) == 552, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::AllowTranslucentCustomDepthWrites");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bAllowTranslucentLocalLightShadow) == 553, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bAllowTranslucentLocalLightShadow");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentLocalLightShadowQuality) == 556, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentLocalLightShadowQuality");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, TranslucentDirectionalLightShadowQuality) == 560, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::TranslucentDirectionalLightShadowQuality");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, ShadingRate) == 564, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::ShadingRate");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bAllowVariableRateShading) == 565, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bAllowVariableRateShading");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bEnableNewHLSLGeneratorOverridden) == 566, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bEnableNewHLSLGeneratorOverridden");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, MaterialTranslatorProfile) == 567, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::MaterialTranslatorProfile");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bAllowDevelopmentShaderCompile) == 568, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bAllowDevelopmentShaderCompile");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bIsMaterialEditorStatsMaterial) == 569, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bIsMaterialEditorStatsMaterial");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, BlendableLocation) == 570, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::BlendableLocation");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, BlendableOutputAlpha) == 571, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::BlendableOutputAlpha");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, UserSceneTexture) == 572, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::UserSceneTexture");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, UserTextureDivisor) == 576, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::UserTextureDivisor");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, ResolutionRelativeToInput) == 584, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::ResolutionRelativeToInput");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bDisablePreExposureScale) == 588, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bDisablePreExposureScale");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, StencilCompare) == 589, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::StencilCompare");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, StencilRefValue) == 590, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::StencilRefValue");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, NeuralProfileId) == 591, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::NeuralProfileId");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, RefractionMode) == 592, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::RefractionMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, RefractionMethod) == 593, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::RefractionMethod");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, RefractionCoverageMode) == 594, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::RefractionCoverageMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, PixelDepthOffsetMode) == 595, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::PixelDepthOffsetMode");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, BlendablePriority) == 596, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::BlendablePriority");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bIsBlendable) == 600, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bIsBlendable");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, PreshaderGap) == 602, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::PreshaderGap");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, RefractionDepthBias) == 604, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::RefractionDepthBias");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, MaxWorldPositionOffsetDisplacement) == 608, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::MaxWorldPositionOffsetDisplacement");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, bAlwaysEvaluateWorldPositionOffset) == 612, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::bAlwaysEvaluateWorldPositionOffset");
static_assert(offsetof(UFortRuntimeLandscapeCustomMaterial, StateId) == 620, "Offset mismatch for UFortRuntimeLandscapeCustomMaterial::StateId");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeDynamicMaterialComponent
// Kind: Class; super: ActorComponent
class UFortRuntimeLandscapeDynamicMaterialComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TargetPrimitiveComponent[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    void* SourceMaterial; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GridSize[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bSamplesHeightmap; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateOnTransformUpdates; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00FA
    TArray<void*> LayerSamples; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> BoundComponent; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, TargetPrimitiveComponent) == 192, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::TargetPrimitiveComponent");
static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, SourceMaterial) == 232, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::SourceMaterial");
static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, GridSize) == 240, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::GridSize");
static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, bSamplesHeightmap) == 248, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::bSamplesHeightmap");
static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, bUpdateOnTransformUpdates) == 249, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::bUpdateOnTransformUpdates");
static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, LayerSamples) == 256, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::LayerSamples");
static_assert(offsetof(UFortRuntimeLandscapeDynamicMaterialComponent, BoundComponent) == 272, "Offset mismatch for UFortRuntimeLandscapeDynamicMaterialComponent::BoundComponent");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeExternalMaterialsCollector
// Kind: Class; super: Object
class UFortRuntimeLandscapeExternalMaterialsCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortRuntimeLandscape.FortRuntimeLandscapeGrassContributorComponent
// Kind: Class; super: FortRuntimeLandscapeModificationComponent
class UFortRuntimeLandscapeGrassContributorComponent
{
public:
    std::uint8_t Pad_0000[0x670]; // 0x0000
    void* Material; // 0x0670 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeGrassContributorComponent, Material) == 1648, "Offset mismatch for UFortRuntimeLandscapeGrassContributorComponent::Material");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeMaterialExpressionAssetUserData
// Kind: Class; super: AssetUserData
class UFortRuntimeLandscapeMaterialExpressionAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WeightmapNames[0x10]; // 0x0028 (Size: 0x10, Type: SetProperty)
    std::uint8_t bHasConnectedCustomMips; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendOperation; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::uint8_t ResultType; // 0x003C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeMaterialExpressionAssetUserData, WeightmapNames) == 40, "Offset mismatch for UFortRuntimeLandscapeMaterialExpressionAssetUserData::WeightmapNames");
static_assert(offsetof(UFortRuntimeLandscapeMaterialExpressionAssetUserData, bHasConnectedCustomMips) == 56, "Offset mismatch for UFortRuntimeLandscapeMaterialExpressionAssetUserData::bHasConnectedCustomMips");
static_assert(offsetof(UFortRuntimeLandscapeMaterialExpressionAssetUserData, BlendOperation) == 57, "Offset mismatch for UFortRuntimeLandscapeMaterialExpressionAssetUserData::BlendOperation");
static_assert(offsetof(UFortRuntimeLandscapeMaterialExpressionAssetUserData, ResultType) == 60, "Offset mismatch for UFortRuntimeLandscapeMaterialExpressionAssetUserData::ResultType");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeMaterialInstanceConstant
// Kind: Class; super: MaterialInstanceConstant
class UFortRuntimeLandscapeMaterialInstanceConstant
{
public:
    std::uint8_t Pad_0000[0x350]; // 0x0000
    void* PhysMaterialMask; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeMaterialInstanceConstant, PhysMaterialMask) == 848, "Offset mismatch for UFortRuntimeLandscapeMaterialInstanceConstant::PhysMaterialMask");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeMaterialLibrary
// Kind: Class; super: DataAsset
class UFortRuntimeLandscapeMaterialLibrary
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ExternalMaterialGatherer; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* LandscapeMaterial; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> AllLayerInfos; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t StripLayerInfos[0x10]; // 0x0048 (Size: 0x10, Type: SetProperty)
    TArray<void*> LayerInfoDirectories; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SortedLayerNames; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SortedLayerInfos; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LayersFromMaterial[0x10]; // 0x0088 (Size: 0x10, Type: SetProperty)
    std::uint8_t AllMaterials[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, ExternalMaterialGatherer) == 40, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::ExternalMaterialGatherer");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, LandscapeMaterial) == 48, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::LandscapeMaterial");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, AllLayerInfos) == 56, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::AllLayerInfos");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, StripLayerInfos) == 72, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::StripLayerInfos");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, LayerInfoDirectories) == 88, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::LayerInfoDirectories");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, SortedLayerNames) == 104, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::SortedLayerNames");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, SortedLayerInfos) == 120, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::SortedLayerInfos");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, LayersFromMaterial) == 136, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::LayersFromMaterial");
static_assert(offsetof(UFortRuntimeLandscapeMaterialLibrary, AllMaterials) == 152, "Offset mismatch for UFortRuntimeLandscapeMaterialLibrary::AllMaterials");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeModificationComponent
// Kind: Class; super: PrimitiveComponent
class UFortRuntimeLandscapeModificationComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    TArray<void*> Modifications; // 0x0570 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bPrimitivesVisibleInEditor; // 0x0580 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSortPriority; // 0x0581 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0582
    std::int32_t SortPriority; // 0x0584 (Size: 0x4, Type: IntProperty)
    std::int32_t NextModificationID; // 0x0588 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> RuntimeLandscapeSubsystem; // 0x058C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0594
    std::uint8_t CurrentInitializationComponents[0x10]; // 0x0598 (Size: 0x10, Type: SetProperty)
    std::uint8_t bUserEnableModifications; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xB]; // 0x05A9
    std::uint8_t TrackingID[0x1]; // 0x05B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, Modifications) == 1392, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::Modifications");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, bPrimitivesVisibleInEditor) == 1408, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::bPrimitivesVisibleInEditor");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, bUseSortPriority) == 1409, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::bUseSortPriority");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, SortPriority) == 1412, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::SortPriority");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, NextModificationID) == 1416, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::NextModificationID");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, RuntimeLandscapeSubsystem) == 1420, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::RuntimeLandscapeSubsystem");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, CurrentInitializationComponents) == 1432, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::CurrentInitializationComponents");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, bUserEnableModifications) == 1448, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::bUserEnableModifications");
static_assert(offsetof(UFortRuntimeLandscapeModificationComponent, TrackingID) == 1460, "Offset mismatch for UFortRuntimeLandscapeModificationComponent::TrackingID");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapePatchComponent
// Kind: Class; super: SceneComponent
class UFortRuntimeLandscapePatchComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    void* ModificationComponent; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    void* PatchMeshComponent; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bModifyHeightmap; // 0x0250 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0251
    void* HeightmapTexture; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    float HeightmapUVScale; // 0x0260 (Size: 0x4, Type: FloatProperty)
    float HeightmapBlendFactor; // 0x0264 (Size: 0x4, Type: FloatProperty)
    void* LayerMaskTexture; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    float LayerMaskUVScale; // 0x0270 (Size: 0x4, Type: FloatProperty)
    float LayerMaskBlendFactor; // 0x0274 (Size: 0x4, Type: FloatProperty)
    float FalloffRadius; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float FalloffAmount; // 0x027C (Size: 0x4, Type: FloatProperty)
    std::uint8_t HeightMaterial[0x20]; // 0x0280 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OverrideHeightMaterial[0x20]; // 0x02A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LayerMaterial[0x20]; // 0x02C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OverrideLayerMaterial[0x20]; // 0x02E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LayerName[0x4]; // 0x0300 (Size: 0x4, Type: NameProperty)
    std::uint8_t ModificationVisualization; // 0x0304 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0305
    std::uint8_t PatchSize[0x10]; // 0x0308 (Size: 0x10, Type: StructProperty)
    void* HeightMaterialInstance; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* LayerMaterialInstance; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapePatchComponent, ModificationComponent) == 576, "Offset mismatch for UFortRuntimeLandscapePatchComponent::ModificationComponent");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, PatchMeshComponent) == 584, "Offset mismatch for UFortRuntimeLandscapePatchComponent::PatchMeshComponent");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, bModifyHeightmap) == 592, "Offset mismatch for UFortRuntimeLandscapePatchComponent::bModifyHeightmap");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, HeightmapTexture) == 600, "Offset mismatch for UFortRuntimeLandscapePatchComponent::HeightmapTexture");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, HeightmapUVScale) == 608, "Offset mismatch for UFortRuntimeLandscapePatchComponent::HeightmapUVScale");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, HeightmapBlendFactor) == 612, "Offset mismatch for UFortRuntimeLandscapePatchComponent::HeightmapBlendFactor");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, LayerMaskTexture) == 616, "Offset mismatch for UFortRuntimeLandscapePatchComponent::LayerMaskTexture");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, LayerMaskUVScale) == 624, "Offset mismatch for UFortRuntimeLandscapePatchComponent::LayerMaskUVScale");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, LayerMaskBlendFactor) == 628, "Offset mismatch for UFortRuntimeLandscapePatchComponent::LayerMaskBlendFactor");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, FalloffRadius) == 632, "Offset mismatch for UFortRuntimeLandscapePatchComponent::FalloffRadius");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, FalloffAmount) == 636, "Offset mismatch for UFortRuntimeLandscapePatchComponent::FalloffAmount");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, HeightMaterial) == 640, "Offset mismatch for UFortRuntimeLandscapePatchComponent::HeightMaterial");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, OverrideHeightMaterial) == 672, "Offset mismatch for UFortRuntimeLandscapePatchComponent::OverrideHeightMaterial");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, LayerMaterial) == 704, "Offset mismatch for UFortRuntimeLandscapePatchComponent::LayerMaterial");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, OverrideLayerMaterial) == 736, "Offset mismatch for UFortRuntimeLandscapePatchComponent::OverrideLayerMaterial");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, LayerName) == 768, "Offset mismatch for UFortRuntimeLandscapePatchComponent::LayerName");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, ModificationVisualization) == 772, "Offset mismatch for UFortRuntimeLandscapePatchComponent::ModificationVisualization");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, PatchSize) == 776, "Offset mismatch for UFortRuntimeLandscapePatchComponent::PatchSize");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, HeightMaterialInstance) == 792, "Offset mismatch for UFortRuntimeLandscapePatchComponent::HeightMaterialInstance");
static_assert(offsetof(UFortRuntimeLandscapePatchComponent, LayerMaterialInstance) == 800, "Offset mismatch for UFortRuntimeLandscapePatchComponent::LayerMaterialInstance");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeProxy
// Kind: Class; super: Actor
class UFortRuntimeLandscapeProxy
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t CachedLocalBounds[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    TArray<void*> CachingComponents; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeProxy, CachedLocalBounds) == 624, "Offset mismatch for UFortRuntimeLandscapeProxy::CachedLocalBounds");
static_assert(offsetof(UFortRuntimeLandscapeProxy, CachingComponents) == 680, "Offset mismatch for UFortRuntimeLandscapeProxy::CachingComponents");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeProxyComponent
// Kind: Class; super: FortRuntimeLandscapeComponentBase
class UFortRuntimeLandscapeProxyComponent
{
public:
    std::uint8_t Pad_0000[0x2D1]; // 0x0000
    std::uint8_t bEnabled; // 0x02D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LayerStorageLocation; // 0x02D2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x02D3
    std::uint8_t MaterialLibrary[0x20]; // 0x02D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CachedDataStorageLocation; // 0x02F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02F9
    std::uint8_t CachedComponentData[0x20]; // 0x0300 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> LandscapeActorProxyComponent; // 0x0320 (Size: 0x8, Type: WeakObjectProperty)
    void* RuntimeMaterialLibrary; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* RuntimeCachedComponentData; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, bEnabled) == 721, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::bEnabled");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, LayerStorageLocation) == 722, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::LayerStorageLocation");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, MaterialLibrary) == 728, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::MaterialLibrary");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, CachedDataStorageLocation) == 760, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::CachedDataStorageLocation");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, CachedComponentData) == 768, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::CachedComponentData");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, LandscapeActorProxyComponent) == 800, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::LandscapeActorProxyComponent");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, RuntimeMaterialLibrary) == 808, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::RuntimeMaterialLibrary");
static_assert(offsetof(UFortRuntimeLandscapeProxyComponent, RuntimeCachedComponentData) == 816, "Offset mismatch for UFortRuntimeLandscapeProxyComponent::RuntimeCachedComponentData");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeSpline
// Kind: Class; super: Actor
class UFortRuntimeLandscapeSpline
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SplineComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* TerrainModificationComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* ModificationComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SplineMeshComponents; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    void* TargetLandscapeSplineOwner; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUpdatesHeightmap; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02A1
    std::uint8_t LayerName[0x4]; // 0x02A4 (Size: 0x4, Type: NameProperty)
    float DefaultHalfWidth; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float DefaultLayerWidthScale; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float DefaultFalloffWidth; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float DefaultLayerFalloffScale; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float DefaultEndFalloff; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    std::int32_t SectionIndex; // 0x02BC (Size: 0x4, Type: IntProperty)
    std::uint8_t ModificationVisualization; // 0x02C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02C1
    std::uint8_t HeightMaterial[0x20]; // 0x02C8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LayerMaterial[0x20]; // 0x02E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Mesh[0x20]; // 0x0308 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bUseAdaptiveSplineMesh; // 0x0328 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0329
    float AdaptiveSplineResolution; // 0x032C (Size: 0x4, Type: FloatProperty)
    TArray<void*> HeightMaterialInstances; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LayerMaterialInstances; // 0x0340 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeSpline, SplineComponent) == 624, "Offset mismatch for UFortRuntimeLandscapeSpline::SplineComponent");
static_assert(offsetof(UFortRuntimeLandscapeSpline, TerrainModificationComponent) == 632, "Offset mismatch for UFortRuntimeLandscapeSpline::TerrainModificationComponent");
static_assert(offsetof(UFortRuntimeLandscapeSpline, ModificationComponent) == 640, "Offset mismatch for UFortRuntimeLandscapeSpline::ModificationComponent");
static_assert(offsetof(UFortRuntimeLandscapeSpline, SplineMeshComponents) == 648, "Offset mismatch for UFortRuntimeLandscapeSpline::SplineMeshComponents");
static_assert(offsetof(UFortRuntimeLandscapeSpline, TargetLandscapeSplineOwner) == 664, "Offset mismatch for UFortRuntimeLandscapeSpline::TargetLandscapeSplineOwner");
static_assert(offsetof(UFortRuntimeLandscapeSpline, bUpdatesHeightmap) == 672, "Offset mismatch for UFortRuntimeLandscapeSpline::bUpdatesHeightmap");
static_assert(offsetof(UFortRuntimeLandscapeSpline, LayerName) == 676, "Offset mismatch for UFortRuntimeLandscapeSpline::LayerName");
static_assert(offsetof(UFortRuntimeLandscapeSpline, DefaultHalfWidth) == 680, "Offset mismatch for UFortRuntimeLandscapeSpline::DefaultHalfWidth");
static_assert(offsetof(UFortRuntimeLandscapeSpline, DefaultLayerWidthScale) == 684, "Offset mismatch for UFortRuntimeLandscapeSpline::DefaultLayerWidthScale");
static_assert(offsetof(UFortRuntimeLandscapeSpline, DefaultFalloffWidth) == 688, "Offset mismatch for UFortRuntimeLandscapeSpline::DefaultFalloffWidth");
static_assert(offsetof(UFortRuntimeLandscapeSpline, DefaultLayerFalloffScale) == 692, "Offset mismatch for UFortRuntimeLandscapeSpline::DefaultLayerFalloffScale");
static_assert(offsetof(UFortRuntimeLandscapeSpline, DefaultEndFalloff) == 696, "Offset mismatch for UFortRuntimeLandscapeSpline::DefaultEndFalloff");
static_assert(offsetof(UFortRuntimeLandscapeSpline, SectionIndex) == 700, "Offset mismatch for UFortRuntimeLandscapeSpline::SectionIndex");
static_assert(offsetof(UFortRuntimeLandscapeSpline, ModificationVisualization) == 704, "Offset mismatch for UFortRuntimeLandscapeSpline::ModificationVisualization");
static_assert(offsetof(UFortRuntimeLandscapeSpline, HeightMaterial) == 712, "Offset mismatch for UFortRuntimeLandscapeSpline::HeightMaterial");
static_assert(offsetof(UFortRuntimeLandscapeSpline, LayerMaterial) == 744, "Offset mismatch for UFortRuntimeLandscapeSpline::LayerMaterial");
static_assert(offsetof(UFortRuntimeLandscapeSpline, Mesh) == 776, "Offset mismatch for UFortRuntimeLandscapeSpline::Mesh");
static_assert(offsetof(UFortRuntimeLandscapeSpline, bUseAdaptiveSplineMesh) == 808, "Offset mismatch for UFortRuntimeLandscapeSpline::bUseAdaptiveSplineMesh");
static_assert(offsetof(UFortRuntimeLandscapeSpline, AdaptiveSplineResolution) == 812, "Offset mismatch for UFortRuntimeLandscapeSpline::AdaptiveSplineResolution");
static_assert(offsetof(UFortRuntimeLandscapeSpline, HeightMaterialInstances) == 816, "Offset mismatch for UFortRuntimeLandscapeSpline::HeightMaterialInstances");
static_assert(offsetof(UFortRuntimeLandscapeSpline, LayerMaterialInstances) == 832, "Offset mismatch for UFortRuntimeLandscapeSpline::LayerMaterialInstances");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeSplineComponent
// Kind: Class; super: SplineComponent
class UFortRuntimeLandscapeSplineComponent
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    void* SplineMetadata; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeSplineComponent, SplineMetadata) == 1744, "Offset mismatch for UFortRuntimeLandscapeSplineComponent::SplineMetadata");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeSplineMetadata
// Kind: Class; super: SplineMetadata
class UFortRuntimeLandscapeSplineMetadata
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HalfWidth[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerWidthScale[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideFalloffWidth[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayerSideFalloffScale[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartFalloffFraction[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t EndFalloffFraction[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SortPriority[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasInvalidStartStopFalloffs; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, HalfWidth) == 40, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::HalfWidth");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, LayerWidthScale) == 64, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::LayerWidthScale");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, SideFalloffWidth) == 88, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::SideFalloffWidth");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, LayerSideFalloffScale) == 112, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::LayerSideFalloffScale");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, StartFalloffFraction) == 136, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::StartFalloffFraction");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, EndFalloffFraction) == 160, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::EndFalloffFraction");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, SortPriority) == 184, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::SortPriority");
static_assert(offsetof(UFortRuntimeLandscapeSplineMetadata, bHasInvalidStartStopFalloffs) == 208, "Offset mismatch for UFortRuntimeLandscapeSplineMetadata::bHasInvalidStartStopFalloffs");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFortRuntimeLandscapeSubsystem
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::uint8_t LandscapeContainer[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeSubsystem, LandscapeContainer) == 344, "Offset mismatch for UFortRuntimeLandscapeSubsystem::LandscapeContainer");

// /Script/FortRuntimeLandscape.FortRuntimeLandscapeTextureDebugDraw
// Kind: Class; super: TickableWorldSubsystem
class UFortRuntimeLandscapeTextureDebugDraw
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortRuntimeLandscape.FortRuntimeLandscapeTextureReferenceData
// Kind: Class; super: AssetUserData
class UFortRuntimeLandscapeTextureReferenceData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortRuntimeLandscape.FortRuntimeLandscapeTextureStorageProviderFactory
// Kind: Class; super: TextureMipDataProviderFactory
class UFortRuntimeLandscapeTextureStorageProviderFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Texture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LandscapeSubsystem; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0038
    TWeakObjectPtr<void> LandscapeComponent; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0050
    void* ExistingFactory; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortRuntimeLandscapeTextureStorageProviderFactory, Texture) == 40, "Offset mismatch for UFortRuntimeLandscapeTextureStorageProviderFactory::Texture");
static_assert(offsetof(UFortRuntimeLandscapeTextureStorageProviderFactory, LandscapeSubsystem) == 48, "Offset mismatch for UFortRuntimeLandscapeTextureStorageProviderFactory::LandscapeSubsystem");
static_assert(offsetof(UFortRuntimeLandscapeTextureStorageProviderFactory, LandscapeComponent) == 72, "Offset mismatch for UFortRuntimeLandscapeTextureStorageProviderFactory::LandscapeComponent");
static_assert(offsetof(UFortRuntimeLandscapeTextureStorageProviderFactory, ExistingFactory) == 96, "Offset mismatch for UFortRuntimeLandscapeTextureStorageProviderFactory::ExistingFactory");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeCustomMaterialCustomMipIndex
// Kind: Class; super: MaterialExpression
class UMaterialExpressionFortRuntimeLandscapeCustomMaterialCustomMipIndex
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* CustomExpression; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomMaterialCustomMipIndex, CustomExpression) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomMaterialCustomMipIndex::CustomExpression");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset
// Kind: Class; super: MaterialExpression
class UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t UV[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ScaledOffset[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    void* CustomExpression; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset, UV) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset::UV");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset, ScaledOffset) == 216, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset::ScaledOffset");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset, CustomExpression) == 256, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomMaterialGetUVOffset::CustomExpression");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP
// Kind: Class; super: MaterialExpression
class UMaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t UV[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    void* CustomExpression; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP, UV) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP::UV");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP, CustomExpression) == 216, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomMaterialSampleParentMIP::CustomExpression");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeCustomOutput
// Kind: Class; super: MaterialExpressionCustomOutput
class UMaterialExpressionFortRuntimeLandscapeCustomOutput
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Result[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HeightBlend[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WorldNormal[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t CustomMipResult[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlendOperation; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0151
    std::uint8_t ResultType; // 0x0154 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutput, Result) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutput::Result");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutput, HeightBlend) == 216, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutput::HeightBlend");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutput, WorldNormal) == 256, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutput::WorldNormal");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutput, CustomMipResult) == 296, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutput::CustomMipResult");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutput, BlendOperation) == 336, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutput::BlendOperation");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutput, ResultType) == 340, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutput::ResultType");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeCustomOutputProxy
// Kind: Class; super: MaterialExpression
class UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MaterialExpressionEditorX; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MaterialExpressionEditorY; // 0x002C (Size: 0x4, Type: IntProperty)
    void* GraphNode; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* SubgraphExpression; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    std::uint8_t MaterialExpressionGuid[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    void* Material; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* Function; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    FString Desc; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Precision; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::uint8_t bNeedToUpdatePreview; // 0x0084 (Size: 0x1, Type: BoolProperty)
    // 0x0084 BoolProperty bRealtimePreview (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    std::uint8_t bIsParameterExpression; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    std::uint8_t bCollapsed; // 0x008C (Size: 0x1, Type: BoolProperty)
    // 0x008C BoolProperty bCommentBubbleVisible (shared storage)
    // 0x008C BoolProperty bHidePreviewWindow (shared storage)
    // 0x008C BoolProperty bShaderInputData (shared storage)
    // 0x008C BoolProperty bShowInputs (shared storage)
    // 0x008C BoolProperty bShowMaskColorsOnPin (shared storage)
    // 0x008C BoolProperty bShowOutputNameOnPin (shared storage)
    // 0x008C BoolProperty bShowOutputs (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x008D
    TArray<void*> MenuCategories; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, MaterialExpressionEditorX) == 40, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::MaterialExpressionEditorX");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, MaterialExpressionEditorY) == 44, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::MaterialExpressionEditorY");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, GraphNode) == 48, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::GraphNode");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, SubgraphExpression) == 56, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::SubgraphExpression");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, MaterialExpressionGuid) == 80, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::MaterialExpressionGuid");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, Material) == 96, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::Material");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, Function) == 104, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::Function");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, Desc) == 112, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::Desc");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, Precision) == 128, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::Precision");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, bNeedToUpdatePreview) == 132, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::bNeedToUpdatePreview");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, bIsParameterExpression) == 136, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::bIsParameterExpression");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, bCollapsed) == 140, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::bCollapsed");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, MenuCategories) == 144, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::MenuCategories");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy, Outputs) == 160, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeCustomOutputProxy::Outputs");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeDynamicHeightSample
// Kind: Class; super: MaterialExpressionFortRuntimeLandscapeDynamicSample
class UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t HeightmapOutput; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F1
    std::uint8_t NormalOutput; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F5
    std::int32_t PreviewMip; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample, HeightmapOutput) == 240, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample::HeightmapOutput");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample, NormalOutput) == 244, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample::NormalOutput");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample, PreviewMip) == 248, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicHeightSample::PreviewMip");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeDynamicLayerSample
// Kind: Class; super: MaterialExpressionFortRuntimeLandscapeDynamicSample
class UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t ParameterName[0x4]; // 0x00F0 (Size: 0x4, Type: NameProperty)
    float PreviewWeight; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::int32_t PreviewMip; // 0x00F8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample, ParameterName) == 240, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample::ParameterName");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample, PreviewWeight) == 244, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample::PreviewWeight");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample, PreviewMip) == 248, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicLayerSample::PreviewMip");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeDynamicSample
// Kind: Class; super: MaterialExpression
class UMaterialExpressionFortRuntimeLandscapeDynamicSample
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t XYOffset[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bForceEnableXYOffset; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    std::uint8_t GridSize; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00DD
    std::uint8_t CustomGridSize[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicSample, XYOffset) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicSample::XYOffset");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicSample, bForceEnableXYOffset) == 216, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicSample::bForceEnableXYOffset");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicSample, GridSize) == 220, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicSample::GridSize");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeDynamicSample, CustomGridSize) == 224, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeDynamicSample::CustomGridSize");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeOutputPass
// Kind: Class; super: MaterialExpressionCustomOutput
class UMaterialExpressionFortRuntimeLandscapeOutputPass
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* GrassMaterialExpression; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsMaterialExpression; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeOutputPass, GrassMaterialExpression) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeOutputPass::GrassMaterialExpression");
static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeOutputPass, PhysicsMaterialExpression) == 184, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeOutputPass::PhysicsMaterialExpression");

// /Script/FortRuntimeLandscape.MaterialExpressionFortRuntimeLandscapeOutputPassPreInit
// Kind: Class; super: MaterialExpressionCustomOutput
class UMaterialExpressionFortRuntimeLandscapeOutputPassPreInit
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* OutputPassExpressions; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMaterialExpressionFortRuntimeLandscapeOutputPassPreInit, OutputPassExpressions) == 176, "Offset mismatch for UMaterialExpressionFortRuntimeLandscapeOutputPassPreInit::OutputPassExpressions");
