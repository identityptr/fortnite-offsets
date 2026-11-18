#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AloeCroutonWeaponRuntime
{
    struct FortChargingSet_AloeCrouton
    {
        static constexpr std::string_view Name = "FortChargingSet_AloeCrouton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortChargingSet_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Charge = 0x60;
            static constexpr std::uintptr_t MaxCharge = 0x88;
            static constexpr std::uintptr_t ChargeRate = 0xB0;
            static constexpr std::uintptr_t ChargeIncrementAmount = 0xD8;
            static constexpr std::uintptr_t ChargeRegenThreshold = 0x100;
            static constexpr std::uintptr_t ServerTimeChargeIncrements = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Charge", 0x60, "StructProperty"},
            {"MaxCharge", 0x88, "StructProperty"},
            {"ChargeRate", 0xB0, "StructProperty"},
            {"ChargeIncrementAmount", 0xD8, "StructProperty"},
            {"ChargeRegenThreshold", 0x100, "StructProperty"},
            {"ServerTimeChargeIncrements", 0x128, "StructProperty"},
        }};
    };

    struct FortCosmeticStatObject_AloeCroutonCharge
    {
        static constexpr std::string_view Name = "FortCosmeticStatObject_AloeCroutonCharge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStatObject";
        struct Offsets
        {
            static constexpr std::uintptr_t StatName = 0x28;
            static constexpr std::uintptr_t CachedStatValues = 0x30;
            static constexpr std::uintptr_t OwningSubsystem = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StatName", 0x28, "NameProperty"},
            {"CachedStatValues", 0x30, "MapProperty"},
            {"OwningSubsystem", 0x40, "ObjectProperty"},
        }};
    };

}
