#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotionTrajectory
{
    struct CharacterTrajectoryComponent
    {
        static constexpr std::string_view Name = "CharacterTrajectoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Trajectory = 0xC0;
            static constexpr std::uintptr_t SamplingData = 0xD0;
            static constexpr std::uintptr_t CharacterTrajectoryData = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Trajectory", 0xC0, "StructProperty"},
            {"SamplingData", 0xD0, "StructProperty"},
            {"CharacterTrajectoryData", 0xF0, "StructProperty"},
        }};
    };

}
