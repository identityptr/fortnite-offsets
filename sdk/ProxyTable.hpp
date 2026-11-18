#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ProxyTable
{
    struct ChooserParameterProxyTable
    {
        static constexpr std::string_view Name = "ChooserParameterProxyTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChooserParameterProxyTableBase
    {
        static constexpr std::string_view Name = "ChooserParameterProxyTableBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LookupProxy
    {
        static constexpr std::string_view Name = "LookupProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Proxy = 0x8;
            static constexpr std::uintptr_t ProxyTable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Proxy", 0x8, "ObjectProperty"},
            {"ProxyTable", 0x10, "StructProperty"},
        }};
    };

    struct LookupProxyWithOverrideTable
    {
        static constexpr std::string_view Name = "LookupProxyWithOverrideTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ObjectChooserBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Proxy = 0x8;
            static constexpr std::uintptr_t OverrideProxyTable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Proxy", 0x8, "ObjectProperty"},
            {"OverrideProxyTable", 0x10, "ObjectProperty"},
        }};
    };

    struct ProxyAsset
    {
        static constexpr std::string_view Name = "ProxyAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Signature = 0x48;
            static constexpr std::uintptr_t Type = 0x50;
            static constexpr std::uintptr_t ResultType = 0x58;
            static constexpr std::uintptr_t ContextData = 0x60;
            static constexpr std::uintptr_t Guid = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Signature", 0x48, "ObjectProperty"},
            {"Type", 0x50, "ClassProperty"},
            {"ResultType", 0x58, "EnumProperty"},
            {"ContextData", 0x60, "ArrayProperty"},
            {"Guid", 0x70, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsUsingLocalSignatureData",
        }};
    };

    struct ProxyEntry
    {
        static constexpr std::string_view Name = "ProxyEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Proxy = 0x0;
            static constexpr std::uintptr_t Key = 0x8;
            static constexpr std::uintptr_t ValueStruct = 0x10;
            static constexpr std::uintptr_t OutputStructData = 0x20;
            static constexpr std::uintptr_t Comment = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Proxy", 0x0, "ObjectProperty"},
            {"Key", 0x8, "NameProperty"},
            {"ValueStruct", 0x10, "StructProperty"},
            {"OutputStructData", 0x20, "ArrayProperty"},
            {"Comment", 0x30, "StrProperty"},
        }};
    };

    struct ProxyStructOutput
    {
        static constexpr std::string_view Name = "ProxyStructOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x0;
            static constexpr std::uintptr_t OutputBinding = 0x30;
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Binding", 0x0, "StructProperty"},
            {"OutputBinding", 0x30, "StructProperty"},
            {"Value", 0x40, "StructProperty"},
        }};
    };

    struct ProxyTable
    {
        static constexpr std::string_view Name = "ProxyTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Keys = 0x28;
            static constexpr std::uintptr_t RuntimeValues = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Keys", 0x28, "ArrayProperty"},
            {"RuntimeValues", 0x38, "ArrayProperty"},
        }};
    };

    struct ProxyTableContextProperty
    {
        static constexpr std::string_view Name = "ProxyTableContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterProxyTableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct ProxyTableFunctionLibrary
    {
        static constexpr std::string_view Name = "ProxyTableFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "EvaluateProxyAsset",
            "EvaluateProxyTable",
            "MakeLookupProxy",
            "MakeLookupProxyWithOverrideTable",
        }};
    };

    struct ProxyTableGroup
    {
        static constexpr std::string_view Name = "ProxyTableGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupID = 0x0;
            static constexpr std::uintptr_t GroupName = 0x10;
            static constexpr std::uintptr_t RowGuids = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GroupID", 0x0, "StructProperty"},
            {"GroupName", 0x10, "StrProperty"},
            {"RowGuids", 0x20, "ArrayProperty"},
        }};
    };

    struct RuntimeProxyValue
    {
        static constexpr std::string_view Name = "RuntimeProxyValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyAsset = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t OutputStructData = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProxyAsset", 0x0, "ObjectProperty"},
            {"Value", 0x8, "StructProperty"},
            {"OutputStructData", 0x18, "ArrayProperty"},
        }};
    };

}
