#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CrowdVolume
{
    struct CrowdSpawner
    {
        static constexpr std::string_view Name = "CrowdSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterMeshes = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CharacterMeshes", 0x240, "ArrayProperty"},
        }};
    };

}
