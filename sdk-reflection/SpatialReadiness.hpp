#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpatialReadiness
{
    struct SpatialReadiness
    {
        static constexpr std::string_view Name = "SpatialReadiness";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialReadinessVolumeComponent
    {
        static constexpr std::string_view Name = "SpatialReadinessVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0xC0;
            static constexpr std::uintptr_t Bounds = 0xD0;
            static constexpr std::uintptr_t bStartReady = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Description", 0xC0, "StrProperty"},
            {"Bounds", 0xD0, "StructProperty"},
            {"bStartReady", 0x108, "BoolProperty"},
        }};
    };

}
