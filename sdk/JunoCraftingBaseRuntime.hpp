#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCraftingBaseRuntime
{
    struct JunoCraftingBaseSettings
    {
        static constexpr std::string_view Name = "JunoCraftingBaseSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCraftingIngredientsShopUIDataTable = 0x28;
            static constexpr std::uintptr_t JunoBuildingFrontendUIDataTable = 0x30;
            static constexpr std::uintptr_t JunoPropFrontendUIDataTable = 0x38;
            static constexpr std::uintptr_t CraftingCategoryUIData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JunoCraftingIngredientsShopUIDataTable", 0x28, "ObjectProperty"},
            {"JunoBuildingFrontendUIDataTable", 0x30, "ObjectProperty"},
            {"JunoPropFrontendUIDataTable", 0x38, "ObjectProperty"},
            {"CraftingCategoryUIData", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoCraftingCategoryUIData
    {
        static constexpr std::string_view Name = "JunoCraftingCategoryUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x30, "ArrayProperty"},
        }};
    };

}
