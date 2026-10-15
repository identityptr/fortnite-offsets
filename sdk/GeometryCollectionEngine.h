/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryCollectionEngine
 */
#pragma once
#include "Basic.h"

// /Script/GeometryCollectionEngine.ChaosBreakingEventData
// Kind: ScriptStruct; super: none
struct FChaosBreakingEventData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChaosBreakingEventData, Location) == 0, "Offset mismatch for FChaosBreakingEventData::Location");
static_assert(offsetof(FChaosBreakingEventData, Velocity) == 24, "Offset mismatch for FChaosBreakingEventData::Velocity");
static_assert(offsetof(FChaosBreakingEventData, Mass) == 48, "Offset mismatch for FChaosBreakingEventData::Mass");

// /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Kind: ScriptStruct; super: none
struct FChaosBreakingEventRequestSettings
{
public:
    std::int32_t MaxNumberOfResults; // 0x0000 (Size: 0x4, Type: IntProperty)
    float MinRadius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinMass; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SortMethod; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosBreakingEventRequestSettings, MaxNumberOfResults) == 0, "Offset mismatch for FChaosBreakingEventRequestSettings::MaxNumberOfResults");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MinRadius) == 4, "Offset mismatch for FChaosBreakingEventRequestSettings::MinRadius");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MinSpeed) == 8, "Offset mismatch for FChaosBreakingEventRequestSettings::MinSpeed");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MinMass) == 12, "Offset mismatch for FChaosBreakingEventRequestSettings::MinMass");
static_assert(offsetof(FChaosBreakingEventRequestSettings, MaxDistance) == 16, "Offset mismatch for FChaosBreakingEventRequestSettings::MaxDistance");
static_assert(offsetof(FChaosBreakingEventRequestSettings, SortMethod) == 20, "Offset mismatch for FChaosBreakingEventRequestSettings::SortMethod");

// /Script/GeometryCollectionEngine.ChaosCollisionEventData
// Kind: ScriptStruct; super: none
struct FChaosCollisionEventData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity1[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity2[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float Mass1; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float Mass2; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Impulse[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChaosCollisionEventData, Location) == 0, "Offset mismatch for FChaosCollisionEventData::Location");
static_assert(offsetof(FChaosCollisionEventData, Normal) == 24, "Offset mismatch for FChaosCollisionEventData::Normal");
static_assert(offsetof(FChaosCollisionEventData, Velocity1) == 48, "Offset mismatch for FChaosCollisionEventData::Velocity1");
static_assert(offsetof(FChaosCollisionEventData, Velocity2) == 72, "Offset mismatch for FChaosCollisionEventData::Velocity2");
static_assert(offsetof(FChaosCollisionEventData, Mass1) == 96, "Offset mismatch for FChaosCollisionEventData::Mass1");
static_assert(offsetof(FChaosCollisionEventData, Mass2) == 100, "Offset mismatch for FChaosCollisionEventData::Mass2");
static_assert(offsetof(FChaosCollisionEventData, Impulse) == 104, "Offset mismatch for FChaosCollisionEventData::Impulse");

// /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Kind: ScriptStruct; super: none
struct FChaosCollisionEventRequestSettings
{
public:
    std::int32_t MaxNumberResults; // 0x0000 (Size: 0x4, Type: IntProperty)
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinImpulse; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SortMethod; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosCollisionEventRequestSettings, MaxNumberResults) == 0, "Offset mismatch for FChaosCollisionEventRequestSettings::MaxNumberResults");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MinMass) == 4, "Offset mismatch for FChaosCollisionEventRequestSettings::MinMass");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MinSpeed) == 8, "Offset mismatch for FChaosCollisionEventRequestSettings::MinSpeed");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MinImpulse) == 12, "Offset mismatch for FChaosCollisionEventRequestSettings::MinImpulse");
static_assert(offsetof(FChaosCollisionEventRequestSettings, MaxDistance) == 16, "Offset mismatch for FChaosCollisionEventRequestSettings::MaxDistance");
static_assert(offsetof(FChaosCollisionEventRequestSettings, SortMethod) == 20, "Offset mismatch for FChaosCollisionEventRequestSettings::SortMethod");

// /Script/GeometryCollectionEngine.ChaosRemovalEventData
// Kind: ScriptStruct; super: none
struct FChaosRemovalEventData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::int32_t ParticleIndex; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChaosRemovalEventData, Location) == 0, "Offset mismatch for FChaosRemovalEventData::Location");
static_assert(offsetof(FChaosRemovalEventData, Mass) == 24, "Offset mismatch for FChaosRemovalEventData::Mass");
static_assert(offsetof(FChaosRemovalEventData, ParticleIndex) == 28, "Offset mismatch for FChaosRemovalEventData::ParticleIndex");

// /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
// Kind: ScriptStruct; super: none
struct FChaosRemovalEventRequestSettings
{
public:
    std::int32_t MaxNumberOfResults; // 0x0000 (Size: 0x4, Type: IntProperty)
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SortMethod; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosRemovalEventRequestSettings, MaxNumberOfResults) == 0, "Offset mismatch for FChaosRemovalEventRequestSettings::MaxNumberOfResults");
static_assert(offsetof(FChaosRemovalEventRequestSettings, MinMass) == 4, "Offset mismatch for FChaosRemovalEventRequestSettings::MinMass");
static_assert(offsetof(FChaosRemovalEventRequestSettings, MaxDistance) == 8, "Offset mismatch for FChaosRemovalEventRequestSettings::MaxDistance");
static_assert(offsetof(FChaosRemovalEventRequestSettings, SortMethod) == 12, "Offset mismatch for FChaosRemovalEventRequestSettings::SortMethod");

// /Script/GeometryCollectionEngine.ChaosTrailingEventData
// Kind: ScriptStruct; super: none
struct FChaosTrailingEventData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t ParticleIndex; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChaosTrailingEventData, Location) == 0, "Offset mismatch for FChaosTrailingEventData::Location");
static_assert(offsetof(FChaosTrailingEventData, Velocity) == 24, "Offset mismatch for FChaosTrailingEventData::Velocity");
static_assert(offsetof(FChaosTrailingEventData, AngularVelocity) == 48, "Offset mismatch for FChaosTrailingEventData::AngularVelocity");
static_assert(offsetof(FChaosTrailingEventData, Mass) == 72, "Offset mismatch for FChaosTrailingEventData::Mass");
static_assert(offsetof(FChaosTrailingEventData, ParticleIndex) == 76, "Offset mismatch for FChaosTrailingEventData::ParticleIndex");

// /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Kind: ScriptStruct; super: none
struct FChaosTrailingEventRequestSettings
{
public:
    std::int32_t MaxNumberOfResults; // 0x0000 (Size: 0x4, Type: IntProperty)
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinAngularSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SortMethod; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FChaosTrailingEventRequestSettings, MaxNumberOfResults) == 0, "Offset mismatch for FChaosTrailingEventRequestSettings::MaxNumberOfResults");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MinMass) == 4, "Offset mismatch for FChaosTrailingEventRequestSettings::MinMass");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MinSpeed) == 8, "Offset mismatch for FChaosTrailingEventRequestSettings::MinSpeed");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MinAngularSpeed) == 12, "Offset mismatch for FChaosTrailingEventRequestSettings::MinAngularSpeed");
static_assert(offsetof(FChaosTrailingEventRequestSettings, MaxDistance) == 16, "Offset mismatch for FChaosTrailingEventRequestSettings::MaxDistance");
static_assert(offsetof(FChaosTrailingEventRequestSettings, SortMethod) == 20, "Offset mismatch for FChaosTrailingEventRequestSettings::SortMethod");

// /Script/GeometryCollectionEngine.GeomComponentCacheParameters
// Kind: ScriptStruct; super: none
struct FGeomComponentCacheParameters
{
public:
    std::uint8_t CacheMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* TargetCache; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float ReverseCacheBeginTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SaveCollisionData; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DoGenerateCollisionData; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::int32_t CollisionDataSizeMax; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t DoCollisionDataSpatialHash; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x001D
    float CollisionDataSpatialHashRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxCollisionPerCell; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t SaveBreakingData; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DoGenerateBreakingData; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x002A
    std::int32_t BreakingDataSizeMax; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t DoBreakingDataSpatialHash; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0031
    float BreakingDataSpatialHashRadius; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxBreakingPerCell; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t SaveTrailingData; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t DoGenerateTrailingData; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x003E
    std::int32_t TrailingDataSizeMax; // 0x0040 (Size: 0x4, Type: IntProperty)
    float TrailingMinSpeedThreshold; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float TrailingMinVolumeThreshold; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeomComponentCacheParameters, CacheMode) == 0, "Offset mismatch for FGeomComponentCacheParameters::CacheMode");
static_assert(offsetof(FGeomComponentCacheParameters, TargetCache) == 8, "Offset mismatch for FGeomComponentCacheParameters::TargetCache");
static_assert(offsetof(FGeomComponentCacheParameters, ReverseCacheBeginTime) == 16, "Offset mismatch for FGeomComponentCacheParameters::ReverseCacheBeginTime");
static_assert(offsetof(FGeomComponentCacheParameters, SaveCollisionData) == 20, "Offset mismatch for FGeomComponentCacheParameters::SaveCollisionData");
static_assert(offsetof(FGeomComponentCacheParameters, DoGenerateCollisionData) == 21, "Offset mismatch for FGeomComponentCacheParameters::DoGenerateCollisionData");
static_assert(offsetof(FGeomComponentCacheParameters, CollisionDataSizeMax) == 24, "Offset mismatch for FGeomComponentCacheParameters::CollisionDataSizeMax");
static_assert(offsetof(FGeomComponentCacheParameters, DoCollisionDataSpatialHash) == 28, "Offset mismatch for FGeomComponentCacheParameters::DoCollisionDataSpatialHash");
static_assert(offsetof(FGeomComponentCacheParameters, CollisionDataSpatialHashRadius) == 32, "Offset mismatch for FGeomComponentCacheParameters::CollisionDataSpatialHashRadius");
static_assert(offsetof(FGeomComponentCacheParameters, MaxCollisionPerCell) == 36, "Offset mismatch for FGeomComponentCacheParameters::MaxCollisionPerCell");
static_assert(offsetof(FGeomComponentCacheParameters, SaveBreakingData) == 40, "Offset mismatch for FGeomComponentCacheParameters::SaveBreakingData");
static_assert(offsetof(FGeomComponentCacheParameters, DoGenerateBreakingData) == 41, "Offset mismatch for FGeomComponentCacheParameters::DoGenerateBreakingData");
static_assert(offsetof(FGeomComponentCacheParameters, BreakingDataSizeMax) == 44, "Offset mismatch for FGeomComponentCacheParameters::BreakingDataSizeMax");
static_assert(offsetof(FGeomComponentCacheParameters, DoBreakingDataSpatialHash) == 48, "Offset mismatch for FGeomComponentCacheParameters::DoBreakingDataSpatialHash");
static_assert(offsetof(FGeomComponentCacheParameters, BreakingDataSpatialHashRadius) == 52, "Offset mismatch for FGeomComponentCacheParameters::BreakingDataSpatialHashRadius");
static_assert(offsetof(FGeomComponentCacheParameters, MaxBreakingPerCell) == 56, "Offset mismatch for FGeomComponentCacheParameters::MaxBreakingPerCell");
static_assert(offsetof(FGeomComponentCacheParameters, SaveTrailingData) == 60, "Offset mismatch for FGeomComponentCacheParameters::SaveTrailingData");
static_assert(offsetof(FGeomComponentCacheParameters, DoGenerateTrailingData) == 61, "Offset mismatch for FGeomComponentCacheParameters::DoGenerateTrailingData");
static_assert(offsetof(FGeomComponentCacheParameters, TrailingDataSizeMax) == 64, "Offset mismatch for FGeomComponentCacheParameters::TrailingDataSizeMax");
static_assert(offsetof(FGeomComponentCacheParameters, TrailingMinSpeedThreshold) == 68, "Offset mismatch for FGeomComponentCacheParameters::TrailingMinSpeedThreshold");
static_assert(offsetof(FGeomComponentCacheParameters, TrailingMinVolumeThreshold) == 72, "Offset mismatch for FGeomComponentCacheParameters::TrailingMinVolumeThreshold");

// /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
// Kind: ScriptStruct; super: none
struct FGeometryCollectionAutoInstanceMesh
{
public:
    void* Mesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Materials; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumInstances; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    TArray<void*> CustomData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, Mesh) == 0, "Offset mismatch for FGeometryCollectionAutoInstanceMesh::Mesh");
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, Materials) == 8, "Offset mismatch for FGeometryCollectionAutoInstanceMesh::Materials");
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, NumInstances) == 24, "Offset mismatch for FGeometryCollectionAutoInstanceMesh::NumInstances");
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, CustomData) == 32, "Offset mismatch for FGeometryCollectionAutoInstanceMesh::CustomData");

// /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionCollisionParticleData
{
public:
    float CollisionParticlesFraction; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaximumCollisionParticles; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryCollectionCollisionParticleData, CollisionParticlesFraction) == 0, "Offset mismatch for FGeometryCollectionCollisionParticleData::CollisionParticlesFraction");
static_assert(offsetof(FGeometryCollectionCollisionParticleData, MaximumCollisionParticles) == 4, "Offset mismatch for FGeometryCollectionCollisionParticleData::MaximumCollisionParticles");

// /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionCollisionTypeData
{
public:
    std::uint8_t CollisionType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ImplicitType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t LevelSet[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t CollisionParticles[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    float CollisionObjectReductionPercentage; // 0x001C (Size: 0x4, Type: FloatProperty)
    float CollisionMarginFraction; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionType) == 0, "Offset mismatch for FGeometryCollectionCollisionTypeData::CollisionType");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, ImplicitType) == 1, "Offset mismatch for FGeometryCollectionCollisionTypeData::ImplicitType");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, LevelSet) == 4, "Offset mismatch for FGeometryCollectionCollisionTypeData::LevelSet");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionParticles) == 20, "Offset mismatch for FGeometryCollectionCollisionTypeData::CollisionParticles");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionObjectReductionPercentage) == 28, "Offset mismatch for FGeometryCollectionCollisionTypeData::CollisionObjectReductionPercentage");
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionMarginFraction) == 32, "Offset mismatch for FGeometryCollectionCollisionTypeData::CollisionMarginFraction");

// /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionDamagePropagationData
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float BreakDamagePropagationFactor; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ShockDamagePropagationFactor; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGeometryCollectionDamagePropagationData, bEnabled) == 0, "Offset mismatch for FGeometryCollectionDamagePropagationData::bEnabled");
static_assert(offsetof(FGeometryCollectionDamagePropagationData, BreakDamagePropagationFactor) == 4, "Offset mismatch for FGeometryCollectionDamagePropagationData::BreakDamagePropagationFactor");
static_assert(offsetof(FGeometryCollectionDamagePropagationData, ShockDamagePropagationFactor) == 8, "Offset mismatch for FGeometryCollectionDamagePropagationData::ShockDamagePropagationFactor");

// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Kind: ScriptStruct; super: none
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
public:
    std::int32_t ID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Solver; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* GeometryCollection; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, ID) == 0, "Offset mismatch for FGeometryCollectionDebugDrawActorSelectedRigidBody::ID");
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver) == 8, "Offset mismatch for FGeometryCollectionDebugDrawActorSelectedRigidBody::Solver");
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection) == 16, "Offset mismatch for FGeometryCollectionDebugDrawActorSelectedRigidBody::GeometryCollection");

// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Kind: ScriptStruct; super: none
struct FGeometryCollectionDebugDrawWarningMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
// Kind: ScriptStruct; super: none
struct FGeometryCollectionEmbeddedExemplar
{
public:
    std::uint8_t StaticMeshExemplar[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float StartCullDistance; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float EndCullDistance; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::int32_t InstanceCount; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, StaticMeshExemplar) == 0, "Offset mismatch for FGeometryCollectionEmbeddedExemplar::StaticMeshExemplar");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, StartCullDistance) == 24, "Offset mismatch for FGeometryCollectionEmbeddedExemplar::StartCullDistance");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, EndCullDistance) == 28, "Offset mismatch for FGeometryCollectionEmbeddedExemplar::EndCullDistance");
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, InstanceCount) == 32, "Offset mismatch for FGeometryCollectionEmbeddedExemplar::InstanceCount");

// /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionLevelSetData
{
public:
    std::int32_t MinLevelSetResolution; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxLevelSetResolution; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MinClusterLevelSetResolution; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxClusterLevelSetResolution; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryCollectionLevelSetData, MinLevelSetResolution) == 0, "Offset mismatch for FGeometryCollectionLevelSetData::MinLevelSetResolution");
static_assert(offsetof(FGeometryCollectionLevelSetData, MaxLevelSetResolution) == 4, "Offset mismatch for FGeometryCollectionLevelSetData::MaxLevelSetResolution");
static_assert(offsetof(FGeometryCollectionLevelSetData, MinClusterLevelSetResolution) == 8, "Offset mismatch for FGeometryCollectionLevelSetData::MinClusterLevelSetResolution");
static_assert(offsetof(FGeometryCollectionLevelSetData, MaxClusterLevelSetResolution) == 12, "Offset mismatch for FGeometryCollectionLevelSetData::MaxClusterLevelSetResolution");

// /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionProxyMeshData
{
public:
    TArray<void*> ProxyMeshes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshTransforms; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshOverrideMaterials; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionProxyMeshData, ProxyMeshes) == 0, "Offset mismatch for FGeometryCollectionProxyMeshData::ProxyMeshes");
static_assert(offsetof(FGeometryCollectionProxyMeshData, MeshTransforms) == 16, "Offset mismatch for FGeometryCollectionProxyMeshData::MeshTransforms");
static_assert(offsetof(FGeometryCollectionProxyMeshData, MeshOverrideMaterials) == 32, "Offset mismatch for FGeometryCollectionProxyMeshData::MeshOverrideMaterials");

// /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshMaterials
// Kind: ScriptStruct; super: none
struct FGeometryCollectionProxyMeshMaterials
{
public:
    TArray<void*> Materials; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGeometryCollectionProxyMeshMaterials, Materials) == 0, "Offset mismatch for FGeometryCollectionProxyMeshMaterials::Materials");

// /Script/GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
// Kind: ScriptStruct; super: none
struct FGeometryCollectionRenderResourceSizeInfo
{
public:
    std::uint64_t MeshResourcesSize; // 0x0000 (Size: 0x8, Type: UInt64Property)
    std::uint64_t NaniteResourcesSize; // 0x0008 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FGeometryCollectionRenderResourceSizeInfo, MeshResourcesSize) == 0, "Offset mismatch for FGeometryCollectionRenderResourceSizeInfo::MeshResourcesSize");
static_assert(offsetof(FGeometryCollectionRenderResourceSizeInfo, NaniteResourcesSize) == 8, "Offset mismatch for FGeometryCollectionRenderResourceSizeInfo::NaniteResourcesSize");

// /Script/GeometryCollectionEngine.GeometryCollectionRepData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionRepData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionRepDynamicData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionRepDynamicData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionRepStateData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionRepStateData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Kind: ScriptStruct; super: none
struct FGeometryCollectionSizeSpecificData
{
public:
    float MaxSize; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> CollisionShapes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DamageThreshold; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGeometryCollectionSizeSpecificData, MaxSize) == 0, "Offset mismatch for FGeometryCollectionSizeSpecificData::MaxSize");
static_assert(offsetof(FGeometryCollectionSizeSpecificData, CollisionShapes) == 8, "Offset mismatch for FGeometryCollectionSizeSpecificData::CollisionShapes");
static_assert(offsetof(FGeometryCollectionSizeSpecificData, DamageThreshold) == 24, "Offset mismatch for FGeometryCollectionSizeSpecificData::DamageThreshold");

// /Script/GeometryCollectionEngine.GeometryCollectionSource
// Kind: ScriptStruct; super: none
struct FGeometryCollectionSource
{
public:
    std::uint8_t SourceGeometryObject[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocalTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    TArray<void*> SourceMaterial; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstanceCustomData; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAddInternalMaterials; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplitComponents; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetInternalFromMaterialIndex; // 0x00A2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGeometryCollectionSource, SourceGeometryObject) == 0, "Offset mismatch for FGeometryCollectionSource::SourceGeometryObject");
static_assert(offsetof(FGeometryCollectionSource, LocalTransform) == 32, "Offset mismatch for FGeometryCollectionSource::LocalTransform");
static_assert(offsetof(FGeometryCollectionSource, SourceMaterial) == 128, "Offset mismatch for FGeometryCollectionSource::SourceMaterial");
static_assert(offsetof(FGeometryCollectionSource, InstanceCustomData) == 144, "Offset mismatch for FGeometryCollectionSource::InstanceCustomData");
static_assert(offsetof(FGeometryCollectionSource, bAddInternalMaterials) == 160, "Offset mismatch for FGeometryCollectionSource::bAddInternalMaterials");
static_assert(offsetof(FGeometryCollectionSource, bSplitComponents) == 161, "Offset mismatch for FGeometryCollectionSource::bSplitComponents");
static_assert(offsetof(FGeometryCollectionSource, bSetInternalFromMaterialIndex) == 162, "Offset mismatch for FGeometryCollectionSource::bSetInternalFromMaterialIndex");

// /Script/GeometryCollectionEngine.ChaosDestructionListener
// Kind: Class; super: SceneComponent
class UChaosDestructionListener
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t bIsBreakingEventListeningEnabled; // 0x0240 (Size: 0x1, Type: BoolProperty)
    // 0x0240 BoolProperty bIsCollisionEventListeningEnabled (shared storage)
    // 0x0240 BoolProperty bIsRemovalEventListeningEnabled (shared storage)
    // 0x0240 BoolProperty bIsTrailingEventListeningEnabled (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0241
    std::uint8_t CollisionEventRequestSettings[0x18]; // 0x0244 (Size: 0x18, Type: StructProperty)
    std::uint8_t BreakingEventRequestSettings[0x18]; // 0x025C (Size: 0x18, Type: StructProperty)
    std::uint8_t TrailingEventRequestSettings[0x18]; // 0x0274 (Size: 0x18, Type: StructProperty)
    std::uint8_t RemovalEventRequestSettings[0x14]; // 0x028C (Size: 0x14, Type: StructProperty)
    std::uint8_t ChaosSolverActors[0x10]; // 0x02A0 (Size: 0x10, Type: SetProperty)
    std::uint8_t GeometryCollectionActors[0x10]; // 0x02B0 (Size: 0x10, Type: SetProperty)
    FMulticastInlineDelegate OnCollisionEvents; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBreakingEvents; // 0x02D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTrailingEvents; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRemovalEvents; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UChaosDestructionListener, bIsBreakingEventListeningEnabled) == 576, "Offset mismatch for UChaosDestructionListener::bIsBreakingEventListeningEnabled");
static_assert(offsetof(UChaosDestructionListener, CollisionEventRequestSettings) == 580, "Offset mismatch for UChaosDestructionListener::CollisionEventRequestSettings");
static_assert(offsetof(UChaosDestructionListener, BreakingEventRequestSettings) == 604, "Offset mismatch for UChaosDestructionListener::BreakingEventRequestSettings");
static_assert(offsetof(UChaosDestructionListener, TrailingEventRequestSettings) == 628, "Offset mismatch for UChaosDestructionListener::TrailingEventRequestSettings");
static_assert(offsetof(UChaosDestructionListener, RemovalEventRequestSettings) == 652, "Offset mismatch for UChaosDestructionListener::RemovalEventRequestSettings");
static_assert(offsetof(UChaosDestructionListener, ChaosSolverActors) == 672, "Offset mismatch for UChaosDestructionListener::ChaosSolverActors");
static_assert(offsetof(UChaosDestructionListener, GeometryCollectionActors) == 688, "Offset mismatch for UChaosDestructionListener::GeometryCollectionActors");
static_assert(offsetof(UChaosDestructionListener, OnCollisionEvents) == 704, "Offset mismatch for UChaosDestructionListener::OnCollisionEvents");
static_assert(offsetof(UChaosDestructionListener, OnBreakingEvents) == 720, "Offset mismatch for UChaosDestructionListener::OnBreakingEvents");
static_assert(offsetof(UChaosDestructionListener, OnTrailingEvents) == 736, "Offset mismatch for UChaosDestructionListener::OnTrailingEvents");
static_assert(offsetof(UChaosDestructionListener, OnRemovalEvents) == 752, "Offset mismatch for UChaosDestructionListener::OnRemovalEvents");

// /Script/GeometryCollectionEngine.GeometryCollection
// Kind: Class; super: Object
class UGeometryCollection
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t EnableClustering; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::int32_t ClusterGroupIndex; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxClusterLevel; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t DamageModel; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    TArray<void*> DamageThreshold; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseSizeSpecificDamageThreshold; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMaterialDamageModifiers; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PerClusterOnlyDamageThreshold; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0083
    std::uint8_t DamagePropagationData[0xC]; // 0x0084 (Size: 0xC, Type: StructProperty)
    std::uint8_t ClusterConnectionType; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0091
    float ConnectionGraphBoundsFilteringMargin; // 0x0094 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Materials; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EmbeddedGeometryExemplar; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseFullPrecisionUVs; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStripOnCook; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStripRenderDataOnCook; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportRayTracing; // 0x00BB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x4]; // 0x00BC
    void* CustomRendererType; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RootProxyData[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    TArray<void*> AutoInstanceMeshes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnableNanite; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableNaniteFallback; // 0x0109 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x010A
    std::uint32_t NaniteMinimumResidencyInKB; // 0x010C (Size: 0x4, Type: UInt32Property)
    std::uint8_t bConvertVertexColorsToSRGB; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0111
    void* PhysicsMaterial; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDensityFromPhysicsMaterial; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0121
    float CachedDensityFromPhysicsMaterialInGCm3; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bMassAsDensity; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0129
    float Mass; // 0x012C (Size: 0x4, Type: FloatProperty)
    float MinimumMassClamp; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bImportCollisionFromSource; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOptimizeConvexes; // 0x0135 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleOnRemoval; // 0x0136 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveOnMaxSleep; // 0x0137 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutomaticCrumblePartialClusters; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x0139
    std::uint8_t MaximumSleepTime[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    std::uint8_t RemovalDuration[0x10]; // 0x0150 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSlowMovingAsSleeping; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x0161
    float SlowMovingVelocityThreshold; // 0x0164 (Size: 0x4, Type: FloatProperty)
    TArray<void*> SizeSpecificData; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnableRemovePiecesOnFracture; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x7]; // 0x0179
    TArray<void*> RemoveOnFractureMaterials; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Overrides; // 0x0190 (Size: 0x10, Type: MapProperty)
    std::uint8_t DataflowInstance[0x50]; // 0x01A0 (Size: 0x50, Type: StructProperty)
    std::uint8_t PersistentGuid[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t StateGuid[0x10]; // 0x0200 (Size: 0x10, Type: StructProperty)
    std::int32_t RootIndex; // 0x0210 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_000D[0x4]; // 0x0214
    TArray<void*> BreadthFirstTransformIndices; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AutoInstanceTransformRemapIndices; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    std::int32_t BoneSelectedMaterialIndex; // 0x0238 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_000E[0x14]; // 0x023C
    TArray<void*> AssetUserData; // 0x0250 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGeometryCollection, EnableClustering) == 96, "Offset mismatch for UGeometryCollection::EnableClustering");
static_assert(offsetof(UGeometryCollection, ClusterGroupIndex) == 100, "Offset mismatch for UGeometryCollection::ClusterGroupIndex");
static_assert(offsetof(UGeometryCollection, MaxClusterLevel) == 104, "Offset mismatch for UGeometryCollection::MaxClusterLevel");
static_assert(offsetof(UGeometryCollection, DamageModel) == 108, "Offset mismatch for UGeometryCollection::DamageModel");
static_assert(offsetof(UGeometryCollection, DamageThreshold) == 112, "Offset mismatch for UGeometryCollection::DamageThreshold");
static_assert(offsetof(UGeometryCollection, bUseSizeSpecificDamageThreshold) == 128, "Offset mismatch for UGeometryCollection::bUseSizeSpecificDamageThreshold");
static_assert(offsetof(UGeometryCollection, bUseMaterialDamageModifiers) == 129, "Offset mismatch for UGeometryCollection::bUseMaterialDamageModifiers");
static_assert(offsetof(UGeometryCollection, PerClusterOnlyDamageThreshold) == 130, "Offset mismatch for UGeometryCollection::PerClusterOnlyDamageThreshold");
static_assert(offsetof(UGeometryCollection, DamagePropagationData) == 132, "Offset mismatch for UGeometryCollection::DamagePropagationData");
static_assert(offsetof(UGeometryCollection, ClusterConnectionType) == 144, "Offset mismatch for UGeometryCollection::ClusterConnectionType");
static_assert(offsetof(UGeometryCollection, ConnectionGraphBoundsFilteringMargin) == 148, "Offset mismatch for UGeometryCollection::ConnectionGraphBoundsFilteringMargin");
static_assert(offsetof(UGeometryCollection, Materials) == 152, "Offset mismatch for UGeometryCollection::Materials");
static_assert(offsetof(UGeometryCollection, EmbeddedGeometryExemplar) == 168, "Offset mismatch for UGeometryCollection::EmbeddedGeometryExemplar");
static_assert(offsetof(UGeometryCollection, bUseFullPrecisionUVs) == 184, "Offset mismatch for UGeometryCollection::bUseFullPrecisionUVs");
static_assert(offsetof(UGeometryCollection, bStripOnCook) == 185, "Offset mismatch for UGeometryCollection::bStripOnCook");
static_assert(offsetof(UGeometryCollection, bStripRenderDataOnCook) == 186, "Offset mismatch for UGeometryCollection::bStripRenderDataOnCook");
static_assert(offsetof(UGeometryCollection, bSupportRayTracing) == 187, "Offset mismatch for UGeometryCollection::bSupportRayTracing");
static_assert(offsetof(UGeometryCollection, CustomRendererType) == 192, "Offset mismatch for UGeometryCollection::CustomRendererType");
static_assert(offsetof(UGeometryCollection, RootProxyData) == 200, "Offset mismatch for UGeometryCollection::RootProxyData");
static_assert(offsetof(UGeometryCollection, AutoInstanceMeshes) == 248, "Offset mismatch for UGeometryCollection::AutoInstanceMeshes");
static_assert(offsetof(UGeometryCollection, EnableNanite) == 264, "Offset mismatch for UGeometryCollection::EnableNanite");
static_assert(offsetof(UGeometryCollection, bEnableNaniteFallback) == 265, "Offset mismatch for UGeometryCollection::bEnableNaniteFallback");
static_assert(offsetof(UGeometryCollection, NaniteMinimumResidencyInKB) == 268, "Offset mismatch for UGeometryCollection::NaniteMinimumResidencyInKB");
static_assert(offsetof(UGeometryCollection, bConvertVertexColorsToSRGB) == 272, "Offset mismatch for UGeometryCollection::bConvertVertexColorsToSRGB");
static_assert(offsetof(UGeometryCollection, PhysicsMaterial) == 280, "Offset mismatch for UGeometryCollection::PhysicsMaterial");
static_assert(offsetof(UGeometryCollection, bDensityFromPhysicsMaterial) == 288, "Offset mismatch for UGeometryCollection::bDensityFromPhysicsMaterial");
static_assert(offsetof(UGeometryCollection, CachedDensityFromPhysicsMaterialInGCm3) == 292, "Offset mismatch for UGeometryCollection::CachedDensityFromPhysicsMaterialInGCm3");
static_assert(offsetof(UGeometryCollection, bMassAsDensity) == 296, "Offset mismatch for UGeometryCollection::bMassAsDensity");
static_assert(offsetof(UGeometryCollection, Mass) == 300, "Offset mismatch for UGeometryCollection::Mass");
static_assert(offsetof(UGeometryCollection, MinimumMassClamp) == 304, "Offset mismatch for UGeometryCollection::MinimumMassClamp");
static_assert(offsetof(UGeometryCollection, bImportCollisionFromSource) == 308, "Offset mismatch for UGeometryCollection::bImportCollisionFromSource");
static_assert(offsetof(UGeometryCollection, bOptimizeConvexes) == 309, "Offset mismatch for UGeometryCollection::bOptimizeConvexes");
static_assert(offsetof(UGeometryCollection, bScaleOnRemoval) == 310, "Offset mismatch for UGeometryCollection::bScaleOnRemoval");
static_assert(offsetof(UGeometryCollection, bRemoveOnMaxSleep) == 311, "Offset mismatch for UGeometryCollection::bRemoveOnMaxSleep");
static_assert(offsetof(UGeometryCollection, bAutomaticCrumblePartialClusters) == 312, "Offset mismatch for UGeometryCollection::bAutomaticCrumblePartialClusters");
static_assert(offsetof(UGeometryCollection, MaximumSleepTime) == 320, "Offset mismatch for UGeometryCollection::MaximumSleepTime");
static_assert(offsetof(UGeometryCollection, RemovalDuration) == 336, "Offset mismatch for UGeometryCollection::RemovalDuration");
static_assert(offsetof(UGeometryCollection, bSlowMovingAsSleeping) == 352, "Offset mismatch for UGeometryCollection::bSlowMovingAsSleeping");
static_assert(offsetof(UGeometryCollection, SlowMovingVelocityThreshold) == 356, "Offset mismatch for UGeometryCollection::SlowMovingVelocityThreshold");
static_assert(offsetof(UGeometryCollection, SizeSpecificData) == 360, "Offset mismatch for UGeometryCollection::SizeSpecificData");
static_assert(offsetof(UGeometryCollection, EnableRemovePiecesOnFracture) == 376, "Offset mismatch for UGeometryCollection::EnableRemovePiecesOnFracture");
static_assert(offsetof(UGeometryCollection, RemoveOnFractureMaterials) == 384, "Offset mismatch for UGeometryCollection::RemoveOnFractureMaterials");
static_assert(offsetof(UGeometryCollection, Overrides) == 400, "Offset mismatch for UGeometryCollection::Overrides");
static_assert(offsetof(UGeometryCollection, DataflowInstance) == 416, "Offset mismatch for UGeometryCollection::DataflowInstance");
static_assert(offsetof(UGeometryCollection, PersistentGuid) == 496, "Offset mismatch for UGeometryCollection::PersistentGuid");
static_assert(offsetof(UGeometryCollection, StateGuid) == 512, "Offset mismatch for UGeometryCollection::StateGuid");
static_assert(offsetof(UGeometryCollection, RootIndex) == 528, "Offset mismatch for UGeometryCollection::RootIndex");
static_assert(offsetof(UGeometryCollection, BreadthFirstTransformIndices) == 536, "Offset mismatch for UGeometryCollection::BreadthFirstTransformIndices");
static_assert(offsetof(UGeometryCollection, AutoInstanceTransformRemapIndices) == 552, "Offset mismatch for UGeometryCollection::AutoInstanceTransformRemapIndices");
static_assert(offsetof(UGeometryCollection, BoneSelectedMaterialIndex) == 568, "Offset mismatch for UGeometryCollection::BoneSelectedMaterialIndex");
static_assert(offsetof(UGeometryCollection, AssetUserData) == 592, "Offset mismatch for UGeometryCollection::AssetUserData");

// /Script/GeometryCollectionEngine.GeometryCollectionActor
// Kind: Class; super: Actor
class UGeometryCollectionActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* GeometryCollectionComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* GeometryCollectionDebugDrawComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCollectionActor, GeometryCollectionComponent) == 624, "Offset mismatch for UGeometryCollectionActor::GeometryCollectionComponent");
static_assert(offsetof(UGeometryCollectionActor, GeometryCollectionDebugDrawComponent) == 632, "Offset mismatch for UGeometryCollectionActor::GeometryCollectionDebugDrawComponent");

// /Script/GeometryCollectionEngine.GeometryCollectionBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGeometryCollectionBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionCache
// Kind: Class; super: Object
class UGeometryCollectionCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t RecordedData[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* SupportedCollection; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CompatibleCollectionState[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGeometryCollectionCache, RecordedData) == 40, "Offset mismatch for UGeometryCollectionCache::RecordedData");
static_assert(offsetof(UGeometryCollectionCache, SupportedCollection) == 56, "Offset mismatch for UGeometryCollectionCache::SupportedCollection");
static_assert(offsetof(UGeometryCollectionCache, CompatibleCollectionState) == 64, "Offset mismatch for UGeometryCollectionCache::CompatibleCollectionState");

// /Script/GeometryCollectionEngine.GeometryCollectionComponent
// Kind: Class; super: MeshComponent
class UGeometryCollectionComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    void* ChaosSolverActor; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    void* RestCollection; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> InitializationFields; // 0x05E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Simulating; // 0x05F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x05F9
    std::uint8_t ObjectType; // 0x05FA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x05FB
    std::int32_t GravityGroupIndex; // 0x05FC (Size: 0x4, Type: IntProperty)
    std::int32_t OneWayInteractionLevel; // 0x0600 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDensityFromPhysicsMaterial; // 0x0604 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceMotionBlur; // 0x0605 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableClustering; // 0x0606 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0607
    std::int32_t ClusterGroupIndex; // 0x0608 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxClusterLevel; // 0x060C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSimulatedLevel; // 0x0610 (Size: 0x4, Type: IntProperty)
    std::uint8_t DamageModel; // 0x0614 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0615
    TArray<void*> DamageThreshold; // 0x0618 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseSizeSpecificDamageThreshold; // 0x0628 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMaterialDamageModifiers; // 0x0629 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x062A
    std::uint8_t DamagePropagationData[0xC]; // 0x062C (Size: 0xC, Type: StructProperty)
    std::uint8_t bEnableDamageFromCollision; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRemovalOnSleep; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRemovalOnBreak; // 0x063A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceUpdateActiveTransforms; // 0x063B (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClusterConnectionType; // 0x063C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x3]; // 0x063D
    std::int32_t CollisionGroup; // 0x0640 (Size: 0x4, Type: IntProperty)
    float CollisionSampleFraction; // 0x0644 (Size: 0x4, Type: FloatProperty)
    float LinearEtherDrag; // 0x0648 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x4]; // 0x064C
    void* PhysicalMaterial; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitialVelocityType; // 0x0658 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0659
    std::uint8_t InitialLinearVelocity[0x18]; // 0x0660 (Size: 0x18, Type: StructProperty)
    std::uint8_t InitialAngularVelocity[0x18]; // 0x0678 (Size: 0x18, Type: StructProperty)
    void* PhysicalMaterialOverride; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CacheParameters[0x50]; // 0x0698 (Size: 0x50, Type: StructProperty)
    TArray<void*> RestTransforms; // 0x06E8 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x06F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x0708 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x18]; // 0x0718
    FMulticastInlineDelegate OnChaosBreakEvent; // 0x0730 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChaosRemovalEvent; // 0x0740 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChaosCrumblingEvent; // 0x0750 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000A[0x48]; // 0x0760
    float DesiredCacheTime; // 0x07A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CachePlayback; // 0x07AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x07AD
    FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x07B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bNotifyBreaks; // 0x07C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyCollisions; // 0x07C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyTrailing; // 0x07C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyRemovals; // 0x07C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyCrumblings; // 0x07C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCrumblingEventIncludesChildren; // 0x07C5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyGlobalBreaks; // 0x07C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyGlobalCollisions; // 0x07C7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyGlobalRemovals; // 0x07C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyGlobalCrumblings; // 0x07C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGlobalCrumblingEventIncludesChildren; // 0x07CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNotifyGlobalTrailings; // 0x07CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStoreVelocities; // 0x07CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCurrentlyNavigationRelevant; // 0x07CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBoneColors; // 0x07CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateComponentTransformToRootBone; // 0x07CF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRootProxyForNavigation; // 0x07D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateNavigationInTick; // 0x07D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x1]; // 0x07D2
    std::uint8_t bEnableReplication; // 0x07D3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAbandonAfterLevel; // 0x07D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x07D5
    FName AbandonedCollisionProfileName; // 0x07D8 (Size: 0x8, Type: NameProperty)
    void* ISMPool; // 0x07E0 (Size: 0x8, Type: ObjectProperty)
    void* CustomRendererType; // 0x07E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bOverrideCustomRenderer; // 0x07F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoAssignISMPool; // 0x07F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x1]; // 0x07F2
    std::uint8_t bUseStaticMeshCollisionForTraces; // 0x07F3 (Size: 0x1, Type: BoolProperty)
    std::int32_t ReplicationAbandonClusterLevel; // 0x07F4 (Size: 0x4, Type: IntProperty)
    TScriptInterface<void> CustomRenderer; // 0x07F8 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> CollisionProfilePerLevel; // 0x0808 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000F[0x10]; // 0x0818
    std::int32_t ReplicationAbandonAfterLevel; // 0x0828 (Size: 0x4, Type: IntProperty)
    std::int32_t ReplicationMaxPositionAndVelocityCorrectionLevel; // 0x082C (Size: 0x4, Type: IntProperty)
    std::uint8_t RepData[0x38]; // 0x0830 (Size: 0x38, Type: StructProperty)
    std::uint8_t RepStateData[0x40]; // 0x0868 (Size: 0x40, Type: StructProperty)
    std::uint8_t RepDynamicData[0x138]; // 0x08A8 (Size: 0x138, Type: StructProperty)
    void* DummyBodySetup; // 0x09E0 (Size: 0x8, Type: ObjectProperty)
    void* EventDispatcher; // 0x09E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EmbeddedGeometryComponents; // 0x09F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0010[0x14]; // 0x0A00
    float AngularEtherDrag; // 0x0A14 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGeometryCollectionComponent, ChaosSolverActor) == 1496, "Offset mismatch for UGeometryCollectionComponent::ChaosSolverActor");
static_assert(offsetof(UGeometryCollectionComponent, RestCollection) == 1504, "Offset mismatch for UGeometryCollectionComponent::RestCollection");
static_assert(offsetof(UGeometryCollectionComponent, InitializationFields) == 1512, "Offset mismatch for UGeometryCollectionComponent::InitializationFields");
static_assert(offsetof(UGeometryCollectionComponent, Simulating) == 1528, "Offset mismatch for UGeometryCollectionComponent::Simulating");
static_assert(offsetof(UGeometryCollectionComponent, ObjectType) == 1530, "Offset mismatch for UGeometryCollectionComponent::ObjectType");
static_assert(offsetof(UGeometryCollectionComponent, GravityGroupIndex) == 1532, "Offset mismatch for UGeometryCollectionComponent::GravityGroupIndex");
static_assert(offsetof(UGeometryCollectionComponent, OneWayInteractionLevel) == 1536, "Offset mismatch for UGeometryCollectionComponent::OneWayInteractionLevel");
static_assert(offsetof(UGeometryCollectionComponent, bDensityFromPhysicsMaterial) == 1540, "Offset mismatch for UGeometryCollectionComponent::bDensityFromPhysicsMaterial");
static_assert(offsetof(UGeometryCollectionComponent, bForceMotionBlur) == 1541, "Offset mismatch for UGeometryCollectionComponent::bForceMotionBlur");
static_assert(offsetof(UGeometryCollectionComponent, EnableClustering) == 1542, "Offset mismatch for UGeometryCollectionComponent::EnableClustering");
static_assert(offsetof(UGeometryCollectionComponent, ClusterGroupIndex) == 1544, "Offset mismatch for UGeometryCollectionComponent::ClusterGroupIndex");
static_assert(offsetof(UGeometryCollectionComponent, MaxClusterLevel) == 1548, "Offset mismatch for UGeometryCollectionComponent::MaxClusterLevel");
static_assert(offsetof(UGeometryCollectionComponent, MaxSimulatedLevel) == 1552, "Offset mismatch for UGeometryCollectionComponent::MaxSimulatedLevel");
static_assert(offsetof(UGeometryCollectionComponent, DamageModel) == 1556, "Offset mismatch for UGeometryCollectionComponent::DamageModel");
static_assert(offsetof(UGeometryCollectionComponent, DamageThreshold) == 1560, "Offset mismatch for UGeometryCollectionComponent::DamageThreshold");
static_assert(offsetof(UGeometryCollectionComponent, bUseSizeSpecificDamageThreshold) == 1576, "Offset mismatch for UGeometryCollectionComponent::bUseSizeSpecificDamageThreshold");
static_assert(offsetof(UGeometryCollectionComponent, bUseMaterialDamageModifiers) == 1577, "Offset mismatch for UGeometryCollectionComponent::bUseMaterialDamageModifiers");
static_assert(offsetof(UGeometryCollectionComponent, DamagePropagationData) == 1580, "Offset mismatch for UGeometryCollectionComponent::DamagePropagationData");
static_assert(offsetof(UGeometryCollectionComponent, bEnableDamageFromCollision) == 1592, "Offset mismatch for UGeometryCollectionComponent::bEnableDamageFromCollision");
static_assert(offsetof(UGeometryCollectionComponent, bAllowRemovalOnSleep) == 1593, "Offset mismatch for UGeometryCollectionComponent::bAllowRemovalOnSleep");
static_assert(offsetof(UGeometryCollectionComponent, bAllowRemovalOnBreak) == 1594, "Offset mismatch for UGeometryCollectionComponent::bAllowRemovalOnBreak");
static_assert(offsetof(UGeometryCollectionComponent, bForceUpdateActiveTransforms) == 1595, "Offset mismatch for UGeometryCollectionComponent::bForceUpdateActiveTransforms");
static_assert(offsetof(UGeometryCollectionComponent, ClusterConnectionType) == 1596, "Offset mismatch for UGeometryCollectionComponent::ClusterConnectionType");
static_assert(offsetof(UGeometryCollectionComponent, CollisionGroup) == 1600, "Offset mismatch for UGeometryCollectionComponent::CollisionGroup");
static_assert(offsetof(UGeometryCollectionComponent, CollisionSampleFraction) == 1604, "Offset mismatch for UGeometryCollectionComponent::CollisionSampleFraction");
static_assert(offsetof(UGeometryCollectionComponent, LinearEtherDrag) == 1608, "Offset mismatch for UGeometryCollectionComponent::LinearEtherDrag");
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterial) == 1616, "Offset mismatch for UGeometryCollectionComponent::PhysicalMaterial");
static_assert(offsetof(UGeometryCollectionComponent, InitialVelocityType) == 1624, "Offset mismatch for UGeometryCollectionComponent::InitialVelocityType");
static_assert(offsetof(UGeometryCollectionComponent, InitialLinearVelocity) == 1632, "Offset mismatch for UGeometryCollectionComponent::InitialLinearVelocity");
static_assert(offsetof(UGeometryCollectionComponent, InitialAngularVelocity) == 1656, "Offset mismatch for UGeometryCollectionComponent::InitialAngularVelocity");
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterialOverride) == 1680, "Offset mismatch for UGeometryCollectionComponent::PhysicalMaterialOverride");
static_assert(offsetof(UGeometryCollectionComponent, CacheParameters) == 1688, "Offset mismatch for UGeometryCollectionComponent::CacheParameters");
static_assert(offsetof(UGeometryCollectionComponent, RestTransforms) == 1768, "Offset mismatch for UGeometryCollectionComponent::RestTransforms");
static_assert(offsetof(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsStateChange) == 1784, "Offset mismatch for UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange");
static_assert(offsetof(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsLoadingStateChange) == 1800, "Offset mismatch for UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosBreakEvent) == 1840, "Offset mismatch for UGeometryCollectionComponent::OnChaosBreakEvent");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosRemovalEvent) == 1856, "Offset mismatch for UGeometryCollectionComponent::OnChaosRemovalEvent");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosCrumblingEvent) == 1872, "Offset mismatch for UGeometryCollectionComponent::OnChaosCrumblingEvent");
static_assert(offsetof(UGeometryCollectionComponent, DesiredCacheTime) == 1960, "Offset mismatch for UGeometryCollectionComponent::DesiredCacheTime");
static_assert(offsetof(UGeometryCollectionComponent, CachePlayback) == 1964, "Offset mismatch for UGeometryCollectionComponent::CachePlayback");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosPhysicsCollision) == 1968, "Offset mismatch for UGeometryCollectionComponent::OnChaosPhysicsCollision");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyBreaks) == 1984, "Offset mismatch for UGeometryCollectionComponent::bNotifyBreaks");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyCollisions) == 1985, "Offset mismatch for UGeometryCollectionComponent::bNotifyCollisions");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyTrailing) == 1986, "Offset mismatch for UGeometryCollectionComponent::bNotifyTrailing");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyRemovals) == 1987, "Offset mismatch for UGeometryCollectionComponent::bNotifyRemovals");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyCrumblings) == 1988, "Offset mismatch for UGeometryCollectionComponent::bNotifyCrumblings");
static_assert(offsetof(UGeometryCollectionComponent, bCrumblingEventIncludesChildren) == 1989, "Offset mismatch for UGeometryCollectionComponent::bCrumblingEventIncludesChildren");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyGlobalBreaks) == 1990, "Offset mismatch for UGeometryCollectionComponent::bNotifyGlobalBreaks");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyGlobalCollisions) == 1991, "Offset mismatch for UGeometryCollectionComponent::bNotifyGlobalCollisions");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyGlobalRemovals) == 1992, "Offset mismatch for UGeometryCollectionComponent::bNotifyGlobalRemovals");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyGlobalCrumblings) == 1993, "Offset mismatch for UGeometryCollectionComponent::bNotifyGlobalCrumblings");
static_assert(offsetof(UGeometryCollectionComponent, bGlobalCrumblingEventIncludesChildren) == 1994, "Offset mismatch for UGeometryCollectionComponent::bGlobalCrumblingEventIncludesChildren");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyGlobalTrailings) == 1995, "Offset mismatch for UGeometryCollectionComponent::bNotifyGlobalTrailings");
static_assert(offsetof(UGeometryCollectionComponent, bStoreVelocities) == 1996, "Offset mismatch for UGeometryCollectionComponent::bStoreVelocities");
static_assert(offsetof(UGeometryCollectionComponent, bIsCurrentlyNavigationRelevant) == 1997, "Offset mismatch for UGeometryCollectionComponent::bIsCurrentlyNavigationRelevant");
static_assert(offsetof(UGeometryCollectionComponent, bShowBoneColors) == 1998, "Offset mismatch for UGeometryCollectionComponent::bShowBoneColors");
static_assert(offsetof(UGeometryCollectionComponent, bUpdateComponentTransformToRootBone) == 1999, "Offset mismatch for UGeometryCollectionComponent::bUpdateComponentTransformToRootBone");
static_assert(offsetof(UGeometryCollectionComponent, bUseRootProxyForNavigation) == 2000, "Offset mismatch for UGeometryCollectionComponent::bUseRootProxyForNavigation");
static_assert(offsetof(UGeometryCollectionComponent, bUpdateNavigationInTick) == 2001, "Offset mismatch for UGeometryCollectionComponent::bUpdateNavigationInTick");
static_assert(offsetof(UGeometryCollectionComponent, bEnableReplication) == 2003, "Offset mismatch for UGeometryCollectionComponent::bEnableReplication");
static_assert(offsetof(UGeometryCollectionComponent, bEnableAbandonAfterLevel) == 2004, "Offset mismatch for UGeometryCollectionComponent::bEnableAbandonAfterLevel");
static_assert(offsetof(UGeometryCollectionComponent, AbandonedCollisionProfileName) == 2008, "Offset mismatch for UGeometryCollectionComponent::AbandonedCollisionProfileName");
static_assert(offsetof(UGeometryCollectionComponent, ISMPool) == 2016, "Offset mismatch for UGeometryCollectionComponent::ISMPool");
static_assert(offsetof(UGeometryCollectionComponent, CustomRendererType) == 2024, "Offset mismatch for UGeometryCollectionComponent::CustomRendererType");
static_assert(offsetof(UGeometryCollectionComponent, bOverrideCustomRenderer) == 2032, "Offset mismatch for UGeometryCollectionComponent::bOverrideCustomRenderer");
static_assert(offsetof(UGeometryCollectionComponent, bAutoAssignISMPool) == 2033, "Offset mismatch for UGeometryCollectionComponent::bAutoAssignISMPool");
static_assert(offsetof(UGeometryCollectionComponent, bUseStaticMeshCollisionForTraces) == 2035, "Offset mismatch for UGeometryCollectionComponent::bUseStaticMeshCollisionForTraces");
static_assert(offsetof(UGeometryCollectionComponent, ReplicationAbandonClusterLevel) == 2036, "Offset mismatch for UGeometryCollectionComponent::ReplicationAbandonClusterLevel");
static_assert(offsetof(UGeometryCollectionComponent, CustomRenderer) == 2040, "Offset mismatch for UGeometryCollectionComponent::CustomRenderer");
static_assert(offsetof(UGeometryCollectionComponent, CollisionProfilePerLevel) == 2056, "Offset mismatch for UGeometryCollectionComponent::CollisionProfilePerLevel");
static_assert(offsetof(UGeometryCollectionComponent, ReplicationAbandonAfterLevel) == 2088, "Offset mismatch for UGeometryCollectionComponent::ReplicationAbandonAfterLevel");
static_assert(offsetof(UGeometryCollectionComponent, ReplicationMaxPositionAndVelocityCorrectionLevel) == 2092, "Offset mismatch for UGeometryCollectionComponent::ReplicationMaxPositionAndVelocityCorrectionLevel");
static_assert(offsetof(UGeometryCollectionComponent, RepData) == 2096, "Offset mismatch for UGeometryCollectionComponent::RepData");
static_assert(offsetof(UGeometryCollectionComponent, RepStateData) == 2152, "Offset mismatch for UGeometryCollectionComponent::RepStateData");
static_assert(offsetof(UGeometryCollectionComponent, RepDynamicData) == 2216, "Offset mismatch for UGeometryCollectionComponent::RepDynamicData");
static_assert(offsetof(UGeometryCollectionComponent, DummyBodySetup) == 2528, "Offset mismatch for UGeometryCollectionComponent::DummyBodySetup");
static_assert(offsetof(UGeometryCollectionComponent, EventDispatcher) == 2536, "Offset mismatch for UGeometryCollectionComponent::EventDispatcher");
static_assert(offsetof(UGeometryCollectionComponent, EmbeddedGeometryComponents) == 2544, "Offset mismatch for UGeometryCollectionComponent::EmbeddedGeometryComponents");
static_assert(offsetof(UGeometryCollectionComponent, AngularEtherDrag) == 2580, "Offset mismatch for UGeometryCollectionComponent::AngularEtherDrag");

// /Script/GeometryCollectionEngine.GeometryCollectionCustomDataInterface
// Kind: Class; super: Interface
class UGeometryCollectionCustomDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Kind: Class; super: Actor
class UGeometryCollectionDebugDrawActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t WarningMessage[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t SelectedRigidBody[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDebugDrawWholeCollection; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDebugDrawHierarchy; // 0x0291 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDebugDrawClustering; // 0x0292 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HideGeometry; // 0x0293 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowRigidBodyId; // 0x0294 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRigidBodyCollision; // 0x0295 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCollisionAtOrigin; // 0x0296 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRigidBodyTransform; // 0x0297 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRigidBodyInertia; // 0x0298 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRigidBodyVelocity; // 0x0299 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRigidBodyForce; // 0x029A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRigidBodyInfos; // 0x029B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTransformIndex; // 0x029C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTransform; // 0x029D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowParent; // 0x029E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowLevel; // 0x029F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConnectivityEdges; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGeometryIndex; // 0x02A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGeometryTransform; // 0x02A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBoundingBox; // 0x02A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowFaces; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowFaceIndices; // 0x02A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowFaceNormals; // 0x02A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSingleFace; // 0x02A7 (Size: 0x1, Type: BoolProperty)
    std::int32_t SingleFaceIndex; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowVertices; // 0x02AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowVertexIndices; // 0x02AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowVertexNormals; // 0x02AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseActiveVisualization; // 0x02AF (Size: 0x1, Type: BoolProperty)
    float PointThickness; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float LineThickness; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTextShadow; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02B9
    float TextScale; // 0x02BC (Size: 0x4, Type: FloatProperty)
    float NormalScale; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    float AxisScale; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    float ArrowScale; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RigidBodyIdColor[0x4]; // 0x02CC (Size: 0x4, Type: StructProperty)
    float RigidBodyTransformScale; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RigidBodyCollisionColor[0x4]; // 0x02D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t RigidBodyInertiaColor[0x4]; // 0x02D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t RigidBodyVelocityColor[0x4]; // 0x02DC (Size: 0x4, Type: StructProperty)
    std::uint8_t RigidBodyForceColor[0x4]; // 0x02E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RigidBodyInfoColor[0x4]; // 0x02E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t TransformIndexColor[0x4]; // 0x02E8 (Size: 0x4, Type: StructProperty)
    float TransformScale; // 0x02EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t LevelColor[0x4]; // 0x02F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentColor[0x4]; // 0x02F4 (Size: 0x4, Type: StructProperty)
    float ConnectivityEdgeThickness; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GeometryIndexColor[0x4]; // 0x02FC (Size: 0x4, Type: StructProperty)
    float GeometryTransformScale; // 0x0300 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BoundingBoxColor[0x4]; // 0x0304 (Size: 0x4, Type: StructProperty)
    std::uint8_t FaceColor[0x4]; // 0x0308 (Size: 0x4, Type: StructProperty)
    std::uint8_t FaceIndexColor[0x4]; // 0x030C (Size: 0x4, Type: StructProperty)
    std::uint8_t FaceNormalColor[0x4]; // 0x0310 (Size: 0x4, Type: StructProperty)
    std::uint8_t SingleFaceColor[0x4]; // 0x0314 (Size: 0x4, Type: StructProperty)
    std::uint8_t VertexColor[0x4]; // 0x0318 (Size: 0x4, Type: StructProperty)
    std::uint8_t VertexIndexColor[0x4]; // 0x031C (Size: 0x4, Type: StructProperty)
    std::uint8_t VertexNormalColor[0x8]; // 0x0320 (Size: 0x8, Type: StructProperty)
    void* SpriteComponent; // 0x0328 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCollectionDebugDrawActor, WarningMessage) == 624, "Offset mismatch for UGeometryCollectionDebugDrawActor::WarningMessage");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, SelectedRigidBody) == 632, "Offset mismatch for UGeometryCollectionDebugDrawActor::SelectedRigidBody");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bDebugDrawWholeCollection) == 656, "Offset mismatch for UGeometryCollectionDebugDrawActor::bDebugDrawWholeCollection");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bDebugDrawHierarchy) == 657, "Offset mismatch for UGeometryCollectionDebugDrawActor::bDebugDrawHierarchy");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bDebugDrawClustering) == 658, "Offset mismatch for UGeometryCollectionDebugDrawActor::bDebugDrawClustering");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, HideGeometry) == 659, "Offset mismatch for UGeometryCollectionDebugDrawActor::HideGeometry");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyId) == 660, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyId");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyCollision) == 661, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyCollision");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bCollisionAtOrigin) == 662, "Offset mismatch for UGeometryCollectionDebugDrawActor::bCollisionAtOrigin");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyTransform) == 663, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyTransform");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyInertia) == 664, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyInertia");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyVelocity) == 665, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyVelocity");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyForce) == 666, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyForce");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowRigidBodyInfos) == 667, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowRigidBodyInfos");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowTransformIndex) == 668, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowTransformIndex");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowTransform) == 669, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowTransform");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowParent) == 670, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowParent");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowLevel) == 671, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowLevel");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowConnectivityEdges) == 672, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowConnectivityEdges");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowGeometryIndex) == 673, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowGeometryIndex");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowGeometryTransform) == 674, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowGeometryTransform");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowBoundingBox) == 675, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowBoundingBox");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowFaces) == 676, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowFaces");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowFaceIndices) == 677, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowFaceIndices");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowFaceNormals) == 678, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowFaceNormals");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowSingleFace) == 679, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowSingleFace");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, SingleFaceIndex) == 680, "Offset mismatch for UGeometryCollectionDebugDrawActor::SingleFaceIndex");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowVertices) == 684, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowVertices");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowVertexIndices) == 685, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowVertexIndices");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bShowVertexNormals) == 686, "Offset mismatch for UGeometryCollectionDebugDrawActor::bShowVertexNormals");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bUseActiveVisualization) == 687, "Offset mismatch for UGeometryCollectionDebugDrawActor::bUseActiveVisualization");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, PointThickness) == 688, "Offset mismatch for UGeometryCollectionDebugDrawActor::PointThickness");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, LineThickness) == 692, "Offset mismatch for UGeometryCollectionDebugDrawActor::LineThickness");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, bTextShadow) == 696, "Offset mismatch for UGeometryCollectionDebugDrawActor::bTextShadow");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, TextScale) == 700, "Offset mismatch for UGeometryCollectionDebugDrawActor::TextScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, NormalScale) == 704, "Offset mismatch for UGeometryCollectionDebugDrawActor::NormalScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, AxisScale) == 708, "Offset mismatch for UGeometryCollectionDebugDrawActor::AxisScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, ArrowScale) == 712, "Offset mismatch for UGeometryCollectionDebugDrawActor::ArrowScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyIdColor) == 716, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyIdColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyTransformScale) == 720, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyTransformScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyCollisionColor) == 724, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyCollisionColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyInertiaColor) == 728, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyInertiaColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyVelocityColor) == 732, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyVelocityColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyForceColor) == 736, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyForceColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, RigidBodyInfoColor) == 740, "Offset mismatch for UGeometryCollectionDebugDrawActor::RigidBodyInfoColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, TransformIndexColor) == 744, "Offset mismatch for UGeometryCollectionDebugDrawActor::TransformIndexColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, TransformScale) == 748, "Offset mismatch for UGeometryCollectionDebugDrawActor::TransformScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, LevelColor) == 752, "Offset mismatch for UGeometryCollectionDebugDrawActor::LevelColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, ParentColor) == 756, "Offset mismatch for UGeometryCollectionDebugDrawActor::ParentColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, ConnectivityEdgeThickness) == 760, "Offset mismatch for UGeometryCollectionDebugDrawActor::ConnectivityEdgeThickness");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, GeometryIndexColor) == 764, "Offset mismatch for UGeometryCollectionDebugDrawActor::GeometryIndexColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, GeometryTransformScale) == 768, "Offset mismatch for UGeometryCollectionDebugDrawActor::GeometryTransformScale");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, BoundingBoxColor) == 772, "Offset mismatch for UGeometryCollectionDebugDrawActor::BoundingBoxColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, FaceColor) == 776, "Offset mismatch for UGeometryCollectionDebugDrawActor::FaceColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, FaceIndexColor) == 780, "Offset mismatch for UGeometryCollectionDebugDrawActor::FaceIndexColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, FaceNormalColor) == 784, "Offset mismatch for UGeometryCollectionDebugDrawActor::FaceNormalColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, SingleFaceColor) == 788, "Offset mismatch for UGeometryCollectionDebugDrawActor::SingleFaceColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, VertexColor) == 792, "Offset mismatch for UGeometryCollectionDebugDrawActor::VertexColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, VertexIndexColor) == 796, "Offset mismatch for UGeometryCollectionDebugDrawActor::VertexIndexColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, VertexNormalColor) == 800, "Offset mismatch for UGeometryCollectionDebugDrawActor::VertexNormalColor");
static_assert(offsetof(UGeometryCollectionDebugDrawActor, SpriteComponent) == 808, "Offset mismatch for UGeometryCollectionDebugDrawActor::SpriteComponent");

// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Kind: Class; super: ActorComponent
class UGeometryCollectionDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GeometryCollectionDebugDrawActor; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* GeometryCollectionRenderLevelSetActor; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor) == 192, "Offset mismatch for UGeometryCollectionDebugDrawComponent::GeometryCollectionDebugDrawActor");
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor) == 200, "Offset mismatch for UGeometryCollectionDebugDrawComponent::GeometryCollectionRenderLevelSetActor");

// /Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
// Kind: Class; super: Interface
class UGeometryCollectionExternalRenderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
// Kind: Class; super: Actor
class UGeometryCollectionISMPoolActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ISMPoolComp; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* ISMPoolDebugDrawComp; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCollectionISMPoolActor, ISMPoolComp) == 624, "Offset mismatch for UGeometryCollectionISMPoolActor::ISMPoolComp");
static_assert(offsetof(UGeometryCollectionISMPoolActor, ISMPoolDebugDrawComp) == 632, "Offset mismatch for UGeometryCollectionISMPoolActor::ISMPoolDebugDrawComp");

// /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
// Kind: Class; super: SceneComponent
class UGeometryCollectionISMPoolComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> PhysicsVolume; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    void* AttachParent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    FName AttachSocketName; // 0x00D8 (Size: 0x8, Type: NameProperty)
    TArray<void*> AttachChildren; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientAttachedChildren; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0100
    std::uint8_t RelativeLocation[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeRotation[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeScale3D[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentVelocity[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteLocation; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    // 0x01A0 BoolProperty bAbsoluteRotation (shared storage)
    // 0x01A0 BoolProperty bAbsoluteScale (shared storage)
    // 0x01A0 BoolProperty bComponentToWorldUpdated (shared storage)
    // 0x01A0 BoolProperty bShouldBeAttached (shared storage)
    // 0x01A0 BoolProperty bShouldSnapLocationWhenAttached (shared storage)
    // 0x01A0 BoolProperty bVisible (shared storage)
    std::uint8_t bBoundsChangeTriggersStreamingDataRebuild; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    // 0x01A1 BoolProperty bComputeBoundsOnceForGame (shared storage)
    // 0x01A1 BoolProperty bComputeFastLocalBounds (shared storage)
    // 0x01A1 BoolProperty bHiddenInGame (shared storage)
    // 0x01A1 BoolProperty bShouldSnapRotationWhenAttached (shared storage)
    // 0x01A1 BoolProperty bShouldSnapScaleWhenAttached (shared storage)
    // 0x01A1 BoolProperty bShouldUpdatePhysicsVolume (shared storage)
    // 0x01A1 BoolProperty bUseAttachParentBound (shared storage)
    std::uint8_t bComputedBoundsOnceForGame; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    // 0x01A2 BoolProperty bIsNotRenderAttachmentRoot (shared storage)
    std::uint8_t Mobility; // 0x01A3 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DetailMode; // 0x01A4 (Size: 0x1, Type: ByteProperty)
    FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x01A5 (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UGeometryCollectionISMPoolComponent, PhysicsVolume) == 200, "Offset mismatch for UGeometryCollectionISMPoolComponent::PhysicsVolume");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, AttachParent) == 208, "Offset mismatch for UGeometryCollectionISMPoolComponent::AttachParent");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, AttachSocketName) == 216, "Offset mismatch for UGeometryCollectionISMPoolComponent::AttachSocketName");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, AttachChildren) == 224, "Offset mismatch for UGeometryCollectionISMPoolComponent::AttachChildren");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, ClientAttachedChildren) == 240, "Offset mismatch for UGeometryCollectionISMPoolComponent::ClientAttachedChildren");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, RelativeLocation) == 320, "Offset mismatch for UGeometryCollectionISMPoolComponent::RelativeLocation");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, RelativeRotation) == 344, "Offset mismatch for UGeometryCollectionISMPoolComponent::RelativeRotation");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, RelativeScale3D) == 368, "Offset mismatch for UGeometryCollectionISMPoolComponent::RelativeScale3D");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, ComponentVelocity) == 392, "Offset mismatch for UGeometryCollectionISMPoolComponent::ComponentVelocity");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, bAbsoluteLocation) == 416, "Offset mismatch for UGeometryCollectionISMPoolComponent::bAbsoluteLocation");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, bBoundsChangeTriggersStreamingDataRebuild) == 417, "Offset mismatch for UGeometryCollectionISMPoolComponent::bBoundsChangeTriggersStreamingDataRebuild");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, bComputedBoundsOnceForGame) == 418, "Offset mismatch for UGeometryCollectionISMPoolComponent::bComputedBoundsOnceForGame");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, Mobility) == 419, "Offset mismatch for UGeometryCollectionISMPoolComponent::Mobility");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, DetailMode) == 420, "Offset mismatch for UGeometryCollectionISMPoolComponent::DetailMode");
static_assert(offsetof(UGeometryCollectionISMPoolComponent, PhysicsVolumeChangedDelegate) == 421, "Offset mismatch for UGeometryCollectionISMPoolComponent::PhysicsVolumeChangedDelegate");

// /Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
// Kind: Class; super: DebugDrawComponent
class UGeometryCollectionISMPoolDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::uint8_t bShowGlobalStats; // 0x05D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowStats; // 0x05D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBounds; // 0x05D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x05D3
    void* SelectedComponent; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, bShowGlobalStats) == 1488, "Offset mismatch for UGeometryCollectionISMPoolDebugDrawComponent::bShowGlobalStats");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, bShowStats) == 1489, "Offset mismatch for UGeometryCollectionISMPoolDebugDrawComponent::bShowStats");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, bShowBounds) == 1490, "Offset mismatch for UGeometryCollectionISMPoolDebugDrawComponent::bShowBounds");
static_assert(offsetof(UGeometryCollectionISMPoolDebugDrawComponent, SelectedComponent) == 1496, "Offset mismatch for UGeometryCollectionISMPoolDebugDrawComponent::SelectedComponent");

// /Script/GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
// Kind: Class; super: Object
class UGeometryCollectionISMPoolRenderer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CachedISMPoolComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* LocalISMPoolComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGeometryCollectionISMPoolRenderer, CachedISMPoolComponent) == 48, "Offset mismatch for UGeometryCollectionISMPoolRenderer::CachedISMPoolComponent");
static_assert(offsetof(UGeometryCollectionISMPoolRenderer, LocalISMPoolComponent) == 56, "Offset mismatch for UGeometryCollectionISMPoolRenderer::LocalISMPoolComponent");

// /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
// Kind: Class; super: WorldSubsystem
class UGeometryCollectionISMPoolSubSystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Kind: Class; super: Actor
class UGeometryCollectionRenderLevelSetActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* TargetVolumeTexture; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* RayMarchMaterial; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    float SurfaceTolerance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    float IsoValue; // 0x0284 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Enabled; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RenderVolumeBoundingBox; // 0x0289 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGeometryCollectionRenderLevelSetActor, TargetVolumeTexture) == 624, "Offset mismatch for UGeometryCollectionRenderLevelSetActor::TargetVolumeTexture");
static_assert(offsetof(UGeometryCollectionRenderLevelSetActor, RayMarchMaterial) == 632, "Offset mismatch for UGeometryCollectionRenderLevelSetActor::RayMarchMaterial");
static_assert(offsetof(UGeometryCollectionRenderLevelSetActor, SurfaceTolerance) == 640, "Offset mismatch for UGeometryCollectionRenderLevelSetActor::SurfaceTolerance");
static_assert(offsetof(UGeometryCollectionRenderLevelSetActor, IsoValue) == 644, "Offset mismatch for UGeometryCollectionRenderLevelSetActor::IsoValue");
static_assert(offsetof(UGeometryCollectionRenderLevelSetActor, Enabled) == 648, "Offset mismatch for UGeometryCollectionRenderLevelSetActor::Enabled");
static_assert(offsetof(UGeometryCollectionRenderLevelSetActor, RenderVolumeBoundingBox) == 649, "Offset mismatch for UGeometryCollectionRenderLevelSetActor::RenderVolumeBoundingBox");

// /Script/GeometryCollectionEngine.GeometryCollectionRootProxyRenderer
// Kind: Class; super: Object
class UGeometryCollectionRootProxyRenderer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> StaticMeshComponents; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGeometryCollectionRootProxyRenderer, StaticMeshComponents) == 48, "Offset mismatch for UGeometryCollectionRootProxyRenderer::StaticMeshComponents");
