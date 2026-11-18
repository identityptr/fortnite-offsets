#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleModsRuntime
{
    struct FortVehicleModWeaponMachineGun
    {
        static constexpr std::string_view Name = "FortVehicleModWeaponMachineGun";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRangedForVehicleMod";
        struct Offsets
        {
            static constexpr std::uintptr_t ModInstance = 0x2BF0;
            static constexpr std::uintptr_t DamageStartBehavior = 0x2BF8;
            static constexpr std::uintptr_t bFilterTargetsInSameVehicle = 0x2BF9;
            static constexpr std::uintptr_t SeatWithRoofTag = 0x2BFC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModInstance", 0x2BF0, "ObjectProperty"},
            {"DamageStartBehavior", 0x2BF8, "EnumProperty"},
            {"bFilterTargetsInSameVehicle", 0x2BF9, "BoolProperty"},
            {"SeatWithRoofTag", 0x2BFC, "StructProperty"},
        }};
    };

    struct FortVehicleModWeaponMortar
    {
        static constexpr std::string_view Name = "FortVehicleModWeaponMortar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRangedForVehicleMod";
        struct Offsets
        {
            static constexpr std::uintptr_t ModInstance = 0x2BF0;
            static constexpr std::uintptr_t DamageStartBehavior = 0x2BF8;
            static constexpr std::uintptr_t bFilterTargetsInSameVehicle = 0x2BF9;
            static constexpr std::uintptr_t SeatWithRoofTag = 0x2BFC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ModInstance", 0x2BF0, "ObjectProperty"},
            {"DamageStartBehavior", 0x2BF8, "EnumProperty"},
            {"bFilterTargetsInSameVehicle", 0x2BF9, "BoolProperty"},
            {"SeatWithRoofTag", 0x2BFC, "StructProperty"},
        }};
    };

    struct SlinkyVehicleModComponent
    {
        static constexpr std::string_view Name = "SlinkyVehicleModComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleModComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SlinkyUI = 0x1B0;
            static constexpr std::uintptr_t ChargeJumpInputAction = 0x1D0;
            static constexpr std::uintptr_t ChargeJumpLabelAppend = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlinkyUI", 0x1B0, "StructProperty"},
            {"ChargeJumpInputAction", 0x1D0, "NameProperty"},
            {"ChargeJumpLabelAppend", 0x1D8, "TextProperty"},
        }};
    };

}
