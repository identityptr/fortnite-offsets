#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ClothingSystemRuntimeInterface
{
    struct ClothCollisionCounts
    {
        static constexpr std::string_view Name = "ClothCollisionCounts";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumSpheres = 0x0;
            static constexpr std::uintptr_t NumSphereConnections = 0x4;
            static constexpr std::uintptr_t NumConvexes = 0x8;
            static constexpr std::uintptr_t NumBoxes = 0xC;
            static constexpr std::uintptr_t NumExtrudedTaperedCapsules = 0x10;
            static constexpr std::uintptr_t bIsSupported = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NumSpheres", 0x0, "IntProperty"},
            {"NumSphereConnections", 0x4, "IntProperty"},
            {"NumConvexes", 0x8, "IntProperty"},
            {"NumBoxes", 0xC, "IntProperty"},
            {"NumExtrudedTaperedCapsules", 0x10, "IntProperty"},
            {"bIsSupported", 0x14, "BoolProperty"},
        }};
    };

    struct ClothCollisionData
    {
        static constexpr std::string_view Name = "ClothCollisionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Spheres = 0x0;
            static constexpr std::uintptr_t SphereConnections = 0x10;
            static constexpr std::uintptr_t Convexes = 0x20;
            static constexpr std::uintptr_t Boxes = 0x30;
            static constexpr std::uintptr_t ExtrudedTaperedCapsules = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Spheres", 0x0, "ArrayProperty"},
            {"SphereConnections", 0x10, "ArrayProperty"},
            {"Convexes", 0x20, "ArrayProperty"},
            {"Boxes", 0x30, "ArrayProperty"},
            {"ExtrudedTaperedCapsules", 0x40, "ArrayProperty"},
        }};
    };

    struct ClothCollisionPrim_Box
    {
        static constexpr std::string_view Name = "ClothCollisionPrim_Box";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPosition = 0x0;
            static constexpr std::uintptr_t LocalRotation = 0x20;
            static constexpr std::uintptr_t HalfExtents = 0x40;
            static constexpr std::uintptr_t BoneIndex = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocalPosition", 0x0, "StructProperty"},
            {"LocalRotation", 0x20, "StructProperty"},
            {"HalfExtents", 0x40, "StructProperty"},
            {"BoneIndex", 0x58, "IntProperty"},
        }};
    };

    struct ClothCollisionPrim_Convex
    {
        static constexpr std::string_view Name = "ClothCollisionPrim_Convex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Faces = 0x0;
            static constexpr std::uintptr_t SurfacePoints = 0x10;
            static constexpr std::uintptr_t LocalPosition = 0x20;
            static constexpr std::uintptr_t LocalRotation = 0x40;
            static constexpr std::uintptr_t BoneIndex = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Faces", 0x0, "ArrayProperty"},
            {"SurfacePoints", 0x10, "ArrayProperty"},
            {"LocalPosition", 0x20, "StructProperty"},
            {"LocalRotation", 0x40, "StructProperty"},
            {"BoneIndex", 0x60, "IntProperty"},
        }};
    };

    struct ClothCollisionPrim_ConvexFace
    {
        static constexpr std::string_view Name = "ClothCollisionPrim_ConvexFace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Plane = 0x0;
            static constexpr std::uintptr_t Indices = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Plane", 0x0, "StructProperty"},
            {"Indices", 0x20, "ArrayProperty"},
        }};
    };

    struct ClothCollisionPrim_ExtrudedTaperedCapsule
    {
        static constexpr std::string_view Name = "ClothCollisionPrim_ExtrudedTaperedCapsule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalPosition = 0x0;
            static constexpr std::uintptr_t LocalRotation = 0x20;
            static constexpr std::uintptr_t Length = 0x40;
            static constexpr std::uintptr_t Width = 0x44;
            static constexpr std::uintptr_t Radius1 = 0x48;
            static constexpr std::uintptr_t Radius2 = 0x4C;
            static constexpr std::uintptr_t BoneIndex = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LocalPosition", 0x0, "StructProperty"},
            {"LocalRotation", 0x20, "StructProperty"},
            {"Length", 0x40, "FloatProperty"},
            {"Width", 0x44, "FloatProperty"},
            {"Radius1", 0x48, "FloatProperty"},
            {"Radius2", 0x4C, "FloatProperty"},
            {"BoneIndex", 0x50, "IntProperty"},
        }};
    };

    struct ClothCollisionPrim_Sphere
    {
        static constexpr std::string_view Name = "ClothCollisionPrim_Sphere";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneIndex = 0x0;
            static constexpr std::uintptr_t Radius = 0x4;
            static constexpr std::uintptr_t LocalPosition = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoneIndex", 0x0, "IntProperty"},
            {"Radius", 0x4, "FloatProperty"},
            {"LocalPosition", 0x8, "StructProperty"},
        }};
    };

    struct ClothCollisionPrim_SphereConnection
    {
        static constexpr std::string_view Name = "ClothCollisionPrim_SphereConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SphereIndices = 0x0;
            static constexpr std::uintptr_t OneSidedPlaneNormal = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SphereIndices", 0x0, "IntProperty"},
            {"OneSidedPlaneNormal", 0x8, "StructProperty"},
        }};
    };

    struct ClothConfigBase
    {
        static constexpr std::string_view Name = "ClothConfigBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothPhysicalMeshDataBase_Legacy
    {
        static constexpr std::string_view Name = "ClothPhysicalMeshDataBase_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0x28;
            static constexpr std::uintptr_t Normals = 0x38;
            static constexpr std::uintptr_t Indices = 0x48;
            static constexpr std::uintptr_t InverseMasses = 0x58;
            static constexpr std::uintptr_t BoneData = 0x68;
            static constexpr std::uintptr_t NumFixedVerts = 0x78;
            static constexpr std::uintptr_t MaxBoneWeights = 0x7C;
            static constexpr std::uintptr_t SelfCollisionIndices = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Vertices", 0x28, "ArrayProperty"},
            {"Normals", 0x38, "ArrayProperty"},
            {"Indices", 0x48, "ArrayProperty"},
            {"InverseMasses", 0x58, "ArrayProperty"},
            {"BoneData", 0x68, "ArrayProperty"},
            {"NumFixedVerts", 0x78, "IntProperty"},
            {"MaxBoneWeights", 0x7C, "IntProperty"},
            {"SelfCollisionIndices", 0x80, "ArrayProperty"},
        }};
    };

    struct ClothSharedSimConfigBase
    {
        static constexpr std::string_view Name = "ClothSharedSimConfigBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothVertBoneData
    {
        static constexpr std::string_view Name = "ClothVertBoneData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInfluences = 0x0;
            static constexpr std::uintptr_t BoneIndices = 0x4;
            static constexpr std::uintptr_t BoneWeights = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumInfluences", 0x0, "IntProperty"},
            {"BoneIndices", 0x4, "UInt16Property"},
            {"BoneWeights", 0x1C, "FloatProperty"},
        }};
    };

    struct ClothingAssetBase
    {
        static constexpr std::string_view Name = "ClothingAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetGuid = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssetGuid", 0x28, "StructProperty"},
        }};
    };

    struct ClothingInteractor
    {
        static constexpr std::string_view Name = "ClothingInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothingSimulationFactory
    {
        static constexpr std::string_view Name = "ClothingSimulationFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothingSimulationInstance
    {
        static constexpr std::string_view Name = "ClothingSimulationInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothingSimulationInteractor = 0x10;
            static constexpr std::uintptr_t ClothingSimulationFactory = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClothingSimulationInteractor", 0x10, "ObjectProperty"},
            {"ClothingSimulationFactory", 0x18, "ObjectProperty"},
        }};
    };

    struct ClothingSimulationInteractor
    {
        static constexpr std::string_view Name = "ClothingSimulationInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothingInteractors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClothingInteractors", 0x28, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "ClothConfigUpdated",
            "DisableGravityOverride",
            "EnableGravityOverride",
            "GetClothingInteractor",
            "GetNumCloths",
            "GetNumDynamicParticles",
            "GetNumIterations",
            "GetNumKinematicParticles",
            "GetNumSubsteps",
            "GetSimulationTime",
            "PhysicsAssetUpdated",
            "SetAnimDriveSpringStiffness",
            "SetMaxNumIterations",
            "SetNumIterations",
            "SetNumSubsteps",
        }};
    };

}
