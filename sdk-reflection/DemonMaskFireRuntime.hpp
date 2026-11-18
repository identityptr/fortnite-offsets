#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DemonMaskFireRuntime
{
    struct DemonMaskFireGadgetAnimInstance
    {
        static constexpr std::string_view Name = "DemonMaskFireGadgetAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaskBaseCCPAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Floater = 0x6A0;
            static constexpr std::uintptr_t ElapsedTime = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Floater", 0x6A0, "StructProperty"},
            {"ElapsedTime", 0x6B8, "DoubleProperty"},
        }};
    };

    struct DemonMaskLayerAnimInstance
    {
        static constexpr std::string_view Name = "DemonMaskLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t IsPlayingFire01_Alpha = 0x1180;
            static constexpr std::uintptr_t IsPlayingFire02_Alpha = 0x1188;
            static constexpr std::uintptr_t DemonMaskFirePlayerFire01MontageObject = 0x1190;
            static constexpr std::uintptr_t DemonMaskFirePlayerFire02MontageObject = 0x1198;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IsPlayingFire01_Alpha", 0x1180, "DoubleProperty"},
            {"IsPlayingFire02_Alpha", 0x1188, "DoubleProperty"},
            {"DemonMaskFirePlayerFire01MontageObject", 0x1190, "ObjectProperty"},
            {"DemonMaskFirePlayerFire02MontageObject", 0x1198, "ObjectProperty"},
        }};
    };

    struct FortPrjAthenaDemonFireMask
    {
        static constexpr std::string_view Name = "FortPrjAthenaDemonFireMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t FortPlayerPawn = 0xB88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FortPlayerPawn", 0xB88, "WeakObjectProperty"},
        }};
    };

    struct FortWeaponRangedDemonFireMask
    {
        static constexpr std::string_view Name = "FortWeaponRangedDemonFireMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t FortPlayerPawn = 0x2A98;
            static constexpr std::uintptr_t OutHits = 0x2AA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FortPlayerPawn", 0x2A98, "WeakObjectProperty"},
            {"OutHits", 0x2AA0, "ArrayProperty"},
        }};
    };

}
