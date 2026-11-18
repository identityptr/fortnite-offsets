#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DualWieldingRuntime
{
    struct FortGameplayAbility_ReloadPrimary
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ReloadPrimary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_Reload";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTimesReloaded = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumTimesReloaded", 0xB40, "IntProperty"},
        }};
    };

    struct FortGameplayAbility_ReloadSecondary
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ReloadSecondary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_Reload";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTimesReloaded = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumTimesReloaded", 0xB40, "IntProperty"},
        }};
    };

    struct FortWeaponRanged_DualWieldable
    {
        static constexpr std::string_view Name = "FortWeaponRanged_DualWieldable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondaryFireAnimation = 0x2A98;
            static constexpr std::uintptr_t SecondaryReloadAnimation = 0x2AA0;
            static constexpr std::uintptr_t BothPairedReloadAnimation = 0x2AA8;
            static constexpr std::uintptr_t SecondaryWeaponFireMontage = 0x2AB0;
            static constexpr std::uintptr_t SecondaryWeaponReloadMontage = 0x2AB8;
            static constexpr std::uintptr_t DualWieldRole = 0x2AC0;
            static constexpr std::uintptr_t bCombineWeaponFunctionality = 0x2AC1;
            static constexpr std::uintptr_t bCombinedSecondaryFiresWithPrimary = 0x2AC1;
            static constexpr std::uintptr_t bAllowDeferredSecondaryFireInputForPrimaryWeapon = 0x2AC4;
            static constexpr std::uintptr_t bAlternateWeaponFiring = 0x2AC4;
            static constexpr std::uintptr_t bSecondaryUsesPrimaryAmmo = 0x2AC4;
            static constexpr std::uintptr_t PairedWeapon = 0x2AC8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SecondaryFireAnimation", 0x2A98, "ObjectProperty"},
            {"SecondaryReloadAnimation", 0x2AA0, "ObjectProperty"},
            {"BothPairedReloadAnimation", 0x2AA8, "ObjectProperty"},
            {"SecondaryWeaponFireMontage", 0x2AB0, "ObjectProperty"},
            {"SecondaryWeaponReloadMontage", 0x2AB8, "ObjectProperty"},
            {"DualWieldRole", 0x2AC0, "EnumProperty"},
            {"bCombineWeaponFunctionality", 0x2AC1, "BoolProperty"},
            {"bCombinedSecondaryFiresWithPrimary", 0x2AC1, "BoolProperty"},
            {"bAllowDeferredSecondaryFireInputForPrimaryWeapon", 0x2AC4, "BoolProperty"},
            {"bAlternateWeaponFiring", 0x2AC4, "BoolProperty"},
            {"bSecondaryUsesPrimaryAmmo", 0x2AC4, "BoolProperty"},
            {"PairedWeapon", 0x2AC8, "WeakObjectProperty"},
        }};
    };

}
