#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BallisticShieldBaseRuntime
{
    struct BallisticShieldItemLayerAnimInstance
    {
        static constexpr std::string_view Name = "BallisticShieldItemLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsRush = 0x1180;
            static constexpr std::uintptr_t bIsEquipping = 0x1181;
            static constexpr std::uintptr_t bEnterLanding = 0x1182;
            static constexpr std::uintptr_t bExitLanding = 0x1183;
            static constexpr std::uintptr_t bIsShieldBlocking = 0x1184;
            static constexpr std::uintptr_t bIsStaggerBuildup = 0x1185;
            static constexpr std::uintptr_t Yaw = 0x1188;
            static constexpr std::uintptr_t ChargeAOAlpha = 0x118C;
            static constexpr std::uintptr_t GenderAndSize = 0x1190;
            static constexpr std::uintptr_t ReloadUBAlpha = 0x1194;
            static constexpr std::uintptr_t MaskLeftArmAlpha = 0x1198;
            static constexpr std::uintptr_t StaggerAmount = 0x119C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bIsRush", 0x1180, "BoolProperty"},
            {"bIsEquipping", 0x1181, "BoolProperty"},
            {"bEnterLanding", 0x1182, "BoolProperty"},
            {"bExitLanding", 0x1183, "BoolProperty"},
            {"bIsShieldBlocking", 0x1184, "BoolProperty"},
            {"bIsStaggerBuildup", 0x1185, "BoolProperty"},
            {"Yaw", 0x1188, "FloatProperty"},
            {"ChargeAOAlpha", 0x118C, "FloatProperty"},
            {"GenderAndSize", 0x1190, "IntProperty"},
            {"ReloadUBAlpha", 0x1194, "FloatProperty"},
            {"MaskLeftArmAlpha", 0x1198, "FloatProperty"},
            {"StaggerAmount", 0x119C, "FloatProperty"},
        }};
    };

    struct BallisticShieldWeaponInterface
    {
        static constexpr std::string_view Name = "BallisticShieldWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMovementMode_ELBShieldSprint
    {
        static constexpr std::string_view Name = "FortMovementMode_ELBShieldSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ELTacSprint";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantedAbility = 0x5F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GrantedAbility", 0x5F0, "SoftClassProperty"},
        }};
    };

    struct TargetingFilterTask_BShieldCharge
    {
        static constexpr std::string_view Name = "TargetingFilterTask_BShieldCharge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingFilterTask_BasicFilterTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t WalkableActorClasses = 0x28;
            static constexpr std::uintptr_t BashableActorAngle = 0x38;
            static constexpr std::uintptr_t MainTraceDistance = 0x60;
            static constexpr std::uintptr_t FloorHitZTolerance = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WalkableActorClasses", 0x28, "ArrayProperty"},
            {"BashableActorAngle", 0x38, "StructProperty"},
            {"MainTraceDistance", 0x60, "StructProperty"},
            {"FloorHitZTolerance", 0x88, "StructProperty"},
        }};
    };

}
