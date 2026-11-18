#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ExplosiveDevice
{
    struct ExplosiveDeviceAsyncOverlapQueue
    {
        static constexpr std::string_view Name = "ExplosiveDeviceAsyncOverlapQueue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayspaceComponent_ExplosiveDeviceAsyncOverlap
    {
        static constexpr std::string_view Name = "PlayspaceComponent_ExplosiveDeviceAsyncOverlap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AsyncOverlapQueue = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AsyncOverlapQueue", 0x118, "ObjectProperty"},
        }};
    };

}
