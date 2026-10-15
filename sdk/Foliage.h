/**
 * decamp dumper generated SDK
 * Package: /Script/Foliage
 */
#pragma once
#include "Basic.h"

// /Script/Foliage.FoliageDensityFalloff
// Kind: ScriptStruct; super: none
struct FFoliageDensityFalloff
{
public:
    std::uint8_t bUseFalloffCurve; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t FalloffCurve[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFoliageDensityFalloff, bUseFalloffCurve) == 0, "Offset mismatch for FFoliageDensityFalloff::bUseFalloffCurve");
static_assert(offsetof(FFoliageDensityFalloff, FalloffCurve) == 8, "Offset mismatch for FFoliageDensityFalloff::FalloffCurve");

// /Script/Foliage.FoliageTypeObject
// Kind: ScriptStruct; super: none
struct FFoliageTypeObject
{
public:
    void* FoliageTypeObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TypeInstance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsAsset; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    void* Type; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0, "Offset mismatch for FFoliageTypeObject::FoliageTypeObject");
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 8, "Offset mismatch for FFoliageTypeObject::TypeInstance");
static_assert(offsetof(FFoliageTypeObject, bIsAsset) == 16, "Offset mismatch for FFoliageTypeObject::bIsAsset");
static_assert(offsetof(FFoliageTypeObject, Type) == 24, "Offset mismatch for FFoliageTypeObject::Type");

// /Script/Foliage.FoliageVertexColorChannelMask
// Kind: ScriptStruct; super: none
struct FFoliageVertexColorChannelMask
{
public:
    std::uint8_t UseMask; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaskThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InvertMask; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFoliageVertexColorChannelMask, UseMask) == 0, "Offset mismatch for FFoliageVertexColorChannelMask::UseMask");
static_assert(offsetof(FFoliageVertexColorChannelMask, MaskThreshold) == 4, "Offset mismatch for FFoliageVertexColorChannelMask::MaskThreshold");
static_assert(offsetof(FFoliageVertexColorChannelMask, InvertMask) == 8, "Offset mismatch for FFoliageVertexColorChannelMask::InvertMask");

// /Script/Foliage.ProceduralFoliageInstance
// Kind: ScriptStruct; super: none
struct FProceduralFoliageInstance
{
public:
    std::uint8_t Rotation[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float Age; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x003C
    std::uint8_t Normal[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    void* Type; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0, "Offset mismatch for FProceduralFoliageInstance::Rotation");
static_assert(offsetof(FProceduralFoliageInstance, Location) == 32, "Offset mismatch for FProceduralFoliageInstance::Location");
static_assert(offsetof(FProceduralFoliageInstance, Age) == 56, "Offset mismatch for FProceduralFoliageInstance::Age");
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 64, "Offset mismatch for FProceduralFoliageInstance::Normal");
static_assert(offsetof(FProceduralFoliageInstance, Scale) == 88, "Offset mismatch for FProceduralFoliageInstance::Scale");
static_assert(offsetof(FProceduralFoliageInstance, Type) == 96, "Offset mismatch for FProceduralFoliageInstance::Type");

// /Script/Foliage.FoliageInstancedStaticMeshComponent
// Kind: Class; super: HierarchicalInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent
{
public:
    std::uint8_t Pad_0000[0xBB0]; // 0x0000
    FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x0BB0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x0BC0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bEnableDiscardOnLoad; // 0x0BD0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0BD1
    std::uint8_t GenerationGuid[0x1]; // 0x0BD4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFoliageInstancedStaticMeshComponent, OnInstanceTakePointDamage) == 2992, "Offset mismatch for UFoliageInstancedStaticMeshComponent::OnInstanceTakePointDamage");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, OnInstanceTakeRadialDamage) == 3008, "Offset mismatch for UFoliageInstancedStaticMeshComponent::OnInstanceTakeRadialDamage");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, bEnableDiscardOnLoad) == 3024, "Offset mismatch for UFoliageInstancedStaticMeshComponent::bEnableDiscardOnLoad");
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 3028, "Offset mismatch for UFoliageInstancedStaticMeshComponent::GenerationGuid");

// /Script/Foliage.FoliageStatistics
// Kind: Class; super: BlueprintFunctionLibrary
class UFoliageStatistics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Foliage.FoliageType
// Kind: Class; super: Object
class UFoliageType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UpdateGuid[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float Density; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float DensityAdjustmentFactor; // 0x003C (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSingleInstanceModeOverrideRadius; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    float SingleInstanceModeRadius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Scaling; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    std::uint8_t ScaleX[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScaleY[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScaleZ[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t VertexColorMaskByChannel[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t VertexColorMask; // 0x0098 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0099
    float VertexColorMaskThreshold; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t VertexColorMaskInvert; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00A1
    std::uint8_t ZOffset[0x8]; // 0x00A4 (Size: 0x8, Type: StructProperty)
    std::uint8_t AlignToNormal; // 0x00AC (Size: 0x1, Type: BoolProperty)
    // 0x00AC BoolProperty AverageNormal (shared storage)
    // 0x00AC BoolProperty AverageNormalSingleComponent (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x00AD
    float AlignMaxAngle; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomYaw; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00B5
    float RandomPitchAngle; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GroundSlopeAngle[0x8]; // 0x00BC (Size: 0x8, Type: StructProperty)
    std::uint8_t Height[0xC]; // 0x00C4 (Size: 0xC, Type: StructProperty)
    TArray<void*> LandscapeLayers; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    float MinimumLayerWeight; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x00E4
    TArray<void*> ExclusionLandscapeLayers; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    float MinimumExclusionLayerWeight; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LandscapeLayer[0x4]; // 0x00FC (Size: 0x4, Type: NameProperty)
    std::uint8_t CollisionWithWorld; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0101
    std::uint8_t CollisionScale[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::int32_t AverageNormalSampleCount; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0009[0x4]; // 0x0124
    std::uint8_t MeshBounds[0x38]; // 0x0128 (Size: 0x38, Type: StructProperty)
    std::uint8_t LowBoundOriginRadius[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t Mobility; // 0x0178 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_000A[0x3]; // 0x0179
    std::uint8_t CullDistance[0x8]; // 0x017C (Size: 0x8, Type: StructProperty)
    std::uint8_t CastShadow; // 0x0184 (Size: 0x1, Type: BoolProperty)
    // 0x0184 BoolProperty bAffectDistanceFieldLighting (shared storage)
    // 0x0184 BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x0184 BoolProperty bCastDynamicShadow (shared storage)
    // 0x0184 BoolProperty bCastStaticShadow (shared storage)
    // 0x0184 BoolProperty bEnableStaticLighting (shared storage)
    std::uint8_t Pad_000B[0x3]; // 0x0185
    std::uint8_t bCastContactShadow; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x3]; // 0x0189
    std::uint8_t bCastShadowAsTwoSided; // 0x018C (Size: 0x1, Type: BoolProperty)
    // 0x018C BoolProperty bOverrideLightMapRes (shared storage)
    // 0x018C BoolProperty bReceivesDecals (shared storage)
    std::uint8_t Pad_000D[0x3]; // 0x018D
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0190 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000E[0x3]; // 0x0191
    std::int32_t OverriddenLightMapRes; // 0x0194 (Size: 0x4, Type: IntProperty)
    std::uint8_t LightmapType; // 0x0198 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000F[0x3]; // 0x0199
    std::uint8_t bUseAsOccluder; // 0x019C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x3]; // 0x019D
    std::uint8_t bEvaluateWorldPositionOffset; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    // 0x01A0 BoolProperty bVisibleInRayTracing (shared storage)
    // 0x01A0 BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t Pad_0011[0x3]; // 0x01A1
    std::int32_t WorldPositionOffsetDisableDistance; // 0x01A4 (Size: 0x4, Type: IntProperty)
    float NanitePixelProgrammableDistance; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0012[0x4]; // 0x01AC
    std::uint8_t BodyInstance[0x1A8]; // 0x01B0 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t CustomNavigableGeometry; // 0x0358 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x3]; // 0x0359 (Size: 0x3, Type: StructProperty)
    std::uint8_t bRenderCustomDepth; // 0x035C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0013[0x3]; // 0x035D
    std::uint8_t CustomDepthStencilWriteMask; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0014[0x3]; // 0x0361
    std::int32_t CustomDepthStencilValue; // 0x0364 (Size: 0x4, Type: IntProperty)
    std::int32_t TranslucencySortPriority; // 0x0368 (Size: 0x4, Type: IntProperty)
    float CollisionRadius; // 0x036C (Size: 0x4, Type: FloatProperty)
    float ShadeRadius; // 0x0370 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSteps; // 0x0374 (Size: 0x4, Type: IntProperty)
    float InitialSeedDensity; // 0x0378 (Size: 0x4, Type: FloatProperty)
    float AverageSpreadDistance; // 0x037C (Size: 0x4, Type: FloatProperty)
    float SpreadVariance; // 0x0380 (Size: 0x4, Type: FloatProperty)
    std::int32_t SeedsPerStep; // 0x0384 (Size: 0x4, Type: IntProperty)
    std::int32_t DistributionSeed; // 0x0388 (Size: 0x4, Type: IntProperty)
    float MaxInitialSeedOffset; // 0x038C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanGrowInShade; // 0x0390 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnsInShade; // 0x0391 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0015[0x2]; // 0x0392
    float MaxInitialAge; // 0x0394 (Size: 0x4, Type: FloatProperty)
    float MaxAge; // 0x0398 (Size: 0x4, Type: FloatProperty)
    float OverlapPriority; // 0x039C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProceduralScale[0x8]; // 0x03A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t ScaleCurve[0x48]; // 0x03A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t DensityFalloff[0x50]; // 0x03F0 (Size: 0x50, Type: StructProperty)
    std::int32_t ChangeCount; // 0x0440 (Size: 0x4, Type: IntProperty)
    std::uint8_t ReapplyAlignToNormal; // 0x0444 (Size: 0x1, Type: BoolProperty)
    // 0x0444 BoolProperty ReapplyDensity (shared storage)
    // 0x0444 BoolProperty ReapplyRadius (shared storage)
    // 0x0444 BoolProperty ReapplyRandomYaw (shared storage)
    // 0x0444 BoolProperty ReapplyScaleX (shared storage)
    // 0x0444 BoolProperty ReapplyScaleY (shared storage)
    // 0x0444 BoolProperty ReapplyScaleZ (shared storage)
    // 0x0444 BoolProperty ReapplyScaling (shared storage)
    std::uint8_t ReapplyCollisionWithWorld; // 0x0445 (Size: 0x1, Type: BoolProperty)
    // 0x0445 BoolProperty ReapplyGroundSlope (shared storage)
    // 0x0445 BoolProperty ReapplyHeight (shared storage)
    // 0x0445 BoolProperty ReapplyLandscapeLayers (shared storage)
    // 0x0445 BoolProperty ReapplyRandomPitchAngle (shared storage)
    // 0x0445 BoolProperty ReapplyVertexColorMask (shared storage)
    // 0x0445 BoolProperty ReapplyZOffset (shared storage)
    // 0x0445 BoolProperty bEnableDensityScaling (shared storage)
    std::uint8_t bEnableCullDistanceScaling; // 0x0446 (Size: 0x1, Type: BoolProperty)
    // 0x0446 BoolProperty bEnableDiscardOnLoad (shared storage)
    std::uint8_t Pad_0016[0x1]; // 0x0447
    TArray<void*> RuntimeVirtualTextures; // 0x0448 (Size: 0x10, Type: ArrayProperty)
    std::int32_t VirtualTextureCullMips; // 0x0458 (Size: 0x4, Type: IntProperty)
    std::uint8_t VirtualTextureRenderPassType; // 0x045C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFoliageType, UpdateGuid) == 40, "Offset mismatch for UFoliageType::UpdateGuid");
static_assert(offsetof(UFoliageType, Density) == 56, "Offset mismatch for UFoliageType::Density");
static_assert(offsetof(UFoliageType, DensityAdjustmentFactor) == 60, "Offset mismatch for UFoliageType::DensityAdjustmentFactor");
static_assert(offsetof(UFoliageType, Radius) == 64, "Offset mismatch for UFoliageType::Radius");
static_assert(offsetof(UFoliageType, bSingleInstanceModeOverrideRadius) == 68, "Offset mismatch for UFoliageType::bSingleInstanceModeOverrideRadius");
static_assert(offsetof(UFoliageType, SingleInstanceModeRadius) == 72, "Offset mismatch for UFoliageType::SingleInstanceModeRadius");
static_assert(offsetof(UFoliageType, Scaling) == 76, "Offset mismatch for UFoliageType::Scaling");
static_assert(offsetof(UFoliageType, ScaleX) == 80, "Offset mismatch for UFoliageType::ScaleX");
static_assert(offsetof(UFoliageType, ScaleY) == 88, "Offset mismatch for UFoliageType::ScaleY");
static_assert(offsetof(UFoliageType, ScaleZ) == 96, "Offset mismatch for UFoliageType::ScaleZ");
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 104, "Offset mismatch for UFoliageType::VertexColorMaskByChannel");
static_assert(offsetof(UFoliageType, VertexColorMask) == 152, "Offset mismatch for UFoliageType::VertexColorMask");
static_assert(offsetof(UFoliageType, VertexColorMaskThreshold) == 156, "Offset mismatch for UFoliageType::VertexColorMaskThreshold");
static_assert(offsetof(UFoliageType, VertexColorMaskInvert) == 160, "Offset mismatch for UFoliageType::VertexColorMaskInvert");
static_assert(offsetof(UFoliageType, ZOffset) == 164, "Offset mismatch for UFoliageType::ZOffset");
static_assert(offsetof(UFoliageType, AlignToNormal) == 172, "Offset mismatch for UFoliageType::AlignToNormal");
static_assert(offsetof(UFoliageType, AlignMaxAngle) == 176, "Offset mismatch for UFoliageType::AlignMaxAngle");
static_assert(offsetof(UFoliageType, RandomYaw) == 180, "Offset mismatch for UFoliageType::RandomYaw");
static_assert(offsetof(UFoliageType, RandomPitchAngle) == 184, "Offset mismatch for UFoliageType::RandomPitchAngle");
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 188, "Offset mismatch for UFoliageType::GroundSlopeAngle");
static_assert(offsetof(UFoliageType, Height) == 196, "Offset mismatch for UFoliageType::Height");
static_assert(offsetof(UFoliageType, LandscapeLayers) == 208, "Offset mismatch for UFoliageType::LandscapeLayers");
static_assert(offsetof(UFoliageType, MinimumLayerWeight) == 224, "Offset mismatch for UFoliageType::MinimumLayerWeight");
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 232, "Offset mismatch for UFoliageType::ExclusionLandscapeLayers");
static_assert(offsetof(UFoliageType, MinimumExclusionLayerWeight) == 248, "Offset mismatch for UFoliageType::MinimumExclusionLayerWeight");
static_assert(offsetof(UFoliageType, LandscapeLayer) == 252, "Offset mismatch for UFoliageType::LandscapeLayer");
static_assert(offsetof(UFoliageType, CollisionWithWorld) == 256, "Offset mismatch for UFoliageType::CollisionWithWorld");
static_assert(offsetof(UFoliageType, CollisionScale) == 264, "Offset mismatch for UFoliageType::CollisionScale");
static_assert(offsetof(UFoliageType, AverageNormalSampleCount) == 288, "Offset mismatch for UFoliageType::AverageNormalSampleCount");
static_assert(offsetof(UFoliageType, MeshBounds) == 296, "Offset mismatch for UFoliageType::MeshBounds");
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 352, "Offset mismatch for UFoliageType::LowBoundOriginRadius");
static_assert(offsetof(UFoliageType, Mobility) == 376, "Offset mismatch for UFoliageType::Mobility");
static_assert(offsetof(UFoliageType, CullDistance) == 380, "Offset mismatch for UFoliageType::CullDistance");
static_assert(offsetof(UFoliageType, CastShadow) == 388, "Offset mismatch for UFoliageType::CastShadow");
static_assert(offsetof(UFoliageType, bCastContactShadow) == 392, "Offset mismatch for UFoliageType::bCastContactShadow");
static_assert(offsetof(UFoliageType, bCastShadowAsTwoSided) == 396, "Offset mismatch for UFoliageType::bCastShadowAsTwoSided");
static_assert(offsetof(UFoliageType, ShadowCacheInvalidationBehavior) == 400, "Offset mismatch for UFoliageType::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UFoliageType, OverriddenLightMapRes) == 404, "Offset mismatch for UFoliageType::OverriddenLightMapRes");
static_assert(offsetof(UFoliageType, LightmapType) == 408, "Offset mismatch for UFoliageType::LightmapType");
static_assert(offsetof(UFoliageType, bUseAsOccluder) == 412, "Offset mismatch for UFoliageType::bUseAsOccluder");
static_assert(offsetof(UFoliageType, bEvaluateWorldPositionOffset) == 416, "Offset mismatch for UFoliageType::bEvaluateWorldPositionOffset");
static_assert(offsetof(UFoliageType, WorldPositionOffsetDisableDistance) == 420, "Offset mismatch for UFoliageType::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UFoliageType, NanitePixelProgrammableDistance) == 424, "Offset mismatch for UFoliageType::NanitePixelProgrammableDistance");
static_assert(offsetof(UFoliageType, BodyInstance) == 432, "Offset mismatch for UFoliageType::BodyInstance");
static_assert(offsetof(UFoliageType, CustomNavigableGeometry) == 856, "Offset mismatch for UFoliageType::CustomNavigableGeometry");
static_assert(offsetof(UFoliageType, LightingChannels) == 857, "Offset mismatch for UFoliageType::LightingChannels");
static_assert(offsetof(UFoliageType, bRenderCustomDepth) == 860, "Offset mismatch for UFoliageType::bRenderCustomDepth");
static_assert(offsetof(UFoliageType, CustomDepthStencilWriteMask) == 864, "Offset mismatch for UFoliageType::CustomDepthStencilWriteMask");
static_assert(offsetof(UFoliageType, CustomDepthStencilValue) == 868, "Offset mismatch for UFoliageType::CustomDepthStencilValue");
static_assert(offsetof(UFoliageType, TranslucencySortPriority) == 872, "Offset mismatch for UFoliageType::TranslucencySortPriority");
static_assert(offsetof(UFoliageType, CollisionRadius) == 876, "Offset mismatch for UFoliageType::CollisionRadius");
static_assert(offsetof(UFoliageType, ShadeRadius) == 880, "Offset mismatch for UFoliageType::ShadeRadius");
static_assert(offsetof(UFoliageType, NumSteps) == 884, "Offset mismatch for UFoliageType::NumSteps");
static_assert(offsetof(UFoliageType, InitialSeedDensity) == 888, "Offset mismatch for UFoliageType::InitialSeedDensity");
static_assert(offsetof(UFoliageType, AverageSpreadDistance) == 892, "Offset mismatch for UFoliageType::AverageSpreadDistance");
static_assert(offsetof(UFoliageType, SpreadVariance) == 896, "Offset mismatch for UFoliageType::SpreadVariance");
static_assert(offsetof(UFoliageType, SeedsPerStep) == 900, "Offset mismatch for UFoliageType::SeedsPerStep");
static_assert(offsetof(UFoliageType, DistributionSeed) == 904, "Offset mismatch for UFoliageType::DistributionSeed");
static_assert(offsetof(UFoliageType, MaxInitialSeedOffset) == 908, "Offset mismatch for UFoliageType::MaxInitialSeedOffset");
static_assert(offsetof(UFoliageType, bCanGrowInShade) == 912, "Offset mismatch for UFoliageType::bCanGrowInShade");
static_assert(offsetof(UFoliageType, bSpawnsInShade) == 913, "Offset mismatch for UFoliageType::bSpawnsInShade");
static_assert(offsetof(UFoliageType, MaxInitialAge) == 916, "Offset mismatch for UFoliageType::MaxInitialAge");
static_assert(offsetof(UFoliageType, MaxAge) == 920, "Offset mismatch for UFoliageType::MaxAge");
static_assert(offsetof(UFoliageType, OverlapPriority) == 924, "Offset mismatch for UFoliageType::OverlapPriority");
static_assert(offsetof(UFoliageType, ProceduralScale) == 928, "Offset mismatch for UFoliageType::ProceduralScale");
static_assert(offsetof(UFoliageType, ScaleCurve) == 936, "Offset mismatch for UFoliageType::ScaleCurve");
static_assert(offsetof(UFoliageType, DensityFalloff) == 1008, "Offset mismatch for UFoliageType::DensityFalloff");
static_assert(offsetof(UFoliageType, ChangeCount) == 1088, "Offset mismatch for UFoliageType::ChangeCount");
static_assert(offsetof(UFoliageType, ReapplyAlignToNormal) == 1092, "Offset mismatch for UFoliageType::ReapplyAlignToNormal");
static_assert(offsetof(UFoliageType, ReapplyCollisionWithWorld) == 1093, "Offset mismatch for UFoliageType::ReapplyCollisionWithWorld");
static_assert(offsetof(UFoliageType, bEnableCullDistanceScaling) == 1094, "Offset mismatch for UFoliageType::bEnableCullDistanceScaling");
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 1096, "Offset mismatch for UFoliageType::RuntimeVirtualTextures");
static_assert(offsetof(UFoliageType, VirtualTextureCullMips) == 1112, "Offset mismatch for UFoliageType::VirtualTextureCullMips");
static_assert(offsetof(UFoliageType, VirtualTextureRenderPassType) == 1116, "Offset mismatch for UFoliageType::VirtualTextureRenderPassType");

// /Script/Foliage.FoliageType_Actor
// Kind: Class; super: FoliageType
class UFoliageType_Actor
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    void* ActorClass; // 0x0460 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bShouldAttachToBaseComponent; // 0x0468 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStaticMeshOnly; // 0x0469 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x046A
    void* StaticMeshOnlyComponentClass; // 0x0470 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFoliageType_Actor, ActorClass) == 1120, "Offset mismatch for UFoliageType_Actor::ActorClass");
static_assert(offsetof(UFoliageType_Actor, bShouldAttachToBaseComponent) == 1128, "Offset mismatch for UFoliageType_Actor::bShouldAttachToBaseComponent");
static_assert(offsetof(UFoliageType_Actor, bStaticMeshOnly) == 1129, "Offset mismatch for UFoliageType_Actor::bStaticMeshOnly");
static_assert(offsetof(UFoliageType_Actor, StaticMeshOnlyComponentClass) == 1136, "Offset mismatch for UFoliageType_Actor::StaticMeshOnlyComponentClass");

// /Script/Foliage.FoliageType_InstancedStaticMesh
// Kind: Class; super: FoliageType
class UFoliageType_InstancedStaticMesh
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    void* Mesh; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OverrideMaterials; // 0x0468 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NaniteOverrideMaterials; // 0x0478 (Size: 0x10, Type: ArrayProperty)
    void* ComponentClass; // 0x0488 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 1120, "Offset mismatch for UFoliageType_InstancedStaticMesh::Mesh");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 1128, "Offset mismatch for UFoliageType_InstancedStaticMesh::OverrideMaterials");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, NaniteOverrideMaterials) == 1144, "Offset mismatch for UFoliageType_InstancedStaticMesh::NaniteOverrideMaterials");
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 1160, "Offset mismatch for UFoliageType_InstancedStaticMesh::ComponentClass");

// /Script/Foliage.GrassInstancedStaticMeshComponent
// Kind: Class; super: HierarchicalInstancedStaticMeshComponent
class UGrassInstancedStaticMeshComponent
{
public:
    std::uint8_t Pad_0000[0xA70]; // 0x0000
    std::uint8_t bUseTranslatedInstanceSpace; // 0x0A70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0A71
    std::uint8_t TranslatedInstanceSpaceOrigin[0x18]; // 0x0A78 (Size: 0x18, Type: StructProperty)
    TArray<void*> SortedInstances; // 0x0A90 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumBuiltInstances; // 0x0AA0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0AA4
    std::uint8_t BuiltInstanceBounds[0x38]; // 0x0AA8 (Size: 0x38, Type: StructProperty)
    std::uint8_t UnbuiltInstanceBounds[0x38]; // 0x0AE0 (Size: 0x38, Type: StructProperty)
    TArray<void*> UnbuiltInstanceBoundsList; // 0x0B18 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableDensityScaling; // 0x0B28 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0B29
    std::int32_t OcclusionLayerNumNodes; // 0x0B30 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0B34
    std::uint8_t CacheMeshExtendedBounds[0x38]; // 0x0B38 (Size: 0x38, Type: StructProperty)
    std::int32_t InstanceCountToRender; // 0x0B70 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGrassInstancedStaticMeshComponent, bUseTranslatedInstanceSpace) == 2672, "Offset mismatch for UGrassInstancedStaticMeshComponent::bUseTranslatedInstanceSpace");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, TranslatedInstanceSpaceOrigin) == 2680, "Offset mismatch for UGrassInstancedStaticMeshComponent::TranslatedInstanceSpaceOrigin");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, SortedInstances) == 2704, "Offset mismatch for UGrassInstancedStaticMeshComponent::SortedInstances");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, NumBuiltInstances) == 2720, "Offset mismatch for UGrassInstancedStaticMeshComponent::NumBuiltInstances");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, BuiltInstanceBounds) == 2728, "Offset mismatch for UGrassInstancedStaticMeshComponent::BuiltInstanceBounds");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, UnbuiltInstanceBounds) == 2784, "Offset mismatch for UGrassInstancedStaticMeshComponent::UnbuiltInstanceBounds");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, UnbuiltInstanceBoundsList) == 2840, "Offset mismatch for UGrassInstancedStaticMeshComponent::UnbuiltInstanceBoundsList");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, bEnableDensityScaling) == 2856, "Offset mismatch for UGrassInstancedStaticMeshComponent::bEnableDensityScaling");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, OcclusionLayerNumNodes) == 2864, "Offset mismatch for UGrassInstancedStaticMeshComponent::OcclusionLayerNumNodes");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, CacheMeshExtendedBounds) == 2872, "Offset mismatch for UGrassInstancedStaticMeshComponent::CacheMeshExtendedBounds");
static_assert(offsetof(UGrassInstancedStaticMeshComponent, InstanceCountToRender) == 2928, "Offset mismatch for UGrassInstancedStaticMeshComponent::InstanceCountToRender");

// /Script/Foliage.InstancedFoliageActor
// Kind: Class; super: ISMPartitionActor
class UInstancedFoliageActor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInstancedFoliageActor, PrimaryActorTick) == 40, "Offset mismatch for UInstancedFoliageActor::PrimaryActorTick");
static_assert(offsetof(UInstancedFoliageActor, bAlwaysRelevant) == 88, "Offset mismatch for UInstancedFoliageActor::bAlwaysRelevant");
static_assert(offsetof(UInstancedFoliageActor, bExchangedRoles) == 89, "Offset mismatch for UInstancedFoliageActor::bExchangedRoles");
static_assert(offsetof(UInstancedFoliageActor, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UInstancedFoliageActor::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UInstancedFoliageActor, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UInstancedFoliageActor::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UInstancedFoliageActor, bActorEnableCollision) == 93, "Offset mismatch for UInstancedFoliageActor::bActorEnableCollision");
static_assert(offsetof(UInstancedFoliageActor, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UInstancedFoliageActor::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UInstancedFoliageActor, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UInstancedFoliageActor::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UInstancedFoliageActor, RemoteRole) == 96, "Offset mismatch for UInstancedFoliageActor::RemoteRole");
static_assert(offsetof(UInstancedFoliageActor, InitialLifeSpan) == 100, "Offset mismatch for UInstancedFoliageActor::InitialLifeSpan");
static_assert(offsetof(UInstancedFoliageActor, CustomTimeDilation) == 104, "Offset mismatch for UInstancedFoliageActor::CustomTimeDilation");
static_assert(offsetof(UInstancedFoliageActor, RayTracingGroupId) == 108, "Offset mismatch for UInstancedFoliageActor::RayTracingGroupId");
static_assert(offsetof(UInstancedFoliageActor, AttachmentReplication) == 112, "Offset mismatch for UInstancedFoliageActor::AttachmentReplication");
static_assert(offsetof(UInstancedFoliageActor, ReplicatedMovement) == 208, "Offset mismatch for UInstancedFoliageActor::ReplicatedMovement");
static_assert(offsetof(UInstancedFoliageActor, Owner) == 344, "Offset mismatch for UInstancedFoliageActor::Owner");
static_assert(offsetof(UInstancedFoliageActor, NetDriverName) == 352, "Offset mismatch for UInstancedFoliageActor::NetDriverName");
static_assert(offsetof(UInstancedFoliageActor, Role) == 356, "Offset mismatch for UInstancedFoliageActor::Role");
static_assert(offsetof(UInstancedFoliageActor, NetDormancy) == 357, "Offset mismatch for UInstancedFoliageActor::NetDormancy");
static_assert(offsetof(UInstancedFoliageActor, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UInstancedFoliageActor::SpawnCollisionHandlingMethod");
static_assert(offsetof(UInstancedFoliageActor, AutoReceiveInput) == 359, "Offset mismatch for UInstancedFoliageActor::AutoReceiveInput");
static_assert(offsetof(UInstancedFoliageActor, InputPriority) == 360, "Offset mismatch for UInstancedFoliageActor::InputPriority");
static_assert(offsetof(UInstancedFoliageActor, InputComponent) == 368, "Offset mismatch for UInstancedFoliageActor::InputComponent");
static_assert(offsetof(UInstancedFoliageActor, NetTag) == 376, "Offset mismatch for UInstancedFoliageActor::NetTag");
static_assert(offsetof(UInstancedFoliageActor, NetCullDistanceSquared) == 380, "Offset mismatch for UInstancedFoliageActor::NetCullDistanceSquared");
static_assert(offsetof(UInstancedFoliageActor, NetUpdateFrequency) == 384, "Offset mismatch for UInstancedFoliageActor::NetUpdateFrequency");
static_assert(offsetof(UInstancedFoliageActor, MinNetUpdateFrequency) == 388, "Offset mismatch for UInstancedFoliageActor::MinNetUpdateFrequency");
static_assert(offsetof(UInstancedFoliageActor, NetPriority) == 392, "Offset mismatch for UInstancedFoliageActor::NetPriority");
static_assert(offsetof(UInstancedFoliageActor, PhysicsReplicationMode) == 396, "Offset mismatch for UInstancedFoliageActor::PhysicsReplicationMode");
static_assert(offsetof(UInstancedFoliageActor, Instigator) == 408, "Offset mismatch for UInstancedFoliageActor::Instigator");
static_assert(offsetof(UInstancedFoliageActor, Children) == 416, "Offset mismatch for UInstancedFoliageActor::Children");
static_assert(offsetof(UInstancedFoliageActor, RootComponent) == 432, "Offset mismatch for UInstancedFoliageActor::RootComponent");
static_assert(offsetof(UInstancedFoliageActor, HLODLayer) == 448, "Offset mismatch for UInstancedFoliageActor::HLODLayer");
static_assert(offsetof(UInstancedFoliageActor, Layers) == 456, "Offset mismatch for UInstancedFoliageActor::Layers");
static_assert(offsetof(UInstancedFoliageActor, ParentComponent) == 472, "Offset mismatch for UInstancedFoliageActor::ParentComponent");
static_assert(offsetof(UInstancedFoliageActor, Tags) == 496, "Offset mismatch for UInstancedFoliageActor::Tags");
static_assert(offsetof(UInstancedFoliageActor, OnTakeAnyDamage) == 512, "Offset mismatch for UInstancedFoliageActor::OnTakeAnyDamage");
static_assert(offsetof(UInstancedFoliageActor, OnTakePointDamage) == 513, "Offset mismatch for UInstancedFoliageActor::OnTakePointDamage");
static_assert(offsetof(UInstancedFoliageActor, OnTakeRadialDamage) == 514, "Offset mismatch for UInstancedFoliageActor::OnTakeRadialDamage");
static_assert(offsetof(UInstancedFoliageActor, OnActorBeginOverlap) == 515, "Offset mismatch for UInstancedFoliageActor::OnActorBeginOverlap");
static_assert(offsetof(UInstancedFoliageActor, OnActorEndOverlap) == 516, "Offset mismatch for UInstancedFoliageActor::OnActorEndOverlap");
static_assert(offsetof(UInstancedFoliageActor, OnBeginCursorOver) == 517, "Offset mismatch for UInstancedFoliageActor::OnBeginCursorOver");
static_assert(offsetof(UInstancedFoliageActor, OnEndCursorOver) == 518, "Offset mismatch for UInstancedFoliageActor::OnEndCursorOver");
static_assert(offsetof(UInstancedFoliageActor, OnClicked) == 519, "Offset mismatch for UInstancedFoliageActor::OnClicked");
static_assert(offsetof(UInstancedFoliageActor, OnReleased) == 520, "Offset mismatch for UInstancedFoliageActor::OnReleased");
static_assert(offsetof(UInstancedFoliageActor, OnInputTouchBegin) == 521, "Offset mismatch for UInstancedFoliageActor::OnInputTouchBegin");
static_assert(offsetof(UInstancedFoliageActor, OnInputTouchEnd) == 522, "Offset mismatch for UInstancedFoliageActor::OnInputTouchEnd");
static_assert(offsetof(UInstancedFoliageActor, OnInputTouchEnter) == 523, "Offset mismatch for UInstancedFoliageActor::OnInputTouchEnter");
static_assert(offsetof(UInstancedFoliageActor, OnInputTouchLeave) == 524, "Offset mismatch for UInstancedFoliageActor::OnInputTouchLeave");
static_assert(offsetof(UInstancedFoliageActor, OnActorHit) == 525, "Offset mismatch for UInstancedFoliageActor::OnActorHit");
static_assert(offsetof(UInstancedFoliageActor, OnDestroyed) == 526, "Offset mismatch for UInstancedFoliageActor::OnDestroyed");
static_assert(offsetof(UInstancedFoliageActor, OnEndPlay) == 527, "Offset mismatch for UInstancedFoliageActor::OnEndPlay");
static_assert(offsetof(UInstancedFoliageActor, InstanceComponents) == 592, "Offset mismatch for UInstancedFoliageActor::InstanceComponents");
static_assert(offsetof(UInstancedFoliageActor, BlueprintCreatedComponents) == 608, "Offset mismatch for UInstancedFoliageActor::BlueprintCreatedComponents");

// /Script/Foliage.InteractiveFoliageActor
// Kind: Class; super: StaticMeshActor
class UInteractiveFoliageActor
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* CapsuleComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TouchingActorEntryPosition[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    std::uint8_t FoliageVelocity[0x18]; // 0x02A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FoliageForce[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t FoliagePosition[0x18]; // 0x02D0 (Size: 0x18, Type: StructProperty)
    float FoliageDamageImpulseScale; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float FoliageTouchImpulseScale; // 0x02EC (Size: 0x4, Type: FloatProperty)
    float FoliageStiffness; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    float FoliageStiffnessQuadratic; // 0x02F4 (Size: 0x4, Type: FloatProperty)
    float FoliageDamping; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float MaxDamageImpulse; // 0x02FC (Size: 0x4, Type: FloatProperty)
    float MaxTouchImpulse; // 0x0300 (Size: 0x4, Type: FloatProperty)
    float MaxForce; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float Mass; // 0x0308 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UInteractiveFoliageActor, CapsuleComponent) == 640, "Offset mismatch for UInteractiveFoliageActor::CapsuleComponent");
static_assert(offsetof(UInteractiveFoliageActor, TouchingActorEntryPosition) == 648, "Offset mismatch for UInteractiveFoliageActor::TouchingActorEntryPosition");
static_assert(offsetof(UInteractiveFoliageActor, FoliageVelocity) == 672, "Offset mismatch for UInteractiveFoliageActor::FoliageVelocity");
static_assert(offsetof(UInteractiveFoliageActor, FoliageForce) == 696, "Offset mismatch for UInteractiveFoliageActor::FoliageForce");
static_assert(offsetof(UInteractiveFoliageActor, FoliagePosition) == 720, "Offset mismatch for UInteractiveFoliageActor::FoliagePosition");
static_assert(offsetof(UInteractiveFoliageActor, FoliageDamageImpulseScale) == 744, "Offset mismatch for UInteractiveFoliageActor::FoliageDamageImpulseScale");
static_assert(offsetof(UInteractiveFoliageActor, FoliageTouchImpulseScale) == 748, "Offset mismatch for UInteractiveFoliageActor::FoliageTouchImpulseScale");
static_assert(offsetof(UInteractiveFoliageActor, FoliageStiffness) == 752, "Offset mismatch for UInteractiveFoliageActor::FoliageStiffness");
static_assert(offsetof(UInteractiveFoliageActor, FoliageStiffnessQuadratic) == 756, "Offset mismatch for UInteractiveFoliageActor::FoliageStiffnessQuadratic");
static_assert(offsetof(UInteractiveFoliageActor, FoliageDamping) == 760, "Offset mismatch for UInteractiveFoliageActor::FoliageDamping");
static_assert(offsetof(UInteractiveFoliageActor, MaxDamageImpulse) == 764, "Offset mismatch for UInteractiveFoliageActor::MaxDamageImpulse");
static_assert(offsetof(UInteractiveFoliageActor, MaxTouchImpulse) == 768, "Offset mismatch for UInteractiveFoliageActor::MaxTouchImpulse");
static_assert(offsetof(UInteractiveFoliageActor, MaxForce) == 772, "Offset mismatch for UInteractiveFoliageActor::MaxForce");
static_assert(offsetof(UInteractiveFoliageActor, Mass) == 776, "Offset mismatch for UInteractiveFoliageActor::Mass");

// /Script/Foliage.InteractiveFoliageComponent
// Kind: Class; super: StaticMeshComponent
class UInteractiveFoliageComponent
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

static_assert(offsetof(UInteractiveFoliageComponent, ForcedLodModel) == 1496, "Offset mismatch for UInteractiveFoliageComponent::ForcedLodModel");
static_assert(offsetof(UInteractiveFoliageComponent, MinLOD) == 1500, "Offset mismatch for UInteractiveFoliageComponent::MinLOD");
static_assert(offsetof(UInteractiveFoliageComponent, SubDivisionStepSize) == 1504, "Offset mismatch for UInteractiveFoliageComponent::SubDivisionStepSize");
static_assert(offsetof(UInteractiveFoliageComponent, WireframeColorOverride) == 1508, "Offset mismatch for UInteractiveFoliageComponent::WireframeColorOverride");
static_assert(offsetof(UInteractiveFoliageComponent, StaticMesh) == 1512, "Offset mismatch for UInteractiveFoliageComponent::StaticMesh");
static_assert(offsetof(UInteractiveFoliageComponent, WorldPositionOffsetDisableDistance) == 1520, "Offset mismatch for UInteractiveFoliageComponent::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UInteractiveFoliageComponent, bDisallowNanite) == 1524, "Offset mismatch for UInteractiveFoliageComponent::bDisallowNanite");
static_assert(offsetof(UInteractiveFoliageComponent, bForceNavigationObstacle) == 1525, "Offset mismatch for UInteractiveFoliageComponent::bForceNavigationObstacle");
static_assert(offsetof(UInteractiveFoliageComponent, NavAreaClass) == 1528, "Offset mismatch for UInteractiveFoliageComponent::NavAreaClass");
static_assert(offsetof(UInteractiveFoliageComponent, bCastDistanceFieldIndirectShadow) == 1536, "Offset mismatch for UInteractiveFoliageComponent::bCastDistanceFieldIndirectShadow");
static_assert(offsetof(UInteractiveFoliageComponent, bEnableTextureColorMeshPainting) == 1537, "Offset mismatch for UInteractiveFoliageComponent::bEnableTextureColorMeshPainting");
static_assert(offsetof(UInteractiveFoliageComponent, OverriddenMeshPaintTextureCoordinateIndex) == 1540, "Offset mismatch for UInteractiveFoliageComponent::OverriddenMeshPaintTextureCoordinateIndex");
static_assert(offsetof(UInteractiveFoliageComponent, OverriddenMeshPaintTextureResolution) == 1544, "Offset mismatch for UInteractiveFoliageComponent::OverriddenMeshPaintTextureResolution");
static_assert(offsetof(UInteractiveFoliageComponent, OverriddenLightMapRes) == 1548, "Offset mismatch for UInteractiveFoliageComponent::OverriddenLightMapRes");
static_assert(offsetof(UInteractiveFoliageComponent, MeshPaintTextureCooked) == 1552, "Offset mismatch for UInteractiveFoliageComponent::MeshPaintTextureCooked");
static_assert(offsetof(UInteractiveFoliageComponent, MeshPaintTextureOverride) == 1560, "Offset mismatch for UInteractiveFoliageComponent::MeshPaintTextureOverride");
static_assert(offsetof(UInteractiveFoliageComponent, MaterialCacheTileCount) == 1568, "Offset mismatch for UInteractiveFoliageComponent::MaterialCacheTileCount");
static_assert(offsetof(UInteractiveFoliageComponent, MaterialCacheUVRegion) == 1576, "Offset mismatch for UInteractiveFoliageComponent::MaterialCacheUVRegion");
static_assert(offsetof(UInteractiveFoliageComponent, MaterialCacheUVCoordinateIndex) == 1596, "Offset mismatch for UInteractiveFoliageComponent::MaterialCacheUVCoordinateIndex");
static_assert(offsetof(UInteractiveFoliageComponent, MaterialCacheTextures) == 1600, "Offset mismatch for UInteractiveFoliageComponent::MaterialCacheTextures");
static_assert(offsetof(UInteractiveFoliageComponent, DistanceFieldIndirectShadowMinVisibility) == 1616, "Offset mismatch for UInteractiveFoliageComponent::DistanceFieldIndirectShadowMinVisibility");
static_assert(offsetof(UInteractiveFoliageComponent, DistanceFieldSelfShadowBias) == 1620, "Offset mismatch for UInteractiveFoliageComponent::DistanceFieldSelfShadowBias");
static_assert(offsetof(UInteractiveFoliageComponent, StreamingDistanceMultiplier) == 1624, "Offset mismatch for UInteractiveFoliageComponent::StreamingDistanceMultiplier");
static_assert(offsetof(UInteractiveFoliageComponent, NanitePixelProgrammableDistance) == 1628, "Offset mismatch for UInteractiveFoliageComponent::NanitePixelProgrammableDistance");
static_assert(offsetof(UInteractiveFoliageComponent, LODData) == 1632, "Offset mismatch for UInteractiveFoliageComponent::LODData");
static_assert(offsetof(UInteractiveFoliageComponent, StreamingTextureData) == 1648, "Offset mismatch for UInteractiveFoliageComponent::StreamingTextureData");
static_assert(offsetof(UInteractiveFoliageComponent, LightmassSettings) == 1664, "Offset mismatch for UInteractiveFoliageComponent::LightmassSettings");

// /Script/Foliage.ProceduralFoliageBlockingVolume
// Kind: Class; super: Volume
class UProceduralFoliageBlockingVolume
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    void* ProceduralFoliageVolume; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DensityFalloff[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 680, "Offset mismatch for UProceduralFoliageBlockingVolume::ProceduralFoliageVolume");
static_assert(offsetof(UProceduralFoliageBlockingVolume, DensityFalloff) == 688, "Offset mismatch for UProceduralFoliageBlockingVolume::DensityFalloff");

// /Script/Foliage.ProceduralFoliageComponent
// Kind: Class; super: ActorComponent
class UProceduralFoliageComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* FoliageSpawner; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    float TileOverlap; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CC
    void* SpawningVolume; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProceduralGuid[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 192, "Offset mismatch for UProceduralFoliageComponent::FoliageSpawner");
static_assert(offsetof(UProceduralFoliageComponent, TileOverlap) == 200, "Offset mismatch for UProceduralFoliageComponent::TileOverlap");
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 208, "Offset mismatch for UProceduralFoliageComponent::SpawningVolume");
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 216, "Offset mismatch for UProceduralFoliageComponent::ProceduralGuid");

// /Script/Foliage.ProceduralFoliageSpawner
// Kind: Class; super: Object
class UProceduralFoliageSpawner
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t RandomSeed; // 0x0028 (Size: 0x4, Type: IntProperty)
    float TileSize; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumUniqueTiles; // 0x0030 (Size: 0x4, Type: IntProperty)
    float MinimumQuadTreeSize; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    TArray<void*> FoliageTypes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseOverrideFoliageTerrainMaterials; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    TArray<void*> OverrideFoliageTerrainMaterials; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralFoliageSpawner, RandomSeed) == 40, "Offset mismatch for UProceduralFoliageSpawner::RandomSeed");
static_assert(offsetof(UProceduralFoliageSpawner, TileSize) == 44, "Offset mismatch for UProceduralFoliageSpawner::TileSize");
static_assert(offsetof(UProceduralFoliageSpawner, NumUniqueTiles) == 48, "Offset mismatch for UProceduralFoliageSpawner::NumUniqueTiles");
static_assert(offsetof(UProceduralFoliageSpawner, MinimumQuadTreeSize) == 52, "Offset mismatch for UProceduralFoliageSpawner::MinimumQuadTreeSize");
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 64, "Offset mismatch for UProceduralFoliageSpawner::FoliageTypes");
static_assert(offsetof(UProceduralFoliageSpawner, bUseOverrideFoliageTerrainMaterials) == 80, "Offset mismatch for UProceduralFoliageSpawner::bUseOverrideFoliageTerrainMaterials");
static_assert(offsetof(UProceduralFoliageSpawner, OverrideFoliageTerrainMaterials) == 88, "Offset mismatch for UProceduralFoliageSpawner::OverrideFoliageTerrainMaterials");

// /Script/Foliage.ProceduralFoliageTile
// Kind: Class; super: Object
class UProceduralFoliageTile
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* FoliageSpawner; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0030
    TArray<void*> InstancesArray; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 40, "Offset mismatch for UProceduralFoliageTile::FoliageSpawner");
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 80, "Offset mismatch for UProceduralFoliageTile::InstancesArray");

// /Script/Foliage.ProceduralFoliageVolume
// Kind: Class; super: Volume
class UProceduralFoliageVolume
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* ProceduralComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProceduralFoliageVolume, ProceduralComponent) == 688, "Offset mismatch for UProceduralFoliageVolume::ProceduralComponent");
