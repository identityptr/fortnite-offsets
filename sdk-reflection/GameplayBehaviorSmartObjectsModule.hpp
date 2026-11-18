#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayBehaviorSmartObjectsModule
{
    struct AITask_UseGameplayBehaviorSmartObject
    {
        static constexpr std::string_view Name = "AITask_UseGameplayBehaviorSmartObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSucceeded = 0x68;
            static constexpr std::uintptr_t OnFailed = 0x78;
            static constexpr std::uintptr_t OnMoveToFailed = 0x88;
            static constexpr std::uintptr_t MoveToTask = 0x98;
            static constexpr std::uintptr_t GameplayBehavior = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSucceeded", 0x68, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x78, "MulticastInlineDelegateProperty"},
            {"OnMoveToFailed", 0x88, "MulticastInlineDelegateProperty"},
            {"MoveToTask", 0x98, "ObjectProperty"},
            {"GameplayBehavior", 0xA0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "MoveToAndUseSmartObjectWithGameplayBehavior",
            "UseGameplayBehaviorSmartObject",
            "UseSmartObjectWithGameplayBehavior",
        }};
    };

    struct BTTask_FindAndUseGameplayBehaviorSmartObject
    {
        static constexpr std::string_view Name = "BTTask_FindAndUseGameplayBehaviorSmartObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivityRequirements = 0x70;
            static constexpr std::uintptr_t ClaimPriority = 0xB8;
            static constexpr std::uintptr_t EQSRequest = 0xC0;
            static constexpr std::uintptr_t Radius = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActivityRequirements", 0x70, "StructProperty"},
            {"ClaimPriority", 0xB8, "EnumProperty"},
            {"EQSRequest", 0xC0, "StructProperty"},
            {"Radius", 0x108, "FloatProperty"},
        }};
    };

    struct GameplayBehaviorSmartObjectBehaviorDefinition
    {
        static constexpr std::string_view Name = "GameplayBehaviorSmartObjectBehaviorDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SmartObjectBehaviorDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayBehaviorConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayBehaviorConfig", 0x28, "ObjectProperty"},
        }};
    };

    struct GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "GameplayBehaviorSmartObjectsBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UseGameplayBehaviorSmartObject",
        }};
    };

}
