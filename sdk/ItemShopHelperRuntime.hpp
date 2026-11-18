#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemShopHelperRuntime
{
    struct ItemShopJsonCustomTemplateInterface
    {
        static constexpr std::string_view Name = "ItemShopJsonCustomTemplateInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemShopJsonMcpItemTemplateInterface
    {
        static constexpr std::string_view Name = "ItemShopJsonMcpItemTemplateInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemShopTableRowBase
    {
        static constexpr std::string_view Name = "ItemShopTableRowBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ProvideDataForItemShopExporter
    {
        static constexpr std::string_view Name = "ProvideDataForItemShopExporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
