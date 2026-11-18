#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HierarchyTableRuntime
{
    struct HierarchyTable
    {
        static constexpr std::string_view Name = "HierarchyTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TableMetadata = 0x28;
            static constexpr std::uintptr_t ElementType = 0x38;
            static constexpr std::uintptr_t TableData = 0x40;
            static constexpr std::uintptr_t HierarchyGuid = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TableMetadata", 0x28, "StructProperty"},
            {"ElementType", 0x38, "ObjectProperty"},
            {"TableData", 0x40, "ArrayProperty"},
            {"HierarchyGuid", 0x50, "StructProperty"},
        }};
    };

    struct HierarchyTableEntryData
    {
        static constexpr std::string_view Name = "HierarchyTableEntryData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerTable = 0x0;
            static constexpr std::uintptr_t Payload = 0x8;
            static constexpr std::uintptr_t Identifier = 0x20;
            static constexpr std::uintptr_t Parent = 0x24;
            static constexpr std::uintptr_t TablePayload = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OwnerTable", 0x0, "ObjectProperty"},
            {"Payload", 0x8, "OptionalProperty"},
            {"Identifier", 0x20, "NameProperty"},
            {"Parent", 0x24, "IntProperty"},
            {"TablePayload", 0x28, "StructProperty"},
        }};
    };

    struct HierarchyTable_ElementType
    {
        static constexpr std::string_view Name = "HierarchyTable_ElementType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HierarchyTable_ElementType_Float
    {
        static constexpr std::string_view Name = "HierarchyTable_ElementType_Float";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "HierarchyTable_ElementType";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "FloatProperty"},
        }};
    };

    struct HierarchyTable_TablePayloadType
    {
        static constexpr std::string_view Name = "HierarchyTable_TablePayloadType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HierarchyTable_TableType
    {
        static constexpr std::string_view Name = "HierarchyTable_TableType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HierarchyTable_TableType_Default
    {
        static constexpr std::string_view Name = "HierarchyTable_TableType_Default";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "HierarchyTable_TableType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
