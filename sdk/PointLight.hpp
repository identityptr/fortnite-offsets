#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PointLight
{
    struct PointLightNativeComponent
    {
        static constexpr std::string_view Name = "PointLightNativeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShortCircuitTimelineComponent = 0x150;
            static constexpr std::uintptr_t FlickerColor = 0x170;
            static constexpr std::uintptr_t ShortCircuitMinDelay = 0x180;
            static constexpr std::uintptr_t ShortCircuitMaxDelay = 0x184;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShortCircuitTimelineComponent", 0x150, "ObjectProperty"},
            {"FlickerColor", 0x170, "StructProperty"},
            {"ShortCircuitMinDelay", 0x180, "FloatProperty"},
            {"ShortCircuitMaxDelay", 0x184, "FloatProperty"},
        }};
    };

}
