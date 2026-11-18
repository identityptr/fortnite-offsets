#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayBehaviorsModule
{
    struct AgentGameplayBehaviors
    {
        static constexpr std::string_view Name = "AgentGameplayBehaviors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Behaviors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Behaviors", 0x0, "ArrayProperty"},
        }};
    };

    struct BTDecorator_GameplayTagQuery
    {
        static constexpr std::string_view Name = "BTDecorator_GameplayTagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorForGameplayTagQuery = 0x68;
            static constexpr std::uintptr_t GameplayTagQuery = 0x90;
            static constexpr std::uintptr_t QueryTags = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorForGameplayTagQuery", 0x68, "StructProperty"},
            {"GameplayTagQuery", 0x90, "StructProperty"},
            {"QueryTags", 0xD8, "ArrayProperty"},
        }};
    };

    struct BTTask_SetKeyValueGameplayTag
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueGameplayTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_StopGameplayBehavior
    {
        static constexpr std::string_view Name = "BTTask_StopGameplayBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorToStop = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorToStop", 0x70, "ClassProperty"},
        }};
    };

    struct BlackboardKeyType_GameplayTag
    {
        static constexpr std::string_view Name = "BlackboardKeyType_GameplayTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "StructProperty"},
        }};
    };

    struct GameplayBehavior
    {
        static constexpr std::string_view Name = "GameplayBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionTag = 0x3C;
            static constexpr std::uintptr_t RelevantActors = 0x58;
            static constexpr std::uintptr_t TransientSmartObjectOwner = 0x68;
            static constexpr std::uintptr_t TransientAvatar = 0x70;
            static constexpr std::uintptr_t ActiveTasks = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ActionTag", 0x3C, "StructProperty"},
            {"RelevantActors", 0x58, "ArrayProperty"},
            {"TransientSmartObjectOwner", 0x68, "ObjectProperty"},
            {"TransientAvatar", 0x70, "ObjectProperty"},
            {"ActiveTasks", 0x78, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "K2_AbortBehavior",
            "K2_EndBehavior",
            "K2_GetNextActorIndexInSequence",
            "K2_OnFinished",
            "K2_OnFinishedCharacter",
            "K2_OnFinishedPawn",
            "K2_OnTriggered",
            "K2_OnTriggeredCharacter",
            "K2_OnTriggeredPawn",
            "K2_TriggerBehavior",
        }};
    };

    struct GameplayBehaviorConfig
    {
        static constexpr std::string_view Name = "GameplayBehaviorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorClass", 0x28, "ClassProperty"},
        }};
    };

    struct GameplayBehaviorConfig_Animation
    {
        static constexpr std::string_view Name = "GameplayBehaviorConfig_Animation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayBehaviorConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimMontage = 0x30;
            static constexpr std::uintptr_t PlayRate = 0x50;
            static constexpr std::uintptr_t StartSectionName = 0x54;
            static constexpr std::uintptr_t bLoop = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimMontage", 0x30, "SoftObjectProperty"},
            {"PlayRate", 0x50, "FloatProperty"},
            {"StartSectionName", 0x54, "NameProperty"},
            {"bLoop", 0x58, "BoolProperty"},
        }};
    };

    struct GameplayBehaviorConfig_BehaviorTree
    {
        static constexpr std::string_view Name = "GameplayBehaviorConfig_BehaviorTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayBehaviorConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorTree = 0x30;
            static constexpr std::uintptr_t bRevertToPreviousBTOnFinish = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BehaviorTree", 0x30, "SoftObjectProperty"},
            {"bRevertToPreviousBTOnFinish", 0x50, "BoolProperty"},
        }};
    };

    struct GameplayBehaviorSubsystem
    {
        static constexpr std::string_view Name = "GameplayBehaviorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AgentGameplayBehaviors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AgentGameplayBehaviors", 0x38, "MapProperty"},
        }};
    };

    struct GameplayBehavior_AnimationBased
    {
        static constexpr std::string_view Name = "GameplayBehavior_AnimationBased";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivePlayback = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActivePlayback", 0x88, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnMontageFinished",
        }};
    };

    struct GameplayBehavior_BehaviorTree
    {
        static constexpr std::string_view Name = "GameplayBehavior_BehaviorTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousBT = 0x88;
            static constexpr std::uintptr_t AIController = 0x90;
            static constexpr std::uintptr_t bSingleRun = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PreviousBT", 0x88, "ObjectProperty"},
            {"AIController", 0x90, "ObjectProperty"},
            {"bSingleRun", 0x98, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnPossessedPawnChanged",
        }};
    };

    struct GameplayBehaviorsBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "GameplayBehaviorsBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddGameplayTagFilterToBlackboardKeySelector",
            "GetBlackboardValueAsGameplayTag",
            "GetBlackboardValueAsGameplayTagFromBlackboardComp",
            "SetBlackboardValueAsGameplayTag",
            "SetValueAsGameplayTagForBlackboardComp",
        }};
    };

    struct MontagePlaybackData
    {
        static constexpr std::string_view Name = "MontagePlaybackData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t avatar = 0x0;
            static constexpr std::uintptr_t AnimMontage = 0x8;
            static constexpr std::uintptr_t AbilityComponent = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"avatar", 0x0, "ObjectProperty"},
            {"AnimMontage", 0x8, "ObjectProperty"},
            {"AbilityComponent", 0x10, "ObjectProperty"},
        }};
    };

    struct ValueOrBBKey_GameplayTagBlueprintUtility
    {
        static constexpr std::string_view Name = "ValueOrBBKey_GameplayTagBlueprintUtility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTagContainer",
        }};
    };

    struct ValueOrBBKey_GameplayTagContainer
    {
        static constexpr std::string_view Name = "ValueOrBBKey_GameplayTagContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "StructProperty"},
        }};
    };

}
