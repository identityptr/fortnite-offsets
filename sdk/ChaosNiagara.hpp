#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosNiagara
{
    struct NiagaraDataInterfaceChaosDestruction
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceChaosDestruction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ChaosSolverActorSet = 0x38;
            static constexpr std::uintptr_t DataSourceType = 0x48;
            static constexpr std::uintptr_t DataProcessFrequency = 0x4C;
            static constexpr std::uintptr_t MaxNumberOfDataEntriesToSpawn = 0x50;
            static constexpr std::uintptr_t DoSpawn = 0x54;
            static constexpr std::uintptr_t SpawnMultiplierMinMax = 0x58;
            static constexpr std::uintptr_t SpawnChance = 0x68;
            static constexpr std::uintptr_t ImpulseToSpawnMinMax = 0x70;
            static constexpr std::uintptr_t SpeedToSpawnMinMax = 0x80;
            static constexpr std::uintptr_t MassToSpawnMinMax = 0x90;
            static constexpr std::uintptr_t ExtentMinToSpawnMinMax = 0xA0;
            static constexpr std::uintptr_t ExtentMaxToSpawnMinMax = 0xB0;
            static constexpr std::uintptr_t VolumeToSpawnMinMax = 0xC0;
            static constexpr std::uintptr_t SolverTimeToSpawnMinMax = 0xD0;
            static constexpr std::uintptr_t SurfaceTypeToSpawn = 0xE0;
            static constexpr std::uintptr_t LocationFilteringMode = 0xE4;
            static constexpr std::uintptr_t LocationXToSpawn = 0xE5;
            static constexpr std::uintptr_t LocationXToSpawnMinMax = 0xE8;
            static constexpr std::uintptr_t LocationYToSpawn = 0xF8;
            static constexpr std::uintptr_t LocationYToSpawnMinMax = 0x100;
            static constexpr std::uintptr_t LocationZToSpawn = 0x110;
            static constexpr std::uintptr_t LocationZToSpawnMinMax = 0x118;
            static constexpr std::uintptr_t TrailMinSpeedToSpawn = 0x128;
            static constexpr std::uintptr_t DataSortingType = 0x12C;
            static constexpr std::uintptr_t bGetExternalCollisionData = 0x12D;
            static constexpr std::uintptr_t DoSpatialHash = 0x12E;
            static constexpr std::uintptr_t SpatialHashVolumeMin = 0x130;
            static constexpr std::uintptr_t SpatialHashVolumeMax = 0x148;
            static constexpr std::uintptr_t SpatialHashVolumeCellSize = 0x160;
            static constexpr std::uintptr_t MaxDataPerCell = 0x178;
            static constexpr std::uintptr_t bApplyMaterialsFilter = 0x17C;
            static constexpr std::uintptr_t ChaosBreakingMaterialSet = 0x180;
            static constexpr std::uintptr_t bGetExternalBreakingData = 0x190;
            static constexpr std::uintptr_t bGetExternalTrailingData = 0x191;
            static constexpr std::uintptr_t RandomPositionMagnitudeMinMax = 0x198;
            static constexpr std::uintptr_t InheritedVelocityMultiplier = 0x1A8;
            static constexpr std::uintptr_t RandomVelocityGenerationType = 0x1AC;
            static constexpr std::uintptr_t RandomVelocityMagnitudeMinMax = 0x1B0;
            static constexpr std::uintptr_t SpreadAngleMax = 0x1C0;
            static constexpr std::uintptr_t VelocityOffsetMin = 0x1C8;
            static constexpr std::uintptr_t VelocityOffsetMax = 0x1E0;
            static constexpr std::uintptr_t FinalVelocityMagnitudeMinMax = 0x1F8;
            static constexpr std::uintptr_t MaxLatency = 0x208;
            static constexpr std::uintptr_t DebugType = 0x20C;
            static constexpr std::uintptr_t LastSpawnedPointID = 0x210;
            static constexpr std::uintptr_t LastSpawnTime = 0x214;
            static constexpr std::uintptr_t SolverTime = 0x228;
            static constexpr std::uintptr_t TimeStampOfLastProcessedData = 0x22C;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ChaosSolverActorSet", 0x38, "SetProperty"},
            {"DataSourceType", 0x48, "EnumProperty"},
            {"DataProcessFrequency", 0x4C, "IntProperty"},
            {"MaxNumberOfDataEntriesToSpawn", 0x50, "IntProperty"},
            {"DoSpawn", 0x54, "BoolProperty"},
            {"SpawnMultiplierMinMax", 0x58, "StructProperty"},
            {"SpawnChance", 0x68, "FloatProperty"},
            {"ImpulseToSpawnMinMax", 0x70, "StructProperty"},
            {"SpeedToSpawnMinMax", 0x80, "StructProperty"},
            {"MassToSpawnMinMax", 0x90, "StructProperty"},
            {"ExtentMinToSpawnMinMax", 0xA0, "StructProperty"},
            {"ExtentMaxToSpawnMinMax", 0xB0, "StructProperty"},
            {"VolumeToSpawnMinMax", 0xC0, "StructProperty"},
            {"SolverTimeToSpawnMinMax", 0xD0, "StructProperty"},
            {"SurfaceTypeToSpawn", 0xE0, "IntProperty"},
            {"LocationFilteringMode", 0xE4, "EnumProperty"},
            {"LocationXToSpawn", 0xE5, "EnumProperty"},
            {"LocationXToSpawnMinMax", 0xE8, "StructProperty"},
            {"LocationYToSpawn", 0xF8, "EnumProperty"},
            {"LocationYToSpawnMinMax", 0x100, "StructProperty"},
            {"LocationZToSpawn", 0x110, "EnumProperty"},
            {"LocationZToSpawnMinMax", 0x118, "StructProperty"},
            {"TrailMinSpeedToSpawn", 0x128, "FloatProperty"},
            {"DataSortingType", 0x12C, "EnumProperty"},
            {"bGetExternalCollisionData", 0x12D, "BoolProperty"},
            {"DoSpatialHash", 0x12E, "BoolProperty"},
            {"SpatialHashVolumeMin", 0x130, "StructProperty"},
            {"SpatialHashVolumeMax", 0x148, "StructProperty"},
            {"SpatialHashVolumeCellSize", 0x160, "StructProperty"},
            {"MaxDataPerCell", 0x178, "IntProperty"},
            {"bApplyMaterialsFilter", 0x17C, "BoolProperty"},
            {"ChaosBreakingMaterialSet", 0x180, "SetProperty"},
            {"bGetExternalBreakingData", 0x190, "BoolProperty"},
            {"bGetExternalTrailingData", 0x191, "BoolProperty"},
            {"RandomPositionMagnitudeMinMax", 0x198, "StructProperty"},
            {"InheritedVelocityMultiplier", 0x1A8, "FloatProperty"},
            {"RandomVelocityGenerationType", 0x1AC, "EnumProperty"},
            {"RandomVelocityMagnitudeMinMax", 0x1B0, "StructProperty"},
            {"SpreadAngleMax", 0x1C0, "FloatProperty"},
            {"VelocityOffsetMin", 0x1C8, "StructProperty"},
            {"VelocityOffsetMax", 0x1E0, "StructProperty"},
            {"FinalVelocityMagnitudeMinMax", 0x1F8, "StructProperty"},
            {"MaxLatency", 0x208, "FloatProperty"},
            {"DebugType", 0x20C, "EnumProperty"},
            {"LastSpawnedPointID", 0x210, "IntProperty"},
            {"LastSpawnTime", 0x214, "FloatProperty"},
            {"SolverTime", 0x228, "FloatProperty"},
            {"TimeStampOfLastProcessedData", 0x22C, "FloatProperty"},
        }};
    };

    struct NiagaraDataInterfaceGeometryCollection
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGeometryCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t DefaultGeometryCollection = 0x40;
            static constexpr std::uintptr_t GeometryCollectionActor = 0x48;
            static constexpr std::uintptr_t SourceComponent = 0x68;
            static constexpr std::uintptr_t GeometryCollectionUserParameter = 0x70;
            static constexpr std::uintptr_t bIncludeIntermediateBones = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"DefaultGeometryCollection", 0x40, "ObjectProperty"},
            {"GeometryCollectionActor", 0x48, "SoftObjectProperty"},
            {"SourceComponent", 0x68, "ObjectProperty"},
            {"GeometryCollectionUserParameter", 0x70, "StructProperty"},
            {"bIncludeIntermediateBones", 0x88, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfacePhysicsField
    {
        static constexpr std::string_view Name = "NiagaraDataInterfacePhysicsField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
