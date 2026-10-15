/**
 * decamp dumper generated SDK
 * Package: /Script/ImagePlate
 */
#pragma once
#include "Basic.h"

// /Script/ImagePlate.ImagePlateParameters
// Kind: ScriptStruct; super: none
struct FImagePlateParameters
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureParameterName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bFillScreen; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t FillScreenAmount[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t FixedSize[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    void* RenderTexture; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMaterial; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FImagePlateParameters, Material) == 0, "Offset mismatch for FImagePlateParameters::Material");
static_assert(offsetof(FImagePlateParameters, TextureParameterName) == 8, "Offset mismatch for FImagePlateParameters::TextureParameterName");
static_assert(offsetof(FImagePlateParameters, bFillScreen) == 12, "Offset mismatch for FImagePlateParameters::bFillScreen");
static_assert(offsetof(FImagePlateParameters, FillScreenAmount) == 16, "Offset mismatch for FImagePlateParameters::FillScreenAmount");
static_assert(offsetof(FImagePlateParameters, FixedSize) == 32, "Offset mismatch for FImagePlateParameters::FixedSize");
static_assert(offsetof(FImagePlateParameters, RenderTexture) == 48, "Offset mismatch for FImagePlateParameters::RenderTexture");
static_assert(offsetof(FImagePlateParameters, DynamicMaterial) == 56, "Offset mismatch for FImagePlateParameters::DynamicMaterial");

// /Script/ImagePlate.ImagePlate
// Kind: Class; super: Actor
class UImagePlate
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ImagePlate; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UImagePlate, ImagePlate) == 624, "Offset mismatch for UImagePlate::ImagePlate");

// /Script/ImagePlate.ImagePlateComponent
// Kind: Class; super: PrimitiveComponent
class UImagePlateComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t Plate[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UImagePlateComponent, Plate) == 1392, "Offset mismatch for UImagePlateComponent::Plate");

// /Script/ImagePlate.ImagePlateFileSequence
// Kind: Class; super: Object
class UImagePlateFileSequence
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SequencePath[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    FString FileWildcard; // 0x0038 (Size: 0x10, Type: StrProperty)
    float FrameRate; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UImagePlateFileSequence, SequencePath) == 40, "Offset mismatch for UImagePlateFileSequence::SequencePath");
static_assert(offsetof(UImagePlateFileSequence, FileWildcard) == 56, "Offset mismatch for UImagePlateFileSequence::FileWildcard");
static_assert(offsetof(UImagePlateFileSequence, FrameRate) == 72, "Offset mismatch for UImagePlateFileSequence::FrameRate");

// /Script/ImagePlate.ImagePlateFrustumComponent
// Kind: Class; super: PrimitiveComponent
class UImagePlateFrustumComponent
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

static_assert(offsetof(UImagePlateFrustumComponent, MinDrawDistance) == 632, "Offset mismatch for UImagePlateFrustumComponent::MinDrawDistance");
static_assert(offsetof(UImagePlateFrustumComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UImagePlateFrustumComponent::LDMaxDrawDistance");
static_assert(offsetof(UImagePlateFrustumComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UImagePlateFrustumComponent::CachedMaxDrawDistance");
static_assert(offsetof(UImagePlateFrustumComponent, DepthPriorityGroup) == 644, "Offset mismatch for UImagePlateFrustumComponent::DepthPriorityGroup");
static_assert(offsetof(UImagePlateFrustumComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UImagePlateFrustumComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UImagePlateFrustumComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UImagePlateFrustumComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UImagePlateFrustumComponent, LightmapType) == 647, "Offset mismatch for UImagePlateFrustumComponent::LightmapType");
static_assert(offsetof(UImagePlateFrustumComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UImagePlateFrustumComponent::HLODBatchingPolicy");
static_assert(offsetof(UImagePlateFrustumComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UImagePlateFrustumComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UImagePlateFrustumComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UImagePlateFrustumComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UImagePlateFrustumComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UImagePlateFrustumComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UImagePlateFrustumComponent, bHoldout) == 652, "Offset mismatch for UImagePlateFrustumComponent::bHoldout");
static_assert(offsetof(UImagePlateFrustumComponent, CastShadow) == 653, "Offset mismatch for UImagePlateFrustumComponent::CastShadow");
static_assert(offsetof(UImagePlateFrustumComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UImagePlateFrustumComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UImagePlateFrustumComponent, bCastCinematicShadow) == 655, "Offset mismatch for UImagePlateFrustumComponent::bCastCinematicShadow");
static_assert(offsetof(UImagePlateFrustumComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UImagePlateFrustumComponent::AlwaysLoadOnClient");
static_assert(offsetof(UImagePlateFrustumComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UImagePlateFrustumComponent::bHiddenInSceneCapture");
static_assert(offsetof(UImagePlateFrustumComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UImagePlateFrustumComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UImagePlateFrustumComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UImagePlateFrustumComponent::bHasNoStreamableTextures");
static_assert(offsetof(UImagePlateFrustumComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UImagePlateFrustumComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UImagePlateFrustumComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UImagePlateFrustumComponent::CanCharacterStepUpOn");
static_assert(offsetof(UImagePlateFrustumComponent, LightingChannels) == 663, "Offset mismatch for UImagePlateFrustumComponent::LightingChannels");
static_assert(offsetof(UImagePlateFrustumComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UImagePlateFrustumComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UImagePlateFrustumComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UImagePlateFrustumComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UImagePlateFrustumComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UImagePlateFrustumComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UImagePlateFrustumComponent, RayTracingGroupId) == 668, "Offset mismatch for UImagePlateFrustumComponent::RayTracingGroupId");
static_assert(offsetof(UImagePlateFrustumComponent, VisibilityId) == 672, "Offset mismatch for UImagePlateFrustumComponent::VisibilityId");
static_assert(offsetof(UImagePlateFrustumComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UImagePlateFrustumComponent::CustomDepthStencilValue");
static_assert(offsetof(UImagePlateFrustumComponent, CustomPrimitiveData) == 680, "Offset mismatch for UImagePlateFrustumComponent::CustomPrimitiveData");
static_assert(offsetof(UImagePlateFrustumComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UImagePlateFrustumComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UImagePlateFrustumComponent, TranslucencySortPriority) == 776, "Offset mismatch for UImagePlateFrustumComponent::TranslucencySortPriority");
static_assert(offsetof(UImagePlateFrustumComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UImagePlateFrustumComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UImagePlateFrustumComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UImagePlateFrustumComponent::RuntimeVirtualTextures");
static_assert(offsetof(UImagePlateFrustumComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UImagePlateFrustumComponent::VirtualTextureLodBias");
static_assert(offsetof(UImagePlateFrustumComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UImagePlateFrustumComponent::VirtualTextureCullMips");
static_assert(offsetof(UImagePlateFrustumComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UImagePlateFrustumComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UImagePlateFrustumComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UImagePlateFrustumComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UImagePlateFrustumComponent, BoundsScale) == 840, "Offset mismatch for UImagePlateFrustumComponent::BoundsScale");
static_assert(offsetof(UImagePlateFrustumComponent, MoveIgnoreActors) == 848, "Offset mismatch for UImagePlateFrustumComponent::MoveIgnoreActors");
static_assert(offsetof(UImagePlateFrustumComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UImagePlateFrustumComponent::MoveIgnoreComponents");
static_assert(offsetof(UImagePlateFrustumComponent, BodyInstance) == 896, "Offset mismatch for UImagePlateFrustumComponent::BodyInstance");
static_assert(offsetof(UImagePlateFrustumComponent, OnComponentHit) == 1320, "Offset mismatch for UImagePlateFrustumComponent::OnComponentHit");
static_assert(offsetof(UImagePlateFrustumComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UImagePlateFrustumComponent::OnComponentBeginOverlap");
static_assert(offsetof(UImagePlateFrustumComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UImagePlateFrustumComponent::OnComponentEndOverlap");
static_assert(offsetof(UImagePlateFrustumComponent, OnComponentWake) == 1323, "Offset mismatch for UImagePlateFrustumComponent::OnComponentWake");
static_assert(offsetof(UImagePlateFrustumComponent, OnComponentSleep) == 1324, "Offset mismatch for UImagePlateFrustumComponent::OnComponentSleep");
static_assert(offsetof(UImagePlateFrustumComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UImagePlateFrustumComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UImagePlateFrustumComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UImagePlateFrustumComponent::OnBeginCursorOver");
static_assert(offsetof(UImagePlateFrustumComponent, OnEndCursorOver) == 1328, "Offset mismatch for UImagePlateFrustumComponent::OnEndCursorOver");
static_assert(offsetof(UImagePlateFrustumComponent, OnClicked) == 1329, "Offset mismatch for UImagePlateFrustumComponent::OnClicked");
static_assert(offsetof(UImagePlateFrustumComponent, OnReleased) == 1330, "Offset mismatch for UImagePlateFrustumComponent::OnReleased");
static_assert(offsetof(UImagePlateFrustumComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UImagePlateFrustumComponent::OnInputTouchBegin");
static_assert(offsetof(UImagePlateFrustumComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UImagePlateFrustumComponent::OnInputTouchEnd");
static_assert(offsetof(UImagePlateFrustumComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UImagePlateFrustumComponent::OnInputTouchEnter");
static_assert(offsetof(UImagePlateFrustumComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UImagePlateFrustumComponent::OnInputTouchLeave");
static_assert(offsetof(UImagePlateFrustumComponent, OnTouchBegan) == 1335, "Offset mismatch for UImagePlateFrustumComponent::OnTouchBegan");
static_assert(offsetof(UImagePlateFrustumComponent, OnTouchEnded) == 1336, "Offset mismatch for UImagePlateFrustumComponent::OnTouchEnded");
static_assert(offsetof(UImagePlateFrustumComponent, OnTouchEntered) == 1337, "Offset mismatch for UImagePlateFrustumComponent::OnTouchEntered");
static_assert(offsetof(UImagePlateFrustumComponent, OnTouchExited) == 1338, "Offset mismatch for UImagePlateFrustumComponent::OnTouchExited");
static_assert(offsetof(UImagePlateFrustumComponent, LODParentPrimitive) == 1368, "Offset mismatch for UImagePlateFrustumComponent::LODParentPrimitive");

// /Script/ImagePlate.ImagePlateSettings
// Kind: Class; super: Object
class UImagePlateSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ProxyName; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UImagePlateSettings, ProxyName) == 40, "Offset mismatch for UImagePlateSettings::ProxyName");
