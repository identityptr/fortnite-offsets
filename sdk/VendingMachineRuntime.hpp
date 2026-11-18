#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VendingMachineRuntime
{
    struct VendingMachinePlayerControllerComponent
    {
        static constexpr std::string_view Name = "VendingMachinePlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryItemsToListenTo = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InventoryItemsToListenTo", 0xC8, "ArrayProperty"},
        }};
    };

}
