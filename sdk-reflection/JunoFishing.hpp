#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoFishing
{
    struct JunoFishingAnalytics
    {
        static constexpr std::string_view Name = "JunoFishingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoFishingBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoFishingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerControllerComponent_FishingAnalytics
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_FishingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerFishingTelemetryData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerFishingTelemetryData", 0xC0, "StructProperty"},
        }};
    };

}
