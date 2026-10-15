/**
 * decamp dumper generated SDK
 * Package: /Script/PolylineGraphRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PolylineGraphRuntime.LandscapePolylineGraphSplineInfo
// Kind: ScriptStruct; super: none
struct FLandscapePolylineGraphSplineInfo
{
public:
    std::uint8_t SplineTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t PolyLineTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLandscapePolylineGraphSplineInfo, SplineTag) == 0, "Offset mismatch for FLandscapePolylineGraphSplineInfo::SplineTag");
static_assert(offsetof(FLandscapePolylineGraphSplineInfo, PolyLineTags) == 8, "Offset mismatch for FLandscapePolylineGraphSplineInfo::PolyLineTags");

// /Script/PolylineGraphRuntime.PolylineGraph
// Kind: ScriptStruct; super: none
struct FPolylineGraph
{
public:
    TArray<void*> Edges; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Nodes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPolylineGraph, Edges) == 0, "Offset mismatch for FPolylineGraph::Edges");
static_assert(offsetof(FPolylineGraph, Nodes) == 16, "Offset mismatch for FPolylineGraph::Nodes");

// /Script/PolylineGraphRuntime.PolylineGraphBuilderDebugSettings
// Kind: ScriptStruct; super: none
struct FPolylineGraphBuilderDebugSettings
{
public:
    float VerticalOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EdgeThickness; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float NodeRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDumpOnCreation; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpOnExtremitiesConnection; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpOnSplitIntersection; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x000F
    std::int32_t StopAtSplitCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDumpSplitDebugInfo; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpOnEnd; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateAtEachStep; // 0x0016 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPolylineGraphBuilderDebugSettings, VerticalOffset) == 0, "Offset mismatch for FPolylineGraphBuilderDebugSettings::VerticalOffset");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, EdgeThickness) == 4, "Offset mismatch for FPolylineGraphBuilderDebugSettings::EdgeThickness");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, NodeRadius) == 8, "Offset mismatch for FPolylineGraphBuilderDebugSettings::NodeRadius");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, bDumpOnCreation) == 12, "Offset mismatch for FPolylineGraphBuilderDebugSettings::bDumpOnCreation");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, bDumpOnExtremitiesConnection) == 13, "Offset mismatch for FPolylineGraphBuilderDebugSettings::bDumpOnExtremitiesConnection");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, bDumpOnSplitIntersection) == 14, "Offset mismatch for FPolylineGraphBuilderDebugSettings::bDumpOnSplitIntersection");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, StopAtSplitCount) == 16, "Offset mismatch for FPolylineGraphBuilderDebugSettings::StopAtSplitCount");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, bDumpSplitDebugInfo) == 20, "Offset mismatch for FPolylineGraphBuilderDebugSettings::bDumpSplitDebugInfo");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, bDumpOnEnd) == 21, "Offset mismatch for FPolylineGraphBuilderDebugSettings::bDumpOnEnd");
static_assert(offsetof(FPolylineGraphBuilderDebugSettings, bValidateAtEachStep) == 22, "Offset mismatch for FPolylineGraphBuilderDebugSettings::bValidateAtEachStep");

// /Script/PolylineGraphRuntime.PolylineGraphBuilderSettings
// Kind: ScriptStruct; super: none
struct FPolylineGraphBuilderSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float MinEdgeLength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxEdgeLength; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LineDeviationTolerance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float GraphNodeConnectionDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float DeadEndShrinkDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxSplitEdgeEvalCount; // 0x001C (Size: 0x4, Type: IntProperty)
    TArray<void*> LengthTags; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DeadEndTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t IsolatedEdgeTags[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    TArray<void*> GeneratorSettings; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Debug[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPolylineGraphBuilderSettings, MinEdgeLength) == 8, "Offset mismatch for FPolylineGraphBuilderSettings::MinEdgeLength");
static_assert(offsetof(FPolylineGraphBuilderSettings, MaxEdgeLength) == 12, "Offset mismatch for FPolylineGraphBuilderSettings::MaxEdgeLength");
static_assert(offsetof(FPolylineGraphBuilderSettings, LineDeviationTolerance) == 16, "Offset mismatch for FPolylineGraphBuilderSettings::LineDeviationTolerance");
static_assert(offsetof(FPolylineGraphBuilderSettings, GraphNodeConnectionDistance) == 20, "Offset mismatch for FPolylineGraphBuilderSettings::GraphNodeConnectionDistance");
static_assert(offsetof(FPolylineGraphBuilderSettings, DeadEndShrinkDistance) == 24, "Offset mismatch for FPolylineGraphBuilderSettings::DeadEndShrinkDistance");
static_assert(offsetof(FPolylineGraphBuilderSettings, MaxSplitEdgeEvalCount) == 28, "Offset mismatch for FPolylineGraphBuilderSettings::MaxSplitEdgeEvalCount");
static_assert(offsetof(FPolylineGraphBuilderSettings, LengthTags) == 32, "Offset mismatch for FPolylineGraphBuilderSettings::LengthTags");
static_assert(offsetof(FPolylineGraphBuilderSettings, DeadEndTags) == 48, "Offset mismatch for FPolylineGraphBuilderSettings::DeadEndTags");
static_assert(offsetof(FPolylineGraphBuilderSettings, IsolatedEdgeTags) == 80, "Offset mismatch for FPolylineGraphBuilderSettings::IsolatedEdgeTags");
static_assert(offsetof(FPolylineGraphBuilderSettings, GeneratorSettings) == 112, "Offset mismatch for FPolylineGraphBuilderSettings::GeneratorSettings");
static_assert(offsetof(FPolylineGraphBuilderSettings, Debug) == 128, "Offset mismatch for FPolylineGraphBuilderSettings::Debug");

// /Script/PolylineGraphRuntime.PolylineGraphDataRenderSettings
// Kind: ScriptStruct; super: none
struct FPolylineGraphDataRenderSettings
{
public:
    std::uint8_t bHideFilteredElements; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t EdgeFilter[0x60]; // 0x0008 (Size: 0x60, Type: StructProperty)
    std::uint8_t NodeFilter[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPolylineGraphDataRenderSettings, bHideFilteredElements) == 0, "Offset mismatch for FPolylineGraphDataRenderSettings::bHideFilteredElements");
static_assert(offsetof(FPolylineGraphDataRenderSettings, EdgeFilter) == 8, "Offset mismatch for FPolylineGraphDataRenderSettings::EdgeFilter");
static_assert(offsetof(FPolylineGraphDataRenderSettings, NodeFilter) == 104, "Offset mismatch for FPolylineGraphDataRenderSettings::NodeFilter");

// /Script/PolylineGraphRuntime.PolylineGraphEdge
// Kind: ScriptStruct; super: none
struct FPolylineGraphEdge
{
public:
    std::uint8_t Info[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPolylineGraphEdge, Info) == 0, "Offset mismatch for FPolylineGraphEdge::Info");

// /Script/PolylineGraphRuntime.PolylineGraphEdgeExtremity
// Kind: ScriptStruct; super: none
struct FPolylineGraphEdgeExtremity
{
public:
    std::int32_t EdgeIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Side; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPolylineGraphEdgeExtremity, EdgeIndex) == 0, "Offset mismatch for FPolylineGraphEdgeExtremity::EdgeIndex");
static_assert(offsetof(FPolylineGraphEdgeExtremity, Side) == 4, "Offset mismatch for FPolylineGraphEdgeExtremity::Side");

// /Script/PolylineGraphRuntime.PolylineGraphEdgeFilter
// Kind: ScriptStruct; super: none
struct FPolylineGraphEdgeFilter
{
public:
    std::uint8_t TagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> Owner; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t Index; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t LengthInterval[0x8]; // 0x0054 (Size: 0x8, Type: StructProperty)
    std::uint8_t bFilterIndex; // 0x005C (Size: 0x1, Type: BoolProperty)
    // 0x005C BoolProperty bFilterLength (shared storage)
    // 0x005C BoolProperty bFilterOwner (shared storage)
};

static_assert(offsetof(FPolylineGraphEdgeFilter, TagQuery) == 0, "Offset mismatch for FPolylineGraphEdgeFilter::TagQuery");
static_assert(offsetof(FPolylineGraphEdgeFilter, Owner) == 72, "Offset mismatch for FPolylineGraphEdgeFilter::Owner");
static_assert(offsetof(FPolylineGraphEdgeFilter, Index) == 80, "Offset mismatch for FPolylineGraphEdgeFilter::Index");
static_assert(offsetof(FPolylineGraphEdgeFilter, LengthInterval) == 84, "Offset mismatch for FPolylineGraphEdgeFilter::LengthInterval");
static_assert(offsetof(FPolylineGraphEdgeFilter, bFilterIndex) == 92, "Offset mismatch for FPolylineGraphEdgeFilter::bFilterIndex");

// /Script/PolylineGraphRuntime.PolylineGraphEdgeInfo
// Kind: ScriptStruct; super: none
struct FPolylineGraphEdgeInfo
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> Owner; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPolylineGraphEdgeInfo, Tags) == 0, "Offset mismatch for FPolylineGraphEdgeInfo::Tags");
static_assert(offsetof(FPolylineGraphEdgeInfo, Owner) == 32, "Offset mismatch for FPolylineGraphEdgeInfo::Owner");

// /Script/PolylineGraphRuntime.PolylineGraphEdgeLengthTags
// Kind: ScriptStruct; super: none
struct FPolylineGraphEdgeLengthTags
{
public:
    float MinLength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Tags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPolylineGraphEdgeLengthTags, MinLength) == 0, "Offset mismatch for FPolylineGraphEdgeLengthTags::MinLength");
static_assert(offsetof(FPolylineGraphEdgeLengthTags, MaxLength) == 4, "Offset mismatch for FPolylineGraphEdgeLengthTags::MaxLength");
static_assert(offsetof(FPolylineGraphEdgeLengthTags, Tags) == 8, "Offset mismatch for FPolylineGraphEdgeLengthTags::Tags");

// /Script/PolylineGraphRuntime.PolylineGraphGeneratorSettings
// Kind: ScriptStruct; super: none
struct FPolylineGraphGeneratorSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PolylineGraphRuntime.PolylineGraphGeneratorSettings_LandscapeSplines
// Kind: ScriptStruct; super: PolylineGraphGeneratorSettings
struct FPolylineGraphGeneratorSettings_LandscapeSplines
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> SplineInfo; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SplineSampleCount; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPolylineGraphGeneratorSettings_LandscapeSplines, SplineInfo) == 8, "Offset mismatch for FPolylineGraphGeneratorSettings_LandscapeSplines::SplineInfo");
static_assert(offsetof(FPolylineGraphGeneratorSettings_LandscapeSplines, SplineSampleCount) == 24, "Offset mismatch for FPolylineGraphGeneratorSettings_LandscapeSplines::SplineSampleCount");

// /Script/PolylineGraphRuntime.PolylineGraphGeneratorSettings_PCG
// Kind: ScriptStruct; super: PolylineGraphGeneratorSettings
struct FPolylineGraphGeneratorSettings_PCG
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float StepLength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t DefaultTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TArray<void*> ConditionalTagsSets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPolylineGraphGeneratorSettings_PCG, StepLength) == 8, "Offset mismatch for FPolylineGraphGeneratorSettings_PCG::StepLength");
static_assert(offsetof(FPolylineGraphGeneratorSettings_PCG, DefaultTags) == 16, "Offset mismatch for FPolylineGraphGeneratorSettings_PCG::DefaultTags");
static_assert(offsetof(FPolylineGraphGeneratorSettings_PCG, ConditionalTagsSets) == 48, "Offset mismatch for FPolylineGraphGeneratorSettings_PCG::ConditionalTagsSets");

// /Script/PolylineGraphRuntime.PolylineGraphGeneratorSettings_SplineComponent
// Kind: ScriptStruct; super: PolylineGraphGeneratorSettings
struct FPolylineGraphGeneratorSettings_SplineComponent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* BaseActorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SplineInfo; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    float MaxDistanceFromSpline; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPolylineGraphGeneratorSettings_SplineComponent, BaseActorClass) == 8, "Offset mismatch for FPolylineGraphGeneratorSettings_SplineComponent::BaseActorClass");
static_assert(offsetof(FPolylineGraphGeneratorSettings_SplineComponent, SplineInfo) == 16, "Offset mismatch for FPolylineGraphGeneratorSettings_SplineComponent::SplineInfo");
static_assert(offsetof(FPolylineGraphGeneratorSettings_SplineComponent, MaxDistanceFromSpline) == 32, "Offset mismatch for FPolylineGraphGeneratorSettings_SplineComponent::MaxDistanceFromSpline");

// /Script/PolylineGraphRuntime.PolylineGraphNode
// Kind: ScriptStruct; super: none
struct FPolylineGraphNode
{
public:
    TArray<void*> Connections; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPolylineGraphNode, Connections) == 0, "Offset mismatch for FPolylineGraphNode::Connections");

// /Script/PolylineGraphRuntime.PolylineGraphNodeFilter
// Kind: ScriptStruct; super: none
struct FPolylineGraphNodeFilter
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Connections[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t bFilterConnections; // 0x000C (Size: 0x1, Type: BoolProperty)
    // 0x000C BoolProperty bFilterIndex (shared storage)
};

static_assert(offsetof(FPolylineGraphNodeFilter, Index) == 0, "Offset mismatch for FPolylineGraphNodeFilter::Index");
static_assert(offsetof(FPolylineGraphNodeFilter, Connections) == 4, "Offset mismatch for FPolylineGraphNodeFilter::Connections");
static_assert(offsetof(FPolylineGraphNodeFilter, bFilterConnections) == 12, "Offset mismatch for FPolylineGraphNodeFilter::bFilterConnections");

// /Script/PolylineGraphRuntime.PolylineGraphRuntimeObject_IntersectionsDefintion
// Kind: ScriptStruct; super: none
struct FPolylineGraphRuntimeObject_IntersectionsDefintion
{
public:
    std::uint8_t EdgeRequiredTags[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t MinimumEdgeCount; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    void* PointProviderClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPolylineGraphRuntimeObject_IntersectionsDefintion, EdgeRequiredTags) == 0, "Offset mismatch for FPolylineGraphRuntimeObject_IntersectionsDefintion::EdgeRequiredTags");
static_assert(offsetof(FPolylineGraphRuntimeObject_IntersectionsDefintion, MinimumEdgeCount) == 72, "Offset mismatch for FPolylineGraphRuntimeObject_IntersectionsDefintion::MinimumEdgeCount");
static_assert(offsetof(FPolylineGraphRuntimeObject_IntersectionsDefintion, PointProviderClass) == 80, "Offset mismatch for FPolylineGraphRuntimeObject_IntersectionsDefintion::PointProviderClass");

// /Script/PolylineGraphRuntime.SplineComponentPolylineGraphSplineInfo
// Kind: ScriptStruct; super: none
struct FSplineComponentPolylineGraphSplineInfo
{
public:
    std::uint8_t SplineTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t PolyLineTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSplineComponentPolylineGraphSplineInfo, SplineTag) == 0, "Offset mismatch for FSplineComponentPolylineGraphSplineInfo::SplineTag");
static_assert(offsetof(FSplineComponentPolylineGraphSplineInfo, PolyLineTags) == 8, "Offset mismatch for FSplineComponentPolylineGraphSplineInfo::PolyLineTags");

// /Script/PolylineGraphRuntime.PolylineGraphData
// Kind: Class; super: Actor
class UPolylineGraphData
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t BuilderSettings[0x98]; // 0x0270 (Size: 0x98, Type: StructProperty)
    TArray<void*> RuntimeObjectClasses; // 0x0308 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Graph[0x20]; // 0x0318 (Size: 0x20, Type: StructProperty)
    TArray<void*> RuntimeObjects; // 0x0338 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPolylineGraphData, BuilderSettings) == 624, "Offset mismatch for UPolylineGraphData::BuilderSettings");
static_assert(offsetof(UPolylineGraphData, RuntimeObjectClasses) == 776, "Offset mismatch for UPolylineGraphData::RuntimeObjectClasses");
static_assert(offsetof(UPolylineGraphData, Graph) == 792, "Offset mismatch for UPolylineGraphData::Graph");
static_assert(offsetof(UPolylineGraphData, RuntimeObjects) == 824, "Offset mismatch for UPolylineGraphData::RuntimeObjects");

// /Script/PolylineGraphRuntime.PolylineGraphDataRenderingComponent
// Kind: Class; super: DebugDrawComponent
class UPolylineGraphDataRenderingComponent
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

static_assert(offsetof(UPolylineGraphDataRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UPolylineGraphDataRenderingComponent::MinDrawDistance");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UPolylineGraphDataRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UPolylineGraphDataRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UPolylineGraphDataRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UPolylineGraphDataRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UPolylineGraphDataRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, LightmapType) == 647, "Offset mismatch for UPolylineGraphDataRenderingComponent::LightmapType");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UPolylineGraphDataRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UPolylineGraphDataRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UPolylineGraphDataRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UPolylineGraphDataRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bHoldout) == 652, "Offset mismatch for UPolylineGraphDataRenderingComponent::bHoldout");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CastShadow) == 653, "Offset mismatch for UPolylineGraphDataRenderingComponent::CastShadow");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UPolylineGraphDataRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UPolylineGraphDataRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UPolylineGraphDataRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UPolylineGraphDataRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UPolylineGraphDataRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UPolylineGraphDataRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UPolylineGraphDataRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UPolylineGraphDataRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, LightingChannels) == 663, "Offset mismatch for UPolylineGraphDataRenderingComponent::LightingChannels");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UPolylineGraphDataRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UPolylineGraphDataRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UPolylineGraphDataRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UPolylineGraphDataRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, VisibilityId) == 672, "Offset mismatch for UPolylineGraphDataRenderingComponent::VisibilityId");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UPolylineGraphDataRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UPolylineGraphDataRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UPolylineGraphDataRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UPolylineGraphDataRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UPolylineGraphDataRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UPolylineGraphDataRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UPolylineGraphDataRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UPolylineGraphDataRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UPolylineGraphDataRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UPolylineGraphDataRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, BoundsScale) == 840, "Offset mismatch for UPolylineGraphDataRenderingComponent::BoundsScale");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UPolylineGraphDataRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UPolylineGraphDataRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, BodyInstance) == 896, "Offset mismatch for UPolylineGraphDataRenderingComponent::BodyInstance");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnComponentHit");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnComponentWake");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnComponentSleep");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnClicked) == 1329, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnClicked");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnReleased) == 1330, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnReleased");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnTouchBegan");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnTouchEnded");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnTouchEntered");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UPolylineGraphDataRenderingComponent::OnTouchExited");
static_assert(offsetof(UPolylineGraphDataRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UPolylineGraphDataRenderingComponent::LODParentPrimitive");

// /Script/PolylineGraphRuntime.PolylineGraphGeneratorContext
// Kind: Class; super: Object
class UPolylineGraphGeneratorContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PolylineGraphRuntime.PolylineGraphGeneratorContext_PCG
// Kind: Class; super: PolylineGraphGeneratorContext
class UPolylineGraphGeneratorContext_PCG
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PolylineGraphRuntime.PolylineGraphPatrolPath
// Kind: Class; super: FortAthenaPatrolPath
class UPolylineGraphPatrolPath
{
public:
    std::uint8_t Pad_0000[0x450]; // 0x0000
    std::uint8_t bFavorOtherPatrolsOnReach; // 0x0450 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanUsePatrolsFromDifferentOwners; // 0x0451 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0452
    TWeakObjectPtr<void> EdgeOwner; // 0x0454 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UPolylineGraphPatrolPath, bFavorOtherPatrolsOnReach) == 1104, "Offset mismatch for UPolylineGraphPatrolPath::bFavorOtherPatrolsOnReach");
static_assert(offsetof(UPolylineGraphPatrolPath, bCanUsePatrolsFromDifferentOwners) == 1105, "Offset mismatch for UPolylineGraphPatrolPath::bCanUsePatrolsFromDifferentOwners");
static_assert(offsetof(UPolylineGraphPatrolPath, EdgeOwner) == 1108, "Offset mismatch for UPolylineGraphPatrolPath::EdgeOwner");

// /Script/PolylineGraphRuntime.PolylineGraphRuntimeObject
// Kind: Class; super: Object
class UPolylineGraphRuntimeObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PolylineGraphRuntime.PolylineGraphRuntimeObject_Intersections
// Kind: Class; super: PolylineGraphRuntimeObject
class UPolylineGraphRuntimeObject_Intersections
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Definitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PointProviders; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPolylineGraphRuntimeObject_Intersections, Definitions) == 40, "Offset mismatch for UPolylineGraphRuntimeObject_Intersections::Definitions");
static_assert(offsetof(UPolylineGraphRuntimeObject_Intersections, PointProviders) == 56, "Offset mismatch for UPolylineGraphRuntimeObject_Intersections::PointProviders");

// /Script/PolylineGraphRuntime.PolylineGraphRuntimeObject_Patrols
// Kind: Class; super: PolylineGraphRuntimeObject
class UPolylineGraphRuntimeObject_Patrols
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PatrolPathClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* PatrolPointClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    TArray<void*> PatrolPaths; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PatrolPoints; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPolylineGraphRuntimeObject_Patrols, PatrolPathClass) == 40, "Offset mismatch for UPolylineGraphRuntimeObject_Patrols::PatrolPathClass");
static_assert(offsetof(UPolylineGraphRuntimeObject_Patrols, PatrolPointClass) == 48, "Offset mismatch for UPolylineGraphRuntimeObject_Patrols::PatrolPointClass");
static_assert(offsetof(UPolylineGraphRuntimeObject_Patrols, PatrolPaths) == 56, "Offset mismatch for UPolylineGraphRuntimeObject_Patrols::PatrolPaths");
static_assert(offsetof(UPolylineGraphRuntimeObject_Patrols, PatrolPoints) == 72, "Offset mismatch for UPolylineGraphRuntimeObject_Patrols::PatrolPoints");
