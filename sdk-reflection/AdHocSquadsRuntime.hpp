#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AdHocSquadsRuntime
{
    struct AdHocSquadPawnOutlineComponent
    {
        static constexpr std::string_view Name = "AdHocSquadPawnOutlineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnOutlineComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAdHocSquadsMutator = 0x110;
            static constexpr std::uintptr_t AdHocSquadId = 0x120;
            static constexpr std::uintptr_t bIsInLocalAdHocSquad = 0x121;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedAdHocSquadsMutator", 0x110, "WeakObjectProperty"},
            {"AdHocSquadId", 0x120, "ByteProperty"},
            {"bIsInLocalAdHocSquad", 0x121, "BoolProperty"},
        }};
    };

}
