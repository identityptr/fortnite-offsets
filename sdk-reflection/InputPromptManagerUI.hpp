#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InputPromptManagerUI
{
    struct ManagedInputPromptsVM
    {
        static constexpr std::string_view Name = "ManagedInputPromptsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AllKnownInputAliases = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllKnownInputAliases", 0x78, "ArrayProperty"},
        }};
    };

}
