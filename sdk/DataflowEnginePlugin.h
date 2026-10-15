/**
 * decamp dumper generated SDK
 * Package: /Script/DataflowEnginePlugin
 */
#pragma once
#include "Basic.h"

// /Script/DataflowEnginePlugin.CollectionAttributeKey
// Kind: ScriptStruct; super: none
struct FCollectionAttributeKey
{
public:
    FString Attribute; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Group; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCollectionAttributeKey, Attribute) == 0, "Offset mismatch for FCollectionAttributeKey::Attribute");
static_assert(offsetof(FCollectionAttributeKey, Group) == 16, "Offset mismatch for FCollectionAttributeKey::Group");

// /Script/DataflowEnginePlugin.DataflowDynamicMeshArray
// Kind: ScriptStruct; super: DataflowAnyType
struct FDataflowDynamicMeshArray
{
public:
    TArray<void*> Value; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDataflowDynamicMeshArray, Value) == 0, "Offset mismatch for FDataflowDynamicMeshArray::Value");

// /Script/DataflowEnginePlugin.DataflowActor
// Kind: Class; super: Actor
class UDataflowActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* DataflowComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDataflowActor, DataflowComponent) == 624, "Offset mismatch for UDataflowActor::DataflowComponent");

// /Script/DataflowEnginePlugin.DataflowComponent
// Kind: Class; super: PrimitiveComponent
class UDataflowComponent
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

static_assert(offsetof(UDataflowComponent, MinDrawDistance) == 632, "Offset mismatch for UDataflowComponent::MinDrawDistance");
static_assert(offsetof(UDataflowComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UDataflowComponent::LDMaxDrawDistance");
static_assert(offsetof(UDataflowComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UDataflowComponent::CachedMaxDrawDistance");
static_assert(offsetof(UDataflowComponent, DepthPriorityGroup) == 644, "Offset mismatch for UDataflowComponent::DepthPriorityGroup");
static_assert(offsetof(UDataflowComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UDataflowComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UDataflowComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UDataflowComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UDataflowComponent, LightmapType) == 647, "Offset mismatch for UDataflowComponent::LightmapType");
static_assert(offsetof(UDataflowComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UDataflowComponent::HLODBatchingPolicy");
static_assert(offsetof(UDataflowComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UDataflowComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UDataflowComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UDataflowComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UDataflowComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UDataflowComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UDataflowComponent, bHoldout) == 652, "Offset mismatch for UDataflowComponent::bHoldout");
static_assert(offsetof(UDataflowComponent, CastShadow) == 653, "Offset mismatch for UDataflowComponent::CastShadow");
static_assert(offsetof(UDataflowComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UDataflowComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UDataflowComponent, bCastCinematicShadow) == 655, "Offset mismatch for UDataflowComponent::bCastCinematicShadow");
static_assert(offsetof(UDataflowComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UDataflowComponent::AlwaysLoadOnClient");
static_assert(offsetof(UDataflowComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UDataflowComponent::bHiddenInSceneCapture");
static_assert(offsetof(UDataflowComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UDataflowComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UDataflowComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UDataflowComponent::bHasNoStreamableTextures");
static_assert(offsetof(UDataflowComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UDataflowComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UDataflowComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UDataflowComponent::CanCharacterStepUpOn");
static_assert(offsetof(UDataflowComponent, LightingChannels) == 663, "Offset mismatch for UDataflowComponent::LightingChannels");
static_assert(offsetof(UDataflowComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UDataflowComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UDataflowComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UDataflowComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UDataflowComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UDataflowComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UDataflowComponent, RayTracingGroupId) == 668, "Offset mismatch for UDataflowComponent::RayTracingGroupId");
static_assert(offsetof(UDataflowComponent, VisibilityId) == 672, "Offset mismatch for UDataflowComponent::VisibilityId");
static_assert(offsetof(UDataflowComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UDataflowComponent::CustomDepthStencilValue");
static_assert(offsetof(UDataflowComponent, CustomPrimitiveData) == 680, "Offset mismatch for UDataflowComponent::CustomPrimitiveData");
static_assert(offsetof(UDataflowComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UDataflowComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UDataflowComponent, TranslucencySortPriority) == 776, "Offset mismatch for UDataflowComponent::TranslucencySortPriority");
static_assert(offsetof(UDataflowComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UDataflowComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UDataflowComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UDataflowComponent::RuntimeVirtualTextures");
static_assert(offsetof(UDataflowComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UDataflowComponent::VirtualTextureLodBias");
static_assert(offsetof(UDataflowComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UDataflowComponent::VirtualTextureCullMips");
static_assert(offsetof(UDataflowComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UDataflowComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UDataflowComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UDataflowComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UDataflowComponent, BoundsScale) == 840, "Offset mismatch for UDataflowComponent::BoundsScale");
static_assert(offsetof(UDataflowComponent, MoveIgnoreActors) == 848, "Offset mismatch for UDataflowComponent::MoveIgnoreActors");
static_assert(offsetof(UDataflowComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UDataflowComponent::MoveIgnoreComponents");
static_assert(offsetof(UDataflowComponent, BodyInstance) == 896, "Offset mismatch for UDataflowComponent::BodyInstance");
static_assert(offsetof(UDataflowComponent, OnComponentHit) == 1320, "Offset mismatch for UDataflowComponent::OnComponentHit");
static_assert(offsetof(UDataflowComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UDataflowComponent::OnComponentBeginOverlap");
static_assert(offsetof(UDataflowComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UDataflowComponent::OnComponentEndOverlap");
static_assert(offsetof(UDataflowComponent, OnComponentWake) == 1323, "Offset mismatch for UDataflowComponent::OnComponentWake");
static_assert(offsetof(UDataflowComponent, OnComponentSleep) == 1324, "Offset mismatch for UDataflowComponent::OnComponentSleep");
static_assert(offsetof(UDataflowComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UDataflowComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UDataflowComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UDataflowComponent::OnBeginCursorOver");
static_assert(offsetof(UDataflowComponent, OnEndCursorOver) == 1328, "Offset mismatch for UDataflowComponent::OnEndCursorOver");
static_assert(offsetof(UDataflowComponent, OnClicked) == 1329, "Offset mismatch for UDataflowComponent::OnClicked");
static_assert(offsetof(UDataflowComponent, OnReleased) == 1330, "Offset mismatch for UDataflowComponent::OnReleased");
static_assert(offsetof(UDataflowComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UDataflowComponent::OnInputTouchBegin");
static_assert(offsetof(UDataflowComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UDataflowComponent::OnInputTouchEnd");
static_assert(offsetof(UDataflowComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UDataflowComponent::OnInputTouchEnter");
static_assert(offsetof(UDataflowComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UDataflowComponent::OnInputTouchLeave");
static_assert(offsetof(UDataflowComponent, OnTouchBegan) == 1335, "Offset mismatch for UDataflowComponent::OnTouchBegan");
static_assert(offsetof(UDataflowComponent, OnTouchEnded) == 1336, "Offset mismatch for UDataflowComponent::OnTouchEnded");
static_assert(offsetof(UDataflowComponent, OnTouchEntered) == 1337, "Offset mismatch for UDataflowComponent::OnTouchEntered");
static_assert(offsetof(UDataflowComponent, OnTouchExited) == 1338, "Offset mismatch for UDataflowComponent::OnTouchExited");
static_assert(offsetof(UDataflowComponent, LODParentPrimitive) == 1368, "Offset mismatch for UDataflowComponent::LODParentPrimitive");
