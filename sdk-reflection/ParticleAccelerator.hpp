#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ParticleAccelerator
{
    struct ParticleAccelerator_TunnelSpline
    {
        static constexpr std::string_view Name = "ParticleAccelerator_TunnelSpline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedSplineComponent = 0x940;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnedSplineComponent", 0x940, "ObjectProperty"},
        }};
    };

}
