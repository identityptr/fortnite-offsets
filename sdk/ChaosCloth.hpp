#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosCloth
{
    struct ChaosClothConfig
    {
        static constexpr std::string_view Name = "ChaosClothConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothConfigCommon";
        struct Offsets
        {
            static constexpr std::uintptr_t MassMode = 0x28;
            static constexpr std::uintptr_t UniformMass = 0x2C;
            static constexpr std::uintptr_t TotalMass = 0x30;
            static constexpr std::uintptr_t Density = 0x34;
            static constexpr std::uintptr_t MinPerParticleMass = 0x38;
            static constexpr std::uintptr_t EdgeStiffnessWeighted = 0x3C;
            static constexpr std::uintptr_t BendingStiffnessWeighted = 0x44;
            static constexpr std::uintptr_t bUseBendingElements = 0x4C;
            static constexpr std::uintptr_t BucklingRatio = 0x50;
            static constexpr std::uintptr_t BucklingStiffnessWeighted = 0x54;
            static constexpr std::uintptr_t FlatnessRatio = 0x5C;
            static constexpr std::uintptr_t AreaStiffnessWeighted = 0x64;
            static constexpr std::uintptr_t VolumeStiffness = 0x6C;
            static constexpr std::uintptr_t TetherStiffness = 0x70;
            static constexpr std::uintptr_t TetherScale = 0x78;
            static constexpr std::uintptr_t bUseGeodesicDistance = 0x80;
            static constexpr std::uintptr_t ShapeTargetStiffness = 0x84;
            static constexpr std::uintptr_t CollisionThickness = 0x88;
            static constexpr std::uintptr_t FrictionCoefficient = 0x8C;
            static constexpr std::uintptr_t bUseCCD = 0x90;
            static constexpr std::uintptr_t bUseSelfCollisions = 0x91;
            static constexpr std::uintptr_t SelfCollisionThickness = 0x94;
            static constexpr std::uintptr_t SelfCollisionFriction = 0x98;
            static constexpr std::uintptr_t bUseSelfIntersections = 0x9C;
            static constexpr std::uintptr_t bUseSelfCollisionSpheres = 0x9D;
            static constexpr std::uintptr_t SelfCollisionSphereRadius = 0xA0;
            static constexpr std::uintptr_t SelfCollisionSphereStiffness = 0xA4;
            static constexpr std::uintptr_t SelfCollisionSphereRadiusCullMultiplier = 0xA8;
            static constexpr std::uintptr_t bUseLegacyBackstop = 0xAC;
            static constexpr std::uintptr_t DampingCoefficient = 0xB0;
            static constexpr std::uintptr_t LocalDampingCoefficient = 0xB4;
            static constexpr std::uintptr_t bUsePointBasedWindModel = 0xB8;
            static constexpr std::uintptr_t Drag = 0xBC;
            static constexpr std::uintptr_t bEnableOuterDrag = 0xC4;
            static constexpr std::uintptr_t OuterDrag = 0xC8;
            static constexpr std::uintptr_t Lift = 0xD0;
            static constexpr std::uintptr_t bEnableOuterLift = 0xD8;
            static constexpr std::uintptr_t OuterLift = 0xDC;
            static constexpr std::uintptr_t bUseGravityOverride = 0xE4;
            static constexpr std::uintptr_t GravityScale = 0xE8;
            static constexpr std::uintptr_t Gravity = 0xF0;
            static constexpr std::uintptr_t Pressure = 0x108;
            static constexpr std::uintptr_t AnimDriveStiffness = 0x110;
            static constexpr std::uintptr_t AnimDriveDamping = 0x118;
            static constexpr std::uintptr_t VelocityScaleSpace = 0x120;
            static constexpr std::uintptr_t LinearVelocityScale = 0x128;
            static constexpr std::uintptr_t bEnableLinearVelocityClamping = 0x140;
            static constexpr std::uintptr_t MaxLinearVelocity = 0x144;
            static constexpr std::uintptr_t bEnableLinearAccelerationClamping = 0x150;
            static constexpr std::uintptr_t MaxLinearAcceleration = 0x154;
            static constexpr std::uintptr_t AngularVelocityScale = 0x160;
            static constexpr std::uintptr_t bEnableAngularVelocityClamping = 0x164;
            static constexpr std::uintptr_t MaxAngularVelocity = 0x168;
            static constexpr std::uintptr_t bEnableAngularAccelerationClamping = 0x16C;
            static constexpr std::uintptr_t MaxAngularAcceleration = 0x170;
            static constexpr std::uintptr_t FictitiousForcesModel = 0x174;
            static constexpr std::uintptr_t FictitiousAngularScale = 0x178;
            static constexpr std::uintptr_t bUseTetrahedralConstraints = 0x17C;
            static constexpr std::uintptr_t bUseThinShellVolumeConstraints = 0x17D;
            static constexpr std::uintptr_t bUseContinuousCollisionDetection = 0x17E;
        };

        inline static constexpr std::array<PropertyInfo, 60> Properties{{
            {"MassMode", 0x28, "EnumProperty"},
            {"UniformMass", 0x2C, "FloatProperty"},
            {"TotalMass", 0x30, "FloatProperty"},
            {"Density", 0x34, "FloatProperty"},
            {"MinPerParticleMass", 0x38, "FloatProperty"},
            {"EdgeStiffnessWeighted", 0x3C, "StructProperty"},
            {"BendingStiffnessWeighted", 0x44, "StructProperty"},
            {"bUseBendingElements", 0x4C, "BoolProperty"},
            {"BucklingRatio", 0x50, "FloatProperty"},
            {"BucklingStiffnessWeighted", 0x54, "StructProperty"},
            {"FlatnessRatio", 0x5C, "StructProperty"},
            {"AreaStiffnessWeighted", 0x64, "StructProperty"},
            {"VolumeStiffness", 0x6C, "FloatProperty"},
            {"TetherStiffness", 0x70, "StructProperty"},
            {"TetherScale", 0x78, "StructProperty"},
            {"bUseGeodesicDistance", 0x80, "BoolProperty"},
            {"ShapeTargetStiffness", 0x84, "FloatProperty"},
            {"CollisionThickness", 0x88, "FloatProperty"},
            {"FrictionCoefficient", 0x8C, "FloatProperty"},
            {"bUseCCD", 0x90, "BoolProperty"},
            {"bUseSelfCollisions", 0x91, "BoolProperty"},
            {"SelfCollisionThickness", 0x94, "FloatProperty"},
            {"SelfCollisionFriction", 0x98, "FloatProperty"},
            {"bUseSelfIntersections", 0x9C, "BoolProperty"},
            {"bUseSelfCollisionSpheres", 0x9D, "BoolProperty"},
            {"SelfCollisionSphereRadius", 0xA0, "FloatProperty"},
            {"SelfCollisionSphereStiffness", 0xA4, "FloatProperty"},
            {"SelfCollisionSphereRadiusCullMultiplier", 0xA8, "FloatProperty"},
            {"bUseLegacyBackstop", 0xAC, "BoolProperty"},
            {"DampingCoefficient", 0xB0, "FloatProperty"},
            {"LocalDampingCoefficient", 0xB4, "FloatProperty"},
            {"bUsePointBasedWindModel", 0xB8, "BoolProperty"},
            {"Drag", 0xBC, "StructProperty"},
            {"bEnableOuterDrag", 0xC4, "BoolProperty"},
            {"OuterDrag", 0xC8, "StructProperty"},
            {"Lift", 0xD0, "StructProperty"},
            {"bEnableOuterLift", 0xD8, "BoolProperty"},
            {"OuterLift", 0xDC, "StructProperty"},
            {"bUseGravityOverride", 0xE4, "BoolProperty"},
            {"GravityScale", 0xE8, "FloatProperty"},
            {"Gravity", 0xF0, "StructProperty"},
            {"Pressure", 0x108, "StructProperty"},
            {"AnimDriveStiffness", 0x110, "StructProperty"},
            {"AnimDriveDamping", 0x118, "StructProperty"},
            {"VelocityScaleSpace", 0x120, "EnumProperty"},
            {"LinearVelocityScale", 0x128, "StructProperty"},
            {"bEnableLinearVelocityClamping", 0x140, "BoolProperty"},
            {"MaxLinearVelocity", 0x144, "StructProperty"},
            {"bEnableLinearAccelerationClamping", 0x150, "BoolProperty"},
            {"MaxLinearAcceleration", 0x154, "StructProperty"},
            {"AngularVelocityScale", 0x160, "FloatProperty"},
            {"bEnableAngularVelocityClamping", 0x164, "BoolProperty"},
            {"MaxAngularVelocity", 0x168, "FloatProperty"},
            {"bEnableAngularAccelerationClamping", 0x16C, "BoolProperty"},
            {"MaxAngularAcceleration", 0x170, "FloatProperty"},
            {"FictitiousForcesModel", 0x174, "EnumProperty"},
            {"FictitiousAngularScale", 0x178, "FloatProperty"},
            {"bUseTetrahedralConstraints", 0x17C, "BoolProperty"},
            {"bUseThinShellVolumeConstraints", 0x17D, "BoolProperty"},
            {"bUseContinuousCollisionDetection", 0x17E, "BoolProperty"},
        }};
    };

    struct ChaosClothSharedSimConfig
    {
        static constexpr std::string_view Name = "ChaosClothSharedSimConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothSharedConfigCommon";
        struct Offsets
        {
            static constexpr std::uintptr_t IterationCount = 0x28;
            static constexpr std::uintptr_t MaxIterationCount = 0x2C;
            static constexpr std::uintptr_t SubdivisionCount = 0x30;
            static constexpr std::uintptr_t bUseLocalSpaceSimulation = 0x34;
            static constexpr std::uintptr_t bUseXPBDConstraints = 0x35;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IterationCount", 0x28, "IntProperty"},
            {"MaxIterationCount", 0x2C, "IntProperty"},
            {"SubdivisionCount", 0x30, "IntProperty"},
            {"bUseLocalSpaceSimulation", 0x34, "BoolProperty"},
            {"bUseXPBDConstraints", 0x35, "BoolProperty"},
        }};
    };

    struct ChaosClothWeightedValue
    {
        static constexpr std::string_view Name = "ChaosClothWeightedValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Low = 0x0;
            static constexpr std::uintptr_t High = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Low", 0x0, "FloatProperty"},
            {"High", 0x4, "FloatProperty"},
        }};
    };

    struct ChaosClothingInteractor
    {
        static constexpr std::string_view Name = "ChaosClothingInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingInteractor";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "ResetAndTeleport",
            "SetAerodynamics",
            "SetAnimDrive",
            "SetAnimDriveLinear",
            "SetBackstop",
            "SetCollision",
            "SetDamping",
            "SetGravity",
            "SetLongRangeAttachment",
            "SetLongRangeAttachmentLinear",
            "SetMaterial",
            "SetMaterialBuckling",
            "SetMaterialLinear",
            "SetPressure",
            "SetVelocityClamps",
            "SetVelocityScale",
            "SetWind",
        }};
    };

    struct ChaosClothingSimulationFactory
    {
        static constexpr std::string_view Name = "ChaosClothingSimulationFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClothingSimulationFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosClothingSimulationInteractor
    {
        static constexpr std::string_view Name = "ChaosClothingSimulationInteractor";
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

}
