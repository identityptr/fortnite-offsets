#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosDeformableBaseEngine
{
    struct ChaosDeformableAssetBase
    {
        static constexpr std::string_view Name = "ChaosDeformableAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkinnedAsset";
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

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetOverlayMaterial",
            "GetOverlayMaterialMaxDrawDistance",
            "GetShadowPhysicsAsset",
            "HasDataflow",
            "SetOverlayMaterial",
            "SetOverlayMaterialMaxDrawDistance",
        }};
    };

    struct ChaosDeformableSimulationLodModel
    {
        static constexpr std::string_view Name = "ChaosDeformableSimulationLodModel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Positions = 0x0;
            static constexpr std::uintptr_t Normals = 0x10;
            static constexpr std::uintptr_t Indices = 0x20;
            static constexpr std::uintptr_t BoneData = 0x30;
            static constexpr std::uintptr_t RequiredExtraBoneIndices = 0x40;
            static constexpr std::uintptr_t PatternPositions = 0x70;
            static constexpr std::uintptr_t PatternIndices = 0x80;
            static constexpr std::uintptr_t PatternToWeldedIndices = 0x90;
            static constexpr std::uintptr_t TetherData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Positions", 0x0, "ArrayProperty"},
            {"Normals", 0x10, "ArrayProperty"},
            {"Indices", 0x20, "ArrayProperty"},
            {"BoneData", 0x30, "ArrayProperty"},
            {"RequiredExtraBoneIndices", 0x40, "ArrayProperty"},
            {"PatternPositions", 0x70, "ArrayProperty"},
            {"PatternIndices", 0x80, "ArrayProperty"},
            {"PatternToWeldedIndices", 0x90, "ArrayProperty"},
            {"TetherData", 0xB0, "StructProperty"},
        }};
    };

    struct ChaosDeformableSimulationModelBase
    {
        static constexpr std::string_view Name = "ChaosDeformableSimulationModelBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
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

    struct ChaosDeformableSimulationPropertiesBase
    {
        static constexpr std::string_view Name = "ChaosDeformableSimulationPropertiesBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DeformableSKMClothingAssetBase
    {
        static constexpr std::string_view Name = "DeformableSKMClothingAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationModelIndex = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SimulationModelIndex", 0x38, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetSimulationModelIds",
        }};
    };

    struct DeformableSKMClothingSimulationFactoryBase
    {
        static constexpr std::string_view Name = "DeformableSKMClothingSimulationFactoryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingSimulationFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
