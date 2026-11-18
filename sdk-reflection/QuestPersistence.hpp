#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::QuestPersistence
{
    struct ObjectivePersistencePayload
    {
        static constexpr std::string_view Name = "ObjectivePersistencePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectiveSnapshot
    {
        static constexpr std::string_view Name = "ObjectiveSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveTemplateId = 0x0;
            static constexpr std::uintptr_t ObjectiveUID = 0x10;
            static constexpr std::uintptr_t Progress = 0x20;
            static constexpr std::uintptr_t bComplete = 0x24;
            static constexpr std::uintptr_t ExtendedData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ObjectiveTemplateId", 0x0, "StrProperty"},
            {"ObjectiveUID", 0x10, "StructProperty"},
            {"Progress", 0x20, "IntProperty"},
            {"bComplete", 0x24, "BoolProperty"},
            {"ExtendedData", 0x28, "StructProperty"},
        }};
    };

    struct QuestExtensionPersistencePayload
    {
        static constexpr std::string_view Name = "QuestExtensionPersistencePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestExtensionSnapshot
    {
        static constexpr std::string_view Name = "QuestExtensionSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtensionTemplateId = 0x0;
            static constexpr std::uintptr_t ExtendedData = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExtensionTemplateId", 0x0, "StrProperty"},
            {"ExtendedData", 0x10, "StructProperty"},
        }};
    };

    struct QuestMembershipSnapshot
    {
        static constexpr std::string_view Name = "QuestMembershipSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantKey = 0x0;
            static constexpr std::uintptr_t bContributes = 0x10;
            static constexpr std::uintptr_t bObserves = 0x11;
            static constexpr std::uintptr_t bReceives = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParticipantKey", 0x0, "StrProperty"},
            {"bContributes", 0x10, "BoolProperty"},
            {"bObserves", 0x11, "BoolProperty"},
            {"bReceives", 0x12, "BoolProperty"},
        }};
    };

    struct QuestPersistencePayload
    {
        static constexpr std::string_view Name = "QuestPersistencePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestRewardPersistencePayload
    {
        static constexpr std::string_view Name = "QuestRewardPersistencePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestRewardSnapshot
    {
        static constexpr std::string_view Name = "QuestRewardSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardTemplateId = 0x0;
            static constexpr std::uintptr_t RewardUID = 0x10;
            static constexpr std::uintptr_t ExtendedData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RewardTemplateId", 0x0, "StrProperty"},
            {"RewardUID", 0x10, "StructProperty"},
            {"ExtendedData", 0x20, "StructProperty"},
        }};
    };

    struct QuestSnapshot
    {
        static constexpr std::string_view Name = "QuestSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestID = 0x0;
            static constexpr std::uintptr_t TemplateId = 0x10;
            static constexpr std::uintptr_t CreationTime = 0x20;
            static constexpr std::uintptr_t CompletionTime = 0x28;
            static constexpr std::uintptr_t State = 0x30;
            static constexpr std::uintptr_t bFailed = 0x31;
            static constexpr std::uintptr_t Objectives = 0x38;
            static constexpr std::uintptr_t Extensions = 0x48;
            static constexpr std::uintptr_t Rewards = 0x58;
            static constexpr std::uintptr_t Memberships = 0x68;
            static constexpr std::uintptr_t ExtendedData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"QuestID", 0x0, "StructProperty"},
            {"TemplateId", 0x10, "StrProperty"},
            {"CreationTime", 0x20, "StructProperty"},
            {"CompletionTime", 0x28, "StructProperty"},
            {"State", 0x30, "EnumProperty"},
            {"bFailed", 0x31, "BoolProperty"},
            {"Objectives", 0x38, "ArrayProperty"},
            {"Extensions", 0x48, "ArrayProperty"},
            {"Rewards", 0x58, "ArrayProperty"},
            {"Memberships", 0x68, "ArrayProperty"},
            {"ExtendedData", 0x78, "StructProperty"},
        }};
    };

    struct QuestStateSnapshot
    {
        static constexpr std::string_view Name = "QuestStateSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Quests = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quests", 0x0, "ArrayProperty"},
        }};
    };

    struct SnapshotSerializableObjective
    {
        static constexpr std::string_view Name = "SnapshotSerializableObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotSerializableQuest
    {
        static constexpr std::string_view Name = "SnapshotSerializableQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotSerializableQuestExtension
    {
        static constexpr std::string_view Name = "SnapshotSerializableQuestExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SnapshotSerializableQuestReward
    {
        static constexpr std::string_view Name = "SnapshotSerializableQuestReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseCompositeObjectiveSnapshot
    {
        static constexpr std::string_view Name = "VerseCompositeObjectiveSnapshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseObjectiveSnapshot
    {
        static constexpr std::string_view Name = "VerseObjectiveSnapshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VersePersistableObjective
    {
        static constexpr std::string_view Name = "VersePersistableObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VersePersistableQuest
    {
        static constexpr std::string_view Name = "VersePersistableQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseProgressObjectiveSnapshot
    {
        static constexpr std::string_view Name = "VerseProgressObjectiveSnapshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestMembershipData
    {
        static constexpr std::string_view Name = "VerseQuestMembershipData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestProgressData
    {
        static constexpr std::string_view Name = "VerseQuestProgressData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseSequentialObjectiveSnapshot
    {
        static constexpr std::string_view Name = "VerseSequentialObjectiveSnapshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseStateMachineObjectiveSnapshot
    {
        static constexpr std::string_view Name = "VerseStateMachineObjectiveSnapshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseTimedObjectiveSnapshot
    {
        static constexpr std::string_view Name = "VerseTimedObjectiveSnapshot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
