#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TeaCakeIceGauntletsRuntime
{
    struct IceGauntletsLayerAnimInstance
    {
        static constexpr std::string_view Name = "IceGauntletsLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomPelvisTwist = 0x1180;
            static constexpr std::uintptr_t PawnAimYaw = 0x1184;
            static constexpr std::uintptr_t PawnAimPitch = 0x1188;
            static constexpr std::uintptr_t bIsFiringPrimary = 0x118C;
            static constexpr std::uintptr_t bAllowCustomMeleeTwist = 0x118D;
            static constexpr std::uintptr_t bSecondaryFire = 0x118E;
            static constexpr std::uintptr_t TeaCakeIceGauntletsSecondaryFireMontage = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CustomPelvisTwist", 0x1180, "FloatProperty"},
            {"PawnAimYaw", 0x1184, "FloatProperty"},
            {"PawnAimPitch", 0x1188, "FloatProperty"},
            {"bIsFiringPrimary", 0x118C, "BoolProperty"},
            {"bAllowCustomMeleeTwist", 0x118D, "BoolProperty"},
            {"bSecondaryFire", 0x118E, "BoolProperty"},
            {"TeaCakeIceGauntletsSecondaryFireMontage", 0x1190, "SoftObjectProperty"},
        }};
    };

}
