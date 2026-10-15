/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryCache
 */
#pragma once
#include "Basic.h"

// /Script/GeometryCache.GeometryCacheMeshBatchInfo
// Kind: ScriptStruct; super: none
struct FGeometryCacheMeshBatchInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCache.GeometryCacheMeshData
// Kind: ScriptStruct; super: none
struct FGeometryCacheMeshData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCache.GeometryCacheVertexInfo
// Kind: ScriptStruct; super: none
struct FGeometryCacheVertexInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCache.NiagaraGeometryCacheMICOverride
// Kind: ScriptStruct; super: none
struct FNiagaraGeometryCacheMICOverride
{
public:
    void* OriginalMaterial; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ReplacementMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraGeometryCacheMICOverride, OriginalMaterial) == 0, "Offset mismatch for FNiagaraGeometryCacheMICOverride::OriginalMaterial");
static_assert(offsetof(FNiagaraGeometryCacheMICOverride, ReplacementMaterial) == 8, "Offset mismatch for FNiagaraGeometryCacheMICOverride::ReplacementMaterial");

// /Script/GeometryCache.NiagaraGeometryCacheReference
// Kind: ScriptStruct; super: none
struct FNiagaraGeometryCacheReference
{
public:
    void* GeometryCache; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeometryCacheUserParamBinding[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    TArray<void*> OverrideMaterials; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MICOverrideMaterials; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCache) == 0, "Offset mismatch for FNiagaraGeometryCacheReference::GeometryCache");
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCacheUserParamBinding) == 8, "Offset mismatch for FNiagaraGeometryCacheReference::GeometryCacheUserParamBinding");
static_assert(offsetof(FNiagaraGeometryCacheReference, OverrideMaterials) == 32, "Offset mismatch for FNiagaraGeometryCacheReference::OverrideMaterials");
static_assert(offsetof(FNiagaraGeometryCacheReference, MICOverrideMaterials) == 48, "Offset mismatch for FNiagaraGeometryCacheReference::MICOverrideMaterials");

// /Script/GeometryCache.TrackRenderData
// Kind: ScriptStruct; super: none
struct FTrackRenderData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCache.GeometryCache
// Kind: Class; super: Object
class UGeometryCache
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Materials; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialSlotNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Tracks; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0070
    std::int32_t StartFrame; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrame; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint64_t Hash; // 0x0090 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(UGeometryCache, Materials) == 48, "Offset mismatch for UGeometryCache::Materials");
static_assert(offsetof(UGeometryCache, MaterialSlotNames) == 64, "Offset mismatch for UGeometryCache::MaterialSlotNames");
static_assert(offsetof(UGeometryCache, Tracks) == 80, "Offset mismatch for UGeometryCache::Tracks");
static_assert(offsetof(UGeometryCache, AssetUserData) == 96, "Offset mismatch for UGeometryCache::AssetUserData");
static_assert(offsetof(UGeometryCache, StartFrame) == 136, "Offset mismatch for UGeometryCache::StartFrame");
static_assert(offsetof(UGeometryCache, EndFrame) == 140, "Offset mismatch for UGeometryCache::EndFrame");
static_assert(offsetof(UGeometryCache, Hash) == 144, "Offset mismatch for UGeometryCache::Hash");

// /Script/GeometryCache.GeometryCacheActor
// Kind: Class; super: Actor
class UGeometryCacheActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* GeometryCacheComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCacheActor, GeometryCacheComponent) == 624, "Offset mismatch for UGeometryCacheActor::GeometryCacheComponent");

// /Script/GeometryCache.GeometryCacheCodecBase
// Kind: Class; super: Object
class UGeometryCacheCodecBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TopologyRanges; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 40, "Offset mismatch for UGeometryCacheCodecBase::TopologyRanges");

// /Script/GeometryCache.GeometryCacheCodecRaw
// Kind: Class; super: GeometryCacheCodecBase
class UGeometryCacheCodecRaw
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t DummyProperty; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGeometryCacheCodecRaw, DummyProperty) == 56, "Offset mismatch for UGeometryCacheCodecRaw::DummyProperty");

// /Script/GeometryCache.GeometryCacheCodecV1
// Kind: Class; super: GeometryCacheCodecBase
class UGeometryCacheCodecV1
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TopologyRanges; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGeometryCacheCodecV1, TopologyRanges) == 40, "Offset mismatch for UGeometryCacheCodecV1::TopologyRanges");

// /Script/GeometryCache.GeometryCacheComponent
// Kind: Class; super: MeshComponent
class UGeometryCacheComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    void* GeometryCache; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRunning; // 0x05D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLooping; // 0x05D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInterpolateFrames; // 0x05DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtrapolateFrames; // 0x05DB (Size: 0x1, Type: BoolProperty)
    float StartTimeOffset; // 0x05DC (Size: 0x4, Type: FloatProperty)
    float PlaybackSpeed; // 0x05E0 (Size: 0x4, Type: FloatProperty)
    float MotionVectorScale; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumTracks; // 0x05E8 (Size: 0x4, Type: IntProperty)
    float ElapsedTime; // 0x05EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4C]; // 0x05F0
    float duration; // 0x063C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bManualTick; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideWireframeColor; // 0x0641 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0642
    std::uint8_t WireframeOverrideColor[0x1]; // 0x0644 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 1488, "Offset mismatch for UGeometryCacheComponent::GeometryCache");
static_assert(offsetof(UGeometryCacheComponent, bRunning) == 1496, "Offset mismatch for UGeometryCacheComponent::bRunning");
static_assert(offsetof(UGeometryCacheComponent, bLooping) == 1497, "Offset mismatch for UGeometryCacheComponent::bLooping");
static_assert(offsetof(UGeometryCacheComponent, bInterpolateFrames) == 1498, "Offset mismatch for UGeometryCacheComponent::bInterpolateFrames");
static_assert(offsetof(UGeometryCacheComponent, bExtrapolateFrames) == 1499, "Offset mismatch for UGeometryCacheComponent::bExtrapolateFrames");
static_assert(offsetof(UGeometryCacheComponent, StartTimeOffset) == 1500, "Offset mismatch for UGeometryCacheComponent::StartTimeOffset");
static_assert(offsetof(UGeometryCacheComponent, PlaybackSpeed) == 1504, "Offset mismatch for UGeometryCacheComponent::PlaybackSpeed");
static_assert(offsetof(UGeometryCacheComponent, MotionVectorScale) == 1508, "Offset mismatch for UGeometryCacheComponent::MotionVectorScale");
static_assert(offsetof(UGeometryCacheComponent, NumTracks) == 1512, "Offset mismatch for UGeometryCacheComponent::NumTracks");
static_assert(offsetof(UGeometryCacheComponent, ElapsedTime) == 1516, "Offset mismatch for UGeometryCacheComponent::ElapsedTime");
static_assert(offsetof(UGeometryCacheComponent, duration) == 1596, "Offset mismatch for UGeometryCacheComponent::duration");
static_assert(offsetof(UGeometryCacheComponent, bManualTick) == 1600, "Offset mismatch for UGeometryCacheComponent::bManualTick");
static_assert(offsetof(UGeometryCacheComponent, bOverrideWireframeColor) == 1601, "Offset mismatch for UGeometryCacheComponent::bOverrideWireframeColor");
static_assert(offsetof(UGeometryCacheComponent, WireframeOverrideColor) == 1604, "Offset mismatch for UGeometryCacheComponent::WireframeOverrideColor");

// /Script/GeometryCache.GeometryCacheTrack
// Kind: Class; super: Object
class UGeometryCacheTrack
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGeometryCacheTrack, duration) == 40, "Offset mismatch for UGeometryCacheTrack::duration");

// /Script/GeometryCache.GeometryCacheTrackStreamable
// Kind: Class; super: GeometryCacheTrack
class UGeometryCacheTrackStreamable
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* Codec; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x60]; // 0x0060
    float StartSampleTime; // 0x00C0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 88, "Offset mismatch for UGeometryCacheTrackStreamable::Codec");
static_assert(offsetof(UGeometryCacheTrackStreamable, StartSampleTime) == 192, "Offset mismatch for UGeometryCacheTrackStreamable::StartSampleTime");

// /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Kind: Class; super: GeometryCacheTrack
class UGeometryCacheTrack_FlipbookAnimation
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint32_t NumMeshSamples; // 0x0058 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UGeometryCacheTrack_FlipbookAnimation, NumMeshSamples) == 88, "Offset mismatch for UGeometryCacheTrack_FlipbookAnimation::NumMeshSamples");

// /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
// Kind: Class; super: GeometryCacheTrack
class UGeometryCacheTrack_TransformAnimation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGeometryCacheTrack_TransformAnimation, duration) == 40, "Offset mismatch for UGeometryCacheTrack_TransformAnimation::duration");

// /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Kind: Class; super: GeometryCacheTrack
class UGeometryCacheTrack_TransformGroupAnimation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGeometryCacheTrack_TransformGroupAnimation, duration) == 40, "Offset mismatch for UGeometryCacheTrack_TransformGroupAnimation::duration");

// /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraGeometryCacheRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    TArray<void*> GeometryCaches; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SourceMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsLooping; // 0x00A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00AA
    std::uint32_t ComponentCountLimit; // 0x00AC (Size: 0x4, Type: UInt32Property)
    std::uint8_t PositionBinding[0x14]; // 0x00B0 (Size: 0x14, Type: StructProperty)
    std::uint8_t RotationBinding[0x14]; // 0x00C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t ScaleBinding[0x14]; // 0x00D8 (Size: 0x14, Type: StructProperty)
    std::uint8_t ElapsedTimeBinding[0x14]; // 0x00EC (Size: 0x14, Type: StructProperty)
    std::uint8_t EnabledBinding[0x14]; // 0x0100 (Size: 0x14, Type: StructProperty)
    std::uint8_t ArrayIndexBinding[0x14]; // 0x0114 (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x0128 (Size: 0x14, Type: StructProperty)
    std::int32_t RendererVisibility; // 0x013C (Size: 0x4, Type: IntProperty)
    std::uint8_t bAssignComponentsOnParticleID; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableCollision; // 0x0141 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAffectsNavigation; // 0x0142 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0143
    std::uint8_t MaterialParameters[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, GeometryCaches) == 152, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::GeometryCaches");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, SourceMode) == 168, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::SourceMode");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, bIsLooping) == 169, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::bIsLooping");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ComponentCountLimit) == 172, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::ComponentCountLimit");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, PositionBinding) == 176, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::PositionBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RotationBinding) == 196, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::RotationBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ScaleBinding) == 216, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::ScaleBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ElapsedTimeBinding) == 236, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::ElapsedTimeBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, EnabledBinding) == 256, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::EnabledBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ArrayIndexBinding) == 276, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::ArrayIndexBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RendererVisibilityTagBinding) == 296, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RendererVisibility) == 316, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, bAssignComponentsOnParticleID) == 320, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::bAssignComponentsOnParticleID");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, EnableCollision) == 321, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::EnableCollision");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, bAffectsNavigation) == 322, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::bAffectsNavigation");
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, MaterialParameters) == 328, "Offset mismatch for UNiagaraGeometryCacheRendererProperties::MaterialParameters");
