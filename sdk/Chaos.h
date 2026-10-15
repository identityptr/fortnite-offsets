/**
 * decamp dumper generated SDK
 * Package: /Script/Chaos
 */
#pragma once
#include "Basic.h"

// /Script/Chaos.ChaosSolverConfiguration
// Kind: ScriptStruct; super: none
struct FChaosSolverConfiguration
{
public:
    std::int32_t PositionIterations; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t VelocityIterations; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ProjectionIterations; // 0x0008 (Size: 0x4, Type: IntProperty)
    float CollisionMarginFraction; // 0x000C (Size: 0x4, Type: FloatProperty)
    float CollisionMarginMax; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float CollisionCullDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float CollisionMaxPushOutVelocity; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float CollisionInitialOverlapDepenetrationVelocity; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ClusterConnectionFactor; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ClusterUnionConnectionType; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t DestructionSettings[0x14]; // 0x0028 (Size: 0x14, Type: StructProperty)
    std::uint8_t bGenerateCollisionData; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    std::uint8_t CollisionFilterSettings[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t bGenerateBreakData; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0051
    std::uint8_t BreakingFilterSettings[0x10]; // 0x0054 (Size: 0x10, Type: StructProperty)
    std::uint8_t bGenerateTrailingData; // 0x0064 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0065
    std::uint8_t TrailingFilterSettings[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::int32_t Iterations; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t PushOutIterations; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bGenerateContactGraph; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosSolverConfiguration, PositionIterations) == 0, "Offset mismatch for FChaosSolverConfiguration::PositionIterations");
static_assert(offsetof(FChaosSolverConfiguration, VelocityIterations) == 4, "Offset mismatch for FChaosSolverConfiguration::VelocityIterations");
static_assert(offsetof(FChaosSolverConfiguration, ProjectionIterations) == 8, "Offset mismatch for FChaosSolverConfiguration::ProjectionIterations");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMarginFraction) == 12, "Offset mismatch for FChaosSolverConfiguration::CollisionMarginFraction");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMarginMax) == 16, "Offset mismatch for FChaosSolverConfiguration::CollisionMarginMax");
static_assert(offsetof(FChaosSolverConfiguration, CollisionCullDistance) == 20, "Offset mismatch for FChaosSolverConfiguration::CollisionCullDistance");
static_assert(offsetof(FChaosSolverConfiguration, CollisionMaxPushOutVelocity) == 24, "Offset mismatch for FChaosSolverConfiguration::CollisionMaxPushOutVelocity");
static_assert(offsetof(FChaosSolverConfiguration, CollisionInitialOverlapDepenetrationVelocity) == 28, "Offset mismatch for FChaosSolverConfiguration::CollisionInitialOverlapDepenetrationVelocity");
static_assert(offsetof(FChaosSolverConfiguration, ClusterConnectionFactor) == 32, "Offset mismatch for FChaosSolverConfiguration::ClusterConnectionFactor");
static_assert(offsetof(FChaosSolverConfiguration, ClusterUnionConnectionType) == 36, "Offset mismatch for FChaosSolverConfiguration::ClusterUnionConnectionType");
static_assert(offsetof(FChaosSolverConfiguration, DestructionSettings) == 40, "Offset mismatch for FChaosSolverConfiguration::DestructionSettings");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateCollisionData) == 60, "Offset mismatch for FChaosSolverConfiguration::bGenerateCollisionData");
static_assert(offsetof(FChaosSolverConfiguration, CollisionFilterSettings) == 64, "Offset mismatch for FChaosSolverConfiguration::CollisionFilterSettings");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateBreakData) == 80, "Offset mismatch for FChaosSolverConfiguration::bGenerateBreakData");
static_assert(offsetof(FChaosSolverConfiguration, BreakingFilterSettings) == 84, "Offset mismatch for FChaosSolverConfiguration::BreakingFilterSettings");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateTrailingData) == 100, "Offset mismatch for FChaosSolverConfiguration::bGenerateTrailingData");
static_assert(offsetof(FChaosSolverConfiguration, TrailingFilterSettings) == 104, "Offset mismatch for FChaosSolverConfiguration::TrailingFilterSettings");
static_assert(offsetof(FChaosSolverConfiguration, Iterations) == 120, "Offset mismatch for FChaosSolverConfiguration::Iterations");
static_assert(offsetof(FChaosSolverConfiguration, PushOutIterations) == 124, "Offset mismatch for FChaosSolverConfiguration::PushOutIterations");
static_assert(offsetof(FChaosSolverConfiguration, bGenerateContactGraph) == 128, "Offset mismatch for FChaosSolverConfiguration::bGenerateContactGraph");

// /Script/Chaos.ChaosSolverDestructionSettings
// Kind: ScriptStruct; super: none
struct FChaosSolverDestructionSettings
{
public:
    std::int32_t PerAdvanceBreaksAllowed; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t PerAdvanceBreaksRescheduleLimit; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ClusteringParticleReleaseThrottlingMinCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ClusteringParticleReleaseThrottlingMaxCount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bOptimizeForRuntimeMemory; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChaosSolverDestructionSettings, PerAdvanceBreaksAllowed) == 0, "Offset mismatch for FChaosSolverDestructionSettings::PerAdvanceBreaksAllowed");
static_assert(offsetof(FChaosSolverDestructionSettings, PerAdvanceBreaksRescheduleLimit) == 4, "Offset mismatch for FChaosSolverDestructionSettings::PerAdvanceBreaksRescheduleLimit");
static_assert(offsetof(FChaosSolverDestructionSettings, ClusteringParticleReleaseThrottlingMinCount) == 8, "Offset mismatch for FChaosSolverDestructionSettings::ClusteringParticleReleaseThrottlingMinCount");
static_assert(offsetof(FChaosSolverDestructionSettings, ClusteringParticleReleaseThrottlingMaxCount) == 12, "Offset mismatch for FChaosSolverDestructionSettings::ClusteringParticleReleaseThrottlingMaxCount");
static_assert(offsetof(FChaosSolverDestructionSettings, bOptimizeForRuntimeMemory) == 16, "Offset mismatch for FChaosSolverDestructionSettings::bOptimizeForRuntimeMemory");

// /Script/Chaos.ClosestPhysicsObjectResult
// Kind: ScriptStruct; super: none
struct FClosestPhysicsObjectResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chaos.FieldCollection
// Kind: ScriptStruct; super: ManagedArrayCollection
struct FFieldCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chaos.ManagedArrayCollection
// Kind: ScriptStruct; super: none
struct FManagedArrayCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chaos.RecordedFrame
// Kind: ScriptStruct; super: none
struct FRecordedFrame
{
public:
    TArray<void*> Transforms; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformIndices; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviousTransformIndices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisabledFlags; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionS; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Breakings; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Trailings[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    float Timestamp; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRecordedFrame, Transforms) == 0, "Offset mismatch for FRecordedFrame::Transforms");
static_assert(offsetof(FRecordedFrame, TransformIndices) == 16, "Offset mismatch for FRecordedFrame::TransformIndices");
static_assert(offsetof(FRecordedFrame, PreviousTransformIndices) == 32, "Offset mismatch for FRecordedFrame::PreviousTransformIndices");
static_assert(offsetof(FRecordedFrame, DisabledFlags) == 48, "Offset mismatch for FRecordedFrame::DisabledFlags");
static_assert(offsetof(FRecordedFrame, CollisionS) == 64, "Offset mismatch for FRecordedFrame::CollisionS");
static_assert(offsetof(FRecordedFrame, Breakings) == 80, "Offset mismatch for FRecordedFrame::Breakings");
static_assert(offsetof(FRecordedFrame, Trailings) == 96, "Offset mismatch for FRecordedFrame::Trailings");
static_assert(offsetof(FRecordedFrame, Timestamp) == 112, "Offset mismatch for FRecordedFrame::Timestamp");

// /Script/Chaos.RecordedTransformTrack
// Kind: ScriptStruct; super: none
struct FRecordedTransformTrack
{
public:
    TArray<void*> Records; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRecordedTransformTrack, Records) == 0, "Offset mismatch for FRecordedTransformTrack::Records");

// /Script/Chaos.SerializedSolverScene
// Kind: ScriptStruct; super: none
struct FSerializedSolverScene
{
public:
    TArray<void*> ParticleData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> JointConstraintData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CharacterGroundConstraintData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CollisionMidPhaseData; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSerializedSolverScene, ParticleData) == 0, "Offset mismatch for FSerializedSolverScene::ParticleData");
static_assert(offsetof(FSerializedSolverScene, JointConstraintData) == 16, "Offset mismatch for FSerializedSolverScene::JointConstraintData");
static_assert(offsetof(FSerializedSolverScene, CharacterGroundConstraintData) == 32, "Offset mismatch for FSerializedSolverScene::CharacterGroundConstraintData");
static_assert(offsetof(FSerializedSolverScene, CollisionMidPhaseData) == 48, "Offset mismatch for FSerializedSolverScene::CollisionMidPhaseData");

// /Script/Chaos.SolverBreakingData
// Kind: ScriptStruct; super: none
struct FSolverBreakingData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t ParticleIndex; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t ParticleIndexMesh; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSolverBreakingData, Location) == 0, "Offset mismatch for FSolverBreakingData::Location");
static_assert(offsetof(FSolverBreakingData, Velocity) == 24, "Offset mismatch for FSolverBreakingData::Velocity");
static_assert(offsetof(FSolverBreakingData, AngularVelocity) == 48, "Offset mismatch for FSolverBreakingData::AngularVelocity");
static_assert(offsetof(FSolverBreakingData, Mass) == 72, "Offset mismatch for FSolverBreakingData::Mass");
static_assert(offsetof(FSolverBreakingData, ParticleIndex) == 76, "Offset mismatch for FSolverBreakingData::ParticleIndex");
static_assert(offsetof(FSolverBreakingData, ParticleIndexMesh) == 80, "Offset mismatch for FSolverBreakingData::ParticleIndexMesh");

// /Script/Chaos.SolverBreakingFilterSettings
// Kind: ScriptStruct; super: none
struct FSolverBreakingFilterSettings
{
public:
    std::uint8_t FilterEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinVolume; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSolverBreakingFilterSettings, FilterEnabled) == 0, "Offset mismatch for FSolverBreakingFilterSettings::FilterEnabled");
static_assert(offsetof(FSolverBreakingFilterSettings, MinMass) == 4, "Offset mismatch for FSolverBreakingFilterSettings::MinMass");
static_assert(offsetof(FSolverBreakingFilterSettings, MinSpeed) == 8, "Offset mismatch for FSolverBreakingFilterSettings::MinSpeed");
static_assert(offsetof(FSolverBreakingFilterSettings, MinVolume) == 12, "Offset mismatch for FSolverBreakingFilterSettings::MinVolume");

// /Script/Chaos.SolverCollisionData
// Kind: ScriptStruct; super: none
struct FSolverCollisionData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t AccumulatedImpulse[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity1[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity2[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity1[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity2[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    float Mass1; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float Mass2; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::int32_t ParticleIndex; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t LevelsetIndex; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t ParticleIndexMesh; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t LevelsetIndexMesh; // 0x00BC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSolverCollisionData, Location) == 0, "Offset mismatch for FSolverCollisionData::Location");
static_assert(offsetof(FSolverCollisionData, AccumulatedImpulse) == 24, "Offset mismatch for FSolverCollisionData::AccumulatedImpulse");
static_assert(offsetof(FSolverCollisionData, Normal) == 48, "Offset mismatch for FSolverCollisionData::Normal");
static_assert(offsetof(FSolverCollisionData, Velocity1) == 72, "Offset mismatch for FSolverCollisionData::Velocity1");
static_assert(offsetof(FSolverCollisionData, Velocity2) == 96, "Offset mismatch for FSolverCollisionData::Velocity2");
static_assert(offsetof(FSolverCollisionData, AngularVelocity1) == 120, "Offset mismatch for FSolverCollisionData::AngularVelocity1");
static_assert(offsetof(FSolverCollisionData, AngularVelocity2) == 144, "Offset mismatch for FSolverCollisionData::AngularVelocity2");
static_assert(offsetof(FSolverCollisionData, Mass1) == 168, "Offset mismatch for FSolverCollisionData::Mass1");
static_assert(offsetof(FSolverCollisionData, Mass2) == 172, "Offset mismatch for FSolverCollisionData::Mass2");
static_assert(offsetof(FSolverCollisionData, ParticleIndex) == 176, "Offset mismatch for FSolverCollisionData::ParticleIndex");
static_assert(offsetof(FSolverCollisionData, LevelsetIndex) == 180, "Offset mismatch for FSolverCollisionData::LevelsetIndex");
static_assert(offsetof(FSolverCollisionData, ParticleIndexMesh) == 184, "Offset mismatch for FSolverCollisionData::ParticleIndexMesh");
static_assert(offsetof(FSolverCollisionData, LevelsetIndexMesh) == 188, "Offset mismatch for FSolverCollisionData::LevelsetIndexMesh");

// /Script/Chaos.SolverCollisionFilterSettings
// Kind: ScriptStruct; super: none
struct FSolverCollisionFilterSettings
{
public:
    std::uint8_t FilterEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinImpulse; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSolverCollisionFilterSettings, FilterEnabled) == 0, "Offset mismatch for FSolverCollisionFilterSettings::FilterEnabled");
static_assert(offsetof(FSolverCollisionFilterSettings, MinMass) == 4, "Offset mismatch for FSolverCollisionFilterSettings::MinMass");
static_assert(offsetof(FSolverCollisionFilterSettings, MinSpeed) == 8, "Offset mismatch for FSolverCollisionFilterSettings::MinSpeed");
static_assert(offsetof(FSolverCollisionFilterSettings, MinImpulse) == 12, "Offset mismatch for FSolverCollisionFilterSettings::MinImpulse");

// /Script/Chaos.SolverRemovalFilterSettings
// Kind: ScriptStruct; super: none
struct FSolverRemovalFilterSettings
{
public:
    std::uint8_t FilterEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinVolume; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSolverRemovalFilterSettings, FilterEnabled) == 0, "Offset mismatch for FSolverRemovalFilterSettings::FilterEnabled");
static_assert(offsetof(FSolverRemovalFilterSettings, MinMass) == 4, "Offset mismatch for FSolverRemovalFilterSettings::MinMass");
static_assert(offsetof(FSolverRemovalFilterSettings, MinVolume) == 8, "Offset mismatch for FSolverRemovalFilterSettings::MinVolume");

// /Script/Chaos.SolverTrailingData
// Kind: ScriptStruct; super: none
struct FSolverTrailingData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float Mass; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t ParticleIndex; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t ParticleIndexMesh; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSolverTrailingData, Location) == 0, "Offset mismatch for FSolverTrailingData::Location");
static_assert(offsetof(FSolverTrailingData, Velocity) == 24, "Offset mismatch for FSolverTrailingData::Velocity");
static_assert(offsetof(FSolverTrailingData, AngularVelocity) == 48, "Offset mismatch for FSolverTrailingData::AngularVelocity");
static_assert(offsetof(FSolverTrailingData, Mass) == 72, "Offset mismatch for FSolverTrailingData::Mass");
static_assert(offsetof(FSolverTrailingData, ParticleIndex) == 76, "Offset mismatch for FSolverTrailingData::ParticleIndex");
static_assert(offsetof(FSolverTrailingData, ParticleIndexMesh) == 80, "Offset mismatch for FSolverTrailingData::ParticleIndexMesh");

// /Script/Chaos.SolverTrailingFilterSettings
// Kind: ScriptStruct; super: none
struct FSolverTrailingFilterSettings
{
public:
    std::uint8_t FilterEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MinMass; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinVolume; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSolverTrailingFilterSettings, FilterEnabled) == 0, "Offset mismatch for FSolverTrailingFilterSettings::FilterEnabled");
static_assert(offsetof(FSolverTrailingFilterSettings, MinMass) == 4, "Offset mismatch for FSolverTrailingFilterSettings::MinMass");
static_assert(offsetof(FSolverTrailingFilterSettings, MinSpeed) == 8, "Offset mismatch for FSolverTrailingFilterSettings::MinSpeed");
static_assert(offsetof(FSolverTrailingFilterSettings, MinVolume) == 12, "Offset mismatch for FSolverTrailingFilterSettings::MinVolume");
