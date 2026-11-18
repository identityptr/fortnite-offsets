#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkReactivity
{
    struct BaseNumericThresholdRequirement
    {
        static constexpr std::string_view Name = "BaseNumericThresholdRequirement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BoolConditionRequirement
    {
        static constexpr std::string_view Name = "BoolConditionRequirement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x0;
            static constexpr std::uintptr_t ComparisonValue = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operator", 0x0, "EnumProperty"},
            {"ComparisonValue", 0x1, "BoolProperty"},
        }};
    };

    struct CosmeticAction
    {
        static constexpr std::string_view Name = "CosmeticAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Definition = 0x30;
            static constexpr std::uintptr_t Context = 0x38;
            static constexpr std::uintptr_t LastReactionEventContext = 0x58;
            static constexpr std::uintptr_t bIsActive = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Definition", 0x30, "ObjectProperty"},
            {"Context", 0x38, "StructProperty"},
            {"LastReactionEventContext", 0x58, "StructProperty"},
            {"bIsActive", 0x68, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetActionDuration",
            "GetActionProgress",
            "GetContext",
            "GetDefinition",
            "GetLastReactionEventContext",
            "GetTimeSinceActionStart",
            "IsActive",
            "OnEndAction",
            "OnInitialize",
            "OnStartAction",
            "OnUpdateAction",
            "ShouldUpdateAction",
        }};
    };

    struct CosmeticActionContext
    {
        static constexpr std::string_view Name = "CosmeticActionContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x0;
            static constexpr std::uintptr_t OwnerModifier = 0x8;
            static constexpr std::uintptr_t TickProvider = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetActor", 0x0, "ObjectProperty"},
            {"OwnerModifier", 0x8, "ObjectProperty"},
            {"TickProvider", 0x10, "InterfaceProperty"},
        }};
    };

    struct CosmeticActionDefinition
    {
        static constexpr std::string_view Name = "CosmeticActionDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
            static constexpr std::uintptr_t ReactivationPolicy = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"duration", 0x28, "FloatProperty"},
            {"ReactivationPolicy", 0x2C, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetActionInstanceClass",
        }};
    };

    struct CosmeticBlackboard
    {
        static constexpr std::string_view Name = "CosmeticBlackboard";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Values", 0x0, "MapProperty"},
        }};
    };

    struct CosmeticBlackboardTransformer
    {
        static constexpr std::string_view Name = "CosmeticBlackboardTransformer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueMappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValueMappings", 0x28, "ArrayProperty"},
        }};
    };

    struct CosmeticBlackboardValue
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticBlackboardValueMapping
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValueMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceKey = 0x0;
            static constexpr std::uintptr_t TargetKey = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceKey", 0x0, "NameProperty"},
            {"TargetKey", 0x4, "NameProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Bool
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Bool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "BoolProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Float
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Float";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Int
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Int";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "IntProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Name
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Name";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "NameProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Object
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Object";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "ObjectProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Tag
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Tag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "StructProperty"},
        }};
    };

    struct CosmeticBlackboardValue_Vector
    {
        static constexpr std::string_view Name = "CosmeticBlackboardValue_Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticBlackboardValue";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "StructProperty"},
        }};
    };

    struct CosmeticEventPayload
    {
        static constexpr std::string_view Name = "CosmeticEventPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticEventPayloadSchema
    {
        static constexpr std::string_view Name = "CosmeticEventPayloadSchema";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x0, "ArrayProperty"},
        }};
    };

    struct CosmeticModifier
    {
        static constexpr std::string_view Name = "CosmeticModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x28;
            static constexpr std::uintptr_t Definition = 0x40;
            static constexpr std::uintptr_t ModifierReactions = 0x48;
            static constexpr std::uintptr_t ReactivityEffectsHandler = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Context", 0x28, "StructProperty"},
            {"Definition", 0x40, "ObjectProperty"},
            {"ModifierReactions", 0x48, "ArrayProperty"},
            {"ReactivityEffectsHandler", 0x58, "ObjectProperty"},
        }};
    };

    struct CosmeticModifierContext
    {
        static constexpr std::string_view Name = "CosmeticModifierContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticTargetActor = 0x0;
            static constexpr std::uintptr_t TriggerTargetActor = 0x8;
            static constexpr std::uintptr_t ModifierProvider = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CosmeticTargetActor", 0x0, "ObjectProperty"},
            {"TriggerTargetActor", 0x8, "ObjectProperty"},
            {"ModifierProvider", 0x10, "ObjectProperty"},
        }};
    };

    struct CosmeticModifierDefinition
    {
        static constexpr std::string_view Name = "CosmeticModifierDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierReactions = 0x28;
            static constexpr std::uintptr_t RequirementLibrary = 0x38;
            static constexpr std::uintptr_t CosmeticReactivityEffectsHandlerClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModifierReactions", 0x28, "ArrayProperty"},
            {"RequirementLibrary", 0x38, "MapProperty"},
            {"CosmeticReactivityEffectsHandlerClass", 0x48, "ClassProperty"},
        }};
    };

    struct CosmeticModifierReaction
    {
        static constexpr std::string_view Name = "CosmeticModifierReaction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerCosmeticModifier = 0x28;
            static constexpr std::uintptr_t StartTrigger = 0x30;
            static constexpr std::uintptr_t StopTrigger = 0x38;
            static constexpr std::uintptr_t CosmeticActions = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OwnerCosmeticModifier", 0x28, "ObjectProperty"},
            {"StartTrigger", 0x30, "ObjectProperty"},
            {"StopTrigger", 0x38, "ObjectProperty"},
            {"CosmeticActions", 0x40, "ArrayProperty"},
        }};
    };

    struct CosmeticModifierReactionDefinition
    {
        static constexpr std::string_view Name = "CosmeticModifierReactionDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartTriggerDefinition = 0x0;
            static constexpr std::uintptr_t StopTriggerDefinition = 0x8;
            static constexpr std::uintptr_t ActionDefinitions = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartTriggerDefinition", 0x0, "ObjectProperty"},
            {"StopTriggerDefinition", 0x8, "ObjectProperty"},
            {"ActionDefinitions", 0x10, "ArrayProperty"},
        }};
    };

    struct CosmeticModifierRequirement
    {
        static constexpr std::string_view Name = "CosmeticModifierRequirement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "IsRequirementMet",
            "IsRequirementMetInternal",
        }};
    };

    struct CosmeticModifierRequirementContext
    {
        static constexpr std::string_view Name = "CosmeticModifierRequirementContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TestSubjectActor = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestSubjectActor", 0x0, "ObjectProperty"},
        }};
    };

    struct CosmeticModifierRequirement_AllOf
    {
        static constexpr std::string_view Name = "CosmeticModifierRequirement_AllOf";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CosmeticModifierRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t Requirements = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Requirements", 0x30, "ArrayProperty"},
        }};
    };

    struct CosmeticModifierRequirement_AnyOf
    {
        static constexpr std::string_view Name = "CosmeticModifierRequirement_AnyOf";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CosmeticModifierRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t Requirements = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Requirements", 0x30, "ArrayProperty"},
        }};
    };

    struct CosmeticModifierRequirement_CustomQueryOf
    {
        static constexpr std::string_view Name = "CosmeticModifierRequirement_CustomQueryOf";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CosmeticModifierRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQueryIdentifierToRequirement = 0x30;
            static constexpr std::uintptr_t TagQuery = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagQueryIdentifierToRequirement", 0x30, "MapProperty"},
            {"TagQuery", 0x40, "StructProperty"},
        }};
    };

    struct CosmeticPayloadSchemaEntry
    {
        static constexpr std::string_view Name = "CosmeticPayloadSchemaEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t PropertyName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "NameProperty"},
            {"PropertyName", 0x4, "NameProperty"},
        }};
    };

    struct CosmeticReactionEventContext
    {
        static constexpr std::string_view Name = "CosmeticReactionEventContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactivityEffectValues = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReactivityEffectValues", 0x0, "StructProperty"},
        }};
    };

    struct CosmeticReactivityComponent
    {
        static constexpr std::string_view Name = "CosmeticReactivityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticModifiers = 0xC8;
            static constexpr std::uintptr_t ActiveTickableEntries = 0xD8;
            static constexpr std::uintptr_t PendingTickableEntriesToRemove = 0xE8;
            static constexpr std::uintptr_t PendingTickableEntriesToAdd = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CosmeticModifiers", 0xC8, "ArrayProperty"},
            {"ActiveTickableEntries", 0xD8, "ArrayProperty"},
            {"PendingTickableEntriesToRemove", 0xE8, "ArrayProperty"},
            {"PendingTickableEntriesToAdd", 0xF8, "ArrayProperty"},
        }};
    };

    struct CosmeticReactivityEffectsHandler
    {
        static constexpr std::string_view Name = "CosmeticReactivityEffectsHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticModifierContext = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CosmeticModifierContext", 0x278, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "NotifyReactivityEffect",
            "OnPostOwnerFinishedCustomization",
        }};
    };

    struct CosmeticTickProvider
    {
        static constexpr std::string_view Name = "CosmeticTickProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticTickableEntry
    {
        static constexpr std::string_view Name = "CosmeticTickableEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticTrigger
    {
        static constexpr std::string_view Name = "CosmeticTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x40;
            static constexpr std::uintptr_t Definition = 0x58;
            static constexpr std::uintptr_t bIsActive = 0x60;
            static constexpr std::uintptr_t PendingFireRequests = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Context", 0x40, "StructProperty"},
            {"Definition", 0x58, "ObjectProperty"},
            {"bIsActive", 0x60, "BoolProperty"},
            {"PendingFireRequests", 0x68, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetContext",
            "GetDefinition",
            "IsActive",
            "OnActivate",
            "OnDeactivate",
            "OnInitialize",
            "RequestFireTrigger",
        }};
    };

    struct CosmeticTriggerContext
    {
        static constexpr std::string_view Name = "CosmeticTriggerContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x0;
            static constexpr std::uintptr_t ModifierOwner = 0x8;
            static constexpr std::uintptr_t ModifierProvider = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetActor", 0x0, "ObjectProperty"},
            {"ModifierOwner", 0x8, "ObjectProperty"},
            {"ModifierProvider", 0x10, "ObjectProperty"},
        }};
    };

    struct CosmeticTriggerDefinition
    {
        static constexpr std::string_view Name = "CosmeticTriggerDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggerFireDelay = 0x28;
            static constexpr std::uintptr_t ExtraFireRequirements = 0x30;
            static constexpr std::uintptr_t CosmeticEventPayloadTransformer = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TriggerFireDelay", 0x28, "FloatProperty"},
            {"ExtraFireRequirements", 0x30, "StructProperty"},
            {"CosmeticEventPayloadTransformer", 0x50, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTriggerInstanceClass",
        }};
    };

    struct CosmeticTriggerFireRequest
    {
        static constexpr std::string_view Name = "CosmeticTriggerFireRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t CosmeticEventPayloadBlackboard = 0x10;
            static constexpr std::uintptr_t DelayTimerHandle = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"CosmeticEventPayloadBlackboard", 0x10, "StructProperty"},
            {"DelayTimerHandle", 0x20, "StructProperty"},
        }};
    };

    struct NumericRangeThresholdRequirement
    {
        static constexpr std::string_view Name = "NumericRangeThresholdRequirement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseNumericThresholdRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x8;
            static constexpr std::uintptr_t MinValue = 0xC;
            static constexpr std::uintptr_t MaxValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operator", 0x8, "EnumProperty"},
            {"MinValue", 0xC, "FloatProperty"},
            {"MaxValue", 0x10, "FloatProperty"},
        }};
    };

    struct NumericThresholdRequirement
    {
        static constexpr std::string_view Name = "NumericThresholdRequirement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseNumericThresholdRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x8;
            static constexpr std::uintptr_t ComparisonValue = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operator", 0x8, "EnumProperty"},
            {"ComparisonValue", 0xC, "FloatProperty"},
        }};
    };

}
