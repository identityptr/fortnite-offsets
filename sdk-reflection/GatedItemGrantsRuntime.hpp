#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GatedItemGrantsRuntime
{
    struct FortControllerComponent_GatedItemGranter
    {
        static constexpr std::string_view Name = "FortControllerComponent_GatedItemGranter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemGrantsRegistry = 0xC8;
            static constexpr std::uintptr_t CachedObjects = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemGrantsRegistry", 0xC8, "StructProperty"},
            {"CachedObjects", 0x100, "ArrayProperty"},
        }};
    };

}
