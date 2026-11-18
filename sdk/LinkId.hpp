#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LinkId
{
    struct OnlineLinkId
    {
        static constexpr std::string_view Name = "OnlineLinkId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mnemonic = 0x0;
            static constexpr std::uintptr_t Version = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Mnemonic", 0x0, "StrProperty"},
            {"Version", 0x10, "IntProperty"},
        }};
    };

}
