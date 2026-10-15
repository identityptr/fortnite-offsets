/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosNiagara
 */
#pragma once
#include "Basic.h"

// /Script/ChaosNiagara.ChaosDestructionEvent
// Kind: ScriptStruct; super: none
struct FChaosDestructionEvent
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularVelocity[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float ExtentMin; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float ExtentMax; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::int32_t ParticleID; // 0x0068 (Size: 0x4, Type: IntProperty)
    float time; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::int32_t Type; // 0x0070 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FChaosDestructionEvent, Position) == 0, "Offset mismatch for FChaosDestructionEvent::Position");
static_assert(offsetof(FChaosDestructionEvent, Normal) == 24, "Offset mismatch for FChaosDestructionEvent::Normal");
static_assert(offsetof(FChaosDestructionEvent, Velocity) == 48, "Offset mismatch for FChaosDestructionEvent::Velocity");
static_assert(offsetof(FChaosDestructionEvent, AngularVelocity) == 72, "Offset mismatch for FChaosDestructionEvent::AngularVelocity");
static_assert(offsetof(FChaosDestructionEvent, ExtentMin) == 96, "Offset mismatch for FChaosDestructionEvent::ExtentMin");
static_assert(offsetof(FChaosDestructionEvent, ExtentMax) == 100, "Offset mismatch for FChaosDestructionEvent::ExtentMax");
static_assert(offsetof(FChaosDestructionEvent, ParticleID) == 104, "Offset mismatch for FChaosDestructionEvent::ParticleID");
static_assert(offsetof(FChaosDestructionEvent, time) == 108, "Offset mismatch for FChaosDestructionEvent::time");
static_assert(offsetof(FChaosDestructionEvent, Type) == 112, "Offset mismatch for FChaosDestructionEvent::Type");

// /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceChaosDestruction
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ChaosSolverActorSet[0x10]; // 0x0038 (Size: 0x10, Type: SetProperty)
    std::uint8_t DataSourceType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::int32_t DataProcessFrequency; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumberOfDataEntriesToSpawn; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t DoSpawn; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0055
    std::uint8_t SpawnMultiplierMinMax[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    float SpawnChance; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x006C
    std::uint8_t ImpulseToSpawnMinMax[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpeedToSpawnMinMax[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t MassToSpawnMinMax[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExtentMinToSpawnMinMax[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExtentMaxToSpawnMinMax[0x10]; // 0x00B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t VolumeToSpawnMinMax[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SolverTimeToSpawnMinMax[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::int32_t SurfaceTypeToSpawn; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t LocationFilteringMode; // 0x00E4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LocationXToSpawn; // 0x00E5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x2]; // 0x00E6
    std::uint8_t LocationXToSpawnMinMax[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t LocationYToSpawn; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x00F9
    std::uint8_t LocationYToSpawnMinMax[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t LocationZToSpawn; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0111
    std::uint8_t LocationZToSpawnMinMax[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    float TrailMinSpeedToSpawn; // 0x0128 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DataSortingType; // 0x012C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bGetExternalCollisionData; // 0x012D (Size: 0x1, Type: BoolProperty)
    std::uint8_t DoSpatialHash; // 0x012E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x012F
    std::uint8_t SpatialHashVolumeMin[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpatialHashVolumeMax[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpatialHashVolumeCellSize[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::int32_t MaxDataPerCell; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t bApplyMaterialsFilter; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x017D
    std::uint8_t ChaosBreakingMaterialSet[0x10]; // 0x0180 (Size: 0x10, Type: SetProperty)
    std::uint8_t bGetExternalBreakingData; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGetExternalTrailingData; // 0x0191 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x6]; // 0x0192
    std::uint8_t RandomPositionMagnitudeMinMax[0x10]; // 0x0198 (Size: 0x10, Type: StructProperty)
    float InheritedVelocityMultiplier; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomVelocityGenerationType; // 0x01AC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x3]; // 0x01AD
    std::uint8_t RandomVelocityMagnitudeMinMax[0x10]; // 0x01B0 (Size: 0x10, Type: StructProperty)
    float SpreadAngleMax; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x01C4
    std::uint8_t VelocityOffsetMin[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t VelocityOffsetMax[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalVelocityMagnitudeMinMax[0x10]; // 0x01F8 (Size: 0x10, Type: StructProperty)
    float MaxLatency; // 0x0208 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DebugType; // 0x020C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000C[0x3]; // 0x020D
    std::int32_t LastSpawnedPointID; // 0x0210 (Size: 0x4, Type: IntProperty)
    float LastSpawnTime; // 0x0214 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000D[0x10]; // 0x0218
    float SolverTime; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float TimeStampOfLastProcessedData; // 0x022C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ChaosSolverActorSet) == 56, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::ChaosSolverActorSet");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSourceType) == 72, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::DataSourceType");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataProcessFrequency) == 76, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::DataProcessFrequency");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxNumberOfDataEntriesToSpawn) == 80, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::MaxNumberOfDataEntriesToSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DoSpawn) == 84, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::DoSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnMultiplierMinMax) == 88, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpawnMultiplierMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpawnChance) == 104, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpawnChance");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ImpulseToSpawnMinMax) == 112, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::ImpulseToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpeedToSpawnMinMax) == 128, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpeedToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MassToSpawnMinMax) == 144, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::MassToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMinToSpawnMinMax) == 160, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::ExtentMinToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ExtentMaxToSpawnMinMax) == 176, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::ExtentMaxToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VolumeToSpawnMinMax) == 192, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::VolumeToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTimeToSpawnMinMax) == 208, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SolverTimeToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SurfaceTypeToSpawn) == 224, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SurfaceTypeToSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationFilteringMode) == 228, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationFilteringMode");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawn) == 229, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationXToSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationXToSpawnMinMax) == 232, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationXToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawn) == 248, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationYToSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationYToSpawnMinMax) == 256, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationYToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawn) == 272, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationZToSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LocationZToSpawnMinMax) == 280, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LocationZToSpawnMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, TrailMinSpeedToSpawn) == 296, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::TrailMinSpeedToSpawn");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DataSortingType) == 300, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::DataSortingType");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalCollisionData) == 301, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::bGetExternalCollisionData");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DoSpatialHash) == 302, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::DoSpatialHash");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMin) == 304, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeMin");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeMax) == 328, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpatialHashVolumeCellSize) == 352, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpatialHashVolumeCellSize");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxDataPerCell) == 376, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::MaxDataPerCell");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bApplyMaterialsFilter) == 380, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::bApplyMaterialsFilter");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, ChaosBreakingMaterialSet) == 384, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::ChaosBreakingMaterialSet");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalBreakingData) == 400, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::bGetExternalBreakingData");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, bGetExternalTrailingData) == 401, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::bGetExternalTrailingData");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomPositionMagnitudeMinMax) == 408, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::RandomPositionMagnitudeMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, InheritedVelocityMultiplier) == 424, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::InheritedVelocityMultiplier");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityGenerationType) == 428, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::RandomVelocityGenerationType");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, RandomVelocityMagnitudeMinMax) == 432, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::RandomVelocityMagnitudeMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SpreadAngleMax) == 448, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SpreadAngleMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMin) == 456, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::VelocityOffsetMin");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, VelocityOffsetMax) == 480, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::VelocityOffsetMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, FinalVelocityMagnitudeMinMax) == 504, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::FinalVelocityMagnitudeMinMax");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, MaxLatency) == 520, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::MaxLatency");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, DebugType) == 524, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::DebugType");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LastSpawnedPointID) == 528, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LastSpawnedPointID");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, LastSpawnTime) == 532, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::LastSpawnTime");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, SolverTime) == 552, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::SolverTime");
static_assert(offsetof(UNiagaraDataInterfaceChaosDestruction, TimeStampOfLastProcessedData) == 556, "Offset mismatch for UNiagaraDataInterfaceChaosDestruction::TimeStampOfLastProcessedData");

// /Script/ChaosNiagara.NiagaraDataInterfaceGeometryCollection
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceGeometryCollection
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* DefaultGeometryCollection; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeometryCollectionActor[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    void* SourceComponent; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GeometryCollectionUserParameter[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIncludeIntermediateBones; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceGeometryCollection::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, DefaultGeometryCollection) == 64, "Offset mismatch for UNiagaraDataInterfaceGeometryCollection::DefaultGeometryCollection");
static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionActor) == 72, "Offset mismatch for UNiagaraDataInterfaceGeometryCollection::GeometryCollectionActor");
static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, SourceComponent) == 104, "Offset mismatch for UNiagaraDataInterfaceGeometryCollection::SourceComponent");
static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionUserParameter) == 112, "Offset mismatch for UNiagaraDataInterfaceGeometryCollection::GeometryCollectionUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceGeometryCollection, bIncludeIntermediateBones) == 136, "Offset mismatch for UNiagaraDataInterfaceGeometryCollection::bIncludeIntermediateBones");

// /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfacePhysicsField
{
public:
    std::uint8_t Opaque[1];
};
