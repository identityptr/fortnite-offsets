#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoTouchHUDTutorial
{
    struct GameFeatureAction_AddLocalPlayerStateMachine
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddLocalPlayerStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineClass = 0x28;
            static constexpr std::uintptr_t StateMachineManagerClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateMachineClass", 0x28, "SoftClassProperty"},
            {"StateMachineManagerClass", 0x48, "ClassProperty"},
        }};
    };

    struct GameFeatureAction_MigrateTutorialSeenSteps
    {
        static constexpr std::string_view Name = "GameFeatureAction_MigrateTutorialSeenSteps";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t LegacyTutorialStepTags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LegacyTutorialStepTags", 0x28, "ArrayProperty"},
        }};
    };

    struct HUDWidgetBehaviorComponentTagContainerMonitor_StateMachine
    {
        static constexpr std::string_view Name = "HUDWidgetBehaviorComponentTagContainerMonitor_StateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ButtonBehaviorComponentTagContainerMonitor";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineId = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateMachineId", 0x40, "StructProperty"},
        }};
    };

    struct JunoLocalPlayerStateMachineManager
    {
        static constexpr std::string_view Name = "JunoLocalPlayerStateMachineManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayStateMachineManager";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineList = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateMachineList", 0xC0, "StructProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t TutorialDynamicScene = 0x78;
            static constexpr std::uintptr_t bCanMarkAsSeen = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TutorialDynamicScene", 0x78, "ObjectProperty"},
            {"bCanMarkAsSeen", 0x80, "BoolProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState_CompleteTutorial
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState_CompleteTutorial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTouchHUDTutorialState";
        struct Offsets
        {
            static constexpr std::uintptr_t TutorialDynamicScene = 0x78;
            static constexpr std::uintptr_t bCanMarkAsSeen = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TutorialDynamicScene", 0x78, "ObjectProperty"},
            {"bCanMarkAsSeen", 0x80, "BoolProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState_InputAction
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState_InputAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTouchHUDTutorialState";
        struct Offsets
        {
            static constexpr std::uintptr_t TutorializedInputAction = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TutorializedInputAction", 0x88, "ObjectProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState_LookInput
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState_LookInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTouchHUDTutorialState";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredInputTime = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredInputTime", 0x90, "FloatProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState_Sprint
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState_Sprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTouchHUDTutorialState";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredSprintTime = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredSprintTime", 0x90, "FloatProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState_TagQueryAndInputAction
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState_TagQueryAndInputAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTouchHUDTutorialState";
        struct Offsets
        {
            static constexpr std::uintptr_t TutorializedInputAction = 0x88;
            static constexpr std::uintptr_t TagQuery = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TutorializedInputAction", 0x88, "ObjectProperty"},
            {"TagQuery", 0x90, "StructProperty"},
        }};
    };

    struct JunoTouchHUDTutorialState_WaitForSpawn
    {
        static constexpr std::string_view Name = "JunoTouchHUDTutorialState_WaitForSpawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTouchHUDTutorialState";
        struct Offsets
        {
            static constexpr std::uintptr_t TutorialDynamicScene = 0x78;
            static constexpr std::uintptr_t bCanMarkAsSeen = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TutorialDynamicScene", 0x78, "ObjectProperty"},
            {"bCanMarkAsSeen", 0x80, "BoolProperty"},
        }};
    };

    struct JunoTouchTutorialViewmodel
    {
        static constexpr std::string_view Name = "JunoTouchTutorialViewmodel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUDContentInstanceableViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t IsShowingLeftSide = 0x68;
            static constexpr std::uintptr_t IsShowingHand = 0x69;
            static constexpr std::uintptr_t IsVertical = 0x6A;
            static constexpr std::uintptr_t PromptText = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IsShowingLeftSide", 0x68, "BoolProperty"},
            {"IsShowingHand", 0x69, "BoolProperty"},
            {"IsVertical", 0x6A, "BoolProperty"},
            {"PromptText", 0x70, "TextProperty"},
        }};
    };

}
