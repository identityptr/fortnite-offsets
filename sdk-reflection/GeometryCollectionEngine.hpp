#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GeometryCollectionEngine
{
    struct ChaosBreakingEventData
    {
        static constexpr std::string_view Name = "ChaosBreakingEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Velocity = 0x18;
            static constexpr std::uintptr_t Mass = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Velocity", 0x18, "StructProperty"},
            {"Mass", 0x30, "FloatProperty"},
        }};
    };

    struct ChaosBreakingEventRequestSettings
    {
        static constexpr std::string_view Name = "ChaosBreakingEventRequestSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfResults = 0x0;
            static constexpr std::uintptr_t MinRadius = 0x4;
            static constexpr std::uintptr_t MinSpeed = 0x8;
            static constexpr std::uintptr_t MinMass = 0xC;
            static constexpr std::uintptr_t MaxDistance = 0x10;
            static constexpr std::uintptr_t SortMethod = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaxNumberOfResults", 0x0, "IntProperty"},
            {"MinRadius", 0x4, "FloatProperty"},
            {"MinSpeed", 0x8, "FloatProperty"},
            {"MinMass", 0xC, "FloatProperty"},
            {"MaxDistance", 0x10, "FloatProperty"},
            {"SortMethod", 0x14, "EnumProperty"},
        }};
    };

    struct ChaosCollisionEventData
    {
        static constexpr std::string_view Name = "ChaosCollisionEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Normal = 0x18;
            static constexpr std::uintptr_t Velocity1 = 0x30;
            static constexpr std::uintptr_t Velocity2 = 0x48;
            static constexpr std::uintptr_t Mass1 = 0x60;
            static constexpr std::uintptr_t Mass2 = 0x64;
            static constexpr std::uintptr_t Impulse = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Normal", 0x18, "StructProperty"},
            {"Velocity1", 0x30, "StructProperty"},
            {"Velocity2", 0x48, "StructProperty"},
            {"Mass1", 0x60, "FloatProperty"},
            {"Mass2", 0x64, "FloatProperty"},
            {"Impulse", 0x68, "StructProperty"},
        }};
    };

    struct ChaosCollisionEventRequestSettings
    {
        static constexpr std::string_view Name = "ChaosCollisionEventRequestSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberResults = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MinSpeed = 0x8;
            static constexpr std::uintptr_t MinImpulse = 0xC;
            static constexpr std::uintptr_t MaxDistance = 0x10;
            static constexpr std::uintptr_t SortMethod = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaxNumberResults", 0x0, "IntProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MinSpeed", 0x8, "FloatProperty"},
            {"MinImpulse", 0xC, "FloatProperty"},
            {"MaxDistance", 0x10, "FloatProperty"},
            {"SortMethod", 0x14, "EnumProperty"},
        }};
    };

    struct ChaosDestructionListener
    {
        static constexpr std::string_view Name = "ChaosDestructionListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBreakingEventListeningEnabled = 0x240;
            static constexpr std::uintptr_t bIsCollisionEventListeningEnabled = 0x240;
            static constexpr std::uintptr_t bIsRemovalEventListeningEnabled = 0x240;
            static constexpr std::uintptr_t bIsTrailingEventListeningEnabled = 0x240;
            static constexpr std::uintptr_t CollisionEventRequestSettings = 0x244;
            static constexpr std::uintptr_t BreakingEventRequestSettings = 0x25C;
            static constexpr std::uintptr_t TrailingEventRequestSettings = 0x274;
            static constexpr std::uintptr_t RemovalEventRequestSettings = 0x28C;
            static constexpr std::uintptr_t ChaosSolverActors = 0x2A0;
            static constexpr std::uintptr_t GeometryCollectionActors = 0x2B0;
            static constexpr std::uintptr_t OnCollisionEvents = 0x2C0;
            static constexpr std::uintptr_t OnBreakingEvents = 0x2D0;
            static constexpr std::uintptr_t OnTrailingEvents = 0x2E0;
            static constexpr std::uintptr_t OnRemovalEvents = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bIsBreakingEventListeningEnabled", 0x240, "BoolProperty"},
            {"bIsCollisionEventListeningEnabled", 0x240, "BoolProperty"},
            {"bIsRemovalEventListeningEnabled", 0x240, "BoolProperty"},
            {"bIsTrailingEventListeningEnabled", 0x240, "BoolProperty"},
            {"CollisionEventRequestSettings", 0x244, "StructProperty"},
            {"BreakingEventRequestSettings", 0x25C, "StructProperty"},
            {"TrailingEventRequestSettings", 0x274, "StructProperty"},
            {"RemovalEventRequestSettings", 0x28C, "StructProperty"},
            {"ChaosSolverActors", 0x2A0, "SetProperty"},
            {"GeometryCollectionActors", 0x2B0, "SetProperty"},
            {"OnCollisionEvents", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnBreakingEvents", 0x2D0, "MulticastInlineDelegateProperty"},
            {"OnTrailingEvents", 0x2E0, "MulticastInlineDelegateProperty"},
            {"OnRemovalEvents", 0x2F0, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "AddChaosSolverActor",
            "AddGeometryCollectionActor",
            "IsEventListening",
            "RemoveChaosSolverActor",
            "RemoveGeometryCollectionActor",
            "SetBreakingEventEnabled",
            "SetBreakingEventRequestSettings",
            "SetCollisionEventEnabled",
            "SetCollisionEventRequestSettings",
            "SetRemovalEventEnabled",
            "SetRemovalEventRequestSettings",
            "SetTrailingEventEnabled",
            "SetTrailingEventRequestSettings",
            "SortBreakingEvents",
            "SortCollisionEvents",
            "SortRemovalEvents",
            "SortTrailingEvents",
        }};
    };

    struct ChaosRemovalEventData
    {
        static constexpr std::string_view Name = "ChaosRemovalEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Mass = 0x18;
            static constexpr std::uintptr_t ParticleIndex = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Mass", 0x18, "FloatProperty"},
            {"ParticleIndex", 0x1C, "IntProperty"},
        }};
    };

    struct ChaosRemovalEventRequestSettings
    {
        static constexpr std::string_view Name = "ChaosRemovalEventRequestSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfResults = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MaxDistance = 0x8;
            static constexpr std::uintptr_t SortMethod = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxNumberOfResults", 0x0, "IntProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MaxDistance", 0x8, "FloatProperty"},
            {"SortMethod", 0xC, "EnumProperty"},
        }};
    };

    struct ChaosTrailingEventData
    {
        static constexpr std::string_view Name = "ChaosTrailingEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Velocity = 0x18;
            static constexpr std::uintptr_t AngularVelocity = 0x30;
            static constexpr std::uintptr_t Mass = 0x48;
            static constexpr std::uintptr_t ParticleIndex = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Velocity", 0x18, "StructProperty"},
            {"AngularVelocity", 0x30, "StructProperty"},
            {"Mass", 0x48, "FloatProperty"},
            {"ParticleIndex", 0x4C, "IntProperty"},
        }};
    };

    struct ChaosTrailingEventRequestSettings
    {
        static constexpr std::string_view Name = "ChaosTrailingEventRequestSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfResults = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MinSpeed = 0x8;
            static constexpr std::uintptr_t MinAngularSpeed = 0xC;
            static constexpr std::uintptr_t MaxDistance = 0x10;
            static constexpr std::uintptr_t SortMethod = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaxNumberOfResults", 0x0, "IntProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MinSpeed", 0x8, "FloatProperty"},
            {"MinAngularSpeed", 0xC, "FloatProperty"},
            {"MaxDistance", 0x10, "FloatProperty"},
            {"SortMethod", 0x14, "EnumProperty"},
        }};
    };

    struct GeomComponentCacheParameters
    {
        static constexpr std::string_view Name = "GeomComponentCacheParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheMode = 0x0;
            static constexpr std::uintptr_t TargetCache = 0x8;
            static constexpr std::uintptr_t ReverseCacheBeginTime = 0x10;
            static constexpr std::uintptr_t SaveCollisionData = 0x14;
            static constexpr std::uintptr_t DoGenerateCollisionData = 0x15;
            static constexpr std::uintptr_t CollisionDataSizeMax = 0x18;
            static constexpr std::uintptr_t DoCollisionDataSpatialHash = 0x1C;
            static constexpr std::uintptr_t CollisionDataSpatialHashRadius = 0x20;
            static constexpr std::uintptr_t MaxCollisionPerCell = 0x24;
            static constexpr std::uintptr_t SaveBreakingData = 0x28;
            static constexpr std::uintptr_t DoGenerateBreakingData = 0x29;
            static constexpr std::uintptr_t BreakingDataSizeMax = 0x2C;
            static constexpr std::uintptr_t DoBreakingDataSpatialHash = 0x30;
            static constexpr std::uintptr_t BreakingDataSpatialHashRadius = 0x34;
            static constexpr std::uintptr_t MaxBreakingPerCell = 0x38;
            static constexpr std::uintptr_t SaveTrailingData = 0x3C;
            static constexpr std::uintptr_t DoGenerateTrailingData = 0x3D;
            static constexpr std::uintptr_t TrailingDataSizeMax = 0x40;
            static constexpr std::uintptr_t TrailingMinSpeedThreshold = 0x44;
            static constexpr std::uintptr_t TrailingMinVolumeThreshold = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"CacheMode", 0x0, "EnumProperty"},
            {"TargetCache", 0x8, "ObjectProperty"},
            {"ReverseCacheBeginTime", 0x10, "FloatProperty"},
            {"SaveCollisionData", 0x14, "BoolProperty"},
            {"DoGenerateCollisionData", 0x15, "BoolProperty"},
            {"CollisionDataSizeMax", 0x18, "IntProperty"},
            {"DoCollisionDataSpatialHash", 0x1C, "BoolProperty"},
            {"CollisionDataSpatialHashRadius", 0x20, "FloatProperty"},
            {"MaxCollisionPerCell", 0x24, "IntProperty"},
            {"SaveBreakingData", 0x28, "BoolProperty"},
            {"DoGenerateBreakingData", 0x29, "BoolProperty"},
            {"BreakingDataSizeMax", 0x2C, "IntProperty"},
            {"DoBreakingDataSpatialHash", 0x30, "BoolProperty"},
            {"BreakingDataSpatialHashRadius", 0x34, "FloatProperty"},
            {"MaxBreakingPerCell", 0x38, "IntProperty"},
            {"SaveTrailingData", 0x3C, "BoolProperty"},
            {"DoGenerateTrailingData", 0x3D, "BoolProperty"},
            {"TrailingDataSizeMax", 0x40, "IntProperty"},
            {"TrailingMinSpeedThreshold", 0x44, "FloatProperty"},
            {"TrailingMinVolumeThreshold", 0x48, "FloatProperty"},
        }};
    };

    struct GeometryCollection
    {
        static constexpr std::string_view Name = "GeometryCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableClustering = 0x60;
            static constexpr std::uintptr_t ClusterGroupIndex = 0x64;
            static constexpr std::uintptr_t MaxClusterLevel = 0x68;
            static constexpr std::uintptr_t DamageModel = 0x6C;
            static constexpr std::uintptr_t DamageThreshold = 0x70;
            static constexpr std::uintptr_t bUseSizeSpecificDamageThreshold = 0x80;
            static constexpr std::uintptr_t bUseMaterialDamageModifiers = 0x81;
            static constexpr std::uintptr_t PerClusterOnlyDamageThreshold = 0x82;
            static constexpr std::uintptr_t DamagePropagationData = 0x84;
            static constexpr std::uintptr_t ClusterConnectionType = 0x90;
            static constexpr std::uintptr_t ConnectionGraphBoundsFilteringMargin = 0x94;
            static constexpr std::uintptr_t Materials = 0x98;
            static constexpr std::uintptr_t EmbeddedGeometryExemplar = 0xA8;
            static constexpr std::uintptr_t bUseFullPrecisionUVs = 0xB8;
            static constexpr std::uintptr_t bStripOnCook = 0xB9;
            static constexpr std::uintptr_t bStripRenderDataOnCook = 0xBA;
            static constexpr std::uintptr_t bSupportRayTracing = 0xBB;
            static constexpr std::uintptr_t CustomRendererType = 0xC0;
            static constexpr std::uintptr_t RootProxyData = 0xC8;
            static constexpr std::uintptr_t AutoInstanceMeshes = 0xF8;
            static constexpr std::uintptr_t EnableNanite = 0x108;
            static constexpr std::uintptr_t bEnableNaniteFallback = 0x109;
            static constexpr std::uintptr_t NaniteMinimumResidencyInKB = 0x10C;
            static constexpr std::uintptr_t bConvertVertexColorsToSRGB = 0x110;
            static constexpr std::uintptr_t PhysicsMaterial = 0x118;
            static constexpr std::uintptr_t bDensityFromPhysicsMaterial = 0x120;
            static constexpr std::uintptr_t CachedDensityFromPhysicsMaterialInGCm3 = 0x124;
            static constexpr std::uintptr_t bMassAsDensity = 0x128;
            static constexpr std::uintptr_t Mass = 0x12C;
            static constexpr std::uintptr_t MinimumMassClamp = 0x130;
            static constexpr std::uintptr_t bImportCollisionFromSource = 0x134;
            static constexpr std::uintptr_t bOptimizeConvexes = 0x135;
            static constexpr std::uintptr_t bScaleOnRemoval = 0x136;
            static constexpr std::uintptr_t bRemoveOnMaxSleep = 0x137;
            static constexpr std::uintptr_t bAutomaticCrumblePartialClusters = 0x138;
            static constexpr std::uintptr_t MaximumSleepTime = 0x140;
            static constexpr std::uintptr_t RemovalDuration = 0x150;
            static constexpr std::uintptr_t bSlowMovingAsSleeping = 0x160;
            static constexpr std::uintptr_t SlowMovingVelocityThreshold = 0x164;
            static constexpr std::uintptr_t SizeSpecificData = 0x168;
            static constexpr std::uintptr_t EnableRemovePiecesOnFracture = 0x178;
            static constexpr std::uintptr_t RemoveOnFractureMaterials = 0x180;
            static constexpr std::uintptr_t Overrides = 0x190;
            static constexpr std::uintptr_t DataflowInstance = 0x1A0;
            static constexpr std::uintptr_t PersistentGuid = 0x1F0;
            static constexpr std::uintptr_t StateGuid = 0x200;
            static constexpr std::uintptr_t RootIndex = 0x210;
            static constexpr std::uintptr_t BreadthFirstTransformIndices = 0x218;
            static constexpr std::uintptr_t AutoInstanceTransformRemapIndices = 0x228;
            static constexpr std::uintptr_t BoneSelectedMaterialIndex = 0x238;
            static constexpr std::uintptr_t AssetUserData = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"EnableClustering", 0x60, "BoolProperty"},
            {"ClusterGroupIndex", 0x64, "IntProperty"},
            {"MaxClusterLevel", 0x68, "IntProperty"},
            {"DamageModel", 0x6C, "EnumProperty"},
            {"DamageThreshold", 0x70, "ArrayProperty"},
            {"bUseSizeSpecificDamageThreshold", 0x80, "BoolProperty"},
            {"bUseMaterialDamageModifiers", 0x81, "BoolProperty"},
            {"PerClusterOnlyDamageThreshold", 0x82, "BoolProperty"},
            {"DamagePropagationData", 0x84, "StructProperty"},
            {"ClusterConnectionType", 0x90, "EnumProperty"},
            {"ConnectionGraphBoundsFilteringMargin", 0x94, "FloatProperty"},
            {"Materials", 0x98, "ArrayProperty"},
            {"EmbeddedGeometryExemplar", 0xA8, "ArrayProperty"},
            {"bUseFullPrecisionUVs", 0xB8, "BoolProperty"},
            {"bStripOnCook", 0xB9, "BoolProperty"},
            {"bStripRenderDataOnCook", 0xBA, "BoolProperty"},
            {"bSupportRayTracing", 0xBB, "BoolProperty"},
            {"CustomRendererType", 0xC0, "ClassProperty"},
            {"RootProxyData", 0xC8, "StructProperty"},
            {"AutoInstanceMeshes", 0xF8, "ArrayProperty"},
            {"EnableNanite", 0x108, "BoolProperty"},
            {"bEnableNaniteFallback", 0x109, "BoolProperty"},
            {"NaniteMinimumResidencyInKB", 0x10C, "UInt32Property"},
            {"bConvertVertexColorsToSRGB", 0x110, "BoolProperty"},
            {"PhysicsMaterial", 0x118, "ObjectProperty"},
            {"bDensityFromPhysicsMaterial", 0x120, "BoolProperty"},
            {"CachedDensityFromPhysicsMaterialInGCm3", 0x124, "FloatProperty"},
            {"bMassAsDensity", 0x128, "BoolProperty"},
            {"Mass", 0x12C, "FloatProperty"},
            {"MinimumMassClamp", 0x130, "FloatProperty"},
            {"bImportCollisionFromSource", 0x134, "BoolProperty"},
            {"bOptimizeConvexes", 0x135, "BoolProperty"},
            {"bScaleOnRemoval", 0x136, "BoolProperty"},
            {"bRemoveOnMaxSleep", 0x137, "BoolProperty"},
            {"bAutomaticCrumblePartialClusters", 0x138, "BoolProperty"},
            {"MaximumSleepTime", 0x140, "StructProperty"},
            {"RemovalDuration", 0x150, "StructProperty"},
            {"bSlowMovingAsSleeping", 0x160, "BoolProperty"},
            {"SlowMovingVelocityThreshold", 0x164, "FloatProperty"},
            {"SizeSpecificData", 0x168, "ArrayProperty"},
            {"EnableRemovePiecesOnFracture", 0x178, "BoolProperty"},
            {"RemoveOnFractureMaterials", 0x180, "ArrayProperty"},
            {"Overrides", 0x190, "MapProperty"},
            {"DataflowInstance", 0x1A0, "StructProperty"},
            {"PersistentGuid", 0x1F0, "StructProperty"},
            {"StateGuid", 0x200, "StructProperty"},
            {"RootIndex", 0x210, "IntProperty"},
            {"BreadthFirstTransformIndices", 0x218, "ArrayProperty"},
            {"AutoInstanceTransformRemapIndices", 0x228, "ArrayProperty"},
            {"BoneSelectedMaterialIndex", 0x238, "IntProperty"},
            {"AssetUserData", 0x250, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetDataflowAsset",
            "SetConvertVertexColorsToSRGB",
            "SetDataflowAsset",
            "SetEnableNanite",
        }};
    };

    struct GeometryCollectionActor
    {
        static constexpr std::string_view Name = "GeometryCollectionActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionComponent = 0x278;
            static constexpr std::uintptr_t GeometryCollectionDebugDrawComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GeometryCollectionComponent", 0x278, "ObjectProperty"},
            {"GeometryCollectionDebugDrawComponent", 0x280, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RaycastSingle",
        }};
    };

    struct GeometryCollectionAutoInstanceMesh
    {
        static constexpr std::string_view Name = "GeometryCollectionAutoInstanceMesh";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x0;
            static constexpr std::uintptr_t Materials = 0x8;
            static constexpr std::uintptr_t NumInstances = 0x18;
            static constexpr std::uintptr_t CustomData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Mesh", 0x0, "ObjectProperty"},
            {"Materials", 0x8, "ArrayProperty"},
            {"NumInstances", 0x18, "IntProperty"},
            {"CustomData", 0x20, "ArrayProperty"},
        }};
    };

    struct GeometryCollectionBlueprintLibrary
    {
        static constexpr std::string_view Name = "GeometryCollectionBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddGeometryCollectionsToBlueprint",
            "SetCustomDepthStencil",
            "SetCustomInstanceDataByIndex",
            "SetCustomInstanceDataByName",
            "SetISMPoolCustomInstanceData",
        }};
    };

    struct GeometryCollectionCache
    {
        static constexpr std::string_view Name = "GeometryCollectionCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordedData = 0x28;
            static constexpr std::uintptr_t SupportedCollection = 0x38;
            static constexpr std::uintptr_t CompatibleCollectionState = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RecordedData", 0x28, "StructProperty"},
            {"SupportedCollection", 0x38, "ObjectProperty"},
            {"CompatibleCollectionState", 0x40, "StructProperty"},
        }};
    };

    struct GeometryCollectionCollisionParticleData
    {
        static constexpr std::string_view Name = "GeometryCollectionCollisionParticleData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionParticlesFraction = 0x0;
            static constexpr std::uintptr_t MaximumCollisionParticles = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionParticlesFraction", 0x0, "FloatProperty"},
            {"MaximumCollisionParticles", 0x4, "IntProperty"},
        }};
    };

    struct GeometryCollectionCollisionTypeData
    {
        static constexpr std::string_view Name = "GeometryCollectionCollisionTypeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionType = 0x0;
            static constexpr std::uintptr_t ImplicitType = 0x1;
            static constexpr std::uintptr_t LevelSet = 0x4;
            static constexpr std::uintptr_t CollisionParticles = 0x14;
            static constexpr std::uintptr_t CollisionObjectReductionPercentage = 0x1C;
            static constexpr std::uintptr_t CollisionMarginFraction = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CollisionType", 0x0, "EnumProperty"},
            {"ImplicitType", 0x1, "EnumProperty"},
            {"LevelSet", 0x4, "StructProperty"},
            {"CollisionParticles", 0x14, "StructProperty"},
            {"CollisionObjectReductionPercentage", 0x1C, "FloatProperty"},
            {"CollisionMarginFraction", 0x20, "FloatProperty"},
        }};
    };

    struct GeometryCollectionComponent
    {
        static constexpr std::string_view Name = "GeometryCollectionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ChaosSolverActor = 0x5C8;
            static constexpr std::uintptr_t RestCollection = 0x5D0;
            static constexpr std::uintptr_t InitializationFields = 0x5D8;
            static constexpr std::uintptr_t Simulating = 0x5E8;
            static constexpr std::uintptr_t ObjectType = 0x5EA;
            static constexpr std::uintptr_t GravityGroupIndex = 0x5EC;
            static constexpr std::uintptr_t OneWayInteractionLevel = 0x5F0;
            static constexpr std::uintptr_t bDensityFromPhysicsMaterial = 0x5F4;
            static constexpr std::uintptr_t bForceMotionBlur = 0x5F5;
            static constexpr std::uintptr_t EnableClustering = 0x5F6;
            static constexpr std::uintptr_t ClusterGroupIndex = 0x5F8;
            static constexpr std::uintptr_t MaxClusterLevel = 0x5FC;
            static constexpr std::uintptr_t MaxSimulatedLevel = 0x600;
            static constexpr std::uintptr_t DamageModel = 0x604;
            static constexpr std::uintptr_t DamageThreshold = 0x608;
            static constexpr std::uintptr_t bUseSizeSpecificDamageThreshold = 0x618;
            static constexpr std::uintptr_t bUseMaterialDamageModifiers = 0x619;
            static constexpr std::uintptr_t DamagePropagationData = 0x61C;
            static constexpr std::uintptr_t bEnableDamageFromCollision = 0x628;
            static constexpr std::uintptr_t bAllowRemovalOnSleep = 0x629;
            static constexpr std::uintptr_t bAllowRemovalOnBreak = 0x62A;
            static constexpr std::uintptr_t bForceUpdateActiveTransforms = 0x62B;
            static constexpr std::uintptr_t ClusterConnectionType = 0x62C;
            static constexpr std::uintptr_t CollisionGroup = 0x630;
            static constexpr std::uintptr_t CollisionSampleFraction = 0x634;
            static constexpr std::uintptr_t LinearEtherDrag = 0x638;
            static constexpr std::uintptr_t PhysicalMaterial = 0x640;
            static constexpr std::uintptr_t InitialVelocityType = 0x648;
            static constexpr std::uintptr_t InitialLinearVelocity = 0x650;
            static constexpr std::uintptr_t InitialAngularVelocity = 0x668;
            static constexpr std::uintptr_t PhysicalMaterialOverride = 0x680;
            static constexpr std::uintptr_t CacheParameters = 0x688;
            static constexpr std::uintptr_t RestTransforms = 0x6D8;
            static constexpr std::uintptr_t NotifyGeometryCollectionPhysicsStateChange = 0x6E8;
            static constexpr std::uintptr_t NotifyGeometryCollectionPhysicsLoadingStateChange = 0x6F8;
            static constexpr std::uintptr_t OnChaosBreakEvent = 0x720;
            static constexpr std::uintptr_t OnChaosRemovalEvent = 0x730;
            static constexpr std::uintptr_t OnChaosCrumblingEvent = 0x740;
            static constexpr std::uintptr_t DesiredCacheTime = 0x798;
            static constexpr std::uintptr_t CachePlayback = 0x79C;
            static constexpr std::uintptr_t OnChaosPhysicsCollision = 0x7A0;
            static constexpr std::uintptr_t bNotifyBreaks = 0x7B0;
            static constexpr std::uintptr_t bNotifyCollisions = 0x7B1;
            static constexpr std::uintptr_t bNotifyTrailing = 0x7B2;
            static constexpr std::uintptr_t bNotifyRemovals = 0x7B3;
            static constexpr std::uintptr_t bNotifyCrumblings = 0x7B4;
            static constexpr std::uintptr_t bCrumblingEventIncludesChildren = 0x7B5;
            static constexpr std::uintptr_t bNotifyGlobalBreaks = 0x7B6;
            static constexpr std::uintptr_t bNotifyGlobalCollisions = 0x7B7;
            static constexpr std::uintptr_t bNotifyGlobalRemovals = 0x7B8;
            static constexpr std::uintptr_t bNotifyGlobalCrumblings = 0x7B9;
            static constexpr std::uintptr_t bGlobalCrumblingEventIncludesChildren = 0x7BA;
            static constexpr std::uintptr_t bNotifyGlobalTrailings = 0x7BB;
            static constexpr std::uintptr_t bStoreVelocities = 0x7BC;
            static constexpr std::uintptr_t bIsCurrentlyNavigationRelevant = 0x7BD;
            static constexpr std::uintptr_t bShowBoneColors = 0x7BE;
            static constexpr std::uintptr_t bUpdateComponentTransformToRootBone = 0x7BF;
            static constexpr std::uintptr_t bUseRootProxyForNavigation = 0x7C0;
            static constexpr std::uintptr_t bUpdateNavigationInTick = 0x7C1;
            static constexpr std::uintptr_t bEnableReplication = 0x7C3;
            static constexpr std::uintptr_t bEnableAbandonAfterLevel = 0x7C4;
            static constexpr std::uintptr_t AbandonedCollisionProfileName = 0x7C8;
            static constexpr std::uintptr_t ISMPool = 0x7D0;
            static constexpr std::uintptr_t CustomRendererType = 0x7D8;
            static constexpr std::uintptr_t bOverrideCustomRenderer = 0x7E0;
            static constexpr std::uintptr_t bAutoAssignISMPool = 0x7E1;
            static constexpr std::uintptr_t bUseStaticMeshCollisionForTraces = 0x7E3;
            static constexpr std::uintptr_t ReplicationAbandonClusterLevel = 0x7E4;
            static constexpr std::uintptr_t CustomRenderer = 0x7E8;
            static constexpr std::uintptr_t CollisionProfilePerLevel = 0x7F8;
            static constexpr std::uintptr_t ReplicationAbandonAfterLevel = 0x818;
            static constexpr std::uintptr_t ReplicationMaxPositionAndVelocityCorrectionLevel = 0x81C;
            static constexpr std::uintptr_t RepData = 0x820;
            static constexpr std::uintptr_t RepStateData = 0x858;
            static constexpr std::uintptr_t RepDynamicData = 0x898;
            static constexpr std::uintptr_t DummyBodySetup = 0x9D0;
            static constexpr std::uintptr_t EventDispatcher = 0x9D8;
            static constexpr std::uintptr_t EmbeddedGeometryComponents = 0x9E0;
            static constexpr std::uintptr_t AngularEtherDrag = 0xA04;
        };

        inline static constexpr std::array<PropertyInfo, 79> Properties{{
            {"ChaosSolverActor", 0x5C8, "ObjectProperty"},
            {"RestCollection", 0x5D0, "ObjectProperty"},
            {"InitializationFields", 0x5D8, "ArrayProperty"},
            {"Simulating", 0x5E8, "BoolProperty"},
            {"ObjectType", 0x5EA, "EnumProperty"},
            {"GravityGroupIndex", 0x5EC, "IntProperty"},
            {"OneWayInteractionLevel", 0x5F0, "IntProperty"},
            {"bDensityFromPhysicsMaterial", 0x5F4, "BoolProperty"},
            {"bForceMotionBlur", 0x5F5, "BoolProperty"},
            {"EnableClustering", 0x5F6, "BoolProperty"},
            {"ClusterGroupIndex", 0x5F8, "IntProperty"},
            {"MaxClusterLevel", 0x5FC, "IntProperty"},
            {"MaxSimulatedLevel", 0x600, "IntProperty"},
            {"DamageModel", 0x604, "EnumProperty"},
            {"DamageThreshold", 0x608, "ArrayProperty"},
            {"bUseSizeSpecificDamageThreshold", 0x618, "BoolProperty"},
            {"bUseMaterialDamageModifiers", 0x619, "BoolProperty"},
            {"DamagePropagationData", 0x61C, "StructProperty"},
            {"bEnableDamageFromCollision", 0x628, "BoolProperty"},
            {"bAllowRemovalOnSleep", 0x629, "BoolProperty"},
            {"bAllowRemovalOnBreak", 0x62A, "BoolProperty"},
            {"bForceUpdateActiveTransforms", 0x62B, "BoolProperty"},
            {"ClusterConnectionType", 0x62C, "EnumProperty"},
            {"CollisionGroup", 0x630, "IntProperty"},
            {"CollisionSampleFraction", 0x634, "FloatProperty"},
            {"LinearEtherDrag", 0x638, "FloatProperty"},
            {"PhysicalMaterial", 0x640, "ObjectProperty"},
            {"InitialVelocityType", 0x648, "EnumProperty"},
            {"InitialLinearVelocity", 0x650, "StructProperty"},
            {"InitialAngularVelocity", 0x668, "StructProperty"},
            {"PhysicalMaterialOverride", 0x680, "ObjectProperty"},
            {"CacheParameters", 0x688, "StructProperty"},
            {"RestTransforms", 0x6D8, "ArrayProperty"},
            {"NotifyGeometryCollectionPhysicsStateChange", 0x6E8, "MulticastInlineDelegateProperty"},
            {"NotifyGeometryCollectionPhysicsLoadingStateChange", 0x6F8, "MulticastInlineDelegateProperty"},
            {"OnChaosBreakEvent", 0x720, "MulticastInlineDelegateProperty"},
            {"OnChaosRemovalEvent", 0x730, "MulticastInlineDelegateProperty"},
            {"OnChaosCrumblingEvent", 0x740, "MulticastInlineDelegateProperty"},
            {"DesiredCacheTime", 0x798, "FloatProperty"},
            {"CachePlayback", 0x79C, "BoolProperty"},
            {"OnChaosPhysicsCollision", 0x7A0, "MulticastInlineDelegateProperty"},
            {"bNotifyBreaks", 0x7B0, "BoolProperty"},
            {"bNotifyCollisions", 0x7B1, "BoolProperty"},
            {"bNotifyTrailing", 0x7B2, "BoolProperty"},
            {"bNotifyRemovals", 0x7B3, "BoolProperty"},
            {"bNotifyCrumblings", 0x7B4, "BoolProperty"},
            {"bCrumblingEventIncludesChildren", 0x7B5, "BoolProperty"},
            {"bNotifyGlobalBreaks", 0x7B6, "BoolProperty"},
            {"bNotifyGlobalCollisions", 0x7B7, "BoolProperty"},
            {"bNotifyGlobalRemovals", 0x7B8, "BoolProperty"},
            {"bNotifyGlobalCrumblings", 0x7B9, "BoolProperty"},
            {"bGlobalCrumblingEventIncludesChildren", 0x7BA, "BoolProperty"},
            {"bNotifyGlobalTrailings", 0x7BB, "BoolProperty"},
            {"bStoreVelocities", 0x7BC, "BoolProperty"},
            {"bIsCurrentlyNavigationRelevant", 0x7BD, "BoolProperty"},
            {"bShowBoneColors", 0x7BE, "BoolProperty"},
            {"bUpdateComponentTransformToRootBone", 0x7BF, "BoolProperty"},
            {"bUseRootProxyForNavigation", 0x7C0, "BoolProperty"},
            {"bUpdateNavigationInTick", 0x7C1, "BoolProperty"},
            {"bEnableReplication", 0x7C3, "BoolProperty"},
            {"bEnableAbandonAfterLevel", 0x7C4, "BoolProperty"},
            {"AbandonedCollisionProfileName", 0x7C8, "NameProperty"},
            {"ISMPool", 0x7D0, "ObjectProperty"},
            {"CustomRendererType", 0x7D8, "ClassProperty"},
            {"bOverrideCustomRenderer", 0x7E0, "BoolProperty"},
            {"bAutoAssignISMPool", 0x7E1, "BoolProperty"},
            {"bUseStaticMeshCollisionForTraces", 0x7E3, "BoolProperty"},
            {"ReplicationAbandonClusterLevel", 0x7E4, "IntProperty"},
            {"CustomRenderer", 0x7E8, "InterfaceProperty"},
            {"CollisionProfilePerLevel", 0x7F8, "ArrayProperty"},
            {"ReplicationAbandonAfterLevel", 0x818, "IntProperty"},
            {"ReplicationMaxPositionAndVelocityCorrectionLevel", 0x81C, "IntProperty"},
            {"RepData", 0x820, "StructProperty"},
            {"RepStateData", 0x858, "StructProperty"},
            {"RepDynamicData", 0x898, "StructProperty"},
            {"DummyBodySetup", 0x9D0, "ObjectProperty"},
            {"EventDispatcher", 0x9D8, "ObjectProperty"},
            {"EmbeddedGeometryComponents", 0x9E0, "ArrayProperty"},
            {"AngularEtherDrag", 0xA04, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 65> FunctionNames{{
            "ApplyAngularVelocity",
            "ApplyAssetDefaults",
            "ApplyBreakingAngularVelocity",
            "ApplyBreakingLinearVelocity",
            "ApplyExternalStrain",
            "ApplyInternalStrain",
            "ApplyKinematicField",
            "ApplyLinearVelocity",
            "ApplyPhysicsField",
            "CrumbleActiveClusters",
            "CrumbleCluster",
            "EnableRootProxyForCustomRenderer",
            "FindLeafTransformByLineTrace",
            "ForceBrokenForCustomRenderer",
            "GetCurrentTransforms",
            "GetCurrentTransformsFromIndices",
            "GetDamageThreshold",
            "GetDebugInfo",
            "GetInitialLevel",
            "GetInitialLocalRestTransforms",
            "GetLocalBounds",
            "GetLocalRestTransforms",
            "GetMassAndExtents",
            "GetRootCurrentTransform",
            "GetRootIndex",
            "GetRootInitialTransform",
            "GetSolverActor",
            "GetUseStaticMeshCollisionForTraces",
            "IsRootBroken",
            "OnRep_RepData",
            "OnRep_RepDynamicData",
            "OnRep_RepStateData",
            "ReceivePhysicsCollision",
            "RemoveAllAnchors",
            "ResetState",
            "SetAbandonedParticleCollisionProfileName",
            "SetAnchoredByBox",
            "SetAnchoredByIndex",
            "SetAnchoredByTransformedBox",
            "SetAngularDampingPerTransform",
            "SetDamageModel",
            "SetDamagePropagationData",
            "SetDamageThreshold",
            "SetDensityFromPhysicsMaterial",
            "SetEnableDamageFromCollision",
            "SetGravityGroupIndex",
            "SetLinearDampingPerTransform",
            "SetLocalRestTransforms",
            "SetNotifyBreaks",
            "SetNotifyCrumblings",
            "SetNotifyGlobalBreaks",
            "SetNotifyGlobalCollision",
            "SetNotifyGlobalCrumblings",
            "SetNotifyGlobalRemovals",
            "SetNotifyGlobalTrailings",
            "SetNotifyRemovals",
            "SetNotifyTrailings",
            "SetOneWayInteractionLevel",
            "SetPerLevelCollisionProfileNames",
            "SetPerParticleCollisionProfileName",
            "SetRestCollection",
            "SetRootProxyComponentSpaceTransform",
            "SetSolverActor",
            "SetUseMaterialDamageModifiers",
            "SetUseStaticMeshCollisionForTraces",
        }};
    };

    struct GeometryCollectionCustomDataInterface
    {
        static constexpr std::string_view Name = "GeometryCollectionCustomDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryCollectionDamagePropagationData
    {
        static constexpr std::string_view Name = "GeometryCollectionDamagePropagationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t BreakDamagePropagationFactor = 0x4;
            static constexpr std::uintptr_t ShockDamagePropagationFactor = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"BreakDamagePropagationFactor", 0x4, "FloatProperty"},
            {"ShockDamagePropagationFactor", 0x8, "FloatProperty"},
        }};
    };

    struct GeometryCollectionDebugDrawActor
    {
        static constexpr std::string_view Name = "GeometryCollectionDebugDrawActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t WarningMessage = 0x278;
            static constexpr std::uintptr_t SelectedRigidBody = 0x280;
            static constexpr std::uintptr_t bDebugDrawWholeCollection = 0x298;
            static constexpr std::uintptr_t bDebugDrawHierarchy = 0x299;
            static constexpr std::uintptr_t bDebugDrawClustering = 0x29A;
            static constexpr std::uintptr_t HideGeometry = 0x29B;
            static constexpr std::uintptr_t bShowRigidBodyId = 0x29C;
            static constexpr std::uintptr_t bShowRigidBodyCollision = 0x29D;
            static constexpr std::uintptr_t bCollisionAtOrigin = 0x29E;
            static constexpr std::uintptr_t bShowRigidBodyTransform = 0x29F;
            static constexpr std::uintptr_t bShowRigidBodyInertia = 0x2A0;
            static constexpr std::uintptr_t bShowRigidBodyVelocity = 0x2A1;
            static constexpr std::uintptr_t bShowRigidBodyForce = 0x2A2;
            static constexpr std::uintptr_t bShowRigidBodyInfos = 0x2A3;
            static constexpr std::uintptr_t bShowTransformIndex = 0x2A4;
            static constexpr std::uintptr_t bShowTransform = 0x2A5;
            static constexpr std::uintptr_t bShowParent = 0x2A6;
            static constexpr std::uintptr_t bShowLevel = 0x2A7;
            static constexpr std::uintptr_t bShowConnectivityEdges = 0x2A8;
            static constexpr std::uintptr_t bShowGeometryIndex = 0x2A9;
            static constexpr std::uintptr_t bShowGeometryTransform = 0x2AA;
            static constexpr std::uintptr_t bShowBoundingBox = 0x2AB;
            static constexpr std::uintptr_t bShowFaces = 0x2AC;
            static constexpr std::uintptr_t bShowFaceIndices = 0x2AD;
            static constexpr std::uintptr_t bShowFaceNormals = 0x2AE;
            static constexpr std::uintptr_t bShowSingleFace = 0x2AF;
            static constexpr std::uintptr_t SingleFaceIndex = 0x2B0;
            static constexpr std::uintptr_t bShowVertices = 0x2B4;
            static constexpr std::uintptr_t bShowVertexIndices = 0x2B5;
            static constexpr std::uintptr_t bShowVertexNormals = 0x2B6;
            static constexpr std::uintptr_t bUseActiveVisualization = 0x2B7;
            static constexpr std::uintptr_t PointThickness = 0x2B8;
            static constexpr std::uintptr_t LineThickness = 0x2BC;
            static constexpr std::uintptr_t bTextShadow = 0x2C0;
            static constexpr std::uintptr_t TextScale = 0x2C4;
            static constexpr std::uintptr_t NormalScale = 0x2C8;
            static constexpr std::uintptr_t AxisScale = 0x2CC;
            static constexpr std::uintptr_t ArrowScale = 0x2D0;
            static constexpr std::uintptr_t RigidBodyIdColor = 0x2D4;
            static constexpr std::uintptr_t RigidBodyTransformScale = 0x2D8;
            static constexpr std::uintptr_t RigidBodyCollisionColor = 0x2DC;
            static constexpr std::uintptr_t RigidBodyInertiaColor = 0x2E0;
            static constexpr std::uintptr_t RigidBodyVelocityColor = 0x2E4;
            static constexpr std::uintptr_t RigidBodyForceColor = 0x2E8;
            static constexpr std::uintptr_t RigidBodyInfoColor = 0x2EC;
            static constexpr std::uintptr_t TransformIndexColor = 0x2F0;
            static constexpr std::uintptr_t TransformScale = 0x2F4;
            static constexpr std::uintptr_t LevelColor = 0x2F8;
            static constexpr std::uintptr_t ParentColor = 0x2FC;
            static constexpr std::uintptr_t ConnectivityEdgeThickness = 0x300;
            static constexpr std::uintptr_t GeometryIndexColor = 0x304;
            static constexpr std::uintptr_t GeometryTransformScale = 0x308;
            static constexpr std::uintptr_t BoundingBoxColor = 0x30C;
            static constexpr std::uintptr_t FaceColor = 0x310;
            static constexpr std::uintptr_t FaceIndexColor = 0x314;
            static constexpr std::uintptr_t FaceNormalColor = 0x318;
            static constexpr std::uintptr_t SingleFaceColor = 0x31C;
            static constexpr std::uintptr_t VertexColor = 0x320;
            static constexpr std::uintptr_t VertexIndexColor = 0x324;
            static constexpr std::uintptr_t VertexNormalColor = 0x328;
            static constexpr std::uintptr_t SpriteComponent = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"WarningMessage", 0x278, "StructProperty"},
            {"SelectedRigidBody", 0x280, "StructProperty"},
            {"bDebugDrawWholeCollection", 0x298, "BoolProperty"},
            {"bDebugDrawHierarchy", 0x299, "BoolProperty"},
            {"bDebugDrawClustering", 0x29A, "BoolProperty"},
            {"HideGeometry", 0x29B, "EnumProperty"},
            {"bShowRigidBodyId", 0x29C, "BoolProperty"},
            {"bShowRigidBodyCollision", 0x29D, "BoolProperty"},
            {"bCollisionAtOrigin", 0x29E, "BoolProperty"},
            {"bShowRigidBodyTransform", 0x29F, "BoolProperty"},
            {"bShowRigidBodyInertia", 0x2A0, "BoolProperty"},
            {"bShowRigidBodyVelocity", 0x2A1, "BoolProperty"},
            {"bShowRigidBodyForce", 0x2A2, "BoolProperty"},
            {"bShowRigidBodyInfos", 0x2A3, "BoolProperty"},
            {"bShowTransformIndex", 0x2A4, "BoolProperty"},
            {"bShowTransform", 0x2A5, "BoolProperty"},
            {"bShowParent", 0x2A6, "BoolProperty"},
            {"bShowLevel", 0x2A7, "BoolProperty"},
            {"bShowConnectivityEdges", 0x2A8, "BoolProperty"},
            {"bShowGeometryIndex", 0x2A9, "BoolProperty"},
            {"bShowGeometryTransform", 0x2AA, "BoolProperty"},
            {"bShowBoundingBox", 0x2AB, "BoolProperty"},
            {"bShowFaces", 0x2AC, "BoolProperty"},
            {"bShowFaceIndices", 0x2AD, "BoolProperty"},
            {"bShowFaceNormals", 0x2AE, "BoolProperty"},
            {"bShowSingleFace", 0x2AF, "BoolProperty"},
            {"SingleFaceIndex", 0x2B0, "IntProperty"},
            {"bShowVertices", 0x2B4, "BoolProperty"},
            {"bShowVertexIndices", 0x2B5, "BoolProperty"},
            {"bShowVertexNormals", 0x2B6, "BoolProperty"},
            {"bUseActiveVisualization", 0x2B7, "BoolProperty"},
            {"PointThickness", 0x2B8, "FloatProperty"},
            {"LineThickness", 0x2BC, "FloatProperty"},
            {"bTextShadow", 0x2C0, "BoolProperty"},
            {"TextScale", 0x2C4, "FloatProperty"},
            {"NormalScale", 0x2C8, "FloatProperty"},
            {"AxisScale", 0x2CC, "FloatProperty"},
            {"ArrowScale", 0x2D0, "FloatProperty"},
            {"RigidBodyIdColor", 0x2D4, "StructProperty"},
            {"RigidBodyTransformScale", 0x2D8, "FloatProperty"},
            {"RigidBodyCollisionColor", 0x2DC, "StructProperty"},
            {"RigidBodyInertiaColor", 0x2E0, "StructProperty"},
            {"RigidBodyVelocityColor", 0x2E4, "StructProperty"},
            {"RigidBodyForceColor", 0x2E8, "StructProperty"},
            {"RigidBodyInfoColor", 0x2EC, "StructProperty"},
            {"TransformIndexColor", 0x2F0, "StructProperty"},
            {"TransformScale", 0x2F4, "FloatProperty"},
            {"LevelColor", 0x2F8, "StructProperty"},
            {"ParentColor", 0x2FC, "StructProperty"},
            {"ConnectivityEdgeThickness", 0x300, "FloatProperty"},
            {"GeometryIndexColor", 0x304, "StructProperty"},
            {"GeometryTransformScale", 0x308, "FloatProperty"},
            {"BoundingBoxColor", 0x30C, "StructProperty"},
            {"FaceColor", 0x310, "StructProperty"},
            {"FaceIndexColor", 0x314, "StructProperty"},
            {"FaceNormalColor", 0x318, "StructProperty"},
            {"SingleFaceColor", 0x31C, "StructProperty"},
            {"VertexColor", 0x320, "StructProperty"},
            {"VertexIndexColor", 0x324, "StructProperty"},
            {"VertexNormalColor", 0x328, "StructProperty"},
            {"SpriteComponent", 0x330, "ObjectProperty"},
        }};
    };

    struct GeometryCollectionDebugDrawActorSelectedRigidBody
    {
        static constexpr std::string_view Name = "GeometryCollectionDebugDrawActorSelectedRigidBody";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Solver = 0x8;
            static constexpr std::uintptr_t GeometryCollection = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ID", 0x0, "IntProperty"},
            {"Solver", 0x8, "ObjectProperty"},
            {"GeometryCollection", 0x10, "ObjectProperty"},
        }};
    };

    struct GeometryCollectionDebugDrawComponent
    {
        static constexpr std::string_view Name = "GeometryCollectionDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionDebugDrawActor = 0xC0;
            static constexpr std::uintptr_t GeometryCollectionRenderLevelSetActor = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GeometryCollectionDebugDrawActor", 0xC0, "ObjectProperty"},
            {"GeometryCollectionRenderLevelSetActor", 0xC8, "ObjectProperty"},
        }};
    };

    struct GeometryCollectionDebugDrawWarningMessage
    {
        static constexpr std::string_view Name = "GeometryCollectionDebugDrawWarningMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryCollectionEmbeddedExemplar
    {
        static constexpr std::string_view Name = "GeometryCollectionEmbeddedExemplar";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshExemplar = 0x0;
            static constexpr std::uintptr_t StartCullDistance = 0x18;
            static constexpr std::uintptr_t EndCullDistance = 0x1C;
            static constexpr std::uintptr_t InstanceCount = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StaticMeshExemplar", 0x0, "StructProperty"},
            {"StartCullDistance", 0x18, "FloatProperty"},
            {"EndCullDistance", 0x1C, "FloatProperty"},
            {"InstanceCount", 0x20, "IntProperty"},
        }};
    };

    struct GeometryCollectionExternalRenderInterface
    {
        static constexpr std::string_view Name = "GeometryCollectionExternalRenderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryCollectionISMPoolActor
    {
        static constexpr std::string_view Name = "GeometryCollectionISMPoolActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ISMPoolComp = 0x278;
            static constexpr std::uintptr_t ISMPoolDebugDrawComp = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ISMPoolComp", 0x278, "ObjectProperty"},
            {"ISMPoolDebugDrawComp", 0x280, "ObjectProperty"},
        }};
    };

    struct GeometryCollectionISMPoolComponent
    {
        static constexpr std::string_view Name = "GeometryCollectionISMPoolComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsVolume = 0xC8;
            static constexpr std::uintptr_t AttachParent = 0xD0;
            static constexpr std::uintptr_t AttachSocketName = 0xD8;
            static constexpr std::uintptr_t AttachChildren = 0xE0;
            static constexpr std::uintptr_t ClientAttachedChildren = 0xF0;
            static constexpr std::uintptr_t RelativeLocation = 0x140;
            static constexpr std::uintptr_t RelativeRotation = 0x158;
            static constexpr std::uintptr_t RelativeScale3D = 0x170;
            static constexpr std::uintptr_t ComponentVelocity = 0x188;
            static constexpr std::uintptr_t bAbsoluteLocation = 0x1A0;
            static constexpr std::uintptr_t bAbsoluteRotation = 0x1A0;
            static constexpr std::uintptr_t bAbsoluteScale = 0x1A0;
            static constexpr std::uintptr_t bComponentToWorldUpdated = 0x1A0;
            static constexpr std::uintptr_t bShouldBeAttached = 0x1A0;
            static constexpr std::uintptr_t bShouldSnapLocationWhenAttached = 0x1A0;
            static constexpr std::uintptr_t bVisible = 0x1A0;
            static constexpr std::uintptr_t bBoundsChangeTriggersStreamingDataRebuild = 0x1A1;
            static constexpr std::uintptr_t bComputeBoundsOnceForGame = 0x1A1;
            static constexpr std::uintptr_t bComputeFastLocalBounds = 0x1A1;
            static constexpr std::uintptr_t bHiddenInGame = 0x1A1;
            static constexpr std::uintptr_t bShouldSnapRotationWhenAttached = 0x1A1;
            static constexpr std::uintptr_t bShouldSnapScaleWhenAttached = 0x1A1;
            static constexpr std::uintptr_t bShouldUpdatePhysicsVolume = 0x1A1;
            static constexpr std::uintptr_t bUseAttachParentBound = 0x1A1;
            static constexpr std::uintptr_t bComputedBoundsOnceForGame = 0x1A2;
            static constexpr std::uintptr_t bIsNotRenderAttachmentRoot = 0x1A2;
            static constexpr std::uintptr_t Mobility = 0x1A3;
            static constexpr std::uintptr_t DetailMode = 0x1A4;
            static constexpr std::uintptr_t PhysicsVolumeChangedDelegate = 0x1A5;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"PhysicsVolume", 0xC8, "WeakObjectProperty"},
            {"AttachParent", 0xD0, "ObjectProperty"},
            {"AttachSocketName", 0xD8, "NameProperty"},
            {"AttachChildren", 0xE0, "ArrayProperty"},
            {"ClientAttachedChildren", 0xF0, "ArrayProperty"},
            {"RelativeLocation", 0x140, "StructProperty"},
            {"RelativeRotation", 0x158, "StructProperty"},
            {"RelativeScale3D", 0x170, "StructProperty"},
            {"ComponentVelocity", 0x188, "StructProperty"},
            {"bAbsoluteLocation", 0x1A0, "BoolProperty"},
            {"bAbsoluteRotation", 0x1A0, "BoolProperty"},
            {"bAbsoluteScale", 0x1A0, "BoolProperty"},
            {"bComponentToWorldUpdated", 0x1A0, "BoolProperty"},
            {"bShouldBeAttached", 0x1A0, "BoolProperty"},
            {"bShouldSnapLocationWhenAttached", 0x1A0, "BoolProperty"},
            {"bVisible", 0x1A0, "BoolProperty"},
            {"bBoundsChangeTriggersStreamingDataRebuild", 0x1A1, "BoolProperty"},
            {"bComputeBoundsOnceForGame", 0x1A1, "BoolProperty"},
            {"bComputeFastLocalBounds", 0x1A1, "BoolProperty"},
            {"bHiddenInGame", 0x1A1, "BoolProperty"},
            {"bShouldSnapRotationWhenAttached", 0x1A1, "BoolProperty"},
            {"bShouldSnapScaleWhenAttached", 0x1A1, "BoolProperty"},
            {"bShouldUpdatePhysicsVolume", 0x1A1, "BoolProperty"},
            {"bUseAttachParentBound", 0x1A1, "BoolProperty"},
            {"bComputedBoundsOnceForGame", 0x1A2, "BoolProperty"},
            {"bIsNotRenderAttachmentRoot", 0x1A2, "BoolProperty"},
            {"Mobility", 0x1A3, "ByteProperty"},
            {"DetailMode", 0x1A4, "ByteProperty"},
            {"PhysicsVolumeChangedDelegate", 0x1A5, "MulticastSparseDelegateProperty"},
        }};
    };

    struct GeometryCollectionISMPoolDebugDrawComponent
    {
        static constexpr std::string_view Name = "GeometryCollectionISMPoolDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowGlobalStats = 0x5C0;
            static constexpr std::uintptr_t bShowStats = 0x5C1;
            static constexpr std::uintptr_t bShowBounds = 0x5C2;
            static constexpr std::uintptr_t SelectedComponent = 0x5C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bShowGlobalStats", 0x5C0, "BoolProperty"},
            {"bShowStats", 0x5C1, "BoolProperty"},
            {"bShowBounds", 0x5C2, "BoolProperty"},
            {"SelectedComponent", 0x5C8, "ObjectProperty"},
        }};
    };

    struct GeometryCollectionISMPoolRenderer
    {
        static constexpr std::string_view Name = "GeometryCollectionISMPoolRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedISMPoolComponent = 0x30;
            static constexpr std::uintptr_t LocalISMPoolComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedISMPoolComponent", 0x30, "ObjectProperty"},
            {"LocalISMPoolComponent", 0x38, "ObjectProperty"},
        }};
    };

    struct GeometryCollectionISMPoolSubSystem
    {
        static constexpr std::string_view Name = "GeometryCollectionISMPoolSubSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnActorEndPlay",
        }};
    };

    struct GeometryCollectionLevelSetData
    {
        static constexpr std::string_view Name = "GeometryCollectionLevelSetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MinLevelSetResolution = 0x0;
            static constexpr std::uintptr_t MaxLevelSetResolution = 0x4;
            static constexpr std::uintptr_t MinClusterLevelSetResolution = 0x8;
            static constexpr std::uintptr_t MaxClusterLevelSetResolution = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinLevelSetResolution", 0x0, "IntProperty"},
            {"MaxLevelSetResolution", 0x4, "IntProperty"},
            {"MinClusterLevelSetResolution", 0x8, "IntProperty"},
            {"MaxClusterLevelSetResolution", 0xC, "IntProperty"},
        }};
    };

    struct GeometryCollectionProxyMeshData
    {
        static constexpr std::string_view Name = "GeometryCollectionProxyMeshData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyMeshes = 0x0;
            static constexpr std::uintptr_t MeshTransforms = 0x10;
            static constexpr std::uintptr_t MeshOverrideMaterials = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProxyMeshes", 0x0, "ArrayProperty"},
            {"MeshTransforms", 0x10, "ArrayProperty"},
            {"MeshOverrideMaterials", 0x20, "ArrayProperty"},
        }};
    };

    struct GeometryCollectionProxyMeshMaterials
    {
        static constexpr std::string_view Name = "GeometryCollectionProxyMeshMaterials";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Materials = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Materials", 0x0, "ArrayProperty"},
        }};
    };

    struct GeometryCollectionRenderLevelSetActor
    {
        static constexpr std::string_view Name = "GeometryCollectionRenderLevelSetActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetVolumeTexture = 0x278;
            static constexpr std::uintptr_t RayMarchMaterial = 0x280;
            static constexpr std::uintptr_t SurfaceTolerance = 0x288;
            static constexpr std::uintptr_t IsoValue = 0x28C;
            static constexpr std::uintptr_t Enabled = 0x290;
            static constexpr std::uintptr_t RenderVolumeBoundingBox = 0x291;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TargetVolumeTexture", 0x278, "ObjectProperty"},
            {"RayMarchMaterial", 0x280, "ObjectProperty"},
            {"SurfaceTolerance", 0x288, "FloatProperty"},
            {"IsoValue", 0x28C, "FloatProperty"},
            {"Enabled", 0x290, "BoolProperty"},
            {"RenderVolumeBoundingBox", 0x291, "BoolProperty"},
        }};
    };

    struct GeometryCollectionRenderResourceSizeInfo
    {
        static constexpr std::string_view Name = "GeometryCollectionRenderResourceSizeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshResourcesSize = 0x0;
            static constexpr std::uintptr_t NaniteResourcesSize = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshResourcesSize", 0x0, "UInt64Property"},
            {"NaniteResourcesSize", 0x8, "UInt64Property"},
        }};
    };

    struct GeometryCollectionRepData
    {
        static constexpr std::string_view Name = "GeometryCollectionRepData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryCollectionRepDynamicData
    {
        static constexpr std::string_view Name = "GeometryCollectionRepDynamicData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryCollectionRepStateData
    {
        static constexpr std::string_view Name = "GeometryCollectionRepStateData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeometryCollectionRootProxyRenderer
    {
        static constexpr std::string_view Name = "GeometryCollectionRootProxyRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshComponents = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMeshComponents", 0x30, "ArrayProperty"},
        }};
    };

    struct GeometryCollectionSizeSpecificData
    {
        static constexpr std::string_view Name = "GeometryCollectionSizeSpecificData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSize = 0x0;
            static constexpr std::uintptr_t CollisionShapes = 0x8;
            static constexpr std::uintptr_t DamageThreshold = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxSize", 0x0, "FloatProperty"},
            {"CollisionShapes", 0x8, "ArrayProperty"},
            {"DamageThreshold", 0x18, "IntProperty"},
        }};
    };

    struct GeometryCollectionSource
    {
        static constexpr std::string_view Name = "GeometryCollectionSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceGeometryObject = 0x0;
            static constexpr std::uintptr_t LocalTransform = 0x20;
            static constexpr std::uintptr_t SourceMaterial = 0x80;
            static constexpr std::uintptr_t InstanceCustomData = 0x90;
            static constexpr std::uintptr_t bAddInternalMaterials = 0xA0;
            static constexpr std::uintptr_t bSplitComponents = 0xA1;
            static constexpr std::uintptr_t bSetInternalFromMaterialIndex = 0xA2;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SourceGeometryObject", 0x0, "StructProperty"},
            {"LocalTransform", 0x20, "StructProperty"},
            {"SourceMaterial", 0x80, "ArrayProperty"},
            {"InstanceCustomData", 0x90, "ArrayProperty"},
            {"bAddInternalMaterials", 0xA0, "BoolProperty"},
            {"bSplitComponents", 0xA1, "BoolProperty"},
            {"bSetInternalFromMaterialIndex", 0xA2, "BoolProperty"},
        }};
    };

}
