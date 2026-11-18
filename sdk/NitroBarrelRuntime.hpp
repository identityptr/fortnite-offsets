#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NitroBarrelRuntime
{
    struct BuildingGameplayActorNitroBarrel
    {
        static constexpr std::string_view Name = "BuildingGameplayActorNitroBarrel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnContactWithVehicleDelegate = 0x948;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnContactWithVehicleDelegate", 0x948, "MulticastInlineDelegateProperty"},
        }};
    };

}
