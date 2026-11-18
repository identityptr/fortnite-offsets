#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Chaos
{
    struct ChaosSolverConfiguration
    {
        static constexpr std::string_view Name = "ChaosSolverConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PositionIterations = 0x0;
            static constexpr std::uintptr_t VelocityIterations = 0x4;
            static constexpr std::uintptr_t ProjectionIterations = 0x8;
            static constexpr std::uintptr_t CollisionMarginFraction = 0xC;
            static constexpr std::uintptr_t CollisionMarginMax = 0x10;
            static constexpr std::uintptr_t CollisionCullDistance = 0x14;
            static constexpr std::uintptr_t CollisionMaxPushOutVelocity = 0x18;
            static constexpr std::uintptr_t CollisionInitialOverlapDepenetrationVelocity = 0x1C;
            static constexpr std::uintptr_t ClusterConnectionFactor = 0x20;
            static constexpr std::uintptr_t ClusterUnionConnectionType = 0x24;
            static constexpr std::uintptr_t DestructionSettings = 0x28;
            static constexpr std::uintptr_t bGenerateCollisionData = 0x3C;
            static constexpr std::uintptr_t CollisionFilterSettings = 0x40;
            static constexpr std::uintptr_t bGenerateBreakData = 0x50;
            static constexpr std::uintptr_t BreakingFilterSettings = 0x54;
            static constexpr std::uintptr_t bGenerateTrailingData = 0x64;
            static constexpr std::uintptr_t TrailingFilterSettings = 0x68;
            static constexpr std::uintptr_t Iterations = 0x78;
            static constexpr std::uintptr_t PushOutIterations = 0x7C;
            static constexpr std::uintptr_t bGenerateContactGraph = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"PositionIterations", 0x0, "IntProperty"},
            {"VelocityIterations", 0x4, "IntProperty"},
            {"ProjectionIterations", 0x8, "IntProperty"},
            {"CollisionMarginFraction", 0xC, "FloatProperty"},
            {"CollisionMarginMax", 0x10, "FloatProperty"},
            {"CollisionCullDistance", 0x14, "FloatProperty"},
            {"CollisionMaxPushOutVelocity", 0x18, "FloatProperty"},
            {"CollisionInitialOverlapDepenetrationVelocity", 0x1C, "FloatProperty"},
            {"ClusterConnectionFactor", 0x20, "FloatProperty"},
            {"ClusterUnionConnectionType", 0x24, "EnumProperty"},
            {"DestructionSettings", 0x28, "StructProperty"},
            {"bGenerateCollisionData", 0x3C, "BoolProperty"},
            {"CollisionFilterSettings", 0x40, "StructProperty"},
            {"bGenerateBreakData", 0x50, "BoolProperty"},
            {"BreakingFilterSettings", 0x54, "StructProperty"},
            {"bGenerateTrailingData", 0x64, "BoolProperty"},
            {"TrailingFilterSettings", 0x68, "StructProperty"},
            {"Iterations", 0x78, "IntProperty"},
            {"PushOutIterations", 0x7C, "IntProperty"},
            {"bGenerateContactGraph", 0x80, "BoolProperty"},
        }};
    };

    struct ChaosSolverDestructionSettings
    {
        static constexpr std::string_view Name = "ChaosSolverDestructionSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PerAdvanceBreaksAllowed = 0x0;
            static constexpr std::uintptr_t PerAdvanceBreaksRescheduleLimit = 0x4;
            static constexpr std::uintptr_t ClusteringParticleReleaseThrottlingMinCount = 0x8;
            static constexpr std::uintptr_t ClusteringParticleReleaseThrottlingMaxCount = 0xC;
            static constexpr std::uintptr_t bOptimizeForRuntimeMemory = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PerAdvanceBreaksAllowed", 0x0, "IntProperty"},
            {"PerAdvanceBreaksRescheduleLimit", 0x4, "IntProperty"},
            {"ClusteringParticleReleaseThrottlingMinCount", 0x8, "IntProperty"},
            {"ClusteringParticleReleaseThrottlingMaxCount", 0xC, "IntProperty"},
            {"bOptimizeForRuntimeMemory", 0x10, "BoolProperty"},
        }};
    };

    struct ClosestPhysicsObjectResult
    {
        static constexpr std::string_view Name = "ClosestPhysicsObjectResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FieldCollection
    {
        static constexpr std::string_view Name = "FieldCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ManagedArrayCollection";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ManagedArrayCollection
    {
        static constexpr std::string_view Name = "ManagedArrayCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RecordedFrame
    {
        static constexpr std::string_view Name = "RecordedFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x0;
            static constexpr std::uintptr_t TransformIndices = 0x10;
            static constexpr std::uintptr_t PreviousTransformIndices = 0x20;
            static constexpr std::uintptr_t DisabledFlags = 0x30;
            static constexpr std::uintptr_t CollisionS = 0x40;
            static constexpr std::uintptr_t Breakings = 0x50;
            static constexpr std::uintptr_t Trailings = 0x60;
            static constexpr std::uintptr_t Timestamp = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Transforms", 0x0, "ArrayProperty"},
            {"TransformIndices", 0x10, "ArrayProperty"},
            {"PreviousTransformIndices", 0x20, "ArrayProperty"},
            {"DisabledFlags", 0x30, "ArrayProperty"},
            {"CollisionS", 0x40, "ArrayProperty"},
            {"Breakings", 0x50, "ArrayProperty"},
            {"Trailings", 0x60, "SetProperty"},
            {"Timestamp", 0x70, "FloatProperty"},
        }};
    };

    struct RecordedTransformTrack
    {
        static constexpr std::string_view Name = "RecordedTransformTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Records = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Records", 0x0, "ArrayProperty"},
        }};
    };

    struct SerializedSolverScene
    {
        static constexpr std::string_view Name = "SerializedSolverScene";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleData = 0x0;
            static constexpr std::uintptr_t JointConstraintData = 0x10;
            static constexpr std::uintptr_t CharacterGroundConstraintData = 0x20;
            static constexpr std::uintptr_t CollisionMidPhaseData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParticleData", 0x0, "ArrayProperty"},
            {"JointConstraintData", 0x10, "ArrayProperty"},
            {"CharacterGroundConstraintData", 0x20, "ArrayProperty"},
            {"CollisionMidPhaseData", 0x30, "ArrayProperty"},
        }};
    };

    struct SolverBreakingData
    {
        static constexpr std::string_view Name = "SolverBreakingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Velocity = 0x18;
            static constexpr std::uintptr_t AngularVelocity = 0x30;
            static constexpr std::uintptr_t Mass = 0x48;
            static constexpr std::uintptr_t ParticleIndex = 0x4C;
            static constexpr std::uintptr_t ParticleIndexMesh = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Velocity", 0x18, "StructProperty"},
            {"AngularVelocity", 0x30, "StructProperty"},
            {"Mass", 0x48, "FloatProperty"},
            {"ParticleIndex", 0x4C, "IntProperty"},
            {"ParticleIndexMesh", 0x50, "IntProperty"},
        }};
    };

    struct SolverBreakingFilterSettings
    {
        static constexpr std::string_view Name = "SolverBreakingFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterEnabled = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MinSpeed = 0x8;
            static constexpr std::uintptr_t MinVolume = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FilterEnabled", 0x0, "BoolProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MinSpeed", 0x8, "FloatProperty"},
            {"MinVolume", 0xC, "FloatProperty"},
        }};
    };

    struct SolverCollisionData
    {
        static constexpr std::string_view Name = "SolverCollisionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t AccumulatedImpulse = 0x18;
            static constexpr std::uintptr_t Normal = 0x30;
            static constexpr std::uintptr_t Velocity1 = 0x48;
            static constexpr std::uintptr_t Velocity2 = 0x60;
            static constexpr std::uintptr_t AngularVelocity1 = 0x78;
            static constexpr std::uintptr_t AngularVelocity2 = 0x90;
            static constexpr std::uintptr_t Mass1 = 0xA8;
            static constexpr std::uintptr_t Mass2 = 0xAC;
            static constexpr std::uintptr_t ParticleIndex = 0xB0;
            static constexpr std::uintptr_t LevelsetIndex = 0xB4;
            static constexpr std::uintptr_t ParticleIndexMesh = 0xB8;
            static constexpr std::uintptr_t LevelsetIndexMesh = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"AccumulatedImpulse", 0x18, "StructProperty"},
            {"Normal", 0x30, "StructProperty"},
            {"Velocity1", 0x48, "StructProperty"},
            {"Velocity2", 0x60, "StructProperty"},
            {"AngularVelocity1", 0x78, "StructProperty"},
            {"AngularVelocity2", 0x90, "StructProperty"},
            {"Mass1", 0xA8, "FloatProperty"},
            {"Mass2", 0xAC, "FloatProperty"},
            {"ParticleIndex", 0xB0, "IntProperty"},
            {"LevelsetIndex", 0xB4, "IntProperty"},
            {"ParticleIndexMesh", 0xB8, "IntProperty"},
            {"LevelsetIndexMesh", 0xBC, "IntProperty"},
        }};
    };

    struct SolverCollisionFilterSettings
    {
        static constexpr std::string_view Name = "SolverCollisionFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterEnabled = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MinSpeed = 0x8;
            static constexpr std::uintptr_t MinImpulse = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FilterEnabled", 0x0, "BoolProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MinSpeed", 0x8, "FloatProperty"},
            {"MinImpulse", 0xC, "FloatProperty"},
        }};
    };

    struct SolverRemovalFilterSettings
    {
        static constexpr std::string_view Name = "SolverRemovalFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterEnabled = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MinVolume = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FilterEnabled", 0x0, "BoolProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MinVolume", 0x8, "FloatProperty"},
        }};
    };

    struct SolverTrailingData
    {
        static constexpr std::string_view Name = "SolverTrailingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Velocity = 0x18;
            static constexpr std::uintptr_t AngularVelocity = 0x30;
            static constexpr std::uintptr_t Mass = 0x48;
            static constexpr std::uintptr_t ParticleIndex = 0x4C;
            static constexpr std::uintptr_t ParticleIndexMesh = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Velocity", 0x18, "StructProperty"},
            {"AngularVelocity", 0x30, "StructProperty"},
            {"Mass", 0x48, "FloatProperty"},
            {"ParticleIndex", 0x4C, "IntProperty"},
            {"ParticleIndexMesh", 0x50, "IntProperty"},
        }};
    };

    struct SolverTrailingFilterSettings
    {
        static constexpr std::string_view Name = "SolverTrailingFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterEnabled = 0x0;
            static constexpr std::uintptr_t MinMass = 0x4;
            static constexpr std::uintptr_t MinSpeed = 0x8;
            static constexpr std::uintptr_t MinVolume = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FilterEnabled", 0x0, "BoolProperty"},
            {"MinMass", 0x4, "FloatProperty"},
            {"MinSpeed", 0x8, "FloatProperty"},
            {"MinVolume", 0xC, "FloatProperty"},
        }};
    };

}
