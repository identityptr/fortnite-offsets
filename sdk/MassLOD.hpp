#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassLOD
{
    struct MassDistanceLODCollectorTrait
    {
        static constexpr std::string_view Name = "MassDistanceLODCollectorTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTestCollectorProcessor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bTestCollectorProcessor", 0x30, "BoolProperty"},
        }};
    };

    struct MassLODCollectorProcessor
    {
        static constexpr std::string_view Name = "MassLODCollectorProcessor";
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

    struct MassLODCollectorTrait
    {
        static constexpr std::string_view Name = "MassLODCollectorTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTestCollectorProcessor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bTestCollectorProcessor", 0x30, "BoolProperty"},
        }};
    };

    struct MassLODDistanceCollectorProcessor
    {
        static constexpr std::string_view Name = "MassLODDistanceCollectorProcessor";
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

    struct MassLODSubsystem
    {
        static constexpr std::string_view Name = "MassLODSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSubsystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowNonPlayerViewerActors = 0x40;
            static constexpr std::uintptr_t bGatherPlayerControllers = 0x40;
            static constexpr std::uintptr_t bGatherStreamingSources = 0x40;
            static constexpr std::uintptr_t bUsePlayerPawnLocationInsteadOfCamera = 0x40;
            static constexpr std::uintptr_t Viewers = 0x48;
            static constexpr std::uintptr_t ViewerMap = 0x58;
            static constexpr std::uintptr_t RegisteredActorViewers = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bAllowNonPlayerViewerActors", 0x40, "BoolProperty"},
            {"bGatherPlayerControllers", 0x40, "BoolProperty"},
            {"bGatherStreamingSources", 0x40, "BoolProperty"},
            {"bUsePlayerPawnLocationInsteadOfCamera", 0x40, "BoolProperty"},
            {"Viewers", 0x48, "ArrayProperty"},
            {"ViewerMap", 0x58, "MapProperty"},
            {"RegisteredActorViewers", 0x68, "ArrayProperty"},
        }};
    };

    struct MassSimulationLODProcessor
    {
        static constexpr std::string_view Name = "MassSimulationLODProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t bDoAdjustmentFromCount = 0x2010;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDoAdjustmentFromCount", 0x2010, "BoolProperty"},
        }};
    };

    struct MassSimulationLODTrait
    {
        static constexpr std::string_view Name = "MassSimulationLODTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x30;
            static constexpr std::uintptr_t bEnableVariableTicking = 0x58;
            static constexpr std::uintptr_t VariableTickParams = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Params", 0x30, "StructProperty"},
            {"bEnableVariableTicking", 0x58, "BoolProperty"},
            {"VariableTickParams", 0x5C, "StructProperty"},
        }};
    };

}
