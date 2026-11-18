#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNECloverDogRuntime
{
    struct FortCloverDogVehicle
    {
        static constexpr std::string_view Name = "FortCloverDogVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheLoopingFX = 0x2090;
            static constexpr std::uintptr_t FortJackalVehicleConfigs = 0x2098;
            static constexpr std::uintptr_t CacheAudioMovement = 0x20A0;
            static constexpr std::uintptr_t CacheAudioWind = 0x20A8;
            static constexpr std::uintptr_t PendingJumpCharge = 0x20B4;
            static constexpr std::uintptr_t SecondaryWeaponMuzzleSocket = 0x20B8;
            static constexpr std::uintptr_t bShouldCorrectYaw = 0x20BC;
            static constexpr std::uintptr_t bLockBodyRotationWhenUsingSecondary = 0x20E0;
            static constexpr std::uintptr_t bSecondaryWeaponModeToggle = 0x20E1;
            static constexpr std::uintptr_t InputActionMove = 0x20E8;
            static constexpr std::uintptr_t InputActionWeaponSwitch = 0x20F0;
            static constexpr std::uintptr_t InputActionShoot = 0x20F8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CacheLoopingFX", 0x2090, "ObjectProperty"},
            {"FortJackalVehicleConfigs", 0x2098, "ObjectProperty"},
            {"CacheAudioMovement", 0x20A0, "ObjectProperty"},
            {"CacheAudioWind", 0x20A8, "ObjectProperty"},
            {"PendingJumpCharge", 0x20B4, "FloatProperty"},
            {"SecondaryWeaponMuzzleSocket", 0x20B8, "NameProperty"},
            {"bShouldCorrectYaw", 0x20BC, "BoolProperty"},
            {"bLockBodyRotationWhenUsingSecondary", 0x20E0, "BoolProperty"},
            {"bSecondaryWeaponModeToggle", 0x20E1, "BoolProperty"},
            {"InputActionMove", 0x20E8, "ObjectProperty"},
            {"InputActionWeaponSwitch", 0x20F0, "ObjectProperty"},
            {"InputActionShoot", 0x20F8, "ObjectProperty"},
        }};
    };

}
