#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ElectroBatGameplayRuntime
{
    struct ElectroBatAttributeSet
    {
        static constexpr std::string_view Name = "ElectroBatAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t KnockbackCharge = 0x48;
            static constexpr std::uintptr_t CurrentChargeStage = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"KnockbackCharge", 0x48, "StructProperty"},
            {"CurrentChargeStage", 0x70, "StructProperty"},
        }};
    };

    struct ElectroBatLayerAnimInstance
    {
        static constexpr std::string_view Name = "ElectroBatLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAnimAssetsOverrideDuringCharging = 0x1180;
            static constexpr std::uintptr_t CustomMeleeTwist = 0x1190;
            static constexpr std::uintptr_t bChargedSwingHit = 0x1194;
            static constexpr std::uintptr_t bUserCurve01 = 0x1195;
            static constexpr std::uintptr_t bEnterChargedState = 0x1196;
            static constexpr std::uintptr_t bUserCurve03 = 0x1197;
            static constexpr std::uintptr_t bExitOutro = 0x1198;
            static constexpr std::uintptr_t ChargingTagName = 0x119C;
            static constexpr std::uintptr_t HitTagName = 0x11A0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PlayerAnimAssetsOverrideDuringCharging", 0x1180, "StructProperty"},
            {"CustomMeleeTwist", 0x1190, "FloatProperty"},
            {"bChargedSwingHit", 0x1194, "BoolProperty"},
            {"bUserCurve01", 0x1195, "BoolProperty"},
            {"bEnterChargedState", 0x1196, "BoolProperty"},
            {"bUserCurve03", 0x1197, "BoolProperty"},
            {"bExitOutro", 0x1198, "BoolProperty"},
            {"ChargingTagName", 0x119C, "StructProperty"},
            {"HitTagName", 0x11A0, "StructProperty"},
        }};
    };

    struct ElectroBatWeaponComponent
    {
        static constexpr std::string_view Name = "ElectroBatWeaponComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChargeStart = 0xC0;
            static constexpr std::uintptr_t OnChargeStop = 0xD0;
            static constexpr std::uintptr_t OnChargeIncreased = 0xE0;
            static constexpr std::uintptr_t ChargeStageAttribute = 0x108;
            static constexpr std::uintptr_t CustomSprintMMEClass = 0x148;
            static constexpr std::uintptr_t ElectroBatSprintingTag = 0x150;
            static constexpr std::uintptr_t FallDamamgeImmunityEffectClass = 0x158;
            static constexpr std::uintptr_t StartChargingEffectClass = 0x160;
            static constexpr std::uintptr_t StopChargeEffectClass = 0x168;
            static constexpr std::uintptr_t IncrementChargeEffectClass = 0x170;
            static constexpr std::uintptr_t ChargingEffectClass = 0x178;
            static constexpr std::uintptr_t PreChargeDelay = 0x180;
            static constexpr std::uintptr_t TimePerCharge = 0x1A8;
            static constexpr std::uintptr_t TotalChargeStages = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnChargeStart", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnChargeStop", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnChargeIncreased", 0xE0, "MulticastInlineDelegateProperty"},
            {"ChargeStageAttribute", 0x108, "StructProperty"},
            {"CustomSprintMMEClass", 0x148, "ClassProperty"},
            {"ElectroBatSprintingTag", 0x150, "StructProperty"},
            {"FallDamamgeImmunityEffectClass", 0x158, "ClassProperty"},
            {"StartChargingEffectClass", 0x160, "ClassProperty"},
            {"StopChargeEffectClass", 0x168, "ClassProperty"},
            {"IncrementChargeEffectClass", 0x170, "ClassProperty"},
            {"ChargingEffectClass", 0x178, "ClassProperty"},
            {"PreChargeDelay", 0x180, "StructProperty"},
            {"TimePerCharge", 0x1A8, "StructProperty"},
            {"TotalChargeStages", 0x1D0, "StructProperty"},
        }};
    };

}
