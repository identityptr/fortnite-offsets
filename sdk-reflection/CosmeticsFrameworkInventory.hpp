#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkInventory
{
    struct CosmeticBackendItemHandle
    {
        static constexpr std::string_view Name = "CosmeticBackendItemHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticInventoryCache
    {
        static constexpr std::string_view Name = "CosmeticInventoryCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugName = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugName", 0x58, "StrProperty"},
        }};
    };

}
