#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntityModifiers
{
    struct EntityEasingModifierBase
    {
        static constexpr std::string_view Name = "EntityEasingModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientData = 0xB0;
            static constexpr std::uintptr_t EaseRequest = 0x150;
            static constexpr std::uintptr_t EaseInStartTime = 0x1A8;
            static constexpr std::uintptr_t EaseOutStartTime = 0x1B0;
            static constexpr std::uintptr_t ProcessedRequestCount = 0x1B8;
            static constexpr std::uintptr_t bInitialClientDataReplicated = 0x1BA;
            static constexpr std::uintptr_t bIsEaseInActive = 0x1BB;
            static constexpr std::uintptr_t bIsEaseOutActive = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ClientData", 0xB0, "StructProperty"},
            {"EaseRequest", 0x150, "StructProperty"},
            {"EaseInStartTime", 0x1A8, "DoubleProperty"},
            {"EaseOutStartTime", 0x1B0, "DoubleProperty"},
            {"ProcessedRequestCount", 0x1B8, "UInt16Property"},
            {"bInitialClientDataReplicated", 0x1BA, "BoolProperty"},
            {"bIsEaseInActive", 0x1BB, "BoolProperty"},
            {"bIsEaseOutActive", 0x1BC, "BoolProperty"},
        }};
    };

    struct EntityEasingModifierProcessor
    {
        static constexpr std::string_view Name = "EntityEasingModifierProcessor";
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

    struct EntityEasingModifierSampledEasingProcessor
    {
        static constexpr std::string_view Name = "EntityEasingModifierSampledEasingProcessor";
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

    struct EntityModifierBase
    {
        static constexpr std::string_view Name = "EntityModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MassEntityHandle = 0x58;
            static constexpr std::uintptr_t Entity = 0x60;
            static constexpr std::uintptr_t WeakWorld = 0x68;
            static constexpr std::uintptr_t CachedImpl = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MassEntityHandle", 0x58, "StructProperty"},
            {"Entity", 0x60, "ObjectProperty"},
            {"WeakWorld", 0x68, "WeakObjectProperty"},
            {"CachedImpl", 0x70, "ObjectProperty"},
        }};
    };

    struct EntityModifierImplInterface
    {
        static constexpr std::string_view Name = "EntityModifierImplInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityModifierRelevancySubsystem
    {
        static constexpr std::string_view Name = "EntityModifierRelevancySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityModifierRelevancyTarget
    {
        static constexpr std::string_view Name = "EntityModifierRelevancyTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityModifierStackImpl
    {
        static constexpr std::string_view Name = "EntityModifierStackImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseModifierStackImpl";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedEntries", 0x28, "ArrayProperty"},
        }};
    };

    struct EntityTimerInterface
    {
        static constexpr std::string_view Name = "EntityTimerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityTimerProcessor
    {
        static constexpr std::string_view Name = "EntityTimerProcessor";
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
