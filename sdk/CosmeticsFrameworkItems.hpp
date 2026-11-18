#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkItems
{
    struct CosmeticDataComponent
    {
        static constexpr std::string_view Name = "CosmeticDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyContainers = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyContainers", 0xC0, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BP_AddOrOverrideProperty",
            "BP_FindProperty",
            "ResetProperties",
        }};
    };

    struct CosmeticPropertyBase
    {
        static constexpr std::string_view Name = "CosmeticPropertyBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyTag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyTag", 0x0, "StructProperty"},
        }};
    };

    struct CosmeticProperty_GameplayTag
    {
        static constexpr std::string_view Name = "CosmeticProperty_GameplayTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayTag", 0x4, "StructProperty"},
        }};
    };

    struct CosmeticProperty_Int
    {
        static constexpr std::string_view Name = "CosmeticProperty_Int";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x4, "IntProperty"},
        }};
    };

    struct CosmeticProperty_TableRow
    {
        static constexpr std::string_view Name = "CosmeticProperty_TableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TableRow = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TableRow", 0x8, "StructProperty"},
        }};
    };

    struct CosmeticProperty_Vector
    {
        static constexpr std::string_view Name = "CosmeticProperty_Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CosmeticPropertyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x8, "StructProperty"},
        }};
    };

    struct CosmeticVariantBase
    {
        static constexpr std::string_view Name = "CosmeticVariantBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VariantChannelTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariantChannelTag", 0x28, "StructProperty"},
        }};
    };

}
