/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosCaching
 */
#pragma once
#include "Basic.h"

// /Script/ChaosCaching.BreakingEvent
// Kind: ScriptStruct; super: CacheEventBase
struct FBreakingEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Index; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Location[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t orientation[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0084
    std::uint8_t BoundingBoxMin[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundingBoxMax[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBreakingEvent, Index) == 8, "Offset mismatch for FBreakingEvent::Index");
static_assert(offsetof(FBreakingEvent, Location) == 16, "Offset mismatch for FBreakingEvent::Location");
static_assert(offsetof(FBreakingEvent, orientation) == 48, "Offset mismatch for FBreakingEvent::orientation");
static_assert(offsetof(FBreakingEvent, Velocity) == 80, "Offset mismatch for FBreakingEvent::Velocity");
static_assert(offsetof(FBreakingEvent, AngularVelocity) == 104, "Offset mismatch for FBreakingEvent::AngularVelocity");
static_assert(offsetof(FBreakingEvent, Mass) == 128, "Offset mismatch for FBreakingEvent::Mass");
static_assert(offsetof(FBreakingEvent, BoundingBoxMin) == 136, "Offset mismatch for FBreakingEvent::BoundingBoxMin");
static_assert(offsetof(FBreakingEvent, BoundingBoxMax) == 160, "Offset mismatch for FBreakingEvent::BoundingBoxMax");

// /Script/ChaosCaching.CacheEventBase
// Kind: ScriptStruct; super: none
struct FCacheEventBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosCaching.CacheEventTrack
// Kind: ScriptStruct; super: none
struct FCacheEventTrack
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Struct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Timestamps; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCacheEventTrack, Name) == 0, "Offset mismatch for FCacheEventTrack::Name");
static_assert(offsetof(FCacheEventTrack, Struct) == 8, "Offset mismatch for FCacheEventTrack::Struct");
static_assert(offsetof(FCacheEventTrack, Timestamps) == 16, "Offset mismatch for FCacheEventTrack::Timestamps");

// /Script/ChaosCaching.CacheSpawnableTemplate
// Kind: ScriptStruct; super: none
struct FCacheSpawnableTemplate
{
public:
    void* DuplicatedTemplate; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t InitialTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t ComponentTransform[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCacheSpawnableTemplate, DuplicatedTemplate) == 0, "Offset mismatch for FCacheSpawnableTemplate::DuplicatedTemplate");
static_assert(offsetof(FCacheSpawnableTemplate, InitialTransform) == 16, "Offset mismatch for FCacheSpawnableTemplate::InitialTransform");
static_assert(offsetof(FCacheSpawnableTemplate, ComponentTransform) == 112, "Offset mismatch for FCacheSpawnableTemplate::ComponentTransform");

// /Script/ChaosCaching.CollisionEvent
// Kind: ScriptStruct; super: CacheEventBase
struct FCollisionEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AccumulatedImpulse[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity1[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity2[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t DeltaVelocity1[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t DeltaVelocity2[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity1[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity2[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    float Mass1; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float Mass2; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float PenetrationDepth; // 0x00E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCollisionEvent, Location) == 8, "Offset mismatch for FCollisionEvent::Location");
static_assert(offsetof(FCollisionEvent, AccumulatedImpulse) == 32, "Offset mismatch for FCollisionEvent::AccumulatedImpulse");
static_assert(offsetof(FCollisionEvent, Normal) == 56, "Offset mismatch for FCollisionEvent::Normal");
static_assert(offsetof(FCollisionEvent, Velocity1) == 80, "Offset mismatch for FCollisionEvent::Velocity1");
static_assert(offsetof(FCollisionEvent, Velocity2) == 104, "Offset mismatch for FCollisionEvent::Velocity2");
static_assert(offsetof(FCollisionEvent, DeltaVelocity1) == 128, "Offset mismatch for FCollisionEvent::DeltaVelocity1");
static_assert(offsetof(FCollisionEvent, DeltaVelocity2) == 152, "Offset mismatch for FCollisionEvent::DeltaVelocity2");
static_assert(offsetof(FCollisionEvent, AngularVelocity1) == 176, "Offset mismatch for FCollisionEvent::AngularVelocity1");
static_assert(offsetof(FCollisionEvent, AngularVelocity2) == 200, "Offset mismatch for FCollisionEvent::AngularVelocity2");
static_assert(offsetof(FCollisionEvent, Mass1) == 224, "Offset mismatch for FCollisionEvent::Mass1");
static_assert(offsetof(FCollisionEvent, Mass2) == 228, "Offset mismatch for FCollisionEvent::Mass2");
static_assert(offsetof(FCollisionEvent, PenetrationDepth) == 232, "Offset mismatch for FCollisionEvent::PenetrationDepth");

// /Script/ChaosCaching.CompressedRichCurves
// Kind: ScriptStruct; super: none
struct FCompressedRichCurves
{
public:
    TArray<void*> CompressedRichCurves; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCompressedRichCurves, CompressedRichCurves) == 0, "Offset mismatch for FCompressedRichCurves::CompressedRichCurves");

// /Script/ChaosCaching.EnableStateEvent
// Kind: ScriptStruct; super: CacheEventBase
struct FEnableStateEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Index; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnable; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEnableStateEvent, Index) == 8, "Offset mismatch for FEnableStateEvent::Index");
static_assert(offsetof(FEnableStateEvent, bEnable) == 12, "Offset mismatch for FEnableStateEvent::bEnable");

// /Script/ChaosCaching.MovieSceneChaosCacheParams
// Kind: ScriptStruct; super: MovieSceneBaseCacheParams
struct FMovieSceneChaosCacheParams
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* CacheCollection; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneChaosCacheParams, CacheCollection) == 32, "Offset mismatch for FMovieSceneChaosCacheParams::CacheCollection");

// /Script/ChaosCaching.MovieSceneChaosCacheSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneChaosCacheSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneChaosCacheSectionTemplate, Params) == 32, "Offset mismatch for FMovieSceneChaosCacheSectionTemplate::Params");

// /Script/ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
// Kind: ScriptStruct; super: MovieSceneBaseCacheSectionTemplateParameters
struct FMovieSceneChaosCacheSectionTemplateParameters
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ChaosCacheParams[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneChaosCacheSectionTemplateParameters, ChaosCacheParams) == 8, "Offset mismatch for FMovieSceneChaosCacheSectionTemplateParameters::ChaosCacheParams");

// /Script/ChaosCaching.ObservedComponent
// Kind: ScriptStruct; super: none
struct FObservedComponent
{
public:
    FName CacheName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t ComponentRef[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoftComponentRef[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t bIsSimulating; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackEnabled; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0072
    std::uint8_t USDCacheDirectory[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bHasNotifyBreaks; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FObservedComponent, CacheName) == 0, "Offset mismatch for FObservedComponent::CacheName");
static_assert(offsetof(FObservedComponent, ComponentRef) == 8, "Offset mismatch for FObservedComponent::ComponentRef");
static_assert(offsetof(FObservedComponent, SoftComponentRef) == 48, "Offset mismatch for FObservedComponent::SoftComponentRef");
static_assert(offsetof(FObservedComponent, bIsSimulating) == 112, "Offset mismatch for FObservedComponent::bIsSimulating");
static_assert(offsetof(FObservedComponent, bPlaybackEnabled) == 113, "Offset mismatch for FObservedComponent::bPlaybackEnabled");
static_assert(offsetof(FObservedComponent, USDCacheDirectory) == 120, "Offset mismatch for FObservedComponent::USDCacheDirectory");
static_assert(offsetof(FObservedComponent, bHasNotifyBreaks) == 136, "Offset mismatch for FObservedComponent::bHasNotifyBreaks");

// /Script/ChaosCaching.ParticleTransformTrack
// Kind: ScriptStruct; super: none
struct FParticleTransformTrack
{
public:
    std::uint8_t RawTransformTrack[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    float BeginOffset; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDeactivateOnEnd; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    TArray<void*> KeyTimestamps; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FParticleTransformTrack, RawTransformTrack) == 0, "Offset mismatch for FParticleTransformTrack::RawTransformTrack");
static_assert(offsetof(FParticleTransformTrack, BeginOffset) == 48, "Offset mismatch for FParticleTransformTrack::BeginOffset");
static_assert(offsetof(FParticleTransformTrack, bDeactivateOnEnd) == 52, "Offset mismatch for FParticleTransformTrack::bDeactivateOnEnd");
static_assert(offsetof(FParticleTransformTrack, KeyTimestamps) == 56, "Offset mismatch for FParticleTransformTrack::KeyTimestamps");

// /Script/ChaosCaching.PerParticleCacheData
// Kind: ScriptStruct; super: none
struct FPerParticleCacheData
{
public:
    std::uint8_t TransformData[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TMap<void*, void*> CurveData; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPerParticleCacheData, TransformData) == 0, "Offset mismatch for FPerParticleCacheData::TransformData");
static_assert(offsetof(FPerParticleCacheData, CurveData) == 72, "Offset mismatch for FPerParticleCacheData::CurveData");

// /Script/ChaosCaching.RichCurves
// Kind: ScriptStruct; super: none
struct FRichCurves
{
public:
    TArray<void*> RichCurves; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRichCurves, RichCurves) == 0, "Offset mismatch for FRichCurves::RichCurves");

// /Script/ChaosCaching.TrailingEvent
// Kind: ScriptStruct; super: CacheEventBase
struct FTrailingEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Index; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Location[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t orientation[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundingBoxMin[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t BoundingBoxMax[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTrailingEvent, Index) == 8, "Offset mismatch for FTrailingEvent::Index");
static_assert(offsetof(FTrailingEvent, Location) == 16, "Offset mismatch for FTrailingEvent::Location");
static_assert(offsetof(FTrailingEvent, orientation) == 48, "Offset mismatch for FTrailingEvent::orientation");
static_assert(offsetof(FTrailingEvent, Velocity) == 80, "Offset mismatch for FTrailingEvent::Velocity");
static_assert(offsetof(FTrailingEvent, AngularVelocity) == 104, "Offset mismatch for FTrailingEvent::AngularVelocity");
static_assert(offsetof(FTrailingEvent, BoundingBoxMin) == 128, "Offset mismatch for FTrailingEvent::BoundingBoxMin");
static_assert(offsetof(FTrailingEvent, BoundingBoxMax) == 152, "Offset mismatch for FTrailingEvent::BoundingBoxMax");

// /Script/ChaosCaching.ChaosCache
// Kind: Class; super: Object
class UChaosCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float RecordedDuration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint32_t NumRecordedFrames; // 0x002C (Size: 0x4, Type: UInt32Property)
    std::uint8_t InterpolationMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> TrackToParticle; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParticleTracks; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChannelCurveToParticle; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ChannelsTracks; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CompressedChannelsTracks; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CurveData; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> NamedTransformTracks; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::uint8_t bCompressChannels; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00A9
    float ChannelsCompressionErrorThreshold; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float ChannelsCompressionSampleRate; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00B4
    TScriptInterface<void> CacheData; // 0x00B8 (Size: 0x10, Type: InterfaceProperty)
    TMap<void*, void*> EventTracks; // 0x00C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x8]; // 0x00D8
    std::uint8_t Spawnable[0xD0]; // 0x00E0 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AdapterGuid[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    std::int32_t Version; // 0x01C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UChaosCache, RecordedDuration) == 40, "Offset mismatch for UChaosCache::RecordedDuration");
static_assert(offsetof(UChaosCache, NumRecordedFrames) == 44, "Offset mismatch for UChaosCache::NumRecordedFrames");
static_assert(offsetof(UChaosCache, InterpolationMode) == 48, "Offset mismatch for UChaosCache::InterpolationMode");
static_assert(offsetof(UChaosCache, TrackToParticle) == 56, "Offset mismatch for UChaosCache::TrackToParticle");
static_assert(offsetof(UChaosCache, ParticleTracks) == 72, "Offset mismatch for UChaosCache::ParticleTracks");
static_assert(offsetof(UChaosCache, ChannelCurveToParticle) == 88, "Offset mismatch for UChaosCache::ChannelCurveToParticle");
static_assert(offsetof(UChaosCache, ChannelsTracks) == 104, "Offset mismatch for UChaosCache::ChannelsTracks");
static_assert(offsetof(UChaosCache, CompressedChannelsTracks) == 120, "Offset mismatch for UChaosCache::CompressedChannelsTracks");
static_assert(offsetof(UChaosCache, CurveData) == 136, "Offset mismatch for UChaosCache::CurveData");
static_assert(offsetof(UChaosCache, NamedTransformTracks) == 152, "Offset mismatch for UChaosCache::NamedTransformTracks");
static_assert(offsetof(UChaosCache, bCompressChannels) == 168, "Offset mismatch for UChaosCache::bCompressChannels");
static_assert(offsetof(UChaosCache, ChannelsCompressionErrorThreshold) == 172, "Offset mismatch for UChaosCache::ChannelsCompressionErrorThreshold");
static_assert(offsetof(UChaosCache, ChannelsCompressionSampleRate) == 176, "Offset mismatch for UChaosCache::ChannelsCompressionSampleRate");
static_assert(offsetof(UChaosCache, CacheData) == 184, "Offset mismatch for UChaosCache::CacheData");
static_assert(offsetof(UChaosCache, EventTracks) == 200, "Offset mismatch for UChaosCache::EventTracks");
static_assert(offsetof(UChaosCache, Spawnable) == 224, "Offset mismatch for UChaosCache::Spawnable");
static_assert(offsetof(UChaosCache, AdapterGuid) == 432, "Offset mismatch for UChaosCache::AdapterGuid");
static_assert(offsetof(UChaosCache, Version) == 448, "Offset mismatch for UChaosCache::Version");

// /Script/ChaosCaching.ChaosCacheCollection
// Kind: Class; super: Object
class UChaosCacheCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Caches; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InterpolationMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UChaosCacheCollection, Caches) == 40, "Offset mismatch for UChaosCacheCollection::Caches");
static_assert(offsetof(UChaosCacheCollection, InterpolationMode) == 56, "Offset mismatch for UChaosCacheCollection::InterpolationMode");

// /Script/ChaosCaching.ChaosCacheData
// Kind: Class; super: Interface
class UChaosCacheData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ChaosCaching.ChaosCacheManager
// Kind: Class; super: Actor
class UChaosCacheManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CacheCollection; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCreateNewCacheCollectionAssetOnRecord; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CacheMode; // 0x0279 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartMode; // 0x027A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x027B
    float StartTime; // 0x027C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartOnBeginPlay; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplayEventsInStaticPoseMode; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0282
    TArray<void*> ObservedComponents; // 0x0288 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChaosCacheManager, CacheCollection) == 624, "Offset mismatch for UChaosCacheManager::CacheCollection");
static_assert(offsetof(UChaosCacheManager, bCreateNewCacheCollectionAssetOnRecord) == 632, "Offset mismatch for UChaosCacheManager::bCreateNewCacheCollectionAssetOnRecord");
static_assert(offsetof(UChaosCacheManager, CacheMode) == 633, "Offset mismatch for UChaosCacheManager::CacheMode");
static_assert(offsetof(UChaosCacheManager, StartMode) == 634, "Offset mismatch for UChaosCacheManager::StartMode");
static_assert(offsetof(UChaosCacheManager, StartTime) == 636, "Offset mismatch for UChaosCacheManager::StartTime");
static_assert(offsetof(UChaosCacheManager, bStartOnBeginPlay) == 640, "Offset mismatch for UChaosCacheManager::bStartOnBeginPlay");
static_assert(offsetof(UChaosCacheManager, bReplayEventsInStaticPoseMode) == 641, "Offset mismatch for UChaosCacheManager::bReplayEventsInStaticPoseMode");
static_assert(offsetof(UChaosCacheManager, ObservedComponents) == 648, "Offset mismatch for UChaosCacheManager::ObservedComponents");

// /Script/ChaosCaching.ChaosCachePlayer
// Kind: Class; super: ChaosCacheManager
class UChaosCachePlayer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* CacheCollection; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCreateNewCacheCollectionAssetOnRecord; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CacheMode; // 0x0279 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartMode; // 0x027A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x027B
    float StartTime; // 0x027C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartOnBeginPlay; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplayEventsInStaticPoseMode; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0282
    TArray<void*> ObservedComponents; // 0x0288 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChaosCachePlayer, CacheCollection) == 624, "Offset mismatch for UChaosCachePlayer::CacheCollection");
static_assert(offsetof(UChaosCachePlayer, bCreateNewCacheCollectionAssetOnRecord) == 632, "Offset mismatch for UChaosCachePlayer::bCreateNewCacheCollectionAssetOnRecord");
static_assert(offsetof(UChaosCachePlayer, CacheMode) == 633, "Offset mismatch for UChaosCachePlayer::CacheMode");
static_assert(offsetof(UChaosCachePlayer, StartMode) == 634, "Offset mismatch for UChaosCachePlayer::StartMode");
static_assert(offsetof(UChaosCachePlayer, StartTime) == 636, "Offset mismatch for UChaosCachePlayer::StartTime");
static_assert(offsetof(UChaosCachePlayer, bStartOnBeginPlay) == 640, "Offset mismatch for UChaosCachePlayer::bStartOnBeginPlay");
static_assert(offsetof(UChaosCachePlayer, bReplayEventsInStaticPoseMode) == 641, "Offset mismatch for UChaosCachePlayer::bReplayEventsInStaticPoseMode");
static_assert(offsetof(UChaosCachePlayer, ObservedComponents) == 648, "Offset mismatch for UChaosCachePlayer::ObservedComponents");

// /Script/ChaosCaching.MovieSceneChaosCacheSection
// Kind: Class; super: MovieSceneBaseCacheSection
class UMovieSceneChaosCacheSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneChaosCacheSection, Params) == 328, "Offset mismatch for UMovieSceneChaosCacheSection::Params");

// /Script/ChaosCaching.MovieSceneChaosCacheTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneChaosCacheTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> AnimationSections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneChaosCacheTrack, AnimationSections) == 256, "Offset mismatch for UMovieSceneChaosCacheTrack::AnimationSections");

// /Script/ChaosCaching.MovieSceneSpawnableChaosCacheBinding
// Kind: Class; super: MovieSceneSpawnableActorBinding
class UMovieSceneSpawnableChaosCacheBinding
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ActorTemplate; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSpawnableChaosCacheBinding, ActorTemplate) == 56, "Offset mismatch for UMovieSceneSpawnableChaosCacheBinding::ActorTemplate");
