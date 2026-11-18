#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassSpawner
{
    struct MassAssortedFragmentsTrait
    {
        static constexpr std::string_view Name = "MassAssortedFragmentsTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Fragments = 0x30;
            static constexpr std::uintptr_t Tags = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Fragments", 0x30, "ArrayProperty"},
            {"Tags", 0x40, "ArrayProperty"},
        }};
    };

    struct MassCreatedBySpawnerTrait
    {
        static constexpr std::string_view Name = "MassCreatedBySpawnerTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidTargetConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidTargetConfig", 0x28, "EnumProperty"},
        }};
    };

    struct MassEntityConfigAsset
    {
        static constexpr std::string_view Name = "MassEntityConfigAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Config", 0x28, "StructProperty"},
        }};
    };

    struct MassEntityEQSSpawnPointsGenerator
    {
        static constexpr std::string_view Name = "MassEntityEQSSpawnPointsGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntitySpawnDataGeneratorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EQSRequest", 0x30, "StructProperty"},
        }};
    };

    struct MassEntitySpawnDataGeneratorBase
    {
        static constexpr std::string_view Name = "MassEntitySpawnDataGeneratorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSelectionSeed = 0x28;
            static constexpr std::uintptr_t bUseCustomSeed = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RandomSelectionSeed", 0x28, "IntProperty"},
            {"bUseCustomSeed", 0x2C, "BoolProperty"},
        }};
    };

    struct MassEntityTraitBase
    {
        static constexpr std::string_view Name = "MassEntityTraitBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidTargetConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidTargetConfig", 0x28, "EnumProperty"},
        }};
    };

    struct MassEntityZoneGraphSpawnPointsGenerator
    {
        static constexpr std::string_view Name = "MassEntityZoneGraphSpawnPointsGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntitySpawnDataGeneratorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TagFilter = 0x30;
            static constexpr std::uintptr_t MinGap = 0x3C;
            static constexpr std::uintptr_t MaxGap = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TagFilter", 0x30, "StructProperty"},
            {"MinGap", 0x3C, "FloatProperty"},
            {"MaxGap", 0x40, "FloatProperty"},
        }};
    };

    struct MassSpawnLocationProcessor
    {
        static constexpr std::string_view Name = "MassSpawnLocationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct MassSpawner
    {
        static constexpr std::string_view Name = "MassSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSpawningFinishedEvent = 0x278;
            static constexpr std::uintptr_t OnDespawningFinishedEvent = 0x288;
            static constexpr std::uintptr_t Count = 0x298;
            static constexpr std::uintptr_t EntityTypes = 0x2A0;
            static constexpr std::uintptr_t SpawnDataGenerators = 0x2B0;
            static constexpr std::uintptr_t bAutoSpawnOnBeginPlay = 0x2C0;
            static constexpr std::uintptr_t bOverrideSchematics = 0x2C0;
            static constexpr std::uintptr_t PostSpawnProcessors = 0x2C8;
            static constexpr std::uintptr_t SpawningCountScale = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnSpawningFinishedEvent", 0x278, "MulticastInlineDelegateProperty"},
            {"OnDespawningFinishedEvent", 0x288, "MulticastInlineDelegateProperty"},
            {"Count", 0x298, "IntProperty"},
            {"EntityTypes", 0x2A0, "ArrayProperty"},
            {"SpawnDataGenerators", 0x2B0, "ArrayProperty"},
            {"bAutoSpawnOnBeginPlay", 0x2C0, "BoolProperty"},
            {"bOverrideSchematics", 0x2C0, "BoolProperty"},
            {"PostSpawnProcessors", 0x2C8, "ArrayProperty"},
            {"SpawningCountScale", 0x2D8, "FloatProperty"},
        }};
    };

    struct MassSpawnerSubsystem
    {
        static constexpr std::string_view Name = "MassSpawnerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnDataInitializers = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnDataInitializers", 0x40, "ArrayProperty"},
        }};
    };

    struct MassTranslator
    {
        static constexpr std::string_view Name = "MassTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

}
