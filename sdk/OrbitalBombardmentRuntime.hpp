#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OrbitalBombardmentRuntime
{
    struct OrbitalBombardmentSpawner
    {
        static constexpr std::string_view Name = "OrbitalBombardmentSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BombardmentPhases = 0x278;
            static constexpr std::uintptr_t BombardmentStartTime = 0x288;
            static constexpr std::uintptr_t UpdateRate = 0x290;
            static constexpr std::uintptr_t PreBombardmentDelay = 0x2B8;
            static constexpr std::uintptr_t BombardmentMaxLengthFailsafe = 0x2E0;
            static constexpr std::uintptr_t LifespanPostBombardment = 0x308;
            static constexpr std::uintptr_t MissileSpawnHeight = 0x330;
            static constexpr std::uintptr_t MissileAngle = 0x358;
            static constexpr std::uintptr_t BoundaryPaddingTop = 0x380;
            static constexpr std::uintptr_t BoundaryPaddingXY = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BombardmentPhases", 0x278, "ArrayProperty"},
            {"BombardmentStartTime", 0x288, "FloatProperty"},
            {"UpdateRate", 0x290, "StructProperty"},
            {"PreBombardmentDelay", 0x2B8, "StructProperty"},
            {"BombardmentMaxLengthFailsafe", 0x2E0, "StructProperty"},
            {"LifespanPostBombardment", 0x308, "StructProperty"},
            {"MissileSpawnHeight", 0x330, "StructProperty"},
            {"MissileAngle", 0x358, "StructProperty"},
            {"BoundaryPaddingTop", 0x380, "StructProperty"},
            {"BoundaryPaddingXY", 0x3A8, "StructProperty"},
        }};
    };

}
