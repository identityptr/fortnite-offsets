#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosClothAssetEngine
{
    struct ChaosClothAsset
    {
        static constexpr std::string_view Name = "ChaosClothAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosClothAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t skeleton = 0x2B0;
            static constexpr std::uintptr_t PhysicsAsset = 0x2B8;
            static constexpr std::uintptr_t bSmoothTransition = 0x2C0;
            static constexpr std::uintptr_t bUseMultipleInfluences = 0x2C1;
            static constexpr std::uintptr_t SkinningKernelRadius = 0x2C4;
            static constexpr std::uintptr_t AssetGuid = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"skeleton", 0x2B0, "ObjectProperty"},
            {"PhysicsAsset", 0x2B8, "ObjectProperty"},
            {"bSmoothTransition", 0x2C0, "BoolProperty"},
            {"bUseMultipleInfluences", 0x2C1, "BoolProperty"},
            {"SkinningKernelRadius", 0x2C4, "FloatProperty"},
            {"AssetGuid", 0x2C8, "StructProperty"},
        }};
    };

    struct ChaosClothAssetBase
    {
        static constexpr std::string_view Name = "ChaosClothAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosDeformableAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DataflowInstance = 0xC8;
            static constexpr std::uintptr_t Materials = 0x118;
            static constexpr std::uintptr_t LODInfo = 0x128;
            static constexpr std::uintptr_t MinQualityLevelLOD = 0x138;
            static constexpr std::uintptr_t DisableBelowMinLodStripping = 0x160;
            static constexpr std::uintptr_t MinLOD = 0x178;
            static constexpr std::uintptr_t bSupportRayTracing = 0x190;
            static constexpr std::uintptr_t RayTracingMinLOD = 0x194;
            static constexpr std::uintptr_t ShadowPhysicsAsset = 0x198;
            static constexpr std::uintptr_t OverlayMaterial = 0x1A0;
            static constexpr std::uintptr_t OverlayMaterialMaxDrawDistance = 0x1A8;
            static constexpr std::uintptr_t bHasVertexColors = 0x1AC;
            static constexpr std::uintptr_t Bounds = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"DataflowInstance", 0xC8, "StructProperty"},
            {"Materials", 0x118, "ArrayProperty"},
            {"LODInfo", 0x128, "ArrayProperty"},
            {"MinQualityLevelLOD", 0x138, "StructProperty"},
            {"DisableBelowMinLodStripping", 0x160, "StructProperty"},
            {"MinLOD", 0x178, "StructProperty"},
            {"bSupportRayTracing", 0x190, "BoolProperty"},
            {"RayTracingMinLOD", 0x194, "IntProperty"},
            {"ShadowPhysicsAsset", 0x198, "ObjectProperty"},
            {"OverlayMaterial", 0x1A0, "ObjectProperty"},
            {"OverlayMaterialMaxDrawDistance", 0x1A8, "FloatProperty"},
            {"bHasVertexColors", 0x1AC, "BoolProperty"},
            {"Bounds", 0x248, "StructProperty"},
        }};
    };

    struct ChaosClothAssetInteractor
    {
        static constexpr std::string_view Name = "ChaosClothAssetInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingInteractor";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 39> FunctionNames{{
            "GetAllProperties",
            "GetAllPropertyNames",
            "GetAssetFloatPropertyValue",
            "GetAssetHighFloatPropertyValue",
            "GetAssetIntPropertyValue",
            "GetAssetLowFloatPropertyValue",
            "GetAssetStringPropertyValue",
            "GetAssetVectorPropertyValue",
            "GetAssetWeightedFloatPropertyValue",
            "GetFloatPropertyValue",
            "GetFloatValue",
            "GetHighFloatPropertyValue",
            "GetHighFloatValue",
            "GetIntPropertyValue",
            "GetIntValue",
            "GetLowFloatPropertyValue",
            "GetLowFloatValue",
            "GetStringPropertyValue",
            "GetStringValue",
            "GetVectorPropertyValue",
            "GetVectorValue",
            "GetWeightedFloatPropertyValue",
            "GetWeightedFloatValue",
            "ResetPropertyValue",
            "SetFloatPropertyValue",
            "SetFloatValue",
            "SetHighFloatPropertyValue",
            "SetHighFloatValue",
            "SetIntPropertyValue",
            "SetIntValue",
            "SetLowFloatPropertyValue",
            "SetLowFloatValue",
            "SetPropertySet",
            "SetStringPropertyValue",
            "SetStringValue",
            "SetVectorPropertyValue",
            "SetVectorValue",
            "SetWeightedFloatPropertyValue",
            "SetWeightedFloatValue",
        }};
    };

    struct ChaosClothAssetLodTransitionDataCache
    {
        static constexpr std::string_view Name = "ChaosClothAssetLodTransitionDataCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosClothAssetSKMClothingAsset
    {
        static constexpr std::string_view Name = "ChaosClothAssetSKMClothingAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeformableSKMClothingAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Asset", 0x40, "ObjectProperty"},
        }};
    };

    struct ChaosClothAssetSKMClothingInteractor
    {
        static constexpr std::string_view Name = "ChaosClothAssetSKMClothingInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingInteractor";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothingAsset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClothingAsset", 0x30, "ObjectProperty"},
        }};
    };

    struct ChaosClothAssetSKMClothingSimulationFactory
    {
        static constexpr std::string_view Name = "ChaosClothAssetSKMClothingSimulationFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeformableSKMClothingSimulationFactoryBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosClothAssetSKMClothingSimulationInteractor
    {
        static constexpr std::string_view Name = "ChaosClothAssetSKMClothingSimulationInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingSimulationInteractor";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothingInteractors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClothingInteractors", 0x28, "MapProperty"},
        }};
    };

    struct ChaosClothComponent
    {
        static constexpr std::string_view Name = "ChaosClothComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkinnedMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationAsset = 0x940;
            static constexpr std::uintptr_t BlendWeight = 0x958;
            static constexpr std::uintptr_t ClothGeometryScale = 0x95C;
            static constexpr std::uintptr_t bBindToLeaderComponent = 0x960;
            static constexpr std::uintptr_t bCollideWithEnvironment = 0x960;
            static constexpr std::uintptr_t bEnableSimulation = 0x960;
            static constexpr std::uintptr_t bReset = 0x960;
            static constexpr std::uintptr_t bSuspendSimulation = 0x960;
            static constexpr std::uintptr_t bTeleport = 0x960;
            static constexpr std::uintptr_t bUseAttachedParentAsPoseComponent = 0x960;
            static constexpr std::uintptr_t bWaitForParallelTask = 0x960;
            static constexpr std::uintptr_t LeaderClothComponent = 0x964;
            static constexpr std::uintptr_t TeleportDistanceThreshold = 0x96C;
            static constexpr std::uintptr_t TeleportRotationThreshold = 0x970;
            static constexpr std::uintptr_t ClothSimulationProperties = 0xA18;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"SimulationAsset", 0x940, "StructProperty"},
            {"BlendWeight", 0x958, "FloatProperty"},
            {"ClothGeometryScale", 0x95C, "FloatProperty"},
            {"bBindToLeaderComponent", 0x960, "BoolProperty"},
            {"bCollideWithEnvironment", 0x960, "BoolProperty"},
            {"bEnableSimulation", 0x960, "BoolProperty"},
            {"bReset", 0x960, "BoolProperty"},
            {"bSuspendSimulation", 0x960, "BoolProperty"},
            {"bTeleport", 0x960, "BoolProperty"},
            {"bUseAttachedParentAsPoseComponent", 0x960, "BoolProperty"},
            {"bWaitForParallelTask", 0x960, "BoolProperty"},
            {"LeaderClothComponent", 0x964, "WeakObjectProperty"},
            {"TeleportDistanceThreshold", 0x96C, "FloatProperty"},
            {"TeleportRotationThreshold", 0x970, "FloatProperty"},
            {"ClothSimulationProperties", 0xA18, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 27> FunctionNames{{
            "AddCollisionSource",
            "ForceNextUpdateTeleport",
            "ForceNextUpdateTeleportAndReset",
            "GetAsset",
            "GetClothAsset",
            "GetClothOutfitInteractor",
            "GetCollideWithEnvironment",
            "GetTeleportDistanceThreshold",
            "GetTeleportRotationThreshold",
            "IsSimulationEnabled",
            "IsSimulationSuspended",
            "RecreateClothSimulationProxy",
            "RemoveCollisionSource",
            "RemoveCollisionSources",
            "ResetCollisionSources",
            "ResetConfigProperties",
            "ResetRestLengthsWithMorphTarget",
            "ResetTeleportMode",
            "ResumeSimulation",
            "SetAsset",
            "SetClothAsset",
            "SetCollideWithEnvironment",
            "SetEnableSimulation",
            "SetSimulateInEditor",
            "SetTeleportDistanceThreshold",
            "SetTeleportRotationThreshold",
            "SuspendSimulation",
        }};
    };

    struct ChaosClothComponentEndTickFunction
    {
        static constexpr std::string_view Name = "ChaosClothComponentEndTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct ChaosClothComponentInstanceData
    {
        static constexpr std::string_view Name = "ChaosClothComponentInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SceneComponentInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Asset", 0x78, "ObjectProperty"},
        }};
    };

    struct ChaosClothSimulationModel
    {
        static constexpr std::string_view Name = "ChaosClothSimulationModel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosDeformableSimulationModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DeformableSimulationLodModels = 0x8;
            static constexpr std::uintptr_t UsedBoneNames = 0x18;
            static constexpr std::uintptr_t UsedBoneIndices = 0x28;
            static constexpr std::uintptr_t ReferenceBoneIndex = 0x38;
            static constexpr std::uintptr_t RotationReferenceBoneIndex = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DeformableSimulationLodModels", 0x8, "ArrayProperty"},
            {"UsedBoneNames", 0x18, "ArrayProperty"},
            {"UsedBoneIndices", 0x28, "ArrayProperty"},
            {"ReferenceBoneIndex", 0x38, "IntProperty"},
            {"RotationReferenceBoneIndex", 0x3C, "IntProperty"},
        }};
    };

    struct ChaosClothSimulationProperties
    {
        static constexpr std::string_view Name = "ChaosClothSimulationProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChaosDeformableSimulationPropertiesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothOutfitInteractor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClothOutfitInteractor", 0x30, "ObjectProperty"},
        }};
    };

    struct ClothAssetInteractorDataAsset
    {
        static constexpr std::string_view Name = "ClothAssetInteractorDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultProperties = 0x28;
            static constexpr std::uintptr_t PropertySets = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultProperties", 0x28, "StructProperty"},
            {"PropertySets", 0x38, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetPropertySet",
            "SynchronizePropertySets",
        }};
    };

    struct ClothAssetInteractorPropertyBag
    {
        static constexpr std::string_view Name = "ClothAssetInteractorPropertyBag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstancedPropertyBag";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "StructProperty"},
        }};
    };

    struct ClothAssetSkeletalMeshConverter
    {
        static constexpr std::string_view Name = "ClothAssetSkeletalMeshConverter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
