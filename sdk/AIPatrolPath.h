/**
 * decamp dumper generated SDK
 * Package: /Script/AIPatrolPath
 */
#pragma once
#include "Basic.h"

// /Script/AIPatrolPath.PatrolPathSegmentDetails
// Kind: ScriptStruct; super: none
struct FPatrolPathSegmentDetails
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* Start; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPatrolPathSegmentDetails, Start) == 184, "Offset mismatch for FPatrolPathSegmentDetails::Start");

// /Script/AIPatrolPath.AIPatrolPathComponent
// Kind: Class; super: ActorComponent
class UAIPatrolPathComponent
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    TArray<void*> SharedOptionNames; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultAIPawn[0x20]; // 0x00F8 (Size: 0x20, Type: SoftClassProperty)
    void* PathRendererClass; // 0x0118 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowPartialPaths; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    std::uint8_t UnableToPlaceNewDeviceTags[0x20]; // 0x0128 (Size: 0x20, Type: StructProperty)
    std::uint8_t CachedAIAgentProperties[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    void* CachedNavSystem; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* CachedNavData; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* CachedFilterClass; // 0x0188 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0190
    FMulticastInlineDelegate OnNextPatrolPointFailedToReach; // 0x01A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x01B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPatrolPointReached; // 0x01C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPatrolPathStarted; // 0x01D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPatrolPathStopped; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01F0
    TArray<void*> PatrolPath; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PathSegmentDetails[0x118]; // 0x0208 (Size: 0x118, Type: StructProperty)
    void* CopiedFrom; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* CurrentCloningNode; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0330
    void* CopiedFromCut; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* PatrolPathActor; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* PatrolPointActor; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MultiSelectActorToEnterList; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x68]; // 0x0360
    std::uint8_t bCurrentlyPropagatingSharedOptions; // 0x03C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x03C9
    void* PatrolPathEditorComponent; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAIPatrolPathComponent, SharedOptionNames) == 232, "Offset mismatch for UAIPatrolPathComponent::SharedOptionNames");
static_assert(offsetof(UAIPatrolPathComponent, DefaultAIPawn) == 248, "Offset mismatch for UAIPatrolPathComponent::DefaultAIPawn");
static_assert(offsetof(UAIPatrolPathComponent, PathRendererClass) == 280, "Offset mismatch for UAIPatrolPathComponent::PathRendererClass");
static_assert(offsetof(UAIPatrolPathComponent, bAllowPartialPaths) == 288, "Offset mismatch for UAIPatrolPathComponent::bAllowPartialPaths");
static_assert(offsetof(UAIPatrolPathComponent, UnableToPlaceNewDeviceTags) == 296, "Offset mismatch for UAIPatrolPathComponent::UnableToPlaceNewDeviceTags");
static_assert(offsetof(UAIPatrolPathComponent, CachedAIAgentProperties) == 328, "Offset mismatch for UAIPatrolPathComponent::CachedAIAgentProperties");
static_assert(offsetof(UAIPatrolPathComponent, CachedNavSystem) == 376, "Offset mismatch for UAIPatrolPathComponent::CachedNavSystem");
static_assert(offsetof(UAIPatrolPathComponent, CachedNavData) == 384, "Offset mismatch for UAIPatrolPathComponent::CachedNavData");
static_assert(offsetof(UAIPatrolPathComponent, CachedFilterClass) == 392, "Offset mismatch for UAIPatrolPathComponent::CachedFilterClass");
static_assert(offsetof(UAIPatrolPathComponent, OnNextPatrolPointFailedToReach) == 416, "Offset mismatch for UAIPatrolPathComponent::OnNextPatrolPointFailedToReach");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPointFailedToReach) == 432, "Offset mismatch for UAIPatrolPathComponent::OnPatrolPointFailedToReach");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPointReached) == 448, "Offset mismatch for UAIPatrolPathComponent::OnPatrolPointReached");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPathStarted) == 464, "Offset mismatch for UAIPatrolPathComponent::OnPatrolPathStarted");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPathStopped) == 480, "Offset mismatch for UAIPatrolPathComponent::OnPatrolPathStopped");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPath) == 504, "Offset mismatch for UAIPatrolPathComponent::PatrolPath");
static_assert(offsetof(UAIPatrolPathComponent, PathSegmentDetails) == 520, "Offset mismatch for UAIPatrolPathComponent::PathSegmentDetails");
static_assert(offsetof(UAIPatrolPathComponent, CopiedFrom) == 800, "Offset mismatch for UAIPatrolPathComponent::CopiedFrom");
static_assert(offsetof(UAIPatrolPathComponent, CurrentCloningNode) == 808, "Offset mismatch for UAIPatrolPathComponent::CurrentCloningNode");
static_assert(offsetof(UAIPatrolPathComponent, CopiedFromCut) == 824, "Offset mismatch for UAIPatrolPathComponent::CopiedFromCut");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPathActor) == 832, "Offset mismatch for UAIPatrolPathComponent::PatrolPathActor");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPointActor) == 840, "Offset mismatch for UAIPatrolPathComponent::PatrolPointActor");
static_assert(offsetof(UAIPatrolPathComponent, MultiSelectActorToEnterList) == 848, "Offset mismatch for UAIPatrolPathComponent::MultiSelectActorToEnterList");
static_assert(offsetof(UAIPatrolPathComponent, bCurrentlyPropagatingSharedOptions) == 968, "Offset mismatch for UAIPatrolPathComponent::bCurrentlyPropagatingSharedOptions");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPathEditorComponent) == 976, "Offset mismatch for UAIPatrolPathComponent::PatrolPathEditorComponent");

// /Script/AIPatrolPath.AIPatrolPathEditorComponent
// Kind: Class; super: DebugDrawComponent
class UAIPatrolPathEditorComponent
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

static_assert(offsetof(UAIPatrolPathEditorComponent, MinDrawDistance) == 632, "Offset mismatch for UAIPatrolPathEditorComponent::MinDrawDistance");
static_assert(offsetof(UAIPatrolPathEditorComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UAIPatrolPathEditorComponent::LDMaxDrawDistance");
static_assert(offsetof(UAIPatrolPathEditorComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UAIPatrolPathEditorComponent::CachedMaxDrawDistance");
static_assert(offsetof(UAIPatrolPathEditorComponent, DepthPriorityGroup) == 644, "Offset mismatch for UAIPatrolPathEditorComponent::DepthPriorityGroup");
static_assert(offsetof(UAIPatrolPathEditorComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UAIPatrolPathEditorComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UAIPatrolPathEditorComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UAIPatrolPathEditorComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UAIPatrolPathEditorComponent, LightmapType) == 647, "Offset mismatch for UAIPatrolPathEditorComponent::LightmapType");
static_assert(offsetof(UAIPatrolPathEditorComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UAIPatrolPathEditorComponent::HLODBatchingPolicy");
static_assert(offsetof(UAIPatrolPathEditorComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UAIPatrolPathEditorComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UAIPatrolPathEditorComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UAIPatrolPathEditorComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UAIPatrolPathEditorComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UAIPatrolPathEditorComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UAIPatrolPathEditorComponent, bHoldout) == 652, "Offset mismatch for UAIPatrolPathEditorComponent::bHoldout");
static_assert(offsetof(UAIPatrolPathEditorComponent, CastShadow) == 653, "Offset mismatch for UAIPatrolPathEditorComponent::CastShadow");
static_assert(offsetof(UAIPatrolPathEditorComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UAIPatrolPathEditorComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UAIPatrolPathEditorComponent, bCastCinematicShadow) == 655, "Offset mismatch for UAIPatrolPathEditorComponent::bCastCinematicShadow");
static_assert(offsetof(UAIPatrolPathEditorComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UAIPatrolPathEditorComponent::AlwaysLoadOnClient");
static_assert(offsetof(UAIPatrolPathEditorComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UAIPatrolPathEditorComponent::bHiddenInSceneCapture");
static_assert(offsetof(UAIPatrolPathEditorComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UAIPatrolPathEditorComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UAIPatrolPathEditorComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UAIPatrolPathEditorComponent::bHasNoStreamableTextures");
static_assert(offsetof(UAIPatrolPathEditorComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UAIPatrolPathEditorComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UAIPatrolPathEditorComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UAIPatrolPathEditorComponent::CanCharacterStepUpOn");
static_assert(offsetof(UAIPatrolPathEditorComponent, LightingChannels) == 663, "Offset mismatch for UAIPatrolPathEditorComponent::LightingChannels");
static_assert(offsetof(UAIPatrolPathEditorComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UAIPatrolPathEditorComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UAIPatrolPathEditorComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UAIPatrolPathEditorComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UAIPatrolPathEditorComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UAIPatrolPathEditorComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UAIPatrolPathEditorComponent, RayTracingGroupId) == 668, "Offset mismatch for UAIPatrolPathEditorComponent::RayTracingGroupId");
static_assert(offsetof(UAIPatrolPathEditorComponent, VisibilityId) == 672, "Offset mismatch for UAIPatrolPathEditorComponent::VisibilityId");
static_assert(offsetof(UAIPatrolPathEditorComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UAIPatrolPathEditorComponent::CustomDepthStencilValue");
static_assert(offsetof(UAIPatrolPathEditorComponent, CustomPrimitiveData) == 680, "Offset mismatch for UAIPatrolPathEditorComponent::CustomPrimitiveData");
static_assert(offsetof(UAIPatrolPathEditorComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UAIPatrolPathEditorComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UAIPatrolPathEditorComponent, TranslucencySortPriority) == 776, "Offset mismatch for UAIPatrolPathEditorComponent::TranslucencySortPriority");
static_assert(offsetof(UAIPatrolPathEditorComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UAIPatrolPathEditorComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UAIPatrolPathEditorComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UAIPatrolPathEditorComponent::RuntimeVirtualTextures");
static_assert(offsetof(UAIPatrolPathEditorComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UAIPatrolPathEditorComponent::VirtualTextureLodBias");
static_assert(offsetof(UAIPatrolPathEditorComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UAIPatrolPathEditorComponent::VirtualTextureCullMips");
static_assert(offsetof(UAIPatrolPathEditorComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UAIPatrolPathEditorComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UAIPatrolPathEditorComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UAIPatrolPathEditorComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UAIPatrolPathEditorComponent, BoundsScale) == 840, "Offset mismatch for UAIPatrolPathEditorComponent::BoundsScale");
static_assert(offsetof(UAIPatrolPathEditorComponent, MoveIgnoreActors) == 848, "Offset mismatch for UAIPatrolPathEditorComponent::MoveIgnoreActors");
static_assert(offsetof(UAIPatrolPathEditorComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UAIPatrolPathEditorComponent::MoveIgnoreComponents");
static_assert(offsetof(UAIPatrolPathEditorComponent, BodyInstance) == 896, "Offset mismatch for UAIPatrolPathEditorComponent::BodyInstance");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnComponentHit) == 1320, "Offset mismatch for UAIPatrolPathEditorComponent::OnComponentHit");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UAIPatrolPathEditorComponent::OnComponentBeginOverlap");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UAIPatrolPathEditorComponent::OnComponentEndOverlap");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnComponentWake) == 1323, "Offset mismatch for UAIPatrolPathEditorComponent::OnComponentWake");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnComponentSleep) == 1324, "Offset mismatch for UAIPatrolPathEditorComponent::OnComponentSleep");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UAIPatrolPathEditorComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UAIPatrolPathEditorComponent::OnBeginCursorOver");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnEndCursorOver) == 1328, "Offset mismatch for UAIPatrolPathEditorComponent::OnEndCursorOver");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnClicked) == 1329, "Offset mismatch for UAIPatrolPathEditorComponent::OnClicked");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnReleased) == 1330, "Offset mismatch for UAIPatrolPathEditorComponent::OnReleased");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UAIPatrolPathEditorComponent::OnInputTouchBegin");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UAIPatrolPathEditorComponent::OnInputTouchEnd");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UAIPatrolPathEditorComponent::OnInputTouchEnter");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UAIPatrolPathEditorComponent::OnInputTouchLeave");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnTouchBegan) == 1335, "Offset mismatch for UAIPatrolPathEditorComponent::OnTouchBegan");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnTouchEnded) == 1336, "Offset mismatch for UAIPatrolPathEditorComponent::OnTouchEnded");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnTouchEntered) == 1337, "Offset mismatch for UAIPatrolPathEditorComponent::OnTouchEntered");
static_assert(offsetof(UAIPatrolPathEditorComponent, OnTouchExited) == 1338, "Offset mismatch for UAIPatrolPathEditorComponent::OnTouchExited");
static_assert(offsetof(UAIPatrolPathEditorComponent, LODParentPrimitive) == 1368, "Offset mismatch for UAIPatrolPathEditorComponent::LODParentPrimitive");
