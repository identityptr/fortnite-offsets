#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JethroXVUI
{
    struct JethroXV_Quickbar_ViewModel
    {
        static constexpr std::string_view Name = "JethroXV_Quickbar_ViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveWeaponSlot = 0x98;
            static constexpr std::uintptr_t CurrentTorpedoCooldownTime = 0x9C;
            static constexpr std::uintptr_t NormalizedTorpedoCooldownTime = 0xA0;
            static constexpr std::uintptr_t bShowCooldown = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActiveWeaponSlot", 0x98, "IntProperty"},
            {"CurrentTorpedoCooldownTime", 0x9C, "FloatProperty"},
            {"NormalizedTorpedoCooldownTime", 0xA0, "FloatProperty"},
            {"bShowCooldown", 0xA4, "BoolProperty"},
        }};
    };

}
