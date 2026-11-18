#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ClothingSystemRuntimeNv
{
    struct ClothConfigNv
    {
        static constexpr std::string_view Name = "ClothConfigNv";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothConfigCommon";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothingWindMethod = 0x28;
            static constexpr std::uintptr_t VerticalConstraint = 0x2C;
            static constexpr std::uintptr_t HorizontalConstraint = 0x3C;
            static constexpr std::uintptr_t BendConstraint = 0x4C;
            static constexpr std::uintptr_t ShearConstraint = 0x5C;
            static constexpr std::uintptr_t SelfCollisionRadius = 0x6C;
            static constexpr std::uintptr_t SelfCollisionStiffness = 0x70;
            static constexpr std::uintptr_t SelfCollisionCullScale = 0x74;
            static constexpr std::uintptr_t Damping = 0x78;
            static constexpr std::uintptr_t Friction = 0x90;
            static constexpr std::uintptr_t WindDragCoefficient = 0x94;
            static constexpr std::uintptr_t WindLiftCoefficient = 0x98;
            static constexpr std::uintptr_t LinearDrag = 0xA0;
            static constexpr std::uintptr_t AngularDrag = 0xB8;
            static constexpr std::uintptr_t LinearInertiaScale = 0xD0;
            static constexpr std::uintptr_t AngularInertiaScale = 0xE8;
            static constexpr std::uintptr_t CentrifugalInertiaScale = 0x100;
            static constexpr std::uintptr_t SolverFrequency = 0x118;
            static constexpr std::uintptr_t StiffnessFrequency = 0x11C;
            static constexpr std::uintptr_t GravityScale = 0x120;
            static constexpr std::uintptr_t GravityOverride = 0x128;
            static constexpr std::uintptr_t bUseGravityOverride = 0x140;
            static constexpr std::uintptr_t TetherStiffness = 0x144;
            static constexpr std::uintptr_t TetherLimit = 0x148;
            static constexpr std::uintptr_t CollisionThickness = 0x14C;
            static constexpr std::uintptr_t AnimDriveSpringStiffness = 0x150;
            static constexpr std::uintptr_t AnimDriveDamperStiffness = 0x154;
            static constexpr std::uintptr_t WindMethod = 0x158;
            static constexpr std::uintptr_t VerticalConstraintConfig = 0x15C;
            static constexpr std::uintptr_t HorizontalConstraintConfig = 0x16C;
            static constexpr std::uintptr_t BendConstraintConfig = 0x17C;
            static constexpr std::uintptr_t ShearConstraintConfig = 0x18C;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"ClothingWindMethod", 0x28, "EnumProperty"},
            {"VerticalConstraint", 0x2C, "StructProperty"},
            {"HorizontalConstraint", 0x3C, "StructProperty"},
            {"BendConstraint", 0x4C, "StructProperty"},
            {"ShearConstraint", 0x5C, "StructProperty"},
            {"SelfCollisionRadius", 0x6C, "FloatProperty"},
            {"SelfCollisionStiffness", 0x70, "FloatProperty"},
            {"SelfCollisionCullScale", 0x74, "FloatProperty"},
            {"Damping", 0x78, "StructProperty"},
            {"Friction", 0x90, "FloatProperty"},
            {"WindDragCoefficient", 0x94, "FloatProperty"},
            {"WindLiftCoefficient", 0x98, "FloatProperty"},
            {"LinearDrag", 0xA0, "StructProperty"},
            {"AngularDrag", 0xB8, "StructProperty"},
            {"LinearInertiaScale", 0xD0, "StructProperty"},
            {"AngularInertiaScale", 0xE8, "StructProperty"},
            {"CentrifugalInertiaScale", 0x100, "StructProperty"},
            {"SolverFrequency", 0x118, "FloatProperty"},
            {"StiffnessFrequency", 0x11C, "FloatProperty"},
            {"GravityScale", 0x120, "FloatProperty"},
            {"GravityOverride", 0x128, "StructProperty"},
            {"bUseGravityOverride", 0x140, "BoolProperty"},
            {"TetherStiffness", 0x144, "FloatProperty"},
            {"TetherLimit", 0x148, "FloatProperty"},
            {"CollisionThickness", 0x14C, "FloatProperty"},
            {"AnimDriveSpringStiffness", 0x150, "FloatProperty"},
            {"AnimDriveDamperStiffness", 0x154, "FloatProperty"},
            {"WindMethod", 0x158, "EnumProperty"},
            {"VerticalConstraintConfig", 0x15C, "StructProperty"},
            {"HorizontalConstraintConfig", 0x16C, "StructProperty"},
            {"BendConstraintConfig", 0x17C, "StructProperty"},
            {"ShearConstraintConfig", 0x18C, "StructProperty"},
        }};
    };

    struct ClothConstraintSetupNv
    {
        static constexpr std::string_view Name = "ClothConstraintSetupNv";
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

    struct ClothPhysicalMeshDataNv_Legacy
    {
        static constexpr std::string_view Name = "ClothPhysicalMeshDataNv_Legacy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothPhysicalMeshDataBase_Legacy";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDistances = 0xA0;
            static constexpr std::uintptr_t BackstopDistances = 0xB0;
            static constexpr std::uintptr_t BackstopRadiuses = 0xC0;
            static constexpr std::uintptr_t AnimDriveMultipliers = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxDistances", 0xA0, "ArrayProperty"},
            {"BackstopDistances", 0xB0, "ArrayProperty"},
            {"BackstopRadiuses", 0xC0, "ArrayProperty"},
            {"AnimDriveMultipliers", 0xD0, "ArrayProperty"},
        }};
    };

    struct ClothingSimulationFactoryNv
    {
        static constexpr std::string_view Name = "ClothingSimulationFactoryNv";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingSimulationFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClothingSimulationInteractorNv
    {
        static constexpr std::string_view Name = "ClothingSimulationInteractorNv";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingSimulationInteractor";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothingInteractors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClothingInteractors", 0x28, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetAnimDriveDamperStiffness",
        }};
    };

}
