#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MRMesh
{
    struct MRMeshBodyHolder
    {
        static constexpr std::string_view Name = "MRMeshBodyHolder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BodySetup = 0x30;
            static constexpr std::uintptr_t BodyInstance = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BodySetup", 0x30, "ObjectProperty"},
            {"BodyInstance", 0x38, "StructProperty"},
        }};
    };

    struct MRMeshComponent
    {
        static constexpr std::string_view Name = "MRMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x568;
            static constexpr std::uintptr_t WireframeMaterial = 0x570;
            static constexpr std::uintptr_t bCreateMeshProxySections = 0x578;
            static constexpr std::uintptr_t bUpdateNavMeshOnMeshUpdate = 0x579;
            static constexpr std::uintptr_t bNeverCreateCollisionMesh = 0x57B;
            static constexpr std::uintptr_t BodyHolders = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Material", 0x568, "ObjectProperty"},
            {"WireframeMaterial", 0x570, "ObjectProperty"},
            {"bCreateMeshProxySections", 0x578, "BoolProperty"},
            {"bUpdateNavMeshOnMeshUpdate", 0x579, "BoolProperty"},
            {"bNeverCreateCollisionMesh", 0x57B, "BoolProperty"},
            {"BodyHolders", 0x5C0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "Clear",
            "ForceNavMeshUpdate",
            "GetEnableMeshOcclusion",
            "GetUseWireframe",
            "GetWireframeColor",
            "IsConnected",
            "RequestNavMeshUpdate",
            "SetEnableMeshOcclusion",
            "SetUseWireframe",
            "SetWireframeColor",
            "SetWireframeMaterial",
        }};
    };

    struct MRMeshConfiguration
    {
        static constexpr std::string_view Name = "MRMeshConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshReconstructorBase
    {
        static constexpr std::string_view Name = "MeshReconstructorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ConnectMRMesh",
            "DisconnectMRMesh",
            "IsReconstructionPaused",
            "IsReconstructionStarted",
            "PauseReconstruction",
            "StartReconstruction",
            "StopReconstruction",
        }};
    };

    struct MockDataMeshTrackerComponent
    {
        static constexpr std::string_view Name = "MockDataMeshTrackerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshTrackerUpdated = 0x240;
            static constexpr std::uintptr_t ScanWorld = 0x250;
            static constexpr std::uintptr_t RequestNormals = 0x251;
            static constexpr std::uintptr_t RequestVertexConfidence = 0x252;
            static constexpr std::uintptr_t VertexColorMode = 0x253;
            static constexpr std::uintptr_t BlockVertexColors = 0x258;
            static constexpr std::uintptr_t VertexColorFromConfidenceZero = 0x268;
            static constexpr std::uintptr_t VertexColorFromConfidenceOne = 0x278;
            static constexpr std::uintptr_t UpdateInterval = 0x288;
            static constexpr std::uintptr_t MRMesh = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnMeshTrackerUpdated", 0x240, "MulticastInlineDelegateProperty"},
            {"ScanWorld", 0x250, "BoolProperty"},
            {"RequestNormals", 0x251, "BoolProperty"},
            {"RequestVertexConfidence", 0x252, "BoolProperty"},
            {"VertexColorMode", 0x253, "EnumProperty"},
            {"BlockVertexColors", 0x258, "ArrayProperty"},
            {"VertexColorFromConfidenceZero", 0x268, "StructProperty"},
            {"VertexColorFromConfidenceOne", 0x278, "StructProperty"},
            {"UpdateInterval", 0x288, "FloatProperty"},
            {"MRMesh", 0x290, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ConnectMRMesh",
            "DisconnectMRMesh",
        }};
    };

}
