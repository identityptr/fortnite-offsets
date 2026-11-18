#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemizationUI
{
    struct GenericInventoryHUDContainer
    {
        static constexpr std::string_view Name = "GenericInventoryHUDContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Content_HUDWidget = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Content_HUDWidget", 0x330, "ObjectProperty"},
        }};
    };

    struct GenericInventoryScreenContainer
    {
        static constexpr std::string_view Name = "GenericInventoryScreenContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInventoryScreenContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t Content_InventoryScreen = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Content_InventoryScreen", 0x508, "ObjectProperty"},
        }};
    };

    struct InventoryCollectionViewModelResolver
    {
        static constexpr std::string_view Name = "InventoryCollectionViewModelResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelContextResolver";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InventoryItemViewModelResolver
    {
        static constexpr std::string_view Name = "InventoryItemViewModelResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelContextResolver";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemizationDynamicUIDirectorComponent
    {
        static constexpr std::string_view Name = "ItemizationDynamicUIDirectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDynamicUIDirectorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemizationScenes = 0xC0;
            static constexpr std::uintptr_t InventoryScreenOverrideScene = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemizationScenes", 0xC0, "ArrayProperty"},
            {"InventoryScreenOverrideScene", 0xD0, "ObjectProperty"},
        }};
    };

    struct ItemizationUIAllowedConversionFunctions
    {
        static constexpr std::string_view Name = "ItemizationUIAllowedConversionFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
