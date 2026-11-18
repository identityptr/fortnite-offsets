#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ContextualItemData
{
    struct ContextualItemData
    {
        static constexpr std::string_view Name = "ContextualItemData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ContextualItemDataAsset
    {
        static constexpr std::string_view Name = "ContextualItemDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Groups = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Groups", 0x28, "ArrayProperty"},
        }};
    };

    struct ContextualItemDataGroup
    {
        static constexpr std::string_view Name = "ContextualItemDataGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextQuery = 0x0;
            static constexpr std::uintptr_t Entries = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextQuery", 0x0, "StructProperty"},
            {"Entries", 0x48, "ArrayProperty"},
        }};
    };

    struct ContextualItemDataSetAsset
    {
        static constexpr std::string_view Name = "ContextualItemDataSetAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Assets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Assets", 0x28, "ArrayProperty"},
        }};
    };

}
