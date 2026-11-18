#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BasicQuest
{
    struct BasicQuest
    {
        static constexpr std::string_view Name = "BasicQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestBase";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestObjective = 0x158;
            static constexpr std::uintptr_t QuestRewards = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestObjective", 0x158, "InterfaceProperty"},
            {"QuestRewards", 0x168, "ArrayProperty"},
        }};
    };

    struct BasicQuestDefinition
    {
        static constexpr std::string_view Name = "BasicQuestDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BasicQuestView
    {
        static constexpr std::string_view Name = "BasicQuestView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestView";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveStates = 0x20;
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t Description = 0x40;
            static constexpr std::uintptr_t ShortDescription = 0x50;
            static constexpr std::uintptr_t Icon = 0x60;
            static constexpr std::uintptr_t Rewards = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ObjectiveStates", 0x20, "ArrayProperty"},
            {"DisplayName", 0x30, "TextProperty"},
            {"Description", 0x40, "TextProperty"},
            {"ShortDescription", 0x50, "TextProperty"},
            {"Icon", 0x60, "SoftObjectProperty"},
            {"Rewards", 0x80, "ArrayProperty"},
        }};
    };

    struct HasObjective
    {
        static constexpr std::string_view Name = "HasObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HasQuestRewards
    {
        static constexpr std::string_view Name = "HasQuestRewards";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectiveDefinitionBase
    {
        static constexpr std::string_view Name = "ObjectiveDefinitionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x38;
            static constexpr std::uintptr_t Description = 0x48;
            static constexpr std::uintptr_t ShortDescription = 0x58;
            static constexpr std::uintptr_t Icon = 0x68;
            static constexpr std::uintptr_t ObjectiveTemplateId = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x38, "TextProperty"},
            {"Description", 0x48, "TextProperty"},
            {"ShortDescription", 0x58, "TextProperty"},
            {"Icon", 0x68, "SoftObjectProperty"},
            {"ObjectiveTemplateId", 0x88, "StrProperty"},
        }};
    };

    struct ObjectiveInstance
    {
        static constexpr std::string_view Name = "ObjectiveInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectiveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningDefinition = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningDefinition", 0x88, "InterfaceProperty"},
        }};
    };

    struct QuestRewardDefinitionBase
    {
        static constexpr std::string_view Name = "QuestRewardDefinitionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x38;
            static constexpr std::uintptr_t Description = 0x48;
            static constexpr std::uintptr_t ShortDescription = 0x58;
            static constexpr std::uintptr_t Icon = 0x68;
            static constexpr std::uintptr_t RewardTemplateId = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x38, "TextProperty"},
            {"Description", 0x48, "TextProperty"},
            {"ShortDescription", 0x58, "TextProperty"},
            {"Icon", 0x68, "SoftObjectProperty"},
            {"RewardTemplateId", 0x88, "StrProperty"},
        }};
    };

    struct QuestRewardInstance
    {
        static constexpr std::string_view Name = "QuestRewardInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningDefinition = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningDefinition", 0x70, "InterfaceProperty"},
        }};
    };

    struct QuestViewTest_AddReferencedObjectsSpyView
    {
        static constexpr std::string_view Name = "QuestViewTest_AddReferencedObjectsSpyView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestView";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestID = 0x8;
            static constexpr std::uintptr_t QuestState = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestID", 0x8, "StructProperty"},
            {"QuestState", 0x18, "EnumProperty"},
        }};
    };

    struct QuestViewTest_BasicQuest
    {
        static constexpr std::string_view Name = "QuestViewTest_BasicQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasicQuest";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestObjective = 0x158;
            static constexpr std::uintptr_t QuestRewards = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestObjective", 0x158, "InterfaceProperty"},
            {"QuestRewards", 0x168, "ArrayProperty"},
        }};
    };

    struct QuestViewTest_DirtyMarkSpyQuest
    {
        static constexpr std::string_view Name = "QuestViewTest_DirtyMarkSpyQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasicQuest";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestObjective = 0x158;
            static constexpr std::uintptr_t QuestRewards = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestObjective", 0x158, "InterfaceProperty"},
            {"QuestRewards", 0x168, "ArrayProperty"},
        }};
    };

    struct QuestViewTest_FieldProbeHost
    {
        static constexpr std::string_view Name = "QuestViewTest_FieldProbeHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ProbeField = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProbeField", 0x28, "ObjectProperty"},
        }};
    };

    struct QuestViewTest_RefHolderView
    {
        static constexpr std::string_view Name = "QuestViewTest_RefHolderView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestView";
        struct Offsets
        {
            static constexpr std::uintptr_t HeldRef = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HeldRef", 0x20, "ObjectProperty"},
        }};
    };

    struct QuestViewTest_UpdateObjectiveSpyView
    {
        static constexpr std::string_view Name = "QuestViewTest_UpdateObjectiveSpyView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectiveView";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveUID = 0x8;
            static constexpr std::uintptr_t bComplete = 0x18;
            static constexpr std::uintptr_t DisplayName = 0x20;
            static constexpr std::uintptr_t Description = 0x30;
            static constexpr std::uintptr_t ShortDescription = 0x40;
            static constexpr std::uintptr_t Icon = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ObjectiveUID", 0x8, "StructProperty"},
            {"bComplete", 0x18, "BoolProperty"},
            {"DisplayName", 0x20, "TextProperty"},
            {"Description", 0x30, "TextProperty"},
            {"ShortDescription", 0x40, "TextProperty"},
            {"Icon", 0x50, "SoftObjectProperty"},
        }};
    };

    struct QuestViewTest_UpdateSpyView
    {
        static constexpr std::string_view Name = "QuestViewTest_UpdateSpyView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BasicQuestView";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateQuestViewCallCount = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpdateQuestViewCallCount", 0x90, "IntProperty"},
        }};
    };

    struct VerseQuestReward
    {
        static constexpr std::string_view Name = "VerseQuestReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
