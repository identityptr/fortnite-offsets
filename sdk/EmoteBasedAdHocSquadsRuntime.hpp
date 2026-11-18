#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EmoteBasedAdHocSquadsRuntime
{
    struct FortAthenaMutator_EBAHSSquadInfo
    {
        static constexpr std::string_view Name = "FortAthenaMutator_EBAHSSquadInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t AlwaysDisplaySquadInfo = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AlwaysDisplaySquadInfo", 0x2E8, "StructProperty"},
        }};
    };

}
