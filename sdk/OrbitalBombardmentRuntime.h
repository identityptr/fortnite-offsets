/**
 * decamp dumper generated SDK
 * Package: /Script/OrbitalBombardmentRuntime
 */
#pragma once
#include "Basic.h"

// /Script/OrbitalBombardmentRuntime.BombardmentPhaseData
// Kind: ScriptStruct; super: none
struct FBombardmentPhaseData
{
public:
    std::uint8_t StartTime[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t LocationGenerationType; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    std::uint8_t MissileSpawnCount[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinMissileSpawnRate[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t MaxMissileSpawnRate[0x30]; // 0x0098 (Size: 0x30, Type: StructProperty)
    void* ProjectileClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PhaseRadius[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t PhaseSecondaryRadius[0x30]; // 0x0100 (Size: 0x30, Type: StructProperty)
    std::uint8_t MissileExplosionRadius[0x30]; // 0x0130 (Size: 0x30, Type: StructProperty)
    std::int32_t MissilesSpawned; // 0x0160 (Size: 0x4, Type: IntProperty)
    float LastMissileSpawnTime; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float NextMissileDelayLength; // 0x0168 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBombardmentPhaseData, StartTime) == 0, "Offset mismatch for FBombardmentPhaseData::StartTime");
static_assert(offsetof(FBombardmentPhaseData, LocationGenerationType) == 48, "Offset mismatch for FBombardmentPhaseData::LocationGenerationType");
static_assert(offsetof(FBombardmentPhaseData, MissileSpawnCount) == 56, "Offset mismatch for FBombardmentPhaseData::MissileSpawnCount");
static_assert(offsetof(FBombardmentPhaseData, MinMissileSpawnRate) == 104, "Offset mismatch for FBombardmentPhaseData::MinMissileSpawnRate");
static_assert(offsetof(FBombardmentPhaseData, MaxMissileSpawnRate) == 152, "Offset mismatch for FBombardmentPhaseData::MaxMissileSpawnRate");
static_assert(offsetof(FBombardmentPhaseData, ProjectileClass) == 200, "Offset mismatch for FBombardmentPhaseData::ProjectileClass");
static_assert(offsetof(FBombardmentPhaseData, PhaseRadius) == 208, "Offset mismatch for FBombardmentPhaseData::PhaseRadius");
static_assert(offsetof(FBombardmentPhaseData, PhaseSecondaryRadius) == 256, "Offset mismatch for FBombardmentPhaseData::PhaseSecondaryRadius");
static_assert(offsetof(FBombardmentPhaseData, MissileExplosionRadius) == 304, "Offset mismatch for FBombardmentPhaseData::MissileExplosionRadius");
static_assert(offsetof(FBombardmentPhaseData, MissilesSpawned) == 352, "Offset mismatch for FBombardmentPhaseData::MissilesSpawned");
static_assert(offsetof(FBombardmentPhaseData, LastMissileSpawnTime) == 356, "Offset mismatch for FBombardmentPhaseData::LastMissileSpawnTime");
static_assert(offsetof(FBombardmentPhaseData, NextMissileDelayLength) == 360, "Offset mismatch for FBombardmentPhaseData::NextMissileDelayLength");

// /Script/OrbitalBombardmentRuntime.OrbitalBombardmentSpawner
// Kind: Class; super: Actor
class UOrbitalBombardmentSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> BombardmentPhases; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    float BombardmentStartTime; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0284
    std::uint8_t UpdateRate[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreBombardmentDelay[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BombardmentMaxLengthFailsafe[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LifespanPostBombardment[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileSpawnHeight[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t MissileAngle[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoundaryPaddingTop[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoundaryPaddingXY[0x1]; // 0x03A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOrbitalBombardmentSpawner, BombardmentPhases) == 624, "Offset mismatch for UOrbitalBombardmentSpawner::BombardmentPhases");
static_assert(offsetof(UOrbitalBombardmentSpawner, BombardmentStartTime) == 640, "Offset mismatch for UOrbitalBombardmentSpawner::BombardmentStartTime");
static_assert(offsetof(UOrbitalBombardmentSpawner, UpdateRate) == 648, "Offset mismatch for UOrbitalBombardmentSpawner::UpdateRate");
static_assert(offsetof(UOrbitalBombardmentSpawner, PreBombardmentDelay) == 688, "Offset mismatch for UOrbitalBombardmentSpawner::PreBombardmentDelay");
static_assert(offsetof(UOrbitalBombardmentSpawner, BombardmentMaxLengthFailsafe) == 728, "Offset mismatch for UOrbitalBombardmentSpawner::BombardmentMaxLengthFailsafe");
static_assert(offsetof(UOrbitalBombardmentSpawner, LifespanPostBombardment) == 768, "Offset mismatch for UOrbitalBombardmentSpawner::LifespanPostBombardment");
static_assert(offsetof(UOrbitalBombardmentSpawner, MissileSpawnHeight) == 808, "Offset mismatch for UOrbitalBombardmentSpawner::MissileSpawnHeight");
static_assert(offsetof(UOrbitalBombardmentSpawner, MissileAngle) == 848, "Offset mismatch for UOrbitalBombardmentSpawner::MissileAngle");
static_assert(offsetof(UOrbitalBombardmentSpawner, BoundaryPaddingTop) == 888, "Offset mismatch for UOrbitalBombardmentSpawner::BoundaryPaddingTop");
static_assert(offsetof(UOrbitalBombardmentSpawner, BoundaryPaddingXY) == 928, "Offset mismatch for UOrbitalBombardmentSpawner::BoundaryPaddingXY");
