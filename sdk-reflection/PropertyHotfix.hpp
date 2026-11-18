#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PropertyHotfix
{
    struct PropertyHotfix
    {
        static constexpr std::string_view Name = "PropertyHotfix";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Assets = 0x0;
            static constexpr std::uintptr_t Patches = 0x10;
            static constexpr std::uintptr_t Source = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Assets", 0x0, "ArrayProperty"},
            {"Patches", 0x10, "ArrayProperty"},
            {"Source", 0x20, "NameProperty"},
        }};
    };

    struct PropertyHotfixAssetUndo
    {
        static constexpr std::string_view Name = "PropertyHotfixAssetUndo";
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

    struct PropertyHotfixHandler
    {
        static constexpr std::string_view Name = "PropertyHotfixHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyHotfixSettings
    {
        static constexpr std::string_view Name = "PropertyHotfixSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Hotfixes = 0x28;
            static constexpr std::uintptr_t PatchableAssetClasses = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Hotfixes", 0x28, "ArrayProperty"},
            {"PatchableAssetClasses", 0x38, "ArrayProperty"},
        }};
    };

    struct PropertyHotfixSubsystem
    {
        static constexpr std::string_view Name = "PropertyHotfixSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AppliedUndo = 0x50;
            static constexpr std::uintptr_t Handlers = 0x60;
            static constexpr std::uintptr_t RegisteredLoadHookClasses = 0x80;
            static constexpr std::uintptr_t PinnedAssets = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AppliedUndo", 0x50, "MapProperty"},
            {"Handlers", 0x60, "MapProperty"},
            {"RegisteredLoadHookClasses", 0x80, "ArrayProperty"},
            {"PinnedAssets", 0xB8, "ArrayProperty"},
        }};
    };

    struct PropertyPatch
    {
        static constexpr std::string_view Name = "PropertyPatch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Op = 0x10;
            static constexpr std::uintptr_t Value = 0x18;
            static constexpr std::uintptr_t Class = 0x28;
            static constexpr std::uintptr_t Source = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Path", 0x0, "StrProperty"},
            {"Op", 0x10, "EnumProperty"},
            {"Value", 0x18, "StrProperty"},
            {"Class", 0x28, "StrProperty"},
            {"Source", 0x38, "NameProperty"},
        }};
    };

    struct PropertyPatchUndo
    {
        static constexpr std::string_view Name = "PropertyPatchUndo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
            static constexpr std::uintptr_t Op = 0x10;
            static constexpr std::uintptr_t PriorValue = 0x18;
            static constexpr std::uintptr_t AppliedValue = 0x28;
            static constexpr std::uintptr_t Class = 0x38;
            static constexpr std::uintptr_t Source = 0x48;
            static constexpr std::uintptr_t RemovedObject = 0x50;
            static constexpr std::uintptr_t RemovedValue = 0x58;
            static constexpr std::uintptr_t RemovedIndex = 0x68;
            static constexpr std::uintptr_t TypeCountAfter = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Path", 0x0, "StrProperty"},
            {"Op", 0x10, "EnumProperty"},
            {"PriorValue", 0x18, "StrProperty"},
            {"AppliedValue", 0x28, "StrProperty"},
            {"Class", 0x38, "StrProperty"},
            {"Source", 0x48, "NameProperty"},
            {"RemovedObject", 0x50, "ObjectProperty"},
            {"RemovedValue", 0x58, "StrProperty"},
            {"RemovedIndex", 0x68, "IntProperty"},
            {"TypeCountAfter", 0x6C, "IntProperty"},
        }};
    };

}
