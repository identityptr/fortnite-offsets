#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PolarisCoreRuntime
{
    struct PolarisChannel
    {
        static constexpr std::string_view Name = "PolarisChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakLocalPlayer = 0x38;
            static constexpr std::uintptr_t RuntimeDependencies = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeakLocalPlayer", 0x38, "WeakObjectProperty"},
            {"RuntimeDependencies", 0x40, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateFromConfig",
        }};
    };

    struct PolarisChannelConfig
    {
        static constexpr std::string_view Name = "PolarisChannelConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductId = 0x0;
            static constexpr std::uintptr_t ChannelId = 0x10;
            static constexpr std::uintptr_t DefaultProductTags = 0x20;
            static constexpr std::uintptr_t InitializationTimeout = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProductId", 0x0, "StrProperty"},
            {"ChannelId", 0x10, "StrProperty"},
            {"DefaultProductTags", 0x20, "ArrayProperty"},
            {"InitializationTimeout", 0x30, "FloatProperty"},
        }};
    };

    struct PolarisChannelConfigData
    {
        static constexpr std::string_view Name = "PolarisChannelConfigData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PolarisChannelConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestDependencies = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequestDependencies", 0x38, "ArrayProperty"},
        }};
    };

    struct PolarisFixedLocationDependencyBase
    {
        static constexpr std::string_view Name = "PolarisFixedLocationDependencyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisLocationDependencyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Location", 0x28, "StrProperty"},
        }};
    };

    struct PolarisFixedTagDependencyBase
    {
        static constexpr std::string_view Name = "PolarisFixedTagDependencyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisTagDependencyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tag", 0x28, "StrProperty"},
        }};
    };

    struct PolarisLocationDependencyBase
    {
        static constexpr std::string_view Name = "PolarisLocationDependencyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisRequestDependency";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PolarisLocationDependencyBaseRuntimeData
    {
        static constexpr std::string_view Name = "PolarisLocationDependencyBaseRuntimeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PolarisRequestDependency
    {
        static constexpr std::string_view Name = "PolarisRequestDependency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PolarisTagDependencyBase
    {
        static constexpr std::string_view Name = "PolarisTagDependencyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PolarisRequestDependency";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PolarisTagDependencyBaseRuntimeData
    {
        static constexpr std::string_view Name = "PolarisTagDependencyBaseRuntimeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
