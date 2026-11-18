#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ClothingSystemRuntimeCommon
{
    struct ClothConfigCommon
    {
        static constexpr std::string_view Name = "ClothConfigCommon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothConfigBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothConfig_Legacy
    {
        static constexpr std::string_view Name = "ClothConfig_Legacy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WindMethod = 0x0;
            static constexpr std::uintptr_t VerticalConstraintConfig = 0x4;
            static constexpr std::uintptr_t HorizontalConstraintConfig = 0x14;
            static constexpr std::uintptr_t BendConstraintConfig = 0x24;
            static constexpr std::uintptr_t ShearConstraintConfig = 0x34;
            static constexpr std::uintptr_t SelfCollisionRadius = 0x44;
            static constexpr std::uintptr_t SelfCollisionStiffness = 0x48;
            static constexpr std::uintptr_t SelfCollisionCullScale = 0x4C;
            static constexpr std::uintptr_t Damping = 0x50;
            static constexpr std::uintptr_t Friction = 0x68;
            static constexpr std::uintptr_t WindDragCoefficient = 0x6C;
            static constexpr std::uintptr_t WindLiftCoefficient = 0x70;
            static constexpr std::uintptr_t LinearDrag = 0x78;
            static constexpr std::uintptr_t AngularDrag = 0x90;
            static constexpr std::uintptr_t LinearInertiaScale = 0xA8;
            static constexpr std::uintptr_t AngularInertiaScale = 0xC0;
            static constexpr std::uintptr_t CentrifugalInertiaScale = 0xD8;
            static constexpr std::uintptr_t SolverFrequency = 0xF0;
            static constexpr std::uintptr_t StiffnessFrequency = 0xF4;
            static constexpr std::uintptr_t GravityScale = 0xF8;
            static constexpr std::uintptr_t GravityOverride = 0x100;
            static constexpr std::uintptr_t bUseGravityOverride = 0x118;
            static constexpr std::uintptr_t TetherStiffness = 0x11C;
            static constexpr std::uintptr_t TetherLimit = 0x120;
            static constexpr std::uintptr_t CollisionThickness = 0x124;
            static constexpr std::uintptr_t AnimDriveSpringStiffness = 0x128;
            static constexpr std::uintptr_t AnimDriveDamperStiffness = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"WindMethod", 0x0, "EnumProperty"},
            {"VerticalConstraintConfig", 0x4, "StructProperty"},
            {"HorizontalConstraintConfig", 0x14, "StructProperty"},
            {"BendConstraintConfig", 0x24, "StructProperty"},
            {"ShearConstraintConfig", 0x34, "StructProperty"},
            {"SelfCollisionRadius", 0x44, "FloatProperty"},
            {"SelfCollisionStiffness", 0x48, "FloatProperty"},
            {"SelfCollisionCullScale", 0x4C, "FloatProperty"},
            {"Damping", 0x50, "StructProperty"},
            {"Friction", 0x68, "FloatProperty"},
            {"WindDragCoefficient", 0x6C, "FloatProperty"},
            {"WindLiftCoefficient", 0x70, "FloatProperty"},
            {"LinearDrag", 0x78, "StructProperty"},
            {"AngularDrag", 0x90, "StructProperty"},
            {"LinearInertiaScale", 0xA8, "StructProperty"},
            {"AngularInertiaScale", 0xC0, "StructProperty"},
            {"CentrifugalInertiaScale", 0xD8, "StructProperty"},
            {"SolverFrequency", 0xF0, "FloatProperty"},
            {"StiffnessFrequency", 0xF4, "FloatProperty"},
            {"GravityScale", 0xF8, "FloatProperty"},
            {"GravityOverride", 0x100, "StructProperty"},
            {"bUseGravityOverride", 0x118, "BoolProperty"},
            {"TetherStiffness", 0x11C, "FloatProperty"},
            {"TetherLimit", 0x120, "FloatProperty"},
            {"CollisionThickness", 0x124, "FloatProperty"},
            {"AnimDriveSpringStiffness", 0x128, "FloatProperty"},
            {"AnimDriveDamperStiffness", 0x12C, "FloatProperty"},
        }};
    };

    struct ClothConstraintSetup_Legacy
    {
        static constexpr std::string_view Name = "ClothConstraintSetup_Legacy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Stiffness = 0x0;
            static constexpr std::uintptr_t StiffnessMultiplier = 0x4;
            static constexpr std::uintptr_t StretchLimit = 0x8;
            static constexpr std::uintptr_t CompressionLimit = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Stiffness", 0x0, "FloatProperty"},
            {"StiffnessMultiplier", 0x4, "FloatProperty"},
            {"StretchLimit", 0x8, "FloatProperty"},
            {"CompressionLimit", 0xC, "FloatProperty"},
        }};
    };

    struct ClothLODDataCommon
    {
        static constexpr std::string_view Name = "ClothLODDataCommon";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMeshData = 0x0;
            static constexpr std::uintptr_t bUseMultipleInfluences = 0xA8;
            static constexpr std::uintptr_t SkinningKernelRadius = 0xAC;
            static constexpr std::uintptr_t bSmoothTransition = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PhysicalMeshData", 0x0, "StructProperty"},
            {"bUseMultipleInfluences", 0xA8, "BoolProperty"},
            {"SkinningKernelRadius", 0xAC, "FloatProperty"},
            {"bSmoothTransition", 0xB0, "BoolProperty"},
        }};
    };

    struct ClothLODDataCommon_Legacy
    {
        static constexpr std::string_view Name = "ClothLODDataCommon_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMeshData = 0x28;
            static constexpr std::uintptr_t ClothPhysicalMeshData = 0x30;
            static constexpr std::uintptr_t CollisionData = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PhysicalMeshData", 0x28, "ObjectProperty"},
            {"ClothPhysicalMeshData", 0x30, "StructProperty"},
            {"CollisionData", 0xD8, "StructProperty"},
        }};
    };

    struct ClothParameterMask_Legacy
    {
        static constexpr std::string_view Name = "ClothParameterMask_Legacy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaskName = 0x0;
            static constexpr std::uintptr_t CurrentTarget = 0x4;
            static constexpr std::uintptr_t MaxValue = 0x8;
            static constexpr std::uintptr_t MinValue = 0xC;
            static constexpr std::uintptr_t Values = 0x10;
            static constexpr std::uintptr_t bEnabled = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaskName", 0x0, "NameProperty"},
            {"CurrentTarget", 0x4, "EnumProperty"},
            {"MaxValue", 0x8, "FloatProperty"},
            {"MinValue", 0xC, "FloatProperty"},
            {"Values", 0x10, "ArrayProperty"},
            {"bEnabled", 0x20, "BoolProperty"},
        }};
    };

    struct ClothPhysicalMeshData
    {
        static constexpr std::string_view Name = "ClothPhysicalMeshData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0x0;
            static constexpr std::uintptr_t Normals = 0x10;
            static constexpr std::uintptr_t Indices = 0x20;
            static constexpr std::uintptr_t WeightMaps = 0x30;
            static constexpr std::uintptr_t InverseMasses = 0x40;
            static constexpr std::uintptr_t BoneData = 0x50;
            static constexpr std::uintptr_t SelfCollisionVertexSet = 0x60;
            static constexpr std::uintptr_t EuclideanTethers = 0x70;
            static constexpr std::uintptr_t GeodesicTethers = 0x80;
            static constexpr std::uintptr_t MaxBoneWeights = 0x90;
            static constexpr std::uintptr_t NumFixedVerts = 0x94;
            static constexpr std::uintptr_t SelfCollisionIndices = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Vertices", 0x0, "ArrayProperty"},
            {"Normals", 0x10, "ArrayProperty"},
            {"Indices", 0x20, "ArrayProperty"},
            {"WeightMaps", 0x30, "MapProperty"},
            {"InverseMasses", 0x40, "ArrayProperty"},
            {"BoneData", 0x50, "ArrayProperty"},
            {"SelfCollisionVertexSet", 0x60, "SetProperty"},
            {"EuclideanTethers", 0x70, "StructProperty"},
            {"GeodesicTethers", 0x80, "StructProperty"},
            {"MaxBoneWeights", 0x90, "IntProperty"},
            {"NumFixedVerts", 0x94, "IntProperty"},
            {"SelfCollisionIndices", 0x98, "ArrayProperty"},
        }};
    };

    struct ClothSharedConfigCommon
    {
        static constexpr std::string_view Name = "ClothSharedConfigCommon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothConfigCommon";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothTetherData
    {
        static constexpr std::string_view Name = "ClothTetherData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothingAssetCommon
    {
        static constexpr std::string_view Name = "ClothingAssetCommon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsAsset = 0x38;
            static constexpr std::uintptr_t ClothConfigs = 0x40;
            static constexpr std::uintptr_t LodData = 0x50;
            static constexpr std::uintptr_t LodMap = 0x60;
            static constexpr std::uintptr_t UsedBoneNames = 0x70;
            static constexpr std::uintptr_t UsedBoneIndices = 0x80;
            static constexpr std::uintptr_t ReferenceBoneIndex = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PhysicsAsset", 0x38, "ObjectProperty"},
            {"ClothConfigs", 0x40, "MapProperty"},
            {"LodData", 0x50, "ArrayProperty"},
            {"LodMap", 0x60, "ArrayProperty"},
            {"UsedBoneNames", 0x70, "ArrayProperty"},
            {"UsedBoneIndices", 0x80, "ArrayProperty"},
            {"ReferenceBoneIndex", 0x90, "IntProperty"},
        }};
    };

    struct ClothingAssetCustomData
    {
        static constexpr std::string_view Name = "ClothingAssetCustomData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PointWeightMap
    {
        static constexpr std::string_view Name = "PointWeightMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Values", 0x0, "ArrayProperty"},
        }};
    };

}
