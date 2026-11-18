#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PhysicsCore
{
    struct BodyInstanceCore
    {
        static constexpr std::string_view Name = "BodyInstanceCore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoWeld = 0x8;
            static constexpr std::uintptr_t bEnableGravity = 0x8;
            static constexpr std::uintptr_t bGenerateWakeEvents = 0x8;
            static constexpr std::uintptr_t bGyroscopicTorqueEnabled = 0x8;
            static constexpr std::uintptr_t bOverrideMass = 0x8;
            static constexpr std::uintptr_t bSimulatePhysics = 0x8;
            static constexpr std::uintptr_t bStartAwake = 0x8;
            static constexpr std::uintptr_t bUpdateKinematicFromSimulation = 0x8;
            static constexpr std::uintptr_t bUpdateMassWhenScaleChanges = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bAutoWeld", 0x8, "BoolProperty"},
            {"bEnableGravity", 0x8, "BoolProperty"},
            {"bGenerateWakeEvents", 0x8, "BoolProperty"},
            {"bGyroscopicTorqueEnabled", 0x8, "BoolProperty"},
            {"bOverrideMass", 0x8, "BoolProperty"},
            {"bSimulatePhysics", 0x8, "BoolProperty"},
            {"bStartAwake", 0x8, "BoolProperty"},
            {"bUpdateKinematicFromSimulation", 0x8, "BoolProperty"},
            {"bUpdateMassWhenScaleChanges", 0x9, "BoolProperty"},
        }};
    };

    struct BodySetupCore
    {
        static constexpr std::string_view Name = "BodySetupCore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneName = 0x28;
            static constexpr std::uintptr_t PhysicsType = 0x2C;
            static constexpr std::uintptr_t CollisionTraceFlag = 0x2D;
            static constexpr std::uintptr_t CollisionReponse = 0x2E;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoneName", 0x28, "NameProperty"},
            {"PhysicsType", 0x2C, "ByteProperty"},
            {"CollisionTraceFlag", 0x2D, "ByteProperty"},
            {"CollisionReponse", 0x2E, "ByteProperty"},
        }};
    };

    struct ChaosPhysicalMaterial
    {
        static constexpr std::string_view Name = "ChaosPhysicalMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Friction = 0x28;
            static constexpr std::uintptr_t StaticFriction = 0x2C;
            static constexpr std::uintptr_t Restitution = 0x30;
            static constexpr std::uintptr_t LinearEtherDrag = 0x34;
            static constexpr std::uintptr_t AngularEtherDrag = 0x38;
            static constexpr std::uintptr_t SleepingLinearVelocityThreshold = 0x3C;
            static constexpr std::uintptr_t SleepingAngularVelocityThreshold = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Friction", 0x28, "FloatProperty"},
            {"StaticFriction", 0x2C, "FloatProperty"},
            {"Restitution", 0x30, "FloatProperty"},
            {"LinearEtherDrag", 0x34, "FloatProperty"},
            {"AngularEtherDrag", 0x38, "FloatProperty"},
            {"SleepingLinearVelocityThreshold", 0x3C, "FloatProperty"},
            {"SleepingAngularVelocityThreshold", 0x40, "FloatProperty"},
        }};
    };

    struct PhysicalMaterial
    {
        static constexpr std::string_view Name = "PhysicalMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Friction = 0x28;
            static constexpr std::uintptr_t StaticFriction = 0x2C;
            static constexpr std::uintptr_t FrictionCombineMode = 0x30;
            static constexpr std::uintptr_t bOverrideFrictionCombineMode = 0x31;
            static constexpr std::uintptr_t Restitution = 0x34;
            static constexpr std::uintptr_t RestitutionCombineMode = 0x38;
            static constexpr std::uintptr_t bOverrideRestitutionCombineMode = 0x39;
            static constexpr std::uintptr_t Density = 0x3C;
            static constexpr std::uintptr_t SleepLinearVelocityThreshold = 0x40;
            static constexpr std::uintptr_t SleepAngularVelocityThreshold = 0x44;
            static constexpr std::uintptr_t SleepCounterThreshold = 0x48;
            static constexpr std::uintptr_t RaiseMassToPower = 0x4C;
            static constexpr std::uintptr_t DestructibleDamageThresholdScale = 0x50;
            static constexpr std::uintptr_t PhysicalMaterialProperty = 0x58;
            static constexpr std::uintptr_t SurfaceType = 0x60;
            static constexpr std::uintptr_t Strength = 0x64;
            static constexpr std::uintptr_t DamageModifier = 0x70;
            static constexpr std::uintptr_t DebugColor = 0x74;
            static constexpr std::uintptr_t bShowExperimentalProperties = 0x84;
            static constexpr std::uintptr_t SoftCollisionMode = 0x85;
            static constexpr std::uintptr_t SoftCollisionThickness = 0x88;
            static constexpr std::uintptr_t BaseFrictionImpulse = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"Friction", 0x28, "FloatProperty"},
            {"StaticFriction", 0x2C, "FloatProperty"},
            {"FrictionCombineMode", 0x30, "ByteProperty"},
            {"bOverrideFrictionCombineMode", 0x31, "BoolProperty"},
            {"Restitution", 0x34, "FloatProperty"},
            {"RestitutionCombineMode", 0x38, "ByteProperty"},
            {"bOverrideRestitutionCombineMode", 0x39, "BoolProperty"},
            {"Density", 0x3C, "FloatProperty"},
            {"SleepLinearVelocityThreshold", 0x40, "FloatProperty"},
            {"SleepAngularVelocityThreshold", 0x44, "FloatProperty"},
            {"SleepCounterThreshold", 0x48, "IntProperty"},
            {"RaiseMassToPower", 0x4C, "FloatProperty"},
            {"DestructibleDamageThresholdScale", 0x50, "FloatProperty"},
            {"PhysicalMaterialProperty", 0x58, "ObjectProperty"},
            {"SurfaceType", 0x60, "ByteProperty"},
            {"Strength", 0x64, "StructProperty"},
            {"DamageModifier", 0x70, "StructProperty"},
            {"DebugColor", 0x74, "StructProperty"},
            {"bShowExperimentalProperties", 0x84, "BoolProperty"},
            {"SoftCollisionMode", 0x85, "EnumProperty"},
            {"SoftCollisionThickness", 0x88, "FloatProperty"},
            {"BaseFrictionImpulse", 0x8C, "FloatProperty"},
        }};
    };

    struct PhysicalMaterialDamageModifier
    {
        static constexpr std::string_view Name = "PhysicalMaterialDamageModifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageThresholdMultiplier = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DamageThresholdMultiplier", 0x0, "FloatProperty"},
        }};
    };

    struct PhysicalMaterialPropertyBase
    {
        static constexpr std::string_view Name = "PhysicalMaterialPropertyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PhysicalMaterialStrength
    {
        static constexpr std::string_view Name = "PhysicalMaterialStrength";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TensileStrength = 0x0;
            static constexpr std::uintptr_t CompressionStrength = 0x4;
            static constexpr std::uintptr_t ShearStrength = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TensileStrength", 0x0, "FloatProperty"},
            {"CompressionStrength", 0x4, "FloatProperty"},
            {"ShearStrength", 0x8, "FloatProperty"},
        }};
    };

    struct PhysicsSettingsCore
    {
        static constexpr std::string_view Name = "PhysicsSettingsCore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultGravityZ = 0x30;
            static constexpr std::uintptr_t DefaultTerminalVelocity = 0x34;
            static constexpr std::uintptr_t DefaultFluidFriction = 0x38;
            static constexpr std::uintptr_t SimulateScratchMemorySize = 0x3C;
            static constexpr std::uintptr_t RagdollAggregateThreshold = 0x40;
            static constexpr std::uintptr_t TriangleMeshTriangleMinAreaThreshold = 0x44;
            static constexpr std::uintptr_t bEnableEnhancedDeterminism = 0x48;
            static constexpr std::uintptr_t bEnableShapeSharing = 0x49;
            static constexpr std::uintptr_t bEnablePCM = 0x4A;
            static constexpr std::uintptr_t bEnableStabilization = 0x4B;
            static constexpr std::uintptr_t bWarnMissingLocks = 0x4C;
            static constexpr std::uintptr_t bEnable2DPhysics = 0x4D;
            static constexpr std::uintptr_t bDefaultHasComplexCollision = 0x4E;
            static constexpr std::uintptr_t BounceThresholdVelocity = 0x50;
            static constexpr std::uintptr_t FrictionCombineMode = 0x54;
            static constexpr std::uintptr_t RestitutionCombineMode = 0x55;
            static constexpr std::uintptr_t MaxAngularVelocity = 0x58;
            static constexpr std::uintptr_t MaxDepenetrationVelocity = 0x5C;
            static constexpr std::uintptr_t ContactOffsetMultiplier = 0x60;
            static constexpr std::uintptr_t MinContactOffset = 0x64;
            static constexpr std::uintptr_t MaxContactOffset = 0x68;
            static constexpr std::uintptr_t bSimulateSkeletalMeshOnDedicatedServer = 0x6C;
            static constexpr std::uintptr_t DefaultShapeComplexity = 0x6D;
            static constexpr std::uintptr_t SolverOptions = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"DefaultGravityZ", 0x30, "FloatProperty"},
            {"DefaultTerminalVelocity", 0x34, "FloatProperty"},
            {"DefaultFluidFriction", 0x38, "FloatProperty"},
            {"SimulateScratchMemorySize", 0x3C, "IntProperty"},
            {"RagdollAggregateThreshold", 0x40, "IntProperty"},
            {"TriangleMeshTriangleMinAreaThreshold", 0x44, "FloatProperty"},
            {"bEnableEnhancedDeterminism", 0x48, "BoolProperty"},
            {"bEnableShapeSharing", 0x49, "BoolProperty"},
            {"bEnablePCM", 0x4A, "BoolProperty"},
            {"bEnableStabilization", 0x4B, "BoolProperty"},
            {"bWarnMissingLocks", 0x4C, "BoolProperty"},
            {"bEnable2DPhysics", 0x4D, "BoolProperty"},
            {"bDefaultHasComplexCollision", 0x4E, "BoolProperty"},
            {"BounceThresholdVelocity", 0x50, "FloatProperty"},
            {"FrictionCombineMode", 0x54, "ByteProperty"},
            {"RestitutionCombineMode", 0x55, "ByteProperty"},
            {"MaxAngularVelocity", 0x58, "FloatProperty"},
            {"MaxDepenetrationVelocity", 0x5C, "FloatProperty"},
            {"ContactOffsetMultiplier", 0x60, "FloatProperty"},
            {"MinContactOffset", 0x64, "FloatProperty"},
            {"MaxContactOffset", 0x68, "FloatProperty"},
            {"bSimulateSkeletalMeshOnDedicatedServer", 0x6C, "BoolProperty"},
            {"DefaultShapeComplexity", 0x6D, "ByteProperty"},
            {"SolverOptions", 0x70, "StructProperty"},
        }};
    };

}
