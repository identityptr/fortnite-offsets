/**
 * decamp dumper generated SDK
 * Package: /Script/AtomRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AtomRuntime.AtomBoneReference
// Kind: ScriptStruct; super: none
struct FAtomBoneReference
{
public:
    std::int32_t PrimitiveIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t PartIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t BoneIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomBoneReference, PrimitiveIndex) == 0, "Offset mismatch for FAtomBoneReference::PrimitiveIndex");
static_assert(offsetof(FAtomBoneReference, PartIndex) == 4, "Offset mismatch for FAtomBoneReference::PartIndex");
static_assert(offsetof(FAtomBoneReference, BoneIndex) == 8, "Offset mismatch for FAtomBoneReference::BoneIndex");

// /Script/AtomRuntime.AtomColor
// Kind: ScriptStruct; super: none
struct FAtomColor
{
public:
    std::int32_t ID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Effects; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t Color[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomColor, ID) == 0, "Offset mismatch for FAtomColor::ID");
static_assert(offsetof(FAtomColor, Effects) == 4, "Offset mismatch for FAtomColor::Effects");
static_assert(offsetof(FAtomColor, Color) == 8, "Offset mismatch for FAtomColor::Color");

// /Script/AtomRuntime.AtomColorInfo
// Kind: ScriptStruct; super: TableRowBase
struct FAtomColorInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Color[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t MaterialType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    FString Name; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsActive; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomColorInfo, Color) == 8, "Offset mismatch for FAtomColorInfo::Color");
static_assert(offsetof(FAtomColorInfo, MaterialType) == 12, "Offset mismatch for FAtomColorInfo::MaterialType");
static_assert(offsetof(FAtomColorInfo, Name) == 16, "Offset mismatch for FAtomColorInfo::Name");
static_assert(offsetof(FAtomColorInfo, bIsActive) == 32, "Offset mismatch for FAtomColorInfo::bIsActive");

// /Script/AtomRuntime.AtomColorProperty
// Kind: ScriptStruct; super: none
struct FAtomColorProperty
{
public:
    std::int32_t AtomColorValue; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomColorProperty, AtomColorValue) == 0, "Offset mismatch for FAtomColorProperty::AtomColorValue");

// /Script/AtomRuntime.AtomColorSurface
// Kind: ScriptStruct; super: none
struct FAtomColorSurface
{
public:
    std::int32_t ColorId; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ShaderType; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAtomColorSurface, ColorId) == 0, "Offset mismatch for FAtomColorSurface::ColorId");
static_assert(offsetof(FAtomColorSurface, ShaderType) == 4, "Offset mismatch for FAtomColorSurface::ShaderType");

// /Script/AtomRuntime.AtomColorTheme
// Kind: ScriptStruct; super: none
struct FAtomColorTheme
{
public:
    FName ThemeName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Entries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomColorTheme, ThemeName) == 0, "Offset mismatch for FAtomColorTheme::ThemeName");
static_assert(offsetof(FAtomColorTheme, Entries) == 8, "Offset mismatch for FAtomColorTheme::Entries");

// /Script/AtomRuntime.AtomCommonPartAndTransform
// Kind: ScriptStruct; super: none
struct FAtomCommonPartAndTransform
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0001
    std::uint8_t Transform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> GeometryStyles; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomCommonPartAndTransform, Type) == 0, "Offset mismatch for FAtomCommonPartAndTransform::Type");
static_assert(offsetof(FAtomCommonPartAndTransform, Transform) == 16, "Offset mismatch for FAtomCommonPartAndTransform::Transform");
static_assert(offsetof(FAtomCommonPartAndTransform, GeometryStyles) == 112, "Offset mismatch for FAtomCommonPartAndTransform::GeometryStyles");

// /Script/AtomRuntime.AtomCommonPartAssetDescription
// Kind: ScriptStruct; super: none
struct FAtomCommonPartAssetDescription
{
public:
    std::uint8_t CommonPartType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t CommonPartStyle[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float Scale; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomCommonPartAssetDescription, CommonPartType) == 0, "Offset mismatch for FAtomCommonPartAssetDescription::CommonPartType");
static_assert(offsetof(FAtomCommonPartAssetDescription, CommonPartStyle) == 4, "Offset mismatch for FAtomCommonPartAssetDescription::CommonPartStyle");
static_assert(offsetof(FAtomCommonPartAssetDescription, Scale) == 8, "Offset mismatch for FAtomCommonPartAssetDescription::Scale");

// /Script/AtomRuntime.AtomCommonPartDescription
// Kind: ScriptStruct; super: none
struct FAtomCommonPartDescription
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float InnerRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlaneQuadrant; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShowLogo; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomCommonPartDescription, Radius) == 0, "Offset mismatch for FAtomCommonPartDescription::Radius");
static_assert(offsetof(FAtomCommonPartDescription, Height) == 4, "Offset mismatch for FAtomCommonPartDescription::Height");
static_assert(offsetof(FAtomCommonPartDescription, InnerRadius) == 8, "Offset mismatch for FAtomCommonPartDescription::InnerRadius");
static_assert(offsetof(FAtomCommonPartDescription, PlaneQuadrant) == 12, "Offset mismatch for FAtomCommonPartDescription::PlaneQuadrant");
static_assert(offsetof(FAtomCommonPartDescription, bShowLogo) == 13, "Offset mismatch for FAtomCommonPartDescription::bShowLogo");

// /Script/AtomRuntime.AtomCommonPartInstance
// Kind: ScriptStruct; super: none
struct FAtomCommonPartInstance
{
public:
    std::uint8_t Transform[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t ConnectionPointReference[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    TArray<void*> GeometryStyles; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomCommonPartInstance, Transform) == 0, "Offset mismatch for FAtomCommonPartInstance::Transform");
static_assert(offsetof(FAtomCommonPartInstance, ConnectionPointReference) == 48, "Offset mismatch for FAtomCommonPartInstance::ConnectionPointReference");
static_assert(offsetof(FAtomCommonPartInstance, GeometryStyles) == 56, "Offset mismatch for FAtomCommonPartInstance::GeometryStyles");

// /Script/AtomRuntime.AtomCommonPartInstancesCache
// Kind: ScriptStruct; super: none
struct FAtomCommonPartInstancesCache
{
public:
    TArray<void*> Meshes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Materials; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UUIDs; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Instances; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstanceTransforms; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomCommonPartInstancesCache, Meshes) == 0, "Offset mismatch for FAtomCommonPartInstancesCache::Meshes");
static_assert(offsetof(FAtomCommonPartInstancesCache, Materials) == 16, "Offset mismatch for FAtomCommonPartInstancesCache::Materials");
static_assert(offsetof(FAtomCommonPartInstancesCache, UUIDs) == 32, "Offset mismatch for FAtomCommonPartInstancesCache::UUIDs");
static_assert(offsetof(FAtomCommonPartInstancesCache, Instances) == 48, "Offset mismatch for FAtomCommonPartInstancesCache::Instances");
static_assert(offsetof(FAtomCommonPartInstancesCache, InstanceTransforms) == 64, "Offset mismatch for FAtomCommonPartInstancesCache::InstanceTransforms");

// /Script/AtomRuntime.AtomCommonPartOcclusionInfo
// Kind: ScriptStruct; super: none
struct FAtomCommonPartOcclusionInfo
{
public:
    TArray<void*> InstancesOccluded; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomCommonPartOcclusionInfo, InstancesOccluded) == 0, "Offset mismatch for FAtomCommonPartOcclusionInfo::InstancesOccluded");

// /Script/AtomRuntime.AtomConnectionPointLocation
// Kind: ScriptStruct; super: none
struct FAtomConnectionPointLocation
{
public:
    std::uint8_t RelativeConnectionPointLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TSoftObjectPtr<void> Actor; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FAtomConnectionPointLocation, RelativeConnectionPointLocation) == 0, "Offset mismatch for FAtomConnectionPointLocation::RelativeConnectionPointLocation");
static_assert(offsetof(FAtomConnectionPointLocation, Actor) == 24, "Offset mismatch for FAtomConnectionPointLocation::Actor");

// /Script/AtomRuntime.AtomConnectionProxy
// Kind: ScriptStruct; super: none
struct FAtomConnectionProxy
{
public:
    std::uint8_t Pad_0000[0x390]; // 0x0000
    TArray<void*> RejectionReasons; // 0x0390 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomConnectionProxy, RejectionReasons) == 912, "Offset mismatch for FAtomConnectionProxy::RejectionReasons");

// /Script/AtomRuntime.AtomDecorationAssignment
// Kind: ScriptStruct; super: none
struct FAtomDecorationAssignment
{
public:
    FString SurfaceName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TextureName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Version; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAtomDecorationAssignment, SurfaceName) == 0, "Offset mismatch for FAtomDecorationAssignment::SurfaceName");
static_assert(offsetof(FAtomDecorationAssignment, TextureName) == 16, "Offset mismatch for FAtomDecorationAssignment::TextureName");
static_assert(offsetof(FAtomDecorationAssignment, Version) == 32, "Offset mismatch for FAtomDecorationAssignment::Version");

// /Script/AtomRuntime.AtomGlueSet
// Kind: ScriptStruct; super: none
struct FAtomGlueSet
{
public:
    TSet<void*> Entries; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FAtomGlueSet, Entries) == 0, "Offset mismatch for FAtomGlueSet::Entries");

// /Script/AtomRuntime.AtomHingedElement
// Kind: ScriptStruct; super: none
struct FAtomHingedElement
{
public:
    TArray<void*> RigidElements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t HierarchyRootIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomHingedElement, RigidElements) == 0, "Offset mismatch for FAtomHingedElement::RigidElements");
static_assert(offsetof(FAtomHingedElement, HierarchyRootIndex) == 16, "Offset mismatch for FAtomHingedElement::HierarchyRootIndex");

// /Script/AtomRuntime.AtomLUCTRemappedColorEntry
// Kind: ScriptStruct; super: none
struct FAtomLUCTRemappedColorEntry
{
public:
    std::uint8_t SourceColor[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t RemappedColor[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomLUCTRemappedColorEntry, SourceColor) == 0, "Offset mismatch for FAtomLUCTRemappedColorEntry::SourceColor");
static_assert(offsetof(FAtomLUCTRemappedColorEntry, RemappedColor) == 4, "Offset mismatch for FAtomLUCTRemappedColorEntry::RemappedColor");

// /Script/AtomRuntime.AtomLUCTRemappedColorTable
// Kind: ScriptStruct; super: none
struct FAtomLUCTRemappedColorTable
{
public:
    TArray<void*> Entries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomLUCTRemappedColorTable, Entries) == 0, "Offset mismatch for FAtomLUCTRemappedColorTable::Entries");

// /Script/AtomRuntime.AtomMaterialFeatures
// Kind: ScriptStruct; super: none
struct FAtomMaterialFeatures
{
public:
    std::uint8_t MaterialType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TMap<void*, void*> UDIMDecorationMap; // 0x0008 (Size: 0x10, Type: MapProperty)
    void* NormalMap; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* AlphaMask; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* TechnicNormalMap; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* TechnicMasks; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* LookUpTableAtlasTexture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ColorSource; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::int32_t ColorId; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t UVFeature; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TranslucencyType; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x004A
    std::uint8_t MaterialOverride[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    TArray<void*> AdditionalFeatures; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomMaterialFeatures, MaterialType) == 0, "Offset mismatch for FAtomMaterialFeatures::MaterialType");
static_assert(offsetof(FAtomMaterialFeatures, UDIMDecorationMap) == 8, "Offset mismatch for FAtomMaterialFeatures::UDIMDecorationMap");
static_assert(offsetof(FAtomMaterialFeatures, NormalMap) == 24, "Offset mismatch for FAtomMaterialFeatures::NormalMap");
static_assert(offsetof(FAtomMaterialFeatures, AlphaMask) == 32, "Offset mismatch for FAtomMaterialFeatures::AlphaMask");
static_assert(offsetof(FAtomMaterialFeatures, TechnicNormalMap) == 40, "Offset mismatch for FAtomMaterialFeatures::TechnicNormalMap");
static_assert(offsetof(FAtomMaterialFeatures, TechnicMasks) == 48, "Offset mismatch for FAtomMaterialFeatures::TechnicMasks");
static_assert(offsetof(FAtomMaterialFeatures, LookUpTableAtlasTexture) == 56, "Offset mismatch for FAtomMaterialFeatures::LookUpTableAtlasTexture");
static_assert(offsetof(FAtomMaterialFeatures, ColorSource) == 64, "Offset mismatch for FAtomMaterialFeatures::ColorSource");
static_assert(offsetof(FAtomMaterialFeatures, ColorId) == 68, "Offset mismatch for FAtomMaterialFeatures::ColorId");
static_assert(offsetof(FAtomMaterialFeatures, UVFeature) == 72, "Offset mismatch for FAtomMaterialFeatures::UVFeature");
static_assert(offsetof(FAtomMaterialFeatures, TranslucencyType) == 73, "Offset mismatch for FAtomMaterialFeatures::TranslucencyType");
static_assert(offsetof(FAtomMaterialFeatures, MaterialOverride) == 80, "Offset mismatch for FAtomMaterialFeatures::MaterialOverride");
static_assert(offsetof(FAtomMaterialFeatures, AdditionalFeatures) == 96, "Offset mismatch for FAtomMaterialFeatures::AdditionalFeatures");

// /Script/AtomRuntime.AtomMaterialOverride
// Kind: ScriptStruct; super: none
struct FAtomMaterialOverride
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bManualColorSource; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomMaterialOverride, Material) == 0, "Offset mismatch for FAtomMaterialOverride::Material");
static_assert(offsetof(FAtomMaterialOverride, bManualColorSource) == 8, "Offset mismatch for FAtomMaterialOverride::bManualColorSource");

// /Script/AtomRuntime.AtomMergedMeshLODDistanceSettings
// Kind: ScriptStruct; super: none
struct FAtomMergedMeshLODDistanceSettings
{
public:
    std::uint8_t bOverrideLODScreenSizes; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float BaseLODScreenSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BaseLODScreenSizeScaling; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TArray<void*> LODDistances; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomMergedMeshLODDistanceSettings, bOverrideLODScreenSizes) == 0, "Offset mismatch for FAtomMergedMeshLODDistanceSettings::bOverrideLODScreenSizes");
static_assert(offsetof(FAtomMergedMeshLODDistanceSettings, BaseLODScreenSize) == 4, "Offset mismatch for FAtomMergedMeshLODDistanceSettings::BaseLODScreenSize");
static_assert(offsetof(FAtomMergedMeshLODDistanceSettings, BaseLODScreenSizeScaling) == 8, "Offset mismatch for FAtomMergedMeshLODDistanceSettings::BaseLODScreenSizeScaling");
static_assert(offsetof(FAtomMergedMeshLODDistanceSettings, LODDistances) == 16, "Offset mismatch for FAtomMergedMeshLODDistanceSettings::LODDistances");

// /Script/AtomRuntime.AtomModelAssetSettings
// Kind: ScriptStruct; super: none
struct FAtomModelAssetSettings
{
public:
    float Scale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CreateRigidElementComponents; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t OptimizationSettings[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableConnectivity; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomModelAssetSettings, Scale) == 0, "Offset mismatch for FAtomModelAssetSettings::Scale");
static_assert(offsetof(FAtomModelAssetSettings, CreateRigidElementComponents) == 4, "Offset mismatch for FAtomModelAssetSettings::CreateRigidElementComponents");
static_assert(offsetof(FAtomModelAssetSettings, OptimizationSettings) == 8, "Offset mismatch for FAtomModelAssetSettings::OptimizationSettings");
static_assert(offsetof(FAtomModelAssetSettings, bEnableConnectivity) == 32, "Offset mismatch for FAtomModelAssetSettings::bEnableConnectivity");

// /Script/AtomRuntime.AtomModelConfigurationGroup
// Kind: ScriptStruct; super: none
struct FAtomModelConfigurationGroup
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Name[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentGroupId[0x14]; // 0x0014 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrimitiveIds[0x10]; // 0x0028 (Size: 0x10, Type: SetProperty)
    TArray<void*> Sockets; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0048
    std::uint8_t GroupPivot[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> Attributes; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TSet<void*> Tags; // 0x00C0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FAtomModelConfigurationGroup, ID) == 0, "Offset mismatch for FAtomModelConfigurationGroup::ID");
static_assert(offsetof(FAtomModelConfigurationGroup, Name) == 16, "Offset mismatch for FAtomModelConfigurationGroup::Name");
static_assert(offsetof(FAtomModelConfigurationGroup, ParentGroupId) == 20, "Offset mismatch for FAtomModelConfigurationGroup::ParentGroupId");
static_assert(offsetof(FAtomModelConfigurationGroup, PrimitiveIds) == 40, "Offset mismatch for FAtomModelConfigurationGroup::PrimitiveIds");
static_assert(offsetof(FAtomModelConfigurationGroup, Sockets) == 56, "Offset mismatch for FAtomModelConfigurationGroup::Sockets");
static_assert(offsetof(FAtomModelConfigurationGroup, GroupPivot) == 80, "Offset mismatch for FAtomModelConfigurationGroup::GroupPivot");
static_assert(offsetof(FAtomModelConfigurationGroup, Attributes) == 176, "Offset mismatch for FAtomModelConfigurationGroup::Attributes");
static_assert(offsetof(FAtomModelConfigurationGroup, Tags) == 192, "Offset mismatch for FAtomModelConfigurationGroup::Tags");

// /Script/AtomRuntime.AtomModelGeometryOptimizationSettings
// Kind: ScriptStruct; super: none
struct FAtomModelGeometryOptimizationSettings
{
public:
    std::uint8_t bEnforceLODBudgets; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseTagBudget; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t TriangleBudget; // 0x0004 (Size: 0x4, Type: IntProperty)
    double SimplifyBaseTolerance; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double OptimizeBaseTriCost; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FAtomModelGeometryOptimizationSettings, bEnforceLODBudgets) == 0, "Offset mismatch for FAtomModelGeometryOptimizationSettings::bEnforceLODBudgets");
static_assert(offsetof(FAtomModelGeometryOptimizationSettings, bUseTagBudget) == 1, "Offset mismatch for FAtomModelGeometryOptimizationSettings::bUseTagBudget");
static_assert(offsetof(FAtomModelGeometryOptimizationSettings, TriangleBudget) == 4, "Offset mismatch for FAtomModelGeometryOptimizationSettings::TriangleBudget");
static_assert(offsetof(FAtomModelGeometryOptimizationSettings, SimplifyBaseTolerance) == 8, "Offset mismatch for FAtomModelGeometryOptimizationSettings::SimplifyBaseTolerance");
static_assert(offsetof(FAtomModelGeometryOptimizationSettings, OptimizeBaseTriCost) == 16, "Offset mismatch for FAtomModelGeometryOptimizationSettings::OptimizeBaseTriCost");

// /Script/AtomRuntime.AtomModelHierarchicalScene
// Kind: ScriptStruct; super: none
struct FAtomModelHierarchicalScene
{
public:
    TArray<void*> SceneNodes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomModelHierarchicalScene, SceneNodes) == 0, "Offset mismatch for FAtomModelHierarchicalScene::SceneNodes");

// /Script/AtomRuntime.AtomModelHierarchicalSceneNode
// Kind: ScriptStruct; super: none
struct FAtomModelHierarchicalSceneNode
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t WorldTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::int32_t ParentIndex; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0074
    TArray<void*> ItemNames; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomModelHierarchicalSceneNode, Name) == 0, "Offset mismatch for FAtomModelHierarchicalSceneNode::Name");
static_assert(offsetof(FAtomModelHierarchicalSceneNode, WorldTransform) == 16, "Offset mismatch for FAtomModelHierarchicalSceneNode::WorldTransform");
static_assert(offsetof(FAtomModelHierarchicalSceneNode, ParentIndex) == 112, "Offset mismatch for FAtomModelHierarchicalSceneNode::ParentIndex");
static_assert(offsetof(FAtomModelHierarchicalSceneNode, ItemNames) == 120, "Offset mismatch for FAtomModelHierarchicalSceneNode::ItemNames");

// /Script/AtomRuntime.AtomModelIssue
// Kind: ScriptStruct; super: none
struct FAtomModelIssue
{
public:
    std::uint8_t Issue; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t ID; // 0x0004 (Size: 0x4, Type: IntProperty)
    FString StringData; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAtomModelIssue, Issue) == 0, "Offset mismatch for FAtomModelIssue::Issue");
static_assert(offsetof(FAtomModelIssue, ID) == 4, "Offset mismatch for FAtomModelIssue::ID");
static_assert(offsetof(FAtomModelIssue, StringData) == 8, "Offset mismatch for FAtomModelIssue::StringData");

// /Script/AtomRuntime.AtomModelMapping
// Kind: ScriptStruct; super: TableRowBase
struct FAtomModelMapping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString ModelName; // 0x0008 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> ProcessedResultsMap; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAtomModelMapping, ModelName) == 8, "Offset mismatch for FAtomModelMapping::ModelName");
static_assert(offsetof(FAtomModelMapping, ProcessedResultsMap) == 24, "Offset mismatch for FAtomModelMapping::ProcessedResultsMap");

// /Script/AtomRuntime.AtomModelOcclusionCache
// Kind: ScriptStruct; super: none
struct FAtomModelOcclusionCache
{
public:
    TMap<void*, void*> PartsOcclusion; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAtomModelOcclusionCache, PartsOcclusion) == 0, "Offset mismatch for FAtomModelOcclusionCache::PartsOcclusion");

// /Script/AtomRuntime.AtomModelPart
// Kind: ScriptStruct; super: none
struct FAtomModelPart
{
public:
    std::uint8_t AtomPrimitive[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Transforms; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t PartId; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0034
    FString PartRevision; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> ColorSurfaces; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Decorations; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreCommonPartCulling; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomModelPart, AtomPrimitive) == 0, "Offset mismatch for FAtomModelPart::AtomPrimitive");
static_assert(offsetof(FAtomModelPart, Transforms) == 32, "Offset mismatch for FAtomModelPart::Transforms");
static_assert(offsetof(FAtomModelPart, PartId) == 48, "Offset mismatch for FAtomModelPart::PartId");
static_assert(offsetof(FAtomModelPart, PartRevision) == 56, "Offset mismatch for FAtomModelPart::PartRevision");
static_assert(offsetof(FAtomModelPart, ColorSurfaces) == 72, "Offset mismatch for FAtomModelPart::ColorSurfaces");
static_assert(offsetof(FAtomModelPart, Decorations) == 88, "Offset mismatch for FAtomModelPart::Decorations");
static_assert(offsetof(FAtomModelPart, bIgnoreCommonPartCulling) == 104, "Offset mismatch for FAtomModelPart::bIgnoreCommonPartCulling");

// /Script/AtomRuntime.AtomModelPartColorInfo
// Kind: ScriptStruct; super: none
struct FAtomModelPartColorInfo
{
public:
    std::uint8_t Color[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t ColorId; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t MaterialType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAtomModelPartColorInfo, Color) == 0, "Offset mismatch for FAtomModelPartColorInfo::Color");
static_assert(offsetof(FAtomModelPartColorInfo, ColorId) == 4, "Offset mismatch for FAtomModelPartColorInfo::ColorId");
static_assert(offsetof(FAtomModelPartColorInfo, MaterialType) == 8, "Offset mismatch for FAtomModelPartColorInfo::MaterialType");

// /Script/AtomRuntime.AtomModelPartDecorationInfo
// Kind: ScriptStruct; super: none
struct FAtomModelPartDecorationInfo
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Texture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FString PrimitiveSurfaceName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t PrimitiveSurfaceIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomModelPartDecorationInfo, Material) == 0, "Offset mismatch for FAtomModelPartDecorationInfo::Material");
static_assert(offsetof(FAtomModelPartDecorationInfo, Texture) == 8, "Offset mismatch for FAtomModelPartDecorationInfo::Texture");
static_assert(offsetof(FAtomModelPartDecorationInfo, PrimitiveSurfaceName) == 16, "Offset mismatch for FAtomModelPartDecorationInfo::PrimitiveSurfaceName");
static_assert(offsetof(FAtomModelPartDecorationInfo, PrimitiveSurfaceIndex) == 32, "Offset mismatch for FAtomModelPartDecorationInfo::PrimitiveSurfaceIndex");

// /Script/AtomRuntime.AtomModelPartGuid
// Kind: ScriptStruct; super: none
struct FAtomModelPartGuid
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t PartIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomModelPartGuid, Guid) == 0, "Offset mismatch for FAtomModelPartGuid::Guid");
static_assert(offsetof(FAtomModelPartGuid, PartIndex) == 16, "Offset mismatch for FAtomModelPartGuid::PartIndex");

// /Script/AtomRuntime.AtomModelPartInstanceInfo
// Kind: ScriptStruct; super: none
struct FAtomModelPartInstanceInfo
{
public:
    std::uint8_t PartGuid[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::int32_t PartId; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    void* Primitive; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Transforms; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Decorations; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Colors; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SelectionSets; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    FString Group; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString ParentGroup; // 0x0078 (Size: 0x10, Type: StrProperty)
    TArray<void*> CommonParts; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsUndersideVisible; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomModelPartInstanceInfo, PartGuid) == 0, "Offset mismatch for FAtomModelPartInstanceInfo::PartGuid");
static_assert(offsetof(FAtomModelPartInstanceInfo, PartId) == 24, "Offset mismatch for FAtomModelPartInstanceInfo::PartId");
static_assert(offsetof(FAtomModelPartInstanceInfo, Primitive) == 32, "Offset mismatch for FAtomModelPartInstanceInfo::Primitive");
static_assert(offsetof(FAtomModelPartInstanceInfo, Transforms) == 40, "Offset mismatch for FAtomModelPartInstanceInfo::Transforms");
static_assert(offsetof(FAtomModelPartInstanceInfo, Decorations) == 56, "Offset mismatch for FAtomModelPartInstanceInfo::Decorations");
static_assert(offsetof(FAtomModelPartInstanceInfo, Colors) == 72, "Offset mismatch for FAtomModelPartInstanceInfo::Colors");
static_assert(offsetof(FAtomModelPartInstanceInfo, SelectionSets) == 88, "Offset mismatch for FAtomModelPartInstanceInfo::SelectionSets");
static_assert(offsetof(FAtomModelPartInstanceInfo, Group) == 104, "Offset mismatch for FAtomModelPartInstanceInfo::Group");
static_assert(offsetof(FAtomModelPartInstanceInfo, ParentGroup) == 120, "Offset mismatch for FAtomModelPartInstanceInfo::ParentGroup");
static_assert(offsetof(FAtomModelPartInstanceInfo, CommonParts) == 136, "Offset mismatch for FAtomModelPartInstanceInfo::CommonParts");
static_assert(offsetof(FAtomModelPartInstanceInfo, bIsUndersideVisible) == 152, "Offset mismatch for FAtomModelPartInstanceInfo::bIsUndersideVisible");

// /Script/AtomRuntime.AtomModelPartReference
// Kind: ScriptStruct; super: none
struct FAtomModelPartReference
{
public:
    std::uint8_t PrimitiveUUID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t PartIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomModelPartReference, PrimitiveUUID) == 0, "Offset mismatch for FAtomModelPartReference::PrimitiveUUID");
static_assert(offsetof(FAtomModelPartReference, PartIndex) == 16, "Offset mismatch for FAtomModelPartReference::PartIndex");

// /Script/AtomRuntime.AtomModelPartsCollection
// Kind: ScriptStruct; super: none
struct FAtomModelPartsCollection
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pivot[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    TArray<void*> Parts; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomModelPartsCollection, Name) == 0, "Offset mismatch for FAtomModelPartsCollection::Name");
static_assert(offsetof(FAtomModelPartsCollection, Pivot) == 16, "Offset mismatch for FAtomModelPartsCollection::Pivot");
static_assert(offsetof(FAtomModelPartsCollection, Parts) == 112, "Offset mismatch for FAtomModelPartsCollection::Parts");

// /Script/AtomRuntime.AtomModelPrimitive
// Kind: ScriptStruct; super: none
struct FAtomModelPrimitive
{
public:
    TArray<void*> Parts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DesignId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t UUID[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    FName DesignName; // 0x0024 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAtomModelPrimitive, Parts) == 0, "Offset mismatch for FAtomModelPrimitive::Parts");
static_assert(offsetof(FAtomModelPrimitive, DesignId) == 16, "Offset mismatch for FAtomModelPrimitive::DesignId");
static_assert(offsetof(FAtomModelPrimitive, UUID) == 20, "Offset mismatch for FAtomModelPrimitive::UUID");
static_assert(offsetof(FAtomModelPrimitive, DesignName) == 36, "Offset mismatch for FAtomModelPrimitive::DesignName");

// /Script/AtomRuntime.AtomModelPrimitiveGroup
// Kind: ScriptStruct; super: AtomPrimitiveGroup
struct FAtomModelPrimitiveGroup
{
public:
    std::uint8_t PivotOrigin[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomModelPrimitiveGroup, PivotOrigin) == 0, "Offset mismatch for FAtomModelPrimitiveGroup::PivotOrigin");

// /Script/AtomRuntime.AtomModelPrimitiveInstance
// Kind: ScriptStruct; super: none
struct FAtomModelPrimitiveInstance
{
public:
    void* Primitive; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t PrimitiveTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t PivotOrigin[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomModelPrimitiveInstance, Primitive) == 0, "Offset mismatch for FAtomModelPrimitiveInstance::Primitive");
static_assert(offsetof(FAtomModelPrimitiveInstance, PrimitiveTransform) == 16, "Offset mismatch for FAtomModelPrimitiveInstance::PrimitiveTransform");
static_assert(offsetof(FAtomModelPrimitiveInstance, PivotOrigin) == 112, "Offset mismatch for FAtomModelPrimitiveInstance::PivotOrigin");

// /Script/AtomRuntime.AtomModelPrimitiveOcclusionInfo
// Kind: ScriptStruct; super: none
struct FAtomModelPrimitiveOcclusionInfo
{
public:
    std::uint8_t bShellOccluded; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TMap<void*, void*> CommonPartsOccluded; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAtomModelPrimitiveOcclusionInfo, bShellOccluded) == 0, "Offset mismatch for FAtomModelPrimitiveOcclusionInfo::bShellOccluded");
static_assert(offsetof(FAtomModelPrimitiveOcclusionInfo, CommonPartsOccluded) == 8, "Offset mismatch for FAtomModelPrimitiveOcclusionInfo::CommonPartsOccluded");

// /Script/AtomRuntime.AtomModelProcessedResults
// Kind: ScriptStruct; super: none
struct FAtomModelProcessedResults
{
public:
    std::uint8_t ResultType[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> ProcessedResults; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomModelProcessedResults, ResultType) == 0, "Offset mismatch for FAtomModelProcessedResults::ResultType");
static_assert(offsetof(FAtomModelProcessedResults, ProcessedResults) == 32, "Offset mismatch for FAtomModelProcessedResults::ProcessedResults");

// /Script/AtomRuntime.AtomModelProcessorInstance
// Kind: ScriptStruct; super: none
struct FAtomModelProcessorInstance
{
public:
    std::uint8_t bUseCustomSettings; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Processor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* InternalTransientPropStorage; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ProcessedObjects; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomModelProcessorInstance, bUseCustomSettings) == 0, "Offset mismatch for FAtomModelProcessorInstance::bUseCustomSettings");
static_assert(offsetof(FAtomModelProcessorInstance, Processor) == 8, "Offset mismatch for FAtomModelProcessorInstance::Processor");
static_assert(offsetof(FAtomModelProcessorInstance, InternalTransientPropStorage) == 16, "Offset mismatch for FAtomModelProcessorInstance::InternalTransientPropStorage");
static_assert(offsetof(FAtomModelProcessorInstance, ProcessedObjects) == 24, "Offset mismatch for FAtomModelProcessorInstance::ProcessedObjects");

// /Script/AtomRuntime.AtomModelSelectionSet
// Kind: ScriptStruct; super: none
struct FAtomModelSelectionSet
{
public:
    std::uint8_t PrimitiveIds[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t SelectionSetName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t ImportedName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t ID[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomModelSelectionSet, PrimitiveIds) == 0, "Offset mismatch for FAtomModelSelectionSet::PrimitiveIds");
static_assert(offsetof(FAtomModelSelectionSet, SelectionSetName) == 16, "Offset mismatch for FAtomModelSelectionSet::SelectionSetName");
static_assert(offsetof(FAtomModelSelectionSet, ImportedName) == 20, "Offset mismatch for FAtomModelSelectionSet::ImportedName");
static_assert(offsetof(FAtomModelSelectionSet, ID) == 24, "Offset mismatch for FAtomModelSelectionSet::ID");

// /Script/AtomRuntime.AtomModelSocket
// Kind: ScriptStruct; super: none
struct FAtomModelSocket
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName Name; // 0x0010 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0018
    std::uint8_t Transform[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomModelSocket, ID) == 0, "Offset mismatch for FAtomModelSocket::ID");
static_assert(offsetof(FAtomModelSocket, Name) == 16, "Offset mismatch for FAtomModelSocket::Name");
static_assert(offsetof(FAtomModelSocket, Transform) == 32, "Offset mismatch for FAtomModelSocket::Transform");

// /Script/AtomRuntime.AtomModelTags
// Kind: ScriptStruct; super: none
struct FAtomModelTags
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomModelTags, Tags) == 0, "Offset mismatch for FAtomModelTags::Tags");

// /Script/AtomRuntime.AtomOnProcessPrimitiveSettings
// Kind: ScriptStruct; super: none
struct FAtomOnProcessPrimitiveSettings
{
public:
    FString CustomLocation; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bSupportDecorations; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomOnProcessPrimitiveSettings, CustomLocation) == 0, "Offset mismatch for FAtomOnProcessPrimitiveSettings::CustomLocation");
static_assert(offsetof(FAtomOnProcessPrimitiveSettings, bSupportDecorations) == 16, "Offset mismatch for FAtomOnProcessPrimitiveSettings::bSupportDecorations");

// /Script/AtomRuntime.AtomPartConnectivityFieldReference
// Kind: ScriptStruct; super: none
struct FAtomPartConnectivityFieldReference
{
public:
    std::uint8_t PartInfo[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ConnectivityField[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPartConnectivityFieldReference, PartInfo) == 0, "Offset mismatch for FAtomPartConnectivityFieldReference::PartInfo");
static_assert(offsetof(FAtomPartConnectivityFieldReference, ConnectivityField) == 176, "Offset mismatch for FAtomPartConnectivityFieldReference::ConnectivityField");

// /Script/AtomRuntime.AtomPlacementResult
// Kind: ScriptStruct; super: none
struct FAtomPlacementResult
{
public:
    std::uint8_t TransformDelta[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t ConnectionProxy[0x3A0]; // 0x0060 (Size: 0x3A0, Type: StructProperty)
    std::uint8_t PlacementType; // 0x0400 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAtomPlacementResult, TransformDelta) == 0, "Offset mismatch for FAtomPlacementResult::TransformDelta");
static_assert(offsetof(FAtomPlacementResult, ConnectionProxy) == 96, "Offset mismatch for FAtomPlacementResult::ConnectionProxy");
static_assert(offsetof(FAtomPlacementResult, PlacementType) == 1024, "Offset mismatch for FAtomPlacementResult::PlacementType");

// /Script/AtomRuntime.AtomPrimitiveBevelOptions
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveBevelOptions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPrimitiveBuildOptions
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveBuildOptions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPrimitiveBuildSettings
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveBuildSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPrimitiveCollisionGeometry
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveCollisionGeometry
{
public:
    std::uint8_t AggGeom[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionGeometry, AggGeom) == 0, "Offset mismatch for FAtomPrimitiveCollisionGeometry::AggGeom");

// /Script/AtomRuntime.AtomPrimitiveCollisionGeometryBox
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveCollisionGeometryBox
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float X; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionGeometryBox, Center) == 0, "Offset mismatch for FAtomPrimitiveCollisionGeometryBox::Center");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryBox, Rotation) == 24, "Offset mismatch for FAtomPrimitiveCollisionGeometryBox::Rotation");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryBox, X) == 48, "Offset mismatch for FAtomPrimitiveCollisionGeometryBox::X");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryBox, Y) == 52, "Offset mismatch for FAtomPrimitiveCollisionGeometryBox::Y");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryBox, Z) == 56, "Offset mismatch for FAtomPrimitiveCollisionGeometryBox::Z");

// /Script/AtomRuntime.AtomPrimitiveCollisionGeometryConvex
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveCollisionGeometryConvex
{
public:
    TArray<void*> VertexData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IndexData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ElemBox[0x40]; // 0x0020 (Size: 0x40, Type: StructProperty)
    std::uint8_t Transform[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionGeometryConvex, VertexData) == 0, "Offset mismatch for FAtomPrimitiveCollisionGeometryConvex::VertexData");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryConvex, IndexData) == 16, "Offset mismatch for FAtomPrimitiveCollisionGeometryConvex::IndexData");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryConvex, ElemBox) == 32, "Offset mismatch for FAtomPrimitiveCollisionGeometryConvex::ElemBox");
static_assert(offsetof(FAtomPrimitiveCollisionGeometryConvex, Transform) == 96, "Offset mismatch for FAtomPrimitiveCollisionGeometryConvex::Transform");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeBase
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveCollisionVolumeBase
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint16_t BoneIndex; // 0x0018 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeBase, Location) == 0, "Offset mismatch for FAtomPrimitiveCollisionVolumeBase::Location");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeBase, BoneIndex) == 24, "Offset mismatch for FAtomPrimitiveCollisionVolumeBase::BoneIndex");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeBox
// Kind: ScriptStruct; super: AtomPrimitiveCollisionVolumeBase
struct FAtomPrimitiveCollisionVolumeBox
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t HalfExtent[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeBox, Rotation) == 32, "Offset mismatch for FAtomPrimitiveCollisionVolumeBox::Rotation");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeBox, HalfExtent) == 56, "Offset mismatch for FAtomPrimitiveCollisionVolumeBox::HalfExtent");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeCapsule
// Kind: ScriptStruct; super: AtomPrimitiveCollisionVolumeBase
struct FAtomPrimitiveCollisionVolumeCapsule
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float HalfLength; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeCapsule, Rotation) == 32, "Offset mismatch for FAtomPrimitiveCollisionVolumeCapsule::Rotation");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeCapsule, Radius) == 56, "Offset mismatch for FAtomPrimitiveCollisionVolumeCapsule::Radius");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeCapsule, HalfLength) == 60, "Offset mismatch for FAtomPrimitiveCollisionVolumeCapsule::HalfLength");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeContainer
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveCollisionVolumeContainer
{
public:
    TArray<void*> Boxes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Spheres; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Capsules; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Cylinders; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Tubes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeContainer, Boxes) == 0, "Offset mismatch for FAtomPrimitiveCollisionVolumeContainer::Boxes");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeContainer, Spheres) == 16, "Offset mismatch for FAtomPrimitiveCollisionVolumeContainer::Spheres");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeContainer, Capsules) == 32, "Offset mismatch for FAtomPrimitiveCollisionVolumeContainer::Capsules");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeContainer, Cylinders) == 48, "Offset mismatch for FAtomPrimitiveCollisionVolumeContainer::Cylinders");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeContainer, Tubes) == 64, "Offset mismatch for FAtomPrimitiveCollisionVolumeContainer::Tubes");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeCylinder
// Kind: ScriptStruct; super: AtomPrimitiveCollisionVolumeBase
struct FAtomPrimitiveCollisionVolumeCylinder
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float HalfLength; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeCylinder, Rotation) == 32, "Offset mismatch for FAtomPrimitiveCollisionVolumeCylinder::Rotation");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeCylinder, Radius) == 56, "Offset mismatch for FAtomPrimitiveCollisionVolumeCylinder::Radius");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeCylinder, HalfLength) == 60, "Offset mismatch for FAtomPrimitiveCollisionVolumeCylinder::HalfLength");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeHollowCylinder
// Kind: ScriptStruct; super: AtomPrimitiveCollisionVolumeBase
struct FAtomPrimitiveCollisionVolumeHollowCylinder
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float InnerRadius; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float OuterRadius; // 0x003C (Size: 0x4, Type: FloatProperty)
    float HalfLength; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeHollowCylinder, Rotation) == 32, "Offset mismatch for FAtomPrimitiveCollisionVolumeHollowCylinder::Rotation");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeHollowCylinder, InnerRadius) == 56, "Offset mismatch for FAtomPrimitiveCollisionVolumeHollowCylinder::InnerRadius");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeHollowCylinder, OuterRadius) == 60, "Offset mismatch for FAtomPrimitiveCollisionVolumeHollowCylinder::OuterRadius");
static_assert(offsetof(FAtomPrimitiveCollisionVolumeHollowCylinder, HalfLength) == 64, "Offset mismatch for FAtomPrimitiveCollisionVolumeHollowCylinder::HalfLength");

// /Script/AtomRuntime.AtomPrimitiveCollisionVolumeSphere
// Kind: ScriptStruct; super: AtomPrimitiveCollisionVolumeBase
struct FAtomPrimitiveCollisionVolumeSphere
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    float Radius; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomPrimitiveCollisionVolumeSphere, Radius) == 32, "Offset mismatch for FAtomPrimitiveCollisionVolumeSphere::Radius");

// /Script/AtomRuntime.AtomPrimitiveCommonPart
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveCommonPart
{
public:
    TArray<void*> UnscaledInstances; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomPrimitiveCommonPart, UnscaledInstances) == 0, "Offset mismatch for FAtomPrimitiveCommonPart::UnscaledInstances");

// /Script/AtomRuntime.AtomPrimitiveConnection
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveConnection
{
public:
    std::uint8_t From[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t To[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveConnection, From) == 0, "Offset mismatch for FAtomPrimitiveConnection::From");
static_assert(offsetof(FAtomPrimitiveConnection, To) == 12, "Offset mismatch for FAtomPrimitiveConnection::To");

// /Script/AtomRuntime.AtomPrimitiveConnectionPointReference
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveConnectionPointReference
{
public:
    std::int16_t PlanarFieldIndex; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t ConnectionPointIndex; // 0x0002 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FAtomPrimitiveConnectionPointReference, PlanarFieldIndex) == 0, "Offset mismatch for FAtomPrimitiveConnectionPointReference::PlanarFieldIndex");
static_assert(offsetof(FAtomPrimitiveConnectionPointReference, ConnectionPointIndex) == 2, "Offset mismatch for FAtomPrimitiveConnectionPointReference::ConnectionPointIndex");

// /Script/AtomRuntime.AtomPrimitiveDetailTextureData
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveDetailTextureData
{
public:
    std::uint8_t Texture[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FName Style; // 0x0020 (Size: 0x8, Type: NameProperty)
    TArray<void*> Lods; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GeometrySection; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureType; // 0x0039 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAtomPrimitiveDetailTextureData, Texture) == 0, "Offset mismatch for FAtomPrimitiveDetailTextureData::Texture");
static_assert(offsetof(FAtomPrimitiveDetailTextureData, Style) == 32, "Offset mismatch for FAtomPrimitiveDetailTextureData::Style");
static_assert(offsetof(FAtomPrimitiveDetailTextureData, Lods) == 40, "Offset mismatch for FAtomPrimitiveDetailTextureData::Lods");
static_assert(offsetof(FAtomPrimitiveDetailTextureData, GeometrySection) == 56, "Offset mismatch for FAtomPrimitiveDetailTextureData::GeometrySection");
static_assert(offsetof(FAtomPrimitiveDetailTextureData, TextureType) == 57, "Offset mismatch for FAtomPrimitiveDetailTextureData::TextureType");

// /Script/AtomRuntime.AtomPrimitiveGeometryAndTransform
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGeometryAndTransform
{
public:
    void* AtomPrimitiveGeometry; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveGeometryAndTransform, AtomPrimitiveGeometry) == 0, "Offset mismatch for FAtomPrimitiveGeometryAndTransform::AtomPrimitiveGeometry");
static_assert(offsetof(FAtomPrimitiveGeometryAndTransform, Transform) == 16, "Offset mismatch for FAtomPrimitiveGeometryAndTransform::Transform");

// /Script/AtomRuntime.AtomPrimitiveGeometryLODs
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGeometryLODs
{
public:
    TArray<void*> GeometryLODs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GeometryLODsMaterials; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* HiResNaniteGeomery; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HiResNaniteGeomeryMaterials[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t Collision[0xA0]; // 0x0048 (Size: 0xA0, Type: StructProperty)
    std::uint8_t DetailedCollision[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveGeometryLODs, GeometryLODs) == 0, "Offset mismatch for FAtomPrimitiveGeometryLODs::GeometryLODs");
static_assert(offsetof(FAtomPrimitiveGeometryLODs, GeometryLODsMaterials) == 16, "Offset mismatch for FAtomPrimitiveGeometryLODs::GeometryLODsMaterials");
static_assert(offsetof(FAtomPrimitiveGeometryLODs, HiResNaniteGeomery) == 32, "Offset mismatch for FAtomPrimitiveGeometryLODs::HiResNaniteGeomery");
static_assert(offsetof(FAtomPrimitiveGeometryLODs, HiResNaniteGeomeryMaterials) == 40, "Offset mismatch for FAtomPrimitiveGeometryLODs::HiResNaniteGeomeryMaterials");
static_assert(offsetof(FAtomPrimitiveGeometryLODs, Collision) == 72, "Offset mismatch for FAtomPrimitiveGeometryLODs::Collision");
static_assert(offsetof(FAtomPrimitiveGeometryLODs, DetailedCollision) == 232, "Offset mismatch for FAtomPrimitiveGeometryLODs::DetailedCollision");

// /Script/AtomRuntime.AtomPrimitiveGeometryMaterialAssignments
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGeometryMaterialAssignments
{
public:
    TArray<void*> MaterialSlotName; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialFeatures; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomPrimitiveGeometryMaterialAssignments, MaterialSlotName) == 0, "Offset mismatch for FAtomPrimitiveGeometryMaterialAssignments::MaterialSlotName");
static_assert(offsetof(FAtomPrimitiveGeometryMaterialAssignments, MaterialFeatures) == 16, "Offset mismatch for FAtomPrimitiveGeometryMaterialAssignments::MaterialFeatures");

// /Script/AtomRuntime.AtomPrimitiveGeometrySectionFilterParams
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGeometrySectionFilterParams
{
public:
    TArray<void*> UncommonPartsIncludeList; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UncommonPartsExcludeList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OtherPartsIncludeList; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OtherPartsExcludeList; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ColorChangeIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomPrimitiveGeometrySectionFilterParams, UncommonPartsIncludeList) == 0, "Offset mismatch for FAtomPrimitiveGeometrySectionFilterParams::UncommonPartsIncludeList");
static_assert(offsetof(FAtomPrimitiveGeometrySectionFilterParams, UncommonPartsExcludeList) == 16, "Offset mismatch for FAtomPrimitiveGeometrySectionFilterParams::UncommonPartsExcludeList");
static_assert(offsetof(FAtomPrimitiveGeometrySectionFilterParams, OtherPartsIncludeList) == 32, "Offset mismatch for FAtomPrimitiveGeometrySectionFilterParams::OtherPartsIncludeList");
static_assert(offsetof(FAtomPrimitiveGeometrySectionFilterParams, OtherPartsExcludeList) == 48, "Offset mismatch for FAtomPrimitiveGeometrySectionFilterParams::OtherPartsExcludeList");
static_assert(offsetof(FAtomPrimitiveGeometrySectionFilterParams, ColorChangeIndex) == 64, "Offset mismatch for FAtomPrimitiveGeometrySectionFilterParams::ColorChangeIndex");

// /Script/AtomRuntime.AtomPrimitiveGeometrySectionReference
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGeometrySectionReference
{
public:
    std::uint8_t StyleName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t LOD; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomPrimitiveGeometrySectionReference, StyleName) == 0, "Offset mismatch for FAtomPrimitiveGeometrySectionReference::StyleName");
static_assert(offsetof(FAtomPrimitiveGeometrySectionReference, LOD) == 4, "Offset mismatch for FAtomPrimitiveGeometrySectionReference::LOD");
static_assert(offsetof(FAtomPrimitiveGeometrySectionReference, SectionIndex) == 8, "Offset mismatch for FAtomPrimitiveGeometrySectionReference::SectionIndex");

// /Script/AtomRuntime.AtomPrimitiveGeometrySectionTextureInfos
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGeometrySectionTextureInfos
{
public:
    TMap<void*, void*> TextureInfos; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FAtomPrimitiveGeometrySectionTextureInfos, TextureInfos) == 0, "Offset mismatch for FAtomPrimitiveGeometrySectionTextureInfos::TextureInfos");

// /Script/AtomRuntime.AtomPrimitiveGroup
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveGroup
{
public:
    std::uint8_t PivotOrigin[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveGroup, PivotOrigin) == 0, "Offset mismatch for FAtomPrimitiveGroup::PivotOrigin");

// /Script/AtomRuntime.AtomPrimitiveInstanceData
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveInstanceData
{
public:
    TArray<void*> MaterialAssignments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> MeshOverride; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FAtomPrimitiveInstanceData, MaterialAssignments) == 0, "Offset mismatch for FAtomPrimitiveInstanceData::MaterialAssignments");
static_assert(offsetof(FAtomPrimitiveInstanceData, MeshOverride) == 16, "Offset mismatch for FAtomPrimitiveInstanceData::MeshOverride");

// /Script/AtomRuntime.AtomPrimitiveMapping
// Kind: ScriptStruct; super: TableRowBase
struct FAtomPrimitiveMapping
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t PartId; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    FString Revision; // 0x0010 (Size: 0x10, Type: StrProperty)
    FName DesignName; // 0x0020 (Size: 0x8, Type: NameProperty)
    std::uint8_t StaticMesh[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AllowedColorSet[0x10]; // 0x0048 (Size: 0x10, Type: SetProperty)
    std::uint8_t SearchTerms[0x10]; // 0x0058 (Size: 0x10, Type: SetProperty)
    TSoftObjectPtr<void> Thumbnail; // 0x0068 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t ThumbnailPrimitiveOffset[0x60]; // 0x0090 (Size: 0x60, Type: StructProperty)
    FName SanitizedName; // 0x00F0 (Size: 0x8, Type: NameProperty)
    std::uint8_t AtomPrimitiveOverride[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CategoryName[0x4]; // 0x0118 (Size: 0x4, Type: NameProperty)
    std::int32_t CategoryIndex; // 0x011C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomPrimitiveMapping, PartId) == 8, "Offset mismatch for FAtomPrimitiveMapping::PartId");
static_assert(offsetof(FAtomPrimitiveMapping, Revision) == 16, "Offset mismatch for FAtomPrimitiveMapping::Revision");
static_assert(offsetof(FAtomPrimitiveMapping, DesignName) == 32, "Offset mismatch for FAtomPrimitiveMapping::DesignName");
static_assert(offsetof(FAtomPrimitiveMapping, StaticMesh) == 40, "Offset mismatch for FAtomPrimitiveMapping::StaticMesh");
static_assert(offsetof(FAtomPrimitiveMapping, AllowedColorSet) == 72, "Offset mismatch for FAtomPrimitiveMapping::AllowedColorSet");
static_assert(offsetof(FAtomPrimitiveMapping, SearchTerms) == 88, "Offset mismatch for FAtomPrimitiveMapping::SearchTerms");
static_assert(offsetof(FAtomPrimitiveMapping, Thumbnail) == 104, "Offset mismatch for FAtomPrimitiveMapping::Thumbnail");
static_assert(offsetof(FAtomPrimitiveMapping, ThumbnailPrimitiveOffset) == 144, "Offset mismatch for FAtomPrimitiveMapping::ThumbnailPrimitiveOffset");
static_assert(offsetof(FAtomPrimitiveMapping, SanitizedName) == 240, "Offset mismatch for FAtomPrimitiveMapping::SanitizedName");
static_assert(offsetof(FAtomPrimitiveMapping, AtomPrimitiveOverride) == 248, "Offset mismatch for FAtomPrimitiveMapping::AtomPrimitiveOverride");
static_assert(offsetof(FAtomPrimitiveMapping, CategoryName) == 280, "Offset mismatch for FAtomPrimitiveMapping::CategoryName");
static_assert(offsetof(FAtomPrimitiveMapping, CategoryIndex) == 284, "Offset mismatch for FAtomPrimitiveMapping::CategoryIndex");

// /Script/AtomRuntime.AtomPrimitiveMaterialAssignment
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveMaterialAssignment
{
public:
    FName SlotName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Material[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsCustomMaterialOverride; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasManualColorSource; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomPrimitiveMaterialAssignment, SlotName) == 0, "Offset mismatch for FAtomPrimitiveMaterialAssignment::SlotName");
static_assert(offsetof(FAtomPrimitiveMaterialAssignment, Material) == 8, "Offset mismatch for FAtomPrimitiveMaterialAssignment::Material");
static_assert(offsetof(FAtomPrimitiveMaterialAssignment, bIsCustomMaterialOverride) == 40, "Offset mismatch for FAtomPrimitiveMaterialAssignment::bIsCustomMaterialOverride");
static_assert(offsetof(FAtomPrimitiveMaterialAssignment, bHasManualColorSource) == 41, "Offset mismatch for FAtomPrimitiveMaterialAssignment::bHasManualColorSource");

// /Script/AtomRuntime.AtomPrimitiveOptimizationSettings
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveOptimizationSettings
{
public:
    std::uint8_t OptimizationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t GeometryOptions; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    std::uint8_t ApproximationShapeType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0009
    std::uint8_t ApproximationStrategy; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x000D
    std::uint8_t bUseOptimizationAxisOverride; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0011
    std::uint8_t ApproximationAxisOverride[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomPrimitiveOptimizationSettings, OptimizationType) == 0, "Offset mismatch for FAtomPrimitiveOptimizationSettings::OptimizationType");
static_assert(offsetof(FAtomPrimitiveOptimizationSettings, GeometryOptions) == 4, "Offset mismatch for FAtomPrimitiveOptimizationSettings::GeometryOptions");
static_assert(offsetof(FAtomPrimitiveOptimizationSettings, ApproximationShapeType) == 8, "Offset mismatch for FAtomPrimitiveOptimizationSettings::ApproximationShapeType");
static_assert(offsetof(FAtomPrimitiveOptimizationSettings, ApproximationStrategy) == 12, "Offset mismatch for FAtomPrimitiveOptimizationSettings::ApproximationStrategy");
static_assert(offsetof(FAtomPrimitiveOptimizationSettings, bUseOptimizationAxisOverride) == 16, "Offset mismatch for FAtomPrimitiveOptimizationSettings::bUseOptimizationAxisOverride");
static_assert(offsetof(FAtomPrimitiveOptimizationSettings, ApproximationAxisOverride) == 24, "Offset mismatch for FAtomPrimitiveOptimizationSettings::ApproximationAxisOverride");

// /Script/AtomRuntime.AtomPrimitivePhysicsAttributes
// Kind: ScriptStruct; super: none
struct FAtomPrimitivePhysicsAttributes
{
public:
    std::uint8_t InertiaTensor[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    std::uint8_t CenterOfMass[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0098 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAtomPrimitivePhysicsAttributes, InertiaTensor) == 0, "Offset mismatch for FAtomPrimitivePhysicsAttributes::InertiaTensor");
static_assert(offsetof(FAtomPrimitivePhysicsAttributes, CenterOfMass) == 128, "Offset mismatch for FAtomPrimitivePhysicsAttributes::CenterOfMass");
static_assert(offsetof(FAtomPrimitivePhysicsAttributes, Mass) == 152, "Offset mismatch for FAtomPrimitivePhysicsAttributes::Mass");

// /Script/AtomRuntime.AtomPrimitiveStyleImportData
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveStyleImportData
{
public:
    FString Revision; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t DatabaseSourceType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    FString SourceDatabase; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::int32_t ImportWarnings; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomPrimitiveStyleImportData, Revision) == 0, "Offset mismatch for FAtomPrimitiveStyleImportData::Revision");
static_assert(offsetof(FAtomPrimitiveStyleImportData, DatabaseSourceType) == 16, "Offset mismatch for FAtomPrimitiveStyleImportData::DatabaseSourceType");
static_assert(offsetof(FAtomPrimitiveStyleImportData, SourceDatabase) == 24, "Offset mismatch for FAtomPrimitiveStyleImportData::SourceDatabase");
static_assert(offsetof(FAtomPrimitiveStyleImportData, ImportWarnings) == 40, "Offset mismatch for FAtomPrimitiveStyleImportData::ImportWarnings");

// /Script/AtomRuntime.AtomPrimitiveUserNote
// Kind: ScriptStruct; super: none
struct FAtomPrimitiveUserNote
{
public:
    FString Text; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PartRevision; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAtomPrimitiveUserNote, Text) == 0, "Offset mismatch for FAtomPrimitiveUserNote::Text");
static_assert(offsetof(FAtomPrimitiveUserNote, PartRevision) == 16, "Offset mismatch for FAtomPrimitiveUserNote::PartRevision");

// /Script/AtomRuntime.AtomProcessorResult
// Kind: ScriptStruct; super: none
struct FAtomProcessorResult
{
public:
    std::uint8_t bSuccess; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> ProcessedObjects; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SharedAssets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomProcessorResult, bSuccess) == 0, "Offset mismatch for FAtomProcessorResult::bSuccess");
static_assert(offsetof(FAtomProcessorResult, ProcessedObjects) == 8, "Offset mismatch for FAtomProcessorResult::ProcessedObjects");
static_assert(offsetof(FAtomProcessorResult, SharedAssets) == 24, "Offset mismatch for FAtomProcessorResult::SharedAssets");

// /Script/AtomRuntime.AtomResolvedModelPartReference
// Kind: ScriptStruct; super: none
struct FAtomResolvedModelPartReference
{
public:
    std::uint8_t Indices[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t ElementIndices[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomResolvedModelPartReference, Indices) == 0, "Offset mismatch for FAtomResolvedModelPartReference::Indices");
static_assert(offsetof(FAtomResolvedModelPartReference, ElementIndices) == 12, "Offset mismatch for FAtomResolvedModelPartReference::ElementIndices");

// /Script/AtomRuntime.AtomRigidElement
// Kind: ScriptStruct; super: none
struct FAtomRigidElement
{
public:
    TArray<void*> BoneReferences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Connections; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Name[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::int32_t IndexOfMetaBone; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomRigidElement, BoneReferences) == 0, "Offset mismatch for FAtomRigidElement::BoneReferences");
static_assert(offsetof(FAtomRigidElement, Connections) == 16, "Offset mismatch for FAtomRigidElement::Connections");
static_assert(offsetof(FAtomRigidElement, Name) == 32, "Offset mismatch for FAtomRigidElement::Name");
static_assert(offsetof(FAtomRigidElement, IndexOfMetaBone) == 36, "Offset mismatch for FAtomRigidElement::IndexOfMetaBone");

// /Script/AtomRuntime.AtomRigidElementConnection
// Kind: ScriptStruct; super: none
struct FAtomRigidElementConnection
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::int32_t OtherElementIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::int32_t ConnectionUniqueId; // 0x0064 (Size: 0x4, Type: IntProperty)
    TArray<void*> PrimitiveConnections; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAtomRigidElementConnection, Transform) == 0, "Offset mismatch for FAtomRigidElementConnection::Transform");
static_assert(offsetof(FAtomRigidElementConnection, OtherElementIndex) == 96, "Offset mismatch for FAtomRigidElementConnection::OtherElementIndex");
static_assert(offsetof(FAtomRigidElementConnection, ConnectionUniqueId) == 100, "Offset mismatch for FAtomRigidElementConnection::ConnectionUniqueId");
static_assert(offsetof(FAtomRigidElementConnection, PrimitiveConnections) == 104, "Offset mismatch for FAtomRigidElementConnection::PrimitiveConnections");

// /Script/AtomRuntime.AtomRigidElementIndices
// Kind: ScriptStruct; super: none
struct FAtomRigidElementIndices
{
public:
    std::int32_t HingedElementIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RigidElementIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t BoneIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAtomRigidElementIndices, HingedElementIndex) == 0, "Offset mismatch for FAtomRigidElementIndices::HingedElementIndex");
static_assert(offsetof(FAtomRigidElementIndices, RigidElementIndex) == 4, "Offset mismatch for FAtomRigidElementIndices::RigidElementIndex");
static_assert(offsetof(FAtomRigidElementIndices, BoneIndex) == 8, "Offset mismatch for FAtomRigidElementIndices::BoneIndex");

// /Script/AtomRuntime.AtomRigidElementSettings
// Kind: ScriptStruct; super: none
struct FAtomRigidElementSettings
{
public:
    std::uint8_t ElementIdentifyingPart[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t RigidElementName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t MergeWithParentElement; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldBeRootElement; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAtomRigidElementSettings, ElementIdentifyingPart) == 0, "Offset mismatch for FAtomRigidElementSettings::ElementIdentifyingPart");
static_assert(offsetof(FAtomRigidElementSettings, RigidElementName) == 20, "Offset mismatch for FAtomRigidElementSettings::RigidElementName");
static_assert(offsetof(FAtomRigidElementSettings, MergeWithParentElement) == 24, "Offset mismatch for FAtomRigidElementSettings::MergeWithParentElement");
static_assert(offsetof(FAtomRigidElementSettings, ShouldBeRootElement) == 25, "Offset mismatch for FAtomRigidElementSettings::ShouldBeRootElement");

// /Script/AtomRuntime.AtomSelectionSetPrimitiveGroup
// Kind: ScriptStruct; super: AtomPrimitiveGroup
struct FAtomSelectionSetPrimitiveGroup
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName SelectionSetName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAtomSelectionSetPrimitiveGroup, SelectionSetName) == 24, "Offset mismatch for FAtomSelectionSetPrimitiveGroup::SelectionSetName");

// /Script/AtomRuntime.AtomSourceModel
// Kind: ScriptStruct; super: none
struct FAtomSourceModel
{
public:
    TArray<void*> Primitives; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Elements; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SelectionSets; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GlueSets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Groups; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomSourceModel, Primitives) == 0, "Offset mismatch for FAtomSourceModel::Primitives");
static_assert(offsetof(FAtomSourceModel, Elements) == 16, "Offset mismatch for FAtomSourceModel::Elements");
static_assert(offsetof(FAtomSourceModel, SelectionSets) == 32, "Offset mismatch for FAtomSourceModel::SelectionSets");
static_assert(offsetof(FAtomSourceModel, GlueSets) == 48, "Offset mismatch for FAtomSourceModel::GlueSets");
static_assert(offsetof(FAtomSourceModel, Groups) == 64, "Offset mismatch for FAtomSourceModel::Groups");
static_assert(offsetof(FAtomSourceModel, Bounds) == 80, "Offset mismatch for FAtomSourceModel::Bounds");

// /Script/AtomRuntime.AtomThemeColorEntry
// Kind: ScriptStruct; super: none
struct FAtomThemeColorEntry
{
public:
    std::uint8_t OriginalColor[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ReplacementColor[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAtomThemeColorEntry, OriginalColor) == 0, "Offset mismatch for FAtomThemeColorEntry::OriginalColor");
static_assert(offsetof(FAtomThemeColorEntry, ReplacementColor) == 4, "Offset mismatch for FAtomThemeColorEntry::ReplacementColor");

// /Script/AtomRuntime.CommonPartInstanceDescription
// Kind: ScriptStruct; super: none
struct FCommonPartInstanceDescription
{
public:
    std::int16_t MeshIdx; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t MaterialIdx; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::int16_t UUIDIdx; // 0x0004 (Size: 0x2, Type: Int16Property)
    std::uint16_t ColorId; // 0x0006 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FCommonPartInstanceDescription, MeshIdx) == 0, "Offset mismatch for FCommonPartInstanceDescription::MeshIdx");
static_assert(offsetof(FCommonPartInstanceDescription, MaterialIdx) == 2, "Offset mismatch for FCommonPartInstanceDescription::MaterialIdx");
static_assert(offsetof(FCommonPartInstanceDescription, UUIDIdx) == 4, "Offset mismatch for FCommonPartInstanceDescription::UUIDIdx");
static_assert(offsetof(FCommonPartInstanceDescription, ColorId) == 6, "Offset mismatch for FCommonPartInstanceDescription::ColorId");

// /Script/AtomRuntime.ConnectionField
// Kind: ScriptStruct; super: none
struct FConnectionField
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint32_t SubType; // 0x0038 (Size: 0x4, Type: UInt32Property)
    std::uint16_t BoneIndex; // 0x003C (Size: 0x2, Type: UInt16Property)
    std::uint8_t Type; // 0x003E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConnectionField, Rotation) == 0, "Offset mismatch for FConnectionField::Rotation");
static_assert(offsetof(FConnectionField, Location) == 32, "Offset mismatch for FConnectionField::Location");
static_assert(offsetof(FConnectionField, SubType) == 56, "Offset mismatch for FConnectionField::SubType");
static_assert(offsetof(FConnectionField, BoneIndex) == 60, "Offset mismatch for FConnectionField::BoneIndex");
static_assert(offsetof(FConnectionField, Type) == 62, "Offset mismatch for FConnectionField::Type");

// /Script/AtomRuntime.ConnectionFieldAxle
// Kind: ScriptStruct; super: ConnectionFieldLine
struct FConnectionFieldAxle
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Grabbing; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequireGrabbing; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0052
    float DiscreteSnapInterval; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FConnectionFieldAxle, Grabbing) == 80, "Offset mismatch for FConnectionFieldAxle::Grabbing");
static_assert(offsetof(FConnectionFieldAxle, RequireGrabbing) == 81, "Offset mismatch for FConnectionFieldAxle::RequireGrabbing");
static_assert(offsetof(FConnectionFieldAxle, DiscreteSnapInterval) == 84, "Offset mismatch for FConnectionFieldAxle::DiscreteSnapInterval");

// /Script/AtomRuntime.ConnectionFieldBall
// Kind: ScriptStruct; super: ConnectionFieldPoint
struct FConnectionFieldBall
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint32_t SubType; // 0x0038 (Size: 0x4, Type: UInt32Property)
    std::uint16_t BoneIndex; // 0x003C (Size: 0x2, Type: UInt16Property)
    std::uint8_t Type; // 0x003E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConnectionFieldBall, Rotation) == 0, "Offset mismatch for FConnectionFieldBall::Rotation");
static_assert(offsetof(FConnectionFieldBall, Location) == 32, "Offset mismatch for FConnectionFieldBall::Location");
static_assert(offsetof(FConnectionFieldBall, SubType) == 56, "Offset mismatch for FConnectionFieldBall::SubType");
static_assert(offsetof(FConnectionFieldBall, BoneIndex) == 60, "Offset mismatch for FConnectionFieldBall::BoneIndex");
static_assert(offsetof(FConnectionFieldBall, Type) == 62, "Offset mismatch for FConnectionFieldBall::Type");

// /Script/AtomRuntime.ConnectionFieldContainer
// Kind: ScriptStruct; super: none
struct FConnectionFieldContainer
{
public:
    TArray<void*> PlanarFields; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LineFields; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PointFields; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConnectionFieldContainer, PlanarFields) == 0, "Offset mismatch for FConnectionFieldContainer::PlanarFields");
static_assert(offsetof(FConnectionFieldContainer, LineFields) == 16, "Offset mismatch for FConnectionFieldContainer::LineFields");
static_assert(offsetof(FConnectionFieldContainer, PointFields) == 32, "Offset mismatch for FConnectionFieldContainer::PointFields");

// /Script/AtomRuntime.ConnectionFieldFixed
// Kind: ScriptStruct; super: ConnectionFieldPoint
struct FConnectionFieldFixed
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint32_t Axes; // 0x0040 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FConnectionFieldFixed, Axes) == 64, "Offset mismatch for FConnectionFieldFixed::Axes");

// /Script/AtomRuntime.ConnectionFieldGear
// Kind: ScriptStruct; super: ConnectionFieldLine
struct FConnectionFieldGear
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    double Radius; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    std::uint32_t ToothCount; // 0x0058 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FConnectionFieldGear, Radius) == 80, "Offset mismatch for FConnectionFieldGear::Radius");
static_assert(offsetof(FConnectionFieldGear, ToothCount) == 88, "Offset mismatch for FConnectionFieldGear::ToothCount");

// /Script/AtomRuntime.ConnectionFieldHinge
// Kind: ScriptStruct; super: ConnectionFieldPoint
struct FConnectionFieldHinge
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Oriented; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Flip; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasLimits; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequireGrabbing; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    double OrientedMin; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double OrientedMax; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double FlippedMin; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double FlippedMax; // 0x0060 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FConnectionFieldHinge, Oriented) == 64, "Offset mismatch for FConnectionFieldHinge::Oriented");
static_assert(offsetof(FConnectionFieldHinge, Flip) == 65, "Offset mismatch for FConnectionFieldHinge::Flip");
static_assert(offsetof(FConnectionFieldHinge, HasLimits) == 66, "Offset mismatch for FConnectionFieldHinge::HasLimits");
static_assert(offsetof(FConnectionFieldHinge, RequireGrabbing) == 67, "Offset mismatch for FConnectionFieldHinge::RequireGrabbing");
static_assert(offsetof(FConnectionFieldHinge, OrientedMin) == 72, "Offset mismatch for FConnectionFieldHinge::OrientedMin");
static_assert(offsetof(FConnectionFieldHinge, OrientedMax) == 80, "Offset mismatch for FConnectionFieldHinge::OrientedMax");
static_assert(offsetof(FConnectionFieldHinge, FlippedMin) == 88, "Offset mismatch for FConnectionFieldHinge::FlippedMin");
static_assert(offsetof(FConnectionFieldHinge, FlippedMax) == 96, "Offset mismatch for FConnectionFieldHinge::FlippedMax");

// /Script/AtomRuntime.ConnectionFieldLine
// Kind: ScriptStruct; super: ConnectionField
struct FConnectionFieldLine
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    double Length; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t StartCapped; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndCapped; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FConnectionFieldLine, Length) == 64, "Offset mismatch for FConnectionFieldLine::Length");
static_assert(offsetof(FConnectionFieldLine, StartCapped) == 72, "Offset mismatch for FConnectionFieldLine::StartCapped");
static_assert(offsetof(FConnectionFieldLine, EndCapped) == 73, "Offset mismatch for FConnectionFieldLine::EndCapped");

// /Script/AtomRuntime.ConnectionFieldPlanar
// Kind: ScriptStruct; super: ConnectionField
struct FConnectionFieldPlanar
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Width; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Height; // 0x0041 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0042
    TArray<void*> Points; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConnectionFieldPlanar, Width) == 64, "Offset mismatch for FConnectionFieldPlanar::Width");
static_assert(offsetof(FConnectionFieldPlanar, Height) == 65, "Offset mismatch for FConnectionFieldPlanar::Height");
static_assert(offsetof(FConnectionFieldPlanar, Points) == 72, "Offset mismatch for FConnectionFieldPlanar::Points");

// /Script/AtomRuntime.ConnectionFieldPoint
// Kind: ScriptStruct; super: ConnectionField
struct FConnectionFieldPoint
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint32_t SubType; // 0x0038 (Size: 0x4, Type: UInt32Property)
    std::uint16_t BoneIndex; // 0x003C (Size: 0x2, Type: UInt16Property)
    std::uint8_t Type; // 0x003E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConnectionFieldPoint, Rotation) == 0, "Offset mismatch for FConnectionFieldPoint::Rotation");
static_assert(offsetof(FConnectionFieldPoint, Location) == 32, "Offset mismatch for FConnectionFieldPoint::Location");
static_assert(offsetof(FConnectionFieldPoint, SubType) == 56, "Offset mismatch for FConnectionFieldPoint::SubType");
static_assert(offsetof(FConnectionFieldPoint, BoneIndex) == 60, "Offset mismatch for FConnectionFieldPoint::BoneIndex");
static_assert(offsetof(FConnectionFieldPoint, Type) == 62, "Offset mismatch for FConnectionFieldPoint::Type");

// /Script/AtomRuntime.ConnectionFieldSlider
// Kind: ScriptStruct; super: ConnectionFieldLine
struct FConnectionFieldSlider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Cylindrical; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HasSpring; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    double SpringRest; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double SpringStrength; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double SpringDamping; // 0x0068 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FConnectionFieldSlider, Cylindrical) == 80, "Offset mismatch for FConnectionFieldSlider::Cylindrical");
static_assert(offsetof(FConnectionFieldSlider, HasSpring) == 81, "Offset mismatch for FConnectionFieldSlider::HasSpring");
static_assert(offsetof(FConnectionFieldSlider, SpringRest) == 88, "Offset mismatch for FConnectionFieldSlider::SpringRest");
static_assert(offsetof(FConnectionFieldSlider, SpringStrength) == 96, "Offset mismatch for FConnectionFieldSlider::SpringStrength");
static_assert(offsetof(FConnectionFieldSlider, SpringDamping) == 104, "Offset mismatch for FConnectionFieldSlider::SpringDamping");

// /Script/AtomRuntime.ConnectionPoint
// Kind: ScriptStruct; super: none
struct FConnectionPoint
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Size; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t Flags; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    std::int32_t Features; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FConnectionPoint, Type) == 0, "Offset mismatch for FConnectionPoint::Type");
static_assert(offsetof(FConnectionPoint, Size) == 1, "Offset mismatch for FConnectionPoint::Size");
static_assert(offsetof(FConnectionPoint, Flags) == 4, "Offset mismatch for FConnectionPoint::Flags");
static_assert(offsetof(FConnectionPoint, Features) == 8, "Offset mismatch for FConnectionPoint::Features");

// /Script/AtomRuntime.ConnectivityFieldConnection
// Kind: ScriptStruct; super: none
struct FConnectivityFieldConnection
{
public:
    std::uint8_t Reference[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ConnectResult; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConnectivityFieldConnection, Reference) == 0, "Offset mismatch for FConnectivityFieldConnection::Reference");
static_assert(offsetof(FConnectivityFieldConnection, ConnectResult) == 8, "Offset mismatch for FConnectivityFieldConnection::ConnectResult");

// /Script/AtomRuntime.ConnectivityFieldReference
// Kind: ScriptStruct; super: none
struct FConnectivityFieldReference
{
public:
    std::int32_t ObjectID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint16_t FieldIndex; // 0x0004 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FConnectivityFieldReference, ObjectID) == 0, "Offset mismatch for FConnectivityFieldReference::ObjectID");
static_assert(offsetof(FConnectivityFieldReference, FieldIndex) == 4, "Offset mismatch for FConnectivityFieldReference::FieldIndex");

// /Script/AtomRuntime.ConnectivityQueryResult
// Kind: ScriptStruct; super: none
struct FConnectivityQueryResult
{
public:
    std::uint8_t bHasValidConnection; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0001
    std::uint8_t TargetTransformToConnect[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t HitLocation[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetToBestFit[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::int32_t SourceFieldIndex; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t SourceFieldObjectId; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t SourceFieldConnectionPointIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetFieldIndex; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::int32_t TargetFieldObjectId; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetFieldConnectionPointIndex; // 0x00B4 (Size: 0x4, Type: IntProperty)
    FName ErrorMessage; // 0x00B8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FConnectivityQueryResult, bHasValidConnection) == 0, "Offset mismatch for FConnectivityQueryResult::bHasValidConnection");
static_assert(offsetof(FConnectivityQueryResult, TargetTransformToConnect) == 16, "Offset mismatch for FConnectivityQueryResult::TargetTransformToConnect");
static_assert(offsetof(FConnectivityQueryResult, HitLocation) == 112, "Offset mismatch for FConnectivityQueryResult::HitLocation");
static_assert(offsetof(FConnectivityQueryResult, OffsetToBestFit) == 136, "Offset mismatch for FConnectivityQueryResult::OffsetToBestFit");
static_assert(offsetof(FConnectivityQueryResult, SourceFieldIndex) == 160, "Offset mismatch for FConnectivityQueryResult::SourceFieldIndex");
static_assert(offsetof(FConnectivityQueryResult, SourceFieldObjectId) == 164, "Offset mismatch for FConnectivityQueryResult::SourceFieldObjectId");
static_assert(offsetof(FConnectivityQueryResult, SourceFieldConnectionPointIndex) == 168, "Offset mismatch for FConnectivityQueryResult::SourceFieldConnectionPointIndex");
static_assert(offsetof(FConnectivityQueryResult, TargetFieldIndex) == 172, "Offset mismatch for FConnectivityQueryResult::TargetFieldIndex");
static_assert(offsetof(FConnectivityQueryResult, TargetFieldObjectId) == 176, "Offset mismatch for FConnectivityQueryResult::TargetFieldObjectId");
static_assert(offsetof(FConnectivityQueryResult, TargetFieldConnectionPointIndex) == 180, "Offset mismatch for FConnectivityQueryResult::TargetFieldConnectionPointIndex");
static_assert(offsetof(FConnectivityQueryResult, ErrorMessage) == 184, "Offset mismatch for FConnectivityQueryResult::ErrorMessage");

// /Script/AtomRuntime.FieldConnectionInfo
// Kind: ScriptStruct; super: none
struct FFieldConnectionInfo
{
public:
    std::uint8_t ConnectResult; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFieldConnectionInfo, ConnectResult) == 0, "Offset mismatch for FFieldConnectionInfo::ConnectResult");

// /Script/AtomRuntime.HingeFieldConnectionInfo
// Kind: ScriptStruct; super: PointFieldConnectionInfo
struct FHingeFieldConnectionInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Flip; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHingeFieldConnectionInfo, Flip) == 16, "Offset mismatch for FHingeFieldConnectionInfo::Flip");

// /Script/AtomRuntime.LineFieldConnectionInfo
// Kind: ScriptStruct; super: FieldConnectionInfo
struct FLineFieldConnectionInfo
{
public:
    std::uint8_t Pad_0000[0x1]; // 0x0000
    std::uint8_t Flip; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLineFieldConnectionInfo, Flip) == 1, "Offset mismatch for FLineFieldConnectionInfo::Flip");

// /Script/AtomRuntime.ModelPrimitiveEntry
// Kind: ScriptStruct; super: none
struct FModelPrimitiveEntry
{
public:
    std::uint8_t Component[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PartReference[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FModelPrimitiveEntry, Component) == 0, "Offset mismatch for FModelPrimitiveEntry::Component");
static_assert(offsetof(FModelPrimitiveEntry, PartReference) == 32, "Offset mismatch for FModelPrimitiveEntry::PartReference");

// /Script/AtomRuntime.PlacementContextData
// Kind: ScriptStruct; super: none
struct FPlacementContextData
{
public:
    std::uint8_t PlacementTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t CameraTransform[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::uint8_t CastRay[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlacementContextData, PlacementTransform) == 0, "Offset mismatch for FPlacementContextData::PlacementTransform");
static_assert(offsetof(FPlacementContextData, CameraTransform) == 96, "Offset mismatch for FPlacementContextData::CameraTransform");
static_assert(offsetof(FPlacementContextData, CastRay) == 192, "Offset mismatch for FPlacementContextData::CastRay");

// /Script/AtomRuntime.PlacementOperation
// Kind: ScriptStruct; super: none
struct FPlacementOperation
{
public:
    TArray<void*> ActorsToMove; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0010
    std::uint8_t PlacementResult[0x1]; // 0x0020 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FPlacementOperation, ActorsToMove) == 0, "Offset mismatch for FPlacementOperation::ActorsToMove");
static_assert(offsetof(FPlacementOperation, PlacementResult) == 32, "Offset mismatch for FPlacementOperation::PlacementResult");

// /Script/AtomRuntime.PlacementPreviewInterpolationSettings
// Kind: ScriptStruct; super: none
struct FPlacementPreviewInterpolationSettings
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EasingFunction; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TSoftObjectPtr<void> EasingCurve; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPlacementPreviewInterpolationSettings, duration) == 0, "Offset mismatch for FPlacementPreviewInterpolationSettings::duration");
static_assert(offsetof(FPlacementPreviewInterpolationSettings, EasingFunction) == 4, "Offset mismatch for FPlacementPreviewInterpolationSettings::EasingFunction");
static_assert(offsetof(FPlacementPreviewInterpolationSettings, EasingCurve) == 8, "Offset mismatch for FPlacementPreviewInterpolationSettings::EasingCurve");

// /Script/AtomRuntime.PlacementPreviewMaterialSettings
// Kind: ScriptStruct; super: none
struct FPlacementPreviewMaterialSettings
{
public:
    std::uint8_t Material[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MaterialColorPropertyName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t ValidPlacementColor[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    std::uint8_t RejectedPlacementColor[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlacementPreviewMaterialSettings, Material) == 0, "Offset mismatch for FPlacementPreviewMaterialSettings::Material");
static_assert(offsetof(FPlacementPreviewMaterialSettings, MaterialColorPropertyName) == 32, "Offset mismatch for FPlacementPreviewMaterialSettings::MaterialColorPropertyName");
static_assert(offsetof(FPlacementPreviewMaterialSettings, ValidPlacementColor) == 36, "Offset mismatch for FPlacementPreviewMaterialSettings::ValidPlacementColor");
static_assert(offsetof(FPlacementPreviewMaterialSettings, RejectedPlacementColor) == 40, "Offset mismatch for FPlacementPreviewMaterialSettings::RejectedPlacementColor");

// /Script/AtomRuntime.PlanarFieldConnectionInfo
// Kind: ScriptStruct; super: FieldConnectionInfo
struct FPlanarFieldConnectionInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PointConnections; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t OverlapA; // 0x0018 (Size: 0x4, Type: UInt32Property)
    std::uint32_t OverlapB; // 0x001C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FPlanarFieldConnectionInfo, PointConnections) == 8, "Offset mismatch for FPlanarFieldConnectionInfo::PointConnections");
static_assert(offsetof(FPlanarFieldConnectionInfo, OverlapA) == 24, "Offset mismatch for FPlanarFieldConnectionInfo::OverlapA");
static_assert(offsetof(FPlanarFieldConnectionInfo, OverlapB) == 28, "Offset mismatch for FPlanarFieldConnectionInfo::OverlapB");

// /Script/AtomRuntime.PlanarFieldInfo
// Kind: ScriptStruct; super: none
struct FPlanarFieldInfo
{
public:
    std::uint8_t Transform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t Size[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlanarFieldType; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0071
    TArray<void*> PointInfo; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPlanarFieldInfo, Transform) == 0, "Offset mismatch for FPlanarFieldInfo::Transform");
static_assert(offsetof(FPlanarFieldInfo, Size) == 96, "Offset mismatch for FPlanarFieldInfo::Size");
static_assert(offsetof(FPlanarFieldInfo, PlanarFieldType) == 112, "Offset mismatch for FPlanarFieldInfo::PlanarFieldType");
static_assert(offsetof(FPlanarFieldInfo, PointInfo) == 120, "Offset mismatch for FPlanarFieldInfo::PointInfo");

// /Script/AtomRuntime.PlanarFieldPointConnectionInfo
// Kind: ScriptStruct; super: none
struct FPlanarFieldPointConnectionInfo
{
public:
    std::uint16_t IndexA; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t IndexB; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FPlanarFieldPointConnectionInfo, IndexA) == 0, "Offset mismatch for FPlanarFieldPointConnectionInfo::IndexA");
static_assert(offsetof(FPlanarFieldPointConnectionInfo, IndexB) == 2, "Offset mismatch for FPlanarFieldPointConnectionInfo::IndexB");

// /Script/AtomRuntime.PlanarFieldPointInfo
// Kind: ScriptStruct; super: none
struct FPlanarFieldPointInfo
{
public:
    std::uint8_t PointLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t PointType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IsAvailable; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlanarFieldPointInfo, PointLocation) == 0, "Offset mismatch for FPlanarFieldPointInfo::PointLocation");
static_assert(offsetof(FPlanarFieldPointInfo, PointType) == 24, "Offset mismatch for FPlanarFieldPointInfo::PointType");
static_assert(offsetof(FPlanarFieldPointInfo, IsAvailable) == 25, "Offset mismatch for FPlanarFieldPointInfo::IsAvailable");

// /Script/AtomRuntime.PointFieldConnectionInfo
// Kind: ScriptStruct; super: FieldConnectionInfo
struct FPointFieldConnectionInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    double OneAxisRotation; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FPointFieldConnectionInfo, OneAxisRotation) == 8, "Offset mismatch for FPointFieldConnectionInfo::OneAxisRotation");

// /Script/AtomRuntime.SerializedConnectivityObjects
// Kind: ScriptStruct; super: none
struct FSerializedConnectivityObjects
{
public:
    TArray<void*> Fields; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlanarConnections; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LineConnections; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PointConnections; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSerializedConnectivityObjects, Fields) == 0, "Offset mismatch for FSerializedConnectivityObjects::Fields");
static_assert(offsetof(FSerializedConnectivityObjects, PlanarConnections) == 16, "Offset mismatch for FSerializedConnectivityObjects::PlanarConnections");
static_assert(offsetof(FSerializedConnectivityObjects, LineConnections) == 32, "Offset mismatch for FSerializedConnectivityObjects::LineConnections");
static_assert(offsetof(FSerializedConnectivityObjects, PointConnections) == 48, "Offset mismatch for FSerializedConnectivityObjects::PointConnections");

// /Script/AtomRuntime.SerializedLineConnection
// Kind: ScriptStruct; super: none
struct FSerializedLineConnection
{
public:
    std::uint8_t Connection[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t FieldA[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t FieldB[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSerializedLineConnection, Connection) == 0, "Offset mismatch for FSerializedLineConnection::Connection");
static_assert(offsetof(FSerializedLineConnection, FieldA) == 8, "Offset mismatch for FSerializedLineConnection::FieldA");
static_assert(offsetof(FSerializedLineConnection, FieldB) == 16, "Offset mismatch for FSerializedLineConnection::FieldB");

// /Script/AtomRuntime.SerializedPlanarConnection
// Kind: ScriptStruct; super: none
struct FSerializedPlanarConnection
{
public:
    std::uint8_t Connection[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t FieldA[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t FieldB[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSerializedPlanarConnection, Connection) == 0, "Offset mismatch for FSerializedPlanarConnection::Connection");
static_assert(offsetof(FSerializedPlanarConnection, FieldA) == 32, "Offset mismatch for FSerializedPlanarConnection::FieldA");
static_assert(offsetof(FSerializedPlanarConnection, FieldB) == 40, "Offset mismatch for FSerializedPlanarConnection::FieldB");

// /Script/AtomRuntime.SerializedPointConnection
// Kind: ScriptStruct; super: none
struct FSerializedPointConnection
{
public:
    std::uint8_t Connection[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t FieldA[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t FieldB[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSerializedPointConnection, Connection) == 0, "Offset mismatch for FSerializedPointConnection::Connection");
static_assert(offsetof(FSerializedPointConnection, FieldA) == 16, "Offset mismatch for FSerializedPointConnection::FieldA");
static_assert(offsetof(FSerializedPointConnection, FieldB) == 24, "Offset mismatch for FSerializedPointConnection::FieldB");

// /Script/AtomRuntime.TypedConnectivityFieldReference
// Kind: ScriptStruct; super: ConnectivityFieldReference
struct FTypedConnectivityFieldReference
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t FieldType; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTypedConnectivityFieldReference, FieldType) == 8, "Offset mismatch for FTypedConnectivityFieldReference::FieldType");

// /Script/AtomRuntime.WorldConnectivityHandle
// Kind: ScriptStruct; super: none
struct FWorldConnectivityHandle
{
public:
    std::int32_t ObjectID; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FWorldConnectivityHandle, ObjectID) == 0, "Offset mismatch for FWorldConnectivityHandle::ObjectID");

// /Script/AtomRuntime.AtomActorConnectivityResolver
// Kind: Class; super: Object
class UAtomActorConnectivityResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomActorConnectivityResolverRegistry
// Kind: Class; super: DeveloperSettings
class UAtomActorConnectivityResolverRegistry
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Resolvers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomActorConnectivityResolverRegistry, Resolvers) == 48, "Offset mismatch for UAtomActorConnectivityResolverRegistry::Resolvers");

// /Script/AtomRuntime.AtomAssetUserDataActorConnectivityResolver
// Kind: Class; super: AtomActorConnectivityResolver
class UAtomAssetUserDataActorConnectivityResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomBrickPlacementPreviewProxy
// Kind: Class; super: Object
class UAtomBrickPlacementPreviewProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlacementPreviewActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMaterialInstance; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* InterpolationCurve; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> StaticMeshToInstancedMeshMap; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UAtomBrickPlacementPreviewProxy, PlacementPreviewActor) == 40, "Offset mismatch for UAtomBrickPlacementPreviewProxy::PlacementPreviewActor");
static_assert(offsetof(UAtomBrickPlacementPreviewProxy, PreviewMaterialInstance) == 48, "Offset mismatch for UAtomBrickPlacementPreviewProxy::PreviewMaterialInstance");
static_assert(offsetof(UAtomBrickPlacementPreviewProxy, InterpolationCurve) == 56, "Offset mismatch for UAtomBrickPlacementPreviewProxy::InterpolationCurve");
static_assert(offsetof(UAtomBrickPlacementPreviewProxy, StaticMeshToInstancedMeshMap) == 64, "Offset mismatch for UAtomBrickPlacementPreviewProxy::StaticMeshToInstancedMeshMap");

// /Script/AtomRuntime.AtomCollisionComponent
// Kind: Class; super: PrimitiveComponent
class UAtomCollisionComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    TWeakObjectPtr<void> BodySetup; // 0x0570 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAtomCollisionComponent, BodySetup) == 1392, "Offset mismatch for UAtomCollisionComponent::BodySetup");

// /Script/AtomRuntime.AtomCollisionRejection
// Kind: Class; super: Object
class UAtomCollisionRejection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomColorComponent
// Kind: Class; super: ActorComponent
class UAtomColorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ColorLUTAtlas; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* ColorLUTTexture; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAtomColorComponent, ColorLUTAtlas) == 192, "Offset mismatch for UAtomColorComponent::ColorLUTAtlas");
static_assert(offsetof(UAtomColorComponent, ColorLUTTexture) == 200, "Offset mismatch for UAtomColorComponent::ColorLUTTexture");

// /Script/AtomRuntime.AtomColorLUTAtlas
// Kind: Class; super: Object
class UAtomColorLUTAtlas
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AtlasTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Textures; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomColorLUTAtlas, AtlasTexture) == 40, "Offset mismatch for UAtomColorLUTAtlas::AtlasTexture");
static_assert(offsetof(UAtomColorLUTAtlas, Textures) == 48, "Offset mismatch for UAtomColorLUTAtlas::Textures");

// /Script/AtomRuntime.AtomColorThemeComponent
// Kind: Class; super: ActorComponent
class UAtomColorThemeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ColorLUTAtlas; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* ColorLUTTexture; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsThemeCustomTexture; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D1
    std::uint8_t ColorThemeLibrary[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    FName ColorTheme; // 0x00D8 (Size: 0x8, Type: NameProperty)
    void* SelectedGeneratedLibraryTexture; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* SelectedColorThemeLibrary; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAtomColorThemeComponent, ColorLUTAtlas) == 192, "Offset mismatch for UAtomColorThemeComponent::ColorLUTAtlas");
static_assert(offsetof(UAtomColorThemeComponent, ColorLUTTexture) == 200, "Offset mismatch for UAtomColorThemeComponent::ColorLUTTexture");
static_assert(offsetof(UAtomColorThemeComponent, bIsThemeCustomTexture) == 208, "Offset mismatch for UAtomColorThemeComponent::bIsThemeCustomTexture");
static_assert(offsetof(UAtomColorThemeComponent, ColorThemeLibrary) == 212, "Offset mismatch for UAtomColorThemeComponent::ColorThemeLibrary");
static_assert(offsetof(UAtomColorThemeComponent, ColorTheme) == 216, "Offset mismatch for UAtomColorThemeComponent::ColorTheme");
static_assert(offsetof(UAtomColorThemeComponent, SelectedGeneratedLibraryTexture) == 224, "Offset mismatch for UAtomColorThemeComponent::SelectedGeneratedLibraryTexture");
static_assert(offsetof(UAtomColorThemeComponent, SelectedColorThemeLibrary) == 232, "Offset mismatch for UAtomColorThemeComponent::SelectedColorThemeLibrary");

// /Script/AtomRuntime.AtomColorThemeLibrary
// Kind: Class; super: Object
class UAtomColorThemeLibrary
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Description; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t MinimumReservedSlotsForTextureBasedThemes; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> ColorThemes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GeneratedTexture[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> LUTTextures; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomColorThemeLibrary, Description) == 40, "Offset mismatch for UAtomColorThemeLibrary::Description");
static_assert(offsetof(UAtomColorThemeLibrary, MinimumReservedSlotsForTextureBasedThemes) == 56, "Offset mismatch for UAtomColorThemeLibrary::MinimumReservedSlotsForTextureBasedThemes");
static_assert(offsetof(UAtomColorThemeLibrary, ColorThemes) == 64, "Offset mismatch for UAtomColorThemeLibrary::ColorThemes");
static_assert(offsetof(UAtomColorThemeLibrary, GeneratedTexture) == 80, "Offset mismatch for UAtomColorThemeLibrary::GeneratedTexture");
static_assert(offsetof(UAtomColorThemeLibrary, LUTTextures) == 112, "Offset mismatch for UAtomColorThemeLibrary::LUTTextures");

// /Script/AtomRuntime.AtomColorThemeTextureUserData
// Kind: Class; super: AssetUserData
class UAtomColorThemeTextureUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ThemeNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> SourceColorThemeLibrary; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UAtomColorThemeTextureUserData, ThemeNames) == 40, "Offset mismatch for UAtomColorThemeTextureUserData::ThemeNames");
static_assert(offsetof(UAtomColorThemeTextureUserData, SourceColorThemeLibrary) == 56, "Offset mismatch for UAtomColorThemeTextureUserData::SourceColorThemeLibrary");

// /Script/AtomRuntime.AtomCommonPartModelAssetUserData
// Kind: Class; super: AssetUserData
class UAtomCommonPartModelAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AssetDescription[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAtomCommonPartModelAssetUserData, AssetDescription) == 40, "Offset mismatch for UAtomCommonPartModelAssetUserData::AssetDescription");

// /Script/AtomRuntime.AtomCommonPartStaticMeshAssetUserData
// Kind: Class; super: AssetUserData
class UAtomCommonPartStaticMeshAssetUserData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomConnectivityAssetUserData
// Kind: Class; super: AssetUserData
class UAtomConnectivityAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AtomModelConnections[0x40]; // 0x0028 (Size: 0x40, Type: StructProperty)
    TArray<void*> Tags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomConnectivityAssetUserData, AtomModelConnections) == 40, "Offset mismatch for UAtomConnectivityAssetUserData::AtomModelConnections");
static_assert(offsetof(UAtomConnectivityAssetUserData, Tags) == 104, "Offset mismatch for UAtomConnectivityAssetUserData::Tags");

// /Script/AtomRuntime.AtomConnectivityQueryBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAtomConnectivityQueryBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomConnectivityRejection
// Kind: Class; super: Object
class UAtomConnectivityRejection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomDatabaseSubsystemBase
// Kind: Class; super: EngineSubsystem
class UAtomDatabaseSubsystemBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomEditorModePrimitiveUserData
// Kind: Class; super: AssetUserData
class UAtomEditorModePrimitiveUserData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomISMPoolRenderer
// Kind: Class; super: Object
class UAtomISMPoolRenderer
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* CachedISMPoolComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* LocalISMPoolComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAtomISMPoolRenderer, CachedISMPoolComponent) == 56, "Offset mismatch for UAtomISMPoolRenderer::CachedISMPoolComponent");
static_assert(offsetof(UAtomISMPoolRenderer, LocalISMPoolComponent) == 64, "Offset mismatch for UAtomISMPoolRenderer::LocalISMPoolComponent");

// /Script/AtomRuntime.AtomLUCTAtlas
// Kind: Class; super: Object
class UAtomLUCTAtlas
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Themes; // 0x0028 (Size: 0x10, Type: MapProperty)
    TSoftObjectPtr<void> GeneratedAtlasTexture; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UAtomLUCTAtlas, Themes) == 40, "Offset mismatch for UAtomLUCTAtlas::Themes");
static_assert(offsetof(UAtomLUCTAtlas, GeneratedAtlasTexture) == 56, "Offset mismatch for UAtomLUCTAtlas::GeneratedAtlasTexture");

// /Script/AtomRuntime.AtomModel
// Kind: Class; super: Object
class UAtomModel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    TArray<void*> Primitives; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Elements; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SelectionSets; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Groups; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SerializedConnectivityObjects[0x40]; // 0x0090 (Size: 0x40, Type: StructProperty)
    TMap<void*, void*> TextureNameToAsset; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Attributes; // 0x00E0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Tags[0x20]; // 0x00F0 (Size: 0x20, Type: SetProperty)
    std::uint8_t SourceModel[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAtomModel, Settings) == 40, "Offset mismatch for UAtomModel::Settings");
static_assert(offsetof(UAtomModel, Primitives) == 80, "Offset mismatch for UAtomModel::Primitives");
static_assert(offsetof(UAtomModel, Elements) == 96, "Offset mismatch for UAtomModel::Elements");
static_assert(offsetof(UAtomModel, SelectionSets) == 112, "Offset mismatch for UAtomModel::SelectionSets");
static_assert(offsetof(UAtomModel, Groups) == 128, "Offset mismatch for UAtomModel::Groups");
static_assert(offsetof(UAtomModel, SerializedConnectivityObjects) == 144, "Offset mismatch for UAtomModel::SerializedConnectivityObjects");
static_assert(offsetof(UAtomModel, TextureNameToAsset) == 208, "Offset mismatch for UAtomModel::TextureNameToAsset");
static_assert(offsetof(UAtomModel, Attributes) == 224, "Offset mismatch for UAtomModel::Attributes");
static_assert(offsetof(UAtomModel, Tags) == 240, "Offset mismatch for UAtomModel::Tags");
static_assert(offsetof(UAtomModel, SourceModel) == 272, "Offset mismatch for UAtomModel::SourceModel");

// /Script/AtomRuntime.AtomModelActor
// Kind: Class; super: Actor
class UAtomModelActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* AtomModel; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    FString PrimitiveStyleName; // 0x0278 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAtomModelActor, AtomModel) == 624, "Offset mismatch for UAtomModelActor::AtomModel");
static_assert(offsetof(UAtomModelActor, PrimitiveStyleName) == 632, "Offset mismatch for UAtomModelActor::PrimitiveStyleName");

// /Script/AtomRuntime.AtomModelActorConnectivityResolver
// Kind: Class; super: AtomActorConnectivityResolver
class UAtomModelActorConnectivityResolver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomModelAssetUserData
// Kind: Class; super: AtomConnectivityAssetUserData
class UAtomModelAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AtomModelConnections[0x40]; // 0x0028 (Size: 0x40, Type: StructProperty)
    TArray<void*> Tags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomModelAssetUserData, AtomModelConnections) == 40, "Offset mismatch for UAtomModelAssetUserData::AtomModelConnections");
static_assert(offsetof(UAtomModelAssetUserData, Tags) == 104, "Offset mismatch for UAtomModelAssetUserData::Tags");

// /Script/AtomRuntime.AtomModelComponent
// Kind: Class; super: SceneComponent
class UAtomModelComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    void* AtomModel; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstanceType; // 0x0248 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseCombinedMeshes; // 0x0249 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MaterialColorSource; // 0x024A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCreateRigidElements; // 0x024B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableConnectivity; // 0x024C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x024D
    std::uint8_t SelectionSetFilter[0x4]; // 0x0250 (Size: 0x4, Type: NameProperty)
    std::uint8_t CommonPartOptimization; // 0x0254 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0255
    TArray<void*> RigidElementComponents; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ComponentToPrimitive; // 0x0268 (Size: 0x10, Type: MapProperty)
    std::uint8_t PrimitiveGeometryComplexity; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrimitiveGeometrySections; // 0x0279 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShowCommonParts; // 0x027A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAtomModelComponent, AtomModel) == 576, "Offset mismatch for UAtomModelComponent::AtomModel");
static_assert(offsetof(UAtomModelComponent, InstanceType) == 584, "Offset mismatch for UAtomModelComponent::InstanceType");
static_assert(offsetof(UAtomModelComponent, bUseCombinedMeshes) == 585, "Offset mismatch for UAtomModelComponent::bUseCombinedMeshes");
static_assert(offsetof(UAtomModelComponent, MaterialColorSource) == 586, "Offset mismatch for UAtomModelComponent::MaterialColorSource");
static_assert(offsetof(UAtomModelComponent, bCreateRigidElements) == 587, "Offset mismatch for UAtomModelComponent::bCreateRigidElements");
static_assert(offsetof(UAtomModelComponent, bEnableConnectivity) == 588, "Offset mismatch for UAtomModelComponent::bEnableConnectivity");
static_assert(offsetof(UAtomModelComponent, SelectionSetFilter) == 592, "Offset mismatch for UAtomModelComponent::SelectionSetFilter");
static_assert(offsetof(UAtomModelComponent, CommonPartOptimization) == 596, "Offset mismatch for UAtomModelComponent::CommonPartOptimization");
static_assert(offsetof(UAtomModelComponent, RigidElementComponents) == 600, "Offset mismatch for UAtomModelComponent::RigidElementComponents");
static_assert(offsetof(UAtomModelComponent, ComponentToPrimitive) == 616, "Offset mismatch for UAtomModelComponent::ComponentToPrimitive");
static_assert(offsetof(UAtomModelComponent, PrimitiveGeometryComplexity) == 632, "Offset mismatch for UAtomModelComponent::PrimitiveGeometryComplexity");
static_assert(offsetof(UAtomModelComponent, PrimitiveGeometrySections) == 633, "Offset mismatch for UAtomModelComponent::PrimitiveGeometrySections");
static_assert(offsetof(UAtomModelComponent, bShowCommonParts) == 634, "Offset mismatch for UAtomModelComponent::bShowCommonParts");

// /Script/AtomRuntime.AtomModelPartsCollectionConnectivity
// Kind: Class; super: Object
class UAtomModelPartsCollectionConnectivity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PartsCollection[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAtomModelPartsCollectionConnectivity, PartsCollection) == 48, "Offset mismatch for UAtomModelPartsCollectionConnectivity::PartsCollection");

// /Script/AtomRuntime.AtomModelProcessor
// Kind: Class; super: Object
class UAtomModelProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableRebuildProgress; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float DialogDelay; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumProgressSteps; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0034
    FString ProgressMessage; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAtomModelProcessor, bEnableRebuildProgress) == 40, "Offset mismatch for UAtomModelProcessor::bEnableRebuildProgress");
static_assert(offsetof(UAtomModelProcessor, DialogDelay) == 44, "Offset mismatch for UAtomModelProcessor::DialogDelay");
static_assert(offsetof(UAtomModelProcessor, NumProgressSteps) == 48, "Offset mismatch for UAtomModelProcessor::NumProgressSteps");
static_assert(offsetof(UAtomModelProcessor, ProgressMessage) == 56, "Offset mismatch for UAtomModelProcessor::ProgressMessage");

// /Script/AtomRuntime.AtomPartsCollectionBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAtomPartsCollectionBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPlacementResultHelperLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAtomPlacementResultHelperLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPlacementTool
// Kind: Class; super: Interface
class UAtomPlacementTool
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPlacementToolBase
// Kind: Class; super: Object
class UAtomPlacementToolBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> ConnectivityRegistrationWeakPtr; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t PlacementOperation[0x1]; // 0x0040 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UAtomPlacementToolBase, ConnectivityRegistrationWeakPtr) == 48, "Offset mismatch for UAtomPlacementToolBase::ConnectivityRegistrationWeakPtr");
static_assert(offsetof(UAtomPlacementToolBase, PlacementOperation) == 64, "Offset mismatch for UAtomPlacementToolBase::PlacementOperation");

// /Script/AtomRuntime.AtomPrimitive
// Kind: Class; super: Object
class UAtomPrimitive
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t PartId; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString PartRevision; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t DesignName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsFlex; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVariant; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0046
    TArray<void*> DecorationSurfaceNames; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumberOfColorSurfaces; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t AtomPlatform; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x005D
    std::int32_t AtomMainGroupId; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::int32_t AtomSubMainGroupId; // 0x0064 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> PrimitiveCommonParts; // 0x0068 (Size: 0x10, Type: MapProperty)
    std::uint8_t bOverrideConnectionFields; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0079
    std::uint8_t UnscaledBounds[0x40]; // 0x0080 (Size: 0x40, Type: StructProperty)
    std::uint8_t PhysicsAttributes[0xA0]; // 0x00C0 (Size: 0xA0, Type: StructProperty)
    TArray<void*> GeometryContainers; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DetailTextures; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConnectionFields[0x30]; // 0x0180 (Size: 0x30, Type: StructProperty)
    std::uint8_t ConnectionFieldsOverride[0x30]; // 0x01B0 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> TechnicCapConnectivityRefs; // 0x01E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TechnicConnectorConnectivityRefs; // 0x01F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UAtomPrimitive, PartId) == 40, "Offset mismatch for UAtomPrimitive::PartId");
static_assert(offsetof(UAtomPrimitive, PartRevision) == 48, "Offset mismatch for UAtomPrimitive::PartRevision");
static_assert(offsetof(UAtomPrimitive, DesignName) == 64, "Offset mismatch for UAtomPrimitive::DesignName");
static_assert(offsetof(UAtomPrimitive, bIsFlex) == 68, "Offset mismatch for UAtomPrimitive::bIsFlex");
static_assert(offsetof(UAtomPrimitive, bIsVariant) == 69, "Offset mismatch for UAtomPrimitive::bIsVariant");
static_assert(offsetof(UAtomPrimitive, DecorationSurfaceNames) == 72, "Offset mismatch for UAtomPrimitive::DecorationSurfaceNames");
static_assert(offsetof(UAtomPrimitive, NumberOfColorSurfaces) == 88, "Offset mismatch for UAtomPrimitive::NumberOfColorSurfaces");
static_assert(offsetof(UAtomPrimitive, AtomPlatform) == 92, "Offset mismatch for UAtomPrimitive::AtomPlatform");
static_assert(offsetof(UAtomPrimitive, AtomMainGroupId) == 96, "Offset mismatch for UAtomPrimitive::AtomMainGroupId");
static_assert(offsetof(UAtomPrimitive, AtomSubMainGroupId) == 100, "Offset mismatch for UAtomPrimitive::AtomSubMainGroupId");
static_assert(offsetof(UAtomPrimitive, PrimitiveCommonParts) == 104, "Offset mismatch for UAtomPrimitive::PrimitiveCommonParts");
static_assert(offsetof(UAtomPrimitive, bOverrideConnectionFields) == 120, "Offset mismatch for UAtomPrimitive::bOverrideConnectionFields");
static_assert(offsetof(UAtomPrimitive, UnscaledBounds) == 128, "Offset mismatch for UAtomPrimitive::UnscaledBounds");
static_assert(offsetof(UAtomPrimitive, PhysicsAttributes) == 192, "Offset mismatch for UAtomPrimitive::PhysicsAttributes");
static_assert(offsetof(UAtomPrimitive, GeometryContainers) == 352, "Offset mismatch for UAtomPrimitive::GeometryContainers");
static_assert(offsetof(UAtomPrimitive, DetailTextures) == 368, "Offset mismatch for UAtomPrimitive::DetailTextures");
static_assert(offsetof(UAtomPrimitive, ConnectionFields) == 384, "Offset mismatch for UAtomPrimitive::ConnectionFields");
static_assert(offsetof(UAtomPrimitive, ConnectionFieldsOverride) == 432, "Offset mismatch for UAtomPrimitive::ConnectionFieldsOverride");
static_assert(offsetof(UAtomPrimitive, TechnicCapConnectivityRefs) == 480, "Offset mismatch for UAtomPrimitive::TechnicCapConnectivityRefs");
static_assert(offsetof(UAtomPrimitive, TechnicConnectorConnectivityRefs) == 496, "Offset mismatch for UAtomPrimitive::TechnicConnectorConnectivityRefs");

// /Script/AtomRuntime.AtomPrimitiveAssetUserData
// Kind: Class; super: AtomConnectivityAssetUserData
class UAtomPrimitiveAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AtomModelConnections[0x40]; // 0x0028 (Size: 0x40, Type: StructProperty)
    TArray<void*> Tags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomPrimitiveAssetUserData, AtomModelConnections) == 40, "Offset mismatch for UAtomPrimitiveAssetUserData::AtomModelConnections");
static_assert(offsetof(UAtomPrimitiveAssetUserData, Tags) == 104, "Offset mismatch for UAtomPrimitiveAssetUserData::Tags");

// /Script/AtomRuntime.AtomPrimitiveBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAtomPrimitiveBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPrimitiveCollisionGeometryWrapper
// Kind: Class; super: Object
class UAtomPrimitiveCollisionGeometryWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> BoxElems; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConvexElems; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAtomPrimitiveCollisionGeometryWrapper, BoxElems) == 40, "Offset mismatch for UAtomPrimitiveCollisionGeometryWrapper::BoxElems");
static_assert(offsetof(UAtomPrimitiveCollisionGeometryWrapper, ConvexElems) == 56, "Offset mismatch for UAtomPrimitiveCollisionGeometryWrapper::ConvexElems");

// /Script/AtomRuntime.AtomPrimitiveComponent
// Kind: Class; super: StaticMeshComponent
class UAtomPrimitiveComponent
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    void* AtomPrimitive; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    FString RenderStyle; // 0x06B8 (Size: 0x10, Type: StrProperty)
    FString FallbackRenderStyle; // 0x06C8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bUseCombinedMeshes; // 0x06D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRenderStyle; // 0x06D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFallbackRenderStyle; // 0x06DA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAtomPrimitiveComponent, AtomPrimitive) == 1712, "Offset mismatch for UAtomPrimitiveComponent::AtomPrimitive");
static_assert(offsetof(UAtomPrimitiveComponent, RenderStyle) == 1720, "Offset mismatch for UAtomPrimitiveComponent::RenderStyle");
static_assert(offsetof(UAtomPrimitiveComponent, FallbackRenderStyle) == 1736, "Offset mismatch for UAtomPrimitiveComponent::FallbackRenderStyle");
static_assert(offsetof(UAtomPrimitiveComponent, bUseCombinedMeshes) == 1752, "Offset mismatch for UAtomPrimitiveComponent::bUseCombinedMeshes");
static_assert(offsetof(UAtomPrimitiveComponent, bUseRenderStyle) == 1753, "Offset mismatch for UAtomPrimitiveComponent::bUseRenderStyle");
static_assert(offsetof(UAtomPrimitiveComponent, bUseFallbackRenderStyle) == 1754, "Offset mismatch for UAtomPrimitiveComponent::bUseFallbackRenderStyle");

// /Script/AtomRuntime.AtomPrimitiveGeometry
// Kind: Class; super: Object
class UAtomPrimitiveGeometry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomPrimitiveGeometryContainer
// Kind: Class; super: Object
class UAtomPrimitiveGeometryContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SourceMesh[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ExportStyleName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::int32_t LOD; // 0x004C (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> GeometryCount; // 0x0050 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SectionTextureInfos; // 0x0060 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UAtomPrimitiveGeometryContainer, SourceMesh) == 40, "Offset mismatch for UAtomPrimitiveGeometryContainer::SourceMesh");
static_assert(offsetof(UAtomPrimitiveGeometryContainer, ExportStyleName) == 72, "Offset mismatch for UAtomPrimitiveGeometryContainer::ExportStyleName");
static_assert(offsetof(UAtomPrimitiveGeometryContainer, LOD) == 76, "Offset mismatch for UAtomPrimitiveGeometryContainer::LOD");
static_assert(offsetof(UAtomPrimitiveGeometryContainer, GeometryCount) == 80, "Offset mismatch for UAtomPrimitiveGeometryContainer::GeometryCount");
static_assert(offsetof(UAtomPrimitiveGeometryContainer, SectionTextureInfos) == 96, "Offset mismatch for UAtomPrimitiveGeometryContainer::SectionTextureInfos");

// /Script/AtomRuntime.AtomPrimitiveStaticMeshComponent
// Kind: Class; super: StaticMeshComponent
class UAtomPrimitiveStaticMeshComponent
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

static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, ForcedLodModel) == 1496, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::ForcedLodModel");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MinLOD) == 1500, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MinLOD");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, SubDivisionStepSize) == 1504, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::SubDivisionStepSize");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, WireframeColorOverride) == 1508, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::WireframeColorOverride");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, StaticMesh) == 1512, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::StaticMesh");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, WorldPositionOffsetDisableDistance) == 1520, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, bDisallowNanite) == 1524, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::bDisallowNanite");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, bForceNavigationObstacle) == 1525, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::bForceNavigationObstacle");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, NavAreaClass) == 1528, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::NavAreaClass");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, bCastDistanceFieldIndirectShadow) == 1536, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::bCastDistanceFieldIndirectShadow");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, bEnableTextureColorMeshPainting) == 1537, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::bEnableTextureColorMeshPainting");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, OverriddenMeshPaintTextureCoordinateIndex) == 1540, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::OverriddenMeshPaintTextureCoordinateIndex");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, OverriddenMeshPaintTextureResolution) == 1544, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::OverriddenMeshPaintTextureResolution");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, OverriddenLightMapRes) == 1548, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::OverriddenLightMapRes");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MeshPaintTextureCooked) == 1552, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MeshPaintTextureCooked");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MeshPaintTextureOverride) == 1560, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MeshPaintTextureOverride");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MaterialCacheTileCount) == 1568, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MaterialCacheTileCount");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MaterialCacheUVRegion) == 1576, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MaterialCacheUVRegion");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MaterialCacheUVCoordinateIndex) == 1596, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MaterialCacheUVCoordinateIndex");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, MaterialCacheTextures) == 1600, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::MaterialCacheTextures");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility) == 1616, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::DistanceFieldIndirectShadowMinVisibility");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, DistanceFieldSelfShadowBias) == 1620, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::DistanceFieldSelfShadowBias");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, StreamingDistanceMultiplier) == 1624, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::StreamingDistanceMultiplier");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, NanitePixelProgrammableDistance) == 1628, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::NanitePixelProgrammableDistance");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, LODData) == 1632, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::LODData");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, StreamingTextureData) == 1648, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::StreamingTextureData");
static_assert(offsetof(UAtomPrimitiveStaticMeshComponent, LightmassSettings) == 1664, "Offset mismatch for UAtomPrimitiveStaticMeshComponent::LightmassSettings");

// /Script/AtomRuntime.AtomProcessorBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAtomProcessorBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomRejectionReason
// Kind: Class; super: Interface
class UAtomRejectionReason
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomRuntimeBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAtomRuntimeBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomRuntimeSettings
// Kind: Class; super: DeveloperSettings
class UAtomRuntimeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float PrimitiveGlobalScale; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t ColorDataTableOverride[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bCookContent; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0059
    float BrickPlacementCollisionOverlapTolerance; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAtomRuntimeSettings, PrimitiveGlobalScale) == 48, "Offset mismatch for UAtomRuntimeSettings::PrimitiveGlobalScale");
static_assert(offsetof(UAtomRuntimeSettings, ColorDataTableOverride) == 56, "Offset mismatch for UAtomRuntimeSettings::ColorDataTableOverride");
static_assert(offsetof(UAtomRuntimeSettings, bCookContent) == 88, "Offset mismatch for UAtomRuntimeSettings::bCookContent");
static_assert(offsetof(UAtomRuntimeSettings, BrickPlacementCollisionOverlapTolerance) == 92, "Offset mismatch for UAtomRuntimeSettings::BrickPlacementCollisionOverlapTolerance");

// /Script/AtomRuntime.AtomSpatialAccelerationSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UAtomSpatialAccelerationSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomSpatialAccelerationSubsystemOctree
// Kind: Class; super: AtomSpatialAccelerationSubsystem
class UAtomSpatialAccelerationSubsystemOctree
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomSpatialAccelerationSubsystemUniformGrid
// Kind: Class; super: AtomSpatialAccelerationSubsystem
class UAtomSpatialAccelerationSubsystemUniformGrid
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.AtomTextureImportData
// Kind: Class; super: AssetImportData
class UAtomTextureImportData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.ConnectivityBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UConnectivityBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.ConnectivityRegistration
// Kind: Class; super: Object
class UConnectivityRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.DirectPlacement
// Kind: Class; super: Interface
class UDirectPlacement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.DirectSnapPlacementTool
// Kind: Class; super: ProximitySnapPlacementTool
class UDirectSnapPlacementTool
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> ConnectivityRegistrationWeakPtr; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t PlacementOperation[0x1]; // 0x0040 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UDirectSnapPlacementTool, ConnectivityRegistrationWeakPtr) == 48, "Offset mismatch for UDirectSnapPlacementTool::ConnectivityRegistrationWeakPtr");
static_assert(offsetof(UDirectSnapPlacementTool, PlacementOperation) == 64, "Offset mismatch for UDirectSnapPlacementTool::PlacementOperation");

// /Script/AtomRuntime.DragPlacement
// Kind: Class; super: Interface
class UDragPlacement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.DragSnapPlacementTool
// Kind: Class; super: AtomPlacementToolBase
class UDragSnapPlacementTool
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> ConnectivityRegistrationWeakPtr; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t PlacementOperation[0x1]; // 0x0040 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UDragSnapPlacementTool, ConnectivityRegistrationWeakPtr) == 48, "Offset mismatch for UDragSnapPlacementTool::ConnectivityRegistrationWeakPtr");
static_assert(offsetof(UDragSnapPlacementTool, PlacementOperation) == 64, "Offset mismatch for UDragSnapPlacementTool::PlacementOperation");

// /Script/AtomRuntime.PlacementOperationBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPlacementOperationBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.PlacementSettings
// Kind: Class; super: Object
class UPlacementSettings
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t SnapToolMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreRejectedEdgeSnappingPlacement; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetPlacementRotation; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t DragSnapMode; // 0x007B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableEdgeSnapping; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::uint32_t MaxSnappingDistanceInKnobCount; // 0x0080 (Size: 0x4, Type: UInt32Property)
    float LateralNudgeDistanceInKnobCount; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float VerticalNudgeDistanceInPlateCount; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float RotateNudgeDegrees; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSingleFieldPlacement; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCollisionDetection; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0092
    double LineTraceLength; // 0x0098 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ConnectivityTraceProfileName[0x4]; // 0x00A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RegistrationOverlapProfileName[0x4]; // 0x00A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDebugVisualization; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A9
    std::int32_t DebugDrawFlags; // 0x00AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPlacementSettings, SnapToolMode) == 120, "Offset mismatch for UPlacementSettings::SnapToolMode");
static_assert(offsetof(UPlacementSettings, bIgnoreRejectedEdgeSnappingPlacement) == 121, "Offset mismatch for UPlacementSettings::bIgnoreRejectedEdgeSnappingPlacement");
static_assert(offsetof(UPlacementSettings, bResetPlacementRotation) == 122, "Offset mismatch for UPlacementSettings::bResetPlacementRotation");
static_assert(offsetof(UPlacementSettings, DragSnapMode) == 123, "Offset mismatch for UPlacementSettings::DragSnapMode");
static_assert(offsetof(UPlacementSettings, bEnableEdgeSnapping) == 124, "Offset mismatch for UPlacementSettings::bEnableEdgeSnapping");
static_assert(offsetof(UPlacementSettings, MaxSnappingDistanceInKnobCount) == 128, "Offset mismatch for UPlacementSettings::MaxSnappingDistanceInKnobCount");
static_assert(offsetof(UPlacementSettings, LateralNudgeDistanceInKnobCount) == 132, "Offset mismatch for UPlacementSettings::LateralNudgeDistanceInKnobCount");
static_assert(offsetof(UPlacementSettings, VerticalNudgeDistanceInPlateCount) == 136, "Offset mismatch for UPlacementSettings::VerticalNudgeDistanceInPlateCount");
static_assert(offsetof(UPlacementSettings, RotateNudgeDegrees) == 140, "Offset mismatch for UPlacementSettings::RotateNudgeDegrees");
static_assert(offsetof(UPlacementSettings, bSingleFieldPlacement) == 144, "Offset mismatch for UPlacementSettings::bSingleFieldPlacement");
static_assert(offsetof(UPlacementSettings, bEnableCollisionDetection) == 145, "Offset mismatch for UPlacementSettings::bEnableCollisionDetection");
static_assert(offsetof(UPlacementSettings, LineTraceLength) == 152, "Offset mismatch for UPlacementSettings::LineTraceLength");
static_assert(offsetof(UPlacementSettings, ConnectivityTraceProfileName) == 160, "Offset mismatch for UPlacementSettings::ConnectivityTraceProfileName");
static_assert(offsetof(UPlacementSettings, RegistrationOverlapProfileName) == 164, "Offset mismatch for UPlacementSettings::RegistrationOverlapProfileName");
static_assert(offsetof(UPlacementSettings, bDebugVisualization) == 168, "Offset mismatch for UPlacementSettings::bDebugVisualization");
static_assert(offsetof(UPlacementSettings, DebugDrawFlags) == 172, "Offset mismatch for UPlacementSettings::DebugDrawFlags");

// /Script/AtomRuntime.ProximitySnapPlacementTool
// Kind: Class; super: AtomPlacementToolBase
class UProximitySnapPlacementTool
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> ConnectivityRegistrationWeakPtr; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t PlacementOperation[0x1]; // 0x0040 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UProximitySnapPlacementTool, ConnectivityRegistrationWeakPtr) == 48, "Offset mismatch for UProximitySnapPlacementTool::ConnectivityRegistrationWeakPtr");
static_assert(offsetof(UProximitySnapPlacementTool, PlacementOperation) == 64, "Offset mismatch for UProximitySnapPlacementTool::PlacementOperation");

// /Script/AtomRuntime.WorldConnectivityBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UWorldConnectivityBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AtomRuntime.WorldConnectivitySubsystem
// Kind: Class; super: WorldSubsystem
class UWorldConnectivitySubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ConnectivityRegistration; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWorldConnectivitySubsystem, ConnectivityRegistration) == 56, "Offset mismatch for UWorldConnectivitySubsystem::ConnectivityRegistration");
