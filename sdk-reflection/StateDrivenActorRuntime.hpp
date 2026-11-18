#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StateDrivenActorRuntime
{
    struct ControllerComponent_StateDrivenReplication
    {
        static constexpr std::string_view Name = "ControllerComponent_StateDrivenReplication";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LatestRecordedStateTreeTransitionResults = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LatestRecordedStateTreeTransitionResults", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortActorComponent_StateDriven
    {
        static constexpr std::string_view Name = "FortActorComponent_StateDriven";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorComponent_FortInteractExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t SlottedItemEntry = 0xD8;
            static constexpr std::uintptr_t VariableTagQueries = 0x170;
            static constexpr std::uintptr_t VariableFloats = 0x180;
            static constexpr std::uintptr_t LoadedObjects = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SlottedItemEntry", 0xD8, "StructProperty"},
            {"VariableTagQueries", 0x170, "ArrayProperty"},
            {"VariableFloats", 0x180, "ArrayProperty"},
            {"LoadedObjects", 0x190, "ArrayProperty"},
        }};
    };

    struct FortGameStateComponent_StateDrivenReplication
    {
        static constexpr std::string_view Name = "FortGameStateComponent_StateDrivenReplication";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceToActiveState = 0xC0;
            static constexpr std::uintptr_t LatestRecordedStateTreeTransitionResults = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstanceToActiveState", 0xC0, "MapProperty"},
            {"LatestRecordedStateTreeTransitionResults", 0xD0, "ArrayProperty"},
        }};
    };

    struct FortPlayerInstancedStateTreeComponent
    {
        static constexpr std::string_view Name = "FortPlayerInstancedStateTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectInstancedStateTreeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateTreeRunStatusChanged = 0x128;
            static constexpr std::uintptr_t StateTreeRef = 0x148;
            static constexpr std::uintptr_t LinkedStateTreeOverrides = 0x170;
            static constexpr std::uintptr_t bStartLogicAutomatically = 0x180;
            static constexpr std::uintptr_t InstancedStateTreeId = 0x1A4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnStateTreeRunStatusChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"StateTreeRef", 0x148, "StructProperty"},
            {"LinkedStateTreeOverrides", 0x170, "StructProperty"},
            {"bStartLogicAutomatically", 0x180, "BoolProperty"},
            {"InstancedStateTreeId", 0x1A4, "StructProperty"},
        }};
    };

    struct FortWorldStateChangedHelper
    {
        static constexpr std::string_view Name = "FortWorldStateChangedHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldStateQuery = 0x28;
            static constexpr std::uintptr_t StateDrivenOwner = 0x40;
            static constexpr std::uintptr_t TransitionTag = 0x48;
            static constexpr std::uintptr_t CachedWorldReactionManager = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WorldStateQuery", 0x28, "StructProperty"},
            {"StateDrivenOwner", 0x40, "WeakObjectProperty"},
            {"TransitionTag", 0x48, "StructProperty"},
            {"CachedWorldReactionManager", 0x4C, "WeakObjectProperty"},
        }};
    };

    struct ObjectInstancedStateTreeComponent
    {
        static constexpr std::string_view Name = "ObjectInstancedStateTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BrainComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateTreeRunStatusChanged = 0x128;
            static constexpr std::uintptr_t StateTreeRef = 0x148;
            static constexpr std::uintptr_t LinkedStateTreeOverrides = 0x170;
            static constexpr std::uintptr_t bStartLogicAutomatically = 0x180;
            static constexpr std::uintptr_t InstancedStateTreeId = 0x1A4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnStateTreeRunStatusChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"StateTreeRef", 0x148, "StructProperty"},
            {"LinkedStateTreeOverrides", 0x170, "StructProperty"},
            {"bStartLogicAutomatically", 0x180, "BoolProperty"},
            {"InstancedStateTreeId", 0x1A4, "StructProperty"},
        }};
    };

    struct ObjectInstancedStateTreeSchema
    {
        static constexpr std::string_view Name = "ObjectInstancedStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextActorClass = 0x28;
            static constexpr std::uintptr_t InstigatorActorClass = 0x30;
            static constexpr std::uintptr_t ContextDataDescs = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ContextActorClass", 0x28, "ClassProperty"},
            {"InstigatorActorClass", 0x30, "ClassProperty"},
            {"ContextDataDescs", 0x38, "ArrayProperty"},
        }};
    };

    struct StateDrivenEventQuestObjectiveActiveHelper
    {
        static constexpr std::string_view Name = "StateDrivenEventQuestObjectiveActiveHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateDrivenEventQuestObjectiveCompletedHelper
    {
        static constexpr std::string_view Name = "StateDrivenEventQuestObjectiveCompletedHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateDrivenEventTimerHelper
    {
        static constexpr std::string_view Name = "StateDrivenEventTimerHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateDrivenEventVerbHelper
    {
        static constexpr std::string_view Name = "StateDrivenEventVerbHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldInstancedStateTreeComponent
    {
        static constexpr std::string_view Name = "WorldInstancedStateTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BrainComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateTreeRunStatusChanged = 0x128;
            static constexpr std::uintptr_t StateTreeRef = 0x138;
            static constexpr std::uintptr_t LinkedStateTreeOverrides = 0x160;
            static constexpr std::uintptr_t bStartLogicAutomatically = 0x170;
            static constexpr std::uintptr_t bBlockNativeReplication = 0x171;
            static constexpr std::uintptr_t InstancedStateTreeId = 0x17C;
            static constexpr std::uintptr_t InstanceData = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnStateTreeRunStatusChanged", 0x128, "MulticastInlineDelegateProperty"},
            {"StateTreeRef", 0x138, "StructProperty"},
            {"LinkedStateTreeOverrides", 0x160, "StructProperty"},
            {"bStartLogicAutomatically", 0x170, "BoolProperty"},
            {"bBlockNativeReplication", 0x171, "BoolProperty"},
            {"InstancedStateTreeId", 0x17C, "StructProperty"},
            {"InstanceData", 0x180, "StructProperty"},
        }};
    };

}
