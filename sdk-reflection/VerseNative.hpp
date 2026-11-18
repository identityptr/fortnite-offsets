#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseNative
{
    struct SolarisProfilingLibrary
    {
        static constexpr std::string_view Name = "SolarisProfilingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BeginProfileBlock",
            "EndProfileBlock",
        }};
    };

    struct VerseAsset
    {
        static constexpr std::string_view Name = "VerseAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssetClass", 0x28, "ClassProperty"},
        }};
    };

    struct VerseIntRange
    {
        static constexpr std::string_view Name = "VerseIntRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Right = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Left", 0x0, "Int64Property"},
            {"Right", 0x8, "Int64Property"},
        }};
    };

    struct VerseNativeGameFeatureObserver
    {
        static constexpr std::string_view Name = "VerseNativeGameFeatureObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VersePersistentVarWeakMapKey
    {
        static constexpr std::string_view Name = "VersePersistentVarWeakMapKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseStmLibrary
    {
        static constexpr std::string_view Name = "VerseStmLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "StmBegin",
            "StmCommit",
            "StmEnabled",
            "StmEnterFrame",
            "StmLeaveFrame",
            "StmRollback",
            "StmSave",
        }};
    };

    struct VersionedDigestCode
    {
        static constexpr std::string_view Name = "VersionedDigestCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectName = 0x0;
            static constexpr std::uintptr_t Code = 0x10;
            static constexpr std::uintptr_t EffectiveVerseVersion = 0x20;
            static constexpr std::uintptr_t DependencyPackageNames = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProjectName", 0x0, "StrProperty"},
            {"Code", 0x10, "ArrayProperty"},
            {"EffectiveVerseVersion", 0x20, "UInt32Property"},
            {"DependencyPackageNames", 0x28, "ArrayProperty"},
        }};
    };

    struct akeType
    {
        static constexpr std::string_view Name = "akeType";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
