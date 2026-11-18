#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::STW_LagerRuntime
{
    struct FortQuestLivingWorldVolume
    {
        static constexpr std::string_view Name = "FortQuestLivingWorldVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t NoPlayerNeedsQuestFilterTags = 0x568;
            static constexpr std::uintptr_t PlayerNeedsQuestFilterTags = 0x588;
            static constexpr std::uintptr_t RequiredQuest = 0x5A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NoPlayerNeedsQuestFilterTags", 0x568, "StructProperty"},
            {"PlayerNeedsQuestFilterTags", 0x588, "StructProperty"},
            {"RequiredQuest", 0x5A8, "ObjectProperty"},
        }};
    };

}
