#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamDeckTagsRuntime
{
    struct JamDeckTagsAsset
    {
        static constexpr std::string_view Name = "JamDeckTagsAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PermitJamDeckTag = 0x28;
            static constexpr std::uintptr_t RestrictJamDeckTag = 0x2C;
            static constexpr std::uintptr_t AlwaysSpawnDecksTag = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PermitJamDeckTag", 0x28, "StructProperty"},
            {"RestrictJamDeckTag", 0x2C, "StructProperty"},
            {"AlwaysSpawnDecksTag", 0x30, "StructProperty"},
        }};
    };

}
