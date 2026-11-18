#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicGamesTemporary
{
    struct VerseRotation_Deprecated
    {
        static constexpr std::string_view Name = "VerseRotation_Deprecated";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Quaternion = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quaternion", 0x0, "StructProperty"},
        }};
    };

}
