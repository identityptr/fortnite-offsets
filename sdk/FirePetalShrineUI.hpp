#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FirePetalShrineUI
{
    struct FirePetalShrine_UIHelperComponent
    {
        static constexpr std::string_view Name = "FirePetalShrine_UIHelperComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShrineCompassBrush = 0xC0;
            static constexpr std::uintptr_t CanMarkShrinesInCompass = 0x170;
            static constexpr std::uintptr_t ShrinesMarkedCompassTime = 0x198;
            static constexpr std::uintptr_t bAnchorCompassIconOnEdges = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShrineCompassBrush", 0xC0, "StructProperty"},
            {"CanMarkShrinesInCompass", 0x170, "StructProperty"},
            {"ShrinesMarkedCompassTime", 0x198, "StructProperty"},
            {"bAnchorCompassIconOnEdges", 0x1C0, "BoolProperty"},
        }};
    };

}
