#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkUtilities
{
    struct TasksOverFramesScheduleManager
    {
        static constexpr std::string_view Name = "TasksOverFramesScheduleManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
