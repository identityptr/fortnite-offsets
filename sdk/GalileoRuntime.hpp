#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GalileoRuntime
{
    struct GalileoLobsterLayerAnimInstance
    {
        static constexpr std::string_view Name = "GalileoLobsterLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance_Lobster";
        struct Offsets
        {
            static constexpr std::uintptr_t PelvisTwistAlpha = 0x670;
            static constexpr std::uintptr_t CustomPelvisTwist = 0x674;
            static constexpr std::uintptr_t ResultingPitch = 0x678;
            static constexpr std::uintptr_t BlendLowerBodyFloat = 0x680;
            static constexpr std::uintptr_t IsMeleeGuardingFloat = 0x688;
            static constexpr std::uintptr_t ResultingYaw = 0x690;
            static constexpr std::uintptr_t bIsUsingPowerAO = 0x698;
            static constexpr std::uintptr_t bIsDoubleJumpFall = 0x699;
            static constexpr std::uintptr_t bAO_BlendIn = 0x69A;
            static constexpr std::uintptr_t InMeleeTags = 0x6A0;
            static constexpr std::uintptr_t PassengerTagName = 0x6C0;
            static constexpr std::uintptr_t InMotorcycleTagName = 0x6C4;
            static constexpr std::uintptr_t HoverActiveTagName = 0x6C8;
            static constexpr std::uintptr_t GalileoLobsterEquipMAnimMontage = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"PelvisTwistAlpha", 0x670, "FloatProperty"},
            {"CustomPelvisTwist", 0x674, "FloatProperty"},
            {"ResultingPitch", 0x678, "FloatProperty"},
            {"BlendLowerBodyFloat", 0x680, "DoubleProperty"},
            {"IsMeleeGuardingFloat", 0x688, "DoubleProperty"},
            {"ResultingYaw", 0x690, "DoubleProperty"},
            {"bIsUsingPowerAO", 0x698, "BoolProperty"},
            {"bIsDoubleJumpFall", 0x699, "BoolProperty"},
            {"bAO_BlendIn", 0x69A, "BoolProperty"},
            {"InMeleeTags", 0x6A0, "StructProperty"},
            {"PassengerTagName", 0x6C0, "StructProperty"},
            {"InMotorcycleTagName", 0x6C4, "StructProperty"},
            {"HoverActiveTagName", 0x6C8, "StructProperty"},
            {"GalileoLobsterEquipMAnimMontage", 0x6D0, "ObjectProperty"},
        }};
    };

}
