/**
 * decamp dumper generated SDK
 * Package: /Script/HairStrandsCore
 */
#pragma once
#include "Basic.h"

// /Script/HairStrandsCore.FollicleMaskOptions
// Kind: ScriptStruct; super: none
struct FFollicleMaskOptions
{
public:
    void* Groom; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Channel; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFollicleMaskOptions, Groom) == 0, "Offset mismatch for FFollicleMaskOptions::Groom");
static_assert(offsetof(FFollicleMaskOptions, Channel) == 8, "Offset mismatch for FFollicleMaskOptions::Channel");

// /Script/HairStrandsCore.GoomBindingGroupInfo
// Kind: ScriptStruct; super: none
struct FGoomBindingGroupInfo
{
public:
    std::int32_t RenRootCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RenLODCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t SimRootCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t SimLODCount; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGoomBindingGroupInfo, RenRootCount) == 0, "Offset mismatch for FGoomBindingGroupInfo::RenRootCount");
static_assert(offsetof(FGoomBindingGroupInfo, RenLODCount) == 4, "Offset mismatch for FGoomBindingGroupInfo::RenLODCount");
static_assert(offsetof(FGoomBindingGroupInfo, SimRootCount) == 8, "Offset mismatch for FGoomBindingGroupInfo::SimRootCount");
static_assert(offsetof(FGoomBindingGroupInfo, SimLODCount) == 12, "Offset mismatch for FGoomBindingGroupInfo::SimLODCount");

// /Script/HairStrandsCore.GroomAnimationInfo
// Kind: ScriptStruct; super: none
struct FGroomAnimationInfo
{
public:
    std::uint32_t NumFrames; // 0x0000 (Size: 0x4, Type: UInt32Property)
    float SecondsPerFrame; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StartTime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::int32_t StartFrame; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrame; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Attributes; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGroomAnimationInfo, NumFrames) == 0, "Offset mismatch for FGroomAnimationInfo::NumFrames");
static_assert(offsetof(FGroomAnimationInfo, SecondsPerFrame) == 4, "Offset mismatch for FGroomAnimationInfo::SecondsPerFrame");
static_assert(offsetof(FGroomAnimationInfo, duration) == 8, "Offset mismatch for FGroomAnimationInfo::duration");
static_assert(offsetof(FGroomAnimationInfo, StartTime) == 12, "Offset mismatch for FGroomAnimationInfo::StartTime");
static_assert(offsetof(FGroomAnimationInfo, EndTime) == 16, "Offset mismatch for FGroomAnimationInfo::EndTime");
static_assert(offsetof(FGroomAnimationInfo, StartFrame) == 20, "Offset mismatch for FGroomAnimationInfo::StartFrame");
static_assert(offsetof(FGroomAnimationInfo, EndFrame) == 24, "Offset mismatch for FGroomAnimationInfo::EndFrame");
static_assert(offsetof(FGroomAnimationInfo, Attributes) == 28, "Offset mismatch for FGroomAnimationInfo::Attributes");

// /Script/HairStrandsCore.GroomBuildSettings
// Kind: ScriptStruct; super: none
struct FGroomBuildSettings
{
public:
    std::uint8_t bOverrideGuides; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float HairToGuideDensity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InterpolationQuality; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t InterpolationDistance; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRandomizeGuide; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUniqueGuide; // 0x000B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGroomBuildSettings, bOverrideGuides) == 0, "Offset mismatch for FGroomBuildSettings::bOverrideGuides");
static_assert(offsetof(FGroomBuildSettings, HairToGuideDensity) == 4, "Offset mismatch for FGroomBuildSettings::HairToGuideDensity");
static_assert(offsetof(FGroomBuildSettings, InterpolationQuality) == 8, "Offset mismatch for FGroomBuildSettings::InterpolationQuality");
static_assert(offsetof(FGroomBuildSettings, InterpolationDistance) == 9, "Offset mismatch for FGroomBuildSettings::InterpolationDistance");
static_assert(offsetof(FGroomBuildSettings, bRandomizeGuide) == 10, "Offset mismatch for FGroomBuildSettings::bRandomizeGuide");
static_assert(offsetof(FGroomBuildSettings, bUseUniqueGuide) == 11, "Offset mismatch for FGroomBuildSettings::bUseUniqueGuide");

// /Script/HairStrandsCore.GroomCacheImportSettings
// Kind: ScriptStruct; super: none
struct FGroomCacheImportSettings
{
public:
    std::uint8_t bImportGroomCache; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ImportType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t FrameStart; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t FrameEnd; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSkipEmptyFrames; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bImportGroomAsset; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    std::uint8_t GroomAsset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideConversionSettings; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0029
    std::uint8_t ConversionSettings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGroomCacheImportSettings, bImportGroomCache) == 0, "Offset mismatch for FGroomCacheImportSettings::bImportGroomCache");
static_assert(offsetof(FGroomCacheImportSettings, ImportType) == 1, "Offset mismatch for FGroomCacheImportSettings::ImportType");
static_assert(offsetof(FGroomCacheImportSettings, FrameStart) == 4, "Offset mismatch for FGroomCacheImportSettings::FrameStart");
static_assert(offsetof(FGroomCacheImportSettings, FrameEnd) == 8, "Offset mismatch for FGroomCacheImportSettings::FrameEnd");
static_assert(offsetof(FGroomCacheImportSettings, bSkipEmptyFrames) == 12, "Offset mismatch for FGroomCacheImportSettings::bSkipEmptyFrames");
static_assert(offsetof(FGroomCacheImportSettings, bImportGroomAsset) == 13, "Offset mismatch for FGroomCacheImportSettings::bImportGroomAsset");
static_assert(offsetof(FGroomCacheImportSettings, GroomAsset) == 16, "Offset mismatch for FGroomCacheImportSettings::GroomAsset");
static_assert(offsetof(FGroomCacheImportSettings, bOverrideConversionSettings) == 40, "Offset mismatch for FGroomCacheImportSettings::bOverrideConversionSettings");
static_assert(offsetof(FGroomCacheImportSettings, ConversionSettings) == 48, "Offset mismatch for FGroomCacheImportSettings::ConversionSettings");

// /Script/HairStrandsCore.GroomCacheInfo
// Kind: ScriptStruct; super: none
struct FGroomCacheInfo
{
public:
    std::int32_t Version; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t AnimationInfo[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGroomCacheInfo, Version) == 0, "Offset mismatch for FGroomCacheInfo::Version");
static_assert(offsetof(FGroomCacheInfo, Type) == 4, "Offset mismatch for FGroomCacheInfo::Type");
static_assert(offsetof(FGroomCacheInfo, AnimationInfo) == 8, "Offset mismatch for FGroomCacheInfo::AnimationInfo");

// /Script/HairStrandsCore.GroomConversionSettings
// Kind: ScriptStruct; super: none
struct FGroomConversionSettings
{
public:
    std::uint8_t Rotation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGroomConversionSettings, Rotation) == 0, "Offset mismatch for FGroomConversionSettings::Rotation");
static_assert(offsetof(FGroomConversionSettings, Scale) == 24, "Offset mismatch for FGroomConversionSettings::Scale");

// /Script/HairStrandsCore.GroomDataflowSettings
// Kind: ScriptStruct; super: DataflowInstance
struct FGroomDataflowSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> SkeletalMeshes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshLODs; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGroomDataflowSettings, SkeletalMeshes) == 80, "Offset mismatch for FGroomDataflowSettings::SkeletalMeshes");
static_assert(offsetof(FGroomDataflowSettings, MeshLODs) == 96, "Offset mismatch for FGroomDataflowSettings::MeshLODs");

// /Script/HairStrandsCore.GroomHairGroupPreview
// Kind: ScriptStruct; super: none
struct FGroomHairGroupPreview
{
public:
    std::int32_t GroupIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t GroupName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t GroupID; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t CurveCount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t GuideCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint32_t Attributes; // 0x0014 (Size: 0x4, Type: UInt32Property)
    std::uint32_t AttributeFlags; // 0x0018 (Size: 0x4, Type: UInt32Property)
    std::uint32_t Flags; // 0x001C (Size: 0x4, Type: UInt32Property)
    std::uint8_t InterpolationSettings[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGroomHairGroupPreview, GroupIndex) == 0, "Offset mismatch for FGroomHairGroupPreview::GroupIndex");
static_assert(offsetof(FGroomHairGroupPreview, GroupName) == 4, "Offset mismatch for FGroomHairGroupPreview::GroupName");
static_assert(offsetof(FGroomHairGroupPreview, GroupID) == 8, "Offset mismatch for FGroomHairGroupPreview::GroupID");
static_assert(offsetof(FGroomHairGroupPreview, CurveCount) == 12, "Offset mismatch for FGroomHairGroupPreview::CurveCount");
static_assert(offsetof(FGroomHairGroupPreview, GuideCount) == 16, "Offset mismatch for FGroomHairGroupPreview::GuideCount");
static_assert(offsetof(FGroomHairGroupPreview, Attributes) == 20, "Offset mismatch for FGroomHairGroupPreview::Attributes");
static_assert(offsetof(FGroomHairGroupPreview, AttributeFlags) == 24, "Offset mismatch for FGroomHairGroupPreview::AttributeFlags");
static_assert(offsetof(FGroomHairGroupPreview, Flags) == 28, "Offset mismatch for FGroomHairGroupPreview::Flags");
static_assert(offsetof(FGroomHairGroupPreview, InterpolationSettings) == 32, "Offset mismatch for FGroomHairGroupPreview::InterpolationSettings");

// /Script/HairStrandsCore.HairAdvancedRenderingSettings
// Kind: ScriptStruct; super: none
struct FHairAdvancedRenderingSettings
{
public:
    std::uint8_t bUseStableRasterization; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScatterSceneLighting; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairAdvancedRenderingSettings, bUseStableRasterization) == 0, "Offset mismatch for FHairAdvancedRenderingSettings::bUseStableRasterization");
static_assert(offsetof(FHairAdvancedRenderingSettings, bScatterSceneLighting) == 1, "Offset mismatch for FHairAdvancedRenderingSettings::bScatterSceneLighting");

// /Script/HairStrandsCore.HairBendConstraint
// Kind: ScriptStruct; super: none
struct FHairBendConstraint
{
public:
    std::uint8_t SolveBend; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ProjectBend; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float BendDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BendStiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t BendScale[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairBendConstraint, SolveBend) == 0, "Offset mismatch for FHairBendConstraint::SolveBend");
static_assert(offsetof(FHairBendConstraint, ProjectBend) == 1, "Offset mismatch for FHairBendConstraint::ProjectBend");
static_assert(offsetof(FHairBendConstraint, BendDamping) == 4, "Offset mismatch for FHairBendConstraint::BendDamping");
static_assert(offsetof(FHairBendConstraint, BendStiffness) == 8, "Offset mismatch for FHairBendConstraint::BendStiffness");
static_assert(offsetof(FHairBendConstraint, BendScale) == 16, "Offset mismatch for FHairBendConstraint::BendScale");

// /Script/HairStrandsCore.HairCollisionConstraint
// Kind: ScriptStruct; super: none
struct FHairCollisionConstraint
{
public:
    std::uint8_t SolveCollision; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ProjectCollision; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float StaticFriction; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float KineticFriction; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StrandsViscosity; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t GridDimension[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    float CollisionRadius; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RadiusScale[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairCollisionConstraint, SolveCollision) == 0, "Offset mismatch for FHairCollisionConstraint::SolveCollision");
static_assert(offsetof(FHairCollisionConstraint, ProjectCollision) == 1, "Offset mismatch for FHairCollisionConstraint::ProjectCollision");
static_assert(offsetof(FHairCollisionConstraint, StaticFriction) == 4, "Offset mismatch for FHairCollisionConstraint::StaticFriction");
static_assert(offsetof(FHairCollisionConstraint, KineticFriction) == 8, "Offset mismatch for FHairCollisionConstraint::KineticFriction");
static_assert(offsetof(FHairCollisionConstraint, StrandsViscosity) == 12, "Offset mismatch for FHairCollisionConstraint::StrandsViscosity");
static_assert(offsetof(FHairCollisionConstraint, GridDimension) == 16, "Offset mismatch for FHairCollisionConstraint::GridDimension");
static_assert(offsetof(FHairCollisionConstraint, CollisionRadius) == 28, "Offset mismatch for FHairCollisionConstraint::CollisionRadius");
static_assert(offsetof(FHairCollisionConstraint, RadiusScale) == 32, "Offset mismatch for FHairCollisionConstraint::RadiusScale");

// /Script/HairStrandsCore.HairDecimationSettings
// Kind: ScriptStruct; super: none
struct FHairDecimationSettings
{
public:
    float CurveDecimation; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VertexDecimation; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHairDecimationSettings, CurveDecimation) == 0, "Offset mismatch for FHairDecimationSettings::CurveDecimation");
static_assert(offsetof(FHairDecimationSettings, VertexDecimation) == 4, "Offset mismatch for FHairDecimationSettings::VertexDecimation");

// /Script/HairStrandsCore.HairDeformationSettings
// Kind: ScriptStruct; super: none
struct FHairDeformationSettings
{
public:
    std::uint8_t bEnableRigging; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t NumCurves; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPoints; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHairDeformationSettings, bEnableRigging) == 0, "Offset mismatch for FHairDeformationSettings::bEnableRigging");
static_assert(offsetof(FHairDeformationSettings, NumCurves) == 4, "Offset mismatch for FHairDeformationSettings::NumCurves");
static_assert(offsetof(FHairDeformationSettings, NumPoints) == 8, "Offset mismatch for FHairDeformationSettings::NumPoints");

// /Script/HairStrandsCore.HairExternalForces
// Kind: ScriptStruct; super: none
struct FHairExternalForces
{
public:
    std::uint8_t GravityVector[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float AirDrag; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t AirVelocity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairExternalForces, GravityVector) == 0, "Offset mismatch for FHairExternalForces::GravityVector");
static_assert(offsetof(FHairExternalForces, AirDrag) == 24, "Offset mismatch for FHairExternalForces::AirDrag");
static_assert(offsetof(FHairExternalForces, AirVelocity) == 32, "Offset mismatch for FHairExternalForces::AirVelocity");

// /Script/HairStrandsCore.HairGeometrySettings
// Kind: ScriptStruct; super: none
struct FHairGeometrySettings
{
public:
    float HairWidth; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairWidth_Override; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float HairRootScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float HairTipScale; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHairGeometrySettings, HairWidth) == 0, "Offset mismatch for FHairGeometrySettings::HairWidth");
static_assert(offsetof(FHairGeometrySettings, HairWidth_Override) == 4, "Offset mismatch for FHairGeometrySettings::HairWidth_Override");
static_assert(offsetof(FHairGeometrySettings, HairRootScale) == 8, "Offset mismatch for FHairGeometrySettings::HairRootScale");
static_assert(offsetof(FHairGeometrySettings, HairTipScale) == 12, "Offset mismatch for FHairGeometrySettings::HairTipScale");

// /Script/HairStrandsCore.HairGroupCardsInfo
// Kind: ScriptStruct; super: none
struct FHairGroupCardsInfo
{
public:
    std::int32_t NumCards; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCardVertices; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHairGroupCardsInfo, NumCards) == 0, "Offset mismatch for FHairGroupCardsInfo::NumCards");
static_assert(offsetof(FHairGroupCardsInfo, NumCardVertices) == 4, "Offset mismatch for FHairGroupCardsInfo::NumCardVertices");

// /Script/HairStrandsCore.HairGroupCardsTextures
// Kind: ScriptStruct; super: none
struct FHairGroupCardsTextures
{
public:
    std::uint8_t Layout; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Textures; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* DepthTexture; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* CoverageTexture; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* TangentTexture; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* AttributeTexture; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* AuxilaryDataTexture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MaterialTexture; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FHairGroupCardsTextures, Layout) == 0, "Offset mismatch for FHairGroupCardsTextures::Layout");
static_assert(offsetof(FHairGroupCardsTextures, Textures) == 8, "Offset mismatch for FHairGroupCardsTextures::Textures");
static_assert(offsetof(FHairGroupCardsTextures, DepthTexture) == 24, "Offset mismatch for FHairGroupCardsTextures::DepthTexture");
static_assert(offsetof(FHairGroupCardsTextures, CoverageTexture) == 32, "Offset mismatch for FHairGroupCardsTextures::CoverageTexture");
static_assert(offsetof(FHairGroupCardsTextures, TangentTexture) == 40, "Offset mismatch for FHairGroupCardsTextures::TangentTexture");
static_assert(offsetof(FHairGroupCardsTextures, AttributeTexture) == 48, "Offset mismatch for FHairGroupCardsTextures::AttributeTexture");
static_assert(offsetof(FHairGroupCardsTextures, AuxilaryDataTexture) == 56, "Offset mismatch for FHairGroupCardsTextures::AuxilaryDataTexture");
static_assert(offsetof(FHairGroupCardsTextures, MaterialTexture) == 64, "Offset mismatch for FHairGroupCardsTextures::MaterialTexture");

// /Script/HairStrandsCore.HairGroupDesc
// Kind: ScriptStruct; super: none
struct FHairGroupDesc
{
public:
    float HairLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float HairWidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairWidth_Override; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float HairRootScale; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairRootScale_Override; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float HairTipScale; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairTipScale_Override; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    float HairShadowDensity; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairShadowDensity_Override; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0021
    float HairRaytracingRadiusScale; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairRaytracingRadiusScale_Override; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHairRaytracingGeometry; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHairRaytracingGeometry_Override; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x002B
    float LODBias; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseStableRasterization; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseStableRasterization_Override; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScatterSceneLighting; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScatterSceneLighting_Override; // 0x0033 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportVoxelization; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportVoxelization_Override; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0036
    float HairLengthScale; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HairLengthScale_Override; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairGroupDesc, HairLength) == 0, "Offset mismatch for FHairGroupDesc::HairLength");
static_assert(offsetof(FHairGroupDesc, HairWidth) == 4, "Offset mismatch for FHairGroupDesc::HairWidth");
static_assert(offsetof(FHairGroupDesc, HairWidth_Override) == 8, "Offset mismatch for FHairGroupDesc::HairWidth_Override");
static_assert(offsetof(FHairGroupDesc, HairRootScale) == 12, "Offset mismatch for FHairGroupDesc::HairRootScale");
static_assert(offsetof(FHairGroupDesc, HairRootScale_Override) == 16, "Offset mismatch for FHairGroupDesc::HairRootScale_Override");
static_assert(offsetof(FHairGroupDesc, HairTipScale) == 20, "Offset mismatch for FHairGroupDesc::HairTipScale");
static_assert(offsetof(FHairGroupDesc, HairTipScale_Override) == 24, "Offset mismatch for FHairGroupDesc::HairTipScale_Override");
static_assert(offsetof(FHairGroupDesc, HairShadowDensity) == 28, "Offset mismatch for FHairGroupDesc::HairShadowDensity");
static_assert(offsetof(FHairGroupDesc, HairShadowDensity_Override) == 32, "Offset mismatch for FHairGroupDesc::HairShadowDensity_Override");
static_assert(offsetof(FHairGroupDesc, HairRaytracingRadiusScale) == 36, "Offset mismatch for FHairGroupDesc::HairRaytracingRadiusScale");
static_assert(offsetof(FHairGroupDesc, HairRaytracingRadiusScale_Override) == 40, "Offset mismatch for FHairGroupDesc::HairRaytracingRadiusScale_Override");
static_assert(offsetof(FHairGroupDesc, bUseHairRaytracingGeometry) == 41, "Offset mismatch for FHairGroupDesc::bUseHairRaytracingGeometry");
static_assert(offsetof(FHairGroupDesc, bUseHairRaytracingGeometry_Override) == 42, "Offset mismatch for FHairGroupDesc::bUseHairRaytracingGeometry_Override");
static_assert(offsetof(FHairGroupDesc, LODBias) == 44, "Offset mismatch for FHairGroupDesc::LODBias");
static_assert(offsetof(FHairGroupDesc, bUseStableRasterization) == 48, "Offset mismatch for FHairGroupDesc::bUseStableRasterization");
static_assert(offsetof(FHairGroupDesc, bUseStableRasterization_Override) == 49, "Offset mismatch for FHairGroupDesc::bUseStableRasterization_Override");
static_assert(offsetof(FHairGroupDesc, bScatterSceneLighting) == 50, "Offset mismatch for FHairGroupDesc::bScatterSceneLighting");
static_assert(offsetof(FHairGroupDesc, bScatterSceneLighting_Override) == 51, "Offset mismatch for FHairGroupDesc::bScatterSceneLighting_Override");
static_assert(offsetof(FHairGroupDesc, bSupportVoxelization) == 52, "Offset mismatch for FHairGroupDesc::bSupportVoxelization");
static_assert(offsetof(FHairGroupDesc, bSupportVoxelization_Override) == 53, "Offset mismatch for FHairGroupDesc::bSupportVoxelization_Override");
static_assert(offsetof(FHairGroupDesc, HairLengthScale) == 56, "Offset mismatch for FHairGroupDesc::HairLengthScale");
static_assert(offsetof(FHairGroupDesc, HairLengthScale_Override) == 60, "Offset mismatch for FHairGroupDesc::HairLengthScale_Override");

// /Script/HairStrandsCore.HairGroupInfo
// Kind: ScriptStruct; super: none
struct FHairGroupInfo
{
public:
    std::int32_t GroupIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t GroupID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t GroupName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::int32_t NumCurves; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NumGuides; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCurveVertices; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t NumGuideVertices; // 0x0018 (Size: 0x4, Type: IntProperty)
    float MaxCurveLength; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint32_t Flags; // 0x0020 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    TArray<void*> LODInfos; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FHairGroupInfo, GroupIndex) == 0, "Offset mismatch for FHairGroupInfo::GroupIndex");
static_assert(offsetof(FHairGroupInfo, GroupID) == 4, "Offset mismatch for FHairGroupInfo::GroupID");
static_assert(offsetof(FHairGroupInfo, GroupName) == 8, "Offset mismatch for FHairGroupInfo::GroupName");
static_assert(offsetof(FHairGroupInfo, NumCurves) == 12, "Offset mismatch for FHairGroupInfo::NumCurves");
static_assert(offsetof(FHairGroupInfo, NumGuides) == 16, "Offset mismatch for FHairGroupInfo::NumGuides");
static_assert(offsetof(FHairGroupInfo, NumCurveVertices) == 20, "Offset mismatch for FHairGroupInfo::NumCurveVertices");
static_assert(offsetof(FHairGroupInfo, NumGuideVertices) == 24, "Offset mismatch for FHairGroupInfo::NumGuideVertices");
static_assert(offsetof(FHairGroupInfo, MaxCurveLength) == 28, "Offset mismatch for FHairGroupInfo::MaxCurveLength");
static_assert(offsetof(FHairGroupInfo, Flags) == 32, "Offset mismatch for FHairGroupInfo::Flags");
static_assert(offsetof(FHairGroupInfo, LODInfos) == 40, "Offset mismatch for FHairGroupInfo::LODInfos");

// /Script/HairStrandsCore.HairGroupInfoWithVisibility
// Kind: ScriptStruct; super: HairGroupInfo
struct FHairGroupInfoWithVisibility
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bIsVisible; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairGroupInfoWithVisibility, bIsVisible) == 56, "Offset mismatch for FHairGroupInfoWithVisibility::bIsVisible");

// /Script/HairStrandsCore.HairGroupLODInfo
// Kind: ScriptStruct; super: none
struct FHairGroupLODInfo
{
public:
    std::int32_t NumPoints; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCurves; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHairGroupLODInfo, NumPoints) == 0, "Offset mismatch for FHairGroupLODInfo::NumPoints");
static_assert(offsetof(FHairGroupLODInfo, NumCurves) == 4, "Offset mismatch for FHairGroupLODInfo::NumCurves");

// /Script/HairStrandsCore.HairGroupsCardsSourceDescription
// Kind: ScriptStruct; super: none
struct FHairGroupsCardsSourceDescription
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialSlotName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    void* ProceduralMesh; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInvertUV; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GuideType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    void* ImportedMesh; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Textures[0x50]; // 0x0028 (Size: 0x50, Type: StructProperty)
    std::int32_t GroupIndex; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t LODIndex; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t CardsInfo[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    FString ImportedMeshKey; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FHairGroupsCardsSourceDescription, Material) == 0, "Offset mismatch for FHairGroupsCardsSourceDescription::Material");
static_assert(offsetof(FHairGroupsCardsSourceDescription, MaterialSlotName) == 8, "Offset mismatch for FHairGroupsCardsSourceDescription::MaterialSlotName");
static_assert(offsetof(FHairGroupsCardsSourceDescription, SourceType) == 12, "Offset mismatch for FHairGroupsCardsSourceDescription::SourceType");
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMesh) == 16, "Offset mismatch for FHairGroupsCardsSourceDescription::ProceduralMesh");
static_assert(offsetof(FHairGroupsCardsSourceDescription, bInvertUV) == 24, "Offset mismatch for FHairGroupsCardsSourceDescription::bInvertUV");
static_assert(offsetof(FHairGroupsCardsSourceDescription, GuideType) == 25, "Offset mismatch for FHairGroupsCardsSourceDescription::GuideType");
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMesh) == 32, "Offset mismatch for FHairGroupsCardsSourceDescription::ImportedMesh");
static_assert(offsetof(FHairGroupsCardsSourceDescription, Textures) == 40, "Offset mismatch for FHairGroupsCardsSourceDescription::Textures");
static_assert(offsetof(FHairGroupsCardsSourceDescription, GroupIndex) == 120, "Offset mismatch for FHairGroupsCardsSourceDescription::GroupIndex");
static_assert(offsetof(FHairGroupsCardsSourceDescription, LODIndex) == 124, "Offset mismatch for FHairGroupsCardsSourceDescription::LODIndex");
static_assert(offsetof(FHairGroupsCardsSourceDescription, CardsInfo) == 128, "Offset mismatch for FHairGroupsCardsSourceDescription::CardsInfo");
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMeshKey) == 136, "Offset mismatch for FHairGroupsCardsSourceDescription::ImportedMeshKey");

// /Script/HairStrandsCore.HairGroupsInterpolation
// Kind: ScriptStruct; super: none
struct FHairGroupsInterpolation
{
public:
    std::uint8_t DecimationSettings[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t InterpolationSettings[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    std::uint8_t RiggingSettings[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairGroupsInterpolation, DecimationSettings) == 0, "Offset mismatch for FHairGroupsInterpolation::DecimationSettings");
static_assert(offsetof(FHairGroupsInterpolation, InterpolationSettings) == 8, "Offset mismatch for FHairGroupsInterpolation::InterpolationSettings");
static_assert(offsetof(FHairGroupsInterpolation, RiggingSettings) == 28, "Offset mismatch for FHairGroupsInterpolation::RiggingSettings");

// /Script/HairStrandsCore.HairGroupsLOD
// Kind: ScriptStruct; super: none
struct FHairGroupsLOD
{
public:
    float AutoLODBias; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Lods; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FHairGroupsLOD, AutoLODBias) == 0, "Offset mismatch for FHairGroupsLOD::AutoLODBias");
static_assert(offsetof(FHairGroupsLOD, Lods) == 8, "Offset mismatch for FHairGroupsLOD::Lods");

// /Script/HairStrandsCore.HairGroupsMaterial
// Kind: ScriptStruct; super: none
struct FHairGroupsMaterial
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName SlotName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FHairGroupsMaterial, Material) == 0, "Offset mismatch for FHairGroupsMaterial::Material");
static_assert(offsetof(FHairGroupsMaterial, SlotName) == 8, "Offset mismatch for FHairGroupsMaterial::SlotName");

// /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
// Kind: ScriptStruct; super: none
struct FHairGroupsMeshesSourceDescription
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FName MaterialSlotName; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* ImportedMesh; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Textures[0x50]; // 0x0018 (Size: 0x50, Type: StructProperty)
    std::int32_t GroupIndex; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t LODIndex; // 0x006C (Size: 0x4, Type: IntProperty)
    FString ImportedMeshKey; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FHairGroupsMeshesSourceDescription, Material) == 0, "Offset mismatch for FHairGroupsMeshesSourceDescription::Material");
static_assert(offsetof(FHairGroupsMeshesSourceDescription, MaterialSlotName) == 8, "Offset mismatch for FHairGroupsMeshesSourceDescription::MaterialSlotName");
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMesh) == 16, "Offset mismatch for FHairGroupsMeshesSourceDescription::ImportedMesh");
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Textures) == 24, "Offset mismatch for FHairGroupsMeshesSourceDescription::Textures");
static_assert(offsetof(FHairGroupsMeshesSourceDescription, GroupIndex) == 104, "Offset mismatch for FHairGroupsMeshesSourceDescription::GroupIndex");
static_assert(offsetof(FHairGroupsMeshesSourceDescription, LODIndex) == 108, "Offset mismatch for FHairGroupsMeshesSourceDescription::LODIndex");
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMeshKey) == 112, "Offset mismatch for FHairGroupsMeshesSourceDescription::ImportedMeshKey");

// /Script/HairStrandsCore.HairGroupsPhysics
// Kind: ScriptStruct; super: none
struct FHairGroupsPhysics
{
public:
    std::uint8_t SolverSettings[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExternalForces[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaterialConstraints[0x118]; // 0x0070 (Size: 0x118, Type: StructProperty)
    std::uint8_t StrandsParameters[0x1]; // 0x0188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairGroupsPhysics, SolverSettings) == 0, "Offset mismatch for FHairGroupsPhysics::SolverSettings");
static_assert(offsetof(FHairGroupsPhysics, ExternalForces) == 56, "Offset mismatch for FHairGroupsPhysics::ExternalForces");
static_assert(offsetof(FHairGroupsPhysics, MaterialConstraints) == 112, "Offset mismatch for FHairGroupsPhysics::MaterialConstraints");
static_assert(offsetof(FHairGroupsPhysics, StrandsParameters) == 392, "Offset mismatch for FHairGroupsPhysics::StrandsParameters");

// /Script/HairStrandsCore.HairGroupsRendering
// Kind: ScriptStruct; super: none
struct FHairGroupsRendering
{
public:
    FName MaterialSlotName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Material; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeometrySettings[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowSettings[0xC]; // 0x0020 (Size: 0xC, Type: StructProperty)
    std::uint8_t AdvancedSettings[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairGroupsRendering, MaterialSlotName) == 0, "Offset mismatch for FHairGroupsRendering::MaterialSlotName");
static_assert(offsetof(FHairGroupsRendering, Material) == 8, "Offset mismatch for FHairGroupsRendering::Material");
static_assert(offsetof(FHairGroupsRendering, GeometrySettings) == 16, "Offset mismatch for FHairGroupsRendering::GeometrySettings");
static_assert(offsetof(FHairGroupsRendering, ShadowSettings) == 32, "Offset mismatch for FHairGroupsRendering::ShadowSettings");
static_assert(offsetof(FHairGroupsRendering, AdvancedSettings) == 44, "Offset mismatch for FHairGroupsRendering::AdvancedSettings");

// /Script/HairStrandsCore.HairInterpolationSettings
// Kind: ScriptStruct; super: none
struct FHairInterpolationSettings
{
public:
    std::uint8_t GuideType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideGuides; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float HairToGuideDensity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t RiggedGuideNumCurves; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t RiggedGuideNumPoints; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t InterpolationQuality; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t InterpolationDistance; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRandomizeGuide; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUniqueGuide; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairInterpolationSettings, GuideType) == 0, "Offset mismatch for FHairInterpolationSettings::GuideType");
static_assert(offsetof(FHairInterpolationSettings, bOverrideGuides) == 1, "Offset mismatch for FHairInterpolationSettings::bOverrideGuides");
static_assert(offsetof(FHairInterpolationSettings, HairToGuideDensity) == 4, "Offset mismatch for FHairInterpolationSettings::HairToGuideDensity");
static_assert(offsetof(FHairInterpolationSettings, RiggedGuideNumCurves) == 8, "Offset mismatch for FHairInterpolationSettings::RiggedGuideNumCurves");
static_assert(offsetof(FHairInterpolationSettings, RiggedGuideNumPoints) == 12, "Offset mismatch for FHairInterpolationSettings::RiggedGuideNumPoints");
static_assert(offsetof(FHairInterpolationSettings, InterpolationQuality) == 16, "Offset mismatch for FHairInterpolationSettings::InterpolationQuality");
static_assert(offsetof(FHairInterpolationSettings, InterpolationDistance) == 17, "Offset mismatch for FHairInterpolationSettings::InterpolationDistance");
static_assert(offsetof(FHairInterpolationSettings, bRandomizeGuide) == 18, "Offset mismatch for FHairInterpolationSettings::bRandomizeGuide");
static_assert(offsetof(FHairInterpolationSettings, bUseUniqueGuide) == 19, "Offset mismatch for FHairInterpolationSettings::bUseUniqueGuide");

// /Script/HairStrandsCore.HairLODSettings
// Kind: ScriptStruct; super: none
struct FHairLODSettings
{
public:
    float CurveDecimation; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VertexDecimation; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ScreenSize; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ThicknessScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bVisible; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GeometryType; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BindingType; // 0x0016 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Simulation; // 0x0017 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GlobalInterpolation; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FHairLODSettings, CurveDecimation) == 0, "Offset mismatch for FHairLODSettings::CurveDecimation");
static_assert(offsetof(FHairLODSettings, VertexDecimation) == 4, "Offset mismatch for FHairLODSettings::VertexDecimation");
static_assert(offsetof(FHairLODSettings, AngularThreshold) == 8, "Offset mismatch for FHairLODSettings::AngularThreshold");
static_assert(offsetof(FHairLODSettings, ScreenSize) == 12, "Offset mismatch for FHairLODSettings::ScreenSize");
static_assert(offsetof(FHairLODSettings, ThicknessScale) == 16, "Offset mismatch for FHairLODSettings::ThicknessScale");
static_assert(offsetof(FHairLODSettings, bVisible) == 20, "Offset mismatch for FHairLODSettings::bVisible");
static_assert(offsetof(FHairLODSettings, GeometryType) == 21, "Offset mismatch for FHairLODSettings::GeometryType");
static_assert(offsetof(FHairLODSettings, BindingType) == 22, "Offset mismatch for FHairLODSettings::BindingType");
static_assert(offsetof(FHairLODSettings, Simulation) == 23, "Offset mismatch for FHairLODSettings::Simulation");
static_assert(offsetof(FHairLODSettings, GlobalInterpolation) == 24, "Offset mismatch for FHairLODSettings::GlobalInterpolation");

// /Script/HairStrandsCore.HairMaterialConstraints
// Kind: ScriptStruct; super: none
struct FHairMaterialConstraints
{
public:
    std::uint8_t BendConstraint[0x58]; // 0x0000 (Size: 0x58, Type: StructProperty)
    std::uint8_t StretchConstraint[0x58]; // 0x0058 (Size: 0x58, Type: StructProperty)
    std::uint8_t CollisionConstraint[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairMaterialConstraints, BendConstraint) == 0, "Offset mismatch for FHairMaterialConstraints::BendConstraint");
static_assert(offsetof(FHairMaterialConstraints, StretchConstraint) == 88, "Offset mismatch for FHairMaterialConstraints::StretchConstraint");
static_assert(offsetof(FHairMaterialConstraints, CollisionConstraint) == 176, "Offset mismatch for FHairMaterialConstraints::CollisionConstraint");

// /Script/HairStrandsCore.HairShadowSettings
// Kind: ScriptStruct; super: none
struct FHairShadowSettings
{
public:
    float HairShadowDensity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float HairRaytracingRadiusScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseHairRaytracingGeometry; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVoxelize; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairShadowSettings, HairShadowDensity) == 0, "Offset mismatch for FHairShadowSettings::HairShadowDensity");
static_assert(offsetof(FHairShadowSettings, HairRaytracingRadiusScale) == 4, "Offset mismatch for FHairShadowSettings::HairRaytracingRadiusScale");
static_assert(offsetof(FHairShadowSettings, bUseHairRaytracingGeometry) == 8, "Offset mismatch for FHairShadowSettings::bUseHairRaytracingGeometry");
static_assert(offsetof(FHairShadowSettings, bVoxelize) == 9, "Offset mismatch for FHairShadowSettings::bVoxelize");

// /Script/HairStrandsCore.HairSimulationConstraints
// Kind: ScriptStruct; super: none
struct FHairSimulationConstraints
{
public:
    float BendDamping; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float BendStiffness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StretchDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StretchStiffness; // 0x000C (Size: 0x4, Type: FloatProperty)
    float StaticFriction; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float KineticFriction; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float StrandsViscosity; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float CollisionRadius; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHairSimulationConstraints, BendDamping) == 0, "Offset mismatch for FHairSimulationConstraints::BendDamping");
static_assert(offsetof(FHairSimulationConstraints, BendStiffness) == 4, "Offset mismatch for FHairSimulationConstraints::BendStiffness");
static_assert(offsetof(FHairSimulationConstraints, StretchDamping) == 8, "Offset mismatch for FHairSimulationConstraints::StretchDamping");
static_assert(offsetof(FHairSimulationConstraints, StretchStiffness) == 12, "Offset mismatch for FHairSimulationConstraints::StretchStiffness");
static_assert(offsetof(FHairSimulationConstraints, StaticFriction) == 16, "Offset mismatch for FHairSimulationConstraints::StaticFriction");
static_assert(offsetof(FHairSimulationConstraints, KineticFriction) == 20, "Offset mismatch for FHairSimulationConstraints::KineticFriction");
static_assert(offsetof(FHairSimulationConstraints, StrandsViscosity) == 24, "Offset mismatch for FHairSimulationConstraints::StrandsViscosity");
static_assert(offsetof(FHairSimulationConstraints, CollisionRadius) == 28, "Offset mismatch for FHairSimulationConstraints::CollisionRadius");

// /Script/HairStrandsCore.HairSimulationForces
// Kind: ScriptStruct; super: none
struct FHairSimulationForces
{
public:
    std::uint8_t GravityVector[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float AirDrag; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t AirVelocity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairSimulationForces, GravityVector) == 0, "Offset mismatch for FHairSimulationForces::GravityVector");
static_assert(offsetof(FHairSimulationForces, AirDrag) == 24, "Offset mismatch for FHairSimulationForces::AirDrag");
static_assert(offsetof(FHairSimulationForces, AirVelocity) == 32, "Offset mismatch for FHairSimulationForces::AirVelocity");

// /Script/HairStrandsCore.HairSimulationSettings
// Kind: ScriptStruct; super: none
struct FHairSimulationSettings
{
public:
    std::uint8_t bOverrideSettings; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t SimulationSetup[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t SolverSettings[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExternalForces[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaterialConstraints[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairSimulationSettings, bOverrideSettings) == 0, "Offset mismatch for FHairSimulationSettings::bOverrideSettings");
static_assert(offsetof(FHairSimulationSettings, SimulationSetup) == 8, "Offset mismatch for FHairSimulationSettings::SimulationSetup");
static_assert(offsetof(FHairSimulationSettings, SolverSettings) == 48, "Offset mismatch for FHairSimulationSettings::SolverSettings");
static_assert(offsetof(FHairSimulationSettings, ExternalForces) == 56, "Offset mismatch for FHairSimulationSettings::ExternalForces");
static_assert(offsetof(FHairSimulationSettings, MaterialConstraints) == 112, "Offset mismatch for FHairSimulationSettings::MaterialConstraints");

// /Script/HairStrandsCore.HairSimulationSetup
// Kind: ScriptStruct; super: none
struct FHairSimulationSetup
{
public:
    std::uint8_t bResetSimulation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDebugSimulation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalSimulation; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float LinearVelocityScale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AngularVelocityScale; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    FString LocalBone; // 0x0010 (Size: 0x10, Type: StrProperty)
    float TeleportDistance; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHairSimulationSetup, bResetSimulation) == 0, "Offset mismatch for FHairSimulationSetup::bResetSimulation");
static_assert(offsetof(FHairSimulationSetup, bDebugSimulation) == 1, "Offset mismatch for FHairSimulationSetup::bDebugSimulation");
static_assert(offsetof(FHairSimulationSetup, bLocalSimulation) == 2, "Offset mismatch for FHairSimulationSetup::bLocalSimulation");
static_assert(offsetof(FHairSimulationSetup, LinearVelocityScale) == 4, "Offset mismatch for FHairSimulationSetup::LinearVelocityScale");
static_assert(offsetof(FHairSimulationSetup, AngularVelocityScale) == 8, "Offset mismatch for FHairSimulationSetup::AngularVelocityScale");
static_assert(offsetof(FHairSimulationSetup, LocalBone) == 16, "Offset mismatch for FHairSimulationSetup::LocalBone");
static_assert(offsetof(FHairSimulationSetup, TeleportDistance) == 32, "Offset mismatch for FHairSimulationSetup::TeleportDistance");

// /Script/HairStrandsCore.HairSimulationSolver
// Kind: ScriptStruct; super: none
struct FHairSimulationSolver
{
public:
    std::uint8_t bEnableSimulation; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairSimulationSolver, bEnableSimulation) == 0, "Offset mismatch for FHairSimulationSolver::bEnableSimulation");

// /Script/HairStrandsCore.HairSolverSettings
// Kind: ScriptStruct; super: none
struct FHairSolverSettings
{
public:
    std::uint8_t bEnableDeformation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableSimulation; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NiagaraSolver; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t CustomSystem[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    float GravityPreloading; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::int32_t SubSteps; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t IterationCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceVisible; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FHairSolverSettings, bEnableDeformation) == 0, "Offset mismatch for FHairSolverSettings::bEnableDeformation");
static_assert(offsetof(FHairSolverSettings, EnableSimulation) == 1, "Offset mismatch for FHairSolverSettings::EnableSimulation");
static_assert(offsetof(FHairSolverSettings, NiagaraSolver) == 2, "Offset mismatch for FHairSolverSettings::NiagaraSolver");
static_assert(offsetof(FHairSolverSettings, CustomSystem) == 8, "Offset mismatch for FHairSolverSettings::CustomSystem");
static_assert(offsetof(FHairSolverSettings, GravityPreloading) == 40, "Offset mismatch for FHairSolverSettings::GravityPreloading");
static_assert(offsetof(FHairSolverSettings, SubSteps) == 44, "Offset mismatch for FHairSolverSettings::SubSteps");
static_assert(offsetof(FHairSolverSettings, IterationCount) == 48, "Offset mismatch for FHairSolverSettings::IterationCount");
static_assert(offsetof(FHairSolverSettings, bForceVisible) == 52, "Offset mismatch for FHairSolverSettings::bForceVisible");

// /Script/HairStrandsCore.HairStrandsParameters
// Kind: ScriptStruct; super: none
struct FHairStrandsParameters
{
public:
    std::uint8_t StrandsSize; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float StrandsDensity; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StrandsSmoothing; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StrandsThickness; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ThicknessScale[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairStrandsParameters, StrandsSize) == 0, "Offset mismatch for FHairStrandsParameters::StrandsSize");
static_assert(offsetof(FHairStrandsParameters, StrandsDensity) == 4, "Offset mismatch for FHairStrandsParameters::StrandsDensity");
static_assert(offsetof(FHairStrandsParameters, StrandsSmoothing) == 8, "Offset mismatch for FHairStrandsParameters::StrandsSmoothing");
static_assert(offsetof(FHairStrandsParameters, StrandsThickness) == 12, "Offset mismatch for FHairStrandsParameters::StrandsThickness");
static_assert(offsetof(FHairStrandsParameters, ThicknessScale) == 16, "Offset mismatch for FHairStrandsParameters::ThicknessScale");

// /Script/HairStrandsCore.HairStretchConstraint
// Kind: ScriptStruct; super: none
struct FHairStretchConstraint
{
public:
    std::uint8_t SolveStretch; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ProjectStretch; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float StretchDamping; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StretchStiffness; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t StretchScale[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHairStretchConstraint, SolveStretch) == 0, "Offset mismatch for FHairStretchConstraint::SolveStretch");
static_assert(offsetof(FHairStretchConstraint, ProjectStretch) == 1, "Offset mismatch for FHairStretchConstraint::ProjectStretch");
static_assert(offsetof(FHairStretchConstraint, StretchDamping) == 4, "Offset mismatch for FHairStretchConstraint::StretchDamping");
static_assert(offsetof(FHairStretchConstraint, StretchStiffness) == 8, "Offset mismatch for FHairStretchConstraint::StretchStiffness");
static_assert(offsetof(FHairStretchConstraint, StretchScale) == 16, "Offset mismatch for FHairStretchConstraint::StretchScale");

// /Script/HairStrandsCore.MovieSceneGroomCacheParams
// Kind: ScriptStruct; super: none
struct FMovieSceneGroomCacheParams
{
public:
    void* GroomCache; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FirstLoopStartFrameOffset[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartFrameOffset[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndFrameOffset[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    float PlayRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReverse; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneGroomCacheParams, GroomCache) == 0, "Offset mismatch for FMovieSceneGroomCacheParams::GroomCache");
static_assert(offsetof(FMovieSceneGroomCacheParams, FirstLoopStartFrameOffset) == 8, "Offset mismatch for FMovieSceneGroomCacheParams::FirstLoopStartFrameOffset");
static_assert(offsetof(FMovieSceneGroomCacheParams, StartFrameOffset) == 12, "Offset mismatch for FMovieSceneGroomCacheParams::StartFrameOffset");
static_assert(offsetof(FMovieSceneGroomCacheParams, EndFrameOffset) == 16, "Offset mismatch for FMovieSceneGroomCacheParams::EndFrameOffset");
static_assert(offsetof(FMovieSceneGroomCacheParams, PlayRate) == 20, "Offset mismatch for FMovieSceneGroomCacheParams::PlayRate");
static_assert(offsetof(FMovieSceneGroomCacheParams, bReverse) == 24, "Offset mismatch for FMovieSceneGroomCacheParams::bReverse");

// /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneGroomCacheSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGroomCacheSectionTemplate, Params) == 32, "Offset mismatch for FMovieSceneGroomCacheSectionTemplate::Params");

// /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
// Kind: ScriptStruct; super: MovieSceneGroomCacheParams
struct FMovieSceneGroomCacheSectionTemplateParameters
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t SectionStartTime[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t SectionEndTime[0x1]; // 0x0024 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGroomCacheSectionTemplateParameters, SectionStartTime) == 32, "Offset mismatch for FMovieSceneGroomCacheSectionTemplateParameters::SectionStartTime");
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplateParameters, SectionEndTime) == 36, "Offset mismatch for FMovieSceneGroomCacheSectionTemplateParameters::SectionEndTime");

// /Script/HairStrandsCore.DataflowGroomContent
// Kind: Class; super: DataflowSkeletalContent
class UDataflowGroomContent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    void* BindingAsset; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataflowGroomContent, BindingAsset) == 240, "Offset mismatch for UDataflowGroomContent::BindingAsset");

// /Script/HairStrandsCore.GroomActor
// Kind: Class; super: Actor
class UGroomActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* GroomComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGroomActor, GroomComponent) == 624, "Offset mismatch for UGroomActor::GroomComponent");

// /Script/HairStrandsCore.GroomAsset
// Kind: Class; super: Object
class UGroomAsset
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t LODMode; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    float AutoLODBias; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DataflowSettings[0x80]; // 0x0060 (Size: 0x80, Type: StructProperty)
    TArray<void*> HairGroupsInfo; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsRendering; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsPhysics; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsInterpolation; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsLOD; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsCards; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsMeshes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HairGroupsMaterials; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnableGlobalInterpolation; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableSimulationCache; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HairInterpolationType; // 0x0162 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0163
    void* RiggedSkeletalMesh; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DeformedGroupSections; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinLOD[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t DisableBelowMinLodStripping[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    TArray<void*> EffectiveLODBias; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x28]; // 0x01C0
    TArray<void*> AssetUserData; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomAsset, LODMode) == 88, "Offset mismatch for UGroomAsset::LODMode");
static_assert(offsetof(UGroomAsset, AutoLODBias) == 92, "Offset mismatch for UGroomAsset::AutoLODBias");
static_assert(offsetof(UGroomAsset, DataflowSettings) == 96, "Offset mismatch for UGroomAsset::DataflowSettings");
static_assert(offsetof(UGroomAsset, HairGroupsInfo) == 224, "Offset mismatch for UGroomAsset::HairGroupsInfo");
static_assert(offsetof(UGroomAsset, HairGroupsRendering) == 240, "Offset mismatch for UGroomAsset::HairGroupsRendering");
static_assert(offsetof(UGroomAsset, HairGroupsPhysics) == 256, "Offset mismatch for UGroomAsset::HairGroupsPhysics");
static_assert(offsetof(UGroomAsset, HairGroupsInterpolation) == 272, "Offset mismatch for UGroomAsset::HairGroupsInterpolation");
static_assert(offsetof(UGroomAsset, HairGroupsLOD) == 288, "Offset mismatch for UGroomAsset::HairGroupsLOD");
static_assert(offsetof(UGroomAsset, HairGroupsCards) == 304, "Offset mismatch for UGroomAsset::HairGroupsCards");
static_assert(offsetof(UGroomAsset, HairGroupsMeshes) == 320, "Offset mismatch for UGroomAsset::HairGroupsMeshes");
static_assert(offsetof(UGroomAsset, HairGroupsMaterials) == 336, "Offset mismatch for UGroomAsset::HairGroupsMaterials");
static_assert(offsetof(UGroomAsset, EnableGlobalInterpolation) == 352, "Offset mismatch for UGroomAsset::EnableGlobalInterpolation");
static_assert(offsetof(UGroomAsset, EnableSimulationCache) == 353, "Offset mismatch for UGroomAsset::EnableSimulationCache");
static_assert(offsetof(UGroomAsset, HairInterpolationType) == 354, "Offset mismatch for UGroomAsset::HairInterpolationType");
static_assert(offsetof(UGroomAsset, RiggedSkeletalMesh) == 360, "Offset mismatch for UGroomAsset::RiggedSkeletalMesh");
static_assert(offsetof(UGroomAsset, DeformedGroupSections) == 368, "Offset mismatch for UGroomAsset::DeformedGroupSections");
static_assert(offsetof(UGroomAsset, MinLOD) == 384, "Offset mismatch for UGroomAsset::MinLOD");
static_assert(offsetof(UGroomAsset, DisableBelowMinLodStripping) == 408, "Offset mismatch for UGroomAsset::DisableBelowMinLodStripping");
static_assert(offsetof(UGroomAsset, EffectiveLODBias) == 432, "Offset mismatch for UGroomAsset::EffectiveLODBias");
static_assert(offsetof(UGroomAsset, AssetUserData) == 488, "Offset mismatch for UGroomAsset::AssetUserData");

// /Script/HairStrandsCore.GroomAssetImportData
// Kind: Class; super: AssetImportData
class UGroomAssetImportData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ImportOptions; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* HairStrandsTexturesOptions; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGroomAssetImportData, ImportOptions) == 40, "Offset mismatch for UGroomAssetImportData::ImportOptions");
static_assert(offsetof(UGroomAssetImportData, HairStrandsTexturesOptions) == 48, "Offset mismatch for UGroomAssetImportData::HairStrandsTexturesOptions");

// /Script/HairStrandsCore.GroomBindingAsset
// Kind: Class; super: Object
class UGroomBindingAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GroomBindingType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* Groom; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* SourceSkeletalMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SourceMeshRequestedLOD; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t SourceMeshUsedLOD; // 0x004C (Size: 0x4, Type: IntProperty)
    void* TargetSkeletalMesh; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TargetMeshRequestedMinLOD; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetMeshUsedMinLOD; // 0x005C (Size: 0x4, Type: IntProperty)
    void* SourceGeometryCache; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TargetGeometryCache; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumInterpolationPoints; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t MatchingSection; // 0x0074 (Size: 0x4, Type: IntProperty)
    FName TargetBindingAttribute; // 0x0078 (Size: 0x8, Type: NameProperty)
    TArray<void*> GroupInfos; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomBindingAsset, GroomBindingType) == 48, "Offset mismatch for UGroomBindingAsset::GroomBindingType");
static_assert(offsetof(UGroomBindingAsset, Groom) == 56, "Offset mismatch for UGroomBindingAsset::Groom");
static_assert(offsetof(UGroomBindingAsset, SourceSkeletalMesh) == 64, "Offset mismatch for UGroomBindingAsset::SourceSkeletalMesh");
static_assert(offsetof(UGroomBindingAsset, SourceMeshRequestedLOD) == 72, "Offset mismatch for UGroomBindingAsset::SourceMeshRequestedLOD");
static_assert(offsetof(UGroomBindingAsset, SourceMeshUsedLOD) == 76, "Offset mismatch for UGroomBindingAsset::SourceMeshUsedLOD");
static_assert(offsetof(UGroomBindingAsset, TargetSkeletalMesh) == 80, "Offset mismatch for UGroomBindingAsset::TargetSkeletalMesh");
static_assert(offsetof(UGroomBindingAsset, TargetMeshRequestedMinLOD) == 88, "Offset mismatch for UGroomBindingAsset::TargetMeshRequestedMinLOD");
static_assert(offsetof(UGroomBindingAsset, TargetMeshUsedMinLOD) == 92, "Offset mismatch for UGroomBindingAsset::TargetMeshUsedMinLOD");
static_assert(offsetof(UGroomBindingAsset, SourceGeometryCache) == 96, "Offset mismatch for UGroomBindingAsset::SourceGeometryCache");
static_assert(offsetof(UGroomBindingAsset, TargetGeometryCache) == 104, "Offset mismatch for UGroomBindingAsset::TargetGeometryCache");
static_assert(offsetof(UGroomBindingAsset, NumInterpolationPoints) == 112, "Offset mismatch for UGroomBindingAsset::NumInterpolationPoints");
static_assert(offsetof(UGroomBindingAsset, MatchingSection) == 116, "Offset mismatch for UGroomBindingAsset::MatchingSection");
static_assert(offsetof(UGroomBindingAsset, TargetBindingAttribute) == 120, "Offset mismatch for UGroomBindingAsset::TargetBindingAttribute");
static_assert(offsetof(UGroomBindingAsset, GroupInfos) == 128, "Offset mismatch for UGroomBindingAsset::GroupInfos");

// /Script/HairStrandsCore.GroomBindingAssetList
// Kind: Class; super: Object
class UGroomBindingAssetList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Bindings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomBindingAssetList, Bindings) == 40, "Offset mismatch for UGroomBindingAssetList::Bindings");

// /Script/HairStrandsCore.GroomBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGroomBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsCore.GroomCache
// Kind: Class; super: Object
class UGroomCache
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> AssetUserData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GroomCacheInfo[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGroomCache, AssetUserData) == 72, "Offset mismatch for UGroomCache::AssetUserData");
static_assert(offsetof(UGroomCache, GroomCacheInfo) == 88, "Offset mismatch for UGroomCache::GroomCacheInfo");

// /Script/HairStrandsCore.GroomCacheImportData
// Kind: Class; super: AssetImportData
class UGroomCacheImportData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGroomCacheImportData, Settings) == 40, "Offset mismatch for UGroomCacheImportData::Settings");

// /Script/HairStrandsCore.GroomCacheImportOptions
// Kind: Class; super: Object
class UGroomCacheImportOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ImportSettings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGroomCacheImportOptions, ImportSettings) == 40, "Offset mismatch for UGroomCacheImportOptions::ImportSettings");

// /Script/HairStrandsCore.GroomComponent
// Kind: Class; super: MeshComponent
class UGroomComponent
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    void* GroomAsset; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* GroomCache; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NiagaraComponents; // 0x05F0 (Size: 0x10, Type: ArrayProperty)
    void* SourceSkeletalMesh; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* BindingAsset; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsAsset; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0618
    std::uint8_t SimulationSettings[0x90]; // 0x0628 (Size: 0x90, Type: StructProperty)
    void* MeshDeformer; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    void* MeshDeformerInstance; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* MeshDeformerInstanceSettings; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* Strands_DebugMaterial; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    void* Strands_DefaultMaterial; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    void* Cards_DefaultMaterial; // 0x06E0 (Size: 0x8, Type: ObjectProperty)
    void* Meshes_DefaultMaterial; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    void* AngularSpringsSystem; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    void* CosseratRodsSystem; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    FString AttachmentName; // 0x0700 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x90]; // 0x0710
    TArray<void*> GroomGroupsDesc; // 0x07A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseCards; // 0x07B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRunning; // 0x07B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLooping; // 0x07B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bManualTick; // 0x07B3 (Size: 0x1, Type: BoolProperty)
    float ElapsedTime; // 0x07B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x28]; // 0x07B8
    void* RegisteredMeshComponent; // 0x07E0 (Size: 0x8, Type: ObjectProperty)
    void* DeformedMeshComponent; // 0x07E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGroomComponent, GroomAsset) == 1504, "Offset mismatch for UGroomComponent::GroomAsset");
static_assert(offsetof(UGroomComponent, GroomCache) == 1512, "Offset mismatch for UGroomComponent::GroomCache");
static_assert(offsetof(UGroomComponent, NiagaraComponents) == 1520, "Offset mismatch for UGroomComponent::NiagaraComponents");
static_assert(offsetof(UGroomComponent, SourceSkeletalMesh) == 1536, "Offset mismatch for UGroomComponent::SourceSkeletalMesh");
static_assert(offsetof(UGroomComponent, BindingAsset) == 1544, "Offset mismatch for UGroomComponent::BindingAsset");
static_assert(offsetof(UGroomComponent, PhysicsAsset) == 1552, "Offset mismatch for UGroomComponent::PhysicsAsset");
static_assert(offsetof(UGroomComponent, SimulationSettings) == 1576, "Offset mismatch for UGroomComponent::SimulationSettings");
static_assert(offsetof(UGroomComponent, MeshDeformer) == 1720, "Offset mismatch for UGroomComponent::MeshDeformer");
static_assert(offsetof(UGroomComponent, MeshDeformerInstance) == 1728, "Offset mismatch for UGroomComponent::MeshDeformerInstance");
static_assert(offsetof(UGroomComponent, MeshDeformerInstanceSettings) == 1736, "Offset mismatch for UGroomComponent::MeshDeformerInstanceSettings");
static_assert(offsetof(UGroomComponent, Strands_DebugMaterial) == 1744, "Offset mismatch for UGroomComponent::Strands_DebugMaterial");
static_assert(offsetof(UGroomComponent, Strands_DefaultMaterial) == 1752, "Offset mismatch for UGroomComponent::Strands_DefaultMaterial");
static_assert(offsetof(UGroomComponent, Cards_DefaultMaterial) == 1760, "Offset mismatch for UGroomComponent::Cards_DefaultMaterial");
static_assert(offsetof(UGroomComponent, Meshes_DefaultMaterial) == 1768, "Offset mismatch for UGroomComponent::Meshes_DefaultMaterial");
static_assert(offsetof(UGroomComponent, AngularSpringsSystem) == 1776, "Offset mismatch for UGroomComponent::AngularSpringsSystem");
static_assert(offsetof(UGroomComponent, CosseratRodsSystem) == 1784, "Offset mismatch for UGroomComponent::CosseratRodsSystem");
static_assert(offsetof(UGroomComponent, AttachmentName) == 1792, "Offset mismatch for UGroomComponent::AttachmentName");
static_assert(offsetof(UGroomComponent, GroomGroupsDesc) == 1952, "Offset mismatch for UGroomComponent::GroomGroupsDesc");
static_assert(offsetof(UGroomComponent, bUseCards) == 1968, "Offset mismatch for UGroomComponent::bUseCards");
static_assert(offsetof(UGroomComponent, bRunning) == 1969, "Offset mismatch for UGroomComponent::bRunning");
static_assert(offsetof(UGroomComponent, bLooping) == 1970, "Offset mismatch for UGroomComponent::bLooping");
static_assert(offsetof(UGroomComponent, bManualTick) == 1971, "Offset mismatch for UGroomComponent::bManualTick");
static_assert(offsetof(UGroomComponent, ElapsedTime) == 1972, "Offset mismatch for UGroomComponent::ElapsedTime");
static_assert(offsetof(UGroomComponent, RegisteredMeshComponent) == 2016, "Offset mismatch for UGroomComponent::RegisteredMeshComponent");
static_assert(offsetof(UGroomComponent, DeformedMeshComponent) == 2024, "Offset mismatch for UGroomComponent::DeformedMeshComponent");

// /Script/HairStrandsCore.GroomCreateBindingOptions
// Kind: Class; super: Object
class UGroomCreateBindingOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> GroomAsset; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t GroomBindingType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* SourceSkeletalMesh; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* TargetSkeletalMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* SourceGeometryCache; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* TargetGeometryCache; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumInterpolationPoints; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t MatchingSection; // 0x005C (Size: 0x4, Type: IntProperty)
    FName TargetBindingAttribute; // 0x0060 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UGroomCreateBindingOptions, GroomAsset) == 40, "Offset mismatch for UGroomCreateBindingOptions::GroomAsset");
static_assert(offsetof(UGroomCreateBindingOptions, GroomBindingType) == 48, "Offset mismatch for UGroomCreateBindingOptions::GroomBindingType");
static_assert(offsetof(UGroomCreateBindingOptions, SourceSkeletalMesh) == 56, "Offset mismatch for UGroomCreateBindingOptions::SourceSkeletalMesh");
static_assert(offsetof(UGroomCreateBindingOptions, TargetSkeletalMesh) == 64, "Offset mismatch for UGroomCreateBindingOptions::TargetSkeletalMesh");
static_assert(offsetof(UGroomCreateBindingOptions, SourceGeometryCache) == 72, "Offset mismatch for UGroomCreateBindingOptions::SourceGeometryCache");
static_assert(offsetof(UGroomCreateBindingOptions, TargetGeometryCache) == 80, "Offset mismatch for UGroomCreateBindingOptions::TargetGeometryCache");
static_assert(offsetof(UGroomCreateBindingOptions, NumInterpolationPoints) == 88, "Offset mismatch for UGroomCreateBindingOptions::NumInterpolationPoints");
static_assert(offsetof(UGroomCreateBindingOptions, MatchingSection) == 92, "Offset mismatch for UGroomCreateBindingOptions::MatchingSection");
static_assert(offsetof(UGroomCreateBindingOptions, TargetBindingAttribute) == 96, "Offset mismatch for UGroomCreateBindingOptions::TargetBindingAttribute");

// /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
// Kind: Class; super: Object
class UGroomCreateFollicleMaskOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t Resolution; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t RootRadius; // 0x002C (Size: 0x4, Type: IntProperty)
    TArray<void*> Grooms; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomCreateFollicleMaskOptions, Resolution) == 40, "Offset mismatch for UGroomCreateFollicleMaskOptions::Resolution");
static_assert(offsetof(UGroomCreateFollicleMaskOptions, RootRadius) == 44, "Offset mismatch for UGroomCreateFollicleMaskOptions::RootRadius");
static_assert(offsetof(UGroomCreateFollicleMaskOptions, Grooms) == 48, "Offset mismatch for UGroomCreateFollicleMaskOptions::Grooms");

// /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
// Kind: Class; super: Object
class UGroomCreateStrandsTexturesOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Layout; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t Resolution; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t TraceType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    float TraceDistance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MeshType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0039
    void* StaticMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMesh; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LODIndex; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t SectionIndex; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::int32_t UVChannelIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x005C
    TArray<void*> GroupIndex; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Dilation; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0074
    TArray<void*> GeneratedTextures; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomCreateStrandsTexturesOptions, Layout) == 40, "Offset mismatch for UGroomCreateStrandsTexturesOptions::Layout");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, Resolution) == 44, "Offset mismatch for UGroomCreateStrandsTexturesOptions::Resolution");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, TraceType) == 48, "Offset mismatch for UGroomCreateStrandsTexturesOptions::TraceType");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, TraceDistance) == 52, "Offset mismatch for UGroomCreateStrandsTexturesOptions::TraceDistance");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, MeshType) == 56, "Offset mismatch for UGroomCreateStrandsTexturesOptions::MeshType");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, StaticMesh) == 64, "Offset mismatch for UGroomCreateStrandsTexturesOptions::StaticMesh");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, SkeletalMesh) == 72, "Offset mismatch for UGroomCreateStrandsTexturesOptions::SkeletalMesh");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, LODIndex) == 80, "Offset mismatch for UGroomCreateStrandsTexturesOptions::LODIndex");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, SectionIndex) == 84, "Offset mismatch for UGroomCreateStrandsTexturesOptions::SectionIndex");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, UVChannelIndex) == 88, "Offset mismatch for UGroomCreateStrandsTexturesOptions::UVChannelIndex");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, GroupIndex) == 96, "Offset mismatch for UGroomCreateStrandsTexturesOptions::GroupIndex");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, Dilation) == 112, "Offset mismatch for UGroomCreateStrandsTexturesOptions::Dilation");
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, GeneratedTextures) == 120, "Offset mismatch for UGroomCreateStrandsTexturesOptions::GeneratedTextures");

// /Script/HairStrandsCore.GroomHairGroupsMapping
// Kind: Class; super: Object
class UGroomHairGroupsMapping
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> OldGroupNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NewGroupNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OldToNewGroupIndexMapping; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NewToOldGroupIndexMapping; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomHairGroupsMapping, OldGroupNames) == 40, "Offset mismatch for UGroomHairGroupsMapping::OldGroupNames");
static_assert(offsetof(UGroomHairGroupsMapping, NewGroupNames) == 56, "Offset mismatch for UGroomHairGroupsMapping::NewGroupNames");
static_assert(offsetof(UGroomHairGroupsMapping, OldToNewGroupIndexMapping) == 72, "Offset mismatch for UGroomHairGroupsMapping::OldToNewGroupIndexMapping");
static_assert(offsetof(UGroomHairGroupsMapping, NewToOldGroupIndexMapping) == 88, "Offset mismatch for UGroomHairGroupsMapping::NewToOldGroupIndexMapping");

// /Script/HairStrandsCore.GroomHairGroupsPreview
// Kind: Class; super: Object
class UGroomHairGroupsPreview
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Groups; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomHairGroupsPreview, Groups) == 40, "Offset mismatch for UGroomHairGroupsPreview::Groups");

// /Script/HairStrandsCore.GroomImportOptions
// Kind: Class; super: Object
class UGroomImportOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ConversionSettings[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    TArray<void*> InterpolationSettings; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGroomImportOptions, ConversionSettings) == 40, "Offset mismatch for UGroomImportOptions::ConversionSettings");
static_assert(offsetof(UGroomImportOptions, InterpolationSettings) == 88, "Offset mismatch for UGroomImportOptions::InterpolationSettings");

// /Script/HairStrandsCore.GroomPluginSettings
// Kind: Class; super: Object
class UGroomPluginSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float GroomCacheLookAheadBuffer; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGroomPluginSettings, GroomCacheLookAheadBuffer) == 40, "Offset mismatch for UGroomPluginSettings::GroomCacheLookAheadBuffer");

// /Script/HairStrandsCore.HairCardGenerationSettings
// Kind: Class; super: Object
class UHairCardGenerationSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HairStrandsCore.MovieSceneGroomCacheSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneGroomCacheSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneGroomCacheSection, Params) == 320, "Offset mismatch for UMovieSceneGroomCacheSection::Params");

// /Script/HairStrandsCore.MovieSceneGroomCacheTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneGroomCacheTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> AnimationSections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneGroomCacheTrack, AnimationSections) == 256, "Offset mismatch for UMovieSceneGroomCacheTrack::AnimationSections");

// /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceHairStrands
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* DefaultSource; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* SourceActor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceHairStrands, DefaultSource) == 64, "Offset mismatch for UNiagaraDataInterfaceHairStrands::DefaultSource");
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, SourceActor) == 72, "Offset mismatch for UNiagaraDataInterfaceHairStrands::SourceActor");

// /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
// Kind: Class; super: NiagaraDataInterfaceVelocityGrid
class UNiagaraDataInterfacePressureGrid
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t GridSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfacePressureGrid, GridSize) == 56, "Offset mismatch for UNiagaraDataInterfacePressureGrid::GridSize");

// /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceVelocityGrid
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t GridSize[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVelocityGrid, GridSize) == 56, "Offset mismatch for UNiagaraDataInterfaceVelocityGrid::GridSize");
