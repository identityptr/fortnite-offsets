#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VividRazorExoticsRuntime
{
    struct FortChargingSet_SlapCannon
    {
        static constexpr std::string_view Name = "FortChargingSet_SlapCannon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortChargingSet_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Charge = 0x60;
            static constexpr std::uintptr_t MaxCharge = 0x88;
            static constexpr std::uintptr_t ChargeRate = 0xB0;
            static constexpr std::uintptr_t ServerTimeChargeIncrements = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Charge", 0x60, "StructProperty"},
            {"MaxCharge", 0x88, "StructProperty"},
            {"ChargeRate", 0xB0, "StructProperty"},
            {"ServerTimeChargeIncrements", 0xD8, "StructProperty"},
        }};
    };

}
