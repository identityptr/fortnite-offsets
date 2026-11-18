#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WildEstateWeaponsRuntime
{
    struct BeanDogAnimInstance
    {
        static constexpr std::string_view Name = "BeanDogAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBowWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t StringRotation = 0x480;
            static constexpr std::uintptr_t StringLocation = 0x498;
            static constexpr std::uintptr_t bIkHandR_Off = 0x4B0;
            static constexpr std::uintptr_t bExitCharging = 0x4B1;
            static constexpr std::uintptr_t bStringIK_On = 0x4B2;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StringRotation", 0x480, "StructProperty"},
            {"StringLocation", 0x498, "StructProperty"},
            {"bIkHandR_Off", 0x4B0, "BoolProperty"},
            {"bExitCharging", 0x4B1, "BoolProperty"},
            {"bStringIK_On", 0x4B2, "BoolProperty"},
        }};
    };

    struct BeanDogLayerAnimInstance
    {
        static constexpr std::string_view Name = "BeanDogLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance_ExplosiveBow";
        struct Offsets
        {
            static constexpr std::uintptr_t PelvisTwist = 0x1260;
            static constexpr std::uintptr_t ChargeBlendSpaceCrouchSpeed = 0x1264;
            static constexpr std::uintptr_t NW_Run_Alpha = 0x1268;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PelvisTwist", 0x1260, "FloatProperty"},
            {"ChargeBlendSpaceCrouchSpeed", 0x1264, "FloatProperty"},
            {"NW_Run_Alpha", 0x1268, "DoubleProperty"},
        }};
    };

    struct CoveSpiceArmGadgetWeaponAnimInstance
    {
        static constexpr std::string_view Name = "CoveSpiceArmGadgetWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationZ = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TranslationZ", 0x340, "DoubleProperty"},
        }};
    };

    struct DeerPlumLayerAnimInstance
    {
        static constexpr std::string_view Name = "DeerPlumLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChainsawLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ScooterPelvisOffset = 0x1290;
            static constexpr std::uintptr_t MeleeTwist = 0x1294;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScooterPelvisOffset", 0x1290, "FloatProperty"},
            {"MeleeTwist", 0x1294, "FloatProperty"},
        }};
    };

    struct WildEstateColdFernLayerAnimInstance
    {
        static constexpr std::string_view Name = "WildEstateColdFernLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bDoSpecialShot = 0x1180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDoSpecialShot", 0x1180, "BoolProperty"},
        }};
    };

    struct WildEstateColdFernWeaponInterface
    {
        static constexpr std::string_view Name = "WildEstateColdFernWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WildEstateLunarEelExoticAnimInstance
    {
        static constexpr std::string_view Name = "WildEstateLunarEelExoticAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bDynamics = 0x370;
            static constexpr std::uintptr_t bFired = 0x371;
            static constexpr std::uintptr_t WildEstateLunarEelFireMObject = 0x378;
            static constexpr std::uintptr_t WildEstateLunarEelReloadExoticCMMMObject = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bDynamics", 0x370, "BoolProperty"},
            {"bFired", 0x371, "BoolProperty"},
            {"WildEstateLunarEelFireMObject", 0x378, "ObjectProperty"},
            {"WildEstateLunarEelReloadExoticCMMMObject", 0x380, "ObjectProperty"},
        }};
    };

}
