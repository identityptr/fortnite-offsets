#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WildEstateConsumablesRuntime
{
    struct BrickSailConsumableWeaponAnimInstance
    {
        static constexpr std::string_view Name = "BrickSailConsumableWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsetAlpha = 0x370;
            static constexpr std::uintptr_t Y_Offset = 0x374;
            static constexpr std::uintptr_t TailAlpha = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OffsetAlpha", 0x370, "FloatProperty"},
            {"Y_Offset", 0x374, "FloatProperty"},
            {"TailAlpha", 0x378, "FloatProperty"},
        }};
    };

    struct DillHailLayerAnimInstance
    {
        static constexpr std::string_view Name = "DillHailLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PelvisTwist = 0x1180;
            static constexpr std::uintptr_t NW_Run_Alpha = 0x1188;
            static constexpr std::uintptr_t NotSkydiving = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PelvisTwist", 0x1180, "FloatProperty"},
            {"NW_Run_Alpha", 0x1188, "DoubleProperty"},
            {"NotSkydiving", 0x1190, "FloatProperty"},
        }};
    };

    struct SteelKiteLayerAnimInstance
    {
        static constexpr std::string_view Name = "SteelKiteLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t NW_Run_Alpha = 0x1180;
            static constexpr std::uintptr_t PeelyOffsetTwistCrouchMoving = 0x1188;
            static constexpr std::uintptr_t PeelyOffsetCrouchMoving = 0x1190;
            static constexpr std::uintptr_t PeelyOffsetPelvisRoll = 0x1198;
            static constexpr std::uintptr_t PeelyOffsetTransY = 0x11A0;
            static constexpr std::uintptr_t PeelyOffset = 0x11A8;
            static constexpr std::uintptr_t PelvisTwist = 0x11AC;
            static constexpr std::uintptr_t PeelyOffsetTwist = 0x11B0;
            static constexpr std::uintptr_t bIsCrouchMovingNotSliding = 0x11B4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"NW_Run_Alpha", 0x1180, "DoubleProperty"},
            {"PeelyOffsetTwistCrouchMoving", 0x1188, "DoubleProperty"},
            {"PeelyOffsetCrouchMoving", 0x1190, "DoubleProperty"},
            {"PeelyOffsetPelvisRoll", 0x1198, "DoubleProperty"},
            {"PeelyOffsetTransY", 0x11A0, "DoubleProperty"},
            {"PeelyOffset", 0x11A8, "FloatProperty"},
            {"PelvisTwist", 0x11AC, "FloatProperty"},
            {"PeelyOffsetTwist", 0x11B0, "FloatProperty"},
            {"bIsCrouchMovingNotSliding", 0x11B4, "BoolProperty"},
        }};
    };

}
