#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ProgressionCore
{
    struct CompositeObjective
    {
        static constexpr std::string_view Name = "CompositeObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Objectives = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Objectives", 0xB0, "ArrayProperty"},
        }};
    };

    struct CompositeObjectiveDefinition
    {
        static constexpr std::string_view Name = "CompositeObjectiveDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveDefinitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveDefinitions = 0x98;
            static constexpr std::uintptr_t RequiredCount = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ObjectiveDefinitions", 0x98, "ArrayProperty"},
            {"RequiredCount", 0xA8, "IntProperty"},
        }};
    };

    struct CompositeObjectiveView
    {
        static constexpr std::string_view Name = "CompositeObjectiveView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectiveView";
        struct Offsets
        {
            static constexpr std::uintptr_t CompletedCount = 0x70;
            static constexpr std::uintptr_t RequiredCount = 0x74;
            static constexpr std::uintptr_t SubObjectiveViews = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CompletedCount", 0x70, "IntProperty"},
            {"RequiredCount", 0x74, "IntProperty"},
            {"SubObjectiveViews", 0x78, "ArrayProperty"},
        }};
    };

    struct ConditionalObjective
    {
        static constexpr std::string_view Name = "ConditionalObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProgressObjective";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditionals = 0xD8;
            static constexpr std::uintptr_t RegisteredHandles = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Conditionals", 0xD8, "ArrayProperty"},
            {"RegisteredHandles", 0xE8, "ArrayProperty"},
        }};
    };

    struct ConditionalObjectiveDefinition
    {
        static constexpr std::string_view Name = "ConditionalObjectiveDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProgressObjectiveDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionalDefinitions = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConditionalDefinitions", 0xA0, "ArrayProperty"},
        }};
    };

    struct EntitlementQuestRewardView
    {
        static constexpr std::string_view Name = "EntitlementQuestRewardView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestRewardView";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementId = 0x68;
            static constexpr std::uintptr_t Quantity = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntitlementId", 0x68, "StrProperty"},
            {"Quantity", 0x78, "Int64Property"},
        }};
    };

    struct ProgressObjective
    {
        static constexpr std::string_view Name = "ProgressObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningDefinition = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningDefinition", 0x88, "InterfaceProperty"},
        }};
    };

    struct ProgressObjectiveDefinition
    {
        static constexpr std::string_view Name = "ProgressObjectiveDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveDefinitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredCount = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredCount", 0x98, "DoubleProperty"},
        }};
    };

    struct ProgressObjectiveView
    {
        static constexpr std::string_view Name = "ProgressObjectiveView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectiveView";
        struct Offsets
        {
            static constexpr std::uintptr_t AchievedCount = 0x70;
            static constexpr std::uintptr_t RequiredCount = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AchievedCount", 0x70, "DoubleProperty"},
            {"RequiredCount", 0x78, "DoubleProperty"},
        }};
    };

    struct QuestDebugCompositeNode
    {
        static constexpr std::string_view Name = "QuestDebugCompositeNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugObjectiveNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x48;
            static constexpr std::uintptr_t Required = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Current", 0x48, "IntProperty"},
            {"Required", 0x4C, "IntProperty"},
        }};
    };

    struct QuestDebugProgressNode
    {
        static constexpr std::string_view Name = "QuestDebugProgressNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugObjectiveNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x48;
            static constexpr std::uintptr_t Required = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Current", 0x48, "IntProperty"},
            {"Required", 0x4C, "IntProperty"},
        }};
    };

    struct QuestDebugSequentialNode
    {
        static constexpr std::string_view Name = "QuestDebugSequentialNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugObjectiveNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentStage = 0x48;
            static constexpr std::uintptr_t TotalStages = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentStage", 0x48, "IntProperty"},
            {"TotalStages", 0x4C, "IntProperty"},
        }};
    };

    struct QuestDebugStateMachineNode
    {
        static constexpr std::string_view Name = "QuestDebugStateMachineNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugObjectiveNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentStateName = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentStateName", 0x48, "NameProperty"},
        }};
    };

    struct QuestDebugTimedNode
    {
        static constexpr std::string_view Name = "QuestDebugTimedNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugObjectiveNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeRemaining = 0x48;
            static constexpr std::uintptr_t TimeLimit = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TimeRemaining", 0x48, "DoubleProperty"},
            {"TimeLimit", 0x50, "DoubleProperty"},
        }};
    };

    struct RewardClaimExtensionData
    {
        static constexpr std::string_view Name = "RewardClaimExtensionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestExtensionPersistencePayload";
        struct Offsets
        {
            static constexpr std::uintptr_t bPendingClaim = 0x0;
            static constexpr std::uintptr_t bClaimed = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bPendingClaim", 0x0, "BoolProperty"},
            {"bClaimed", 0x1, "BoolProperty"},
        }};
    };

    struct RewardClaimQuestDefinitionExtension
    {
        static constexpr std::string_view Name = "RewardClaimQuestDefinitionExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestDefinitionExtensionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtensionTemplateId = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtensionTemplateId", 0x38, "StrProperty"},
        }};
    };

    struct RewardClaimQuestExtension
    {
        static constexpr std::string_view Name = "RewardClaimQuestExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestExtensionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningDefinition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningDefinition", 0x30, "InterfaceProperty"},
        }};
    };

    struct SequentialObjective
    {
        static constexpr std::string_view Name = "SequentialObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Objectives = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Objectives", 0xB0, "ArrayProperty"},
        }};
    };

    struct SequentialObjectiveDefinition
    {
        static constexpr std::string_view Name = "SequentialObjectiveDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveDefinitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveDefinitions = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectiveDefinitions", 0x98, "ArrayProperty"},
        }};
    };

    struct SequentialObjectiveView
    {
        static constexpr std::string_view Name = "SequentialObjectiveView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectiveView";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentStageIndex = 0x70;
            static constexpr std::uintptr_t TotalStages = 0x74;
            static constexpr std::uintptr_t SubObjectiveViews = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentStageIndex", 0x70, "IntProperty"},
            {"TotalStages", 0x74, "IntProperty"},
            {"SubObjectiveViews", 0x78, "ArrayProperty"},
        }};
    };

    struct StateMachineObjectiveView
    {
        static constexpr std::string_view Name = "StateMachineObjectiveView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectiveView";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentStateName = 0x70;
            static constexpr std::uintptr_t CurrentObjectiveView = 0x78;
            static constexpr std::uintptr_t CompletionStateNames = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentStateName", 0x70, "NameProperty"},
            {"CurrentObjectiveView", 0x78, "StructProperty"},
            {"CompletionStateNames", 0x88, "ArrayProperty"},
        }};
    };

    struct TimedObjective
    {
        static constexpr std::string_view Name = "TimedObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Objective = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Objective", 0xC8, "InterfaceProperty"},
        }};
    };

    struct TimedObjectiveDefinition
    {
        static constexpr std::string_view Name = "TimedObjectiveDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveDefinitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeLimit = 0x98;
            static constexpr std::uintptr_t ObjectiveDefinition = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TimeLimit", 0x98, "FloatProperty"},
            {"ObjectiveDefinition", 0xA0, "ObjectProperty"},
        }};
    };

    struct TimedObjectiveView
    {
        static constexpr std::string_view Name = "TimedObjectiveView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectiveView";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeRemaining = 0x70;
            static constexpr std::uintptr_t TimeLimit = 0x78;
            static constexpr std::uintptr_t InnerObjectiveView = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TimeRemaining", 0x70, "DoubleProperty"},
            {"TimeLimit", 0x78, "DoubleProperty"},
            {"InnerObjectiveView", 0x80, "StructProperty"},
        }};
    };

    struct VerbGameplayConditional
    {
        static constexpr std::string_view Name = "VerbGameplayConditional";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayConditional";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredHandles = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredHandles", 0x38, "ArrayProperty"},
        }};
    };

    struct VerbGameplayConditionalDefinition
    {
        static constexpr std::string_view Name = "VerbGameplayConditionalDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayConditionalDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbFilters = 0x18;
            static constexpr std::uintptr_t VerbMessageTypes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbFilters", 0x18, "ArrayProperty"},
            {"VerbMessageTypes", 0x28, "ArrayProperty"},
        }};
    };

}
