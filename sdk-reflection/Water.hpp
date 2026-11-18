#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Water
{
    struct BakedShallowWaterSimulationComponent
    {
        static constexpr std::string_view Name = "BakedShallowWaterSimulationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BakedSimulationData = 0x560;
            static constexpr std::uintptr_t WaterBodies = 0x568;
            static constexpr std::uintptr_t bUseHeightfieldCollision = 0x578;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BakedSimulationData", 0x560, "ObjectProperty"},
            {"WaterBodies", 0x568, "SetProperty"},
            {"bUseHeightfieldCollision", 0x578, "BoolProperty"},
        }};
    };

    struct BuoyancyComponent
    {
        static constexpr std::string_view Name = "BuoyancyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Pontoons = 0xC0;
            static constexpr std::uintptr_t OnEnteredWaterDelegate = 0xD0;
            static constexpr std::uintptr_t OnExitedWaterDelegate = 0xE0;
            static constexpr std::uintptr_t BuoyancyData = 0xF0;
            static constexpr std::uintptr_t CurrentWaterBodyComponents = 0x180;
            static constexpr std::uintptr_t SimulatingComponent = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Pontoons", 0xC0, "ArrayProperty"},
            {"OnEnteredWaterDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnExitedWaterDelegate", 0xE0, "MulticastInlineDelegateProperty"},
            {"BuoyancyData", 0xF0, "StructProperty"},
            {"CurrentWaterBodyComponents", 0x180, "ArrayProperty"},
            {"SimulatingComponent", 0x190, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetCurrentWaterBodyComponents",
            "GetLastWaterSurfaceInfo",
            "IsInWaterBody",
            "IsOverlappingWaterBody",
            "OnPontoonEnteredWater",
            "OnPontoonExitedWater",
        }};
    };

    struct BuoyancyData
    {
        static constexpr std::string_view Name = "BuoyancyData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Pontoons = 0x0;
            static constexpr std::uintptr_t bCenterPontoonsOnCOM = 0x10;
            static constexpr std::uintptr_t BuoyancyCoefficient = 0x14;
            static constexpr std::uintptr_t BuoyancyDamp = 0x18;
            static constexpr std::uintptr_t BuoyancyDamp2 = 0x1C;
            static constexpr std::uintptr_t BuoyancyRampMinVelocity = 0x20;
            static constexpr std::uintptr_t BuoyancyRampMaxVelocity = 0x24;
            static constexpr std::uintptr_t BuoyancyRampMax = 0x28;
            static constexpr std::uintptr_t MaxBuoyantForce = 0x2C;
            static constexpr std::uintptr_t bApplyDragForcesInWater = 0x30;
            static constexpr std::uintptr_t DragCoefficient = 0x34;
            static constexpr std::uintptr_t DragCoefficient2 = 0x38;
            static constexpr std::uintptr_t AngularDragCoefficient = 0x3C;
            static constexpr std::uintptr_t MaxDragSpeed = 0x40;
            static constexpr std::uintptr_t bApplyRiverForces = 0x44;
            static constexpr std::uintptr_t RiverPontoonIndex = 0x48;
            static constexpr std::uintptr_t WaterShorePushFactor = 0x4C;
            static constexpr std::uintptr_t RiverTraversalPathWidth = 0x50;
            static constexpr std::uintptr_t MaxShorePushForce = 0x54;
            static constexpr std::uintptr_t WaterVelocityStrength = 0x58;
            static constexpr std::uintptr_t MaxWaterForce = 0x5C;
            static constexpr std::uintptr_t bAlwaysAllowLateralPush = 0x60;
            static constexpr std::uintptr_t bAllowCurrentWhenMovingFastUpstream = 0x61;
            static constexpr std::uintptr_t bApplyDownstreamAngularRotation = 0x62;
            static constexpr std::uintptr_t DownstreamAxisOfRotation = 0x68;
            static constexpr std::uintptr_t DownstreamRotationStrength = 0x80;
            static constexpr std::uintptr_t DownstreamRotationStiffness = 0x84;
            static constexpr std::uintptr_t DownstreamRotationAngularDamping = 0x88;
            static constexpr std::uintptr_t DownstreamMaxAcceleration = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"Pontoons", 0x0, "ArrayProperty"},
            {"bCenterPontoonsOnCOM", 0x10, "BoolProperty"},
            {"BuoyancyCoefficient", 0x14, "FloatProperty"},
            {"BuoyancyDamp", 0x18, "FloatProperty"},
            {"BuoyancyDamp2", 0x1C, "FloatProperty"},
            {"BuoyancyRampMinVelocity", 0x20, "FloatProperty"},
            {"BuoyancyRampMaxVelocity", 0x24, "FloatProperty"},
            {"BuoyancyRampMax", 0x28, "FloatProperty"},
            {"MaxBuoyantForce", 0x2C, "FloatProperty"},
            {"bApplyDragForcesInWater", 0x30, "BoolProperty"},
            {"DragCoefficient", 0x34, "FloatProperty"},
            {"DragCoefficient2", 0x38, "FloatProperty"},
            {"AngularDragCoefficient", 0x3C, "FloatProperty"},
            {"MaxDragSpeed", 0x40, "FloatProperty"},
            {"bApplyRiverForces", 0x44, "BoolProperty"},
            {"RiverPontoonIndex", 0x48, "IntProperty"},
            {"WaterShorePushFactor", 0x4C, "FloatProperty"},
            {"RiverTraversalPathWidth", 0x50, "FloatProperty"},
            {"MaxShorePushForce", 0x54, "FloatProperty"},
            {"WaterVelocityStrength", 0x58, "FloatProperty"},
            {"MaxWaterForce", 0x5C, "FloatProperty"},
            {"bAlwaysAllowLateralPush", 0x60, "BoolProperty"},
            {"bAllowCurrentWhenMovingFastUpstream", 0x61, "BoolProperty"},
            {"bApplyDownstreamAngularRotation", 0x62, "BoolProperty"},
            {"DownstreamAxisOfRotation", 0x68, "StructProperty"},
            {"DownstreamRotationStrength", 0x80, "FloatProperty"},
            {"DownstreamRotationStiffness", 0x84, "FloatProperty"},
            {"DownstreamRotationAngularDamping", 0x88, "FloatProperty"},
            {"DownstreamMaxAcceleration", 0x8C, "FloatProperty"},
        }};
    };

    struct BuoyancyManager
    {
        static constexpr std::string_view Name = "BuoyancyManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BuoyancyComponents = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuoyancyComponents", 0x288, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetBuoyancyComponentManager",
        }};
    };

    struct CustomMeshGenerator
    {
        static constexpr std::string_view Name = "CustomMeshGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComp = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComp", 0x28, "ObjectProperty"},
        }};
    };

    struct EnvQueryTest_InsideWaterBody
    {
        static constexpr std::string_view Name = "EnvQueryTest_InsideWaterBody";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bIncludeWaves = 0x1F8;
            static constexpr std::uintptr_t bSimpleWaves = 0x1F9;
            static constexpr std::uintptr_t bIgnoreExclusionVolumes = 0x1FA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIncludeWaves", 0x1F8, "BoolProperty"},
            {"bSimpleWaves", 0x1F9, "BoolProperty"},
            {"bIgnoreExclusionVolumes", 0x1FA, "BoolProperty"},
        }};
    };

    struct GerstnerWaterWaveGeneratorBase
    {
        static constexpr std::string_view Name = "GerstnerWaterWaveGeneratorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GenerateGerstnerWaves",
        }};
    };

    struct GerstnerWaterWaveGeneratorSimple
    {
        static constexpr std::string_view Name = "GerstnerWaterWaveGeneratorSimple";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GerstnerWaterWaveGeneratorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NumWaves = 0x28;
            static constexpr std::uintptr_t Seed = 0x2C;
            static constexpr std::uintptr_t Randomness = 0x30;
            static constexpr std::uintptr_t MinWavelength = 0x34;
            static constexpr std::uintptr_t MaxWavelength = 0x38;
            static constexpr std::uintptr_t WavelengthFalloff = 0x3C;
            static constexpr std::uintptr_t MinAmplitude = 0x40;
            static constexpr std::uintptr_t MaxAmplitude = 0x44;
            static constexpr std::uintptr_t AmplitudeFalloff = 0x48;
            static constexpr std::uintptr_t WindAngleDeg = 0x4C;
            static constexpr std::uintptr_t DirectionAngularSpreadDeg = 0x50;
            static constexpr std::uintptr_t SmallWaveSteepness = 0x54;
            static constexpr std::uintptr_t LargeWaveSteepness = 0x58;
            static constexpr std::uintptr_t SteepnessFalloff = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"NumWaves", 0x28, "IntProperty"},
            {"Seed", 0x2C, "IntProperty"},
            {"Randomness", 0x30, "FloatProperty"},
            {"MinWavelength", 0x34, "FloatProperty"},
            {"MaxWavelength", 0x38, "FloatProperty"},
            {"WavelengthFalloff", 0x3C, "FloatProperty"},
            {"MinAmplitude", 0x40, "FloatProperty"},
            {"MaxAmplitude", 0x44, "FloatProperty"},
            {"AmplitudeFalloff", 0x48, "FloatProperty"},
            {"WindAngleDeg", 0x4C, "FloatProperty"},
            {"DirectionAngularSpreadDeg", 0x50, "FloatProperty"},
            {"SmallWaveSteepness", 0x54, "FloatProperty"},
            {"LargeWaveSteepness", 0x58, "FloatProperty"},
            {"SteepnessFalloff", 0x5C, "FloatProperty"},
        }};
    };

    struct GerstnerWaterWaveGeneratorSpectrum
    {
        static constexpr std::string_view Name = "GerstnerWaterWaveGeneratorSpectrum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GerstnerWaterWaveGeneratorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectrumType = 0x28;
            static constexpr std::uintptr_t Octaves = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpectrumType", 0x28, "EnumProperty"},
            {"Octaves", 0x30, "ArrayProperty"},
        }};
    };

    struct GerstnerWaterWaveSubsystem
    {
        static constexpr std::string_view Name = "GerstnerWaterWaveSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GerstnerWaterWaves
    {
        static constexpr std::string_view Name = "GerstnerWaterWaves";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterWaves";
        struct Offsets
        {
            static constexpr std::uintptr_t GerstnerWaveGenerator = 0x28;
            static constexpr std::uintptr_t GerstnerWaves = 0x30;
            static constexpr std::uintptr_t MaxWaveHeight = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GerstnerWaveGenerator", 0x28, "ObjectProperty"},
            {"GerstnerWaves", 0x30, "ArrayProperty"},
            {"MaxWaveHeight", 0x40, "FloatProperty"},
        }};
    };

    struct GerstnerWave
    {
        static constexpr std::string_view Name = "GerstnerWave";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Wavelength = 0x0;
            static constexpr std::uintptr_t Amplitude = 0x4;
            static constexpr std::uintptr_t Steepness = 0x8;
            static constexpr std::uintptr_t Direction = 0x10;
            static constexpr std::uintptr_t WaveVector = 0x28;
            static constexpr std::uintptr_t WaveSpeed = 0x38;
            static constexpr std::uintptr_t WKA = 0x3C;
            static constexpr std::uintptr_t Q = 0x40;
            static constexpr std::uintptr_t PhaseOffset = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Wavelength", 0x0, "FloatProperty"},
            {"Amplitude", 0x4, "FloatProperty"},
            {"Steepness", 0x8, "FloatProperty"},
            {"Direction", 0x10, "StructProperty"},
            {"WaveVector", 0x28, "StructProperty"},
            {"WaveSpeed", 0x38, "FloatProperty"},
            {"WKA", 0x3C, "FloatProperty"},
            {"Q", 0x40, "FloatProperty"},
            {"PhaseOffset", 0x44, "FloatProperty"},
        }};
    };

    struct GerstnerWaveOctave
    {
        static constexpr std::string_view Name = "GerstnerWaveOctave";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumWaves = 0x0;
            static constexpr std::uintptr_t AmplitudeScale = 0x4;
            static constexpr std::uintptr_t MainDirection = 0x8;
            static constexpr std::uintptr_t SpreadAngle = 0xC;
            static constexpr std::uintptr_t bUniformSpread = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumWaves", 0x0, "IntProperty"},
            {"AmplitudeScale", 0x4, "FloatProperty"},
            {"MainDirection", 0x8, "FloatProperty"},
            {"SpreadAngle", 0xC, "FloatProperty"},
            {"bUniformSpread", 0x10, "BoolProperty"},
        }};
    };

    struct LakeCollisionComponent
    {
        static constexpr std::string_view Name = "LakeCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBodySetup = 0x560;
            static constexpr std::uintptr_t BoxExtent = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedBodySetup", 0x560, "ObjectProperty"},
            {"BoxExtent", 0x568, "StructProperty"},
        }};
    };

    struct LakeGenerator
    {
        static constexpr std::string_view Name = "LakeGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t LakeMeshComp = 0x28;
            static constexpr std::uintptr_t LakeCollisionComp = 0x30;
            static constexpr std::uintptr_t LakeCollision = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LakeMeshComp", 0x28, "ObjectProperty"},
            {"LakeCollisionComp", 0x30, "ObjectProperty"},
            {"LakeCollision", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterfaceWater
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceWater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bFindWaterBodyOnSpawn = 0x38;
            static constexpr std::uintptr_t bEvaluateSystemDepth = 0x39;
            static constexpr std::uintptr_t bEvaluateSystemDepthPerFrame = 0x3A;
            static constexpr std::uintptr_t SourceBodyComponent = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bFindWaterBodyOnSpawn", 0x38, "BoolProperty"},
            {"bEvaluateSystemDepth", 0x39, "BoolProperty"},
            {"bEvaluateSystemDepthPerFrame", 0x3A, "BoolProperty"},
            {"SourceBodyComponent", 0x40, "SoftObjectProperty"},
        }};
    };

    struct NiagaraWaterFunctionLibrary
    {
        static constexpr std::string_view Name = "NiagaraWaterFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetWaterBody",
            "SetWaterBodyComponent",
        }};
    };

    struct OceanBoxCollisionComponent
    {
        static constexpr std::string_view Name = "OceanBoxCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoxComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxExtent = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxExtent", 0x580, "StructProperty"},
        }};
    };

    struct OceanCollisionComponent
    {
        static constexpr std::string_view Name = "OceanCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBodySetup = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedBodySetup", 0x560, "ObjectProperty"},
        }};
    };

    struct OceanGenerator
    {
        static constexpr std::string_view Name = "OceanGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionBoxes = 0x28;
            static constexpr std::uintptr_t CollisionHullSets = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionBoxes", 0x28, "ArrayProperty"},
            {"CollisionHullSets", 0x38, "ArrayProperty"},
        }};
    };

    struct RiverGenerator
    {
        static constexpr std::string_view Name = "RiverGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMeshComponents = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SplineMeshComponents", 0x28, "ArrayProperty"},
        }};
    };

    struct ShallowWaterSimulationData
    {
        static constexpr std::string_view Name = "ShallowWaterSimulationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShallowWaterSimulationDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrayValues = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ArrayValues", 0x70, "ArrayProperty"},
        }};
    };

    struct ShallowWaterSimulationData16
    {
        static constexpr std::string_view Name = "ShallowWaterSimulationData16";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShallowWaterSimulationDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrayValues = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ArrayValues", 0x70, "ArrayProperty"},
        }};
    };

    struct ShallowWaterSimulationDataBase
    {
        static constexpr std::string_view Name = "ShallowWaterSimulationDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NumCells = 0x28;
            static constexpr std::uintptr_t Position = 0x30;
            static constexpr std::uintptr_t Size = 0x48;
            static constexpr std::uintptr_t BakedTexture = 0x58;
            static constexpr std::uintptr_t BakedHeightTexture = 0x60;
            static constexpr std::uintptr_t BakedDepthMax = 0x68;
            static constexpr std::uintptr_t BakedVelocityMaxSpeed = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NumCells", 0x28, "StructProperty"},
            {"Position", 0x30, "StructProperty"},
            {"Size", 0x48, "StructProperty"},
            {"BakedTexture", 0x58, "ObjectProperty"},
            {"BakedHeightTexture", 0x60, "ObjectProperty"},
            {"BakedDepthMax", 0x68, "FloatProperty"},
            {"BakedVelocityMaxSpeed", 0x6C, "FloatProperty"},
        }};
    };

    struct ShallowWaterSimulationDataSparse
    {
        static constexpr std::string_view Name = "ShallowWaterSimulationDataSparse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShallowWaterSimulationDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockValues = 0x70;
            static constexpr std::uintptr_t GridIndexToBlockIndex = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlockValues", 0x70, "ArrayProperty"},
            {"GridIndexToBlockIndex", 0x80, "MapProperty"},
        }};
    };

    struct ShallowWaterSimulationGrid_DEPRECATED
    {
        static constexpr std::string_view Name = "ShallowWaterSimulationGrid_DEPRECATED";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrayValues = 0x0;
            static constexpr std::uintptr_t NumCells = 0x10;
            static constexpr std::uintptr_t Position = 0x18;
            static constexpr std::uintptr_t Size = 0x30;
            static constexpr std::uintptr_t Dx = 0x40;
            static constexpr std::uintptr_t BakedTexture = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ArrayValues", 0x0, "ArrayProperty"},
            {"NumCells", 0x10, "StructProperty"},
            {"Position", 0x18, "StructProperty"},
            {"Size", 0x30, "StructProperty"},
            {"Dx", 0x40, "StructProperty"},
            {"BakedTexture", 0x50, "ObjectProperty"},
        }};
    };

    struct SphericalPontoon
    {
        static constexpr std::string_view Name = "SphericalPontoon";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CenterSocket = 0x0;
            static constexpr std::uintptr_t RelativeLocation = 0x8;
            static constexpr std::uintptr_t Radius = 0x20;
            static constexpr std::uintptr_t bFXEnabled = 0x24;
            static constexpr std::uintptr_t LocalForce = 0x28;
            static constexpr std::uintptr_t CenterLocation = 0x40;
            static constexpr std::uintptr_t SocketRotation = 0x60;
            static constexpr std::uintptr_t Offset = 0x80;
            static constexpr std::uintptr_t WaterHeight = 0x9C;
            static constexpr std::uintptr_t WaterDepth = 0xA0;
            static constexpr std::uintptr_t ImmersionDepth = 0xA4;
            static constexpr std::uintptr_t WaterPlaneLocation = 0xA8;
            static constexpr std::uintptr_t WaterPlaneNormal = 0xC0;
            static constexpr std::uintptr_t WaterSurfacePosition = 0xD8;
            static constexpr std::uintptr_t WaterVelocity = 0xF0;
            static constexpr std::uintptr_t WaterBodyIndex = 0x108;
            static constexpr std::uintptr_t bIsInWater = 0x10C;
            static constexpr std::uintptr_t CurrentWaterBodyComponent = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CenterSocket", 0x0, "NameProperty"},
            {"RelativeLocation", 0x8, "StructProperty"},
            {"Radius", 0x20, "FloatProperty"},
            {"bFXEnabled", 0x24, "BoolProperty"},
            {"LocalForce", 0x28, "StructProperty"},
            {"CenterLocation", 0x40, "StructProperty"},
            {"SocketRotation", 0x60, "StructProperty"},
            {"Offset", 0x80, "StructProperty"},
            {"WaterHeight", 0x9C, "FloatProperty"},
            {"WaterDepth", 0xA0, "FloatProperty"},
            {"ImmersionDepth", 0xA4, "FloatProperty"},
            {"WaterPlaneLocation", 0xA8, "StructProperty"},
            {"WaterPlaneNormal", 0xC0, "StructProperty"},
            {"WaterSurfacePosition", 0xD8, "StructProperty"},
            {"WaterVelocity", 0xF0, "StructProperty"},
            {"WaterBodyIndex", 0x108, "IntProperty"},
            {"bIsInWater", 0x10C, "BoolProperty"},
            {"CurrentWaterBodyComponent", 0x1B8, "ObjectProperty"},
        }};
    };

    struct UnderwaterPostProcessSettings
    {
        static constexpr std::string_view Name = "UnderwaterPostProcessSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Priority = 0x4;
            static constexpr std::uintptr_t BlendRadius = 0x8;
            static constexpr std::uintptr_t BlendWeight = 0xC;
            static constexpr std::uintptr_t PostProcessSettings = 0x10;
            static constexpr std::uintptr_t UnderwaterPostProcessMaterial = 0x7C0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Priority", 0x4, "FloatProperty"},
            {"BlendRadius", 0x8, "FloatProperty"},
            {"BlendWeight", 0xC, "FloatProperty"},
            {"PostProcessSettings", 0x10, "StructProperty"},
            {"UnderwaterPostProcessMaterial", 0x7C0, "ObjectProperty"},
        }};
    };

    struct UnderwaterPostProcessVolume
    {
        static constexpr std::string_view Name = "UnderwaterPostProcessVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterBody
    {
        static constexpr std::string_view Name = "WaterBody";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComp = 0x280;
            static constexpr std::uintptr_t WaterSplineMetadata = 0x288;
            static constexpr std::uintptr_t WaterBodyComponent = 0x290;
            static constexpr std::uintptr_t WaterBodyIndex = 0x298;
            static constexpr std::uintptr_t WaterBodyType = 0x29C;
            static constexpr std::uintptr_t WaterWaves = 0x2A0;
            static constexpr std::uintptr_t WaterInfoMeshComponent = 0x2A8;
            static constexpr std::uintptr_t DilatedWaterInfoMeshComponent = 0x2B0;
            static constexpr std::uintptr_t WaterBodyStaticMeshComponents = 0x2B8;
            static constexpr std::uintptr_t WaterBodyRiverComponentClass = 0x2C8;
            static constexpr std::uintptr_t WaterBodyLakeComponentClass = 0x2D0;
            static constexpr std::uintptr_t WaterBodyOceanComponentClass = 0x2D8;
            static constexpr std::uintptr_t WaterBodyCustomComponentClass = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SplineComp", 0x280, "ObjectProperty"},
            {"WaterSplineMetadata", 0x288, "ObjectProperty"},
            {"WaterBodyComponent", 0x290, "ObjectProperty"},
            {"WaterBodyIndex", 0x298, "IntProperty"},
            {"WaterBodyType", 0x29C, "EnumProperty"},
            {"WaterWaves", 0x2A0, "ObjectProperty"},
            {"WaterInfoMeshComponent", 0x2A8, "ObjectProperty"},
            {"DilatedWaterInfoMeshComponent", 0x2B0, "ObjectProperty"},
            {"WaterBodyStaticMeshComponents", 0x2B8, "ArrayProperty"},
            {"WaterBodyRiverComponentClass", 0x2C8, "ClassProperty"},
            {"WaterBodyLakeComponentClass", 0x2D0, "ClassProperty"},
            {"WaterBodyOceanComponentClass", 0x2D8, "ClassProperty"},
            {"WaterBodyCustomComponentClass", 0x2E0, "ClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "GetAudioIntensityAtSplineInputKey",
            "GetExclusionVolumes",
            "GetIslands",
            "GetRiverToLakeTransitionMaterialInstance",
            "GetRiverToOceanTransitionMaterialInstance",
            "GetWaterBodyComponent",
            "GetWaterBodyType",
            "GetWaterMaterialInstance",
            "GetWaterSpline",
            "GetWaterVelocityAtSplineInputKey",
            "GetWaterVelocityVectorAtSplineInputKey",
            "OnWaterBodyChanged",
            "SetWaterMaterial",
            "SetWaterWaves",
        }};
    };

    struct WaterBodyComponent
    {
        static constexpr std::string_view Name = "WaterBodyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWaveMaskDepth = 0x560;
            static constexpr std::uintptr_t MaxWaveHeightOffset = 0x564;
            static constexpr std::uintptr_t UnderwaterPostProcessSettings = 0x570;
            static constexpr std::uintptr_t CurveSettings = 0xD40;
            static constexpr std::uintptr_t WaterMaterial = 0xD60;
            static constexpr std::uintptr_t WaterHLODMaterial = 0xD68;
            static constexpr std::uintptr_t WaterStaticMeshMaterial = 0xD70;
            static constexpr std::uintptr_t UnderwaterPostProcessMaterial = 0xD78;
            static constexpr std::uintptr_t WaterInfoMaterial = 0xD80;
            static constexpr std::uintptr_t WaterHeightmapSettings = 0xD88;
            static constexpr std::uintptr_t LayerWeightmapSettings = 0xE20;
            static constexpr std::uintptr_t ShapeDilation = 0xE30;
            static constexpr std::uintptr_t CollisionHeightOffset = 0xE34;
            static constexpr std::uintptr_t bAffectsLandscape = 0xE38;
            static constexpr std::uintptr_t StaticMeshSettings = 0xE40;
            static constexpr std::uintptr_t WaterBodyIndex = 0xE50;
            static constexpr std::uintptr_t WaterMeshOverride = 0xE58;
            static constexpr std::uintptr_t bAlwaysGenerateWaterMeshTiles = 0xE60;
            static constexpr std::uintptr_t OverlapMaterialPriority = 0xE64;
            static constexpr std::uintptr_t WaterSplineMetadata = 0xE68;
            static constexpr std::uintptr_t WaterMID = 0xE70;
            static constexpr std::uintptr_t WaterStaticMeshMID = 0xE78;
            static constexpr std::uintptr_t UnderwaterPostProcessMID = 0xE80;
            static constexpr std::uintptr_t WaterInfoMID = 0xE88;
            static constexpr std::uintptr_t WaterBodyIslands = 0xE90;
            static constexpr std::uintptr_t WaterBodyExclusionVolumes = 0xEA0;
            static constexpr std::uintptr_t Landscape = 0xEB0;
            static constexpr std::uintptr_t OwningWaterZone = 0xEB8;
            static constexpr std::uintptr_t WaterZoneOverride = 0xED8;
            static constexpr std::uintptr_t CurrentPostProcessSettings = 0xF00;
            static constexpr std::uintptr_t WaterNavAreaClass = 0x16B0;
            static constexpr std::uintptr_t FixedWaterDepth = 0x16B8;
            static constexpr std::uintptr_t BakedShallowWaterSim = 0x16C0;
            static constexpr std::uintptr_t bUseBakedSimForQueriesAndPhysics = 0x16C8;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"TargetWaveMaskDepth", 0x560, "FloatProperty"},
            {"MaxWaveHeightOffset", 0x564, "FloatProperty"},
            {"UnderwaterPostProcessSettings", 0x570, "StructProperty"},
            {"CurveSettings", 0xD40, "StructProperty"},
            {"WaterMaterial", 0xD60, "ObjectProperty"},
            {"WaterHLODMaterial", 0xD68, "ObjectProperty"},
            {"WaterStaticMeshMaterial", 0xD70, "ObjectProperty"},
            {"UnderwaterPostProcessMaterial", 0xD78, "ObjectProperty"},
            {"WaterInfoMaterial", 0xD80, "ObjectProperty"},
            {"WaterHeightmapSettings", 0xD88, "StructProperty"},
            {"LayerWeightmapSettings", 0xE20, "MapProperty"},
            {"ShapeDilation", 0xE30, "FloatProperty"},
            {"CollisionHeightOffset", 0xE34, "FloatProperty"},
            {"bAffectsLandscape", 0xE38, "BoolProperty"},
            {"StaticMeshSettings", 0xE40, "StructProperty"},
            {"WaterBodyIndex", 0xE50, "IntProperty"},
            {"WaterMeshOverride", 0xE58, "ObjectProperty"},
            {"bAlwaysGenerateWaterMeshTiles", 0xE60, "BoolProperty"},
            {"OverlapMaterialPriority", 0xE64, "IntProperty"},
            {"WaterSplineMetadata", 0xE68, "ObjectProperty"},
            {"WaterMID", 0xE70, "ObjectProperty"},
            {"WaterStaticMeshMID", 0xE78, "ObjectProperty"},
            {"UnderwaterPostProcessMID", 0xE80, "ObjectProperty"},
            {"WaterInfoMID", 0xE88, "ObjectProperty"},
            {"WaterBodyIslands", 0xE90, "ArrayProperty"},
            {"WaterBodyExclusionVolumes", 0xEA0, "ArrayProperty"},
            {"Landscape", 0xEB0, "WeakObjectProperty"},
            {"OwningWaterZone", 0xEB8, "SoftObjectProperty"},
            {"WaterZoneOverride", 0xED8, "SoftObjectProperty"},
            {"CurrentPostProcessSettings", 0xF00, "StructProperty"},
            {"WaterNavAreaClass", 0x16B0, "ClassProperty"},
            {"FixedWaterDepth", 0x16B8, "DoubleProperty"},
            {"BakedShallowWaterSim", 0x16C0, "WeakObjectProperty"},
            {"bUseBakedSimForQueriesAndPhysics", 0x16C8, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 31> FunctionNames{{
            "GetAudioIntensityAtSplineInputKey",
            "GetCollisionComponents",
            "GetExclusionVolumes",
            "GetIslands",
            "GetMaxWaveHeight",
            "GetRiverToLakeTransitionMaterial",
            "GetRiverToLakeTransitionMaterialInstance",
            "GetRiverToOceanTransitionMaterial",
            "GetRiverToOceanTransitionMaterialInstance",
            "GetStandardRenderableComponents",
            "GetUnderwaterPostProcessMaterialInstance",
            "GetWaterBodyActor",
            "GetWaterInfoMaterialInstance",
            "GetWaterLODMaterialInstance",
            "GetWaterMaterial",
            "GetWaterMaterialInstance",
            "GetWaterSpline",
            "GetWaterStaticMeshMaterialInstance",
            "GetWaterSurfaceInfoAtLocation",
            "GetWaterVelocityAtSplineInputKey",
            "GetWaterVelocityVectorAtSplineInputKey",
            "GetWaterWaves",
            "OnWaterBodyChanged",
            "SetAudioIntensityAtSplineInputKey",
            "SetUnderwaterPostProcessMaterial",
            "SetWaterAndUnderWaterPostProcessMaterial",
            "SetWaterInfoMaterial",
            "SetWaterMaterial",
            "SetWaterStaticMeshMaterial",
            "SetWaterVelocityAtSplineInputKey",
            "SetWaterZoneOverride",
        }};
    };

    struct WaterBodyCustom
    {
        static constexpr std::string_view Name = "WaterBodyCustom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBody";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComp = 0x280;
            static constexpr std::uintptr_t WaterSplineMetadata = 0x288;
            static constexpr std::uintptr_t WaterBodyComponent = 0x290;
            static constexpr std::uintptr_t WaterBodyIndex = 0x298;
            static constexpr std::uintptr_t WaterBodyType = 0x29C;
            static constexpr std::uintptr_t WaterWaves = 0x2A0;
            static constexpr std::uintptr_t WaterInfoMeshComponent = 0x2A8;
            static constexpr std::uintptr_t DilatedWaterInfoMeshComponent = 0x2B0;
            static constexpr std::uintptr_t WaterBodyStaticMeshComponents = 0x2B8;
            static constexpr std::uintptr_t WaterBodyRiverComponentClass = 0x2C8;
            static constexpr std::uintptr_t WaterBodyLakeComponentClass = 0x2D0;
            static constexpr std::uintptr_t WaterBodyOceanComponentClass = 0x2D8;
            static constexpr std::uintptr_t WaterBodyCustomComponentClass = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SplineComp", 0x280, "ObjectProperty"},
            {"WaterSplineMetadata", 0x288, "ObjectProperty"},
            {"WaterBodyComponent", 0x290, "ObjectProperty"},
            {"WaterBodyIndex", 0x298, "IntProperty"},
            {"WaterBodyType", 0x29C, "EnumProperty"},
            {"WaterWaves", 0x2A0, "ObjectProperty"},
            {"WaterInfoMeshComponent", 0x2A8, "ObjectProperty"},
            {"DilatedWaterInfoMeshComponent", 0x2B0, "ObjectProperty"},
            {"WaterBodyStaticMeshComponents", 0x2B8, "ArrayProperty"},
            {"WaterBodyRiverComponentClass", 0x2C8, "ClassProperty"},
            {"WaterBodyLakeComponentClass", 0x2D0, "ClassProperty"},
            {"WaterBodyOceanComponentClass", 0x2D8, "ClassProperty"},
            {"WaterBodyCustomComponentClass", 0x2E0, "ClassProperty"},
        }};
    };

    struct WaterBodyCustomComponent
    {
        static constexpr std::string_view Name = "WaterBodyCustomComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComp = 0x16D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshComp", 0x16D0, "ObjectProperty"},
        }};
    };

    struct WaterBodyExclusionVolume
    {
        static constexpr std::string_view Name = "WaterBodyExclusionVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PhysicsVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t ExclusionMode = 0x2C0;
            static constexpr std::uintptr_t WaterBodies = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExclusionMode", 0x2C0, "EnumProperty"},
            {"WaterBodies", 0x2C8, "ArrayProperty"},
        }};
    };

    struct WaterBodyGenerator
    {
        static constexpr std::string_view Name = "WaterBodyGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterBodyHLODBuilder
    {
        static constexpr std::string_view Name = "WaterBodyHLODBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HLODBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterBodyHeightmapSettings
    {
        static constexpr std::string_view Name = "WaterBodyHeightmapSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendMode = 0x0;
            static constexpr std::uintptr_t FalloffSettings = 0x4;
            static constexpr std::uintptr_t Effects = 0x18;
            static constexpr std::uintptr_t bInvertShape = 0x90;
            static constexpr std::uintptr_t Priority = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BlendMode", 0x0, "EnumProperty"},
            {"FalloffSettings", 0x4, "StructProperty"},
            {"Effects", 0x18, "StructProperty"},
            {"bInvertShape", 0x90, "BoolProperty"},
            {"Priority", 0x94, "IntProperty"},
        }};
    };

    struct WaterBodyInfoMeshComponent
    {
        static constexpr std::string_view Name = "WaterBodyInfoMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDilatedMesh = 0x6A0;
            static constexpr std::uintptr_t bIsConservativeRasterCompatible = 0x6A1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsDilatedMesh", 0x6A0, "BoolProperty"},
            {"bIsConservativeRasterCompatible", 0x6A1, "BoolProperty"},
        }};
    };

    struct WaterBodyIsland
    {
        static constexpr std::string_view Name = "WaterBodyIsland";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterCurveSettings = 0x280;
            static constexpr std::uintptr_t WaterHeightmapSettings = 0x2A0;
            static constexpr std::uintptr_t WaterWeightmapSettings = 0x338;
            static constexpr std::uintptr_t SplineComp = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WaterCurveSettings", 0x280, "StructProperty"},
            {"WaterHeightmapSettings", 0x2A0, "StructProperty"},
            {"WaterWeightmapSettings", 0x338, "MapProperty"},
            {"SplineComp", 0x348, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetWaterSpline",
        }};
    };

    struct WaterBodyLake
    {
        static constexpr std::string_view Name = "WaterBodyLake";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBody";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComp = 0x280;
            static constexpr std::uintptr_t WaterSplineMetadata = 0x288;
            static constexpr std::uintptr_t WaterBodyComponent = 0x290;
            static constexpr std::uintptr_t WaterBodyIndex = 0x298;
            static constexpr std::uintptr_t WaterBodyType = 0x29C;
            static constexpr std::uintptr_t WaterWaves = 0x2A0;
            static constexpr std::uintptr_t WaterInfoMeshComponent = 0x2A8;
            static constexpr std::uintptr_t DilatedWaterInfoMeshComponent = 0x2B0;
            static constexpr std::uintptr_t WaterBodyStaticMeshComponents = 0x2B8;
            static constexpr std::uintptr_t WaterBodyRiverComponentClass = 0x2C8;
            static constexpr std::uintptr_t WaterBodyLakeComponentClass = 0x2D0;
            static constexpr std::uintptr_t WaterBodyOceanComponentClass = 0x2D8;
            static constexpr std::uintptr_t WaterBodyCustomComponentClass = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SplineComp", 0x280, "ObjectProperty"},
            {"WaterSplineMetadata", 0x288, "ObjectProperty"},
            {"WaterBodyComponent", 0x290, "ObjectProperty"},
            {"WaterBodyIndex", 0x298, "IntProperty"},
            {"WaterBodyType", 0x29C, "EnumProperty"},
            {"WaterWaves", 0x2A0, "ObjectProperty"},
            {"WaterInfoMeshComponent", 0x2A8, "ObjectProperty"},
            {"DilatedWaterInfoMeshComponent", 0x2B0, "ObjectProperty"},
            {"WaterBodyStaticMeshComponents", 0x2B8, "ArrayProperty"},
            {"WaterBodyRiverComponentClass", 0x2C8, "ClassProperty"},
            {"WaterBodyLakeComponentClass", 0x2D0, "ClassProperty"},
            {"WaterBodyOceanComponentClass", 0x2D8, "ClassProperty"},
            {"WaterBodyCustomComponentClass", 0x2E0, "ClassProperty"},
        }};
    };

    struct WaterBodyLakeComponent
    {
        static constexpr std::string_view Name = "WaterBodyLakeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LakeMeshComp = 0x16D0;
            static constexpr std::uintptr_t LakeCollision = 0x16D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LakeMeshComp", 0x16D0, "ObjectProperty"},
            {"LakeCollision", 0x16D8, "ObjectProperty"},
        }};
    };

    struct WaterBodyMeshComponent
    {
        static constexpr std::string_view Name = "WaterBodyMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};
    };

    struct WaterBodyOcean
    {
        static constexpr std::string_view Name = "WaterBodyOcean";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBody";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComp = 0x280;
            static constexpr std::uintptr_t WaterSplineMetadata = 0x288;
            static constexpr std::uintptr_t WaterBodyComponent = 0x290;
            static constexpr std::uintptr_t WaterBodyIndex = 0x298;
            static constexpr std::uintptr_t WaterBodyType = 0x29C;
            static constexpr std::uintptr_t WaterWaves = 0x2A0;
            static constexpr std::uintptr_t WaterInfoMeshComponent = 0x2A8;
            static constexpr std::uintptr_t DilatedWaterInfoMeshComponent = 0x2B0;
            static constexpr std::uintptr_t WaterBodyStaticMeshComponents = 0x2B8;
            static constexpr std::uintptr_t WaterBodyRiverComponentClass = 0x2C8;
            static constexpr std::uintptr_t WaterBodyLakeComponentClass = 0x2D0;
            static constexpr std::uintptr_t WaterBodyOceanComponentClass = 0x2D8;
            static constexpr std::uintptr_t WaterBodyCustomComponentClass = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SplineComp", 0x280, "ObjectProperty"},
            {"WaterSplineMetadata", 0x288, "ObjectProperty"},
            {"WaterBodyComponent", 0x290, "ObjectProperty"},
            {"WaterBodyIndex", 0x298, "IntProperty"},
            {"WaterBodyType", 0x29C, "EnumProperty"},
            {"WaterWaves", 0x2A0, "ObjectProperty"},
            {"WaterInfoMeshComponent", 0x2A8, "ObjectProperty"},
            {"DilatedWaterInfoMeshComponent", 0x2B0, "ObjectProperty"},
            {"WaterBodyStaticMeshComponents", 0x2B8, "ArrayProperty"},
            {"WaterBodyRiverComponentClass", 0x2C8, "ClassProperty"},
            {"WaterBodyLakeComponentClass", 0x2D0, "ClassProperty"},
            {"WaterBodyOceanComponentClass", 0x2D8, "ClassProperty"},
            {"WaterBodyCustomComponentClass", 0x2E0, "ClassProperty"},
        }};
    };

    struct WaterBodyOceanComponent
    {
        static constexpr std::string_view Name = "WaterBodyOceanComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionBoxes = 0x16D0;
            static constexpr std::uintptr_t CollisionHullSets = 0x16E0;
            static constexpr std::uintptr_t CollisionExtents = 0x16F0;
            static constexpr std::uintptr_t OceanExtents = 0x1708;
            static constexpr std::uintptr_t SavedZoneLocation = 0x1718;
            static constexpr std::uintptr_t bCenterOnWaterZone = 0x1728;
            static constexpr std::uintptr_t HeightOffset = 0x172C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CollisionBoxes", 0x16D0, "ArrayProperty"},
            {"CollisionHullSets", 0x16E0, "ArrayProperty"},
            {"CollisionExtents", 0x16F0, "StructProperty"},
            {"OceanExtents", 0x1708, "StructProperty"},
            {"SavedZoneLocation", 0x1718, "StructProperty"},
            {"bCenterOnWaterZone", 0x1728, "BoolProperty"},
            {"HeightOffset", 0x172C, "FloatProperty"},
        }};
    };

    struct WaterBodyRiver
    {
        static constexpr std::string_view Name = "WaterBodyRiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBody";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComp = 0x280;
            static constexpr std::uintptr_t WaterSplineMetadata = 0x288;
            static constexpr std::uintptr_t WaterBodyComponent = 0x290;
            static constexpr std::uintptr_t WaterBodyIndex = 0x298;
            static constexpr std::uintptr_t WaterBodyType = 0x29C;
            static constexpr std::uintptr_t WaterWaves = 0x2A0;
            static constexpr std::uintptr_t WaterInfoMeshComponent = 0x2A8;
            static constexpr std::uintptr_t DilatedWaterInfoMeshComponent = 0x2B0;
            static constexpr std::uintptr_t WaterBodyStaticMeshComponents = 0x2B8;
            static constexpr std::uintptr_t WaterBodyRiverComponentClass = 0x2C8;
            static constexpr std::uintptr_t WaterBodyLakeComponentClass = 0x2D0;
            static constexpr std::uintptr_t WaterBodyOceanComponentClass = 0x2D8;
            static constexpr std::uintptr_t WaterBodyCustomComponentClass = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SplineComp", 0x280, "ObjectProperty"},
            {"WaterSplineMetadata", 0x288, "ObjectProperty"},
            {"WaterBodyComponent", 0x290, "ObjectProperty"},
            {"WaterBodyIndex", 0x298, "IntProperty"},
            {"WaterBodyType", 0x29C, "EnumProperty"},
            {"WaterWaves", 0x2A0, "ObjectProperty"},
            {"WaterInfoMeshComponent", 0x2A8, "ObjectProperty"},
            {"DilatedWaterInfoMeshComponent", 0x2B0, "ObjectProperty"},
            {"WaterBodyStaticMeshComponents", 0x2B8, "ArrayProperty"},
            {"WaterBodyRiverComponentClass", 0x2C8, "ClassProperty"},
            {"WaterBodyLakeComponentClass", 0x2D0, "ClassProperty"},
            {"WaterBodyOceanComponentClass", 0x2D8, "ClassProperty"},
            {"WaterBodyCustomComponentClass", 0x2E0, "ClassProperty"},
        }};
    };

    struct WaterBodyRiverComponent
    {
        static constexpr std::string_view Name = "WaterBodyRiverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMeshComponents = 0x16D0;
            static constexpr std::uintptr_t LakeTransitionMaterial = 0x16E0;
            static constexpr std::uintptr_t LakeTransitionMID = 0x16E8;
            static constexpr std::uintptr_t OceanTransitionMaterial = 0x16F0;
            static constexpr std::uintptr_t OceanTransitionMID = 0x16F8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SplineMeshComponents", 0x16D0, "ArrayProperty"},
            {"LakeTransitionMaterial", 0x16E0, "ObjectProperty"},
            {"LakeTransitionMID", 0x16E8, "ObjectProperty"},
            {"OceanTransitionMaterial", 0x16F0, "ObjectProperty"},
            {"OceanTransitionMID", 0x16F8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetRiverDepthAtSplineInputKey",
            "GetRiverWidthAtSplineInputKey",
            "SetLakeAndOceanTransitionMaterials",
            "SetLakeTransitionMaterial",
            "SetOceanTransitionMaterial",
            "SetRiverDepthAtSplineInputKey",
            "SetRiverWidthAtSplineInputKey",
        }};
    };

    struct WaterBodyStaticMeshComponent
    {
        static constexpr std::string_view Name = "WaterBodyStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterBodyMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};
    };

    struct WaterBodyStaticMeshSettings
    {
        static constexpr std::string_view Name = "WaterBodyStaticMeshSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableWaterBodyStaticMesh = 0x0;
            static constexpr std::uintptr_t bSectionWaterBodyStaticMesh = 0x1;
            static constexpr std::uintptr_t SectionSize = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableWaterBodyStaticMesh", 0x0, "BoolProperty"},
            {"bSectionWaterBodyStaticMesh", 0x1, "BoolProperty"},
            {"SectionSize", 0x8, "DoubleProperty"},
        }};
    };

    struct WaterBodyWeightmapSettings
    {
        static constexpr std::string_view Name = "WaterBodyWeightmapSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FalloffWidth = 0x0;
            static constexpr std::uintptr_t EdgeOffset = 0x4;
            static constexpr std::uintptr_t ModulationTexture = 0x8;
            static constexpr std::uintptr_t TextureTiling = 0x28;
            static constexpr std::uintptr_t TextureInfluence = 0x2C;
            static constexpr std::uintptr_t Midpoint = 0x30;
            static constexpr std::uintptr_t FinalOpacity = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FalloffWidth", 0x0, "FloatProperty"},
            {"EdgeOffset", 0x4, "FloatProperty"},
            {"ModulationTexture", 0x8, "SoftObjectProperty"},
            {"TextureTiling", 0x28, "FloatProperty"},
            {"TextureInfluence", 0x2C, "FloatProperty"},
            {"Midpoint", 0x30, "FloatProperty"},
            {"FinalOpacity", 0x34, "FloatProperty"},
        }};
    };

    struct WaterBrushActorInterface
    {
        static constexpr std::string_view Name = "WaterBrushActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterBrushEffectBlurring
    {
        static constexpr std::string_view Name = "WaterBrushEffectBlurring";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlurShape = 0x0;
            static constexpr std::uintptr_t Radius = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bBlurShape", 0x0, "BoolProperty"},
            {"Radius", 0x4, "IntProperty"},
        }};
    };

    struct WaterBrushEffectCurlNoise
    {
        static constexpr std::string_view Name = "WaterBrushEffectCurlNoise";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curl1Amount = 0x0;
            static constexpr std::uintptr_t Curl2Amount = 0x4;
            static constexpr std::uintptr_t Curl1Tiling = 0x8;
            static constexpr std::uintptr_t Curl2Tiling = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Curl1Amount", 0x0, "FloatProperty"},
            {"Curl2Amount", 0x4, "FloatProperty"},
            {"Curl1Tiling", 0x8, "FloatProperty"},
            {"Curl2Tiling", 0xC, "FloatProperty"},
        }};
    };

    struct WaterBrushEffectCurves
    {
        static constexpr std::string_view Name = "WaterBrushEffectCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCurveChannel = 0x0;
            static constexpr std::uintptr_t ElevationCurveAsset = 0x8;
            static constexpr std::uintptr_t ChannelEdgeOffset = 0x10;
            static constexpr std::uintptr_t ChannelDepth = 0x14;
            static constexpr std::uintptr_t CurveRampWidth = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseCurveChannel", 0x0, "BoolProperty"},
            {"ElevationCurveAsset", 0x8, "ObjectProperty"},
            {"ChannelEdgeOffset", 0x10, "FloatProperty"},
            {"ChannelDepth", 0x14, "FloatProperty"},
            {"CurveRampWidth", 0x18, "FloatProperty"},
        }};
    };

    struct WaterBrushEffectDisplacement
    {
        static constexpr std::string_view Name = "WaterBrushEffectDisplacement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplacementHeight = 0x0;
            static constexpr std::uintptr_t DisplacementTiling = 0x4;
            static constexpr std::uintptr_t Texture = 0x8;
            static constexpr std::uintptr_t Midpoint = 0x28;
            static constexpr std::uintptr_t Channel = 0x2C;
            static constexpr std::uintptr_t WeightmapInfluence = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplacementHeight", 0x0, "FloatProperty"},
            {"DisplacementTiling", 0x4, "FloatProperty"},
            {"Texture", 0x8, "SoftObjectProperty"},
            {"Midpoint", 0x28, "FloatProperty"},
            {"Channel", 0x2C, "StructProperty"},
            {"WeightmapInfluence", 0x3C, "FloatProperty"},
        }};
    };

    struct WaterBrushEffectSmoothBlending
    {
        static constexpr std::string_view Name = "WaterBrushEffectSmoothBlending";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerSmoothDistance = 0x0;
            static constexpr std::uintptr_t OuterSmoothDistance = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InnerSmoothDistance", 0x0, "FloatProperty"},
            {"OuterSmoothDistance", 0x4, "FloatProperty"},
        }};
    };

    struct WaterBrushEffectTerracing
    {
        static constexpr std::string_view Name = "WaterBrushEffectTerracing";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TerraceAlpha = 0x0;
            static constexpr std::uintptr_t TerraceSpacing = 0x4;
            static constexpr std::uintptr_t TerraceSmoothness = 0x8;
            static constexpr std::uintptr_t MaskLength = 0xC;
            static constexpr std::uintptr_t MaskStartOffset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TerraceAlpha", 0x0, "FloatProperty"},
            {"TerraceSpacing", 0x4, "FloatProperty"},
            {"TerraceSmoothness", 0x8, "FloatProperty"},
            {"MaskLength", 0xC, "FloatProperty"},
            {"MaskStartOffset", 0x10, "FloatProperty"},
        }};
    };

    struct WaterBrushEffects
    {
        static constexpr std::string_view Name = "WaterBrushEffects";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Blurring = 0x0;
            static constexpr std::uintptr_t CurlNoise = 0x8;
            static constexpr std::uintptr_t Displacement = 0x18;
            static constexpr std::uintptr_t SmoothBlending = 0x58;
            static constexpr std::uintptr_t Terracing = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Blurring", 0x0, "StructProperty"},
            {"CurlNoise", 0x8, "StructProperty"},
            {"Displacement", 0x18, "StructProperty"},
            {"SmoothBlending", 0x58, "StructProperty"},
            {"Terracing", 0x60, "StructProperty"},
        }};
    };

    struct WaterCurveSettings
    {
        static constexpr std::string_view Name = "WaterCurveSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCurveChannel = 0x0;
            static constexpr std::uintptr_t ElevationCurveAsset = 0x8;
            static constexpr std::uintptr_t ChannelEdgeOffset = 0x10;
            static constexpr std::uintptr_t ChannelDepth = 0x14;
            static constexpr std::uintptr_t CurveRampWidth = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseCurveChannel", 0x0, "BoolProperty"},
            {"ElevationCurveAsset", 0x8, "ObjectProperty"},
            {"ChannelEdgeOffset", 0x10, "FloatProperty"},
            {"ChannelDepth", 0x14, "FloatProperty"},
            {"CurveRampWidth", 0x18, "FloatProperty"},
        }};
    };

    struct WaterFalloffSettings
    {
        static constexpr std::string_view Name = "WaterFalloffSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FalloffMode = 0x0;
            static constexpr std::uintptr_t FalloffAngle = 0x4;
            static constexpr std::uintptr_t FalloffWidth = 0x8;
            static constexpr std::uintptr_t EdgeOffset = 0xC;
            static constexpr std::uintptr_t ZOffset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FalloffMode", 0x0, "EnumProperty"},
            {"FalloffAngle", 0x4, "FloatProperty"},
            {"FalloffWidth", 0x8, "FloatProperty"},
            {"EdgeOffset", 0xC, "FloatProperty"},
            {"ZOffset", 0x10, "FloatProperty"},
        }};
    };

    struct WaterMeshComponent
    {
        static constexpr std::string_view Name = "WaterMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceCollapseDensityLevel = 0x5C0;
            static constexpr std::uintptr_t FarDistanceMaterial = 0x5C8;
            static constexpr std::uintptr_t FarDistanceMeshExtent = 0x5D0;
            static constexpr std::uintptr_t TileSize = 0x5D4;
            static constexpr std::uintptr_t QuadTreeResolution = 0x5D8;
            static constexpr std::uintptr_t UsedMaterials = 0x738;
            static constexpr std::uintptr_t MaterialToMID = 0x748;
            static constexpr std::uintptr_t bUseFarMeshWithoutOcean = 0x758;
            static constexpr std::uintptr_t FarDistanceMeshHeightWithoutOcean = 0x760;
            static constexpr std::uintptr_t TessellationFactor = 0x778;
            static constexpr std::uintptr_t LODScale = 0x77C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ForceCollapseDensityLevel", 0x5C0, "IntProperty"},
            {"FarDistanceMaterial", 0x5C8, "ObjectProperty"},
            {"FarDistanceMeshExtent", 0x5D0, "FloatProperty"},
            {"TileSize", 0x5D4, "FloatProperty"},
            {"QuadTreeResolution", 0x5D8, "StructProperty"},
            {"UsedMaterials", 0x738, "SetProperty"},
            {"MaterialToMID", 0x748, "MapProperty"},
            {"bUseFarMeshWithoutOcean", 0x758, "BoolProperty"},
            {"FarDistanceMeshHeightWithoutOcean", 0x760, "DoubleProperty"},
            {"TessellationFactor", 0x778, "IntProperty"},
            {"LODScale", 0x77C, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsEnabled",
        }};
    };

    struct WaterRuntimeSettings
    {
        static constexpr std::string_view Name = "WaterRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionChannelForWaterTraces = 0x30;
            static constexpr std::uintptr_t MaterialParameterCollection = 0x38;
            static constexpr std::uintptr_t WaterBodyIconWorldZOffset = 0x58;
            static constexpr std::uintptr_t DefaultWaterCollisionProfileName = 0x5C;
            static constexpr std::uintptr_t DefaultWaterInfoMaterial = 0x60;
            static constexpr std::uintptr_t WaterBodyRiverComponentClass = 0x80;
            static constexpr std::uintptr_t WaterBodyLakeComponentClass = 0x88;
            static constexpr std::uintptr_t WaterBodyOceanComponentClass = 0x90;
            static constexpr std::uintptr_t WaterBodyCustomComponentClass = 0x98;
            static constexpr std::uintptr_t bWarnOnMismatchOceanExtent = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CollisionChannelForWaterTraces", 0x30, "ByteProperty"},
            {"MaterialParameterCollection", 0x38, "SoftObjectProperty"},
            {"WaterBodyIconWorldZOffset", 0x58, "FloatProperty"},
            {"DefaultWaterCollisionProfileName", 0x5C, "NameProperty"},
            {"DefaultWaterInfoMaterial", 0x60, "SoftObjectProperty"},
            {"WaterBodyRiverComponentClass", 0x80, "ClassProperty"},
            {"WaterBodyLakeComponentClass", 0x88, "ClassProperty"},
            {"WaterBodyOceanComponentClass", 0x90, "ClassProperty"},
            {"WaterBodyCustomComponentClass", 0x98, "ClassProperty"},
            {"bWarnOnMismatchOceanExtent", 0xA0, "BoolProperty"},
        }};
    };

    struct WaterSplineComponent
    {
        static constexpr std::string_view Name = "WaterSplineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterSplineDefaults = 0x6C0;
            static constexpr std::uintptr_t PreviousWaterSplineDefaults = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WaterSplineDefaults", 0x6C0, "StructProperty"},
            {"PreviousWaterSplineDefaults", 0x6D0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "K2_SynchronizeAndBroadcastDataChange",
        }};
    };

    struct WaterSplineCurveDefaults
    {
        static constexpr std::string_view Name = "WaterSplineCurveDefaults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultDepth = 0x0;
            static constexpr std::uintptr_t DefaultWidth = 0x4;
            static constexpr std::uintptr_t DefaultVelocity = 0x8;
            static constexpr std::uintptr_t DefaultAudioIntensity = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultDepth", 0x0, "FloatProperty"},
            {"DefaultWidth", 0x4, "FloatProperty"},
            {"DefaultVelocity", 0x8, "FloatProperty"},
            {"DefaultAudioIntensity", 0xC, "FloatProperty"},
        }};
    };

    struct WaterSplineMetadata
    {
        static constexpr std::string_view Name = "WaterSplineMetadata";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineMetadata";
        struct Offsets
        {
            static constexpr std::uintptr_t Depth = 0x28;
            static constexpr std::uintptr_t WaterVelocityScalar = 0x40;
            static constexpr std::uintptr_t RiverWidth = 0x58;
            static constexpr std::uintptr_t AudioIntensity = 0x70;
            static constexpr std::uintptr_t WaterVelocity = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Depth", 0x28, "StructProperty"},
            {"WaterVelocityScalar", 0x40, "StructProperty"},
            {"RiverWidth", 0x58, "StructProperty"},
            {"AudioIntensity", 0x70, "StructProperty"},
            {"WaterVelocity", 0x88, "StructProperty"},
        }};
    };

    struct WaterSubsystem
    {
        static constexpr std::string_view Name = "WaterSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t BuoyancyManager = 0x48;
            static constexpr std::uintptr_t OnCameraUnderwaterStateChanged = 0x50;
            static constexpr std::uintptr_t OnWaterScalabilityChanged = 0x60;
            static constexpr std::uintptr_t DefaultRiverMesh = 0x70;
            static constexpr std::uintptr_t DefaultLakeMesh = 0x78;
            static constexpr std::uintptr_t MaterialParameterCollection = 0xA8;
            static constexpr std::uintptr_t UnderwaterPostProcessVolume = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BuoyancyManager", 0x48, "ObjectProperty"},
            {"OnCameraUnderwaterStateChanged", 0x50, "MulticastInlineDelegateProperty"},
            {"OnWaterScalabilityChanged", 0x60, "MulticastInlineDelegateProperty"},
            {"DefaultRiverMesh", 0x70, "ObjectProperty"},
            {"DefaultLakeMesh", 0x78, "ObjectProperty"},
            {"MaterialParameterCollection", 0xA8, "ObjectProperty"},
            {"UnderwaterPostProcessVolume", 0xB0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "GetCameraUnderwaterDepth",
            "GetOceanBaseHeight",
            "GetOceanFloodHeight",
            "GetOceanTotalHeight",
            "GetShallowWaterMaxDynamicForces",
            "GetShallowWaterMaxImpulseForces",
            "GetShallowWaterSimulationRenderTargetSize",
            "GetSmoothedWorldTimeSeconds",
            "GetUnderwaterCollisionTraceDistance",
            "GetUnderwaterPreciseTraceDistance",
            "GetWaterTimeSeconds",
            "IsShallowWaterSimulationEnabled",
            "IsUnderwaterPostProcessEnabled",
            "IsWaterRenderingEnabled",
            "PrintToWaterLog",
            "SetOceanFloodHeight",
        }};
    };

    struct WaterTerrainComponent
    {
        static constexpr std::string_view Name = "WaterTerrainComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterZoneOverride = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaterZoneOverride", 0xC0, "SoftObjectProperty"},
        }};
    };

    struct WaterWaves
    {
        static constexpr std::string_view Name = "WaterWaves";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterWavesBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterWavesAsset
    {
        static constexpr std::string_view Name = "WaterWavesAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterWaves = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaterWaves", 0x28, "ObjectProperty"},
        }};
    };

    struct WaterWavesAssetReference
    {
        static constexpr std::string_view Name = "WaterWavesAssetReference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WaterWavesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterWavesAsset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaterWavesAsset", 0x28, "ObjectProperty"},
        }};
    };

    struct WaterWavesBase
    {
        static constexpr std::string_view Name = "WaterWavesBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaterZone
    {
        static constexpr std::string_view Name = "WaterZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterInfoTextureArray = 0x278;
            static constexpr std::uintptr_t WaterInfoTextureArrayNumSlices = 0x280;
            static constexpr std::uintptr_t OwnedWaterBodies = 0x288;
            static constexpr std::uintptr_t RenderTargetResolution = 0x298;
            static constexpr std::uintptr_t WaterMesh = 0x2A0;
            static constexpr std::uintptr_t ZoneExtent = 0x2A8;
            static constexpr std::uintptr_t CaptureZOffset = 0x2B8;
            static constexpr std::uintptr_t bHalfPrecisionTexture = 0x2BC;
            static constexpr std::uintptr_t VelocityBlurRadius = 0x2C0;
            static constexpr std::uintptr_t OverlapPriority = 0x2C4;
            static constexpr std::uintptr_t bEnableLocalOnlyTessellation = 0x2C8;
            static constexpr std::uintptr_t LocalTessellationExtent = 0x2D0;
            static constexpr std::uintptr_t bAutoIncludeLandscapesAsTerrain = 0x2E8;
            static constexpr std::uintptr_t WaterZoneIndex = 0x2F8;
            static constexpr std::uintptr_t OnWaterInfoTextureArrayCreated = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"WaterInfoTextureArray", 0x278, "ObjectProperty"},
            {"WaterInfoTextureArrayNumSlices", 0x280, "IntProperty"},
            {"OwnedWaterBodies", 0x288, "ArrayProperty"},
            {"RenderTargetResolution", 0x298, "StructProperty"},
            {"WaterMesh", 0x2A0, "ObjectProperty"},
            {"ZoneExtent", 0x2A8, "StructProperty"},
            {"CaptureZOffset", 0x2B8, "FloatProperty"},
            {"bHalfPrecisionTexture", 0x2BC, "BoolProperty"},
            {"VelocityBlurRadius", 0x2C0, "IntProperty"},
            {"OverlapPriority", 0x2C4, "IntProperty"},
            {"bEnableLocalOnlyTessellation", 0x2C8, "BoolProperty"},
            {"LocalTessellationExtent", 0x2D0, "StructProperty"},
            {"bAutoIncludeLandscapesAsTerrain", 0x2E8, "BoolProperty"},
            {"WaterZoneIndex", 0x2F8, "IntProperty"},
            {"OnWaterInfoTextureArrayCreated", 0x300, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetWaterZoneIndex",
            "SetFarMeshMaterial",
        }};
    };

}
