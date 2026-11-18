#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeEditCameraModeRuntime
{
    struct FortCreativeEditCameraController
    {
        static constexpr std::string_view Name = "FortCreativeEditCameraController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortFirstPersonCameraController";
        struct Offsets
        {
            static constexpr std::uintptr_t WantsToImmersiveEdit = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WantsToImmersiveEdit", 0x470, "StructProperty"},
        }};
    };

}
