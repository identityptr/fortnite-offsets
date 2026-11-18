#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EnhancedChewRuntime
{
    struct FortAthenaMutator_EnhancedChew
    {
        static constexpr std::string_view Name = "FortAthenaMutator_EnhancedChew";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t EmoteAbilityTagsToCancel = 0x2F0;
            static constexpr std::uintptr_t ListOne = 0x310;
            static constexpr std::uintptr_t ListTwo = 0x320;
            static constexpr std::uintptr_t ListOneHotfix = 0x330;
            static constexpr std::uintptr_t ListTwoHotfix = 0x340;
            static constexpr std::uintptr_t DefaultMinimumDistance = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EmoteAbilityTagsToCancel", 0x2F0, "StructProperty"},
            {"ListOne", 0x310, "ArrayProperty"},
            {"ListTwo", 0x320, "ArrayProperty"},
            {"ListOneHotfix", 0x330, "ArrayProperty"},
            {"ListTwoHotfix", 0x340, "ArrayProperty"},
            {"DefaultMinimumDistance", 0x350, "FloatProperty"},
        }};
    };

}
