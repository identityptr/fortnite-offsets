#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ProgressionObjective
{
    struct HasObjectiveAnchor
    {
        static constexpr std::string_view Name = "HasObjectiveAnchor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HasObjectiveContributors
    {
        static constexpr std::string_view Name = "HasObjectiveContributors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Objective
    {
        static constexpr std::string_view Name = "Objective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectiveBase
    {
        static constexpr std::string_view Name = "ObjectiveBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectiveDebugAction
    {
        static constexpr std::string_view Name = "ObjectiveDebugAction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionID = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActionID", 0x0, "NameProperty"},
            {"Label", 0x8, "StrProperty"},
        }};
    };

    struct ObjectiveUID
    {
        static constexpr std::string_view Name = "ObjectiveUID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalUID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalUID", 0x0, "StructProperty"},
        }};
    };

    struct ObjectiveView
    {
        static constexpr std::string_view Name = "ObjectiveView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
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

    struct QuestDebugFieldNode
    {
        static constexpr std::string_view Name = "QuestDebugFieldNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x20;
            static constexpr std::uintptr_t Source = 0x28;
            static constexpr std::uintptr_t Value = 0x38;
            static constexpr std::uintptr_t Status = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Label", 0x20, "NameProperty"},
            {"Source", 0x28, "StrProperty"},
            {"Value", 0x38, "StrProperty"},
            {"Status", 0x48, "ByteProperty"},
        }};
    };

    struct QuestDebugNode
    {
        static constexpr std::string_view Name = "QuestDebugNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x8;
            static constexpr std::uintptr_t bStartCollapsed = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Children", 0x8, "ArrayProperty"},
            {"bStartCollapsed", 0x18, "BoolProperty"},
        }};
    };

    struct QuestDebugObjectiveNode
    {
        static constexpr std::string_view Name = "QuestDebugObjectiveNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x20;
            static constexpr std::uintptr_t bComplete = 0x24;
            static constexpr std::uintptr_t ObjectiveUID = 0x28;
            static constexpr std::uintptr_t Actions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DisplayName", 0x20, "NameProperty"},
            {"bComplete", 0x24, "BoolProperty"},
            {"ObjectiveUID", 0x28, "StructProperty"},
            {"Actions", 0x38, "ArrayProperty"},
        }};
    };

    struct QuestDebugSectionNode
    {
        static constexpr std::string_view Name = "QuestDebugSectionNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestDebugNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Title", 0x20, "NameProperty"},
        }};
    };

    struct VerseObjective
    {
        static constexpr std::string_view Name = "VerseObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
