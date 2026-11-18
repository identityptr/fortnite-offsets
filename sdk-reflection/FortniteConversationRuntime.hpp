#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteConversationRuntime
{
    struct FortConversationContextCondition
    {
        static constexpr std::string_view Name = "FortConversationContextCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortConversationContextConditionHelpers
    {
        static constexpr std::string_view Name = "FortConversationContextConditionHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortConversationContextCondition_ParticipantControllerMeetsRequirement
    {
        static constexpr std::string_view Name = "FortConversationContextCondition_ParticipantControllerMeetsRequirement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationContextCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantID = 0x28;
            static constexpr std::uintptr_t Requirement = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParticipantID", 0x28, "StructProperty"},
            {"Requirement", 0x30, "ObjectProperty"},
        }};
    };

    struct FortConversationContextCondition_ParticipantHasCID
    {
        static constexpr std::string_view Name = "FortConversationContextCondition_ParticipantHasCID";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationContextCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantID = 0x28;
            static constexpr std::uintptr_t AllowedCIDs = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParticipantID", 0x28, "StructProperty"},
            {"AllowedCIDs", 0x30, "ArrayProperty"},
        }};
    };

    struct FortConversationContextCondition_ParticipantHasMetaTag
    {
        static constexpr std::string_view Name = "FortConversationContextCondition_ParticipantHasMetaTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationContextCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantID = 0x28;
            static constexpr std::uintptr_t MetaTag = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParticipantID", 0x28, "StructProperty"},
            {"MetaTag", 0x2C, "StructProperty"},
        }};
    };

    struct FortConversationContextCondition_ParticipantHasOwnedTag
    {
        static constexpr std::string_view Name = "FortConversationContextCondition_ParticipantHasOwnedTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationContextCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantID = 0x28;
            static constexpr std::uintptr_t OwnedTag = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParticipantID", 0x28, "StructProperty"},
            {"OwnedTag", 0x2C, "StructProperty"},
        }};
    };

    struct FortConversationGetGraphInterface
    {
        static constexpr std::string_view Name = "FortConversationGetGraphInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortConversationMarkerInterface
    {
        static constexpr std::string_view Name = "FortConversationMarkerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortConversationParamLibrary
    {
        static constexpr std::string_view Name = "FortConversationParamLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortConversationParticipantComponent
    {
        static constexpr std::string_view Name = "FortConversationParticipantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationParticipantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationsActive = 0x120;
            static constexpr std::uintptr_t Auth_CurrentConversation = 0x128;
            static constexpr std::uintptr_t Auth_Conversations = 0x130;
            static constexpr std::uintptr_t LastMessage = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConversationsActive", 0x120, "IntProperty"},
            {"Auth_CurrentConversation", 0x128, "ObjectProperty"},
            {"Auth_Conversations", 0x130, "ArrayProperty"},
            {"LastMessage", 0x140, "StructProperty"},
        }};
    };

    struct FortPlayerConversationComponent
    {
        static constexpr std::string_view Name = "FortPlayerConversationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationParticipantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationParticipantsInRange = 0x1B8;
            static constexpr std::uintptr_t GreetSphereRadius = 0x1C8;
            static constexpr std::uintptr_t IconVisibilityRadius = 0x1CC;
            static constexpr std::uintptr_t AbortConversationRange = 0x1D0;
            static constexpr std::uintptr_t RidingOnActorTag = 0x1D4;
            static constexpr std::uintptr_t RidingOnActorRangeMultiplierSquared = 0x1D8;
            static constexpr std::uintptr_t IndicatedNPCConversationComponents = 0x218;
            static constexpr std::uintptr_t bMoveShouldAbortConversation = 0x230;
            static constexpr std::uintptr_t bCachedDefaultMoveShouldAbortConverationValue = 0x231;
            static constexpr std::uintptr_t LastSanitizationMessage = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ConversationParticipantsInRange", 0x1B8, "ArrayProperty"},
            {"GreetSphereRadius", 0x1C8, "FloatProperty"},
            {"IconVisibilityRadius", 0x1CC, "FloatProperty"},
            {"AbortConversationRange", 0x1D0, "FloatProperty"},
            {"RidingOnActorTag", 0x1D4, "StructProperty"},
            {"RidingOnActorRangeMultiplierSquared", 0x1D8, "FloatProperty"},
            {"IndicatedNPCConversationComponents", 0x218, "SetProperty"},
            {"bMoveShouldAbortConversation", 0x230, "BoolProperty"},
            {"bCachedDefaultMoveShouldAbortConverationValue", 0x231, "BoolProperty"},
            {"LastSanitizationMessage", 0x368, "StructProperty"},
        }};
    };

    struct FortniteConversationGlobals
    {
        static constexpr std::string_view Name = "FortniteConversationGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
