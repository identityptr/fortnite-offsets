#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassSmartObjects
{
    struct MRUSlotsProcessor
    {
        static constexpr std::string_view Name = "MRUSlotsProcessor";
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

    struct MassActiveSmartObjectDeinitializer
    {
        static constexpr std::string_view Name = "MassActiveSmartObjectDeinitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSmartObjectDeinitializerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassActiveSmartObjectInitializer
    {
        static constexpr std::string_view Name = "MassActiveSmartObjectInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSmartObjectInitializerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassActiveSmartObjectSignalProcessor
    {
        static constexpr std::string_view Name = "MassActiveSmartObjectSignalProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSignalProcessorBase";
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

    struct MassActorInstanceHandleDeinitializer
    {
        static constexpr std::string_view Name = "MassActorInstanceHandleDeinitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSmartObjectDeinitializerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassActorInstanceHandleInitializer
    {
        static constexpr std::string_view Name = "MassActorInstanceHandleInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSmartObjectInitializerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassSmartObjectCandidatesFinderProcessor
    {
        static constexpr std::string_view Name = "MassSmartObjectCandidatesFinderProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchExtents = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SearchExtents", 0x120, "FloatProperty"},
        }};
    };

    struct MassSmartObjectDeinitializerBase
    {
        static constexpr std::string_view Name = "MassSmartObjectDeinitializerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassSmartObjectInitializerBase
    {
        static constexpr std::string_view Name = "MassSmartObjectInitializerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassSmartObjectSettings
    {
        static constexpr std::string_view Name = "MassSmartObjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectTag = 0x28;
            static constexpr std::uintptr_t SearchExtents = 0x2C;
            static constexpr std::uintptr_t MRUSlotsMaxCount = 0x30;
            static constexpr std::uintptr_t bUseCooldownForMRUSlots = 0x34;
            static constexpr std::uintptr_t MRUSlotsCooldown = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SmartObjectTag", 0x28, "StructProperty"},
            {"SearchExtents", 0x2C, "FloatProperty"},
            {"MRUSlotsMaxCount", 0x30, "IntProperty"},
            {"bUseCooldownForMRUSlots", 0x34, "BoolProperty"},
            {"MRUSlotsCooldown", 0x38, "FloatProperty"},
        }};
    };

    struct MassSmartObjectTimedBehaviorProcessor
    {
        static constexpr std::string_view Name = "MassSmartObjectTimedBehaviorProcessor";
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

    struct MassSmartObjectUserFragmentDeinitializer
    {
        static constexpr std::string_view Name = "MassSmartObjectUserFragmentDeinitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassSmartObjectUserTrait
    {
        static constexpr std::string_view Name = "MassSmartObjectUserTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UserTags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserTags", 0x30, "StructProperty"},
        }};
    };

    struct SmartObjectMassBehaviorDefinition
    {
        static constexpr std::string_view Name = "SmartObjectMassBehaviorDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SmartObjectBehaviorDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t UseTime = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UseTime", 0x28, "FloatProperty"},
        }};
    };

    struct SmartObjectZoneAnnotations
    {
        static constexpr std::string_view Name = "SmartObjectZoneAnnotations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ZoneGraphAnnotationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AffectedLaneTags = 0x5E0;
            static constexpr std::uintptr_t SmartObjectAnnotationDataArray = 0x5F0;
            static constexpr std::uintptr_t BehaviorTag = 0x600;
            static constexpr std::uintptr_t SmartObjectSubsystem = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AffectedLaneTags", 0x5E0, "StructProperty"},
            {"SmartObjectAnnotationDataArray", 0x5F0, "ArrayProperty"},
            {"BehaviorTag", 0x600, "StructProperty"},
            {"SmartObjectSubsystem", 0x608, "ObjectProperty"},
        }};
    };

}
