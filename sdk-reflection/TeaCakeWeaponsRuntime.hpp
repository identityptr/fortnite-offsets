#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TeaCakeWeaponsRuntime
{
    struct FoundationDMRMythicLayerAnimInstance
    {
        static constexpr std::string_view Name = "FoundationDMRMythicLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnChargeEnd = 0x1180;
            static constexpr std::uintptr_t bOnChargeStart = 0x1181;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOnChargeEnd", 0x1180, "BoolProperty"},
            {"bOnChargeStart", 0x1181, "BoolProperty"},
        }};
    };

    struct FoundationDMRMythicWPNAnimInstance
    {
        static constexpr std::string_view Name = "FoundationDMRMythicWPNAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnChargeEnd = 0x260;
            static constexpr std::uintptr_t bOnChargeStart = 0x261;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOnChargeEnd", 0x260, "BoolProperty"},
            {"bOnChargeStart", 0x261, "BoolProperty"},
        }};
    };

    struct FoundationDMRMythicWeaponInterface
    {
        static constexpr std::string_view Name = "FoundationDMRMythicWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HeavyPistolWPNAnimInstance
    {
        static constexpr std::string_view Name = "HeavyPistolWPNAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentRotation = 0x460;
            static constexpr std::uintptr_t bIsReloading = 0x468;
            static constexpr std::uintptr_t ReloadInterpSpeed = 0x470;
            static constexpr std::uintptr_t RotationIncrement = 0x478;
            static constexpr std::uintptr_t FireInterpSpeed = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurrentRotation", 0x460, "DoubleProperty"},
            {"bIsReloading", 0x468, "BoolProperty"},
            {"ReloadInterpSpeed", 0x470, "DoubleProperty"},
            {"RotationIncrement", 0x478, "DoubleProperty"},
            {"FireInterpSpeed", 0x480, "DoubleProperty"},
        }};
    };

}
