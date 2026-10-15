/**
 * decamp dumper generated SDK
 * Package: /Script/SuperstormRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SuperstormRuntime.TempestLightningBoltData
// Kind: ScriptStruct; super: none
struct FTempestLightningBoltData
{
public:
    void* SourcePawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x48]; // 0x0008
    void* LightningBolt; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TargetActors; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TargetPawns; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTempestLightningBoltData, SourcePawn) == 0, "Offset mismatch for FTempestLightningBoltData::SourcePawn");
static_assert(offsetof(FTempestLightningBoltData, LightningBolt) == 80, "Offset mismatch for FTempestLightningBoltData::LightningBolt");
static_assert(offsetof(FTempestLightningBoltData, TargetActors) == 88, "Offset mismatch for FTempestLightningBoltData::TargetActors");
static_assert(offsetof(FTempestLightningBoltData, TargetPawns) == 104, "Offset mismatch for FTempestLightningBoltData::TargetPawns");

// /Script/SuperstormRuntime.TempestLightningBoltEffectContainer
// Kind: ScriptStruct; super: none
struct FTempestLightningBoltEffectContainer
{
public:
    std::uint8_t TargetFilter[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* GameplayEffect; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FTempestLightningBoltEffectContainer, TargetFilter) == 0, "Offset mismatch for FTempestLightningBoltEffectContainer::TargetFilter");
static_assert(offsetof(FTempestLightningBoltEffectContainer, GameplayEffect) == 72, "Offset mismatch for FTempestLightningBoltEffectContainer::GameplayEffect");

// /Script/SuperstormRuntime.TornadoActorInfo
// Kind: ScriptStruct; super: none
struct FTornadoActorInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SuperstormRuntime.TornadoClientSimulationArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FTornadoClientSimulationArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> ActorsToSimulateArray; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTornadoClientSimulationArray, ActorsToSimulateArray) == 72, "Offset mismatch for FTornadoClientSimulationArray::ActorsToSimulateArray");

// /Script/SuperstormRuntime.TornadoConfigEntry
// Kind: ScriptStruct; super: TableRowBase
struct FTornadoConfigEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float EyeBufferDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* TargetOrbitRadiusCurve; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float OrbitStrength; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float TargetTangentVelocity; // 0x001C (Size: 0x4, Type: FloatProperty)
    float TangentVelocityVariance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float TangentAcceleration; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float TangentAccelerationVariance; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float TangentAngleOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TargetHeightVelocity; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float HeightVelocityVariance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float HeightAcceleration; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float HeightAccelerationVariance; // 0x003C (Size: 0x4, Type: FloatProperty)
    float TorqueStrength; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float TorqueVariance; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float TimeToForceEject; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float HeightToForceEject; // 0x004C (Size: 0x4, Type: FloatProperty)
    float DepthToForceEject; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOrbitRadiusExtendsDistanceToForceEject; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0055
    float DistanceToForceEject; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float EjectionBoost; // 0x005C (Size: 0x4, Type: FloatProperty)
    float MaxDragVelocity; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float DragCoefficient1; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float DragCoefficient2; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x006C
    TMap<void*, void*> SizeForceModifiers; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ObjectTypeForceModifiers; // 0x0080 (Size: 0x10, Type: MapProperty)
    float PlayerGravityFloorOffset; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float PlayerGravityFloorWidth; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float PlayerGravityFloorGravityScalar; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float PeriodicDamageToPawns; // 0x009C (Size: 0x4, Type: FloatProperty)
    float PeriodicDamageToProps; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float BurstDamageToStaticActors; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float ChancePerSecondToApplyBurstDamage; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowPickupPlayers; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPickupPawns; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPickupVehicles; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPickupProjectiles; // 0x00AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAffectStaticObjects; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MaxAllowedPhysicsObjectSize; // 0x00B1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MinAllowedPhysicsObjectSize; // 0x00B2 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTornadoConfigEntry, EyeBufferDistance) == 8, "Offset mismatch for FTornadoConfigEntry::EyeBufferDistance");
static_assert(offsetof(FTornadoConfigEntry, TargetOrbitRadiusCurve) == 16, "Offset mismatch for FTornadoConfigEntry::TargetOrbitRadiusCurve");
static_assert(offsetof(FTornadoConfigEntry, OrbitStrength) == 24, "Offset mismatch for FTornadoConfigEntry::OrbitStrength");
static_assert(offsetof(FTornadoConfigEntry, TargetTangentVelocity) == 28, "Offset mismatch for FTornadoConfigEntry::TargetTangentVelocity");
static_assert(offsetof(FTornadoConfigEntry, TangentVelocityVariance) == 32, "Offset mismatch for FTornadoConfigEntry::TangentVelocityVariance");
static_assert(offsetof(FTornadoConfigEntry, TangentAcceleration) == 36, "Offset mismatch for FTornadoConfigEntry::TangentAcceleration");
static_assert(offsetof(FTornadoConfigEntry, TangentAccelerationVariance) == 40, "Offset mismatch for FTornadoConfigEntry::TangentAccelerationVariance");
static_assert(offsetof(FTornadoConfigEntry, TangentAngleOffset) == 44, "Offset mismatch for FTornadoConfigEntry::TangentAngleOffset");
static_assert(offsetof(FTornadoConfigEntry, TargetHeightVelocity) == 48, "Offset mismatch for FTornadoConfigEntry::TargetHeightVelocity");
static_assert(offsetof(FTornadoConfigEntry, HeightVelocityVariance) == 52, "Offset mismatch for FTornadoConfigEntry::HeightVelocityVariance");
static_assert(offsetof(FTornadoConfigEntry, HeightAcceleration) == 56, "Offset mismatch for FTornadoConfigEntry::HeightAcceleration");
static_assert(offsetof(FTornadoConfigEntry, HeightAccelerationVariance) == 60, "Offset mismatch for FTornadoConfigEntry::HeightAccelerationVariance");
static_assert(offsetof(FTornadoConfigEntry, TorqueStrength) == 64, "Offset mismatch for FTornadoConfigEntry::TorqueStrength");
static_assert(offsetof(FTornadoConfigEntry, TorqueVariance) == 68, "Offset mismatch for FTornadoConfigEntry::TorqueVariance");
static_assert(offsetof(FTornadoConfigEntry, TimeToForceEject) == 72, "Offset mismatch for FTornadoConfigEntry::TimeToForceEject");
static_assert(offsetof(FTornadoConfigEntry, HeightToForceEject) == 76, "Offset mismatch for FTornadoConfigEntry::HeightToForceEject");
static_assert(offsetof(FTornadoConfigEntry, DepthToForceEject) == 80, "Offset mismatch for FTornadoConfigEntry::DepthToForceEject");
static_assert(offsetof(FTornadoConfigEntry, bOrbitRadiusExtendsDistanceToForceEject) == 84, "Offset mismatch for FTornadoConfigEntry::bOrbitRadiusExtendsDistanceToForceEject");
static_assert(offsetof(FTornadoConfigEntry, DistanceToForceEject) == 88, "Offset mismatch for FTornadoConfigEntry::DistanceToForceEject");
static_assert(offsetof(FTornadoConfigEntry, EjectionBoost) == 92, "Offset mismatch for FTornadoConfigEntry::EjectionBoost");
static_assert(offsetof(FTornadoConfigEntry, MaxDragVelocity) == 96, "Offset mismatch for FTornadoConfigEntry::MaxDragVelocity");
static_assert(offsetof(FTornadoConfigEntry, DragCoefficient1) == 100, "Offset mismatch for FTornadoConfigEntry::DragCoefficient1");
static_assert(offsetof(FTornadoConfigEntry, DragCoefficient2) == 104, "Offset mismatch for FTornadoConfigEntry::DragCoefficient2");
static_assert(offsetof(FTornadoConfigEntry, SizeForceModifiers) == 112, "Offset mismatch for FTornadoConfigEntry::SizeForceModifiers");
static_assert(offsetof(FTornadoConfigEntry, ObjectTypeForceModifiers) == 128, "Offset mismatch for FTornadoConfigEntry::ObjectTypeForceModifiers");
static_assert(offsetof(FTornadoConfigEntry, PlayerGravityFloorOffset) == 144, "Offset mismatch for FTornadoConfigEntry::PlayerGravityFloorOffset");
static_assert(offsetof(FTornadoConfigEntry, PlayerGravityFloorWidth) == 148, "Offset mismatch for FTornadoConfigEntry::PlayerGravityFloorWidth");
static_assert(offsetof(FTornadoConfigEntry, PlayerGravityFloorGravityScalar) == 152, "Offset mismatch for FTornadoConfigEntry::PlayerGravityFloorGravityScalar");
static_assert(offsetof(FTornadoConfigEntry, PeriodicDamageToPawns) == 156, "Offset mismatch for FTornadoConfigEntry::PeriodicDamageToPawns");
static_assert(offsetof(FTornadoConfigEntry, PeriodicDamageToProps) == 160, "Offset mismatch for FTornadoConfigEntry::PeriodicDamageToProps");
static_assert(offsetof(FTornadoConfigEntry, BurstDamageToStaticActors) == 164, "Offset mismatch for FTornadoConfigEntry::BurstDamageToStaticActors");
static_assert(offsetof(FTornadoConfigEntry, ChancePerSecondToApplyBurstDamage) == 168, "Offset mismatch for FTornadoConfigEntry::ChancePerSecondToApplyBurstDamage");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupPlayers) == 172, "Offset mismatch for FTornadoConfigEntry::bAllowPickupPlayers");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupPawns) == 173, "Offset mismatch for FTornadoConfigEntry::bAllowPickupPawns");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupVehicles) == 174, "Offset mismatch for FTornadoConfigEntry::bAllowPickupVehicles");
static_assert(offsetof(FTornadoConfigEntry, bAllowPickupProjectiles) == 175, "Offset mismatch for FTornadoConfigEntry::bAllowPickupProjectiles");
static_assert(offsetof(FTornadoConfigEntry, bAffectStaticObjects) == 176, "Offset mismatch for FTornadoConfigEntry::bAffectStaticObjects");
static_assert(offsetof(FTornadoConfigEntry, MaxAllowedPhysicsObjectSize) == 177, "Offset mismatch for FTornadoConfigEntry::MaxAllowedPhysicsObjectSize");
static_assert(offsetof(FTornadoConfigEntry, MinAllowedPhysicsObjectSize) == 178, "Offset mismatch for FTornadoConfigEntry::MinAllowedPhysicsObjectSize");

// /Script/SuperstormRuntime.TornadoObjectForceModifiers
// Kind: ScriptStruct; super: none
struct FTornadoObjectForceModifiers
{
public:
    float TangentVelocityMultiplier; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float HeightVelocityMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float DragMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TorqueMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTornadoObjectForceModifiers, TangentVelocityMultiplier) == 0, "Offset mismatch for FTornadoObjectForceModifiers::TangentVelocityMultiplier");
static_assert(offsetof(FTornadoObjectForceModifiers, HeightVelocityMultiplier) == 4, "Offset mismatch for FTornadoObjectForceModifiers::HeightVelocityMultiplier");
static_assert(offsetof(FTornadoObjectForceModifiers, DragMultiplier) == 8, "Offset mismatch for FTornadoObjectForceModifiers::DragMultiplier");
static_assert(offsetof(FTornadoObjectForceModifiers, TorqueMultiplier) == 12, "Offset mismatch for FTornadoObjectForceModifiers::TorqueMultiplier");

// /Script/SuperstormRuntime.TornadoSimulationData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FTornadoSimulationData
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    TWeakObjectPtr<void> Actor; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ObjectType; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    float TangentVelocity; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float TangentAccel; // 0x001C (Size: 0x4, Type: FloatProperty)
    float HeightVelocity; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float HeightAccel; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Torque[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTornadoSimulationData, Actor) == 12, "Offset mismatch for FTornadoSimulationData::Actor");
static_assert(offsetof(FTornadoSimulationData, ObjectType) == 20, "Offset mismatch for FTornadoSimulationData::ObjectType");
static_assert(offsetof(FTornadoSimulationData, TangentVelocity) == 24, "Offset mismatch for FTornadoSimulationData::TangentVelocity");
static_assert(offsetof(FTornadoSimulationData, TangentAccel) == 28, "Offset mismatch for FTornadoSimulationData::TangentAccel");
static_assert(offsetof(FTornadoSimulationData, HeightVelocity) == 32, "Offset mismatch for FTornadoSimulationData::HeightVelocity");
static_assert(offsetof(FTornadoSimulationData, HeightAccel) == 36, "Offset mismatch for FTornadoSimulationData::HeightAccel");
static_assert(offsetof(FTornadoSimulationData, Torque) == 40, "Offset mismatch for FTornadoSimulationData::Torque");

// /Script/SuperstormRuntime.TornadoTelemetryStats
// Kind: ScriptStruct; super: none
struct FTornadoTelemetryStats
{
public:
    TMap<void*, void*> NumActorsEnteredByType; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t EnteredPlayerAccountIds[0x10]; // 0x0010 (Size: 0x10, Type: SetProperty)
    std::int32_t NumPreBuiltStructuresDestroyed; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPlayerBuiltStructuresDestroyed; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTornadoTelemetryStats, NumActorsEnteredByType) == 0, "Offset mismatch for FTornadoTelemetryStats::NumActorsEnteredByType");
static_assert(offsetof(FTornadoTelemetryStats, EnteredPlayerAccountIds) == 16, "Offset mismatch for FTornadoTelemetryStats::EnteredPlayerAccountIds");
static_assert(offsetof(FTornadoTelemetryStats, NumPreBuiltStructuresDestroyed) == 32, "Offset mismatch for FTornadoTelemetryStats::NumPreBuiltStructuresDestroyed");
static_assert(offsetof(FTornadoTelemetryStats, NumPlayerBuiltStructuresDestroyed) == 36, "Offset mismatch for FTornadoTelemetryStats::NumPlayerBuiltStructuresDestroyed");

// /Script/SuperstormRuntime.TempestLightningComponent
// Kind: Class; super: GameFrameworkComponent
class UTempestLightningComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* LightningBoltClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> LightningBoltTargetEffectContainers; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    void* LightningBoltTargetingPreset; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* FindTargetablePawnsQuery; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* FindTargetableLocationQuery; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EnvironmentQueryParamName_LightningRadius[0x4]; // 0x00F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnvironmentQueryParamName_MinLightningTargetDistance[0x4]; // 0x00F4 (Size: 0x4, Type: NameProperty)
    std::uint8_t LightningCloudHeight[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningRadius[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLightningTargetDistance[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningFrequencyMin[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningFrequencyMax[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltsMin[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltsMax[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltIntervalMin[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltIntervalMax[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltSeparationDistance[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningStruckPawnReselectionInterval[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltTelegraphDuration[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltImpactIgnitionRadius[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltGrassIgnitionRadius[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningBoltGrassFirePropagationFuel[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t LightningAreaTargetTelegraphCue[0x4]; // 0x0350 (Size: 0x4, Type: StructProperty)
    std::uint8_t LightningBoltTargetTelegraphCue[0x4]; // 0x0354 (Size: 0x4, Type: StructProperty)
    TArray<void*> LightningBoltData; // 0x0358 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTempestLightningComponent, LightningBoltClass) == 192, "Offset mismatch for UTempestLightningComponent::LightningBoltClass");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTargetEffectContainers) == 200, "Offset mismatch for UTempestLightningComponent::LightningBoltTargetEffectContainers");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTargetingPreset) == 216, "Offset mismatch for UTempestLightningComponent::LightningBoltTargetingPreset");
static_assert(offsetof(UTempestLightningComponent, FindTargetablePawnsQuery) == 224, "Offset mismatch for UTempestLightningComponent::FindTargetablePawnsQuery");
static_assert(offsetof(UTempestLightningComponent, FindTargetableLocationQuery) == 232, "Offset mismatch for UTempestLightningComponent::FindTargetableLocationQuery");
static_assert(offsetof(UTempestLightningComponent, EnvironmentQueryParamName_LightningRadius) == 240, "Offset mismatch for UTempestLightningComponent::EnvironmentQueryParamName_LightningRadius");
static_assert(offsetof(UTempestLightningComponent, EnvironmentQueryParamName_MinLightningTargetDistance) == 244, "Offset mismatch for UTempestLightningComponent::EnvironmentQueryParamName_MinLightningTargetDistance");
static_assert(offsetof(UTempestLightningComponent, LightningCloudHeight) == 248, "Offset mismatch for UTempestLightningComponent::LightningCloudHeight");
static_assert(offsetof(UTempestLightningComponent, LightningRadius) == 288, "Offset mismatch for UTempestLightningComponent::LightningRadius");
static_assert(offsetof(UTempestLightningComponent, MinLightningTargetDistance) == 328, "Offset mismatch for UTempestLightningComponent::MinLightningTargetDistance");
static_assert(offsetof(UTempestLightningComponent, LightningFrequencyMin) == 368, "Offset mismatch for UTempestLightningComponent::LightningFrequencyMin");
static_assert(offsetof(UTempestLightningComponent, LightningFrequencyMax) == 408, "Offset mismatch for UTempestLightningComponent::LightningFrequencyMax");
static_assert(offsetof(UTempestLightningComponent, LightningBoltsMin) == 448, "Offset mismatch for UTempestLightningComponent::LightningBoltsMin");
static_assert(offsetof(UTempestLightningComponent, LightningBoltsMax) == 488, "Offset mismatch for UTempestLightningComponent::LightningBoltsMax");
static_assert(offsetof(UTempestLightningComponent, LightningBoltIntervalMin) == 528, "Offset mismatch for UTempestLightningComponent::LightningBoltIntervalMin");
static_assert(offsetof(UTempestLightningComponent, LightningBoltIntervalMax) == 568, "Offset mismatch for UTempestLightningComponent::LightningBoltIntervalMax");
static_assert(offsetof(UTempestLightningComponent, LightningBoltSeparationDistance) == 608, "Offset mismatch for UTempestLightningComponent::LightningBoltSeparationDistance");
static_assert(offsetof(UTempestLightningComponent, LightningStruckPawnReselectionInterval) == 648, "Offset mismatch for UTempestLightningComponent::LightningStruckPawnReselectionInterval");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTelegraphDuration) == 688, "Offset mismatch for UTempestLightningComponent::LightningBoltTelegraphDuration");
static_assert(offsetof(UTempestLightningComponent, LightningBoltImpactIgnitionRadius) == 728, "Offset mismatch for UTempestLightningComponent::LightningBoltImpactIgnitionRadius");
static_assert(offsetof(UTempestLightningComponent, LightningBoltGrassIgnitionRadius) == 768, "Offset mismatch for UTempestLightningComponent::LightningBoltGrassIgnitionRadius");
static_assert(offsetof(UTempestLightningComponent, LightningBoltGrassFirePropagationFuel) == 808, "Offset mismatch for UTempestLightningComponent::LightningBoltGrassFirePropagationFuel");
static_assert(offsetof(UTempestLightningComponent, LightningAreaTargetTelegraphCue) == 848, "Offset mismatch for UTempestLightningComponent::LightningAreaTargetTelegraphCue");
static_assert(offsetof(UTempestLightningComponent, LightningBoltTargetTelegraphCue) == 852, "Offset mismatch for UTempestLightningComponent::LightningBoltTargetTelegraphCue");
static_assert(offsetof(UTempestLightningComponent, LightningBoltData) == 856, "Offset mismatch for UTempestLightningComponent::LightningBoltData");

// /Script/SuperstormRuntime.TempestTornadoForcesComponent
// Kind: Class; super: GameFrameworkComponent
class UTempestTornadoForcesComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnActorAddedToTornadoForces; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActorRemovedFromTornadoForces; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ConfigHandle[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    TArray<void*> PhysicsPresetTagsAngularDampingToOverride; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AngularDampingOverride[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    void* PawnInGE; // 0x0128 (Size: 0x8, Type: ClassProperty)
    TMap<void*, void*> ObjectTypeToMaxCapCount; // 0x0130 (Size: 0x10, Type: MapProperty)
    std::uint8_t TagsToIgnore[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    void* RecentlyRemovedGE; // 0x0160 (Size: 0x8, Type: ClassProperty)
    void* TargetingPreset; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DamageSetByCallerTag[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    void* PeriodicDamageGE; // 0x0178 (Size: 0x8, Type: ClassProperty)
    void* BurstDamageGE; // 0x0180 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TornadoActiveCue[0x4]; // 0x0188 (Size: 0x4, Type: StructProperty)
    std::uint8_t PlayerNearCue[0x4]; // 0x018C (Size: 0x4, Type: StructProperty)
    std::uint8_t PawnInCue[0x8]; // 0x0190 (Size: 0x8, Type: StructProperty)
    std::uint8_t PlayerNearRange[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlockAbilitiesWithTag[0x20]; // 0x01C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActorsToClientSimulate[0xB0]; // 0x01E0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t AsyncTargetingHandle[0x8]; // 0x0290 (Size: 0x8, Type: StructProperty)
    TSet<void*> PreviouslyNearPlayers; // 0x0298 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UTempestTornadoForcesComponent, OnActorAddedToTornadoForces) == 192, "Offset mismatch for UTempestTornadoForcesComponent::OnActorAddedToTornadoForces");
static_assert(offsetof(UTempestTornadoForcesComponent, OnActorRemovedFromTornadoForces) == 208, "Offset mismatch for UTempestTornadoForcesComponent::OnActorRemovedFromTornadoForces");
static_assert(offsetof(UTempestTornadoForcesComponent, ConfigHandle) == 224, "Offset mismatch for UTempestTornadoForcesComponent::ConfigHandle");
static_assert(offsetof(UTempestTornadoForcesComponent, PhysicsPresetTagsAngularDampingToOverride) == 240, "Offset mismatch for UTempestTornadoForcesComponent::PhysicsPresetTagsAngularDampingToOverride");
static_assert(offsetof(UTempestTornadoForcesComponent, AngularDampingOverride) == 256, "Offset mismatch for UTempestTornadoForcesComponent::AngularDampingOverride");
static_assert(offsetof(UTempestTornadoForcesComponent, PawnInGE) == 296, "Offset mismatch for UTempestTornadoForcesComponent::PawnInGE");
static_assert(offsetof(UTempestTornadoForcesComponent, ObjectTypeToMaxCapCount) == 304, "Offset mismatch for UTempestTornadoForcesComponent::ObjectTypeToMaxCapCount");
static_assert(offsetof(UTempestTornadoForcesComponent, TagsToIgnore) == 320, "Offset mismatch for UTempestTornadoForcesComponent::TagsToIgnore");
static_assert(offsetof(UTempestTornadoForcesComponent, RecentlyRemovedGE) == 352, "Offset mismatch for UTempestTornadoForcesComponent::RecentlyRemovedGE");
static_assert(offsetof(UTempestTornadoForcesComponent, TargetingPreset) == 360, "Offset mismatch for UTempestTornadoForcesComponent::TargetingPreset");
static_assert(offsetof(UTempestTornadoForcesComponent, DamageSetByCallerTag) == 368, "Offset mismatch for UTempestTornadoForcesComponent::DamageSetByCallerTag");
static_assert(offsetof(UTempestTornadoForcesComponent, PeriodicDamageGE) == 376, "Offset mismatch for UTempestTornadoForcesComponent::PeriodicDamageGE");
static_assert(offsetof(UTempestTornadoForcesComponent, BurstDamageGE) == 384, "Offset mismatch for UTempestTornadoForcesComponent::BurstDamageGE");
static_assert(offsetof(UTempestTornadoForcesComponent, TornadoActiveCue) == 392, "Offset mismatch for UTempestTornadoForcesComponent::TornadoActiveCue");
static_assert(offsetof(UTempestTornadoForcesComponent, PlayerNearCue) == 396, "Offset mismatch for UTempestTornadoForcesComponent::PlayerNearCue");
static_assert(offsetof(UTempestTornadoForcesComponent, PawnInCue) == 400, "Offset mismatch for UTempestTornadoForcesComponent::PawnInCue");
static_assert(offsetof(UTempestTornadoForcesComponent, PlayerNearRange) == 408, "Offset mismatch for UTempestTornadoForcesComponent::PlayerNearRange");
static_assert(offsetof(UTempestTornadoForcesComponent, BlockAbilitiesWithTag) == 448, "Offset mismatch for UTempestTornadoForcesComponent::BlockAbilitiesWithTag");
static_assert(offsetof(UTempestTornadoForcesComponent, ActorsToClientSimulate) == 480, "Offset mismatch for UTempestTornadoForcesComponent::ActorsToClientSimulate");
static_assert(offsetof(UTempestTornadoForcesComponent, AsyncTargetingHandle) == 656, "Offset mismatch for UTempestTornadoForcesComponent::AsyncTargetingHandle");
static_assert(offsetof(UTempestTornadoForcesComponent, PreviouslyNearPlayers) == 664, "Offset mismatch for UTempestTornadoForcesComponent::PreviouslyNearPlayers");

// /Script/SuperstormRuntime.TornadoRadialForce
// Kind: Class; super: FieldSystemActor
class UTornadoRadialForce
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float Radius; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x027C (Size: 0x4, Type: FloatProperty)
    float StartTime; // 0x0280 (Size: 0x4, Type: FloatProperty)
    float StopTime; // 0x0284 (Size: 0x4, Type: FloatProperty)
    float IncomingDuration; // 0x0288 (Size: 0x4, Type: FloatProperty)
    float OutgoingDuration; // 0x028C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0290
    void* RadialVector; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* RadialFalloff; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* OperatorField; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTornadoRadialForce, Radius) == 632, "Offset mismatch for UTornadoRadialForce::Radius");
static_assert(offsetof(UTornadoRadialForce, Strength) == 636, "Offset mismatch for UTornadoRadialForce::Strength");
static_assert(offsetof(UTornadoRadialForce, StartTime) == 640, "Offset mismatch for UTornadoRadialForce::StartTime");
static_assert(offsetof(UTornadoRadialForce, StopTime) == 644, "Offset mismatch for UTornadoRadialForce::StopTime");
static_assert(offsetof(UTornadoRadialForce, IncomingDuration) == 648, "Offset mismatch for UTornadoRadialForce::IncomingDuration");
static_assert(offsetof(UTornadoRadialForce, OutgoingDuration) == 652, "Offset mismatch for UTornadoRadialForce::OutgoingDuration");
static_assert(offsetof(UTornadoRadialForce, RadialVector) == 664, "Offset mismatch for UTornadoRadialForce::RadialVector");
static_assert(offsetof(UTornadoRadialForce, RadialFalloff) == 672, "Offset mismatch for UTornadoRadialForce::RadialFalloff");
static_assert(offsetof(UTornadoRadialForce, OperatorField) == 680, "Offset mismatch for UTornadoRadialForce::OperatorField");
