#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NitroUI
{
    struct NitroPlayerInfoWidget
    {
        static constexpr std::string_view Name = "NitroPlayerInfoWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NitroStateTag = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NitroStateTag", 0x380, "StructProperty"},
        }};
    };

    struct NitroVehicleFuelGaugeWidget
    {
        static constexpr std::string_view Name = "NitroVehicleFuelGaugeWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NitroActiveTag = 0x350;
            static constexpr std::uintptr_t NitroEffectTag = 0x354;
            static constexpr std::uintptr_t TargetFuelGauge = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NitroActiveTag", 0x350, "StructProperty"},
            {"NitroEffectTag", 0x354, "StructProperty"},
            {"TargetFuelGauge", 0x358, "ObjectProperty"},
        }};
    };

}
