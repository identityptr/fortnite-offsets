#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MudGameplayRuntime
{
    struct FortPawnComponent_Mud
    {
        static constexpr std::string_view Name = "FortPawnComponent_Mud";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurieFireTag = 0xC8;
            static constexpr std::uintptr_t SlidingTag = 0xCC;
            static constexpr std::uintptr_t SprintingTag = 0xD0;
            static constexpr std::uintptr_t AttachParentCoveredEventTag = 0xD4;
            static constexpr std::uintptr_t CreatureSprintingTag = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurieFireTag", 0xC8, "StructProperty"},
            {"SlidingTag", 0xCC, "StructProperty"},
            {"SprintingTag", 0xD0, "StructProperty"},
            {"AttachParentCoveredEventTag", 0xD4, "StructProperty"},
            {"CreatureSprintingTag", 0xD8, "StructProperty"},
        }};
    };

}
