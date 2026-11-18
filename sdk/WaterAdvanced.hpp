#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WaterAdvanced
{
    struct BasicShallowWaterSubsystem
    {
        static constexpr std::string_view Name = "BasicShallowWaterSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShallowWaterSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ShallowWaterNiagaraSimulation = 0x48;
            static constexpr std::uintptr_t WaterInfoTexture = 0x50;
            static constexpr std::uintptr_t NormalRT = 0x58;
            static constexpr std::uintptr_t VelocityRT = 0x60;
            static constexpr std::uintptr_t Settings = 0x68;
            static constexpr std::uintptr_t MPC = 0x70;
            static constexpr std::uintptr_t PreviousContexts = 0x138;
            static constexpr std::uintptr_t PendingContexts = 0x148;
            static constexpr std::uintptr_t VehicleCollisionProxies = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ShallowWaterNiagaraSimulation", 0x48, "ObjectProperty"},
            {"WaterInfoTexture", 0x50, "WeakObjectProperty"},
            {"NormalRT", 0x58, "ObjectProperty"},
            {"VelocityRT", 0x60, "ObjectProperty"},
            {"Settings", 0x68, "ObjectProperty"},
            {"MPC", 0x70, "ObjectProperty"},
            {"PreviousContexts", 0x138, "ArrayProperty"},
            {"PendingContexts", 0x148, "ArrayProperty"},
            {"VehicleCollisionProxies", 0x158, "MapProperty"},
        }};
    };

    struct FFTOceanPatchSubsystem
    {
        static constexpr std::string_view Name = "FFTOceanPatchSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x48, "ObjectProperty"},
        }};
    };

    struct ShallowWaterPhysicsAssetOverridesDataAsset
    {
        static constexpr std::string_view Name = "ShallowWaterPhysicsAssetOverridesDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x28, "MapProperty"},
        }};
    };

    struct ShallowWaterRiver
    {
        static constexpr std::string_view Name = "ShallowWaterRiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ShallowWaterRiverComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShallowWaterRiverComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct ShallowWaterRiverComponent
    {
        static constexpr std::string_view Name = "ShallowWaterRiverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NiagaraRiverSimulation = 0x560;
            static constexpr std::uintptr_t ResolutionMaxAxis = 0x568;
            static constexpr std::uintptr_t SourceSize = 0x56C;
            static constexpr std::uintptr_t SimSpeed = 0x570;
            static constexpr std::uintptr_t NumSteps = 0x574;
            static constexpr std::uintptr_t bMatchSpline = 0x578;
            static constexpr std::uintptr_t MatchSplineHeightAmount = 0x57C;
            static constexpr std::uintptr_t RemoveOutsideSplineAmount = 0x580;
            static constexpr std::uintptr_t bDisableCPUThrottling = 0x584;
            static constexpr std::uintptr_t SourceRiverWaterBodies = 0x588;
            static constexpr std::uintptr_t SinkRiverWaterBodies = 0x598;
            static constexpr std::uintptr_t RenderState = 0x5A8;
            static constexpr std::uintptr_t bResetUsesWaterbodyRendering = 0x5A9;
            static constexpr std::uintptr_t BakedSimMaterial = 0x5B0;
            static constexpr std::uintptr_t BakedSimUnderWaterMaterial = 0x5B8;
            static constexpr std::uintptr_t BakedSimRiverToLakeTransitionMaterial = 0x5C0;
            static constexpr std::uintptr_t BakedSimRiverToOceanTransitionMaterial = 0x5C8;
            static constexpr std::uintptr_t SplineRiverMaterial = 0x5D0;
            static constexpr std::uintptr_t SplineRiverToLakeTransitionMaterial = 0x5D8;
            static constexpr std::uintptr_t SplineRiverToOceanTransitionMaterial = 0x5E0;
            static constexpr std::uintptr_t SplineRiverUnderWaterMaterial = 0x5E8;
            static constexpr std::uintptr_t SmoothingWidth = 0x5F0;
            static constexpr std::uintptr_t SmoothingCutoff = 0x5F4;
            static constexpr std::uintptr_t bUseVirtualTextures = 0x5F8;
            static constexpr std::uintptr_t bUseNormalMapVirtualTexture = 0x5F9;
            static constexpr std::uintptr_t SimRes = 0x600;
            static constexpr std::uintptr_t SimDx = 0x610;
            static constexpr std::uintptr_t BakedWaterHeightTexture = 0x618;
            static constexpr std::uintptr_t BakedWaterSurfaceTexture = 0x620;
            static constexpr std::uintptr_t BakedWaterSurfaceNormalTexture = 0x628;
            static constexpr std::uintptr_t BakedFoamTexture = 0x630;
            static constexpr std::uintptr_t MaxEncodedDepth = 0x638;
            static constexpr std::uintptr_t MaxEncodedSpeed = 0x63C;
            static constexpr std::uintptr_t DepthEncodePercentile = 0x640;
            static constexpr std::uintptr_t VelocityEncodePercentile = 0x644;
            static constexpr std::uintptr_t BakedDepthMax = 0x648;
            static constexpr std::uintptr_t BakedVelocityMaxSpeed = 0x64C;
            static constexpr std::uintptr_t InputPaintResolutionScale = 0x650;
            static constexpr std::uintptr_t PaintPreviewMaterial = 0x658;
            static constexpr std::uintptr_t InputPaintTraceChannel = 0x660;
            static constexpr std::uintptr_t MaterialPaintTexture = 0x668;
            static constexpr std::uintptr_t bUseHeightfieldCollision = 0x670;
            static constexpr std::uintptr_t HeightfieldCollisionResolution = 0x674;
            static constexpr std::uintptr_t RiverSimSystem = 0x678;
            static constexpr std::uintptr_t WaterInfoTexture = 0x680;
            static constexpr std::uintptr_t BakedWaterSurfaceRT = 0x688;
            static constexpr std::uintptr_t BakedFoamRT = 0x690;
            static constexpr std::uintptr_t BakedWaterSurfaceNormalRT = 0x698;
            static constexpr std::uintptr_t BakedSim = 0x6A0;
            static constexpr std::uintptr_t AllWaterBodies = 0x6B0;
            static constexpr std::uintptr_t WorldGridSize = 0x6C0;
            static constexpr std::uintptr_t SystemPos = 0x6D0;
            static constexpr std::uintptr_t NormalDetailRT = 0x6E8;
            static constexpr std::uintptr_t OceanPatchSystem = 0x6F0;
            static constexpr std::uintptr_t HeightfieldBodySetup = 0x720;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"NiagaraRiverSimulation", 0x560, "ObjectProperty"},
            {"ResolutionMaxAxis", 0x568, "IntProperty"},
            {"SourceSize", 0x56C, "FloatProperty"},
            {"SimSpeed", 0x570, "FloatProperty"},
            {"NumSteps", 0x574, "IntProperty"},
            {"bMatchSpline", 0x578, "BoolProperty"},
            {"MatchSplineHeightAmount", 0x57C, "FloatProperty"},
            {"RemoveOutsideSplineAmount", 0x580, "FloatProperty"},
            {"bDisableCPUThrottling", 0x584, "BoolProperty"},
            {"SourceRiverWaterBodies", 0x588, "ArrayProperty"},
            {"SinkRiverWaterBodies", 0x598, "ArrayProperty"},
            {"RenderState", 0x5A8, "ByteProperty"},
            {"bResetUsesWaterbodyRendering", 0x5A9, "BoolProperty"},
            {"BakedSimMaterial", 0x5B0, "ObjectProperty"},
            {"BakedSimUnderWaterMaterial", 0x5B8, "ObjectProperty"},
            {"BakedSimRiverToLakeTransitionMaterial", 0x5C0, "ObjectProperty"},
            {"BakedSimRiverToOceanTransitionMaterial", 0x5C8, "ObjectProperty"},
            {"SplineRiverMaterial", 0x5D0, "ObjectProperty"},
            {"SplineRiverToLakeTransitionMaterial", 0x5D8, "ObjectProperty"},
            {"SplineRiverToOceanTransitionMaterial", 0x5E0, "ObjectProperty"},
            {"SplineRiverUnderWaterMaterial", 0x5E8, "ObjectProperty"},
            {"SmoothingWidth", 0x5F0, "IntProperty"},
            {"SmoothingCutoff", 0x5F4, "FloatProperty"},
            {"bUseVirtualTextures", 0x5F8, "BoolProperty"},
            {"bUseNormalMapVirtualTexture", 0x5F9, "BoolProperty"},
            {"SimRes", 0x600, "StructProperty"},
            {"SimDx", 0x610, "FloatProperty"},
            {"BakedWaterHeightTexture", 0x618, "ObjectProperty"},
            {"BakedWaterSurfaceTexture", 0x620, "ObjectProperty"},
            {"BakedWaterSurfaceNormalTexture", 0x628, "ObjectProperty"},
            {"BakedFoamTexture", 0x630, "ObjectProperty"},
            {"MaxEncodedDepth", 0x638, "FloatProperty"},
            {"MaxEncodedSpeed", 0x63C, "FloatProperty"},
            {"DepthEncodePercentile", 0x640, "FloatProperty"},
            {"VelocityEncodePercentile", 0x644, "FloatProperty"},
            {"BakedDepthMax", 0x648, "FloatProperty"},
            {"BakedVelocityMaxSpeed", 0x64C, "FloatProperty"},
            {"InputPaintResolutionScale", 0x650, "FloatProperty"},
            {"PaintPreviewMaterial", 0x658, "ObjectProperty"},
            {"InputPaintTraceChannel", 0x660, "ByteProperty"},
            {"MaterialPaintTexture", 0x668, "ObjectProperty"},
            {"bUseHeightfieldCollision", 0x670, "BoolProperty"},
            {"HeightfieldCollisionResolution", 0x674, "FloatProperty"},
            {"RiverSimSystem", 0x678, "ObjectProperty"},
            {"WaterInfoTexture", 0x680, "ObjectProperty"},
            {"BakedWaterSurfaceRT", 0x688, "ObjectProperty"},
            {"BakedFoamRT", 0x690, "ObjectProperty"},
            {"BakedWaterSurfaceNormalRT", 0x698, "ObjectProperty"},
            {"BakedSim", 0x6A0, "ObjectProperty"},
            {"AllWaterBodies", 0x6B0, "SetProperty"},
            {"WorldGridSize", 0x6C0, "StructProperty"},
            {"SystemPos", 0x6D0, "StructProperty"},
            {"NormalDetailRT", 0x6E8, "ObjectProperty"},
            {"OceanPatchSystem", 0x6F0, "ObjectProperty"},
            {"HeightfieldBodySetup", 0x720, "ObjectProperty"},
        }};
    };

    struct ShallowWaterSettings
    {
        static constexpr std::string_view Name = "ShallowWaterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultShallowWaterNiagaraSimulation = 0x30;
            static constexpr std::uintptr_t DefaultShallowWaterCollisionNDC = 0x50;
            static constexpr std::uintptr_t DefaultOceanPatchNiagaraSystem = 0x70;
            static constexpr std::uintptr_t ShallowWaterSimParameters = 0x90;
            static constexpr std::uintptr_t WaterMPC = 0x98;
            static constexpr std::uintptr_t GridCenterMPCName = 0xB8;
            static constexpr std::uintptr_t WorldGridSizeMPCName = 0xBC;
            static constexpr std::uintptr_t ResolutionMaxAxisMPCName = 0xC0;
            static constexpr std::uintptr_t NormalRTMaterialName = 0xC4;
            static constexpr std::uintptr_t VelocityRTMaterialName = 0xC8;
            static constexpr std::uintptr_t NormalRTNiagaraName = 0xCC;
            static constexpr std::uintptr_t VelocityRTNiagaraName = 0xD0;
            static constexpr std::uintptr_t UseDefaultShallowWaterSubsystem = 0xD4;
            static constexpr std::uintptr_t OutputVelocity = 0xD5;
            static constexpr std::uintptr_t MaxActivePawnNum = 0xD8;
            static constexpr std::uintptr_t MaxImpulseForceNum = 0xDC;
            static constexpr std::uintptr_t PhysicsAssetProxiesDataAsset = 0xE0;
            static constexpr std::uintptr_t bVisualizeActivePawn = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"DefaultShallowWaterNiagaraSimulation", 0x30, "SoftObjectProperty"},
            {"DefaultShallowWaterCollisionNDC", 0x50, "SoftObjectProperty"},
            {"DefaultOceanPatchNiagaraSystem", 0x70, "SoftObjectProperty"},
            {"ShallowWaterSimParameters", 0x90, "StructProperty"},
            {"WaterMPC", 0x98, "SoftObjectProperty"},
            {"GridCenterMPCName", 0xB8, "NameProperty"},
            {"WorldGridSizeMPCName", 0xBC, "NameProperty"},
            {"ResolutionMaxAxisMPCName", 0xC0, "NameProperty"},
            {"NormalRTMaterialName", 0xC4, "NameProperty"},
            {"VelocityRTMaterialName", 0xC8, "NameProperty"},
            {"NormalRTNiagaraName", 0xCC, "NameProperty"},
            {"VelocityRTNiagaraName", 0xD0, "NameProperty"},
            {"UseDefaultShallowWaterSubsystem", 0xD4, "BoolProperty"},
            {"OutputVelocity", 0xD5, "BoolProperty"},
            {"MaxActivePawnNum", 0xD8, "IntProperty"},
            {"MaxImpulseForceNum", 0xDC, "IntProperty"},
            {"PhysicsAssetProxiesDataAsset", 0xE0, "SoftObjectProperty"},
            {"bVisualizeActivePawn", 0x100, "BoolProperty"},
        }};
    };

    struct ShallowWaterSubsystem
    {
        static constexpr std::string_view Name = "ShallowWaterSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ShallowWaterNiagaraSimulation = 0x48;
            static constexpr std::uintptr_t WaterInfoTexture = 0x50;
            static constexpr std::uintptr_t NormalRT = 0x58;
            static constexpr std::uintptr_t VelocityRT = 0x60;
            static constexpr std::uintptr_t Settings = 0x68;
            static constexpr std::uintptr_t MPC = 0x70;
            static constexpr std::uintptr_t PreviousContexts = 0x138;
            static constexpr std::uintptr_t PendingContexts = 0x148;
            static constexpr std::uintptr_t VehicleCollisionProxies = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ShallowWaterNiagaraSimulation", 0x48, "ObjectProperty"},
            {"WaterInfoTexture", 0x50, "WeakObjectProperty"},
            {"NormalRT", 0x58, "ObjectProperty"},
            {"VelocityRT", 0x60, "ObjectProperty"},
            {"Settings", 0x68, "ObjectProperty"},
            {"MPC", 0x70, "ObjectProperty"},
            {"PreviousContexts", 0x138, "ArrayProperty"},
            {"PendingContexts", 0x148, "ArrayProperty"},
            {"VehicleCollisionProxies", 0x158, "MapProperty"},
        }};
    };

}
