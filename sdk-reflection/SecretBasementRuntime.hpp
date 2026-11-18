#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SecretBasementRuntime
{
    struct FortMovementMode_GraftedCrunchyDash
    {
        static constexpr std::string_view Name = "FortMovementMode_GraftedCrunchyDash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectsToApplyOnServerActivate = 0x5A0;
            static constexpr std::uintptr_t bOmniDirectional = 0x5B0;
            static constexpr std::uintptr_t DashSpeedForward = 0x5B8;
            static constexpr std::uintptr_t DashSpeedBackward = 0x5E0;
            static constexpr std::uintptr_t DashSpeedSide = 0x608;
            static constexpr std::uintptr_t BackwardDashPitch = 0x630;
            static constexpr std::uintptr_t SideDashPitch = 0x658;
            static constexpr std::uintptr_t ForwardLateralMaxDot = 0x680;
            static constexpr std::uintptr_t BackwardLateralMaxDot = 0x6A8;
            static constexpr std::uintptr_t bDashForward = 0x6D0;
            static constexpr std::uintptr_t bDashBackward = 0x6D1;
            static constexpr std::uintptr_t bDashLeft = 0x6D2;
            static constexpr std::uintptr_t bDashRight = 0x6D3;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"EffectsToApplyOnServerActivate", 0x5A0, "ArrayProperty"},
            {"bOmniDirectional", 0x5B0, "BoolProperty"},
            {"DashSpeedForward", 0x5B8, "StructProperty"},
            {"DashSpeedBackward", 0x5E0, "StructProperty"},
            {"DashSpeedSide", 0x608, "StructProperty"},
            {"BackwardDashPitch", 0x630, "StructProperty"},
            {"SideDashPitch", 0x658, "StructProperty"},
            {"ForwardLateralMaxDot", 0x680, "StructProperty"},
            {"BackwardLateralMaxDot", 0x6A8, "StructProperty"},
            {"bDashForward", 0x6D0, "BoolProperty"},
            {"bDashBackward", 0x6D1, "BoolProperty"},
            {"bDashLeft", 0x6D2, "BoolProperty"},
            {"bDashRight", 0x6D3, "BoolProperty"},
        }};
    };

    struct GraftedCrunchyBlueprintLibrary
    {
        static constexpr std::string_view Name = "GraftedCrunchyBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
