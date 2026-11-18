#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnnoyedMopCodeRuntime
{
    struct AnnoyedMopPlayerAnimInstance
    {
        static constexpr std::string_view Name = "AnnoyedMopPlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsActionInput = 0x1180;
            static constexpr std::uintptr_t bIsCombo04 = 0x1180;
            static constexpr std::uintptr_t bIsInAirAttack = 0x1180;
            static constexpr std::uintptr_t bIsInAirAttackLanding = 0x1180;
            static constexpr std::uintptr_t bIsJumpAOELand = 0x1180;
            static constexpr std::uintptr_t bIsJumpAOEStart = 0x1180;
            static constexpr std::uintptr_t Combo04AOAlpha = 0x1184;
            static constexpr std::uintptr_t CurveName_UserCurve01 = 0x1188;
            static constexpr std::uintptr_t CurveName_UserCurve02 = 0x118C;
            static constexpr std::uintptr_t MontageName_AnnoyedMop_InAirAttack_M = 0x1190;
            static constexpr std::uintptr_t MontageName_Combo_04 = 0x11A0;
            static constexpr std::uintptr_t Granted_Athena_Power_ActivePower_IsActive_Tag = 0x11B0;
            static constexpr std::uintptr_t MovementMode_Falling_Tag = 0x11B4;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bIsActionInput", 0x1180, "BoolProperty"},
            {"bIsCombo04", 0x1180, "BoolProperty"},
            {"bIsInAirAttack", 0x1180, "BoolProperty"},
            {"bIsInAirAttackLanding", 0x1180, "BoolProperty"},
            {"bIsJumpAOELand", 0x1180, "BoolProperty"},
            {"bIsJumpAOEStart", 0x1180, "BoolProperty"},
            {"Combo04AOAlpha", 0x1184, "FloatProperty"},
            {"CurveName_UserCurve01", 0x1188, "NameProperty"},
            {"CurveName_UserCurve02", 0x118C, "NameProperty"},
            {"MontageName_AnnoyedMop_InAirAttack_M", 0x1190, "StrProperty"},
            {"MontageName_Combo_04", 0x11A0, "StrProperty"},
            {"Granted_Athena_Power_ActivePower_IsActive_Tag", 0x11B0, "StructProperty"},
            {"MovementMode_Falling_Tag", 0x11B4, "StructProperty"},
        }};
    };

    struct AnnoyedMopProjectileComponent
    {
        static constexpr std::string_view Name = "AnnoyedMopProjectileComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileSegmentedCollisionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentScale = 0x1A0;
            static constexpr std::uintptr_t UnscaledCollisionSegmentData = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentScale", 0x1A0, "FloatProperty"},
            {"UnscaledCollisionSegmentData", 0x1A8, "ArrayProperty"},
        }};
    };

    struct FortProjectileAnnoyedMop
    {
        static constexpr std::string_view Name = "FortProjectileAnnoyedMop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentScale = 0xAF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentScale", 0xAF8, "FloatProperty"},
        }};
    };

    struct FortProjectileCollisionSegment
    {
        static constexpr std::string_view Name = "FortProjectileCollisionSegment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CapsuleComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CapsuleHalfHeight = 0x580;
            static constexpr std::uintptr_t CapsuleRadius = 0x584;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CapsuleHalfHeight", 0x580, "FloatProperty"},
            {"CapsuleRadius", 0x584, "FloatProperty"},
        }};
    };

}
