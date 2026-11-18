#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ModularQuest
{
    struct HasQuestExtensions
    {
        static constexpr std::string_view Name = "HasQuestExtensions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModularQuest
    {
        static constexpr std::string_view Name = "ModularQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasicQuest";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestExtensions = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestExtensions", 0x180, "ArrayProperty"},
        }};
    };

    struct ModularQuestDefinition
    {
        static constexpr std::string_view Name = "ModularQuestDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BasicQuestDefinition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModularQuestView
    {
        static constexpr std::string_view Name = "ModularQuestView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BasicQuestView";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtensionData = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtensionData", 0x90, "ArrayProperty"},
        }};
    };

    struct QuestDefinitionExtension
    {
        static constexpr std::string_view Name = "QuestDefinitionExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestDefinitionExtensionBase
    {
        static constexpr std::string_view Name = "QuestDefinitionExtensionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtensionTemplateId = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtensionTemplateId", 0x38, "StrProperty"},
        }};
    };

    struct QuestExtension
    {
        static constexpr std::string_view Name = "QuestExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestExtensionBase
    {
        static constexpr std::string_view Name = "QuestExtensionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningDefinition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningDefinition", 0x30, "InterfaceProperty"},
        }};
    };

    struct QuestInstance
    {
        static constexpr std::string_view Name = "QuestInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ModularQuest";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestExtensions = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestExtensions", 0x180, "ArrayProperty"},
        }};
    };

    struct QuestInstanceTest_DummyDefinition
    {
        static constexpr std::string_view Name = "QuestInstanceTest_DummyDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestInstanceTest_DummyObjective
    {
        static constexpr std::string_view Name = "QuestInstanceTest_DummyObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestInstanceTest_DummyReward
    {
        static constexpr std::string_view Name = "QuestInstanceTest_DummyReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestInstanceTest_TrackingObjective
    {
        static constexpr std::string_view Name = "QuestInstanceTest_TrackingObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestViewExtension
    {
        static constexpr std::string_view Name = "QuestViewExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestViewTest_UpdateExtensionSpy
    {
        static constexpr std::string_view Name = "QuestViewTest_UpdateExtensionSpy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestViewExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestViewTest_VetoingExtension
    {
        static constexpr std::string_view Name = "QuestViewTest_VetoingExtension";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestViewExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseQuestExtension
    {
        static constexpr std::string_view Name = "VerseQuestExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
